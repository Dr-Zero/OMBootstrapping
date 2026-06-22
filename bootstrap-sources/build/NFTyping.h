#ifndef NFTyping__H
#define NFTyping__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__LIST__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_ValidOptions_STRING__DESC__OPTION__desc;

extern struct record_description NFBinding_INVALID__BINDING__desc;

extern struct record_description NFBinding_TYPED__BINDING__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFCeval_EvalTargetData_DIMENSION__DATA__desc;

extern struct record_description NFClass_TYPED__DERIVED__desc;

extern struct record_description NFComplexType_CONNECTOR__desc;

extern struct record_description NFComplexType_EXPANDABLE__CONNECTOR__desc;

extern struct record_description NFComplexType_RECORD__desc;

extern struct record_description NFComponent_INVALID__COMPONENT__desc;

extern struct record_description NFComponent_ITERATOR__desc;

extern struct record_description NFComponentRef_CREF__desc;

extern struct record_description NFComponentRef_EMPTY__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFDimension_UNTYPED__desc;

extern struct record_description NFEquation_ASSERT__desc;

extern struct record_description NFEquation_Branch_BRANCH__desc;

extern struct record_description NFEquation_Branch_INVALID__BRANCH__desc;

extern struct record_description NFEquation_CONNECT__desc;

extern struct record_description NFEquation_FOR__desc;

extern struct record_description NFEquation_IF__desc;

extern struct record_description NFEquation_NORETCALL__desc;

extern struct record_description NFEquation_REINIT__desc;

extern struct record_description NFEquation_TERMINATE__desc;

extern struct record_description NFEquation_WHEN__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_IF__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_RANGE__desc;

extern struct record_description NFExpression_SIZE__desc;

extern struct record_description NFExpression_SUBSCRIPTED__EXP__desc;

extern struct record_description NFExpression_TUPLE__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFInstNode_CachedData_FUNCTION__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFInstNode_InstNode_NAME__NODE__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFStatement_ASSERT__desc;

extern struct record_description NFStatement_ASSIGNMENT__desc;

extern struct record_description NFStatement_FAILURE__desc;

extern struct record_description NFStatement_FOR__desc;

extern struct record_description NFStatement_IF__desc;

extern struct record_description NFStatement_NORETCALL__desc;

extern struct record_description NFStatement_REINIT__desc;

extern struct record_description NFStatement_TERMINATE__desc;

extern struct record_description NFStatement_WHEN__desc;

extern struct record_description NFStatement_WHILE__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFSubscript_SLICE__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_COMPLEX__desc;

extern struct record_description NFType_ENUMERATION__desc;

extern struct record_description NFType_FUNCTION__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description NFType_STRING__desc;

extern struct record_description NFType_TUPLE__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description NFTyping_TypingError_NO__ERROR__desc;

extern struct record_description NFTyping_TypingError_OUT__OF__BOUNDS__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFTyping_deduceIterationRange2(threadData_t *threadData, modelica_metatype _range1, modelica_metatype _range2, modelica_metatype _info);
#define boxptr_NFTyping_deduceIterationRange2 omc_NFTyping_deduceIterationRange2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRange2,2,0) {(void*) boxptr_NFTyping_deduceIterationRange2,0}};
#define boxvar_NFTyping_deduceIterationRange2 MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRange2)


DLLDirection
modelica_metatype omc_NFTyping_collectIteratorCrefs2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _iterator, modelica_metatype __omcQ_24in_5Fcrefs);
#define boxptr_NFTyping_collectIteratorCrefs2 omc_NFTyping_collectIteratorCrefs2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_collectIteratorCrefs2,2,0) {(void*) boxptr_NFTyping_collectIteratorCrefs2,0}};
#define boxvar_NFTyping_collectIteratorCrefs2 MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_collectIteratorCrefs2)


DLLDirection
modelica_metatype omc_NFTyping_collectIteratorCrefs(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _iterator, modelica_metatype __omcQ_24in_5Fcrefs);
#define boxptr_NFTyping_collectIteratorCrefs omc_NFTyping_collectIteratorCrefs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_collectIteratorCrefs,2,0) {(void*) boxptr_NFTyping_collectIteratorCrefs,0}};
#define boxvar_NFTyping_collectIteratorCrefs MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_collectIteratorCrefs)


DLLDirection
modelica_metatype omc_NFTyping_deduceIterationRange(threadData_t *threadData, modelica_metatype _crefs, modelica_metatype _iterator, modelica_metatype _info);
#define boxptr_NFTyping_deduceIterationRange omc_NFTyping_deduceIterationRange
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRange,2,0) {(void*) boxptr_NFTyping_deduceIterationRange,0}};
#define boxvar_NFTyping_deduceIterationRange MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRange)


DLLDirection
modelica_metatype omc_NFTyping_deduceIterationRangeExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _iterator, modelica_metatype _info);
#define boxptr_NFTyping_deduceIterationRangeExp omc_NFTyping_deduceIterationRangeExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeExp,2,0) {(void*) boxptr_NFTyping_deduceIterationRangeExp,0}};
#define boxvar_NFTyping_deduceIterationRangeExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeExp)


DLLDirection
modelica_metatype omc_NFTyping_deduceIterationRangeStmt(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _iterator, modelica_metatype _info);
#define boxptr_NFTyping_deduceIterationRangeStmt omc_NFTyping_deduceIterationRangeStmt
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeStmt,2,0) {(void*) boxptr_NFTyping_deduceIterationRangeStmt,0}};
#define boxvar_NFTyping_deduceIterationRangeStmt MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeStmt)


DLLDirection
modelica_metatype omc_NFTyping_deduceIterationRangeEq(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _iterator, modelica_metatype _info);
#define boxptr_NFTyping_deduceIterationRangeEq omc_NFTyping_deduceIterationRangeEq
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeEq,2,0) {(void*) boxptr_NFTyping_deduceIterationRangeEq,0}};
#define boxvar_NFTyping_deduceIterationRangeEq MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceIterationRangeEq)


DLLDirection
modelica_metatype omc_NFTyping_typeReinit(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcrefExp, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _context, modelica_metatype _source, modelica_metatype *out_exp);
DLLDirection
modelica_metatype boxptr_NFTyping_typeReinit(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcrefExp, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _context, modelica_metatype _source, modelica_metatype *out_exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeReinit,2,0) {(void*) boxptr_NFTyping_typeReinit,0}};
#define boxvar_NFTyping_typeReinit MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeReinit)


DLLDirection
modelica_metatype omc_NFTyping_typeOperatorArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _expectedType, modelica_integer _context, modelica_string _operatorName, modelica_string _argName, modelica_integer _argIndex, modelica_metatype _info, modelica_integer *out_var);
DLLDirection
modelica_metatype boxptr_NFTyping_typeOperatorArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _expectedType, modelica_metatype _context, modelica_metatype _operatorName, modelica_metatype _argName, modelica_metatype _argIndex, modelica_metatype _info, modelica_metatype *out_var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeOperatorArg,2,0) {(void*) boxptr_NFTyping_typeOperatorArg,0}};
#define boxvar_NFTyping_typeOperatorArg MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeOperatorArg)


DLLDirection
modelica_boolean omc_NFTyping_checkWhenInitial(threadData_t *threadData, modelica_metatype _condition);
DLLDirection
modelica_metatype boxptr_NFTyping_checkWhenInitial(threadData_t *threadData, modelica_metatype _condition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkWhenInitial,2,0) {(void*) boxptr_NFTyping_checkWhenInitial,0}};
#define boxvar_NFTyping_checkWhenInitial MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkWhenInitial)


DLLDirection
modelica_metatype omc_NFTyping_typeWhenCondition(threadData_t *threadData, modelica_metatype _condition, modelica_integer _context, modelica_metatype _source, modelica_boolean _allowClock, modelica_metatype *out_ty, modelica_integer *out_variability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeWhenCondition(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _context, modelica_metatype _source, modelica_metatype _allowClock, modelica_metatype *out_ty, modelica_metatype *out_variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeWhenCondition,2,0) {(void*) boxptr_NFTyping_typeWhenCondition,0}};
#define boxvar_NFTyping_typeWhenCondition MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeWhenCondition)


DLLDirection
modelica_metatype omc_NFTyping_typeWhenEquation(threadData_t *threadData, modelica_metatype _branches, modelica_integer _context, modelica_metatype _scope, modelica_metatype _source);
DLLDirection
modelica_metatype boxptr_NFTyping_typeWhenEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _context, modelica_metatype _scope, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeWhenEquation,2,0) {(void*) boxptr_NFTyping_typeWhenEquation,0}};
#define boxvar_NFTyping_typeWhenEquation MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeWhenEquation)


DLLDirection
modelica_metatype omc_NFTyping_typeIfEquation(threadData_t *threadData, modelica_metatype _branches, modelica_integer _context, modelica_metatype _scope, modelica_metatype _source);
DLLDirection
modelica_metatype boxptr_NFTyping_typeIfEquation(threadData_t *threadData, modelica_metatype _branches, modelica_metatype _context, modelica_metatype _scope, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeIfEquation,2,0) {(void*) boxptr_NFTyping_typeIfEquation,0}};
#define boxvar_NFTyping_typeIfEquation MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeIfEquation)


DLLDirection
modelica_metatype omc_NFTyping_typeCondition(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_integer _context, modelica_metatype _source, modelica_metatype _errorMsg, modelica_boolean _allowVector, modelica_boolean _allowClock, modelica_metatype *out_ty, modelica_integer *out_variability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeCondition(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_metatype _context, modelica_metatype _source, modelica_metatype _errorMsg, modelica_metatype _allowVector, modelica_metatype _allowClock, modelica_metatype *out_ty, modelica_metatype *out_variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeCondition,2,0) {(void*) boxptr_NFTyping_typeCondition,0}};
#define boxvar_NFTyping_typeCondition MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeCondition)


DLLDirection
modelica_metatype omc_NFTyping_typeEqualityEquation(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype _rhsExp, modelica_integer _context, modelica_metatype _scope, modelica_metatype _source);
DLLDirection
modelica_metatype boxptr_NFTyping_typeEqualityEquation(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype _rhsExp, modelica_metatype _context, modelica_metatype _scope, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeEqualityEquation,2,0) {(void*) boxptr_NFTyping_typeEqualityEquation,0}};
#define boxvar_NFTyping_typeEqualityEquation MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeEqualityEquation)


DLLDirection
void omc_NFTyping_checkAssignment(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype _rhsExp, modelica_integer _lhsVar, modelica_integer _context, modelica_metatype _info);
DLLDirection
void boxptr_NFTyping_checkAssignment(threadData_t *threadData, modelica_metatype _lhsExp, modelica_metatype _rhsExp, modelica_metatype _lhsVar, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkAssignment,2,0) {(void*) boxptr_NFTyping_checkAssignment,0}};
#define boxvar_NFTyping_checkAssignment MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkAssignment)


DLLDirection
modelica_metatype omc_NFTyping_typeStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fst, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fst, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeStatement,2,0) {(void*) boxptr_NFTyping_typeStatement,0}};
#define boxvar_NFTyping_typeStatement MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeStatement)


DLLDirection
modelica_metatype omc_NFTyping_typeStatements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeStatements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeStatements,2,0) {(void*) boxptr_NFTyping_typeStatements,0}};
#define boxvar_NFTyping_typeStatements MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeStatements)


DLLDirection
modelica_metatype omc_NFTyping_typeAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeAlgorithm,2,0) {(void*) boxptr_NFTyping_typeAlgorithm,0}};
#define boxvar_NFTyping_typeAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeAlgorithm)


DLLDirection
modelica_metatype omc_NFTyping_typeAssert(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_metatype __omcQ_24in_5Fmessage, modelica_metatype __omcQ_24in_5Flevel, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_message, modelica_metatype *out_level);
DLLDirection
modelica_metatype boxptr_NFTyping_typeAssert(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_metatype __omcQ_24in_5Fmessage, modelica_metatype __omcQ_24in_5Flevel, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_message, modelica_metatype *out_level);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeAssert,2,0) {(void*) boxptr_NFTyping_typeAssert,0}};
#define boxvar_NFTyping_typeAssert MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeAssert)


DLLDirection
modelica_boolean omc_NFTyping_checkLhsInWhen(threadData_t *threadData, modelica_metatype _exp);
DLLDirection
modelica_metatype boxptr_NFTyping_checkLhsInWhen(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkLhsInWhen,2,0) {(void*) boxptr_NFTyping_checkLhsInWhen,0}};
#define boxvar_NFTyping_checkLhsInWhen MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkLhsInWhen)


DLLDirection
modelica_boolean omc_NFTyping_checkConnectorForm(threadData_t *threadData, modelica_metatype _cref, modelica_boolean _isConnector);
DLLDirection
modelica_metatype boxptr_NFTyping_checkConnectorForm(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _isConnector);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkConnectorForm,2,0) {(void*) boxptr_NFTyping_checkConnectorForm,0}};
#define boxvar_NFTyping_checkConnectorForm MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkConnectorForm)


DLLDirection
modelica_boolean omc_NFTyping_checkConnector(threadData_t *threadData, modelica_metatype _connExp, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFTyping_checkConnector(threadData_t *threadData, modelica_metatype _connExp, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkConnector,2,0) {(void*) boxptr_NFTyping_checkConnector,0}};
#define boxvar_NFTyping_checkConnector MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkConnector)


DLLDirection
modelica_metatype omc_NFTyping_typeConnector(threadData_t *threadData, modelica_metatype __omcQ_24in_5FconnExp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_boolean *out_deleted);
DLLDirection
modelica_metatype boxptr_NFTyping_typeConnector(threadData_t *threadData, modelica_metatype __omcQ_24in_5FconnExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_deleted);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeConnector,2,0) {(void*) boxptr_NFTyping_typeConnector,0}};
#define boxvar_NFTyping_typeConnector MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeConnector)


DLLDirection
modelica_metatype omc_NFTyping_typeConnect(threadData_t *threadData, modelica_metatype _lhsConn, modelica_metatype _rhsConn, modelica_integer _context, modelica_metatype _scope, modelica_metatype _source);
DLLDirection
modelica_metatype boxptr_NFTyping_typeConnect(threadData_t *threadData, modelica_metatype _lhsConn, modelica_metatype _rhsConn, modelica_metatype _context, modelica_metatype _scope, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeConnect,2,0) {(void*) boxptr_NFTyping_typeConnect,0}};
#define boxvar_NFTyping_typeConnect MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeConnect)


DLLDirection
modelica_metatype omc_NFTyping_typeEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeEquation,2,0) {(void*) boxptr_NFTyping_typeEquation,0}};
#define boxvar_NFTyping_typeEquation MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeEquation)


DLLDirection
void omc_NFTyping_typeComponentSections(threadData_t *threadData, modelica_metatype _component, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeComponentSections(threadData_t *threadData, modelica_metatype _component, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentSections,2,0) {(void*) boxptr_NFTyping_typeComponentSections,0}};
#define boxvar_NFTyping_typeComponentSections MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentSections)


DLLDirection
void omc_NFTyping_checkExternalCallResult(threadData_t *threadData, modelica_metatype _result, modelica_metatype _info);
#define boxptr_NFTyping_checkExternalCallResult omc_NFTyping_checkExternalCallResult
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkExternalCallResult,2,0) {(void*) boxptr_NFTyping_checkExternalCallResult,0}};
#define boxvar_NFTyping_checkExternalCallResult MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkExternalCallResult)


DLLDirection
modelica_metatype omc_NFTyping_makeDefaultExternalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5FextDecl, modelica_metatype _fnNode);
#define boxptr_NFTyping_makeDefaultExternalCall omc_NFTyping_makeDefaultExternalCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_makeDefaultExternalCall,2,0) {(void*) boxptr_NFTyping_makeDefaultExternalCall,0}};
#define boxvar_NFTyping_makeDefaultExternalCall MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_makeDefaultExternalCall)


DLLDirection
modelica_metatype omc_NFTyping_typeExternalArg(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _info, modelica_metatype _node);
#define boxptr_NFTyping_typeExternalArg omc_NFTyping_typeExternalArg
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeExternalArg,2,0) {(void*) boxptr_NFTyping_typeExternalArg,0}};
#define boxvar_NFTyping_typeExternalArg MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeExternalArg)


DLLDirection
void omc_NFTyping_typeFunctionSections(threadData_t *threadData, modelica_metatype _classNode, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeFunctionSections(threadData_t *threadData, modelica_metatype _classNode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeFunctionSections,2,0) {(void*) boxptr_NFTyping_typeFunctionSections,0}};
#define boxvar_NFTyping_typeFunctionSections MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeFunctionSections)


DLLDirection
void omc_NFTyping_typeClassSections(threadData_t *threadData, modelica_metatype _classNode, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeClassSections(threadData_t *threadData, modelica_metatype _classNode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeClassSections,2,0) {(void*) boxptr_NFTyping_typeClassSections,0}};
#define boxvar_NFTyping_typeClassSections MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeClassSections)


DLLDirection
modelica_metatype omc_NFTyping_typeIfExpression(threadData_t *threadData, modelica_metatype __omcQ_24in_5FifExp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeIfExpression(threadData_t *threadData, modelica_metatype __omcQ_24in_5FifExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeIfExpression,2,0) {(void*) boxptr_NFTyping_typeIfExpression,0}};
#define boxvar_NFTyping_typeIfExpression MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeIfExpression)


DLLDirection
modelica_metatype omc_NFTyping_evaluateEnd(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_integer _index, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFTyping_evaluateEnd(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dim, modelica_metatype _subscriptedExp, modelica_metatype _index, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_evaluateEnd,2,0) {(void*) boxptr_NFTyping_evaluateEnd,0}};
#define boxvar_NFTyping_evaluateEnd MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_evaluateEnd)


DLLDirection
void omc_NFTyping_checkSizeTypingError(threadData_t *threadData, modelica_metatype _typingError, modelica_metatype _exp, modelica_integer _index, modelica_metatype _info);
DLLDirection
void boxptr_NFTyping_checkSizeTypingError(threadData_t *threadData, modelica_metatype _typingError, modelica_metatype _exp, modelica_metatype _index, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkSizeTypingError,2,0) {(void*) boxptr_NFTyping_checkSizeTypingError,0}};
#define boxvar_NFTyping_checkSizeTypingError MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkSizeTypingError)


DLLDirection
modelica_metatype omc_NFTyping_typeSize(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsizeExp, modelica_integer _context, modelica_metatype _info, modelica_boolean _evaluate, modelica_metatype *out_sizeType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeSize(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsizeExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype _evaluate, modelica_metatype *out_sizeType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeSize,2,0) {(void*) boxptr_NFTyping_typeSize,0}};
#define boxvar_NFTyping_typeSize MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeSize)


DLLDirection
void omc_NFTyping_printRangeTypeError(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _ty1, modelica_metatype _exp2, modelica_metatype _ty2, modelica_metatype _info);
#define boxptr_NFTyping_printRangeTypeError omc_NFTyping_printRangeTypeError
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_printRangeTypeError,2,0) {(void*) boxptr_NFTyping_printRangeTypeError,0}};
#define boxvar_NFTyping_printRangeTypeError MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_printRangeTypeError)


DLLDirection
modelica_metatype omc_NFTyping_typeTuple(threadData_t *threadData, modelica_metatype _elements, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_tupleType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeTuple(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_tupleType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeTuple,2,0) {(void*) boxptr_NFTyping_typeTuple,0}};
#define boxvar_NFTyping_typeTuple MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeTuple)


DLLDirection
modelica_metatype omc_NFTyping_typeRange(threadData_t *threadData, modelica_metatype __omcQ_24in_5FrangeExp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_rangeType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeRange(threadData_t *threadData, modelica_metatype __omcQ_24in_5FrangeExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_rangeType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeRange,2,0) {(void*) boxptr_NFTyping_typeRange,0}};
#define boxvar_NFTyping_typeRange MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeRange)


DLLDirection
modelica_metatype omc_NFTyping_typeMatrixComma(threadData_t *threadData, modelica_metatype _elements, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeMatrixComma(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeMatrixComma,2,0) {(void*) boxptr_NFTyping_typeMatrixComma,0}};
#define boxvar_NFTyping_typeMatrixComma MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeMatrixComma)


DLLDirection
modelica_metatype omc_NFTyping_typeMatrix(threadData_t *threadData, modelica_metatype _elements, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeMatrix(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeMatrix,2,0) {(void*) boxptr_NFTyping_typeMatrix,0}};
#define boxvar_NFTyping_typeMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeMatrix)


DLLDirection
modelica_metatype omc_NFTyping_typeArray(threadData_t *threadData, modelica_metatype _elements, modelica_boolean _isLiteral, modelica_metatype _ty, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeArray(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _isLiteral, modelica_metatype _ty, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_arrayType, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeArray,2,0) {(void*) boxptr_NFTyping_typeArray,0}};
#define boxvar_NFTyping_typeArray MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeArray)


DLLDirection
modelica_metatype omc_NFTyping_checkSubscriptType(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsubscriptExp, modelica_metatype _subscriptType, modelica_metatype _dimension, modelica_metatype _info, modelica_metatype *out_outType);
#define boxptr_NFTyping_checkSubscriptType omc_NFTyping_checkSubscriptType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkSubscriptType,2,0) {(void*) boxptr_NFTyping_checkSubscriptType,0}};
#define boxvar_NFTyping_checkSubscriptType MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkSubscriptType)


DLLDirection
modelica_metatype omc_NFTyping_typeSubscript(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_metatype _subscriptedExp, modelica_integer _index, modelica_integer _context, modelica_metatype _info, modelica_boolean _checkSubscript, modelica_integer *out_variability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeSubscript(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _dimension, modelica_metatype _subscriptedExp, modelica_metatype _index, modelica_metatype _context, modelica_metatype _info, modelica_metatype _checkSubscript, modelica_metatype *out_variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscript,2,0) {(void*) boxptr_NFTyping_typeSubscript,0}};
#define boxvar_NFTyping_typeSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscript)


DLLDirection
modelica_metatype omc_NFTyping_typeSubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _crefType, modelica_metatype _subscriptedExp, modelica_integer _context, modelica_metatype _info, modelica_boolean _checkSubscripts, modelica_integer *out_variability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeSubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _crefType, modelica_metatype _subscriptedExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype _checkSubscripts, modelica_metatype *out_variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscripts,2,0) {(void*) boxptr_NFTyping_typeSubscripts,0}};
#define boxvar_NFTyping_typeSubscripts MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscripts)


DLLDirection
modelica_metatype omc_NFTyping_typeCref2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_integer _context, modelica_metatype _info, modelica_boolean _firstPart, modelica_integer *out_subsVariability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeCref2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _context, modelica_metatype _info, modelica_metatype _firstPart, modelica_metatype *out_subsVariability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeCref2,2,0) {(void*) boxptr_NFTyping_typeCref2,0}};
#define boxvar_NFTyping_typeCref2 MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeCref2)


DLLDirection
modelica_metatype omc_NFTyping_typeCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_nodeVariability, modelica_integer *out_subsVariability);
DLLDirection
modelica_metatype boxptr_NFTyping_typeCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_nodeVariability, modelica_metatype *out_subsVariability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeCref,2,0) {(void*) boxptr_NFTyping_typeCref,0}};
#define boxvar_NFTyping_typeCref MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeCref)


DLLDirection
modelica_metatype omc_NFTyping_typeCrefExp(threadData_t *threadData, modelica_metatype _cref, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeCrefExp(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeCrefExp,2,0) {(void*) boxptr_NFTyping_typeCrefExp,0}};
#define boxvar_NFTyping_typeCrefExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeCrefExp)


DLLDirection
modelica_metatype omc_NFTyping_nthDimensionBoundsChecked(threadData_t *threadData, modelica_metatype _ty, modelica_integer _dimIndex, modelica_integer _offset, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_nthDimensionBoundsChecked(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _dimIndex, modelica_metatype _offset, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_nthDimensionBoundsChecked,2,0) {(void*) boxptr_NFTyping_nthDimensionBoundsChecked,0}};
#define boxvar_NFTyping_nthDimensionBoundsChecked MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_nthDimensionBoundsChecked)


DLLDirection
void omc_NFTyping_checkCyclicDimension(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _component, modelica_integer _index, modelica_metatype _info);
DLLDirection
void boxptr_NFTyping_checkCyclicDimension(threadData_t *threadData, modelica_metatype _dim, modelica_metatype _component, modelica_metatype _index, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkCyclicDimension,2,0) {(void*) boxptr_NFTyping_checkCyclicDimension,0}};
#define boxvar_NFTyping_checkCyclicDimension MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkCyclicDimension)


DLLDirection
modelica_metatype omc_NFTyping_typeCrefDim(threadData_t *threadData, modelica_metatype _cref, modelica_integer _dimIndex, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_typeCrefDim(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _dimIndex, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeCrefDim,2,0) {(void*) boxptr_NFTyping_typeCrefDim,0}};
#define boxvar_NFTyping_typeCrefDim MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeCrefDim)


DLLDirection
modelica_metatype omc_NFTyping_typeArrayDim2(threadData_t *threadData, modelica_metatype _arrayExp, modelica_integer _dimIndex, modelica_integer _dimCount, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_typeArrayDim2(threadData_t *threadData, modelica_metatype _arrayExp, modelica_metatype _dimIndex, modelica_metatype _dimCount, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeArrayDim2,2,0) {(void*) boxptr_NFTyping_typeArrayDim2,0}};
#define boxvar_NFTyping_typeArrayDim2 MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeArrayDim2)


DLLDirection
modelica_metatype omc_NFTyping_typeArrayDim(threadData_t *threadData, modelica_metatype _arrayExp, modelica_integer _dimIndex, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_typeArrayDim(threadData_t *threadData, modelica_metatype _arrayExp, modelica_metatype _dimIndex, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeArrayDim,2,0) {(void*) boxptr_NFTyping_typeArrayDim,0}};
#define boxvar_NFTyping_typeArrayDim MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeArrayDim)


DLLDirection
modelica_metatype omc_NFTyping_evaluateArrayIf(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _target);
#define boxptr_NFTyping_evaluateArrayIf omc_NFTyping_evaluateArrayIf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_evaluateArrayIf,2,0) {(void*) boxptr_NFTyping_evaluateArrayIf,0}};
#define boxvar_NFTyping_evaluateArrayIf MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_evaluateArrayIf)


DLLDirection
modelica_metatype omc_NFTyping_typeExpDim(threadData_t *threadData, modelica_metatype _exp, modelica_integer _dimIndex, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_typedExp, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_typeExpDim(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _dimIndex, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_typedExp, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeExpDim,2,0) {(void*) boxptr_NFTyping_typeExpDim,0}};
#define boxvar_NFTyping_typeExpDim MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeExpDim)


DLLDirection
modelica_metatype omc_NFTyping_typeSubscriptedExp2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _splitSubs, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeSubscriptedExp2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _splitSubs, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscriptedExp2,2,0) {(void*) boxptr_NFTyping_typeSubscriptedExp2,0}};
#define boxvar_NFTyping_typeSubscriptedExp2 MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscriptedExp2)


DLLDirection
modelica_metatype omc_NFTyping_expandProxySubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_integer _context, modelica_metatype *out_fillDimensions);
DLLDirection
modelica_metatype boxptr_NFTyping_expandProxySubscripts(threadData_t *threadData, modelica_metatype _subscripts, modelica_metatype _context, modelica_metatype *out_fillDimensions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_expandProxySubscripts,2,0) {(void*) boxptr_NFTyping_expandProxySubscripts,0}};
#define boxvar_NFTyping_expandProxySubscripts MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_expandProxySubscripts)


DLLDirection
modelica_metatype omc_NFTyping_typeSubscriptedExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeSubscriptedExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscriptedExp,2,0) {(void*) boxptr_NFTyping_typeSubscriptedExp,0}};
#define boxvar_NFTyping_typeSubscriptedExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeSubscriptedExp)


DLLDirection
modelica_metatype omc_NFTyping_typeRecordExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeRecordExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeRecordExp,2,0) {(void*) boxptr_NFTyping_typeRecordExp,0}};
#define boxvar_NFTyping_typeRecordExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeRecordExp)


DLLDirection
modelica_metatype omc_NFTyping_typeExpl(threadData_t *threadData, modelica_metatype _expl, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_tyl, modelica_metatype *out_varl);
DLLDirection
modelica_metatype boxptr_NFTyping_typeExpl(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_tyl, modelica_metatype *out_varl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeExpl,2,0) {(void*) boxptr_NFTyping_typeExpl,0}};
#define boxvar_NFTyping_typeExpl MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeExpl)


DLLDirection
modelica_metatype omc_NFTyping_typeExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeExp,2,0) {(void*) boxptr_NFTyping_typeExp,0}};
#define boxvar_NFTyping_typeExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeExp)


DLLDirection
modelica_metatype omc_NFTyping_typeTypeAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _attrType, modelica_metatype _component, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeTypeAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _attrType, modelica_metatype _component, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeTypeAttribute,2,0) {(void*) boxptr_NFTyping_typeTypeAttribute,0}};
#define boxvar_NFTyping_typeTypeAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeTypeAttribute)


DLLDirection
modelica_metatype omc_NFTyping_typeComponentCondition(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_integer _context, modelica_boolean _evaluate);
DLLDirection
modelica_metatype boxptr_NFTyping_typeComponentCondition(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcondition, modelica_metatype _context, modelica_metatype _evaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentCondition,2,0) {(void*) boxptr_NFTyping_typeComponentCondition,0}};
#define boxvar_NFTyping_typeComponentCondition MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentCondition)


DLLDirection
modelica_metatype omc_NFTyping_typeBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_typeBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeBinding,2,0) {(void*) boxptr_NFTyping_typeBinding,0}};
#define boxvar_NFTyping_typeBinding MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeBinding)


DLLDirection
modelica_integer omc_NFTyping_checkComponentBindingVariability(threadData_t *threadData, modelica_string _name, modelica_metatype _component, modelica_metatype _binding, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFTyping_checkComponentBindingVariability(threadData_t *threadData, modelica_metatype _name, modelica_metatype _component, modelica_metatype _binding, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkComponentBindingVariability,2,0) {(void*) boxptr_NFTyping_checkComponentBindingVariability,0}};
#define boxvar_NFTyping_checkComponentBindingVariability MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkComponentBindingVariability)


DLLDirection
void omc_NFTyping_typeComponentBinding(threadData_t *threadData, modelica_metatype _component, modelica_integer _context, modelica_boolean _typeChildren);
DLLDirection
void boxptr_NFTyping_typeComponentBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _context, modelica_metatype _typeChildren);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentBinding,2,0) {(void*) boxptr_NFTyping_typeComponentBinding,0}};
#define boxvar_NFTyping_typeComponentBinding MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentBinding)


DLLDirection
void omc_NFTyping_typeBindings(threadData_t *threadData, modelica_metatype _cls, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeBindings(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeBindings,2,0) {(void*) boxptr_NFTyping_typeBindings,0}};
#define boxvar_NFTyping_typeBindings MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeBindings)


DLLDirection
modelica_metatype omc_NFTyping_getRecordElementBinding(threadData_t *threadData, modelica_metatype _component, modelica_integer _context, modelica_integer *out_parentDims);
DLLDirection
modelica_metatype boxptr_NFTyping_getRecordElementBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _context, modelica_metatype *out_parentDims);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_getRecordElementBinding,2,0) {(void*) boxptr_NFTyping_getRecordElementBinding,0}};
#define boxvar_NFTyping_getRecordElementBinding MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_getRecordElementBinding)


DLLDirection
modelica_metatype omc_NFTyping_makeDimension(threadData_t *threadData, modelica_metatype _dimExp, modelica_metatype _unevaledExp, modelica_integer _variability);
DLLDirection
modelica_metatype boxptr_NFTyping_makeDimension(threadData_t *threadData, modelica_metatype _dimExp, modelica_metatype _unevaledExp, modelica_metatype _variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_makeDimension,2,0) {(void*) boxptr_NFTyping_makeDimension,0}};
#define boxvar_NFTyping_makeDimension MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_makeDimension)


DLLDirection
modelica_metatype omc_NFTyping_simplifyDimExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FdimExp);
#define boxptr_NFTyping_simplifyDimExp omc_NFTyping_simplifyDimExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_simplifyDimExp,2,0) {(void*) boxptr_NFTyping_simplifyDimExp,0}};
#define boxvar_NFTyping_simplifyDimExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_simplifyDimExp)


DLLDirection
modelica_metatype omc_NFTyping_subscriptDimExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FdimExp, modelica_metatype _component);
#define boxptr_NFTyping_subscriptDimExp omc_NFTyping_subscriptDimExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_subscriptDimExp,2,0) {(void*) boxptr_NFTyping_subscriptDimExp,0}};
#define boxvar_NFTyping_subscriptDimExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_subscriptDimExp)


DLLDirection
modelica_metatype omc_NFTyping_deduceDimensionFromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_integer _index, modelica_integer _parentDims, modelica_metatype _component, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_error);
DLLDirection
modelica_metatype boxptr_NFTyping_deduceDimensionFromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _index, modelica_metatype _parentDims, modelica_metatype _component, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_deduceDimensionFromExp,2,0) {(void*) boxptr_NFTyping_deduceDimensionFromExp,0}};
#define boxvar_NFTyping_deduceDimensionFromExp MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_deduceDimensionFromExp)


DLLDirection
modelica_metatype omc_NFTyping_typeDimension(threadData_t *threadData, modelica_metatype _dimensions, modelica_integer _index, modelica_metatype _component, modelica_metatype _binding, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFTyping_typeDimension(threadData_t *threadData, modelica_metatype _dimensions, modelica_metatype _index, modelica_metatype _component, modelica_metatype _binding, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeDimension,2,0) {(void*) boxptr_NFTyping_typeDimension,0}};
#define boxvar_NFTyping_typeDimension MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeDimension)


DLLDirection
modelica_metatype omc_NFTyping_typeDimensions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdimensions, modelica_metatype _component, modelica_metatype _binding, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFTyping_typeDimensions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdimensions, modelica_metatype _component, modelica_metatype _binding, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeDimensions,2,0) {(void*) boxptr_NFTyping_typeDimensions,0}};
#define boxvar_NFTyping_typeDimensions MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeDimensions)


DLLDirection
modelica_metatype omc_NFTyping_typeIterator(threadData_t *threadData, modelica_metatype _iterator, modelica_metatype _range, modelica_integer _context, modelica_boolean _structural, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFTyping_typeIterator(threadData_t *threadData, modelica_metatype _iterator, modelica_metatype _range, modelica_metatype _context, modelica_metatype _structural, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeIterator,2,0) {(void*) boxptr_NFTyping_typeIterator,0}};
#define boxvar_NFTyping_typeIterator MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeIterator)


DLLDirection
void omc_NFTyping_checkComponentStreamAttribute(threadData_t *threadData, modelica_integer _cty, modelica_metatype _ty, modelica_metatype _component);
DLLDirection
void boxptr_NFTyping_checkComponentStreamAttribute(threadData_t *threadData, modelica_metatype _cty, modelica_metatype _ty, modelica_metatype _component);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkComponentStreamAttribute,2,0) {(void*) boxptr_NFTyping_checkComponentStreamAttribute,0}};
#define boxvar_NFTyping_checkComponentStreamAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkComponentStreamAttribute)


DLLDirection
void omc_NFTyping_typeComponentTry(threadData_t *threadData, modelica_metatype _componentNode, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeComponentTry(threadData_t *threadData, modelica_metatype _componentNode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentTry,2,0) {(void*) boxptr_NFTyping_typeComponentTry,0}};
#define boxvar_NFTyping_typeComponentTry MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponentTry)


DLLDirection
modelica_metatype omc_NFTyping_typeComponent(threadData_t *threadData, modelica_metatype _component, modelica_integer _context, modelica_boolean _typeChildren);
DLLDirection
modelica_metatype boxptr_NFTyping_typeComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _context, modelica_metatype _typeChildren);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponent,2,0) {(void*) boxptr_NFTyping_typeComponent,0}};
#define boxvar_NFTyping_typeComponent MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponent)


DLLDirection
modelica_metatype omc_NFTyping_makeRecordType(threadData_t *threadData, modelica_metatype _constructor);
#define boxptr_NFTyping_makeRecordType omc_NFTyping_makeRecordType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_makeRecordType,2,0) {(void*) boxptr_NFTyping_makeRecordType,0}};
#define boxvar_NFTyping_makeRecordType MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_makeRecordType)


DLLDirection
void omc_NFTyping_checkConnectorTypeBalance(threadData_t *threadData, modelica_metatype _component);
#define boxptr_NFTyping_checkConnectorTypeBalance omc_NFTyping_checkConnectorTypeBalance
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_checkConnectorTypeBalance,2,0) {(void*) boxptr_NFTyping_checkConnectorTypeBalance,0}};
#define boxvar_NFTyping_checkConnectorTypeBalance MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_checkConnectorTypeBalance)


DLLDirection
modelica_metatype omc_NFTyping_makeConnectorType(threadData_t *threadData, modelica_metatype _ctree, modelica_boolean _isExpandable);
DLLDirection
modelica_metatype boxptr_NFTyping_makeConnectorType(threadData_t *threadData, modelica_metatype _ctree, modelica_metatype _isExpandable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_makeConnectorType,2,0) {(void*) boxptr_NFTyping_makeConnectorType,0}};
#define boxvar_NFTyping_makeConnectorType MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_makeConnectorType)


DLLDirection
modelica_metatype omc_NFTyping_typeClassType(threadData_t *threadData, modelica_metatype _clsNode, modelica_metatype _componentBinding, modelica_integer _context, modelica_metatype _instanceNode);
DLLDirection
modelica_metatype boxptr_NFTyping_typeClassType(threadData_t *threadData, modelica_metatype _clsNode, modelica_metatype _componentBinding, modelica_metatype _context, modelica_metatype _instanceNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeClassType,2,0) {(void*) boxptr_NFTyping_typeClassType,0}};
#define boxvar_NFTyping_typeClassType MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeClassType)


DLLDirection
void omc_NFTyping_typeStructor(threadData_t *threadData, modelica_metatype _node);
#define boxptr_NFTyping_typeStructor omc_NFTyping_typeStructor
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeStructor,2,0) {(void*) boxptr_NFTyping_typeStructor,0}};
#define boxvar_NFTyping_typeStructor MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeStructor)


DLLDirection
void omc_NFTyping_typeComponents(threadData_t *threadData, modelica_metatype _cls, modelica_integer _context, modelica_boolean _preserveDerived);
DLLDirection
void boxptr_NFTyping_typeComponents(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _context, modelica_metatype _preserveDerived);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeComponents,2,0) {(void*) boxptr_NFTyping_typeComponents,0}};
#define boxvar_NFTyping_typeComponents MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeComponents)


DLLDirection
void omc_NFTyping_typeClass(threadData_t *threadData, modelica_metatype _cls, modelica_integer _context);
DLLDirection
void boxptr_NFTyping_typeClass(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_typeClass,2,0) {(void*) boxptr_NFTyping_typeClass,0}};
#define boxvar_NFTyping_typeClass MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_typeClass)


DLLDirection
modelica_boolean omc_NFTyping_TypingError_isError(threadData_t *threadData, modelica_metatype _error);
DLLDirection
modelica_metatype boxptr_NFTyping_TypingError_isError(threadData_t *threadData, modelica_metatype _error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFTyping_TypingError_isError,2,0) {(void*) boxptr_NFTyping_TypingError_isError,0}};
#define boxvar_NFTyping_TypingError_isError MMC_REFSTRUCTLIT(boxvar_lit_NFTyping_TypingError_isError)

#ifdef __cplusplus
}
#endif
#endif
