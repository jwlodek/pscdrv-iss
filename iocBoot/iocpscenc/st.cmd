#!../../bin/linux-x86_64-debug/psc

#< envPaths
epicsEnvSet("ARCH","linux-x86-debug")
epicsEnvSet("IOC","iocpscenc05")
epicsEnvSet("TOP","/epics/iocs/pscdrv05")
epicsEnvSet("DEVIOCSTATS","/usr/lib/epics")
epicsEnvSet("CAPUTLOG","/usr/lib/epics")
epicsEnvSet("EPICS_BASE","/usr/lib/epics")

epicsEnvSet("IOCNAME", "iocpscenc05")

cd ${TOP}

epicsEnvSet("ENGINEER","rkadyrov x2421")
epicsEnvSet("LOCATION","08-ID FOE")

## Register all support components
dbLoadDatabase("dbd/psc.dbd",0,0)
psc_registerRecordDeviceDriver(pdbbase) 

## Load record instances for xf08id-enc09
dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc09,Chan=1,ID=51")
dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc09,Chan=2,ID=52")
dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc09,Chan=3,ID=53")
dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc09,Chan=4,ID=54")
dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc09,Chan=DI,ID=55")
dbLoadRecords("db/EncoderTx.db","Sys=XF:08IDA-CT,Dev=Enc09")
dbLoadRecords("db/EncoderSts.db","Sys=XF:08IDA-CT,Dev=Enc09")
dbLoadRecords("db/iocAdminSoft.db","IOC=XF:08IDA-CT{IOC:PB05}")

createPSC("TxEnc09", "xf08ida-enpb2.nsls2.bnl.local", 7,0) 
createPSC("RxEnc09", "xf08ida-enpb2.nsls2.bnl.local", 20,1) 

## Load record instances for xf08id-enc20
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDB-CT,Dev=Enc20,Chan=1,ID=51")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDB-CT,Dev=Enc20,Chan=2,ID=52")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDB-CT,Dev=Enc20,Chan=3,ID=53")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDB-CT,Dev=Enc20,Chan=4,ID=54")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDB-CT,Dev=Enc20,Chan=DI,ID=55")
#dbLoadRecords("db/EncoderTx.db","Sys=XF:08IDB-CT,Dev=Enc20")
#dbLoadRecords("db/EncoderSts.db","Sys=XF:08IDB-CT,Dev=Enc20")
#dbLoadRecords("db/iocAdminSoft.db","IOC=XF:08IDB-CT{IOC:PB06}")

#createPSC("TxEnc20", "10.8.3.50", 7,0)
#createPSC("RxEnc20", "10.8.3.50", 20,1)

## Load record instances for xf08id-enc10
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc10,Chan=1,ID=51")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc10,Chan=2,ID=52")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc10,Chan=3,ID=53")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc10,Chan=4,ID=54")
#dbLoadRecords("db/EncoderRx.db","Sys=XF:08IDA-CT,Dev=Enc10,Chan=DI,ID=55")
#dbLoadRecords("db/EncoderTx.db","Sys=XF:08IDA-CT,Dev=Enc10")
#dbLoadRecords("db/EncoderSts.db","Sys=XF:08IDA-CT,Dev=Enc10")
#
#createPSC("TxEnc10", "10.8.3.40", 7,0)
#createPSC("RxEnc10", "10.8.3.40", 20,1)

#asSetFilename("${TOP}/DEFAULT.acf")

system("install -d ${TOP}/as")
system("install -m 777 -d ${TOP}/as/save")
system("install -m 777 -d ${TOP}/as/req")

### Save/Restore ###
dbLoadRecords("db/save_restoreStatus.db", "P=XF:08IDA-CT{IOC:${IOCNAME}}")
save_restoreSet_status_prefix("XF:08IDA-CT{IOC:${IOCNAME}}")
set_savefile_path("${TOP}/as","/save")
set_requestfile_path("${TOP}/as","/req")

set_pass0_restoreFile("ioc_settings.sav")
set_pass0_restoreFile("ioc_values.sav")

var(PSCDebug, 2)

< /epics/common/xf08ida-ioc1-netsetup.cmd
iocInit()

#dbl > /cf-update/xf08ida-ioc1.pscdrv05.dbl
#system "cp records.dbl /cf-update/$HOSTNAME.$IOCNAME.dbl"

### Save/Restore ###
makeAutosaveFileFromDbInfo("${TOP}/as/req/ioc_settings.req", "autosaveFields_pass0")
makeAutosaveFileFromDbInfo("${TOP}/as/req/ioc_values.req", "autosaveFields")

create_monitor_set("ioc_settings.req", 5, "")
create_monitor_set("ioc_values.req", 5, "")

#caPutLogInit("10.0.152.133:7004", 1)

