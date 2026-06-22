#ifndef NBSorting__H
#define NBSorting__H
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

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description NBSorting_LoopIdentifier_LOOP__IDENTIFIER__desc;

extern struct record_description NBSorting_SuperNode_ALGEBRAIC__LOOP__desc;

extern struct record_description NBSorting_SuperNode_ARRAY__BUCKET__desc;

extern struct record_description NBSorting_SuperNode_ELEMENT__desc;

extern struct record_description NBSorting_SuperNode_SINGLE__desc;

extern struct record_description NBSorting_Value_MULTI__VAL__desc;

extern struct record_description NBSorting_Value_SINGLE__VAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NBSorting_SuperNode_collapse(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _super_nodes, modelica_metatype _m, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns);
#define boxptr_NBSorting_SuperNode_collapse omc_NBSorting_SuperNode_collapse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_collapse,2,0) {(void*) boxptr_NBSorting_SuperNode_collapse,0}};
#define boxvar_NBSorting_SuperNode_collapse MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_collapse)


DLLDirection
modelica_metatype omc_NBSorting_SuperNode_create(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _eqn_map, modelica_metatype _scc_phase1, modelica_metatype _buck, modelica_metatype *out_phase2_matching, modelica_metatype *out_super_nodes);
#define boxptr_NBSorting_SuperNode_create omc_NBSorting_SuperNode_create
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_create,2,0) {(void*) boxptr_NBSorting_SuperNode_create,0}};
#define boxvar_NBSorting_SuperNode_create MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_create)


DLLDirection
modelica_metatype omc_NBSorting_SuperNode_getEqnIndices(threadData_t *threadData, modelica_metatype _node);
#define boxptr_NBSorting_SuperNode_getEqnIndices omc_NBSorting_SuperNode_getEqnIndices
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_getEqnIndices,2,0) {(void*) boxptr_NBSorting_SuperNode_getEqnIndices,0}};
#define boxvar_NBSorting_SuperNode_getEqnIndices MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_getEqnIndices)


DLLDirection
modelica_boolean omc_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node);
DLLDirection
modelica_metatype boxptr_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_isArrayBucket,2,0) {(void*) boxptr_NBSorting_SuperNode_isArrayBucket,0}};
#define boxvar_NBSorting_SuperNode_isArrayBucket MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_isArrayBucket)


DLLDirection
modelica_string omc_NBSorting_SuperNode_toString(threadData_t *threadData, modelica_metatype _node);
#define boxptr_NBSorting_SuperNode_toString omc_NBSorting_SuperNode_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_toString,2,0) {(void*) boxptr_NBSorting_SuperNode_toString,0}};
#define boxvar_NBSorting_SuperNode_toString MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_toString)


DLLDirection
modelica_metatype omc_NBSorting_LoopIdentifier_fromSCC(threadData_t *threadData, modelica_metatype _scc, modelica_metatype _mapping, modelica_metatype _matching);
#define boxptr_NBSorting_LoopIdentifier_fromSCC omc_NBSorting_LoopIdentifier_fromSCC
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_fromSCC,2,0) {(void*) boxptr_NBSorting_LoopIdentifier_fromSCC,0}};
#define boxvar_NBSorting_LoopIdentifier_fromSCC MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_fromSCC)


DLLDirection
modelica_string omc_NBSorting_LoopIdentifier_toString(threadData_t *threadData, modelica_metatype _li);
#define boxptr_NBSorting_LoopIdentifier_toString omc_NBSorting_LoopIdentifier_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_toString,2,0) {(void*) boxptr_NBSorting_LoopIdentifier_toString,0}};
#define boxvar_NBSorting_LoopIdentifier_toString MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_toString)


DLLDirection
modelica_boolean omc_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2);
DLLDirection
modelica_metatype boxptr_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_isEqual,2,0) {(void*) boxptr_NBSorting_LoopIdentifier_isEqual,0}};
#define boxvar_NBSorting_LoopIdentifier_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_isEqual)


DLLDirection
modelica_integer omc_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li);
DLLDirection
modelica_metatype boxptr_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_hash,2,0) {(void*) boxptr_NBSorting_LoopIdentifier_hash,0}};
#define boxvar_NBSorting_LoopIdentifier_hash MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_LoopIdentifier_hash)


DLLDirection
modelica_metatype omc_NBSorting_tarjanScalar(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching);
#define boxptr_NBSorting_tarjanScalar omc_NBSorting_tarjanScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_tarjanScalar,2,0) {(void*) boxptr_NBSorting_tarjanScalar,0}};
#define boxvar_NBSorting_tarjanScalar MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_tarjanScalar)


DLLDirection
modelica_metatype omc_NBSorting_tarjan(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns);
#define boxptr_NBSorting_tarjan omc_NBSorting_tarjan
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_tarjan,2,0) {(void*) boxptr_NBSorting_tarjan,0}};
#define boxvar_NBSorting_tarjan MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_tarjan)


DLLDirection
modelica_boolean omc_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl);
DLLDirection
modelica_metatype boxptr_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_relevant,2,0) {(void*) boxptr_NBSorting_PseudoBucket_relevant,0}};
#define boxvar_NBSorting_PseudoBucket_relevant MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_relevant)


DLLDirection
modelica_metatype omc_NBSorting_PseudoBucket_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftpl, modelica_metatype _set);
#define boxptr_NBSorting_PseudoBucket_filter omc_NBSorting_PseudoBucket_filter
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_filter,2,0) {(void*) boxptr_NBSorting_PseudoBucket_filter,0}};
#define boxvar_NBSorting_PseudoBucket_filter MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_filter)


DLLDirection
void omc_NBSorting_PseudoBucket_addMulti(threadData_t *threadData, modelica_metatype _cref, modelica_integer _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets);
DLLDirection
void boxptr_NBSorting_PseudoBucket_addMulti(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_addMulti,2,0) {(void*) boxptr_NBSorting_PseudoBucket_addMulti,0}};
#define boxvar_NBSorting_PseudoBucket_addMulti MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_addMulti)


DLLDirection
void omc_NBSorting_PseudoBucket_add(threadData_t *threadData, modelica_integer _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets);
DLLDirection
void boxptr_NBSorting_PseudoBucket_add(threadData_t *threadData, modelica_metatype _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_add,2,0) {(void*) boxptr_NBSorting_PseudoBucket_add,0}};
#define boxvar_NBSorting_PseudoBucket_add MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_add)


DLLDirection
modelica_metatype omc_NBSorting_PseudoBucket_create(threadData_t *threadData, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_metatype _modes);
#define boxptr_NBSorting_PseudoBucket_create omc_NBSorting_PseudoBucket_create
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_create,2,0) {(void*) boxptr_NBSorting_PseudoBucket_create,0}};
#define boxvar_NBSorting_PseudoBucket_create MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_PseudoBucket_create)


DLLDirection
modelica_metatype omc_NBSorting_Value_addCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _cref);
#define boxptr_NBSorting_Value_addCref omc_NBSorting_Value_addCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_Value_addCref,2,0) {(void*) boxptr_NBSorting_Value_addCref,0}};
#define boxvar_NBSorting_Value_addCref MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_Value_addCref)


DLLDirection
modelica_metatype omc_NBSorting_Value_addEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_integer _eqn_idx);
DLLDirection
modelica_metatype boxptr_NBSorting_Value_addEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _eqn_idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_Value_addEquation,2,0) {(void*) boxptr_NBSorting_Value_addEquation,0}};
#define boxvar_NBSorting_Value_addEquation MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_Value_addEquation)


DLLDirection
modelica_metatype omc_NBSorting_Value_getEquations(threadData_t *threadData, modelica_metatype _val);
#define boxptr_NBSorting_Value_getEquations omc_NBSorting_Value_getEquations
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_Value_getEquations,2,0) {(void*) boxptr_NBSorting_Value_getEquations,0}};
#define boxvar_NBSorting_Value_getEquations MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_Value_getEquations)


DLLDirection
modelica_metatype omc_NBSorting_Value_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _set);
#define boxptr_NBSorting_Value_filter omc_NBSorting_Value_filter
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_Value_filter,2,0) {(void*) boxptr_NBSorting_Value_filter,0}};
#define boxvar_NBSorting_Value_filter MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_Value_filter)


DLLDirection
modelica_string omc_NBSorting_Value_toString(threadData_t *threadData, modelica_metatype _val);
#define boxptr_NBSorting_Value_toString omc_NBSorting_Value_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_Value_toString,2,0) {(void*) boxptr_NBSorting_Value_toString,0}};
#define boxvar_NBSorting_Value_toString MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_Value_toString)

#ifdef __cplusplus
}
#endif
#endif
