#ifndef NBMatching__H
#define NBMatching__H
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

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description NBEquation_Iterator_EMPTY__desc;

extern struct record_description NBMatching_MATCHING__desc;

extern struct record_description NBSlice_SLICE__desc;


DLLDirection
modelica_metatype omc_NBMatching_getMatches(threadData_t *threadData, modelica_metatype _matching, modelica_metatype _mapping_opt, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype *out_unmatched_vars, modelica_metatype *out_matched_eqns, modelica_metatype *out_unmatched_eqns);
#define boxptr_NBMatching_getMatches omc_NBMatching_getMatches
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_getMatches,2,0) {(void*) boxptr_NBMatching_getMatches,0}};
#define boxvar_NBMatching_getMatches MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_getMatches)


DLLDirection
modelica_metatype omc_NBMatching_getAssignments(threadData_t *threadData, modelica_metatype _matching, modelica_metatype _m, modelica_metatype _mT, modelica_metatype *out_eqn_to_var);
#define boxptr_NBMatching_getAssignments omc_NBMatching_getAssignments
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_getAssignments,2,0) {(void*) boxptr_NBMatching_getAssignments,0}};
#define boxvar_NBMatching_getAssignments MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_getAssignments)


DLLDirection
modelica_boolean omc_NBMatching_isPerfect(threadData_t *threadData, modelica_metatype _matching);
DLLDirection
modelica_metatype boxptr_NBMatching_isPerfect(threadData_t *threadData, modelica_metatype _matching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_isPerfect,2,0) {(void*) boxptr_NBMatching_isPerfect,0}};
#define boxvar_NBMatching_isPerfect MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_isPerfect)


DLLDirection
modelica_boolean omc_NBMatching_isEmpty(threadData_t *threadData, modelica_metatype _matching);
DLLDirection
modelica_metatype boxptr_NBMatching_isEmpty(threadData_t *threadData, modelica_metatype _matching);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_isEmpty,2,0) {(void*) boxptr_NBMatching_isEmpty,0}};
#define boxvar_NBMatching_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_isEmpty)


DLLDirection
modelica_metatype omc_NBMatching_continue__(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_boolean _transposed, modelica_boolean _clear, modelica_metatype *out_marked_eqns, modelica_metatype *out_mapping, modelica_integer *out_matrixStrictness);
DLLDirection
modelica_metatype boxptr_NBMatching_continue__(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_metatype _transposed, modelica_metatype _clear, modelica_metatype *out_marked_eqns, modelica_metatype *out_mapping, modelica_metatype *out_matrixStrictness);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_continue__,2,0) {(void*) boxptr_NBMatching_continue__,0}};
#define boxvar_NBMatching_continue__ MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_continue__)


DLLDirection
modelica_metatype omc_NBMatching_singular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _funcMap, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_integer _kind, modelica_boolean _transposed, modelica_boolean _clear, modelica_metatype *out_adj, modelica_metatype *out_full, modelica_metatype *out_vars, modelica_metatype *out_eqns, modelica_metatype *out_varData, modelica_metatype *out_eqData);
DLLDirection
modelica_metatype boxptr_NBMatching_singular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype __omcQ_24in_5Fadj, modelica_metatype __omcQ_24in_5Ffull, modelica_metatype __omcQ_24in_5Fvars, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _funcMap, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _kind, modelica_metatype _transposed, modelica_metatype _clear, modelica_metatype *out_adj, modelica_metatype *out_full, modelica_metatype *out_vars, modelica_metatype *out_eqns, modelica_metatype *out_varData, modelica_metatype *out_eqData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_singular,2,0) {(void*) boxptr_NBMatching_singular,0}};
#define boxvar_NBMatching_singular MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_singular)


DLLDirection
modelica_metatype omc_NBMatching_regular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_boolean _transposed, modelica_boolean _partially, modelica_boolean _clear);
DLLDirection
modelica_metatype boxptr_NBMatching_regular(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmatching, modelica_metatype _adj, modelica_metatype _transposed, modelica_metatype _partially, modelica_metatype _clear);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_regular,2,0) {(void*) boxptr_NBMatching_regular,0}};
#define boxvar_NBMatching_regular MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_regular)


DLLDirection
modelica_metatype omc_NBMatching_trivial(threadData_t *threadData, modelica_integer _n);
DLLDirection
modelica_metatype boxptr_NBMatching_trivial(threadData_t *threadData, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_trivial,2,0) {(void*) boxptr_NBMatching_trivial,0}};
#define boxvar_NBMatching_trivial MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_trivial)


DLLDirection
modelica_string omc_NBMatching_toString(threadData_t *threadData, modelica_metatype _matching, modelica_string __omcQ_24in_5Fstr);
#define boxptr_NBMatching_toString omc_NBMatching_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBMatching_toString,2,0) {(void*) boxptr_NBMatching_toString,0}};
#define boxvar_NBMatching_toString MMC_REFSTRUCTLIT(boxvar_lit_NBMatching_toString)

#ifdef __cplusplus
}
#endif
#endif
