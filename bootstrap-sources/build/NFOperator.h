#ifndef NFOperator__H
#define NFOperator__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Operator_ADD__desc;

extern struct record_description Absyn_Operator_ADD__EW__desc;

extern struct record_description Absyn_Operator_AND__desc;

extern struct record_description Absyn_Operator_DIV__desc;

extern struct record_description Absyn_Operator_DIV__EW__desc;

extern struct record_description Absyn_Operator_EQUAL__desc;

extern struct record_description Absyn_Operator_GREATER__desc;

extern struct record_description Absyn_Operator_LESS__desc;

extern struct record_description Absyn_Operator_LESSEQ__desc;

extern struct record_description Absyn_Operator_MUL__desc;

extern struct record_description Absyn_Operator_MUL__EW__desc;

extern struct record_description Absyn_Operator_NEQUAL__desc;

extern struct record_description Absyn_Operator_NOT__desc;

extern struct record_description Absyn_Operator_OR__desc;

extern struct record_description Absyn_Operator_POW__desc;

extern struct record_description Absyn_Operator_POW__EW__desc;

extern struct record_description Absyn_Operator_SUB__desc;

extern struct record_description Absyn_Operator_SUB__EW__desc;

extern struct record_description Absyn_Operator_UMINUS__desc;

extern struct record_description Absyn_Operator_UMINUS__EW__desc;

extern struct record_description DAE_Operator_ADD__desc;

extern struct record_description DAE_Operator_ADD__ARR__desc;

extern struct record_description DAE_Operator_ADD__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_AND__desc;

extern struct record_description DAE_Operator_DIV__desc;

extern struct record_description DAE_Operator_DIV__ARR__desc;

extern struct record_description DAE_Operator_DIV__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_DIV__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_EQUAL__desc;

extern struct record_description DAE_Operator_GREATER__desc;

extern struct record_description DAE_Operator_GREATEREQ__desc;

extern struct record_description DAE_Operator_LESS__desc;

extern struct record_description DAE_Operator_LESSEQ__desc;

extern struct record_description DAE_Operator_MUL__desc;

extern struct record_description DAE_Operator_MUL__ARR__desc;

extern struct record_description DAE_Operator_MUL__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_MUL__MATRIX__PRODUCT__desc;

extern struct record_description DAE_Operator_MUL__SCALAR__PRODUCT__desc;

extern struct record_description DAE_Operator_NEQUAL__desc;

extern struct record_description DAE_Operator_NOT__desc;

extern struct record_description DAE_Operator_OR__desc;

extern struct record_description DAE_Operator_POW__desc;

extern struct record_description DAE_Operator_POW__ARR__desc;

extern struct record_description DAE_Operator_POW__ARR2__desc;

extern struct record_description DAE_Operator_POW__ARRAY__SCALAR__desc;

extern struct record_description DAE_Operator_POW__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_SUB__desc;

extern struct record_description DAE_Operator_SUB__ARR__desc;

extern struct record_description DAE_Operator_SUB__SCALAR__ARRAY__desc;

extern struct record_description DAE_Operator_UMINUS__desc;

extern struct record_description DAE_Operator_UMINUS__ARR__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description JSON_STRING__desc;

extern struct record_description NFOperator_OPERATOR__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_string omc_NFOperator_opToString(threadData_t *threadData, modelica_integer _op);
DLLDirection
modelica_metatype boxptr_NFOperator_opToString(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_opToString,2,0) {(void*) boxptr_NFOperator_opToString,0}};
#define boxvar_NFOperator_opToString MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_opToString)


DLLDirection
modelica_string omc_NFOperator_toDebugString(threadData_t *threadData, modelica_metatype _op);
#define boxptr_NFOperator_toDebugString omc_NFOperator_toDebugString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_toDebugString,2,0) {(void*) boxptr_NFOperator_toDebugString,0}};
#define boxvar_NFOperator_toDebugString MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_toDebugString)


DLLDirection
modelica_boolean omc_NFOperator_isCombineableSize(threadData_t *threadData, modelica_integer _scl1, modelica_integer _scl2);
DLLDirection
modelica_metatype boxptr_NFOperator_isCombineableSize(threadData_t *threadData, modelica_metatype _scl1, modelica_metatype _scl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isCombineableSize,2,0) {(void*) boxptr_NFOperator_isCombineableSize,0}};
#define boxvar_NFOperator_isCombineableSize MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isCombineableSize)


DLLDirection
modelica_boolean omc_NFOperator_isCombineableMath(threadData_t *threadData, modelica_integer _mcl1, modelica_integer _mcl2);
DLLDirection
modelica_metatype boxptr_NFOperator_isCombineableMath(threadData_t *threadData, modelica_metatype _mcl1, modelica_metatype _mcl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isCombineableMath,2,0) {(void*) boxptr_NFOperator_isCombineableMath,0}};
#define boxvar_NFOperator_isCombineableMath MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isCombineableMath)


DLLDirection
modelica_boolean omc_NFOperator_isCombineable(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
DLLDirection
modelica_metatype boxptr_NFOperator_isCombineable(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isCombineable,2,0) {(void*) boxptr_NFOperator_isCombineable,0}};
#define boxvar_NFOperator_isCombineable MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isCombineable)


DLLDirection
modelica_boolean omc_NFOperator_reduction(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_reduction(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_reduction,2,0) {(void*) boxptr_NFOperator_reduction,0}};
#define boxvar_NFOperator_reduction MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_reduction)


DLLDirection
modelica_metatype omc_NFOperator_repetition(threadData_t *threadData, modelica_metatype _operator);
#define boxptr_NFOperator_repetition omc_NFOperator_repetition
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_repetition,2,0) {(void*) boxptr_NFOperator_repetition,0}};
#define boxvar_NFOperator_repetition MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_repetition)


DLLDirection
modelica_boolean omc_NFOperator_isSoftCommutative(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_isSoftCommutative(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isSoftCommutative,2,0) {(void*) boxptr_NFOperator_isSoftCommutative,0}};
#define boxvar_NFOperator_isSoftCommutative MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isSoftCommutative)


DLLDirection
modelica_boolean omc_NFOperator_isCommutative(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_isCommutative(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isCommutative,2,0) {(void*) boxptr_NFOperator_isCommutative,0}};
#define boxvar_NFOperator_isCommutative MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isCommutative)


DLLDirection
modelica_boolean omc_NFOperator_isDashClassification(threadData_t *threadData, modelica_integer _mcl);
DLLDirection
modelica_metatype boxptr_NFOperator_isDashClassification(threadData_t *threadData, modelica_metatype _mcl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isDashClassification,2,0) {(void*) boxptr_NFOperator_isDashClassification,0}};
#define boxvar_NFOperator_isDashClassification MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isDashClassification)


DLLDirection
modelica_integer omc_NFOperator_combineSizeClassification(threadData_t *threadData, modelica_integer _scl1, modelica_integer _scl2);
DLLDirection
modelica_metatype boxptr_NFOperator_combineSizeClassification(threadData_t *threadData, modelica_metatype _scl1, modelica_metatype _scl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_combineSizeClassification,2,0) {(void*) boxptr_NFOperator_combineSizeClassification,0}};
#define boxvar_NFOperator_combineSizeClassification MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_combineSizeClassification)


DLLDirection
modelica_integer omc_NFOperator_getSizeClassification(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_getSizeClassification(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_getSizeClassification,2,0) {(void*) boxptr_NFOperator_getSizeClassification,0}};
#define boxvar_NFOperator_getSizeClassification MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_getSizeClassification)


DLLDirection
modelica_integer omc_NFOperator_getMathClassification(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_getMathClassification(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_getMathClassification,2,0) {(void*) boxptr_NFOperator_getMathClassification,0}};
#define boxvar_NFOperator_getMathClassification MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_getMathClassification)


DLLDirection
modelica_metatype omc_NFOperator_fromClassification(threadData_t *threadData, modelica_metatype _cl, modelica_metatype _ty);
#define boxptr_NFOperator_fromClassification omc_NFOperator_fromClassification
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_fromClassification,2,0) {(void*) boxptr_NFOperator_fromClassification,0}};
#define boxvar_NFOperator_fromClassification MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_fromClassification)


DLLDirection
modelica_integer omc_NFOperator_classifyAddition(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_classifyAddition(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_classifyAddition,2,0) {(void*) boxptr_NFOperator_classifyAddition,0}};
#define boxvar_NFOperator_classifyAddition MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_classifyAddition)


DLLDirection
modelica_metatype omc_NFOperator_classify(threadData_t *threadData, modelica_metatype _op);
#define boxptr_NFOperator_classify omc_NFOperator_classify
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_classify,2,0) {(void*) boxptr_NFOperator_classify,0}};
#define boxvar_NFOperator_classify MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_classify)


DLLDirection
modelica_string omc_NFOperator_sizeClassificationString(threadData_t *threadData, modelica_integer _scl);
DLLDirection
modelica_metatype boxptr_NFOperator_sizeClassificationString(threadData_t *threadData, modelica_metatype _scl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_sizeClassificationString,2,0) {(void*) boxptr_NFOperator_sizeClassificationString,0}};
#define boxvar_NFOperator_sizeClassificationString MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_sizeClassificationString)


DLLDirection
modelica_string omc_NFOperator_mathClassificationString(threadData_t *threadData, modelica_integer _mcl);
DLLDirection
modelica_metatype boxptr_NFOperator_mathClassificationString(threadData_t *threadData, modelica_metatype _mcl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_mathClassificationString,2,0) {(void*) boxptr_NFOperator_mathClassificationString,0}};
#define boxvar_NFOperator_mathClassificationString MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_mathClassificationString)


DLLDirection
modelica_string omc_NFOperator_classificationString(threadData_t *threadData, modelica_metatype _cla);
#define boxptr_NFOperator_classificationString omc_NFOperator_classificationString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_classificationString,2,0) {(void*) boxptr_NFOperator_classificationString,0}};
#define boxvar_NFOperator_classificationString MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_classificationString)


DLLDirection
modelica_string omc_NFOperator_mathSymbol(threadData_t *threadData, modelica_integer _mcl);
DLLDirection
modelica_metatype boxptr_NFOperator_mathSymbol(threadData_t *threadData, modelica_metatype _mcl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_mathSymbol,2,0) {(void*) boxptr_NFOperator_mathSymbol,0}};
#define boxvar_NFOperator_mathSymbol MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_mathSymbol)


DLLDirection
modelica_boolean omc_NFOperator_isElementWise(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_isElementWise(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isElementWise,2,0) {(void*) boxptr_NFOperator_isElementWise,0}};
#define boxvar_NFOperator_isElementWise MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isElementWise)


DLLDirection
modelica_metatype omc_NFOperator_stripEW(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop);
#define boxptr_NFOperator_stripEW omc_NFOperator_stripEW
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_stripEW,2,0) {(void*) boxptr_NFOperator_stripEW,0}};
#define boxvar_NFOperator_stripEW MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_stripEW)


DLLDirection
modelica_metatype omc_NFOperator_makeArrayScalar(threadData_t *threadData, modelica_metatype _ty, modelica_integer _op);
DLLDirection
modelica_metatype boxptr_NFOperator_makeArrayScalar(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeArrayScalar,2,0) {(void*) boxptr_NFOperator_makeArrayScalar,0}};
#define boxvar_NFOperator_makeArrayScalar MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeArrayScalar)


DLLDirection
modelica_metatype omc_NFOperator_makeScalarArray(threadData_t *threadData, modelica_metatype _ty, modelica_integer _op);
DLLDirection
modelica_metatype boxptr_NFOperator_makeScalarArray(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeScalarArray,2,0) {(void*) boxptr_NFOperator_makeScalarArray,0}};
#define boxvar_NFOperator_makeScalarArray MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeScalarArray)


DLLDirection
modelica_metatype omc_NFOperator_makeNotEqual(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeNotEqual omc_NFOperator_makeNotEqual
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeNotEqual,2,0) {(void*) boxptr_NFOperator_makeNotEqual,0}};
#define boxvar_NFOperator_makeNotEqual MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeNotEqual)


DLLDirection
modelica_metatype omc_NFOperator_makeEqual(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeEqual omc_NFOperator_makeEqual
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeEqual,2,0) {(void*) boxptr_NFOperator_makeEqual,0}};
#define boxvar_NFOperator_makeEqual MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeEqual)


DLLDirection
modelica_metatype omc_NFOperator_makeGreaterEq(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeGreaterEq omc_NFOperator_makeGreaterEq
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeGreaterEq,2,0) {(void*) boxptr_NFOperator_makeGreaterEq,0}};
#define boxvar_NFOperator_makeGreaterEq MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeGreaterEq)


DLLDirection
modelica_metatype omc_NFOperator_makeGreater(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeGreater omc_NFOperator_makeGreater
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeGreater,2,0) {(void*) boxptr_NFOperator_makeGreater,0}};
#define boxvar_NFOperator_makeGreater MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeGreater)


DLLDirection
modelica_metatype omc_NFOperator_makeLessEq(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeLessEq omc_NFOperator_makeLessEq
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeLessEq,2,0) {(void*) boxptr_NFOperator_makeLessEq,0}};
#define boxvar_NFOperator_makeLessEq MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeLessEq)


DLLDirection
modelica_metatype omc_NFOperator_makeLess(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeLess omc_NFOperator_makeLess
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeLess,2,0) {(void*) boxptr_NFOperator_makeLess,0}};
#define boxvar_NFOperator_makeLess MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeLess)


DLLDirection
modelica_metatype omc_NFOperator_makeNot(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeNot omc_NFOperator_makeNot
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeNot,2,0) {(void*) boxptr_NFOperator_makeNot,0}};
#define boxvar_NFOperator_makeNot MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeNot)


DLLDirection
modelica_metatype omc_NFOperator_makeOr(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeOr omc_NFOperator_makeOr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeOr,2,0) {(void*) boxptr_NFOperator_makeOr,0}};
#define boxvar_NFOperator_makeOr MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeOr)


DLLDirection
modelica_metatype omc_NFOperator_makeAnd(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeAnd omc_NFOperator_makeAnd
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeAnd,2,0) {(void*) boxptr_NFOperator_makeAnd,0}};
#define boxvar_NFOperator_makeAnd MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeAnd)


DLLDirection
modelica_metatype omc_NFOperator_makeUMinus(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeUMinus omc_NFOperator_makeUMinus
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeUMinus,2,0) {(void*) boxptr_NFOperator_makeUMinus,0}};
#define boxvar_NFOperator_makeUMinus MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeUMinus)


DLLDirection
modelica_metatype omc_NFOperator_makeDivEW(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeDivEW omc_NFOperator_makeDivEW
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeDivEW,2,0) {(void*) boxptr_NFOperator_makeDivEW,0}};
#define boxvar_NFOperator_makeDivEW MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeDivEW)


DLLDirection
modelica_metatype omc_NFOperator_makeMulEW(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeMulEW omc_NFOperator_makeMulEW
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeMulEW,2,0) {(void*) boxptr_NFOperator_makeMulEW,0}};
#define boxvar_NFOperator_makeMulEW MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeMulEW)


DLLDirection
modelica_metatype omc_NFOperator_makeSubEW(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeSubEW omc_NFOperator_makeSubEW
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeSubEW,2,0) {(void*) boxptr_NFOperator_makeSubEW,0}};
#define boxvar_NFOperator_makeSubEW MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeSubEW)


DLLDirection
modelica_metatype omc_NFOperator_makeAddEW(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeAddEW omc_NFOperator_makeAddEW
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeAddEW,2,0) {(void*) boxptr_NFOperator_makeAddEW,0}};
#define boxvar_NFOperator_makeAddEW MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeAddEW)


DLLDirection
modelica_metatype omc_NFOperator_makePow(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makePow omc_NFOperator_makePow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makePow,2,0) {(void*) boxptr_NFOperator_makePow,0}};
#define boxvar_NFOperator_makePow MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makePow)


DLLDirection
modelica_metatype omc_NFOperator_makeDiv(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeDiv omc_NFOperator_makeDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeDiv,2,0) {(void*) boxptr_NFOperator_makeDiv,0}};
#define boxvar_NFOperator_makeDiv MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeDiv)


DLLDirection
modelica_metatype omc_NFOperator_makeScalarProduct(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeScalarProduct omc_NFOperator_makeScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeScalarProduct,2,0) {(void*) boxptr_NFOperator_makeScalarProduct,0}};
#define boxvar_NFOperator_makeScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeScalarProduct)


DLLDirection
modelica_metatype omc_NFOperator_makeMul(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeMul omc_NFOperator_makeMul
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeMul,2,0) {(void*) boxptr_NFOperator_makeMul,0}};
#define boxvar_NFOperator_makeMul MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeMul)


DLLDirection
modelica_metatype omc_NFOperator_makeSub(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeSub omc_NFOperator_makeSub
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeSub,2,0) {(void*) boxptr_NFOperator_makeSub,0}};
#define boxvar_NFOperator_makeSub MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeSub)


DLLDirection
modelica_metatype omc_NFOperator_makeAdd(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFOperator_makeAdd omc_NFOperator_makeAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_makeAdd,2,0) {(void*) boxptr_NFOperator_makeAdd,0}};
#define boxvar_NFOperator_makeAdd MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_makeAdd)


DLLDirection
modelica_boolean omc_NFOperator_isNonAssociative(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_isNonAssociative(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isNonAssociative,2,0) {(void*) boxptr_NFOperator_isNonAssociative,0}};
#define boxvar_NFOperator_isNonAssociative MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isNonAssociative)


DLLDirection
modelica_boolean omc_NFOperator_isAssociative(threadData_t *threadData, modelica_metatype _op);
DLLDirection
modelica_metatype boxptr_NFOperator_isAssociative(threadData_t *threadData, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isAssociative,2,0) {(void*) boxptr_NFOperator_isAssociative,0}};
#define boxvar_NFOperator_isAssociative MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isAssociative)


DLLDirection
modelica_integer omc_NFOperator_priority(threadData_t *threadData, modelica_metatype _op, modelica_boolean _lhs);
DLLDirection
modelica_metatype boxptr_NFOperator_priority(threadData_t *threadData, modelica_metatype _op, modelica_metatype _lhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_priority,2,0) {(void*) boxptr_NFOperator_priority,0}};
#define boxvar_NFOperator_priority MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_priority)


DLLDirection
modelica_metatype omc_NFOperator_toJSON(threadData_t *threadData, modelica_metatype _operator);
#define boxptr_NFOperator_toJSON omc_NFOperator_toJSON
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_toJSON,2,0) {(void*) boxptr_NFOperator_toJSON,0}};
#define boxvar_NFOperator_toJSON MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_toJSON)


DLLDirection
modelica_string omc_NFOperator_symbol(threadData_t *threadData, modelica_metatype _op, modelica_string _spacing);
#define boxptr_NFOperator_symbol omc_NFOperator_symbol
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_symbol,2,0) {(void*) boxptr_NFOperator_symbol,0}};
#define boxvar_NFOperator_symbol MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_symbol)


DLLDirection
modelica_metatype omc_NFOperator_unlift(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop);
#define boxptr_NFOperator_unlift omc_NFOperator_unlift
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_unlift,2,0) {(void*) boxptr_NFOperator_unlift,0}};
#define boxvar_NFOperator_unlift MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_unlift)


DLLDirection
modelica_metatype omc_NFOperator_scalarize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fop);
#define boxptr_NFOperator_scalarize omc_NFOperator_scalarize
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_scalarize,2,0) {(void*) boxptr_NFOperator_scalarize,0}};
#define boxvar_NFOperator_scalarize MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_scalarize)


DLLDirection
modelica_metatype omc_NFOperator_setType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fop);
#define boxptr_NFOperator_setType omc_NFOperator_setType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_setType,2,0) {(void*) boxptr_NFOperator_setType,0}};
#define boxvar_NFOperator_setType MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_setType)


DLLDirection
modelica_metatype omc_NFOperator_typeOf(threadData_t *threadData, modelica_metatype _op);
#define boxptr_NFOperator_typeOf omc_NFOperator_typeOf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_typeOf,2,0) {(void*) boxptr_NFOperator_typeOf,0}};
#define boxvar_NFOperator_typeOf MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_typeOf)


DLLDirection
modelica_metatype omc_NFOperator_toDAE(threadData_t *threadData, modelica_metatype _op, modelica_boolean *out_swapArguments, modelica_boolean *out_negate);
DLLDirection
modelica_metatype boxptr_NFOperator_toDAE(threadData_t *threadData, modelica_metatype _op, modelica_metatype *out_swapArguments, modelica_metatype *out_negate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_toDAE,2,0) {(void*) boxptr_NFOperator_toDAE,0}};
#define boxvar_NFOperator_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_toDAE)


DLLDirection
modelica_metatype omc_NFOperator_toAbsyn(threadData_t *threadData, modelica_metatype _op);
#define boxptr_NFOperator_toAbsyn omc_NFOperator_toAbsyn
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_toAbsyn,2,0) {(void*) boxptr_NFOperator_toAbsyn,0}};
#define boxvar_NFOperator_toAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_toAbsyn)


DLLDirection
modelica_metatype omc_NFOperator_fromAbsyn(threadData_t *threadData, modelica_metatype _inOperator);
#define boxptr_NFOperator_fromAbsyn omc_NFOperator_fromAbsyn
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_fromAbsyn,2,0) {(void*) boxptr_NFOperator_fromAbsyn,0}};
#define boxvar_NFOperator_fromAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_fromAbsyn)


DLLDirection
modelica_boolean omc_NFOperator_isScalarProduct(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_isScalarProduct(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isScalarProduct,2,0) {(void*) boxptr_NFOperator_isScalarProduct,0}};
#define boxvar_NFOperator_isScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isScalarProduct)


DLLDirection
modelica_boolean omc_NFOperator_isRelational(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_isRelational(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isRelational,2,0) {(void*) boxptr_NFOperator_isRelational,0}};
#define boxvar_NFOperator_isRelational MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isRelational)


DLLDirection
modelica_boolean omc_NFOperator_isLogical(threadData_t *threadData, modelica_metatype _operator);
DLLDirection
modelica_metatype boxptr_NFOperator_isLogical(threadData_t *threadData, modelica_metatype _operator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_isLogical,2,0) {(void*) boxptr_NFOperator_isLogical,0}};
#define boxvar_NFOperator_isLogical MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_isLogical)


DLLDirection
modelica_metatype omc_NFOperator_repairBinary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator, modelica_metatype _ty1, modelica_metatype _ty2);
#define boxptr_NFOperator_repairBinary omc_NFOperator_repairBinary
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_repairBinary,2,0) {(void*) boxptr_NFOperator_repairBinary,0}};
#define boxvar_NFOperator_repairBinary MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_repairBinary)


DLLDirection
modelica_metatype omc_NFOperator_repairMultary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator, modelica_metatype _types);
#define boxptr_NFOperator_repairMultary omc_NFOperator_repairMultary
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_repairMultary,2,0) {(void*) boxptr_NFOperator_repairMultary,0}};
#define boxvar_NFOperator_repairMultary MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_repairMultary)


DLLDirection
modelica_integer omc_NFOperator_typeRestriction(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFOperator_typeRestriction(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_typeRestriction,2,0) {(void*) boxptr_NFOperator_typeRestriction,0}};
#define boxvar_NFOperator_typeRestriction MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_typeRestriction)


DLLDirection
modelica_metatype omc_NFOperator_invert(threadData_t *threadData, modelica_metatype __omcQ_24in_5Foperator);
#define boxptr_NFOperator_invert omc_NFOperator_invert
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_invert,2,0) {(void*) boxptr_NFOperator_invert,0}};
#define boxvar_NFOperator_invert MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_invert)


DLLDirection
modelica_integer omc_NFOperator_compare(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
DLLDirection
modelica_metatype boxptr_NFOperator_compare(threadData_t *threadData, modelica_metatype _op1, modelica_metatype _op2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFOperator_compare,2,0) {(void*) boxptr_NFOperator_compare,0}};
#define boxvar_NFOperator_compare MMC_REFSTRUCTLIT(boxvar_lit_NFOperator_compare)

#ifdef __cplusplus
}
#endif
#endif
