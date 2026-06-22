#ifndef UnitChecker__H
#define UnitChecker__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description MMath_Rational_RATIONAL__desc;

extern struct record_description UnitAbsyn_InstStore_INSTSTORE__desc;

extern struct record_description UnitAbsyn_SpecUnit_SPECUNIT__desc;

extern struct record_description UnitAbsyn_Store_STORE__desc;

extern struct record_description UnitAbsyn_TypeParameter_TYPEPARAMETER__desc;

extern struct record_description UnitAbsyn_Unit_SPECIFIED__desc;

extern struct record_description UnitAbsyn_Unit_UNSPECIFIED__desc;

extern struct record_description UnitAbsyn_UnitCheckResult_CONSISTENT__desc;

extern struct record_description UnitAbsyn_UnitCheckResult_INCONSISTENT__desc;


DLLDirection
void omc_UnitChecker_printResult(threadData_t *threadData, modelica_metatype _res);
#define boxptr_UnitChecker_printResult omc_UnitChecker_printResult
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_printResult,2,0) {(void*) boxptr_UnitChecker_printResult,0}};
#define boxvar_UnitChecker_printResult MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_printResult)


DLLDirection
void omc_UnitChecker_testUnitOp(threadData_t *threadData);
#define boxptr_UnitChecker_testUnitOp omc_UnitChecker_testUnitOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_testUnitOp,2,0) {(void*) boxptr_UnitChecker_testUnitOp,0}};
#define boxvar_UnitChecker_testUnitOp MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_testUnitOp)


DLLDirection
void omc_UnitChecker_printSpecUnitParams(threadData_t *threadData, modelica_metatype _params);
#define boxptr_UnitChecker_printSpecUnitParams omc_UnitChecker_printSpecUnitParams
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_printSpecUnitParams,2,0) {(void*) boxptr_UnitChecker_printSpecUnitParams,0}};
#define boxvar_UnitChecker_printSpecUnitParams MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_printSpecUnitParams)


DLLDirection
void omc_UnitChecker_printSpecUnit(threadData_t *threadData, modelica_string _text, modelica_metatype _su);
#define boxptr_UnitChecker_printSpecUnit omc_UnitChecker_printSpecUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_printSpecUnit,2,0) {(void*) boxptr_UnitChecker_printSpecUnit,0}};
#define boxvar_UnitChecker_printSpecUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_printSpecUnit)


#define boxptr_UnitChecker_normalizeParamsValues omc_UnitChecker_normalizeParamsValues


#define boxptr_UnitChecker_normalizeParamsExponents omc_UnitChecker_normalizeParamsExponents


DLLDirection
modelica_metatype omc_UnitChecker_normalizeOnUnit(threadData_t *threadData, modelica_metatype _u, modelica_metatype _st, modelica_metatype *out_outSt);
#define boxptr_UnitChecker_normalizeOnUnit omc_UnitChecker_normalizeOnUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeOnUnit,2,0) {(void*) boxptr_UnitChecker_normalizeOnUnit,0}};
#define boxvar_UnitChecker_normalizeOnUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_normalizeOnUnit)


DLLDirection
modelica_metatype omc_UnitChecker_normalize(threadData_t *threadData, modelica_integer _loc, modelica_metatype _st, modelica_metatype *out_outSt);
DLLDirection
modelica_metatype boxptr_UnitChecker_normalize(threadData_t *threadData, modelica_metatype _loc, modelica_metatype _st, modelica_metatype *out_outSt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_normalize,2,0) {(void*) boxptr_UnitChecker_normalize,0}};
#define boxvar_UnitChecker_normalize MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_normalize)


#define boxptr_UnitChecker_negParamList omc_UnitChecker_negParamList


DLLDirection
modelica_metatype omc_UnitChecker_powUnitVec(threadData_t *threadData, modelica_metatype _inunitvec, modelica_metatype _expo);
#define boxptr_UnitChecker_powUnitVec omc_UnitChecker_powUnitVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_powUnitVec,2,0) {(void*) boxptr_UnitChecker_powUnitVec,0}};
#define boxvar_UnitChecker_powUnitVec MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_powUnitVec)


DLLDirection
modelica_metatype omc_UnitChecker_powUnitParams(threadData_t *threadData, modelica_metatype _inparams, modelica_metatype _expo);
#define boxptr_UnitChecker_powUnitParams omc_UnitChecker_powUnitParams
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_powUnitParams,2,0) {(void*) boxptr_UnitChecker_powUnitParams,0}};
#define boxvar_UnitChecker_powUnitParams MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_powUnitParams)


DLLDirection
modelica_metatype omc_UnitChecker_powSpecUnit(threadData_t *threadData, modelica_metatype _suin, modelica_metatype _expo);
#define boxptr_UnitChecker_powSpecUnit omc_UnitChecker_powSpecUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_powSpecUnit,2,0) {(void*) boxptr_UnitChecker_powSpecUnit,0}};
#define boxvar_UnitChecker_powSpecUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_powSpecUnit)


DLLDirection
modelica_metatype omc_UnitChecker_divUnitVec(threadData_t *threadData, modelica_metatype _inunitvec1, modelica_metatype _inunitvec2);
#define boxptr_UnitChecker_divUnitVec omc_UnitChecker_divUnitVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_divUnitVec,2,0) {(void*) boxptr_UnitChecker_divUnitVec,0}};
#define boxvar_UnitChecker_divUnitVec MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_divUnitVec)


DLLDirection
modelica_metatype omc_UnitChecker_divSpecUnit(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2);
#define boxptr_UnitChecker_divSpecUnit omc_UnitChecker_divSpecUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_divSpecUnit,2,0) {(void*) boxptr_UnitChecker_divSpecUnit,0}};
#define boxvar_UnitChecker_divSpecUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_divSpecUnit)


DLLDirection
modelica_metatype omc_UnitChecker_mulUnitVec(threadData_t *threadData, modelica_metatype _inunitvec1, modelica_metatype _inunitvec2);
#define boxptr_UnitChecker_mulUnitVec omc_UnitChecker_mulUnitVec
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_mulUnitVec,2,0) {(void*) boxptr_UnitChecker_mulUnitVec,0}};
#define boxvar_UnitChecker_mulUnitVec MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_mulUnitVec)


DLLDirection
modelica_metatype omc_UnitChecker_mulSpecUnit(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2);
#define boxptr_UnitChecker_mulSpecUnit omc_UnitChecker_mulSpecUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_mulSpecUnit,2,0) {(void*) boxptr_UnitChecker_mulSpecUnit,0}};
#define boxvar_UnitChecker_mulSpecUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_mulSpecUnit)


DLLDirection
modelica_boolean omc_UnitChecker_unitHasUnknown(threadData_t *threadData, modelica_metatype _u);
DLLDirection
modelica_metatype boxptr_UnitChecker_unitHasUnknown(threadData_t *threadData, modelica_metatype _u);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_unitHasUnknown,2,0) {(void*) boxptr_UnitChecker_unitHasUnknown,0}};
#define boxvar_UnitChecker_unitHasUnknown MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_unitHasUnknown)


DLLDirection
modelica_boolean omc_UnitChecker_hasUnknown(threadData_t *threadData, modelica_metatype _su);
DLLDirection
modelica_metatype boxptr_UnitChecker_hasUnknown(threadData_t *threadData, modelica_metatype _su);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_hasUnknown,2,0) {(void*) boxptr_UnitChecker_hasUnknown,0}};
#define boxvar_UnitChecker_hasUnknown MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_hasUnknown)


DLLDirection
modelica_integer omc_UnitChecker_getUnknown(threadData_t *threadData, modelica_metatype _suin, modelica_metatype *out_suout);
DLLDirection
modelica_metatype boxptr_UnitChecker_getUnknown(threadData_t *threadData, modelica_metatype _suin, modelica_metatype *out_suout);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_getUnknown,2,0) {(void*) boxptr_UnitChecker_getUnknown,0}};
#define boxvar_UnitChecker_getUnknown MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_getUnknown)


DLLDirection
modelica_metatype omc_UnitChecker_newDimlessSpecUnit(threadData_t *threadData);
#define boxptr_UnitChecker_newDimlessSpecUnit omc_UnitChecker_newDimlessSpecUnit
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_newDimlessSpecUnit,2,0) {(void*) boxptr_UnitChecker_newDimlessSpecUnit,0}};
#define boxvar_UnitChecker_newDimlessSpecUnit MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_newDimlessSpecUnit)


#define boxptr_UnitChecker_unifyunits omc_UnitChecker_unifyunits


#define boxptr_UnitChecker_unify omc_UnitChecker_unify


#define boxptr_UnitChecker_chooseResult omc_UnitChecker_chooseResult


DLLDirection
modelica_metatype omc_UnitChecker_checkTerm(threadData_t *threadData, modelica_metatype _tm, modelica_metatype _st, modelica_metatype *out_outUnit, modelica_metatype *out_outSt);
#define boxptr_UnitChecker_checkTerm omc_UnitChecker_checkTerm
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_checkTerm,2,0) {(void*) boxptr_UnitChecker_checkTerm,0}};
#define boxvar_UnitChecker_checkTerm MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_checkTerm)


DLLDirection
modelica_boolean omc_UnitChecker_isComplete(threadData_t *threadData, modelica_metatype _st, modelica_metatype *out_stout);
DLLDirection
modelica_metatype boxptr_UnitChecker_isComplete(threadData_t *threadData, modelica_metatype _st, modelica_metatype *out_stout);
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_isComplete,2,0) {(void*) boxptr_UnitChecker_isComplete,0}};
#define boxvar_UnitChecker_isComplete MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_isComplete)


DLLDirection
modelica_metatype omc_UnitChecker_check(threadData_t *threadData, modelica_metatype _tms, modelica_metatype _ist);
#define boxptr_UnitChecker_check omc_UnitChecker_check
static const MMC_DEFSTRUCTLIT(boxvar_lit_UnitChecker_check,2,0) {(void*) boxptr_UnitChecker_check,0}};
#define boxvar_UnitChecker_check MMC_REFSTRUCTLIT(boxvar_lit_UnitChecker_check)

#ifdef __cplusplus
}
#endif
#endif
