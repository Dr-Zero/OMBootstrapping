#ifndef NFDimension__H
#define NFDimension__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_Dimension_DIM__BOOLEAN__desc;

extern struct record_description DAE_Dimension_DIM__ENUM__desc;

extern struct record_description DAE_Dimension_DIM__EXP__desc;

extern struct record_description DAE_Dimension_DIM__INTEGER__desc;

extern struct record_description DAE_Dimension_DIM__UNKNOWN__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFDimension_BOOLEAN__desc;

extern struct record_description NFDimension_ENUM__desc;

extern struct record_description NFDimension_EXP__desc;

extern struct record_description NFDimension_INTEGER__desc;

extern struct record_description NFDimension_RESIZABLE__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFDimension_UNTYPED__desc;

extern struct record_description NFExpression_BINARY__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_RANGE__desc;

extern struct record_description NFExpression_SIZE__desc;

extern struct record_description NFOperator_OPERATOR__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFDimension_typeOf(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_typeOf omc_NFDimension_typeOf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_typeOf,2,0) {(void*) boxptr_NFDimension_typeOf,0}};
#define boxvar_NFDimension_typeOf MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_typeOf)


DLLDirection
modelica_metatype omc_NFDimension_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim);
#define boxptr_NFDimension_simplify omc_NFDimension_simplify
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_simplify,2,0) {(void*) boxptr_NFDimension_simplify,0}};
#define boxvar_NFDimension_simplify MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_simplify)


DLLDirection
modelica_metatype omc_NFDimension_eval(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _target);
#define boxptr_NFDimension_eval omc_NFDimension_eval
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_eval,2,0) {(void*) boxptr_NFDimension_eval,0}};
#define boxvar_NFDimension_eval MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_eval)


DLLDirection
modelica_metatype omc_NFDimension_foldExpList(threadData_t *threadData, modelica_metatype _dims, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFDimension_foldExpList omc_NFDimension_foldExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_foldExpList,2,0) {(void*) boxptr_NFDimension_foldExpList,0}};
#define boxvar_NFDimension_foldExpList MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_foldExpList)


DLLDirection
modelica_metatype omc_NFDimension_foldExp(threadData_t *threadData, modelica_metatype _dim, modelica_fnptr _func, modelica_metatype _arg);
#define boxptr_NFDimension_foldExp omc_NFDimension_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_foldExp,2,0) {(void*) boxptr_NFDimension_foldExp,0}};
#define boxvar_NFDimension_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_foldExp)


DLLDirection
modelica_metatype omc_NFDimension_mapExp(threadData_t *threadData, modelica_metatype _dim, modelica_fnptr _func);
#define boxptr_NFDimension_mapExp omc_NFDimension_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_mapExp,2,0) {(void*) boxptr_NFDimension_mapExp,0}};
#define boxvar_NFDimension_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_mapExp)


DLLDirection
modelica_integer omc_NFDimension_variability(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_variability(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_variability,2,0) {(void*) boxptr_NFDimension_variability,0}};
#define boxvar_NFDimension_variability MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_variability)


DLLDirection
modelica_boolean omc_NFDimension_expIsUpperBound(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_expIsUpperBound(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_expIsUpperBound,2,0) {(void*) boxptr_NFDimension_expIsUpperBound,0}};
#define boxvar_NFDimension_expIsUpperBound MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_expIsUpperBound)


DLLDirection
modelica_metatype omc_NFDimension_upperBoundExp(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_upperBoundExp omc_NFDimension_upperBoundExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_upperBoundExp,2,0) {(void*) boxptr_NFDimension_upperBoundExp,0}};
#define boxvar_NFDimension_upperBoundExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_upperBoundExp)


DLLDirection
modelica_boolean omc_NFDimension_expIsLowerBound(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_NFDimension_expIsLowerBound(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_expIsLowerBound,2,0) {(void*) boxptr_NFDimension_expIsLowerBound,0}};
#define boxvar_NFDimension_expIsLowerBound MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_expIsLowerBound)


DLLDirection
modelica_metatype omc_NFDimension_lowerBoundExp(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_lowerBoundExp omc_NFDimension_lowerBoundExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_lowerBoundExp,2,0) {(void*) boxptr_NFDimension_lowerBoundExp,0}};
#define boxvar_NFDimension_lowerBoundExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_lowerBoundExp)


DLLDirection
modelica_metatype omc_NFDimension_sizeExp(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_sizeExp omc_NFDimension_sizeExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_sizeExp,2,0) {(void*) boxptr_NFDimension_sizeExp,0}};
#define boxvar_NFDimension_sizeExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_sizeExp)


DLLDirection
modelica_metatype omc_NFDimension_endExp(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_integer _index);
DLLDirection
modelica_metatype boxptr_NFDimension_endExp(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_endExp,2,0) {(void*) boxptr_NFDimension_endExp,0}};
#define boxvar_NFDimension_endExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_endExp)


DLLDirection
modelica_string omc_NFDimension_toFlatString(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _format);
#define boxptr_NFDimension_toFlatString omc_NFDimension_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_toFlatString,2,0) {(void*) boxptr_NFDimension_toFlatString,0}};
#define boxvar_NFDimension_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_toFlatString)


DLLDirection
modelica_string omc_NFDimension_toStringList(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _brackets);
DLLDirection
modelica_metatype boxptr_NFDimension_toStringList(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _brackets);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_toStringList,2,0) {(void*) boxptr_NFDimension_toStringList,0}};
#define boxvar_NFDimension_toStringList MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_toStringList)


DLLDirection
modelica_integer omc_NFDimension_hashList(threadData_t *threadData, modelica_metatype _dims);
DLLDirection
modelica_metatype boxptr_NFDimension_hashList(threadData_t *threadData, modelica_metatype _dims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_hashList,2,0) {(void*) boxptr_NFDimension_hashList,0}};
#define boxvar_NFDimension_hashList MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_hashList)


DLLDirection
modelica_string omc_NFDimension_toString(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_toString omc_NFDimension_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_toString,2,0) {(void*) boxptr_NFDimension_toString,0}};
#define boxvar_NFDimension_toString MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_toString)


DLLDirection
modelica_metatype omc_NFDimension_subscriptType(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_subscriptType omc_NFDimension_subscriptType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_subscriptType,2,0) {(void*) boxptr_NFDimension_subscriptType,0}};
#define boxvar_NFDimension_subscriptType MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_subscriptType)


DLLDirection
modelica_boolean omc_NFDimension_isOne(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_isOne(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isOne,2,0) {(void*) boxptr_NFDimension_isOne,0}};
#define boxvar_NFDimension_isOne MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isOne)


DLLDirection
modelica_boolean omc_NFDimension_isZero(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_isZero(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isZero,2,0) {(void*) boxptr_NFDimension_isZero,0}};
#define boxvar_NFDimension_isZero MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isZero)


DLLDirection
modelica_boolean omc_NFDimension_isUnknown(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_isUnknown(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isUnknown,2,0) {(void*) boxptr_NFDimension_isUnknown,0}};
#define boxvar_NFDimension_isUnknown MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isUnknown)


DLLDirection
modelica_boolean omc_NFDimension_isKnown(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _allowExp);
DLLDirection
modelica_metatype boxptr_NFDimension_isKnown(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _allowExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isKnown,2,0) {(void*) boxptr_NFDimension_isKnown,0}};
#define boxvar_NFDimension_isKnown MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isKnown)


DLLDirection
modelica_boolean omc_NFDimension_allEqualKnown(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
DLLDirection
modelica_metatype boxptr_NFDimension_allEqualKnown(threadData_t *threadData, modelica_metatype _dims1, modelica_metatype _dims2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_allEqualKnown,2,0) {(void*) boxptr_NFDimension_allEqualKnown,0}};
#define boxvar_NFDimension_allEqualKnown MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_allEqualKnown)


DLLDirection
modelica_boolean omc_NFDimension_isResizable(threadData_t *threadData, modelica_metatype _dim);
DLLDirection
modelica_metatype boxptr_NFDimension_isResizable(threadData_t *threadData, modelica_metatype _dim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isResizable,2,0) {(void*) boxptr_NFDimension_isResizable,0}};
#define boxvar_NFDimension_isResizable MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isResizable)


DLLDirection
modelica_boolean omc_NFDimension_isSizeOf(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _node, modelica_integer _index);
DLLDirection
modelica_metatype boxptr_NFDimension_isSizeOf(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _node, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isSizeOf,2,0) {(void*) boxptr_NFDimension_isSizeOf,0}};
#define boxvar_NFDimension_isSizeOf MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isSizeOf)


DLLDirection
modelica_boolean omc_NFDimension_isEqualKnownSize(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _node1, modelica_integer _index1, modelica_metatype _dim2, modelica_metatype _node2, modelica_integer _index2);
DLLDirection
modelica_metatype boxptr_NFDimension_isEqualKnownSize(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _node1, modelica_metatype _index1, modelica_metatype _dim2, modelica_metatype _node2, modelica_metatype _index2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isEqualKnownSize,2,0) {(void*) boxptr_NFDimension_isEqualKnownSize,0}};
#define boxvar_NFDimension_isEqualKnownSize MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isEqualKnownSize)


DLLDirection
modelica_boolean omc_NFDimension_isEqualKnown(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
DLLDirection
modelica_metatype boxptr_NFDimension_isEqualKnown(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isEqualKnown,2,0) {(void*) boxptr_NFDimension_isEqualKnown,0}};
#define boxvar_NFDimension_isEqualKnown MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isEqualKnown)


DLLDirection
modelica_boolean omc_NFDimension_isEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
DLLDirection
modelica_metatype boxptr_NFDimension_isEqual(threadData_t *threadData, modelica_metatype _dim1, modelica_metatype _dim2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_isEqual,2,0) {(void*) boxptr_NFDimension_isEqual,0}};
#define boxvar_NFDimension_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_isEqual)


DLLDirection
modelica_integer omc_NFDimension_sizesProduct(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFDimension_sizesProduct(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_sizesProduct,2,0) {(void*) boxptr_NFDimension_sizesProduct,0}};
#define boxvar_NFDimension_sizesProduct MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_sizesProduct)


DLLDirection
modelica_metatype omc_NFDimension_sizes(threadData_t *threadData, modelica_metatype _dims, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFDimension_sizes(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_sizes,2,0) {(void*) boxptr_NFDimension_sizes,0}};
#define boxvar_NFDimension_sizes MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_sizes)


DLLDirection
modelica_integer omc_NFDimension_size(threadData_t *threadData, modelica_metatype _dim, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFDimension_size(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_size,2,0) {(void*) boxptr_NFDimension_size,0}};
#define boxvar_NFDimension_size MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_size)


#define boxptr_NFDimension_add_addOpt omc_NFDimension_add_addOpt


#define boxptr_NFDimension_add_addExp omc_NFDimension_add_addExp


DLLDirection
modelica_metatype omc_NFDimension_add(threadData_t *threadData, modelica_metatype _a, modelica_metatype _b);
#define boxptr_NFDimension_add omc_NFDimension_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_add,2,0) {(void*) boxptr_NFDimension_add,0}};
#define boxvar_NFDimension_add MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_add)


DLLDirection
modelica_metatype omc_NFDimension_toDAE(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_toDAE omc_NFDimension_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_toDAE,2,0) {(void*) boxptr_NFDimension_toDAE,0}};
#define boxvar_NFDimension_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_toDAE)


DLLDirection
modelica_metatype omc_NFDimension_toRange(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFDimension_toRange omc_NFDimension_toRange
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_toRange,2,0) {(void*) boxptr_NFDimension_toRange,0}};
#define boxvar_NFDimension_toRange MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_toRange)


DLLDirection
modelica_metatype omc_NFDimension_fromExpList(threadData_t *threadData, modelica_metatype _expl);
#define boxptr_NFDimension_fromExpList omc_NFDimension_fromExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_fromExpList,2,0) {(void*) boxptr_NFDimension_fromExpList,0}};
#define boxvar_NFDimension_fromExpList MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_fromExpList)


DLLDirection
modelica_metatype omc_NFDimension_fromExpArray(threadData_t *threadData, modelica_metatype _expl);
#define boxptr_NFDimension_fromExpArray omc_NFDimension_fromExpArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_fromExpArray,2,0) {(void*) boxptr_NFDimension_fromExpArray,0}};
#define boxvar_NFDimension_fromExpArray MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_fromExpArray)


DLLDirection
modelica_metatype omc_NFDimension_fromInteger(threadData_t *threadData, modelica_integer _n, modelica_integer _var);
DLLDirection
modelica_metatype boxptr_NFDimension_fromInteger(threadData_t *threadData, modelica_metatype _n, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_fromInteger,2,0) {(void*) boxptr_NFDimension_fromInteger,0}};
#define boxvar_NFDimension_fromInteger MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_fromInteger)


DLLDirection
modelica_metatype omc_NFDimension_fromRange(threadData_t *threadData, modelica_metatype _range);
#define boxptr_NFDimension_fromRange omc_NFDimension_fromRange
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_fromRange,2,0) {(void*) boxptr_NFDimension_fromRange,0}};
#define boxvar_NFDimension_fromRange MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_fromRange)


DLLDirection
modelica_metatype omc_NFDimension_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_integer _var);
DLLDirection
modelica_metatype boxptr_NFDimension_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFDimension_fromExp,2,0) {(void*) boxptr_NFDimension_fromExp,0}};
#define boxvar_NFDimension_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NFDimension_fromExp)

#ifdef __cplusplus
}
#endif
#endif
