#ifndef Rational__H
#define Rational__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Rational_RATIONAL__desc;


DLLDirection
modelica_metatype omc_Rational_div(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
#define boxptr_Rational_div omc_Rational_div
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_div,2,0) {(void*) boxptr_Rational_div,0}};
#define boxvar_Rational_div MMC_REFSTRUCTLIT(boxvar_lit_Rational_div)


DLLDirection
modelica_metatype omc_Rational_inv(threadData_t *threadData, modelica_metatype _r);
#define boxptr_Rational_inv omc_Rational_inv
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_inv,2,0) {(void*) boxptr_Rational_inv,0}};
#define boxvar_Rational_inv MMC_REFSTRUCTLIT(boxvar_lit_Rational_inv)


DLLDirection
modelica_metatype omc_Rational_mul(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
#define boxptr_Rational_mul omc_Rational_mul
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_mul,2,0) {(void*) boxptr_Rational_mul,0}};
#define boxvar_Rational_mul MMC_REFSTRUCTLIT(boxvar_lit_Rational_mul)


DLLDirection
modelica_metatype omc_Rational_sub(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
#define boxptr_Rational_sub omc_Rational_sub
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_sub,2,0) {(void*) boxptr_Rational_sub,0}};
#define boxvar_Rational_sub MMC_REFSTRUCTLIT(boxvar_lit_Rational_sub)


DLLDirection
modelica_metatype omc_Rational_neg(threadData_t *threadData, modelica_metatype _r);
#define boxptr_Rational_neg omc_Rational_neg
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_neg,2,0) {(void*) boxptr_Rational_neg,0}};
#define boxvar_Rational_neg MMC_REFSTRUCTLIT(boxvar_lit_Rational_neg)


DLLDirection
modelica_metatype omc_Rational_add(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
#define boxptr_Rational_add omc_Rational_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_add,2,0) {(void*) boxptr_Rational_add,0}};
#define boxvar_Rational_add MMC_REFSTRUCTLIT(boxvar_lit_Rational_add)


DLLDirection
modelica_metatype omc_Rational_normalize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fr);
#define boxptr_Rational_normalize omc_Rational_normalize
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_normalize,2,0) {(void*) boxptr_Rational_normalize,0}};
#define boxvar_Rational_normalize MMC_REFSTRUCTLIT(boxvar_lit_Rational_normalize)


DLLDirection
modelica_string omc_Rational_toString(threadData_t *threadData, modelica_metatype _r);
#define boxptr_Rational_toString omc_Rational_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_toString,2,0) {(void*) boxptr_Rational_toString,0}};
#define boxvar_Rational_toString MMC_REFSTRUCTLIT(boxvar_lit_Rational_toString)


DLLDirection
modelica_integer omc_Rational_compare(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
DLLDirection
modelica_metatype boxptr_Rational_compare(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_compare,2,0) {(void*) boxptr_Rational_compare,0}};
#define boxvar_Rational_compare MMC_REFSTRUCTLIT(boxvar_lit_Rational_compare)


DLLDirection
modelica_boolean omc_Rational_isEqual(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
DLLDirection
modelica_metatype boxptr_Rational_isEqual(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Rational_isEqual,2,0) {(void*) boxptr_Rational_isEqual,0}};
#define boxvar_Rational_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Rational_isEqual)

#ifdef __cplusplus
}
#endif
#endif
