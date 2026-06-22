#ifndef NFEquation__H
#define NFEquation__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;

extern struct record_description DAE_ElementSource_SOURCE__desc;

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description NFEquation_ASSERT__desc;

extern struct record_description NFEquation_Branch_BRANCH__desc;

extern struct record_description NFEquation_CONNECT__desc;

extern struct record_description NFEquation_EQUALITY__desc;

extern struct record_description NFEquation_IF__desc;

extern struct record_description NFEquation_NORETCALL__desc;

extern struct record_description NFEquation_REINIT__desc;

extern struct record_description NFEquation_TERMINATE__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquationBranch(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch);
#define boxptr_NFEquation_splitRecordEquationBranch omc_NFEquation_splitRecordEquationBranch
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquationBranch,2,0) {(void*) boxptr_NFEquation_splitRecordEquationBranch,0}};
#define boxvar_NFEquation_splitRecordEquationBranch MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquationBranch)


DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fequations);
#define boxptr_NFEquation_splitRecordEquation omc_NFEquation_splitRecordEquation
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquation,2,0) {(void*) boxptr_NFEquation_splitRecordEquation,0}};
#define boxvar_NFEquation_splitRecordEquation MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquation)


DLLDirection
modelica_metatype omc_NFEquation_splitRecordEquations(threadData_t *threadData, modelica_metatype _equations);
#define boxptr_NFEquation_splitRecordEquations omc_NFEquation_splitRecordEquations
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquations,2,0) {(void*) boxptr_NFEquation_splitRecordEquations,0}};
#define boxvar_NFEquation_splitRecordEquations MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_splitRecordEquations)


DLLDirection
modelica_boolean omc_NFEquation_isMultiLine(threadData_t *threadData, modelica_metatype _eq);
DLLDirection
modelica_metatype boxptr_NFEquation_isMultiLine(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_isMultiLine,2,0) {(void*) boxptr_NFEquation_isMultiLine,0}};
#define boxvar_NFEquation_isMultiLine MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_isMultiLine)


DLLDirection
modelica_metatype omc_NFEquation_toFlatStreamList(threadData_t *threadData, modelica_metatype _eql, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFEquation_toFlatStreamList omc_NFEquation_toFlatStreamList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toFlatStreamList,2,0) {(void*) boxptr_NFEquation_toFlatStreamList,0}};
#define boxvar_NFEquation_toFlatStreamList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toFlatStreamList)


DLLDirection
modelica_metatype omc_NFEquation_toFlatStream(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFEquation_toFlatStream omc_NFEquation_toFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toFlatStream,2,0) {(void*) boxptr_NFEquation_toFlatStream,0}};
#define boxvar_NFEquation_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toFlatStream)


DLLDirection
modelica_metatype omc_NFEquation_toStreamList(threadData_t *threadData, modelica_metatype _eql, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFEquation_toStreamList omc_NFEquation_toStreamList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toStreamList,2,0) {(void*) boxptr_NFEquation_toStreamList,0}};
#define boxvar_NFEquation_toStreamList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toStreamList)


DLLDirection
modelica_metatype omc_NFEquation_toStream(threadData_t *threadData, modelica_metatype _eq, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFEquation_toStream omc_NFEquation_toStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toStream,2,0) {(void*) boxptr_NFEquation_toStream,0}};
#define boxvar_NFEquation_toStream MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toStream)


DLLDirection
modelica_string omc_NFEquation_toStringList(threadData_t *threadData, modelica_metatype _eql, modelica_string _indent);
#define boxptr_NFEquation_toStringList omc_NFEquation_toStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toStringList,2,0) {(void*) boxptr_NFEquation_toStringList,0}};
#define boxvar_NFEquation_toStringList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toStringList)


DLLDirection
modelica_string omc_NFEquation_toString(threadData_t *threadData, modelica_metatype _eq, modelica_string _indent);
#define boxptr_NFEquation_toString omc_NFEquation_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_toString,2,0) {(void*) boxptr_NFEquation_toString,0}};
#define boxvar_NFEquation_toString MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_toString)


DLLDirection
modelica_integer omc_NFEquation_sizeOf(threadData_t *threadData, modelica_metatype _eq);
DLLDirection
modelica_metatype boxptr_NFEquation_sizeOf(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_sizeOf,2,0) {(void*) boxptr_NFEquation_sizeOf,0}};
#define boxvar_NFEquation_sizeOf MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_sizeOf)


DLLDirection
modelica_integer omc_NFEquation_sizeOfList(threadData_t *threadData, modelica_metatype _eqs);
DLLDirection
modelica_metatype boxptr_NFEquation_sizeOfList(threadData_t *threadData, modelica_metatype _eqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_sizeOfList,2,0) {(void*) boxptr_NFEquation_sizeOfList,0}};
#define boxvar_NFEquation_sizeOfList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_sizeOfList)


DLLDirection
modelica_boolean omc_NFEquation_isConnection(threadData_t *threadData, modelica_metatype _eq);
DLLDirection
modelica_metatype boxptr_NFEquation_isConnection(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_isConnection,2,0) {(void*) boxptr_NFEquation_isConnection,0}};
#define boxvar_NFEquation_isConnection MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_isConnection)


DLLDirection
modelica_boolean omc_NFEquation_isConnect(threadData_t *threadData, modelica_metatype _eq);
DLLDirection
modelica_metatype boxptr_NFEquation_isConnect(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_isConnect,2,0) {(void*) boxptr_NFEquation_isConnect,0}};
#define boxvar_NFEquation_isConnect MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_isConnect)


DLLDirection
modelica_boolean omc_NFEquation_isArrayEquality(threadData_t *threadData, modelica_metatype _eq);
DLLDirection
modelica_metatype boxptr_NFEquation_isArrayEquality(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_isArrayEquality,2,0) {(void*) boxptr_NFEquation_isArrayEquality,0}};
#define boxvar_NFEquation_isArrayEquality MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_isArrayEquality)


DLLDirection
modelica_metatype omc_NFEquation_replaceIteratorList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feql, modelica_metatype _iterator, modelica_metatype _value);
#define boxptr_NFEquation_replaceIteratorList omc_NFEquation_replaceIteratorList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_replaceIteratorList,2,0) {(void*) boxptr_NFEquation_replaceIteratorList,0}};
#define boxvar_NFEquation_replaceIteratorList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_replaceIteratorList)


DLLDirection
modelica_boolean omc_NFEquation_containsExpList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFEquation_containsExpList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_containsExpList,2,0) {(void*) boxptr_NFEquation_containsExpList,0}};
#define boxvar_NFEquation_containsExpList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_containsExpList)


DLLDirection
modelica_boolean omc_NFEquation_containsExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _fn);
DLLDirection
modelica_metatype boxptr_NFEquation_containsExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_containsExp,2,0) {(void*) boxptr_NFEquation_containsExp,0}};
#define boxvar_NFEquation_containsExp MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_containsExp)


DLLDirection
modelica_boolean omc_NFEquation_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFEquation_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_containsList,2,0) {(void*) boxptr_NFEquation_containsList,0}};
#define boxvar_NFEquation_containsList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_containsList)


DLLDirection
modelica_boolean omc_NFEquation_contains(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFEquation_contains(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_contains,2,0) {(void*) boxptr_NFEquation_contains,0}};
#define boxvar_NFEquation_contains MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_contains)


DLLDirection
modelica_metatype omc_NFEquation_foldExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFEquation_foldExp omc_NFEquation_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_foldExp,2,0) {(void*) boxptr_NFEquation_foldExp,0}};
#define boxvar_NFEquation_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_foldExp)


DLLDirection
modelica_metatype omc_NFEquation_foldExpList(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFEquation_foldExpList omc_NFEquation_foldExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_foldExpList,2,0) {(void*) boxptr_NFEquation_foldExpList,0}};
#define boxvar_NFEquation_foldExpList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_foldExpList)


DLLDirection
modelica_metatype omc_NFEquation_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func);
#define boxptr_NFEquation_mapExpShallow omc_NFEquation_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_mapExpShallow,2,0) {(void*) boxptr_NFEquation_mapExpShallow,0}};
#define boxvar_NFEquation_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_mapExpShallow)


DLLDirection
modelica_metatype omc_NFEquation_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func);
#define boxptr_NFEquation_mapExp omc_NFEquation_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_mapExp,2,0) {(void*) boxptr_NFEquation_mapExp,0}};
#define boxvar_NFEquation_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_mapExp)


DLLDirection
modelica_metatype omc_NFEquation_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feql, modelica_fnptr _func);
#define boxptr_NFEquation_mapExpList omc_NFEquation_mapExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_mapExpList,2,0) {(void*) boxptr_NFEquation_mapExpList,0}};
#define boxvar_NFEquation_mapExpList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_mapExpList)


DLLDirection
void omc_NFEquation_applyExpShallow(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
#define boxptr_NFEquation_applyExpShallow omc_NFEquation_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_applyExpShallow,2,0) {(void*) boxptr_NFEquation_applyExpShallow,0}};
#define boxvar_NFEquation_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_applyExpShallow)


DLLDirection
void omc_NFEquation_applyExp(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
#define boxptr_NFEquation_applyExp omc_NFEquation_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_applyExp,2,0) {(void*) boxptr_NFEquation_applyExp,0}};
#define boxvar_NFEquation_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_applyExp)


DLLDirection
void omc_NFEquation_applyExpList(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
#define boxptr_NFEquation_applyExpList omc_NFEquation_applyExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_applyExpList,2,0) {(void*) boxptr_NFEquation_applyExpList,0}};
#define boxvar_NFEquation_applyExpList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_applyExpList)


DLLDirection
modelica_metatype omc_NFEquation_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_fnptr _func);
#define boxptr_NFEquation_map omc_NFEquation_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_map,2,0) {(void*) boxptr_NFEquation_map,0}};
#define boxvar_NFEquation_map MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_map)


DLLDirection
void omc_NFEquation_apply(threadData_t *threadData, modelica_metatype _eq, modelica_fnptr _func);
#define boxptr_NFEquation_apply omc_NFEquation_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_apply,2,0) {(void*) boxptr_NFEquation_apply,0}};
#define boxvar_NFEquation_apply MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_apply)


DLLDirection
void omc_NFEquation_applyList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
#define boxptr_NFEquation_applyList omc_NFEquation_applyList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_applyList,2,0) {(void*) boxptr_NFEquation_applyList,0}};
#define boxvar_NFEquation_applyList MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_applyList)


DLLDirection
modelica_metatype omc_NFEquation_info(threadData_t *threadData, modelica_metatype _eq);
#define boxptr_NFEquation_info omc_NFEquation_info
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_info,2,0) {(void*) boxptr_NFEquation_info,0}};
#define boxvar_NFEquation_info MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_info)


DLLDirection
modelica_metatype omc_NFEquation_scope(threadData_t *threadData, modelica_metatype _eq);
#define boxptr_NFEquation_scope omc_NFEquation_scope
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_scope,2,0) {(void*) boxptr_NFEquation_scope,0}};
#define boxvar_NFEquation_scope MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_scope)


DLLDirection
modelica_metatype omc_NFEquation_setSource(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Feq);
#define boxptr_NFEquation_setSource omc_NFEquation_setSource
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_setSource,2,0) {(void*) boxptr_NFEquation_setSource,0}};
#define boxvar_NFEquation_setSource MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_setSource)


DLLDirection
modelica_metatype omc_NFEquation_source(threadData_t *threadData, modelica_metatype _eq);
#define boxptr_NFEquation_source omc_NFEquation_source
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_source,2,0) {(void*) boxptr_NFEquation_source,0}};
#define boxvar_NFEquation_source MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_source)


DLLDirection
modelica_metatype omc_NFEquation_makeIf(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _scope, modelica_metatype _src);
#define boxptr_NFEquation_makeIf omc_NFEquation_makeIf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_makeIf,2,0) {(void*) boxptr_NFEquation_makeIf,0}};
#define boxvar_NFEquation_makeIf MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_makeIf)


DLLDirection
modelica_metatype omc_NFEquation_makeBranch(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _body, modelica_integer _condVar);
DLLDirection
modelica_metatype boxptr_NFEquation_makeBranch(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _body, modelica_metatype _condVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_makeBranch,2,0) {(void*) boxptr_NFEquation_makeBranch,0}};
#define boxvar_NFEquation_makeBranch MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_makeBranch)


DLLDirection
modelica_metatype omc_NFEquation_makeCrefEquality(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _rhsCref, modelica_metatype _scope, modelica_metatype _src);
#define boxptr_NFEquation_makeCrefEquality omc_NFEquation_makeCrefEquality
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_makeCrefEquality,2,0) {(void*) boxptr_NFEquation_makeCrefEquality,0}};
#define boxvar_NFEquation_makeCrefEquality MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_makeCrefEquality)


DLLDirection
modelica_metatype omc_NFEquation_makeEquality(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty, modelica_metatype _src, modelica_metatype _scope, modelica_integer _scalarizeMode);
DLLDirection
modelica_metatype boxptr_NFEquation_makeEquality(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty, modelica_metatype _src, modelica_metatype _scope, modelica_metatype _scalarizeMode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_makeEquality,2,0) {(void*) boxptr_NFEquation_makeEquality,0}};
#define boxvar_NFEquation_makeEquality MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_makeEquality)


DLLDirection
void omc_NFEquation_Branch_triggerErrors(threadData_t *threadData, modelica_metatype _branch);
#define boxptr_NFEquation_Branch_triggerErrors omc_NFEquation_Branch_triggerErrors
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_triggerErrors,2,0) {(void*) boxptr_NFEquation_Branch_triggerErrors,0}};
#define boxvar_NFEquation_Branch_triggerErrors MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_triggerErrors)


DLLDirection
modelica_string omc_NFEquation_Branch_toString(threadData_t *threadData, modelica_metatype _branch, modelica_string _indent);
#define boxptr_NFEquation_Branch_toString omc_NFEquation_Branch_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toString,2,0) {(void*) boxptr_NFEquation_Branch_toString,0}};
#define boxvar_NFEquation_Branch_toString MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toString)


DLLDirection
modelica_metatype omc_NFEquation_Branch_toFlatStream(threadData_t *threadData, modelica_metatype _branch, modelica_string _header, modelica_metatype _format, modelica_boolean _potentialElse, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFEquation_Branch_toFlatStream(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _header, modelica_metatype _format, modelica_metatype _potentialElse, modelica_metatype _indent, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toFlatStream,2,0) {(void*) boxptr_NFEquation_Branch_toFlatStream,0}};
#define boxvar_NFEquation_Branch_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toFlatStream)


DLLDirection
modelica_metatype omc_NFEquation_Branch_toStream(threadData_t *threadData, modelica_metatype _branch, modelica_string _header, modelica_boolean _potentialElse, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFEquation_Branch_toStream(threadData_t *threadData, modelica_metatype _branch, modelica_metatype _header, modelica_metatype _potentialElse, modelica_metatype _indent, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toStream,2,0) {(void*) boxptr_NFEquation_Branch_toStream,0}};
#define boxvar_NFEquation_Branch_toStream MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_toStream)


DLLDirection
modelica_integer omc_NFEquation_Branch_sizeOf(threadData_t *threadData, modelica_metatype _branch);
DLLDirection
modelica_metatype boxptr_NFEquation_Branch_sizeOf(threadData_t *threadData, modelica_metatype _branch);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_sizeOf,2,0) {(void*) boxptr_NFEquation_Branch_sizeOf,0}};
#define boxvar_NFEquation_Branch_sizeOf MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_sizeOf)


DLLDirection
modelica_boolean omc_NFEquation_Branch_isEmpty(threadData_t *threadData, modelica_metatype _branch);
DLLDirection
modelica_metatype boxptr_NFEquation_Branch_isEmpty(threadData_t *threadData, modelica_metatype _branch);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_isEmpty,2,0) {(void*) boxptr_NFEquation_Branch_isEmpty,0}};
#define boxvar_NFEquation_Branch_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_isEmpty)


DLLDirection
modelica_metatype omc_NFEquation_Branch_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch, modelica_fnptr _func, modelica_boolean _mapBody);
DLLDirection
modelica_metatype boxptr_NFEquation_Branch_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranch, modelica_fnptr _func, modelica_metatype _mapBody);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEquation_Branch_mapExp,2,0) {(void*) boxptr_NFEquation_Branch_mapExp,0}};
#define boxvar_NFEquation_Branch_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFEquation_Branch_mapExp)

#ifdef __cplusplus
}
#endif
#endif
