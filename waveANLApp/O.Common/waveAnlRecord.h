/* waveAnlRecord.h generated from waveAnlRecord.dbd */

#ifndef INC_waveAnlRecord_H
#define INC_waveAnlRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

typedef struct waveAnlRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    unambiguous_dset    *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    epicsUInt8          bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    epicsFloat64        max;        /* Maximum value in data set */
    epicsFloat64        min;        /* Minimum value in data set */
    epicsFloat64        pkpk;       /* Peak to peak value data set */
    epicsFloat64        mean;       /* Mean value of data set */
    epicsFloat64        var;        /* Variance of data set */
    epicsFloat64        sdev;       /* Standard deviation of data set */
    epicsFloat64        madv;       /* Mean absolute deviation of data set */
    epicsFloat64        fwhm;       /* Full width half maximum */
    epicsUInt32         nelm;       /* Max umber of elements */
    epicsUInt32         nuse;       /* Number of used elements */
    double * xptr;                  /* X axis scale array pointer */
    epicsFloat64        xres;       /* X axis resoultion of samples */
    DBLINK              xrsl;       /* X axis resoultion location */
    epicsFloat64        oxrs;       /* Old X axis resoultion of samples */
    epicsFloat64        xoff;       /* X axis offset */
    DBLINK              xofl;       /* X axis offset location */
    epicsFloat64        oxof;       /* Old X axis offset location */
    epicsFloat64        bgri;       /* Beginning of region of interest */
    epicsFloat64        enri;       /* End of region of interest */
    epicsUInt32         bgix;       /* Index of beginning of region of interest */
    epicsUInt32         enix;       /* Index of end of region of interest */
    epicsFloat64        thld;       /* Threshold */
    epicsFloat64        blof;       /* Baseline offset value */
    DBLINK              blol;       /* Baseline offset location */
    double * bptr;                  /* Buffer Pointer */
    epicsInt32          sadr;       /* Subroutine Address */
    char                inam[40];   /* Init Subr. Name */
    char                snam[40];   /* Process Subroutine Name */
    epicsInt16          pass;       /* Pass number for usr subrtn */
    epicsEnum16         brsv;       /* Bad Return Severity */
    double * val;                   /* Ptr to output array */
    epicsFloat64        vala;       /* User value A */
    epicsFloat64        valb;       /* User value B */
    epicsFloat64        valc;       /* User value C */
    epicsFloat64        vald;       /* User value D */
    epicsFloat64        vale;       /* User value E */
    epicsFloat64        valf;       /* User value F */
    epicsFloat64        valg;       /* User value G */
    epicsFloat64        valh;       /* User value H */
    DBLINK              inp;        /* Input Specification */
    DBLINK              inpa;       /* User Input Link A */
    DBLINK              inpb;       /* User Input Link B */
    DBLINK              inpc;       /* User Input Link C */
    DBLINK              inpd;       /* User Input Link D */
    DBLINK              inpe;       /* User Input Link E */
    DBLINK              inpf;       /* User Input Link F */
    DBLINK              inpg;       /* User Input Link G */
    DBLINK              inph;       /* User Input Link H */
    epicsFloat64        a;          /* Value of User Input A */
    epicsFloat64        b;          /* Value of User Input B */
    epicsFloat64        c;          /* Value of User Input C */
    epicsFloat64        d;          /* Value of User Input D */
    epicsFloat64        e;          /* Value of User Input E */
    epicsFloat64        f;          /* Value of User Input F */
    epicsFloat64        g;          /* Value of User Input G */
    epicsFloat64        h;          /* Value of User Input H */
    epicsInt16          prec;       /* Display Precision */
    char                egux[16];   /* X Axis Engineering Units */
    epicsFloat32        horx;       /* X Axis High Operating Range */
    epicsFloat32        lorx;       /* X Axis Low Operating Range */
    char                eguy[16];   /* Y Axis Engineering Units */
    epicsFloat32        hory;       /* Y Axis High Operating Range */
    epicsFloat32        lory;       /* Y Axis Low Operating Range */
} waveAnlRecord;

typedef enum {
	waveAnlRecordNAME = 0,
	waveAnlRecordDESC = 1,
	waveAnlRecordASG = 2,
	waveAnlRecordSCAN = 3,
	waveAnlRecordPINI = 4,
	waveAnlRecordPHAS = 5,
	waveAnlRecordEVNT = 6,
	waveAnlRecordTSE = 7,
	waveAnlRecordTSEL = 8,
	waveAnlRecordDTYP = 9,
	waveAnlRecordDISV = 10,
	waveAnlRecordDISA = 11,
	waveAnlRecordSDIS = 12,
	waveAnlRecordMLOK = 13,
	waveAnlRecordMLIS = 14,
	waveAnlRecordBKLNK = 15,
	waveAnlRecordDISP = 16,
	waveAnlRecordPROC = 17,
	waveAnlRecordSTAT = 18,
	waveAnlRecordSEVR = 19,
	waveAnlRecordNSTA = 20,
	waveAnlRecordNSEV = 21,
	waveAnlRecordACKS = 22,
	waveAnlRecordACKT = 23,
	waveAnlRecordDISS = 24,
	waveAnlRecordLCNT = 25,
	waveAnlRecordPACT = 26,
	waveAnlRecordPUTF = 27,
	waveAnlRecordRPRO = 28,
	waveAnlRecordASP = 29,
	waveAnlRecordPPN = 30,
	waveAnlRecordPPNR = 31,
	waveAnlRecordSPVT = 32,
	waveAnlRecordRSET = 33,
	waveAnlRecordDSET = 34,
	waveAnlRecordDPVT = 35,
	waveAnlRecordRDES = 36,
	waveAnlRecordLSET = 37,
	waveAnlRecordPRIO = 38,
	waveAnlRecordTPRO = 39,
	waveAnlRecordBKPT = 40,
	waveAnlRecordUDF = 41,
	waveAnlRecordUDFS = 42,
	waveAnlRecordTIME = 43,
	waveAnlRecordFLNK = 44,
	waveAnlRecordMAX = 45,
	waveAnlRecordMIN = 46,
	waveAnlRecordPKPK = 47,
	waveAnlRecordMEAN = 48,
	waveAnlRecordVAR = 49,
	waveAnlRecordSDEV = 50,
	waveAnlRecordMADV = 51,
	waveAnlRecordFWHM = 52,
	waveAnlRecordNELM = 53,
	waveAnlRecordNUSE = 54,
	waveAnlRecordXPTR = 55,
	waveAnlRecordXRES = 56,
	waveAnlRecordXRSL = 57,
	waveAnlRecordOXRS = 58,
	waveAnlRecordXOFF = 59,
	waveAnlRecordXOFL = 60,
	waveAnlRecordOXOF = 61,
	waveAnlRecordBGRI = 62,
	waveAnlRecordENRI = 63,
	waveAnlRecordBGIX = 64,
	waveAnlRecordENIX = 65,
	waveAnlRecordTHLD = 66,
	waveAnlRecordBLOF = 67,
	waveAnlRecordBLOL = 68,
	waveAnlRecordBPTR = 69,
	waveAnlRecordSADR = 70,
	waveAnlRecordINAM = 71,
	waveAnlRecordSNAM = 72,
	waveAnlRecordPASS = 73,
	waveAnlRecordBRSV = 74,
	waveAnlRecordVAL = 75,
	waveAnlRecordVALA = 76,
	waveAnlRecordVALB = 77,
	waveAnlRecordVALC = 78,
	waveAnlRecordVALD = 79,
	waveAnlRecordVALE = 80,
	waveAnlRecordVALF = 81,
	waveAnlRecordVALG = 82,
	waveAnlRecordVALH = 83,
	waveAnlRecordINP = 84,
	waveAnlRecordINPA = 85,
	waveAnlRecordINPB = 86,
	waveAnlRecordINPC = 87,
	waveAnlRecordINPD = 88,
	waveAnlRecordINPE = 89,
	waveAnlRecordINPF = 90,
	waveAnlRecordINPG = 91,
	waveAnlRecordINPH = 92,
	waveAnlRecordA = 93,
	waveAnlRecordB = 94,
	waveAnlRecordC = 95,
	waveAnlRecordD = 96,
	waveAnlRecordE = 97,
	waveAnlRecordF = 98,
	waveAnlRecordG = 99,
	waveAnlRecordH = 100,
	waveAnlRecordPREC = 101,
	waveAnlRecordEGUX = 102,
	waveAnlRecordHORX = 103,
	waveAnlRecordLORX = 104,
	waveAnlRecordEGUY = 105,
	waveAnlRecordHORY = 106,
	waveAnlRecordLORY = 107
} waveAnlFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int waveAnlRecordSizeOffset(dbRecordType *prt)
{
    waveAnlRecord *prec = 0;

    if (prt->no_fields != 108) {
        cantProceed("IOC build or installation error:\n"
            "    The waveAnlRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 108.\n",
            prt->no_fields);
    }
    prt->papFldDes[waveAnlRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[waveAnlRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[waveAnlRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[waveAnlRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[waveAnlRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[waveAnlRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[waveAnlRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[waveAnlRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[waveAnlRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[waveAnlRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[waveAnlRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[waveAnlRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[waveAnlRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[waveAnlRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[waveAnlRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[waveAnlRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[waveAnlRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[waveAnlRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[waveAnlRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[waveAnlRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[waveAnlRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[waveAnlRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[waveAnlRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[waveAnlRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[waveAnlRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[waveAnlRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[waveAnlRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[waveAnlRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[waveAnlRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[waveAnlRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[waveAnlRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[waveAnlRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[waveAnlRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[waveAnlRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[waveAnlRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[waveAnlRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[waveAnlRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[waveAnlRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[waveAnlRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[waveAnlRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[waveAnlRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[waveAnlRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[waveAnlRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[waveAnlRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[waveAnlRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[waveAnlRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[waveAnlRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[waveAnlRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[waveAnlRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[waveAnlRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[waveAnlRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[waveAnlRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[waveAnlRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[waveAnlRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[waveAnlRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[waveAnlRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[waveAnlRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[waveAnlRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[waveAnlRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[waveAnlRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[waveAnlRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[waveAnlRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[waveAnlRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[waveAnlRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[waveAnlRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[waveAnlRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[waveAnlRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[waveAnlRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[waveAnlRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[waveAnlRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[waveAnlRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[waveAnlRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[waveAnlRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[waveAnlRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[waveAnlRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[waveAnlRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[waveAnlRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[waveAnlRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[waveAnlRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[waveAnlRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[waveAnlRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[waveAnlRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[waveAnlRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[waveAnlRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[waveAnlRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[waveAnlRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[waveAnlRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[waveAnlRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[waveAnlRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[waveAnlRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[waveAnlRecordMAX]->size = sizeof(prec->max);
    prt->papFldDes[waveAnlRecordMAX]->offset = (unsigned short)((char *)&prec->max - (char *)prec);
    prt->papFldDes[waveAnlRecordMIN]->size = sizeof(prec->min);
    prt->papFldDes[waveAnlRecordMIN]->offset = (unsigned short)((char *)&prec->min - (char *)prec);
    prt->papFldDes[waveAnlRecordPKPK]->size = sizeof(prec->pkpk);
    prt->papFldDes[waveAnlRecordPKPK]->offset = (unsigned short)((char *)&prec->pkpk - (char *)prec);
    prt->papFldDes[waveAnlRecordMEAN]->size = sizeof(prec->mean);
    prt->papFldDes[waveAnlRecordMEAN]->offset = (unsigned short)((char *)&prec->mean - (char *)prec);
    prt->papFldDes[waveAnlRecordVAR]->size = sizeof(prec->var);
    prt->papFldDes[waveAnlRecordVAR]->offset = (unsigned short)((char *)&prec->var - (char *)prec);
    prt->papFldDes[waveAnlRecordSDEV]->size = sizeof(prec->sdev);
    prt->papFldDes[waveAnlRecordSDEV]->offset = (unsigned short)((char *)&prec->sdev - (char *)prec);
    prt->papFldDes[waveAnlRecordMADV]->size = sizeof(prec->madv);
    prt->papFldDes[waveAnlRecordMADV]->offset = (unsigned short)((char *)&prec->madv - (char *)prec);
    prt->papFldDes[waveAnlRecordFWHM]->size = sizeof(prec->fwhm);
    prt->papFldDes[waveAnlRecordFWHM]->offset = (unsigned short)((char *)&prec->fwhm - (char *)prec);
    prt->papFldDes[waveAnlRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[waveAnlRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[waveAnlRecordNUSE]->size = sizeof(prec->nuse);
    prt->papFldDes[waveAnlRecordNUSE]->offset = (unsigned short)((char *)&prec->nuse - (char *)prec);
    prt->papFldDes[waveAnlRecordXPTR]->size = sizeof(prec->xptr);
    prt->papFldDes[waveAnlRecordXPTR]->offset = (unsigned short)((char *)&prec->xptr - (char *)prec);
    prt->papFldDes[waveAnlRecordXRES]->size = sizeof(prec->xres);
    prt->papFldDes[waveAnlRecordXRES]->offset = (unsigned short)((char *)&prec->xres - (char *)prec);
    prt->papFldDes[waveAnlRecordXRSL]->size = sizeof(prec->xrsl);
    prt->papFldDes[waveAnlRecordXRSL]->offset = (unsigned short)((char *)&prec->xrsl - (char *)prec);
    prt->papFldDes[waveAnlRecordOXRS]->size = sizeof(prec->oxrs);
    prt->papFldDes[waveAnlRecordOXRS]->offset = (unsigned short)((char *)&prec->oxrs - (char *)prec);
    prt->papFldDes[waveAnlRecordXOFF]->size = sizeof(prec->xoff);
    prt->papFldDes[waveAnlRecordXOFF]->offset = (unsigned short)((char *)&prec->xoff - (char *)prec);
    prt->papFldDes[waveAnlRecordXOFL]->size = sizeof(prec->xofl);
    prt->papFldDes[waveAnlRecordXOFL]->offset = (unsigned short)((char *)&prec->xofl - (char *)prec);
    prt->papFldDes[waveAnlRecordOXOF]->size = sizeof(prec->oxof);
    prt->papFldDes[waveAnlRecordOXOF]->offset = (unsigned short)((char *)&prec->oxof - (char *)prec);
    prt->papFldDes[waveAnlRecordBGRI]->size = sizeof(prec->bgri);
    prt->papFldDes[waveAnlRecordBGRI]->offset = (unsigned short)((char *)&prec->bgri - (char *)prec);
    prt->papFldDes[waveAnlRecordENRI]->size = sizeof(prec->enri);
    prt->papFldDes[waveAnlRecordENRI]->offset = (unsigned short)((char *)&prec->enri - (char *)prec);
    prt->papFldDes[waveAnlRecordBGIX]->size = sizeof(prec->bgix);
    prt->papFldDes[waveAnlRecordBGIX]->offset = (unsigned short)((char *)&prec->bgix - (char *)prec);
    prt->papFldDes[waveAnlRecordENIX]->size = sizeof(prec->enix);
    prt->papFldDes[waveAnlRecordENIX]->offset = (unsigned short)((char *)&prec->enix - (char *)prec);
    prt->papFldDes[waveAnlRecordTHLD]->size = sizeof(prec->thld);
    prt->papFldDes[waveAnlRecordTHLD]->offset = (unsigned short)((char *)&prec->thld - (char *)prec);
    prt->papFldDes[waveAnlRecordBLOF]->size = sizeof(prec->blof);
    prt->papFldDes[waveAnlRecordBLOF]->offset = (unsigned short)((char *)&prec->blof - (char *)prec);
    prt->papFldDes[waveAnlRecordBLOL]->size = sizeof(prec->blol);
    prt->papFldDes[waveAnlRecordBLOL]->offset = (unsigned short)((char *)&prec->blol - (char *)prec);
    prt->papFldDes[waveAnlRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[waveAnlRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[waveAnlRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[waveAnlRecordSADR]->offset = (unsigned short)((char *)&prec->sadr - (char *)prec);
    prt->papFldDes[waveAnlRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[waveAnlRecordINAM]->offset = (unsigned short)((char *)&prec->inam - (char *)prec);
    prt->papFldDes[waveAnlRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[waveAnlRecordSNAM]->offset = (unsigned short)((char *)&prec->snam - (char *)prec);
    prt->papFldDes[waveAnlRecordPASS]->size = sizeof(prec->pass);
    prt->papFldDes[waveAnlRecordPASS]->offset = (unsigned short)((char *)&prec->pass - (char *)prec);
    prt->papFldDes[waveAnlRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[waveAnlRecordBRSV]->offset = (unsigned short)((char *)&prec->brsv - (char *)prec);
    prt->papFldDes[waveAnlRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[waveAnlRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[waveAnlRecordVALA]->size = sizeof(prec->vala);
    prt->papFldDes[waveAnlRecordVALA]->offset = (unsigned short)((char *)&prec->vala - (char *)prec);
    prt->papFldDes[waveAnlRecordVALB]->size = sizeof(prec->valb);
    prt->papFldDes[waveAnlRecordVALB]->offset = (unsigned short)((char *)&prec->valb - (char *)prec);
    prt->papFldDes[waveAnlRecordVALC]->size = sizeof(prec->valc);
    prt->papFldDes[waveAnlRecordVALC]->offset = (unsigned short)((char *)&prec->valc - (char *)prec);
    prt->papFldDes[waveAnlRecordVALD]->size = sizeof(prec->vald);
    prt->papFldDes[waveAnlRecordVALD]->offset = (unsigned short)((char *)&prec->vald - (char *)prec);
    prt->papFldDes[waveAnlRecordVALE]->size = sizeof(prec->vale);
    prt->papFldDes[waveAnlRecordVALE]->offset = (unsigned short)((char *)&prec->vale - (char *)prec);
    prt->papFldDes[waveAnlRecordVALF]->size = sizeof(prec->valf);
    prt->papFldDes[waveAnlRecordVALF]->offset = (unsigned short)((char *)&prec->valf - (char *)prec);
    prt->papFldDes[waveAnlRecordVALG]->size = sizeof(prec->valg);
    prt->papFldDes[waveAnlRecordVALG]->offset = (unsigned short)((char *)&prec->valg - (char *)prec);
    prt->papFldDes[waveAnlRecordVALH]->size = sizeof(prec->valh);
    prt->papFldDes[waveAnlRecordVALH]->offset = (unsigned short)((char *)&prec->valh - (char *)prec);
    prt->papFldDes[waveAnlRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[waveAnlRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[waveAnlRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[waveAnlRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[waveAnlRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[waveAnlRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[waveAnlRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[waveAnlRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[waveAnlRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[waveAnlRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[waveAnlRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[waveAnlRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[waveAnlRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[waveAnlRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[waveAnlRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[waveAnlRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[waveAnlRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[waveAnlRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[waveAnlRecordA]->size = sizeof(prec->a);
    prt->papFldDes[waveAnlRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[waveAnlRecordB]->size = sizeof(prec->b);
    prt->papFldDes[waveAnlRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[waveAnlRecordC]->size = sizeof(prec->c);
    prt->papFldDes[waveAnlRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[waveAnlRecordD]->size = sizeof(prec->d);
    prt->papFldDes[waveAnlRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[waveAnlRecordE]->size = sizeof(prec->e);
    prt->papFldDes[waveAnlRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[waveAnlRecordF]->size = sizeof(prec->f);
    prt->papFldDes[waveAnlRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[waveAnlRecordG]->size = sizeof(prec->g);
    prt->papFldDes[waveAnlRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[waveAnlRecordH]->size = sizeof(prec->h);
    prt->papFldDes[waveAnlRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[waveAnlRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[waveAnlRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[waveAnlRecordEGUX]->size = sizeof(prec->egux);
    prt->papFldDes[waveAnlRecordEGUX]->offset = (unsigned short)((char *)&prec->egux - (char *)prec);
    prt->papFldDes[waveAnlRecordHORX]->size = sizeof(prec->horx);
    prt->papFldDes[waveAnlRecordHORX]->offset = (unsigned short)((char *)&prec->horx - (char *)prec);
    prt->papFldDes[waveAnlRecordLORX]->size = sizeof(prec->lorx);
    prt->papFldDes[waveAnlRecordLORX]->offset = (unsigned short)((char *)&prec->lorx - (char *)prec);
    prt->papFldDes[waveAnlRecordEGUY]->size = sizeof(prec->eguy);
    prt->papFldDes[waveAnlRecordEGUY]->offset = (unsigned short)((char *)&prec->eguy - (char *)prec);
    prt->papFldDes[waveAnlRecordHORY]->size = sizeof(prec->hory);
    prt->papFldDes[waveAnlRecordHORY]->offset = (unsigned short)((char *)&prec->hory - (char *)prec);
    prt->papFldDes[waveAnlRecordLORY]->size = sizeof(prec->lory);
    prt->papFldDes[waveAnlRecordLORY]->offset = (unsigned short)((char *)&prec->lory - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(waveAnlRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_waveAnlRecord_H */
