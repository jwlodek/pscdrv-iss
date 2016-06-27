/*************************************************************************\
* Copyright (c) 2014 Brookhaven Science Assoc. as operator of
      Brookhaven National Laboratory.
* EPICS BASE is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

#ifdef BUILD_HOST
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#else /* BUILD_HOST */
#include "lwip/opt.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/mem.h"

#endif /* BUILD_HOST */

#include "pscmsg.h"

struct psc_header {
    uint8_t P;
    uint8_t S;
    uint16_t mid;
    uint32_t mlen;
};

union psc_header_buf {
    struct psc_header M;
    char B[sizeof(struct psc_header)];
};

int psc_sendall(int sock,
                void *buf,
                size_t buflen,
                int flags)
{
    while(buflen) {
        ssize_t ret = send(sock, buf, buflen, flags);
        if(ret<0) {
            return errno;
        } else if(ret==0) {
            return ENOTCONN;
        }
        buf += ret;
        buflen -= ret;
    }
    return 0;
}

int psc_recvall(int sock,
                void *buf,
                size_t buflen,
                int flags)
{
    while(buflen) {
        ssize_t ret = recv(sock, buf, buflen, flags);
        if(ret<0) {
            return errno;
        } else if(ret==0) {
            return ENOTCONN;
        }
        buf += ret;
        buflen -= ret;
    }
    return 0;
}

int psc_recvskip(int sock,
                size_t len,
                int flags)
{
    int ret;
    char buf[128];
    while(len>128 && !(ret=psc_recvall(sock, buf, 128, flags)))
        len -= 128;
    return psc_recvall(sock, buf, len, flags);
}

int psc_sendhead(int sock,
                 uint16_t msgid,
                 uint32_t msglen,
                 int flags)
{
    union psc_header_buf buf;
    buf.M.P = 'P';
    buf.M.S = 'S';
    buf.M.mid = htons(msgid);
    buf.M.mlen = htonl(msglen);

    return psc_sendall(sock, buf.B, sizeof(buf.B), flags);
}

int psc_sendmsg(int sock,
                uint16_t msgid,
                void *buf,
                uint32_t msglen,
                int flags)
{
    int ret;

    ret = psc_sendhead(sock, msgid, msglen, flags);
    if(ret)
        return ret;

    return psc_sendall(sock, buf, msglen, flags);
}

int psc_sendmsgsingle(int sock,
                      uint16_t msgid,
                      uint32_t regid,
                      void *buf,
                      uint32_t msglen,
                      int flags)
{
    int ret;

    ret = psc_sendhead(sock, msgid, msglen+4, 0);
    if(ret)
        return ret;

    regid = htonl(regid);

    ret = psc_sendall(sock, (void*)&regid, 4, 0);
    if(ret)
        return ret;

    return psc_sendall(sock, buf, msglen, 0);
}

int psc_recvhead(int sock,
                 uint16_t *msgid,
                 uint32_t *msglen,
                 int flags)
{
    int ret;
    union psc_header_buf buf;

    ret = psc_recvall(sock, buf.B, sizeof(buf.B), flags);
    if(ret)
        return ret;

    if(buf.M.P!='P' || buf.M.S!='S')
        return EIO;

    *msgid = ntohs(buf.M.mid);
    *msglen= ntohl(buf.M.mlen);
    return 0;
}

int psc_recvmsg(int sock,
                uint16_t *msgid,
                void *buf,
                uint32_t *msglen,
                int flags)
{
    int ret;
    uint16_t mid;
    uint32_t mlen, maxlen = *msglen;
    size_t rlen;

    ret = psc_recvhead(sock, &mid, &mlen, flags);
    if(ret)
        goto done;

    rlen = mlen>maxlen ? maxlen : mlen;
    ret = psc_recvall(sock, buf, rlen, flags);
    if(ret)
        goto done;

    if(rlen<mlen)
        ret=psc_recvskip(sock, mlen-rlen, flags);

    *msgid = mid;
    *msglen = rlen;
done:
    return ret;
}
