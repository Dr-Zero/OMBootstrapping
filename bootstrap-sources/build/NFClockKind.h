#ifndef NFClockKind__H
#define NFClockKind__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_ClockKind_EVENT__CLOCK__desc;

extern struct record_description DAE_ClockKind_INFERRED__CLOCK__desc;

extern struct record_description DAE_ClockKind_RATIONAL__CLOCK__desc;

extern struct record_description DAE_ClockKind_REAL__CLOCK__desc;

extern struct record_description DAE_ClockKind_SOLVER__CLOCK__desc;

extern struct record_description NFClockKind_EVENT__CLOCK__desc;

extern struct record_description NFClockKind_RATIONAL__CLOCK__desc;

extern struct record_description NFClockKind_REAL__CLOCK__desc;

extern struct record_description NFClockKind_SOLVER__CLOCK__desc;


DLLDirection
modelica_integer omc_NFClockKind_hashContinue(threadData_t *threadData, modelica_metatype _clk, modelica_integer __omcQ_24in_5Fhash);
DLLDirection
modelica_metatype boxptr_NFClockKind_hashContinue(threadData_t *threadData, modelica_metatype _clk, modelica_metatype __omcQ_24in_5Fhash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_hashContinue,2,0) {(void*) boxptr_NFClockKind_hashContinue,0}};
#define boxvar_NFClockKind_hashContinue MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_hashContinue)


DLLDirection
modelica_metatype omc_NFClockKind_toJSON(threadData_t *threadData, modelica_metatype _clk);
#define boxptr_NFClockKind_toJSON omc_NFClockKind_toJSON
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toJSON,2,0) {(void*) boxptr_NFClockKind_toJSON,0}};
#define boxvar_NFClockKind_toJSON MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toJSON)


DLLDirection
modelica_string omc_NFClockKind_toFlatString(threadData_t *threadData, modelica_metatype _ck, modelica_metatype _format);
#define boxptr_NFClockKind_toFlatString omc_NFClockKind_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toFlatString,2,0) {(void*) boxptr_NFClockKind_toFlatString,0}};
#define boxvar_NFClockKind_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toFlatString)


DLLDirection
modelica_string omc_NFClockKind_toString(threadData_t *threadData, modelica_metatype _ck);
#define boxptr_NFClockKind_toString omc_NFClockKind_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toString,2,0) {(void*) boxptr_NFClockKind_toString,0}};
#define boxvar_NFClockKind_toString MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toString)


DLLDirection
modelica_string omc_NFClockKind_toDebugString(threadData_t *threadData, modelica_metatype _ick);
#define boxptr_NFClockKind_toDebugString omc_NFClockKind_toDebugString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toDebugString,2,0) {(void*) boxptr_NFClockKind_toDebugString,0}};
#define boxvar_NFClockKind_toDebugString MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toDebugString)


DLLDirection
modelica_metatype omc_NFClockKind_toDAE(threadData_t *threadData, modelica_metatype _ick);
#define boxptr_NFClockKind_toDAE omc_NFClockKind_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toDAE,2,0) {(void*) boxptr_NFClockKind_toDAE,0}};
#define boxvar_NFClockKind_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toDAE)


DLLDirection
modelica_metatype omc_NFClockKind_toAbsyn(threadData_t *threadData, modelica_metatype _clk);
#define boxptr_NFClockKind_toAbsyn omc_NFClockKind_toAbsyn
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_toAbsyn,2,0) {(void*) boxptr_NFClockKind_toAbsyn,0}};
#define boxvar_NFClockKind_toAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_toAbsyn)


DLLDirection
modelica_metatype omc_NFClockKind_mapFoldExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFClockKind_mapFoldExpShallow omc_NFClockKind_mapFoldExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_mapFoldExpShallow,2,0) {(void*) boxptr_NFClockKind_mapFoldExpShallow,0}};
#define boxvar_NFClockKind_mapFoldExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_mapFoldExpShallow)


DLLDirection
modelica_metatype omc_NFClockKind_mapFoldExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFClockKind_mapFoldExp omc_NFClockKind_mapFoldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_mapFoldExp,2,0) {(void*) boxptr_NFClockKind_mapFoldExp,0}};
#define boxvar_NFClockKind_mapFoldExp MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_mapFoldExp)


DLLDirection
modelica_metatype omc_NFClockKind_mapExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
#define boxptr_NFClockKind_mapExpShallow omc_NFClockKind_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_mapExpShallow,2,0) {(void*) boxptr_NFClockKind_mapExpShallow,0}};
#define boxvar_NFClockKind_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_mapExpShallow)


DLLDirection
modelica_metatype omc_NFClockKind_mapExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
#define boxptr_NFClockKind_mapExp omc_NFClockKind_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_mapExp,2,0) {(void*) boxptr_NFClockKind_mapExp,0}};
#define boxvar_NFClockKind_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_mapExp)


DLLDirection
modelica_metatype omc_NFClockKind_foldExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func, modelica_metatype _arg);
#define boxptr_NFClockKind_foldExp omc_NFClockKind_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_foldExp,2,0) {(void*) boxptr_NFClockKind_foldExp,0}};
#define boxvar_NFClockKind_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_foldExp)


DLLDirection
void omc_NFClockKind_applyExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
#define boxptr_NFClockKind_applyExpShallow omc_NFClockKind_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_applyExpShallow,2,0) {(void*) boxptr_NFClockKind_applyExpShallow,0}};
#define boxvar_NFClockKind_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_applyExpShallow)


DLLDirection
void omc_NFClockKind_applyExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
#define boxptr_NFClockKind_applyExp omc_NFClockKind_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_applyExp,2,0) {(void*) boxptr_NFClockKind_applyExp,0}};
#define boxvar_NFClockKind_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_applyExp)


DLLDirection
modelica_boolean omc_NFClockKind_containsExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFClockKind_containsExpShallow(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_containsExpShallow,2,0) {(void*) boxptr_NFClockKind_containsExpShallow,0}};
#define boxvar_NFClockKind_containsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_containsExpShallow)


DLLDirection
modelica_boolean omc_NFClockKind_containsExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFClockKind_containsExp(threadData_t *threadData, modelica_metatype _ck, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_containsExp,2,0) {(void*) boxptr_NFClockKind_containsExp,0}};
#define boxvar_NFClockKind_containsExp MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_containsExp)


DLLDirection
modelica_integer omc_NFClockKind_compare(threadData_t *threadData, modelica_metatype _ck1, modelica_metatype _ck2);
DLLDirection
modelica_metatype boxptr_NFClockKind_compare(threadData_t *threadData, modelica_metatype _ck1, modelica_metatype _ck2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_compare,2,0) {(void*) boxptr_NFClockKind_compare,0}};
#define boxvar_NFClockKind_compare MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_compare)


DLLDirection
modelica_boolean omc_NFClockKind_isInferred(threadData_t *threadData, modelica_metatype _ck);
DLLDirection
modelica_metatype boxptr_NFClockKind_isInferred(threadData_t *threadData, modelica_metatype _ck);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFClockKind_isInferred,2,0) {(void*) boxptr_NFClockKind_isInferred,0}};
#define boxvar_NFClockKind_isInferred MMC_REFSTRUCTLIT(boxvar_lit_NFClockKind_isInferred)

#ifdef __cplusplus
}
#endif
#endif
