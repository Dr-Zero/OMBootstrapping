#ifndef NFStatement__H
#define NFStatement__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description NFStatement_ASSERT__desc;

extern struct record_description NFStatement_ASSIGNMENT__desc;

extern struct record_description NFStatement_IF__desc;

extern struct record_description NFStatement_NORETCALL__desc;

extern struct record_description NFStatement_REINIT__desc;

extern struct record_description NFStatement_TERMINATE__desc;

extern struct record_description NFStatement_WHILE__desc;


DLLDirection
modelica_boolean omc_NFStatement_isMultiLine(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_isMultiLine(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isMultiLine,2,0) {(void*) boxptr_NFStatement_isMultiLine,0}};
#define boxvar_NFStatement_isMultiLine MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isMultiLine)


DLLDirection
modelica_metatype omc_NFStatement_toFlatStreamList(threadData_t *threadData, modelica_metatype _stmtl, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFStatement_toFlatStreamList omc_NFStatement_toFlatStreamList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toFlatStreamList,2,0) {(void*) boxptr_NFStatement_toFlatStreamList,0}};
#define boxvar_NFStatement_toFlatStreamList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toFlatStreamList)


DLLDirection
modelica_metatype omc_NFStatement_toFlatStream(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFStatement_toFlatStream omc_NFStatement_toFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toFlatStream,2,0) {(void*) boxptr_NFStatement_toFlatStream,0}};
#define boxvar_NFStatement_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toFlatStream)


DLLDirection
modelica_metatype omc_NFStatement_toStreamList(threadData_t *threadData, modelica_metatype _stmtl, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFStatement_toStreamList omc_NFStatement_toStreamList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toStreamList,2,0) {(void*) boxptr_NFStatement_toStreamList,0}};
#define boxvar_NFStatement_toStreamList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toStreamList)


DLLDirection
modelica_metatype omc_NFStatement_toStream(threadData_t *threadData, modelica_metatype _stmt, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFStatement_toStream omc_NFStatement_toStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toStream,2,0) {(void*) boxptr_NFStatement_toStream,0}};
#define boxvar_NFStatement_toStream MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toStream)


DLLDirection
modelica_string omc_NFStatement_toStringList(threadData_t *threadData, modelica_metatype _stmtl, modelica_string _indent);
#define boxptr_NFStatement_toStringList omc_NFStatement_toStringList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toStringList,2,0) {(void*) boxptr_NFStatement_toStringList,0}};
#define boxvar_NFStatement_toStringList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toStringList)


DLLDirection
modelica_string omc_NFStatement_toString(threadData_t *threadData, modelica_metatype _stmt, modelica_string _indent);
#define boxptr_NFStatement_toString omc_NFStatement_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_toString,2,0) {(void*) boxptr_NFStatement_toString,0}};
#define boxvar_NFStatement_toString MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_toString)


DLLDirection
modelica_metatype omc_NFStatement_replaceIteratorList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmtl, modelica_metatype _iterator, modelica_metatype _value);
#define boxptr_NFStatement_replaceIteratorList omc_NFStatement_replaceIteratorList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_replaceIteratorList,2,0) {(void*) boxptr_NFStatement_replaceIteratorList,0}};
#define boxvar_NFStatement_replaceIteratorList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_replaceIteratorList)


DLLDirection
modelica_boolean omc_NFStatement_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NFStatement_containsList(threadData_t *threadData, modelica_metatype _eql, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_containsList,2,0) {(void*) boxptr_NFStatement_containsList,0}};
#define boxvar_NFStatement_containsList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_containsList)


DLLDirection
modelica_boolean omc_NFStatement_contains(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _fn);
DLLDirection
modelica_metatype boxptr_NFStatement_contains(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_contains,2,0) {(void*) boxptr_NFStatement_contains,0}};
#define boxvar_NFStatement_contains MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_contains)


DLLDirection
modelica_metatype omc_NFStatement_foldExp(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFStatement_foldExp omc_NFStatement_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_foldExp,2,0) {(void*) boxptr_NFStatement_foldExp,0}};
#define boxvar_NFStatement_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_foldExp)


DLLDirection
modelica_metatype omc_NFStatement_foldExpList(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFStatement_foldExpList omc_NFStatement_foldExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_foldExpList,2,0) {(void*) boxptr_NFStatement_foldExpList,0}};
#define boxvar_NFStatement_foldExpList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_foldExpList)


DLLDirection
modelica_metatype omc_NFStatement_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func);
#define boxptr_NFStatement_mapExpShallow omc_NFStatement_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_mapExpShallow,2,0) {(void*) boxptr_NFStatement_mapExpShallow,0}};
#define boxvar_NFStatement_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_mapExpShallow)


DLLDirection
modelica_metatype omc_NFStatement_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func);
#define boxptr_NFStatement_mapExp omc_NFStatement_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_mapExp,2,0) {(void*) boxptr_NFStatement_mapExp,0}};
#define boxvar_NFStatement_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_mapExp)


DLLDirection
modelica_metatype omc_NFStatement_mapExpList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmtl, modelica_fnptr _func);
#define boxptr_NFStatement_mapExpList omc_NFStatement_mapExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_mapExpList,2,0) {(void*) boxptr_NFStatement_mapExpList,0}};
#define boxvar_NFStatement_mapExpList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_mapExpList)


DLLDirection
void omc_NFStatement_applyExp(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func);
#define boxptr_NFStatement_applyExp omc_NFStatement_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_applyExp,2,0) {(void*) boxptr_NFStatement_applyExp,0}};
#define boxvar_NFStatement_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_applyExp)


DLLDirection
void omc_NFStatement_applyExpList(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func);
#define boxptr_NFStatement_applyExpList omc_NFStatement_applyExpList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_applyExpList,2,0) {(void*) boxptr_NFStatement_applyExpList,0}};
#define boxvar_NFStatement_applyExpList MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_applyExpList)


DLLDirection
modelica_metatype omc_NFStatement_fold(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFStatement_fold omc_NFStatement_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_fold,2,0) {(void*) boxptr_NFStatement_fold,0}};
#define boxvar_NFStatement_fold MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_fold)


DLLDirection
modelica_metatype omc_NFStatement_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmt, modelica_fnptr _func);
#define boxptr_NFStatement_map omc_NFStatement_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_map,2,0) {(void*) boxptr_NFStatement_map,0}};
#define boxvar_NFStatement_map MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_map)


DLLDirection
void omc_NFStatement_apply(threadData_t *threadData, modelica_metatype _stmt, modelica_fnptr _func);
#define boxptr_NFStatement_apply omc_NFStatement_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_apply,2,0) {(void*) boxptr_NFStatement_apply,0}};
#define boxvar_NFStatement_apply MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_apply)


DLLDirection
modelica_metatype omc_NFStatement_info(threadData_t *threadData, modelica_metatype _stmt);
#define boxptr_NFStatement_info omc_NFStatement_info
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_info,2,0) {(void*) boxptr_NFStatement_info,0}};
#define boxvar_NFStatement_info MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_info)


DLLDirection
modelica_metatype omc_NFStatement_setSource(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fstmt);
#define boxptr_NFStatement_setSource omc_NFStatement_setSource
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_setSource,2,0) {(void*) boxptr_NFStatement_setSource,0}};
#define boxvar_NFStatement_setSource MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_setSource)


DLLDirection
modelica_metatype omc_NFStatement_source(threadData_t *threadData, modelica_metatype _stmt);
#define boxptr_NFStatement_source omc_NFStatement_source
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_source,2,0) {(void*) boxptr_NFStatement_source,0}};
#define boxvar_NFStatement_source MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_source)


DLLDirection
modelica_metatype omc_NFStatement_makeIf(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _src);
#define boxptr_NFStatement_makeIf omc_NFStatement_makeIf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_makeIf,2,0) {(void*) boxptr_NFStatement_makeIf,0}};
#define boxvar_NFStatement_makeIf MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_makeIf)


DLLDirection
modelica_boolean omc_NFStatement_isReturn(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_isReturn(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isReturn,2,0) {(void*) boxptr_NFStatement_isReturn,0}};
#define boxvar_NFStatement_isReturn MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isReturn)


DLLDirection
modelica_boolean omc_NFStatement_isFor(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_isFor(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isFor,2,0) {(void*) boxptr_NFStatement_isFor,0}};
#define boxvar_NFStatement_isFor MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isFor)


DLLDirection
modelica_boolean omc_NFStatement_isAssignment(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_isAssignment(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isAssignment,2,0) {(void*) boxptr_NFStatement_isAssignment,0}};
#define boxvar_NFStatement_isAssignment MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isAssignment)


DLLDirection
modelica_metatype omc_NFStatement_makeAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _ty, modelica_metatype _src);
#define boxptr_NFStatement_makeAssignment omc_NFStatement_makeAssignment
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_makeAssignment,2,0) {(void*) boxptr_NFStatement_makeAssignment,0}};
#define boxvar_NFStatement_makeAssignment MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_makeAssignment)


DLLDirection
modelica_boolean omc_NFStatement_isEqual(threadData_t *threadData, modelica_metatype _stmt1, modelica_metatype _stmt2);
DLLDirection
modelica_metatype boxptr_NFStatement_isEqual(threadData_t *threadData, modelica_metatype _stmt1, modelica_metatype _stmt2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isEqual,2,0) {(void*) boxptr_NFStatement_isEqual,0}};
#define boxvar_NFStatement_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isEqual)


DLLDirection
modelica_integer omc_NFStatement_hash(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_hash(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_hash,2,0) {(void*) boxptr_NFStatement_hash,0}};
#define boxvar_NFStatement_hash MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_hash)


DLLDirection
modelica_metatype omc_NFStatement_filterDiscrete(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5Fout_5Fstmts);
#define boxptr_NFStatement_filterDiscrete omc_NFStatement_filterDiscrete
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_filterDiscrete,2,0) {(void*) boxptr_NFStatement_filterDiscrete,0}};
#define boxvar_NFStatement_filterDiscrete MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_filterDiscrete)


DLLDirection
modelica_boolean omc_NFStatement_isDiscrete(threadData_t *threadData, modelica_metatype _stmt);
DLLDirection
modelica_metatype boxptr_NFStatement_isDiscrete(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStatement_isDiscrete,2,0) {(void*) boxptr_NFStatement_isDiscrete,0}};
#define boxvar_NFStatement_isDiscrete MMC_REFSTRUCTLIT(boxvar_lit_NFStatement_isDiscrete)

#ifdef __cplusplus
}
#endif
#endif
