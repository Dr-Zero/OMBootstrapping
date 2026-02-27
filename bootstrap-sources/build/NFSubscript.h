#ifndef NFSubscript__H
#define NFSubscript__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Subscript_NOSUB__desc;

extern struct record_description Absyn_Subscript_SUBSCRIPT__desc;

extern struct record_description DAE_Subscript_INDEX__desc;

extern struct record_description DAE_Subscript_SLICE__desc;

extern struct record_description DAE_Subscript_WHOLEDIM__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFSubscript_EXPANDED__SLICE__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFSubscript_SLICE__desc;

extern struct record_description NFSubscript_SPLIT__INDEX__desc;

extern struct record_description NFSubscript_UNTYPED__desc;

extern struct record_description NFSubscript_WHOLE__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFSubscript_fillWithWholeLeft(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubs, modelica_integer _targetLength);
DLLDirection
modelica_metatype boxptr_NFSubscript_fillWithWholeLeft(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubs, modelica_metatype _targetLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_fillWithWholeLeft,2,0) {(void*) boxptr_NFSubscript_fillWithWholeLeft,0}};
#define boxvar_NFSubscript_fillWithWholeLeft MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_fillWithWholeLeft)


DLLDirection
modelica_boolean omc_NFSubscript_isLiteral(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isLiteral(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isLiteral,2,0) {(void*) boxptr_NFSubscript_isLiteral,0}};
#define boxvar_NFSubscript_isLiteral MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isLiteral)


DLLDirection
modelica_metatype omc_NFSubscript_splitIndexDimExp(threadData_t *threadData, modelica_metatype _sub);
#define boxptr_NFSubscript_splitIndexDimExp omc_NFSubscript_splitIndexDimExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_splitIndexDimExp,2,0) {(void*) boxptr_NFSubscript_splitIndexDimExp,0}};
#define boxvar_NFSubscript_splitIndexDimExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_splitIndexDimExp)


DLLDirection
modelica_integer omc_NFSubscript_hash(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_hash(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_hash,2,0) {(void*) boxptr_NFSubscript_hash,0}};
#define boxvar_NFSubscript_hash MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_hash)


DLLDirection
modelica_metatype omc_NFSubscript_expandSplitIndices(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _indicesToKeep);
#define boxptr_NFSubscript_expandSplitIndices omc_NFSubscript_expandSplitIndices
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_expandSplitIndices,2,0) {(void*) boxptr_NFSubscript_expandSplitIndices,0}};
#define boxvar_NFSubscript_expandSplitIndices MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_expandSplitIndices)


DLLDirection
modelica_boolean omc_NFSubscript_isSplitFromOrigin(threadData_t *threadData, modelica_metatype _sub, modelica_metatype _origin);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSplitFromOrigin(threadData_t *threadData, modelica_metatype _sub, modelica_metatype _origin);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitFromOrigin,2,0) {(void*) boxptr_NFSubscript_isSplitFromOrigin,0}};
#define boxvar_NFSubscript_isSplitFromOrigin MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitFromOrigin)


DLLDirection
modelica_boolean omc_NFSubscript_isSplitClassProxy(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSplitClassProxy(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitClassProxy,2,0) {(void*) boxptr_NFSubscript_isSplitClassProxy,0}};
#define boxvar_NFSubscript_isSplitClassProxy MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitClassProxy)


DLLDirection
modelica_boolean omc_NFSubscript_isSplitIndex(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSplitIndex(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitIndex,2,0) {(void*) boxptr_NFSubscript_isSplitIndex,0}};
#define boxvar_NFSubscript_isSplitIndex MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSplitIndex)


DLLDirection
modelica_boolean omc_NFSubscript_isSplit(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSplit(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSplit,2,0) {(void*) boxptr_NFSubscript_isSplit,0}};
#define boxvar_NFSubscript_isSplit MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSplit)


DLLDirection
modelica_boolean omc_NFSubscript_isFirst(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isFirst(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isFirst,2,0) {(void*) boxptr_NFSubscript_isFirst,0}};
#define boxvar_NFSubscript_isFirst MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isFirst)


DLLDirection
modelica_metatype omc_NFSubscript_first(threadData_t *threadData, modelica_metatype _dim);
#define boxptr_NFSubscript_first omc_NFSubscript_first
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_first,2,0) {(void*) boxptr_NFSubscript_first,0}};
#define boxvar_NFSubscript_first MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_first)


DLLDirection
modelica_metatype omc_NFSubscript_nth(threadData_t *threadData, modelica_metatype _dim, modelica_integer _i);
DLLDirection
modelica_metatype boxptr_NFSubscript_nth(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_nth,2,0) {(void*) boxptr_NFSubscript_nth,0}};
#define boxvar_NFSubscript_nth MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_nth)


DLLDirection
modelica_metatype omc_NFSubscript_mergeList(threadData_t *threadData, modelica_metatype _newSubs, modelica_metatype _oldSubs, modelica_integer _dimensions, modelica_boolean _backend, modelica_metatype *out_remainingSubs);
DLLDirection
modelica_metatype boxptr_NFSubscript_mergeList(threadData_t *threadData, modelica_metatype _newSubs, modelica_metatype _oldSubs, modelica_metatype _dimensions, modelica_metatype _backend, modelica_metatype *out_remainingSubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_mergeList,2,0) {(void*) boxptr_NFSubscript_mergeList,0}};
#define boxvar_NFSubscript_mergeList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_mergeList)


DLLDirection
modelica_integer omc_NFSubscript_purityList(threadData_t *threadData, modelica_metatype _subscripts);
DLLDirection
modelica_metatype boxptr_NFSubscript_purityList(threadData_t *threadData, modelica_metatype _subscripts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_purityList,2,0) {(void*) boxptr_NFSubscript_purityList,0}};
#define boxvar_NFSubscript_purityList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_purityList)


DLLDirection
modelica_integer omc_NFSubscript_purity(threadData_t *threadData, modelica_metatype _subscript);
DLLDirection
modelica_metatype boxptr_NFSubscript_purity(threadData_t *threadData, modelica_metatype _subscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_purity,2,0) {(void*) boxptr_NFSubscript_purity,0}};
#define boxvar_NFSubscript_purity MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_purity)


DLLDirection
modelica_integer omc_NFSubscript_variabilityList(threadData_t *threadData, modelica_metatype _subscripts);
DLLDirection
modelica_metatype boxptr_NFSubscript_variabilityList(threadData_t *threadData, modelica_metatype _subscripts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_variabilityList,2,0) {(void*) boxptr_NFSubscript_variabilityList,0}};
#define boxvar_NFSubscript_variabilityList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_variabilityList)


DLLDirection
modelica_integer omc_NFSubscript_variability(threadData_t *threadData, modelica_metatype _subscript);
DLLDirection
modelica_metatype boxptr_NFSubscript_variability(threadData_t *threadData, modelica_metatype _subscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_variability,2,0) {(void*) boxptr_NFSubscript_variability,0}};
#define boxvar_NFSubscript_variability MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_variability)


DLLDirection
modelica_metatype omc_NFSubscript_expandList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFSubscript_expandList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_expandList,2,0) {(void*) boxptr_NFSubscript_expandList,0}};
#define boxvar_NFSubscript_expandList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_expandList)


DLLDirection
modelica_metatype omc_NFSubscript_expandSlice(threadData_t *threadData, modelica_metatype _subscript, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFSubscript_expandSlice(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_expandSlice,2,0) {(void*) boxptr_NFSubscript_expandSlice,0}};
#define boxvar_NFSubscript_expandSlice MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_expandSlice)


DLLDirection
modelica_metatype omc_NFSubscript_expand(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFSubscript_expand(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_expand,2,0) {(void*) boxptr_NFSubscript_expand,0}};
#define boxvar_NFSubscript_expand MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_expand)


DLLDirection
modelica_metatype omc_NFSubscript_scalarizeList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFSubscript_scalarizeList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_scalarizeList,2,0) {(void*) boxptr_NFSubscript_scalarizeList,0}};
#define boxvar_NFSubscript_scalarizeList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_scalarizeList)


DLLDirection
modelica_metatype omc_NFSubscript_scalarize(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFSubscript_scalarize(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_scalarize,2,0) {(void*) boxptr_NFSubscript_scalarize,0}};
#define boxvar_NFSubscript_scalarize MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_scalarize)


DLLDirection
modelica_metatype omc_NFSubscript_fromDimension(threadData_t *threadData, modelica_metatype _dimension);
#define boxptr_NFSubscript_fromDimension omc_NFSubscript_fromDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_fromDimension,2,0) {(void*) boxptr_NFSubscript_fromDimension,0}};
#define boxvar_NFSubscript_fromDimension MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_fromDimension)


DLLDirection
modelica_metatype omc_NFSubscript_toDimension(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toDimension omc_NFSubscript_toDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toDimension,2,0) {(void*) boxptr_NFSubscript_toDimension,0}};
#define boxvar_NFSubscript_toDimension MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toDimension)


DLLDirection
modelica_metatype omc_NFSubscript_simplifyList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_boolean _trim);
DLLDirection
modelica_metatype boxptr_NFSubscript_simplifyList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _dimensions, modelica_metatype _trim);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_simplifyList,2,0) {(void*) boxptr_NFSubscript_simplifyList,0}};
#define boxvar_NFSubscript_simplifyList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_simplifyList)


DLLDirection
modelica_metatype omc_NFSubscript_simplifySlice(threadData_t *threadData, modelica_metatype _slice, modelica_metatype _dimension);
#define boxptr_NFSubscript_simplifySlice omc_NFSubscript_simplifySlice
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_simplifySlice,2,0) {(void*) boxptr_NFSubscript_simplifySlice,0}};
#define boxvar_NFSubscript_simplifySlice MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_simplifySlice)


DLLDirection
modelica_metatype omc_NFSubscript_simplify(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension);
#define boxptr_NFSubscript_simplify omc_NFSubscript_simplify
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_simplify,2,0) {(void*) boxptr_NFSubscript_simplify,0}};
#define boxvar_NFSubscript_simplify MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_simplify)


DLLDirection
modelica_metatype omc_NFSubscript_eval(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _target);
#define boxptr_NFSubscript_eval omc_NFSubscript_eval
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_eval,2,0) {(void*) boxptr_NFSubscript_eval,0}};
#define boxvar_NFSubscript_eval MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_eval)


DLLDirection
modelica_metatype omc_NFSubscript_toJSONList(threadData_t *threadData, modelica_metatype _subscripts);
#define boxptr_NFSubscript_toJSONList omc_NFSubscript_toJSONList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toJSONList,2,0) {(void*) boxptr_NFSubscript_toJSONList,0}};
#define boxvar_NFSubscript_toJSONList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toJSONList)


DLLDirection
modelica_metatype omc_NFSubscript_toJSON(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toJSON omc_NFSubscript_toJSON
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toJSON,2,0) {(void*) boxptr_NFSubscript_toJSON,0}};
#define boxvar_NFSubscript_toJSON MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toJSON)


DLLDirection
modelica_string omc_NFSubscript_toFlatStringList(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _format);
#define boxptr_NFSubscript_toFlatStringList omc_NFSubscript_toFlatStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toFlatStringList,2,0) {(void*) boxptr_NFSubscript_toFlatStringList,0}};
#define boxvar_NFSubscript_toFlatStringList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toFlatStringList)


DLLDirection
modelica_string omc_NFSubscript_toFlatString(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _format);
#define boxptr_NFSubscript_toFlatString omc_NFSubscript_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toFlatString,2,0) {(void*) boxptr_NFSubscript_toFlatString,0}};
#define boxvar_NFSubscript_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toFlatString)


DLLDirection
modelica_string omc_NFSubscript_toStringList(threadData_t *threadData, modelica_metatype _subscripts);
#define boxptr_NFSubscript_toStringList omc_NFSubscript_toStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toStringList,2,0) {(void*) boxptr_NFSubscript_toStringList,0}};
#define boxvar_NFSubscript_toStringList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toStringList)


DLLDirection
modelica_string omc_NFSubscript_toString(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toString omc_NFSubscript_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toString,2,0) {(void*) boxptr_NFSubscript_toString,0}};
#define boxvar_NFSubscript_toString MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toString)


DLLDirection
modelica_metatype omc_NFSubscript_toDAE(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toDAE omc_NFSubscript_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toDAE,2,0) {(void*) boxptr_NFSubscript_toDAE,0}};
#define boxvar_NFSubscript_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toDAE)


DLLDirection
modelica_metatype omc_NFSubscript_toAbsyn(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toAbsyn omc_NFSubscript_toAbsyn
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toAbsyn,2,0) {(void*) boxptr_NFSubscript_toAbsyn,0}};
#define boxvar_NFSubscript_toAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toAbsyn)


DLLDirection
modelica_metatype omc_NFSubscript_mapFoldExpShallow(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFSubscript_mapFoldExpShallow omc_NFSubscript_mapFoldExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_mapFoldExpShallow,2,0) {(void*) boxptr_NFSubscript_mapFoldExpShallow,0}};
#define boxvar_NFSubscript_mapFoldExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_mapFoldExpShallow)


DLLDirection
modelica_metatype omc_NFSubscript_mapFoldExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFSubscript_mapFoldExp omc_NFSubscript_mapFoldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_mapFoldExp,2,0) {(void*) boxptr_NFSubscript_mapFoldExp,0}};
#define boxvar_NFSubscript_mapFoldExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_mapFoldExp)


DLLDirection
modelica_metatype omc_NFSubscript_foldExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func, modelica_metatype _arg);
#define boxptr_NFSubscript_foldExp omc_NFSubscript_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_foldExp,2,0) {(void*) boxptr_NFSubscript_foldExp,0}};
#define boxvar_NFSubscript_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_foldExp)


DLLDirection
modelica_metatype omc_NFSubscript_mapShallowExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
#define boxptr_NFSubscript_mapShallowExp omc_NFSubscript_mapShallowExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_mapShallowExp,2,0) {(void*) boxptr_NFSubscript_mapShallowExp,0}};
#define boxvar_NFSubscript_mapShallowExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_mapShallowExp)


DLLDirection
modelica_metatype omc_NFSubscript_mapExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
#define boxptr_NFSubscript_mapExp omc_NFSubscript_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_mapExp,2,0) {(void*) boxptr_NFSubscript_mapExp,0}};
#define boxvar_NFSubscript_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_mapExp)


DLLDirection
void omc_NFSubscript_applyExpShallow(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
#define boxptr_NFSubscript_applyExpShallow omc_NFSubscript_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_applyExpShallow,2,0) {(void*) boxptr_NFSubscript_applyExpShallow,0}};
#define boxvar_NFSubscript_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_applyExpShallow)


DLLDirection
void omc_NFSubscript_applyExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
#define boxptr_NFSubscript_applyExp omc_NFSubscript_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_applyExp,2,0) {(void*) boxptr_NFSubscript_applyExp,0}};
#define boxvar_NFSubscript_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_applyExp)


DLLDirection
modelica_boolean omc_NFSubscript_listContainsExpShallow(threadData_t *threadData, modelica_metatype _subscripts, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFSubscript_listContainsExpShallow(threadData_t *threadData, modelica_metatype _subscripts, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_listContainsExpShallow,2,0) {(void*) boxptr_NFSubscript_listContainsExpShallow,0}};
#define boxvar_NFSubscript_listContainsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_listContainsExpShallow)


DLLDirection
modelica_boolean omc_NFSubscript_containsExpShallow(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFSubscript_containsExpShallow(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_containsExpShallow,2,0) {(void*) boxptr_NFSubscript_containsExpShallow,0}};
#define boxvar_NFSubscript_containsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_containsExpShallow)


DLLDirection
modelica_boolean omc_NFSubscript_listContainsExp(threadData_t *threadData, modelica_metatype _subscripts, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFSubscript_listContainsExp(threadData_t *threadData, modelica_metatype _subscripts, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_listContainsExp,2,0) {(void*) boxptr_NFSubscript_listContainsExp,0}};
#define boxvar_NFSubscript_listContainsExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_listContainsExp)


DLLDirection
modelica_boolean omc_NFSubscript_containsExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFSubscript_containsExp(threadData_t *threadData, modelica_metatype _subscript, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_containsExp,2,0) {(void*) boxptr_NFSubscript_containsExp,0}};
#define boxvar_NFSubscript_containsExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_containsExp)


DLLDirection
modelica_integer omc_NFSubscript_compareList(threadData_t *threadData, modelica_metatype _subscripts1, modelica_metatype _subscripts2);
DLLDirection
modelica_metatype boxptr_NFSubscript_compareList(threadData_t *threadData, modelica_metatype _subscripts1, modelica_metatype _subscripts2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_compareList,2,0) {(void*) boxptr_NFSubscript_compareList,0}};
#define boxvar_NFSubscript_compareList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_compareList)


DLLDirection
modelica_integer omc_NFSubscript_compare(threadData_t *threadData, modelica_metatype _subscript1, modelica_metatype _subscript2);
DLLDirection
modelica_metatype boxptr_NFSubscript_compare(threadData_t *threadData, modelica_metatype _subscript1, modelica_metatype _subscript2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_compare,2,0) {(void*) boxptr_NFSubscript_compare,0}};
#define boxvar_NFSubscript_compare MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_compare)


DLLDirection
modelica_boolean omc_NFSubscript_isEqualList(threadData_t *threadData, modelica_metatype _subscripts1, modelica_metatype _subscripts2);
DLLDirection
modelica_metatype boxptr_NFSubscript_isEqualList(threadData_t *threadData, modelica_metatype _subscripts1, modelica_metatype _subscripts2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isEqualList,2,0) {(void*) boxptr_NFSubscript_isEqualList,0}};
#define boxvar_NFSubscript_isEqualList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isEqualList)


DLLDirection
modelica_boolean omc_NFSubscript_isEqual(threadData_t *threadData, modelica_metatype _subscript1, modelica_metatype _subscript2);
DLLDirection
modelica_metatype boxptr_NFSubscript_isEqual(threadData_t *threadData, modelica_metatype _subscript1, modelica_metatype _subscript2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isEqual,2,0) {(void*) boxptr_NFSubscript_isEqual,0}};
#define boxvar_NFSubscript_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isEqual)


DLLDirection
modelica_boolean omc_NFSubscript_isBackendIterator(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isBackendIterator(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isBackendIterator,2,0) {(void*) boxptr_NFSubscript_isBackendIterator,0}};
#define boxvar_NFSubscript_isBackendIterator MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isBackendIterator)


DLLDirection
modelica_metatype omc_NFSubscript_toIterator(threadData_t *threadData, modelica_metatype _sub);
#define boxptr_NFSubscript_toIterator omc_NFSubscript_toIterator
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toIterator,2,0) {(void*) boxptr_NFSubscript_toIterator,0}};
#define boxvar_NFSubscript_toIterator MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toIterator)


DLLDirection
modelica_boolean omc_NFSubscript_isIterator(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isIterator(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isIterator,2,0) {(void*) boxptr_NFSubscript_isIterator,0}};
#define boxvar_NFSubscript_isIterator MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isIterator)


DLLDirection
modelica_boolean omc_NFSubscript_equalsIterator(threadData_t *threadData, modelica_metatype _sub, modelica_metatype _iterator);
DLLDirection
modelica_metatype boxptr_NFSubscript_equalsIterator(threadData_t *threadData, modelica_metatype _sub, modelica_metatype _iterator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_equalsIterator,2,0) {(void*) boxptr_NFSubscript_equalsIterator,0}};
#define boxvar_NFSubscript_equalsIterator MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_equalsIterator)


DLLDirection
modelica_boolean omc_NFSubscript_isScalarLiteral(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isScalarLiteral(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isScalarLiteral,2,0) {(void*) boxptr_NFSubscript_isScalarLiteral,0}};
#define boxvar_NFSubscript_isScalarLiteral MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isScalarLiteral)


DLLDirection
modelica_boolean omc_NFSubscript_isScalar(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isScalar(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isScalar,2,0) {(void*) boxptr_NFSubscript_isScalar,0}};
#define boxvar_NFSubscript_isScalar MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isScalar)


DLLDirection
modelica_boolean omc_NFSubscript_isSliced(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSliced(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSliced,2,0) {(void*) boxptr_NFSubscript_isSliced,0}};
#define boxvar_NFSubscript_isSliced MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSliced)


DLLDirection
modelica_boolean omc_NFSubscript_isSimple(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isSimple(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isSimple,2,0) {(void*) boxptr_NFSubscript_isSimple,0}};
#define boxvar_NFSubscript_isSimple MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isSimple)


DLLDirection
modelica_boolean omc_NFSubscript_isWhole(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isWhole(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isWhole,2,0) {(void*) boxptr_NFSubscript_isWhole,0}};
#define boxvar_NFSubscript_isWhole MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isWhole)


DLLDirection
modelica_boolean omc_NFSubscript_isIndex(threadData_t *threadData, modelica_metatype _sub);
DLLDirection
modelica_metatype boxptr_NFSubscript_isIndex(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_isIndex,2,0) {(void*) boxptr_NFSubscript_isIndex,0}};
#define boxvar_NFSubscript_isIndex MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_isIndex)


DLLDirection
modelica_metatype omc_NFSubscript_makeSplitIndex(threadData_t *threadData, modelica_metatype _node, modelica_integer _dimIndex);
DLLDirection
modelica_metatype boxptr_NFSubscript_makeSplitIndex(threadData_t *threadData, modelica_metatype _node, modelica_metatype _dimIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_makeSplitIndex,2,0) {(void*) boxptr_NFSubscript_makeSplitIndex,0}};
#define boxvar_NFSubscript_makeSplitIndex MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_makeSplitIndex)


DLLDirection
modelica_metatype omc_NFSubscript_makeIndex(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFSubscript_makeIndex omc_NFSubscript_makeIndex
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_makeIndex,2,0) {(void*) boxptr_NFSubscript_makeIndex,0}};
#define boxvar_NFSubscript_makeIndex MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_makeIndex)


DLLDirection
modelica_metatype omc_NFSubscript_toIndexList(threadData_t *threadData, modelica_metatype _subscript, modelica_integer _length);
DLLDirection
modelica_metatype boxptr_NFSubscript_toIndexList(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _length);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toIndexList,2,0) {(void*) boxptr_NFSubscript_toIndexList,0}};
#define boxvar_NFSubscript_toIndexList MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toIndexList)


DLLDirection
modelica_metatype omc_NFSubscript_toIntegerOpt(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toIntegerOpt omc_NFSubscript_toIntegerOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toIntegerOpt,2,0) {(void*) boxptr_NFSubscript_toIntegerOpt,0}};
#define boxvar_NFSubscript_toIntegerOpt MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toIntegerOpt)


DLLDirection
modelica_integer omc_NFSubscript_toInteger(threadData_t *threadData, modelica_metatype _subscript);
DLLDirection
modelica_metatype boxptr_NFSubscript_toInteger(threadData_t *threadData, modelica_metatype _subscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toInteger,2,0) {(void*) boxptr_NFSubscript_toInteger,0}};
#define boxvar_NFSubscript_toInteger MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toInteger)


DLLDirection
modelica_metatype omc_NFSubscript_toExp(threadData_t *threadData, modelica_metatype _subscript);
#define boxptr_NFSubscript_toExp omc_NFSubscript_toExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_toExp,2,0) {(void*) boxptr_NFSubscript_toExp,0}};
#define boxvar_NFSubscript_toExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_toExp)


DLLDirection
modelica_metatype omc_NFSubscript_fromTypedExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFSubscript_fromTypedExp omc_NFSubscript_fromTypedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_fromTypedExp,2,0) {(void*) boxptr_NFSubscript_fromTypedExp,0}};
#define boxvar_NFSubscript_fromTypedExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_fromTypedExp)


DLLDirection
modelica_metatype omc_NFSubscript_fromExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFSubscript_fromExp omc_NFSubscript_fromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSubscript_fromExp,2,0) {(void*) boxptr_NFSubscript_fromExp,0}};
#define boxvar_NFSubscript_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NFSubscript_fromExp)

#ifdef __cplusplus
}
#endif
#endif
