#ifndef NFCall__H
#define NFCall__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description Absyn_Exp_CALL__desc;

extern struct record_description Absyn_ForIterator_ITERATOR__desc;

extern struct record_description Absyn_FunctionArgs_FOR__ITER__FARG__desc;

extern struct record_description Absyn_NamedArg_NAMEDARG__desc;

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description Absyn_ReductionIterType_COMBINE__desc;

extern struct record_description DAE_Exp_CALL__desc;

extern struct record_description DAE_Exp_REDUCTION__desc;

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description DAE_ReductionInfo_REDUCTIONINFO__desc;

extern struct record_description DAE_ReductionIterator_REDUCTIONITER__desc;

extern struct record_description DAE_TailCall_NO__TAIL__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description NFCall_ARG__TYPED__CALL__desc;

extern struct record_description NFCall_TYPED__ARRAY__CONSTRUCTOR__desc;

extern struct record_description NFCall_TYPED__CALL__desc;

extern struct record_description NFCall_TYPED__REDUCTION__desc;

extern struct record_description NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc;

extern struct record_description NFCall_UNTYPED__CALL__desc;

extern struct record_description NFCall_UNTYPED__REDUCTION__desc;

extern struct record_description NFCallAttributes_CALL__ATTR__desc;

extern struct record_description NFCallParameterTree_Tree_EMPTY__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFComplexType_CLASS__desc;

extern struct record_description NFExpression_BINARY__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CAST__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_RANGE__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFFunction_TypedArg_TYPED__ARG__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFInstNode_InstNode_NAME__NODE__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_COMPLEX__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_POLYMORPHIC__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFCall_resolvePolymorphicReturnType omc_NFCall_resolvePolymorphicReturnType


#define boxptr_NFCall_evaluateCallTypeDimExp omc_NFCall_evaluateCallTypeDimExp


#define boxptr_NFCall_buildParameterTree omc_NFCall_buildParameterTree


#define boxptr_NFCall_evaluateCallTypeDim omc_NFCall_evaluateCallTypeDim


#define boxptr_NFCall_devectorizeCall omc_NFCall_devectorizeCall


#define boxptr_NFCall_vectorizeCall omc_NFCall_vectorizeCall


#define boxptr_NFCall_iteratorToDAE omc_NFCall_iteratorToDAE


#define boxptr_NFCall_reductionFoldIterator omc_NFCall_reductionFoldIterator


#define boxptr_NFCall_reductionDefaultValue omc_NFCall_reductionDefaultValue


DLLDirection
modelica_metatype omc_NFCall_makeTypedReduction(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty, modelica_integer _var, modelica_integer _purity, modelica_metatype _arg, modelica_metatype _iters, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFCall_makeTypedReduction(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _purity, modelica_metatype _arg, modelica_metatype _iters, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_makeTypedReduction,2,0) {(void*) boxptr_NFCall_makeTypedReduction,0}};
#define boxvar_NFCall_makeTypedReduction MMC_REFSTRUCTLIT(boxvar_lit_NFCall_makeTypedReduction)


DLLDirection
modelica_boolean omc_NFCall_isCardinality(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isCardinality(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isCardinality,2,0) {(void*) boxptr_NFCall_isCardinality,0}};
#define boxvar_NFCall_isCardinality MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isCardinality)


DLLDirection
modelica_boolean omc_NFCall_isStreamOperator(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isStreamOperator(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isStreamOperator,2,0) {(void*) boxptr_NFCall_isStreamOperator,0}};
#define boxvar_NFCall_isStreamOperator MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isStreamOperator)


DLLDirection
modelica_boolean omc_NFCall_isConnectionsOperator(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isConnectionsOperator(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isConnectionsOperator,2,0) {(void*) boxptr_NFCall_isConnectionsOperator,0}};
#define boxvar_NFCall_isConnectionsOperator MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isConnectionsOperator)


DLLDirection
modelica_metatype omc_NFCall_toArrayConstructor(threadData_t *threadData, modelica_metatype _iCall, modelica_metatype _index_ptr);
#define boxptr_NFCall_toArrayConstructor omc_NFCall_toArrayConstructor
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toArrayConstructor,2,0) {(void*) boxptr_NFCall_toArrayConstructor,0}};
#define boxvar_NFCall_toArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toArrayConstructor)


DLLDirection
void omc_NFCall_updateExternalRecordArgsInType(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFCall_updateExternalRecordArgsInType omc_NFCall_updateExternalRecordArgsInType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_updateExternalRecordArgsInType,2,0) {(void*) boxptr_NFCall_updateExternalRecordArgsInType,0}};
#define boxvar_NFCall_updateExternalRecordArgsInType MMC_REFSTRUCTLIT(boxvar_lit_NFCall_updateExternalRecordArgsInType)


DLLDirection
void omc_NFCall_updateExternalRecordArgs(threadData_t *threadData, modelica_metatype _args);
#define boxptr_NFCall_updateExternalRecordArgs omc_NFCall_updateExternalRecordArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_updateExternalRecordArgs,2,0) {(void*) boxptr_NFCall_updateExternalRecordArgs,0}};
#define boxvar_NFCall_updateExternalRecordArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_updateExternalRecordArgs)


DLLDirection
modelica_metatype omc_NFCall_mapFoldIteratorsExpShallow(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFCall_mapFoldIteratorsExpShallow omc_NFCall_mapFoldIteratorsExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapFoldIteratorsExpShallow,2,0) {(void*) boxptr_NFCall_mapFoldIteratorsExpShallow,0}};
#define boxvar_NFCall_mapFoldIteratorsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapFoldIteratorsExpShallow)


DLLDirection
modelica_metatype omc_NFCall_mapFoldExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg, modelica_metatype *out_foldArg);
#define boxptr_NFCall_mapFoldExpShallow omc_NFCall_mapFoldExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapFoldExpShallow,2,0) {(void*) boxptr_NFCall_mapFoldExpShallow,0}};
#define boxvar_NFCall_mapFoldExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapFoldExpShallow)


DLLDirection
modelica_metatype omc_NFCall_mapFoldIteratorsExp(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg);
#define boxptr_NFCall_mapFoldIteratorsExp omc_NFCall_mapFoldIteratorsExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapFoldIteratorsExp,2,0) {(void*) boxptr_NFCall_mapFoldIteratorsExp,0}};
#define boxvar_NFCall_mapFoldIteratorsExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapFoldIteratorsExp)


DLLDirection
modelica_metatype omc_NFCall_mapFoldExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg, modelica_metatype *out_foldArg);
#define boxptr_NFCall_mapFoldExp omc_NFCall_mapFoldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapFoldExp,2,0) {(void*) boxptr_NFCall_mapFoldExp,0}};
#define boxvar_NFCall_mapFoldExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapFoldExp)


DLLDirection
modelica_metatype omc_NFCall_mapIteratorsExpShallow(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func);
#define boxptr_NFCall_mapIteratorsExpShallow omc_NFCall_mapIteratorsExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapIteratorsExpShallow,2,0) {(void*) boxptr_NFCall_mapIteratorsExpShallow,0}};
#define boxvar_NFCall_mapIteratorsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapIteratorsExpShallow)


DLLDirection
modelica_metatype omc_NFCall_mapExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
#define boxptr_NFCall_mapExpShallow omc_NFCall_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapExpShallow,2,0) {(void*) boxptr_NFCall_mapExpShallow,0}};
#define boxvar_NFCall_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapExpShallow)


DLLDirection
modelica_metatype omc_NFCall_mapIteratorsExp(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func);
#define boxptr_NFCall_mapIteratorsExp omc_NFCall_mapIteratorsExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapIteratorsExp,2,0) {(void*) boxptr_NFCall_mapIteratorsExp,0}};
#define boxvar_NFCall_mapIteratorsExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapIteratorsExp)


DLLDirection
modelica_metatype omc_NFCall_mapExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
#define boxptr_NFCall_mapExp omc_NFCall_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_mapExp,2,0) {(void*) boxptr_NFCall_mapExp,0}};
#define boxvar_NFCall_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_mapExp)


DLLDirection
modelica_metatype omc_NFCall_foldExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg);
#define boxptr_NFCall_foldExp omc_NFCall_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_foldExp,2,0) {(void*) boxptr_NFCall_foldExp,0}};
#define boxvar_NFCall_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_foldExp)


DLLDirection
void omc_NFCall_applyExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
#define boxptr_NFCall_applyExpShallow omc_NFCall_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_applyExpShallow,2,0) {(void*) boxptr_NFCall_applyExpShallow,0}};
#define boxvar_NFCall_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_applyExpShallow)


DLLDirection
void omc_NFCall_applyExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
#define boxptr_NFCall_applyExp omc_NFCall_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_applyExp,2,0) {(void*) boxptr_NFCall_applyExp,0}};
#define boxvar_NFCall_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_applyExp)


DLLDirection
modelica_boolean omc_NFCall_containsExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFCall_containsExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_containsExpShallow,2,0) {(void*) boxptr_NFCall_containsExpShallow,0}};
#define boxvar_NFCall_containsExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFCall_containsExpShallow)


DLLDirection
modelica_boolean omc_NFCall_containsExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFCall_containsExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_containsExp,2,0) {(void*) boxptr_NFCall_containsExp,0}};
#define boxvar_NFCall_containsExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_containsExp)


DLLDirection
modelica_metatype omc_NFCall_typeCast(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcallExp, modelica_metatype _ty);
#define boxptr_NFCall_typeCast omc_NFCall_typeCast
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeCast,2,0) {(void*) boxptr_NFCall_typeCast,0}};
#define boxvar_NFCall_typeCast MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeCast)


DLLDirection
modelica_metatype omc_NFCall_retype(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall);
#define boxptr_NFCall_retype omc_NFCall_retype
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_retype,2,0) {(void*) boxptr_NFCall_retype,0}};
#define boxvar_NFCall_retype MMC_REFSTRUCTLIT(boxvar_lit_NFCall_retype)


DLLDirection
modelica_boolean omc_NFCall_isVectorizeable(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isVectorizeable(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isVectorizeable,2,0) {(void*) boxptr_NFCall_isVectorizeable,0}};
#define boxvar_NFCall_isVectorizeable MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isVectorizeable)


DLLDirection
modelica_metatype omc_NFCall_expandReduction(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_expandReduction omc_NFCall_expandReduction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_expandReduction,2,0) {(void*) boxptr_NFCall_expandReduction,0}};
#define boxvar_NFCall_expandReduction MMC_REFSTRUCTLIT(boxvar_lit_NFCall_expandReduction)


DLLDirection
modelica_metatype omc_NFCall_toDAE__work(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_toDAE__work omc_NFCall_toDAE__work
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toDAE__work,2,0) {(void*) boxptr_NFCall_toDAE__work,0}};
#define boxvar_NFCall_toDAE__work MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toDAE__work)


DLLDirection
modelica_metatype omc_NFCall_toDAE(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_toDAE omc_NFCall_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toDAE,2,0) {(void*) boxptr_NFCall_toDAE,0}};
#define boxvar_NFCall_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toDAE)


DLLDirection
modelica_metatype omc_NFCall_toAbsynIterators(threadData_t *threadData, modelica_metatype _iterExp, modelica_metatype _iters);
#define boxptr_NFCall_toAbsynIterators omc_NFCall_toAbsynIterators
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toAbsynIterators,2,0) {(void*) boxptr_NFCall_toAbsynIterators,0}};
#define boxvar_NFCall_toAbsynIterators MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toAbsynIterators)


DLLDirection
modelica_metatype omc_NFCall_toAbsyn(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_toAbsyn omc_NFCall_toAbsyn
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toAbsyn,2,0) {(void*) boxptr_NFCall_toAbsyn,0}};
#define boxvar_NFCall_toAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toAbsyn)


#define boxptr_NFCall_toJSONStringArgs_make__arg omc_NFCall_toJSONStringArgs_make__arg


DLLDirection
modelica_metatype omc_NFCall_toJSONStringArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fjson);
#define boxptr_NFCall_toJSONStringArgs omc_NFCall_toJSONStringArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toJSONStringArgs,2,0) {(void*) boxptr_NFCall_toJSONStringArgs,0}};
#define boxvar_NFCall_toJSONStringArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toJSONStringArgs)


DLLDirection
modelica_metatype omc_NFCall_toJSON_iterators__json(threadData_t *threadData, modelica_metatype _iters);
#define boxptr_NFCall_toJSON_iterators__json omc_NFCall_toJSON_iterators__json
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toJSON_iterators__json,2,0) {(void*) boxptr_NFCall_toJSON_iterators__json,0}};
#define boxvar_NFCall_toJSON_iterators__json MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toJSON_iterators__json)


DLLDirection
modelica_metatype omc_NFCall_toJSON(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_toJSON omc_NFCall_toJSON
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toJSON,2,0) {(void*) boxptr_NFCall_toJSON,0}};
#define boxvar_NFCall_toJSON MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toJSON)


DLLDirection
modelica_string omc_NFCall_typedString(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_typedString omc_NFCall_typedString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typedString,2,0) {(void*) boxptr_NFCall_typedString,0}};
#define boxvar_NFCall_typedString MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typedString)


DLLDirection
modelica_string omc_NFCall_toFlatStringArgs(threadData_t *threadData, modelica_metatype _args, modelica_string _fnName, modelica_metatype _format);
#define boxptr_NFCall_toFlatStringArgs omc_NFCall_toFlatStringArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toFlatStringArgs,2,0) {(void*) boxptr_NFCall_toFlatStringArgs,0}};
#define boxvar_NFCall_toFlatStringArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toFlatStringArgs)


DLLDirection
modelica_string omc_NFCall_toFlatString(threadData_t *threadData, modelica_metatype _call, modelica_metatype _format);
#define boxptr_NFCall_toFlatString omc_NFCall_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toFlatString,2,0) {(void*) boxptr_NFCall_toFlatString,0}};
#define boxvar_NFCall_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toFlatString)


DLLDirection
modelica_string omc_NFCall_toString(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_toString omc_NFCall_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toString,2,0) {(void*) boxptr_NFCall_toString,0}};
#define boxvar_NFCall_toString MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toString)


DLLDirection
modelica_metatype omc_NFCall_toRecordExpression(threadData_t *threadData, modelica_metatype _call, modelica_metatype _ty);
#define boxptr_NFCall_toRecordExpression omc_NFCall_toRecordExpression
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_toRecordExpression,2,0) {(void*) boxptr_NFCall_toRecordExpression,0}};
#define boxvar_NFCall_toRecordExpression MMC_REFSTRUCTLIT(boxvar_lit_NFCall_toRecordExpression)


DLLDirection
modelica_metatype omc_NFCall_iterators(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_iterators omc_NFCall_iterators
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_iterators,2,0) {(void*) boxptr_NFCall_iterators,0}};
#define boxvar_NFCall_iterators MMC_REFSTRUCTLIT(boxvar_lit_NFCall_iterators)


DLLDirection
modelica_metatype omc_NFCall_setArguments(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _arguments);
#define boxptr_NFCall_setArguments omc_NFCall_setArguments
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_setArguments,2,0) {(void*) boxptr_NFCall_setArguments,0}};
#define boxvar_NFCall_setArguments MMC_REFSTRUCTLIT(boxvar_lit_NFCall_setArguments)


DLLDirection
modelica_metatype omc_NFCall_arguments(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_arguments omc_NFCall_arguments
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_arguments,2,0) {(void*) boxptr_NFCall_arguments,0}};
#define boxvar_NFCall_arguments MMC_REFSTRUCTLIT(boxvar_lit_NFCall_arguments)


DLLDirection
modelica_boolean omc_NFCall_isNamed(threadData_t *threadData, modelica_metatype _call, modelica_string _name);
DLLDirection
modelica_metatype boxptr_NFCall_isNamed(threadData_t *threadData, modelica_metatype _call, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isNamed,2,0) {(void*) boxptr_NFCall_isNamed,0}};
#define boxvar_NFCall_isNamed MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isNamed)


DLLDirection
modelica_string omc_NFCall_functionNameFirst(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_functionNameFirst omc_NFCall_functionNameFirst
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_functionNameFirst,2,0) {(void*) boxptr_NFCall_functionNameFirst,0}};
#define boxvar_NFCall_functionNameFirst MMC_REFSTRUCTLIT(boxvar_lit_NFCall_functionNameFirst)


DLLDirection
modelica_string omc_NFCall_functionNameLast(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_functionNameLast omc_NFCall_functionNameLast
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_functionNameLast,2,0) {(void*) boxptr_NFCall_functionNameLast,0}};
#define boxvar_NFCall_functionNameLast MMC_REFSTRUCTLIT(boxvar_lit_NFCall_functionNameLast)


DLLDirection
modelica_metatype omc_NFCall_functionName(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_functionName omc_NFCall_functionName
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_functionName,2,0) {(void*) boxptr_NFCall_functionName,0}};
#define boxvar_NFCall_functionName MMC_REFSTRUCTLIT(boxvar_lit_NFCall_functionName)


DLLDirection
modelica_metatype omc_NFCall_typedFunction(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_typedFunction omc_NFCall_typedFunction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typedFunction,2,0) {(void*) boxptr_NFCall_typedFunction,0}};
#define boxvar_NFCall_typedFunction MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typedFunction)


DLLDirection
modelica_metatype omc_NFCall_inlineType(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_inlineType omc_NFCall_inlineType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_inlineType,2,0) {(void*) boxptr_NFCall_inlineType,0}};
#define boxvar_NFCall_inlineType MMC_REFSTRUCTLIT(boxvar_lit_NFCall_inlineType)


DLLDirection
modelica_boolean omc_NFCall_isNonNegative(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isNonNegative(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isNonNegative,2,0) {(void*) boxptr_NFCall_isNonNegative,0}};
#define boxvar_NFCall_isNonNegative MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isNonNegative)


DLLDirection
modelica_boolean omc_NFCall_isNonPositive(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isNonPositive(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isNonPositive,2,0) {(void*) boxptr_NFCall_isNonPositive,0}};
#define boxvar_NFCall_isNonPositive MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isNonPositive)


DLLDirection
modelica_boolean omc_NFCall_isNegative(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isNegative(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isNegative,2,0) {(void*) boxptr_NFCall_isNegative,0}};
#define boxvar_NFCall_isNegative MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isNegative)


DLLDirection
modelica_boolean omc_NFCall_isPositive(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isPositive(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isPositive,2,0) {(void*) boxptr_NFCall_isPositive,0}};
#define boxvar_NFCall_isPositive MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isPositive)


DLLDirection
modelica_boolean omc_NFCall_isReduction(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isReduction(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isReduction,2,0) {(void*) boxptr_NFCall_isReduction,0}};
#define boxvar_NFCall_isReduction MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isReduction)


DLLDirection
modelica_boolean omc_NFCall_isKnownSizeFill(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isKnownSizeFill(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isKnownSizeFill,2,0) {(void*) boxptr_NFCall_isKnownSizeFill,0}};
#define boxvar_NFCall_isKnownSizeFill MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isKnownSizeFill)


DLLDirection
modelica_boolean omc_NFCall_isLiteral(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isLiteral(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isLiteral,2,0) {(void*) boxptr_NFCall_isLiteral,0}};
#define boxvar_NFCall_isLiteral MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isLiteral)


DLLDirection
modelica_boolean omc_NFCall_isExternalObjectConstructor(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isExternalObjectConstructor(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isExternalObjectConstructor,2,0) {(void*) boxptr_NFCall_isExternalObjectConstructor,0}};
#define boxvar_NFCall_isExternalObjectConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isExternalObjectConstructor)


DLLDirection
modelica_boolean omc_NFCall_isRecordConstructor(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isRecordConstructor(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isRecordConstructor,2,0) {(void*) boxptr_NFCall_isRecordConstructor,0}};
#define boxvar_NFCall_isRecordConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isRecordConstructor)


DLLDirection
modelica_boolean omc_NFCall_isImpure(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isImpure(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isImpure,2,0) {(void*) boxptr_NFCall_isImpure,0}};
#define boxvar_NFCall_isImpure MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isImpure)


DLLDirection
modelica_boolean omc_NFCall_isExternal(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_isExternal(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isExternal,2,0) {(void*) boxptr_NFCall_isExternal,0}};
#define boxvar_NFCall_isExternal MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isExternal)


DLLDirection
modelica_integer omc_NFCall_compareIterator(threadData_t *threadData, modelica_metatype _iter1, modelica_metatype _iter2);
DLLDirection
modelica_metatype boxptr_NFCall_compareIterator(threadData_t *threadData, modelica_metatype _iter1, modelica_metatype _iter2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_compareIterator,2,0) {(void*) boxptr_NFCall_compareIterator,0}};
#define boxvar_NFCall_compareIterator MMC_REFSTRUCTLIT(boxvar_lit_NFCall_compareIterator)


DLLDirection
modelica_integer omc_NFCall_compare(threadData_t *threadData, modelica_metatype _call1, modelica_metatype _call2);
DLLDirection
modelica_metatype boxptr_NFCall_compare(threadData_t *threadData, modelica_metatype _call1, modelica_metatype _call2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_compare,2,0) {(void*) boxptr_NFCall_compare,0}};
#define boxvar_NFCall_compare MMC_REFSTRUCTLIT(boxvar_lit_NFCall_compare)


DLLDirection
modelica_integer omc_NFCall_purity(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_purity(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_purity,2,0) {(void*) boxptr_NFCall_purity,0}};
#define boxvar_NFCall_purity MMC_REFSTRUCTLIT(boxvar_lit_NFCall_purity)


DLLDirection
modelica_integer omc_NFCall_variability(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFCall_variability(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_variability,2,0) {(void*) boxptr_NFCall_variability,0}};
#define boxvar_NFCall_variability MMC_REFSTRUCTLIT(boxvar_lit_NFCall_variability)


DLLDirection
modelica_metatype omc_NFCall_setType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _ty);
#define boxptr_NFCall_setType omc_NFCall_setType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_setType,2,0) {(void*) boxptr_NFCall_setType,0}};
#define boxvar_NFCall_setType MMC_REFSTRUCTLIT(boxvar_lit_NFCall_setType)


DLLDirection
modelica_metatype omc_NFCall_typeOf(threadData_t *threadData, modelica_metatype _call);
#define boxptr_NFCall_typeOf omc_NFCall_typeOf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeOf,2,0) {(void*) boxptr_NFCall_typeOf,0}};
#define boxvar_NFCall_typeOf MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeOf)


DLLDirection
modelica_metatype omc_NFCall_retypeCall(threadData_t *threadData, modelica_metatype _call, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFCall_retypeCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_retypeCall,2,0) {(void*) boxptr_NFCall_retypeCall,0}};
#define boxvar_NFCall_retypeCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_retypeCall)


DLLDirection
modelica_metatype omc_NFCall_matchTypedNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize);
DLLDirection
modelica_metatype boxptr_NFCall_matchTypedNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_matchTypedNormalCall,2,0) {(void*) boxptr_NFCall_matchTypedNormalCall,0}};
#define boxvar_NFCall_matchTypedNormalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_matchTypedNormalCall)


DLLDirection
modelica_metatype omc_NFCall_typeMatchNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize);
DLLDirection
modelica_metatype boxptr_NFCall_typeMatchNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeMatchNormalCall,2,0) {(void*) boxptr_NFCall_typeMatchNormalCall,0}};
#define boxvar_NFCall_typeMatchNormalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeMatchNormalCall)


DLLDirection
modelica_metatype omc_NFCall_unboxArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall);
#define boxptr_NFCall_unboxArgs omc_NFCall_unboxArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_unboxArgs,2,0) {(void*) boxptr_NFCall_unboxArgs,0}};
#define boxvar_NFCall_unboxArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_unboxArgs)


DLLDirection
modelica_metatype omc_NFCall_makeTypedCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_integer _variability, modelica_integer _purity, modelica_metatype _returnType);
DLLDirection
modelica_metatype boxptr_NFCall_makeTypedCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _variability, modelica_metatype _purity, modelica_metatype _returnType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_makeTypedCall,2,0) {(void*) boxptr_NFCall_makeTypedCall,0}};
#define boxvar_NFCall_makeTypedCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_makeTypedCall)


DLLDirection
modelica_metatype omc_NFCall_typeNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFCall_typeNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeNormalCall,2,0) {(void*) boxptr_NFCall_typeNormalCall,0}};
#define boxvar_NFCall_typeNormalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeNormalCall)


DLLDirection
modelica_metatype omc_NFCall_typeCallExp(threadData_t *threadData, modelica_metatype _ty_call, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_pur);
DLLDirection
modelica_metatype boxptr_NFCall_typeCallExp(threadData_t *threadData, modelica_metatype _ty_call, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_pur);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeCallExp,2,0) {(void*) boxptr_NFCall_typeCallExp,0}};
#define boxvar_NFCall_typeCallExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeCallExp)


DLLDirection
void omc_NFCall_checkNotPartial(threadData_t *threadData, modelica_metatype _fnRef, modelica_integer _context, modelica_metatype _info);
DLLDirection
void boxptr_NFCall_checkNotPartial(threadData_t *threadData, modelica_metatype _fnRef, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_checkNotPartial,2,0) {(void*) boxptr_NFCall_checkNotPartial,0}};
#define boxvar_NFCall_checkNotPartial MMC_REFSTRUCTLIT(boxvar_lit_NFCall_checkNotPartial)


DLLDirection
modelica_metatype omc_NFCall_typeCall(threadData_t *threadData, modelica_metatype _callExp, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_pur);
DLLDirection
modelica_metatype boxptr_NFCall_typeCall(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_pur);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeCall,2,0) {(void*) boxptr_NFCall_typeCall,0}};
#define boxvar_NFCall_typeCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeCall)


DLLDirection
modelica_metatype omc_NFCall_instantiate(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFCall_instantiate(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instantiate,2,0) {(void*) boxptr_NFCall_instantiate,0}};
#define boxvar_NFCall_instantiate MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instantiate)

#ifdef __cplusplus
}
#endif
#endif
