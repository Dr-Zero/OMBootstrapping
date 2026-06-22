#ifndef NBBackendUtil__H
#define NBBackendUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description MMath_Rational_RATIONAL__desc;

extern struct record_description NBMatching_MATCHING__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_string omc_NBBackendUtil_makeFDerString(threadData_t *threadData, modelica_string __omcQ_24in_5Fstr, modelica_metatype _i_opt);
#define boxptr_NBBackendUtil_makeFDerString omc_NBBackendUtil_makeFDerString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_makeFDerString,2,0) {(void*) boxptr_NBBackendUtil_makeFDerString,0}};
#define boxvar_NBBackendUtil_makeFDerString MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_makeFDerString)


DLLDirection
modelica_metatype omc_NBBackendUtil_getLocalSystem(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _eqn_indices, modelica_metatype *out_matching_loc, modelica_metatype *out_map_back);
#define boxptr_NBBackendUtil_getLocalSystem omc_NBBackendUtil_getLocalSystem
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_getLocalSystem,2,0) {(void*) boxptr_NBBackendUtil_getLocalSystem,0}};
#define boxvar_NBBackendUtil_getLocalSystem MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_getLocalSystem)


DLLDirection
modelica_boolean omc_NBBackendUtil_isContinuousFold(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _staticAsContinuous, modelica_boolean __omcQ_24in_5Fb);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_isContinuousFold(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _staticAsContinuous, modelica_metatype __omcQ_24in_5Fb);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_isContinuousFold,2,0) {(void*) boxptr_NBBackendUtil_isContinuousFold,0}};
#define boxvar_NBBackendUtil_isContinuousFold MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_isContinuousFold)


DLLDirection
modelica_boolean omc_NBBackendUtil_isContinuous(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _staticAsContinuous);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_isContinuous(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _staticAsContinuous);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_isContinuous,2,0) {(void*) boxptr_NBBackendUtil_isContinuous,0}};
#define boxvar_NBBackendUtil_isContinuous MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_isContinuous)


DLLDirection
modelica_boolean omc_NBBackendUtil_isOnlyTimeDependentFold(threadData_t *threadData, modelica_metatype _exp, modelica_boolean __omcQ_24in_5Fb);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_isOnlyTimeDependentFold(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fb);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_isOnlyTimeDependentFold,2,0) {(void*) boxptr_NBBackendUtil_isOnlyTimeDependentFold,0}};
#define boxvar_NBBackendUtil_isOnlyTimeDependentFold MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_isOnlyTimeDependentFold)


DLLDirection
modelica_boolean omc_NBBackendUtil_isOnlyTimeDependent(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_isOnlyTimeDependent(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_isOnlyTimeDependent,2,0) {(void*) boxptr_NBBackendUtil_isOnlyTimeDependent,0}};
#define boxvar_NBBackendUtil_isOnlyTimeDependent MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_isOnlyTimeDependent)


DLLDirection
modelica_integer omc_NBBackendUtil_noNameHashExp(threadData_t *threadData, modelica_metatype _exp, modelica_integer _mod);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_noNameHashExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _mod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_noNameHashExp,2,0) {(void*) boxptr_NBBackendUtil_noNameHashExp,0}};
#define boxvar_NBBackendUtil_noNameHashExp MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_noNameHashExp)


DLLDirection
modelica_integer omc_NBBackendUtil_noNameHashEq(threadData_t *threadData, modelica_metatype _eq, modelica_integer _mod);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_noNameHashEq(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _mod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_noNameHashEq,2,0) {(void*) boxptr_NBBackendUtil_noNameHashEq,0}};
#define boxvar_NBBackendUtil_noNameHashEq MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_noNameHashEq)


DLLDirection
modelica_boolean omc_NBBackendUtil_indexTplGt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_indexTplGt(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_indexTplGt,2,0) {(void*) boxptr_NBBackendUtil_indexTplGt,0}};
#define boxvar_NBBackendUtil_indexTplGt MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_indexTplGt)


DLLDirection
modelica_integer omc_NBBackendUtil_countElem(threadData_t *threadData, modelica_metatype _m);
DLLDirection
modelica_metatype boxptr_NBBackendUtil_countElem(threadData_t *threadData, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_countElem,2,0) {(void*) boxptr_NBBackendUtil_countElem,0}};
#define boxvar_NBBackendUtil_countElem MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_countElem)


DLLDirection
modelica_metatype omc_NBBackendUtil_findTrueIndices(threadData_t *threadData, modelica_metatype _arr);
#define boxptr_NBBackendUtil_findTrueIndices omc_NBBackendUtil_findTrueIndices
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_findTrueIndices,2,0) {(void*) boxptr_NBBackendUtil_findTrueIndices,0}};
#define boxvar_NBBackendUtil_findTrueIndices MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_findTrueIndices)


DLLDirection
modelica_metatype omc_NBBackendUtil_convertRational(threadData_t *threadData, modelica_metatype _r);
#define boxptr_NBBackendUtil_convertRational omc_NBBackendUtil_convertRational
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBackendUtil_convertRational,2,0) {(void*) boxptr_NBBackendUtil_convertRational,0}};
#define boxvar_NBBackendUtil_convertRational MMC_REFSTRUCTLIT(boxvar_lit_NBBackendUtil_convertRational)

#ifdef __cplusplus
}
#endif
#endif
