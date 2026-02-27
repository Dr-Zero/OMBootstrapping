#ifndef NFAlgorithm__H
#define NFAlgorithm__H
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

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description Gettext_TranslatableContent_notrans__desc;


#define boxptr_NFAlgorithm_expressionOutput omc_NFAlgorithm_expressionOutput


#define boxptr_NFAlgorithm_expressionInputs omc_NFAlgorithm_expressionInputs


#define boxptr_NFAlgorithm_statementInputsOutputs omc_NFAlgorithm_statementInputsOutputs


DLLDirection
modelica_boolean omc_NFAlgorithm_isDiscrete(threadData_t *threadData, modelica_metatype _alg);
DLLDirection
modelica_metatype boxptr_NFAlgorithm_isDiscrete(threadData_t *threadData, modelica_metatype _alg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_isDiscrete,2,0) {(void*) boxptr_NFAlgorithm_isDiscrete,0}};
#define boxvar_NFAlgorithm_isDiscrete MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_isDiscrete)


DLLDirection
modelica_boolean omc_NFAlgorithm_isEmpty(threadData_t *threadData, modelica_metatype _alg);
DLLDirection
modelica_metatype boxptr_NFAlgorithm_isEmpty(threadData_t *threadData, modelica_metatype _alg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_isEmpty,2,0) {(void*) boxptr_NFAlgorithm_isEmpty,0}};
#define boxvar_NFAlgorithm_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_isEmpty)


DLLDirection
modelica_boolean omc_NFAlgorithm_isEqual(threadData_t *threadData, modelica_metatype _alg1, modelica_metatype _alg2);
DLLDirection
modelica_metatype boxptr_NFAlgorithm_isEqual(threadData_t *threadData, modelica_metatype _alg1, modelica_metatype _alg2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_isEqual,2,0) {(void*) boxptr_NFAlgorithm_isEqual,0}};
#define boxvar_NFAlgorithm_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_isEqual)


DLLDirection
modelica_metatype omc_NFAlgorithm_getInputsOutputs(threadData_t *threadData, modelica_metatype _statements, modelica_metatype *out_outputs_lst);
#define boxptr_NFAlgorithm_getInputsOutputs omc_NFAlgorithm_getInputsOutputs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_getInputsOutputs,2,0) {(void*) boxptr_NFAlgorithm_getInputsOutputs,0}};
#define boxvar_NFAlgorithm_getInputsOutputs MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_getInputsOutputs)


DLLDirection
modelica_metatype omc_NFAlgorithm_setInputsOutputs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg);
#define boxptr_NFAlgorithm_setInputsOutputs omc_NFAlgorithm_setInputsOutputs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_setInputsOutputs,2,0) {(void*) boxptr_NFAlgorithm_setInputsOutputs,0}};
#define boxvar_NFAlgorithm_setInputsOutputs MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_setInputsOutputs)


DLLDirection
modelica_string omc_NFAlgorithm_toString(threadData_t *threadData, modelica_metatype _alg, modelica_string _indent);
#define boxptr_NFAlgorithm_toString omc_NFAlgorithm_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_toString,2,0) {(void*) boxptr_NFAlgorithm_toString,0}};
#define boxvar_NFAlgorithm_toString MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_toString)


DLLDirection
modelica_metatype omc_NFAlgorithm_foldExpList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFAlgorithm_foldExpList omc_NFAlgorithm_foldExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_foldExpList,2,0) {(void*) boxptr_NFAlgorithm_foldExpList,0}};
#define boxvar_NFAlgorithm_foldExpList MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_foldExpList)


DLLDirection
modelica_metatype omc_NFAlgorithm_foldExp(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFAlgorithm_foldExp omc_NFAlgorithm_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_foldExp,2,0) {(void*) boxptr_NFAlgorithm_foldExp,0}};
#define boxvar_NFAlgorithm_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_foldExp)


DLLDirection
modelica_metatype omc_NFAlgorithm_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falgs, modelica_fnptr _func);
#define boxptr_NFAlgorithm_mapExpList omc_NFAlgorithm_mapExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_mapExpList,2,0) {(void*) boxptr_NFAlgorithm_mapExpList,0}};
#define boxvar_NFAlgorithm_mapExpList MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_mapExpList)


DLLDirection
modelica_metatype omc_NFAlgorithm_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_fnptr _func);
#define boxptr_NFAlgorithm_mapExp omc_NFAlgorithm_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_mapExp,2,0) {(void*) boxptr_NFAlgorithm_mapExp,0}};
#define boxvar_NFAlgorithm_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_mapExp)


DLLDirection
modelica_metatype omc_NFAlgorithm_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_fnptr _fn);
#define boxptr_NFAlgorithm_map omc_NFAlgorithm_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_map,2,0) {(void*) boxptr_NFAlgorithm_map,0}};
#define boxvar_NFAlgorithm_map MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_map)


DLLDirection
void omc_NFAlgorithm_applyExpList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func);
#define boxptr_NFAlgorithm_applyExpList omc_NFAlgorithm_applyExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyExpList,2,0) {(void*) boxptr_NFAlgorithm_applyExpList,0}};
#define boxvar_NFAlgorithm_applyExpList MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyExpList)


DLLDirection
void omc_NFAlgorithm_applyExp(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func);
#define boxptr_NFAlgorithm_applyExp omc_NFAlgorithm_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyExp,2,0) {(void*) boxptr_NFAlgorithm_applyExp,0}};
#define boxvar_NFAlgorithm_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyExp)


DLLDirection
void omc_NFAlgorithm_apply(threadData_t *threadData, modelica_metatype _alg, modelica_fnptr _func);
#define boxptr_NFAlgorithm_apply omc_NFAlgorithm_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_apply,2,0) {(void*) boxptr_NFAlgorithm_apply,0}};
#define boxvar_NFAlgorithm_apply MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_apply)


DLLDirection
void omc_NFAlgorithm_applyList(threadData_t *threadData, modelica_metatype _algs, modelica_fnptr _func);
#define boxptr_NFAlgorithm_applyList omc_NFAlgorithm_applyList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyList,2,0) {(void*) boxptr_NFAlgorithm_applyList,0}};
#define boxvar_NFAlgorithm_applyList MMC_REFSTRUCTLIT(boxvar_lit_NFAlgorithm_applyList)

#ifdef __cplusplus
}
#endif
#endif
