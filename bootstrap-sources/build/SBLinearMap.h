#ifndef SBLinearMap__H
#define SBLinearMap__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SBInterval_INTERVAL__desc;

extern struct record_description SBLinearMap_LINEAR__MAP__desc;


DLLDirection
modelica_string omc_SBLinearMap_toString(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBLinearMap_toString omc_SBLinearMap_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_toString,2,0) {(void*) boxptr_SBLinearMap_toString,0}};
#define boxvar_SBLinearMap_toString MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_toString)


DLLDirection
modelica_metatype omc_SBLinearMap_applyInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterval, modelica_real _gain, modelica_real _offset);
DLLDirection
modelica_metatype boxptr_SBLinearMap_applyInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5Finterval, modelica_metatype _gain, modelica_metatype _offset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_applyInterval,2,0) {(void*) boxptr_SBLinearMap_applyInterval,0}};
#define boxvar_SBLinearMap_applyInterval MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_applyInterval)


DLLDirection
modelica_metatype omc_SBLinearMap_applyMultiInterval(threadData_t *threadData, modelica_metatype __omcQ_24in_5FmultiInt, modelica_metatype _map);
#define boxptr_SBLinearMap_applyMultiInterval omc_SBLinearMap_applyMultiInterval
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_applyMultiInterval,2,0) {(void*) boxptr_SBLinearMap_applyMultiInterval,0}};
#define boxvar_SBLinearMap_applyMultiInterval MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_applyMultiInterval)


DLLDirection
modelica_metatype omc_SBLinearMap_applyAtomicSet(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fatomic, modelica_metatype _map);
#define boxptr_SBLinearMap_applyAtomicSet omc_SBLinearMap_applyAtomicSet
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_applyAtomicSet,2,0) {(void*) boxptr_SBLinearMap_applyAtomicSet,0}};
#define boxvar_SBLinearMap_applyAtomicSet MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_applyAtomicSet)


DLLDirection
modelica_metatype omc_SBLinearMap_apply(threadData_t *threadData, modelica_metatype _domain, modelica_metatype _map);
#define boxptr_SBLinearMap_apply omc_SBLinearMap_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_apply,2,0) {(void*) boxptr_SBLinearMap_apply,0}};
#define boxvar_SBLinearMap_apply MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_apply)


DLLDirection
modelica_metatype omc_SBLinearMap_inverse(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBLinearMap_inverse omc_SBLinearMap_inverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_inverse,2,0) {(void*) boxptr_SBLinearMap_inverse,0}};
#define boxvar_SBLinearMap_inverse MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_inverse)


DLLDirection
modelica_metatype omc_SBLinearMap_compose(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
#define boxptr_SBLinearMap_compose omc_SBLinearMap_compose
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_compose,2,0) {(void*) boxptr_SBLinearMap_compose,0}};
#define boxvar_SBLinearMap_compose MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_compose)


DLLDirection
modelica_boolean omc_SBLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
DLLDirection
modelica_metatype boxptr_SBLinearMap_isEqual(threadData_t *threadData, modelica_metatype _map1, modelica_metatype _map2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_isEqual,2,0) {(void*) boxptr_SBLinearMap_isEqual,0}};
#define boxvar_SBLinearMap_isEqual MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_isEqual)


DLLDirection
modelica_boolean omc_SBLinearMap_isIdentity(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBLinearMap_isIdentity(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_isIdentity,2,0) {(void*) boxptr_SBLinearMap_isIdentity,0}};
#define boxvar_SBLinearMap_isIdentity MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_isIdentity)


DLLDirection
modelica_boolean omc_SBLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBLinearMap_isEmpty(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_isEmpty,2,0) {(void*) boxptr_SBLinearMap_isEmpty,0}};
#define boxvar_SBLinearMap_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_isEmpty)


DLLDirection
modelica_metatype omc_SBLinearMap_offset(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBLinearMap_offset omc_SBLinearMap_offset
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_offset,2,0) {(void*) boxptr_SBLinearMap_offset,0}};
#define boxvar_SBLinearMap_offset MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_offset)


DLLDirection
modelica_metatype omc_SBLinearMap_gain(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBLinearMap_gain omc_SBLinearMap_gain
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_gain,2,0) {(void*) boxptr_SBLinearMap_gain,0}};
#define boxvar_SBLinearMap_gain MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_gain)


DLLDirection
modelica_boolean omc_SBLinearMap_isDim(threadData_t *threadData, modelica_metatype _map, modelica_integer _dim);
DLLDirection
modelica_metatype boxptr_SBLinearMap_isDim(threadData_t *threadData, modelica_metatype _map, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_isDim,2,0) {(void*) boxptr_SBLinearMap_isDim,0}};
#define boxvar_SBLinearMap_isDim MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_isDim)


DLLDirection
modelica_integer omc_SBLinearMap_ndim(threadData_t *threadData, modelica_metatype _map);
DLLDirection
modelica_metatype boxptr_SBLinearMap_ndim(threadData_t *threadData, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_ndim,2,0) {(void*) boxptr_SBLinearMap_ndim,0}};
#define boxvar_SBLinearMap_ndim MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_ndim)


DLLDirection
modelica_metatype omc_SBLinearMap_copy(threadData_t *threadData, modelica_metatype _map);
#define boxptr_SBLinearMap_copy omc_SBLinearMap_copy
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_copy,2,0) {(void*) boxptr_SBLinearMap_copy,0}};
#define boxvar_SBLinearMap_copy MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_copy)


DLLDirection
modelica_metatype omc_SBLinearMap_newIdentity(threadData_t *threadData, modelica_integer _dim);
DLLDirection
modelica_metatype boxptr_SBLinearMap_newIdentity(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_newIdentity,2,0) {(void*) boxptr_SBLinearMap_newIdentity,0}};
#define boxvar_SBLinearMap_newIdentity MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_newIdentity)


DLLDirection
modelica_metatype omc_SBLinearMap_newEmpty(threadData_t *threadData);
#define boxptr_SBLinearMap_newEmpty omc_SBLinearMap_newEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_newEmpty,2,0) {(void*) boxptr_SBLinearMap_newEmpty,0}};
#define boxvar_SBLinearMap_newEmpty MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_newEmpty)


DLLDirection
modelica_metatype omc_SBLinearMap_new(threadData_t *threadData, modelica_metatype _gain, modelica_metatype _offset);
#define boxptr_SBLinearMap_new omc_SBLinearMap_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_SBLinearMap_new,2,0) {(void*) boxptr_SBLinearMap_new,0}};
#define boxvar_SBLinearMap_new MMC_REFSTRUCTLIT(boxvar_lit_SBLinearMap_new)

#ifdef __cplusplus
}
#endif
#endif
