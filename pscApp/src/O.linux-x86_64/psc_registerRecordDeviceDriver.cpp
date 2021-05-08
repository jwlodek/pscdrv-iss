/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/psc.dbd */

#include <string.h>
#ifndef USE_TYPED_RSET
#  define USE_TYPED_RSET
#endif
#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"
#include "recSup.h"

extern "C" {

epicsShareExtern typed_rset *pvar_rset_aSubRSET, *pvar_rset_aaiRSET,
    *pvar_rset_aaoRSET, *pvar_rset_aiRSET, *pvar_rset_aoRSET,
    *pvar_rset_biRSET, *pvar_rset_boRSET, *pvar_rset_calcRSET,
    *pvar_rset_calcoutRSET, *pvar_rset_compressRSET,
    *pvar_rset_dfanoutRSET, *pvar_rset_eventRSET, *pvar_rset_fanoutRSET,
    *pvar_rset_histogramRSET, *pvar_rset_int64inRSET,
    *pvar_rset_int64outRSET, *pvar_rset_longinRSET,
    *pvar_rset_longoutRSET, *pvar_rset_lsiRSET, *pvar_rset_lsoRSET,
    *pvar_rset_mbbiRSET, *pvar_rset_mbbiDirectRSET, *pvar_rset_mbboRSET,
    *pvar_rset_mbboDirectRSET, *pvar_rset_permissiveRSET,
    *pvar_rset_printfRSET, *pvar_rset_selRSET, *pvar_rset_seqRSET,
    *pvar_rset_stateRSET, *pvar_rset_stringinRSET,
    *pvar_rset_stringoutRSET, *pvar_rset_subRSET, *pvar_rset_subArrayRSET,
    *pvar_rset_waveAnlRSET, *pvar_rset_waveformRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_aSubRecordSizeOffset,
    pvar_func_aaiRecordSizeOffset, pvar_func_aaoRecordSizeOffset,
    pvar_func_aiRecordSizeOffset, pvar_func_aoRecordSizeOffset,
    pvar_func_biRecordSizeOffset, pvar_func_boRecordSizeOffset,
    pvar_func_calcRecordSizeOffset, pvar_func_calcoutRecordSizeOffset,
    pvar_func_compressRecordSizeOffset, pvar_func_dfanoutRecordSizeOffset,
    pvar_func_eventRecordSizeOffset, pvar_func_fanoutRecordSizeOffset,
    pvar_func_histogramRecordSizeOffset,
    pvar_func_int64inRecordSizeOffset, pvar_func_int64outRecordSizeOffset,
    pvar_func_longinRecordSizeOffset, pvar_func_longoutRecordSizeOffset,
    pvar_func_lsiRecordSizeOffset, pvar_func_lsoRecordSizeOffset,
    pvar_func_mbbiRecordSizeOffset, pvar_func_mbbiDirectRecordSizeOffset,
    pvar_func_mbboRecordSizeOffset, pvar_func_mbboDirectRecordSizeOffset,
    pvar_func_permissiveRecordSizeOffset,
    pvar_func_printfRecordSizeOffset, pvar_func_selRecordSizeOffset,
    pvar_func_seqRecordSizeOffset, pvar_func_stateRecordSizeOffset,
    pvar_func_stringinRecordSizeOffset,
    pvar_func_stringoutRecordSizeOffset, pvar_func_subRecordSizeOffset,
    pvar_func_subArrayRecordSizeOffset, pvar_func_waveAnlRecordSizeOffset,
    pvar_func_waveformRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "aSub", "aai", "aao", "ai", "ao", "bi", "bo", "calc", "calcout",
    "compress", "dfanout", "event", "fanout", "histogram", "int64in",
    "int64out", "longin", "longout", "lsi", "lso", "mbbi", "mbbiDirect",
    "mbbo", "mbboDirect", "permissive", "printf", "sel", "seq", "state",
    "stringin", "stringout", "sub", "subArray", "waveAnl", "waveform"
};

static const recordTypeLocation rtl[] = {
    {(struct typed_rset *)pvar_rset_aSubRSET, pvar_func_aSubRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaiRSET, pvar_func_aaiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaoRSET, pvar_func_aaoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aiRSET, pvar_func_aiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aoRSET, pvar_func_aoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_biRSET, pvar_func_biRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_boRSET, pvar_func_boRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcRSET, pvar_func_calcRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcoutRSET, pvar_func_calcoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_compressRSET, pvar_func_compressRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_dfanoutRSET, pvar_func_dfanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_eventRSET, pvar_func_eventRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_fanoutRSET, pvar_func_fanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_histogramRSET, pvar_func_histogramRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64inRSET, pvar_func_int64inRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64outRSET, pvar_func_int64outRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longinRSET, pvar_func_longinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longoutRSET, pvar_func_longoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsiRSET, pvar_func_lsiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsoRSET, pvar_func_lsoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiRSET, pvar_func_mbbiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiDirectRSET, pvar_func_mbbiDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboRSET, pvar_func_mbboRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboDirectRSET, pvar_func_mbboDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_permissiveRSET, pvar_func_permissiveRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_printfRSET, pvar_func_printfRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_selRSET, pvar_func_selRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_seqRSET, pvar_func_seqRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stateRSET, pvar_func_stateRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringinRSET, pvar_func_stringinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringoutRSET, pvar_func_stringoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subRSET, pvar_func_subRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subArrayRSET, pvar_func_subArrayRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_waveAnlRSET, pvar_func_waveAnlRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_waveformRSET, pvar_func_waveformRecordSizeOffset}
};

epicsShareExtern dset *pvar_dset_devAaiSoft, *pvar_dset_devAaoSoft,
    *pvar_dset_devAiSoft, *pvar_dset_devAiSoftRaw,
    *pvar_dset_devAiSoftCallback, *pvar_dset_devTimestampAI,
    *pvar_dset_devAiGeneralTime, *pvar_dset_devPSCRegAi,
    *pvar_dset_devPSCRegF32Ai, *pvar_dset_devPSCRegF64Ai,
    *pvar_dset_devPSCRegRBAi, *pvar_dset_devPSCRegRBF32Ai,
    *pvar_dset_devPSCRegRBF64Ai, *pvar_dset_devAIFFTTotPwrTime,
    *pvar_dset_devAIFFTTotPwrFreq, *pvar_dset_devAIFFTLasttime,
    *pvar_dset_devAiStats, *pvar_dset_devAiClusts, *pvar_dset_devAoSoft,
    *pvar_dset_devAoSoftRaw, *pvar_dset_devAoSoftCallback,
    *pvar_dset_devPSCRegAo, *pvar_dset_devPSCRegF32Ao,
    *pvar_dset_devPSCRegF64Ao, *pvar_dset_devPSCSingleS32Ao,
    *pvar_dset_devPSCSingleF32Ao, *pvar_dset_devPSCSingleF64Ao,
    *pvar_dset_devPSCTblAo1Mode, *pvar_dset_devPSCTblAo2Mode,
    *pvar_dset_devAOFFTFSamp, *pvar_dset_devAOFFTScale,
    *pvar_dset_devAoStats, *pvar_dset_devBiSoft, *pvar_dset_devBiSoftRaw,
    *pvar_dset_devBiSoftCallback, *pvar_dset_devBiDbState,
    *pvar_dset_devPSCConnectedBi, *pvar_dset_devPSCRegBi,
    *pvar_dset_devPSCRegRBBi, *pvar_dset_devBoSoft,
    *pvar_dset_devBoSoftRaw, *pvar_dset_devBoSoftCallback,
    *pvar_dset_devBoGeneralTime, *pvar_dset_devBoDbState,
    *pvar_dset_devPSCSendAllBo, *pvar_dset_devPSCForceReConn,
    *pvar_dset_devPSCRegBo, *pvar_dset_devPSCSingleU32Bo,
    *pvar_dset_devCalcoutSoft, *pvar_dset_devCalcoutSoftCallback,
    *pvar_dset_devEventSoft, *pvar_dset_devHistogramSoft,
    *pvar_dset_devI64inSoft, *pvar_dset_devI64inSoftCallback,
    *pvar_dset_devI64outSoft, *pvar_dset_devI64outSoftCallback,
    *pvar_dset_devLiSoft, *pvar_dset_devLiSoftCallback,
    *pvar_dset_devLiGeneralTime, *pvar_dset_devPSCUknCountLi,
    *pvar_dset_devPSCConnCountLi, *pvar_dset_devPSCBlockCountLi,
    *pvar_dset_devPSCRegLi, *pvar_dset_devPSCRegRBLi,
    *pvar_dset_devLoSoft, *pvar_dset_devLoSoftCallback,
    *pvar_dset_devPSCSendLo, *pvar_dset_devPSCRegLo,
    *pvar_dset_devPSCSingleS32Lo, *pvar_dset_devPSCTblLoStart,
    *pvar_dset_devLOFFTnfft, *pvar_dset_devLOFFTstart,
    *pvar_dset_devLOFFTwidth, *pvar_dset_devLsiSoft,
    *pvar_dset_devLsiEnviron, *pvar_dset_devLsoSoft,
    *pvar_dset_devLsoSoftCallback, *pvar_dset_devLsoStdio,
    *pvar_dset_devMbbiSoft, *pvar_dset_devMbbiSoftRaw,
    *pvar_dset_devMbbiSoftCallback, *pvar_dset_devPSCRegMbbi,
    *pvar_dset_devPSCRegRBMbbi, *pvar_dset_devMbbiDirectSoft,
    *pvar_dset_devMbbiDirectSoftRaw, *pvar_dset_devMbbiDirectSoftCallback,
    *pvar_dset_devPSCRegMbbiDirect, *pvar_dset_devPSCRegRBMbbiDirect,
    *pvar_dset_devPSCTblMbbiDirectAlarms, *pvar_dset_devMbboSoft,
    *pvar_dset_devMbboSoftRaw, *pvar_dset_devMbboSoftCallback,
    *pvar_dset_devPSCRegMbbo, *pvar_dset_devPSCSingleU32Mbbo,
    *pvar_dset_devPSCTblMbboMode, *pvar_dset_devMBBOFFTsetwin,
    *pvar_dset_devMbboDirectSoft, *pvar_dset_devMbboDirectSoftRaw,
    *pvar_dset_devMbboDirectSoftCallback, *pvar_dset_devPSCRegMbboDirect,
    *pvar_dset_devPSCSingleU32MbboDirect, *pvar_dset_devPrintfSoft,
    *pvar_dset_devPrintfSoftCallback, *pvar_dset_devPrintfStdio,
    *pvar_dset_devSiSoft, *pvar_dset_devSiSoftCallback,
    *pvar_dset_devTimestampSI, *pvar_dset_devSiGeneralTime,
    *pvar_dset_devSiEnviron, *pvar_dset_devPSCMessageSI,
    *pvar_dset_devPSCBlockSi, *pvar_dset_devStringinStats,
    *pvar_dset_devStringinEnvVar, *pvar_dset_devStringinEpics,
    *pvar_dset_devSoSoft, *pvar_dset_devSoSoftCallback,
    *pvar_dset_devSoStdio, *pvar_dset_devPSCBlockSo, *pvar_dset_devSASoft,
    *pvar_dset_devWfSoft, *pvar_dset_devPSCBlockInWf8,
    *pvar_dset_devPSCBlockOutWf8, *pvar_dset_devPSCBlockInWf16,
    *pvar_dset_devPSCBlockOutWf16, *pvar_dset_devPSCBlockInWf32,
    *pvar_dset_devPSCBlockOutWf32, *pvar_dset_devPSCBlockInWfF32,
    *pvar_dset_devPSCBlockOutWfF32, *pvar_dset_devPSCBlockInWfF64,
    *pvar_dset_devPSCBlockOutWfF64, *pvar_dset_devPSCTblOutWfTG,
    *pvar_dset_devWFFFTInput, *pvar_dset_devWFFFTOutput,
    *pvar_dset_devWFFFTOutputInt, *pvar_dset_devWFFFTFScale,
    *pvar_dset_devWFFFTFWindow, *pvar_dset_devWaveformStats;

static const char * const deviceSupportNames[] = {
    "devAaiSoft", "devAaoSoft", "devAiSoft", "devAiSoftRaw",
    "devAiSoftCallback", "devTimestampAI", "devAiGeneralTime",
    "devPSCRegAi", "devPSCRegF32Ai", "devPSCRegF64Ai", "devPSCRegRBAi",
    "devPSCRegRBF32Ai", "devPSCRegRBF64Ai", "devAIFFTTotPwrTime",
    "devAIFFTTotPwrFreq", "devAIFFTLasttime", "devAiStats", "devAiClusts",
    "devAoSoft", "devAoSoftRaw", "devAoSoftCallback", "devPSCRegAo",
    "devPSCRegF32Ao", "devPSCRegF64Ao", "devPSCSingleS32Ao",
    "devPSCSingleF32Ao", "devPSCSingleF64Ao", "devPSCTblAo1Mode",
    "devPSCTblAo2Mode", "devAOFFTFSamp", "devAOFFTScale", "devAoStats",
    "devBiSoft", "devBiSoftRaw", "devBiSoftCallback", "devBiDbState",
    "devPSCConnectedBi", "devPSCRegBi", "devPSCRegRBBi", "devBoSoft",
    "devBoSoftRaw", "devBoSoftCallback", "devBoGeneralTime",
    "devBoDbState", "devPSCSendAllBo", "devPSCForceReConn", "devPSCRegBo",
    "devPSCSingleU32Bo", "devCalcoutSoft", "devCalcoutSoftCallback",
    "devEventSoft", "devHistogramSoft", "devI64inSoft",
    "devI64inSoftCallback", "devI64outSoft", "devI64outSoftCallback",
    "devLiSoft", "devLiSoftCallback", "devLiGeneralTime",
    "devPSCUknCountLi", "devPSCConnCountLi", "devPSCBlockCountLi",
    "devPSCRegLi", "devPSCRegRBLi", "devLoSoft", "devLoSoftCallback",
    "devPSCSendLo", "devPSCRegLo", "devPSCSingleS32Lo",
    "devPSCTblLoStart", "devLOFFTnfft", "devLOFFTstart", "devLOFFTwidth",
    "devLsiSoft", "devLsiEnviron", "devLsoSoft", "devLsoSoftCallback",
    "devLsoStdio", "devMbbiSoft", "devMbbiSoftRaw", "devMbbiSoftCallback",
    "devPSCRegMbbi", "devPSCRegRBMbbi", "devMbbiDirectSoft",
    "devMbbiDirectSoftRaw", "devMbbiDirectSoftCallback",
    "devPSCRegMbbiDirect", "devPSCRegRBMbbiDirect",
    "devPSCTblMbbiDirectAlarms", "devMbboSoft", "devMbboSoftRaw",
    "devMbboSoftCallback", "devPSCRegMbbo", "devPSCSingleU32Mbbo",
    "devPSCTblMbboMode", "devMBBOFFTsetwin", "devMbboDirectSoft",
    "devMbboDirectSoftRaw", "devMbboDirectSoftCallback",
    "devPSCRegMbboDirect", "devPSCSingleU32MbboDirect", "devPrintfSoft",
    "devPrintfSoftCallback", "devPrintfStdio", "devSiSoft",
    "devSiSoftCallback", "devTimestampSI", "devSiGeneralTime",
    "devSiEnviron", "devPSCMessageSI", "devPSCBlockSi",
    "devStringinStats", "devStringinEnvVar", "devStringinEpics",
    "devSoSoft", "devSoSoftCallback", "devSoStdio", "devPSCBlockSo",
    "devSASoft", "devWfSoft", "devPSCBlockInWf8", "devPSCBlockOutWf8",
    "devPSCBlockInWf16", "devPSCBlockOutWf16", "devPSCBlockInWf32",
    "devPSCBlockOutWf32", "devPSCBlockInWfF32", "devPSCBlockOutWfF32",
    "devPSCBlockInWfF64", "devPSCBlockOutWfF64", "devPSCTblOutWfTG",
    "devWFFFTInput", "devWFFFTOutput", "devWFFFTOutputInt",
    "devWFFFTFScale", "devWFFFTFWindow", "devWaveformStats"
};

static const dset * const devsl[] = {
    pvar_dset_devAaiSoft, pvar_dset_devAaoSoft, pvar_dset_devAiSoft,
    pvar_dset_devAiSoftRaw, pvar_dset_devAiSoftCallback,
    pvar_dset_devTimestampAI, pvar_dset_devAiGeneralTime,
    pvar_dset_devPSCRegAi, pvar_dset_devPSCRegF32Ai,
    pvar_dset_devPSCRegF64Ai, pvar_dset_devPSCRegRBAi,
    pvar_dset_devPSCRegRBF32Ai, pvar_dset_devPSCRegRBF64Ai,
    pvar_dset_devAIFFTTotPwrTime, pvar_dset_devAIFFTTotPwrFreq,
    pvar_dset_devAIFFTLasttime, pvar_dset_devAiStats,
    pvar_dset_devAiClusts, pvar_dset_devAoSoft, pvar_dset_devAoSoftRaw,
    pvar_dset_devAoSoftCallback, pvar_dset_devPSCRegAo,
    pvar_dset_devPSCRegF32Ao, pvar_dset_devPSCRegF64Ao,
    pvar_dset_devPSCSingleS32Ao, pvar_dset_devPSCSingleF32Ao,
    pvar_dset_devPSCSingleF64Ao, pvar_dset_devPSCTblAo1Mode,
    pvar_dset_devPSCTblAo2Mode, pvar_dset_devAOFFTFSamp,
    pvar_dset_devAOFFTScale, pvar_dset_devAoStats, pvar_dset_devBiSoft,
    pvar_dset_devBiSoftRaw, pvar_dset_devBiSoftCallback,
    pvar_dset_devBiDbState, pvar_dset_devPSCConnectedBi,
    pvar_dset_devPSCRegBi, pvar_dset_devPSCRegRBBi, pvar_dset_devBoSoft,
    pvar_dset_devBoSoftRaw, pvar_dset_devBoSoftCallback,
    pvar_dset_devBoGeneralTime, pvar_dset_devBoDbState,
    pvar_dset_devPSCSendAllBo, pvar_dset_devPSCForceReConn,
    pvar_dset_devPSCRegBo, pvar_dset_devPSCSingleU32Bo,
    pvar_dset_devCalcoutSoft, pvar_dset_devCalcoutSoftCallback,
    pvar_dset_devEventSoft, pvar_dset_devHistogramSoft,
    pvar_dset_devI64inSoft, pvar_dset_devI64inSoftCallback,
    pvar_dset_devI64outSoft, pvar_dset_devI64outSoftCallback,
    pvar_dset_devLiSoft, pvar_dset_devLiSoftCallback,
    pvar_dset_devLiGeneralTime, pvar_dset_devPSCUknCountLi,
    pvar_dset_devPSCConnCountLi, pvar_dset_devPSCBlockCountLi,
    pvar_dset_devPSCRegLi, pvar_dset_devPSCRegRBLi, pvar_dset_devLoSoft,
    pvar_dset_devLoSoftCallback, pvar_dset_devPSCSendLo,
    pvar_dset_devPSCRegLo, pvar_dset_devPSCSingleS32Lo,
    pvar_dset_devPSCTblLoStart, pvar_dset_devLOFFTnfft,
    pvar_dset_devLOFFTstart, pvar_dset_devLOFFTwidth,
    pvar_dset_devLsiSoft, pvar_dset_devLsiEnviron, pvar_dset_devLsoSoft,
    pvar_dset_devLsoSoftCallback, pvar_dset_devLsoStdio,
    pvar_dset_devMbbiSoft, pvar_dset_devMbbiSoftRaw,
    pvar_dset_devMbbiSoftCallback, pvar_dset_devPSCRegMbbi,
    pvar_dset_devPSCRegRBMbbi, pvar_dset_devMbbiDirectSoft,
    pvar_dset_devMbbiDirectSoftRaw, pvar_dset_devMbbiDirectSoftCallback,
    pvar_dset_devPSCRegMbbiDirect, pvar_dset_devPSCRegRBMbbiDirect,
    pvar_dset_devPSCTblMbbiDirectAlarms, pvar_dset_devMbboSoft,
    pvar_dset_devMbboSoftRaw, pvar_dset_devMbboSoftCallback,
    pvar_dset_devPSCRegMbbo, pvar_dset_devPSCSingleU32Mbbo,
    pvar_dset_devPSCTblMbboMode, pvar_dset_devMBBOFFTsetwin,
    pvar_dset_devMbboDirectSoft, pvar_dset_devMbboDirectSoftRaw,
    pvar_dset_devMbboDirectSoftCallback, pvar_dset_devPSCRegMbboDirect,
    pvar_dset_devPSCSingleU32MbboDirect, pvar_dset_devPrintfSoft,
    pvar_dset_devPrintfSoftCallback, pvar_dset_devPrintfStdio,
    pvar_dset_devSiSoft, pvar_dset_devSiSoftCallback,
    pvar_dset_devTimestampSI, pvar_dset_devSiGeneralTime,
    pvar_dset_devSiEnviron, pvar_dset_devPSCMessageSI,
    pvar_dset_devPSCBlockSi, pvar_dset_devStringinStats,
    pvar_dset_devStringinEnvVar, pvar_dset_devStringinEpics,
    pvar_dset_devSoSoft, pvar_dset_devSoSoftCallback,
    pvar_dset_devSoStdio, pvar_dset_devPSCBlockSo, pvar_dset_devSASoft,
    pvar_dset_devWfSoft, pvar_dset_devPSCBlockInWf8,
    pvar_dset_devPSCBlockOutWf8, pvar_dset_devPSCBlockInWf16,
    pvar_dset_devPSCBlockOutWf16, pvar_dset_devPSCBlockInWf32,
    pvar_dset_devPSCBlockOutWf32, pvar_dset_devPSCBlockInWfF32,
    pvar_dset_devPSCBlockOutWfF32, pvar_dset_devPSCBlockInWfF64,
    pvar_dset_devPSCBlockOutWfF64, pvar_dset_devPSCTblOutWfTG,
    pvar_dset_devWFFFTInput, pvar_dset_devWFFFTOutput,
    pvar_dset_devWFFFTOutputInt, pvar_dset_devWFFFTFScale,
    pvar_dset_devWFFFTFWindow, pvar_dset_devWaveformStats
};

epicsShareExtern drvet *pvar_drvet_drvPSC;

static const char *driverSupportNames[] = {
    "drvPSC"};

static struct drvet *drvsl[] = {
    pvar_drvet_drvPSC};

epicsShareExtern jlif *pvar_jlif_lnkCalcIf, *pvar_jlif_lnkConstIf,
    *pvar_jlif_lnkDebugIf, *pvar_jlif_lnkStateIf, *pvar_jlif_lnkTraceIf;

static struct jlif *jlifsl[] = {
    pvar_jlif_lnkCalcIf,
    pvar_jlif_lnkConstIf,
    pvar_jlif_lnkDebugIf,
    pvar_jlif_lnkStateIf,
    pvar_jlif_lnkTraceIf};

typedef void (*reg_func)(void);
epicsShareExtern reg_func pvar_func_PSCRegister, pvar_func_arrInitialize,
    pvar_func_asInitHooksRegister, pvar_func_asSub,
    pvar_func_caPutLogRegister, pvar_func_configMenuRegistrar,
    pvar_func_dbndInitialize, pvar_func_dbrestoreRegister,
    pvar_func_decInitialize, pvar_func_fftcalcReg,
    pvar_func_iocshSystemCommand, pvar_func_rsrvRegistrar,
    pvar_func_save_restoreRegister, pvar_func_syncInitialize,
    pvar_func_tsInitialize, pvar_func_register_func_SaStdCalSup,
    pvar_func_register_func_SaStdCalSupInit,
    pvar_func_register_func_asubAlarmCalcInit,
    pvar_func_register_func_asubAlarmCalcProc,
    pvar_func_register_func_bpmPosButtonSum,
    pvar_func_register_func_bpmPosXyUnitConvrsion,
    pvar_func_register_func_bpmWfmPolyCoeffCalSup,
    pvar_func_register_func_fbckSupInit,
    pvar_func_register_func_fbckSupRMSCalc,
    pvar_func_register_func_posPolyCoeffCalSup,
    pvar_func_register_func_posPolyCoeffCalSupInit,
    pvar_func_register_func_rebootProc, pvar_func_register_func_scanMon,
    pvar_func_register_func_scanMonInit,
    pvar_func_register_func_subADCWfProc,
    pvar_func_register_func_subAlarmCalcInit,
    pvar_func_register_func_subAlarmCalcProc,
    pvar_func_register_func_subApplyCoefficient,
    pvar_func_register_func_subArrayCompare,
    pvar_func_register_func_subArrayMovingAverage,
    pvar_func_register_func_subArrayStatsVariance,
    pvar_func_register_func_subArraySubtraction,
    pvar_func_register_func_subCalcAlarm,
    pvar_func_register_func_subCalcInit,
    pvar_func_register_func_subCopyWaveform,
    pvar_func_register_func_subEncABProc,
    pvar_func_register_func_subEncFormatProc,
    pvar_func_register_func_subEncStreamProc,
    pvar_func_register_func_subEncTSProc, pvar_func_register_func_subFFT,
    pvar_func_register_func_subGenFormatProc,
    pvar_func_register_func_subGenStreamProc,
    pvar_func_register_func_subGenTSProc,
    pvar_func_register_func_subGenVoltProc,
    pvar_func_register_func_subSampling, pvar_func_register_func_subSlice,
    pvar_func_register_func_subSlice2, pvar_func_register_func_subZero,
    pvar_func_register_func_wf_stats;

epicsShareExtern int * const pvar_int_CASDEBUG;
epicsShareExtern int * const pvar_int_PSCDebug;
epicsShareExtern int * const pvar_int_PSCInactivityTime;
epicsShareExtern int * const pvar_int_PSCMaxSendBuffer;
epicsShareExtern int * const pvar_int_PSCTblCtlDebug;
epicsShareExtern int * const pvar_int_asCaDebug;
epicsShareExtern int * const pvar_int_atExitDebug;
epicsShareExtern double * const pvar_double_boHIGHlimit;
epicsShareExtern int * const pvar_int_boHIGHprecision;
epicsShareExtern double * const pvar_double_calcoutODLYlimit;
epicsShareExtern int * const pvar_int_calcoutODLYprecision;
epicsShareExtern int * const pvar_int_callbackParallelThreadsDefault;
epicsShareExtern int * const pvar_int_configMenuDebug;
epicsShareExtern int * const pvar_int_dbAccessDebugPUTF;
epicsShareExtern int * const pvar_int_dbBptNotMonotonic;
epicsShareExtern int * const pvar_int_dbConvertStrict;
epicsShareExtern int * const pvar_int_dbJLinkDebug;
epicsShareExtern int * const pvar_int_dbQuietMacroWarnings;
epicsShareExtern int * const pvar_int_dbRecordsAbcSorted;
epicsShareExtern int * const pvar_int_dbRecordsOnceOnly;
epicsShareExtern int * const pvar_int_dbTemplateMaxVars;
epicsShareExtern int * const pvar_int_dbThreadRealtimeLock;
epicsShareExtern int * const pvar_int_histogramSDELprecision;
epicsShareExtern int * const pvar_int_lnkDebug_debug;
epicsShareExtern int * const pvar_int_logClientDebug;
epicsShareExtern int * const pvar_int_save_restoreDatedBackupFiles;
epicsShareExtern int * const pvar_int_save_restoreDebug;
epicsShareExtern int * const pvar_int_save_restoreIncompleteSetsOk;
epicsShareExtern int * const pvar_int_save_restoreNumSeqFiles;
epicsShareExtern int * const pvar_int_save_restoreRemountThreshold;
epicsShareExtern int * const pvar_int_save_restoreSeqPeriodInSeconds;
epicsShareExtern double * const pvar_double_seqDLYlimit;
epicsShareExtern int * const pvar_int_seqDLYprecision;

static struct iocshVarDef vardefs[] = {
    {"CASDEBUG", iocshArgInt, pvar_int_CASDEBUG},
    {"PSCDebug", iocshArgInt, pvar_int_PSCDebug},
    {"PSCInactivityTime", iocshArgInt, pvar_int_PSCInactivityTime},
    {"PSCMaxSendBuffer", iocshArgInt, pvar_int_PSCMaxSendBuffer},
    {"PSCTblCtlDebug", iocshArgInt, pvar_int_PSCTblCtlDebug},
    {"asCaDebug", iocshArgInt, pvar_int_asCaDebug},
    {"atExitDebug", iocshArgInt, pvar_int_atExitDebug},
    {"boHIGHlimit", iocshArgDouble, pvar_double_boHIGHlimit},
    {"boHIGHprecision", iocshArgInt, pvar_int_boHIGHprecision},
    {"calcoutODLYlimit", iocshArgDouble, pvar_double_calcoutODLYlimit},
    {"calcoutODLYprecision", iocshArgInt, pvar_int_calcoutODLYprecision},
    {"callbackParallelThreadsDefault", iocshArgInt, pvar_int_callbackParallelThreadsDefault},
    {"configMenuDebug", iocshArgInt, pvar_int_configMenuDebug},
    {"dbAccessDebugPUTF", iocshArgInt, pvar_int_dbAccessDebugPUTF},
    {"dbBptNotMonotonic", iocshArgInt, pvar_int_dbBptNotMonotonic},
    {"dbConvertStrict", iocshArgInt, pvar_int_dbConvertStrict},
    {"dbJLinkDebug", iocshArgInt, pvar_int_dbJLinkDebug},
    {"dbQuietMacroWarnings", iocshArgInt, pvar_int_dbQuietMacroWarnings},
    {"dbRecordsAbcSorted", iocshArgInt, pvar_int_dbRecordsAbcSorted},
    {"dbRecordsOnceOnly", iocshArgInt, pvar_int_dbRecordsOnceOnly},
    {"dbTemplateMaxVars", iocshArgInt, pvar_int_dbTemplateMaxVars},
    {"dbThreadRealtimeLock", iocshArgInt, pvar_int_dbThreadRealtimeLock},
    {"histogramSDELprecision", iocshArgInt, pvar_int_histogramSDELprecision},
    {"lnkDebug_debug", iocshArgInt, pvar_int_lnkDebug_debug},
    {"logClientDebug", iocshArgInt, pvar_int_logClientDebug},
    {"save_restoreDatedBackupFiles", iocshArgInt, pvar_int_save_restoreDatedBackupFiles},
    {"save_restoreDebug", iocshArgInt, pvar_int_save_restoreDebug},
    {"save_restoreIncompleteSetsOk", iocshArgInt, pvar_int_save_restoreIncompleteSetsOk},
    {"save_restoreNumSeqFiles", iocshArgInt, pvar_int_save_restoreNumSeqFiles},
    {"save_restoreRemountThreshold", iocshArgInt, pvar_int_save_restoreRemountThreshold},
    {"save_restoreSeqPeriodInSeconds", iocshArgInt, pvar_int_save_restoreSeqPeriodInSeconds},
    {"seqDLYlimit", iocshArgDouble, pvar_double_seqDLYlimit},
    {"seqDLYprecision", iocshArgInt, pvar_int_seqDLYprecision},
    {NULL, iocshArgInt, NULL}
};

int psc_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/epics/iocs/pscdrv05";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    registerDrivers(pbase, NELEMENTS(drvsl), driverSupportNames, drvsl);
    registerJLinks(pbase, NELEMENTS(jlifsl), jlifsl);
    runRegistrarOnce(pvar_func_PSCRegister);
    runRegistrarOnce(pvar_func_arrInitialize);
    runRegistrarOnce(pvar_func_asInitHooksRegister);
    runRegistrarOnce(pvar_func_asSub);
    runRegistrarOnce(pvar_func_caPutLogRegister);
    runRegistrarOnce(pvar_func_configMenuRegistrar);
    runRegistrarOnce(pvar_func_dbndInitialize);
    runRegistrarOnce(pvar_func_dbrestoreRegister);
    runRegistrarOnce(pvar_func_decInitialize);
    runRegistrarOnce(pvar_func_fftcalcReg);
    runRegistrarOnce(pvar_func_iocshSystemCommand);
    runRegistrarOnce(pvar_func_rsrvRegistrar);
    runRegistrarOnce(pvar_func_save_restoreRegister);
    runRegistrarOnce(pvar_func_syncInitialize);
    runRegistrarOnce(pvar_func_tsInitialize);
    runRegistrarOnce(pvar_func_register_func_SaStdCalSup);
    runRegistrarOnce(pvar_func_register_func_SaStdCalSupInit);
    runRegistrarOnce(pvar_func_register_func_asubAlarmCalcInit);
    runRegistrarOnce(pvar_func_register_func_asubAlarmCalcProc);
    runRegistrarOnce(pvar_func_register_func_bpmPosButtonSum);
    runRegistrarOnce(pvar_func_register_func_bpmPosXyUnitConvrsion);
    runRegistrarOnce(pvar_func_register_func_bpmWfmPolyCoeffCalSup);
    runRegistrarOnce(pvar_func_register_func_fbckSupInit);
    runRegistrarOnce(pvar_func_register_func_fbckSupRMSCalc);
    runRegistrarOnce(pvar_func_register_func_posPolyCoeffCalSup);
    runRegistrarOnce(pvar_func_register_func_posPolyCoeffCalSupInit);
    runRegistrarOnce(pvar_func_register_func_rebootProc);
    runRegistrarOnce(pvar_func_register_func_scanMon);
    runRegistrarOnce(pvar_func_register_func_scanMonInit);
    runRegistrarOnce(pvar_func_register_func_subADCWfProc);
    runRegistrarOnce(pvar_func_register_func_subAlarmCalcInit);
    runRegistrarOnce(pvar_func_register_func_subAlarmCalcProc);
    runRegistrarOnce(pvar_func_register_func_subApplyCoefficient);
    runRegistrarOnce(pvar_func_register_func_subArrayCompare);
    runRegistrarOnce(pvar_func_register_func_subArrayMovingAverage);
    runRegistrarOnce(pvar_func_register_func_subArrayStatsVariance);
    runRegistrarOnce(pvar_func_register_func_subArraySubtraction);
    runRegistrarOnce(pvar_func_register_func_subCalcAlarm);
    runRegistrarOnce(pvar_func_register_func_subCalcInit);
    runRegistrarOnce(pvar_func_register_func_subCopyWaveform);
    runRegistrarOnce(pvar_func_register_func_subEncABProc);
    runRegistrarOnce(pvar_func_register_func_subEncFormatProc);
    runRegistrarOnce(pvar_func_register_func_subEncStreamProc);
    runRegistrarOnce(pvar_func_register_func_subEncTSProc);
    runRegistrarOnce(pvar_func_register_func_subFFT);
    runRegistrarOnce(pvar_func_register_func_subGenFormatProc);
    runRegistrarOnce(pvar_func_register_func_subGenStreamProc);
    runRegistrarOnce(pvar_func_register_func_subGenTSProc);
    runRegistrarOnce(pvar_func_register_func_subGenVoltProc);
    runRegistrarOnce(pvar_func_register_func_subSampling);
    runRegistrarOnce(pvar_func_register_func_subSlice);
    runRegistrarOnce(pvar_func_register_func_subSlice2);
    runRegistrarOnce(pvar_func_register_func_subZero);
    runRegistrarOnce(pvar_func_register_func_wf_stats);
    iocshRegisterVariable(vardefs);
    return 0;
}

/* psc_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"psc_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    iocshSetError(psc_registerRecordDeviceDriver(*iocshPpdbbase));
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
