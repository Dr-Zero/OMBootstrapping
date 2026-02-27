#ifndef NFCeval__H
#define NFCeval__H
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

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NFBinding_CEVAL__BINDING__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFClockKind_EVENT__CLOCK__desc;

extern struct record_description NFClockKind_INFERRED__CLOCK__desc;

extern struct record_description NFClockKind_RATIONAL__CLOCK__desc;

extern struct record_description NFClockKind_REAL__CLOCK__desc;

extern struct record_description NFClockKind_SOLVER__CLOCK__desc;

extern struct record_description NFComponentRef_CREF__desc;

extern struct record_description NFExpression_BINARY__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CAST__desc;

extern struct record_description NFExpression_CLKCONST__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_ENUM__LITERAL__desc;

extern struct record_description NFExpression_FILENAME__desc;

extern struct record_description NFExpression_IF__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_LBINARY__desc;

extern struct record_description NFExpression_LUNARY__desc;

extern struct record_description NFExpression_RANGE__desc;

extern struct record_description NFExpression_REAL__desc;

extern struct record_description NFExpression_RELATION__desc;

extern struct record_description NFExpression_STRING__desc;

extern struct record_description NFExpression_UNARY__desc;

extern struct record_description NFSubscript_WHOLE__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFCeval_printWrongArgsError omc_NFCeval_printWrongArgsError


#define boxptr_NFCeval_printUnboundError omc_NFCeval_printUnboundError


#define boxptr_NFCeval_evalRecordElement omc_NFCeval_evalRecordElement


#define boxptr_NFCeval_evalSubscriptedExp omc_NFCeval_evalSubscriptedExp


#define boxptr_NFCeval_evalSize omc_NFCeval_evalSize


#define boxptr_NFCeval_evalReduction_reductionFn omc_NFCeval_evalReduction_reductionFn


#define boxptr_NFCeval_evalReduction omc_NFCeval_evalReduction


#define boxptr_NFCeval_evalArrayConstructor2 omc_NFCeval_evalArrayConstructor2


#define boxptr_NFCeval_evalArrayConstructor omc_NFCeval_evalArrayConstructor


DLLDirection
modelica_metatype omc_NFCeval_evalGetInstanceName(threadData_t *threadData, modelica_metatype _scope);
#define boxptr_NFCeval_evalGetInstanceName omc_NFCeval_evalGetInstanceName
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalGetInstanceName,2,0) {(void*) boxptr_NFCeval_evalGetInstanceName,0}};
#define boxvar_NFCeval_evalGetInstanceName MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalGetInstanceName)


#define boxptr_NFCeval_evalSolverClock omc_NFCeval_evalSolverClock


#define boxptr_NFCeval_evalBooleanClock omc_NFCeval_evalBooleanClock


#define boxptr_NFCeval_evalRealClock omc_NFCeval_evalRealClock


#define boxptr_NFCeval_evalRationalClock omc_NFCeval_evalRationalClock


#define boxptr_NFCeval_evalInferredClock omc_NFCeval_evalInferredClock


#define boxptr_NFCeval_evalIntBitRShift omc_NFCeval_evalIntBitRShift


#define boxptr_NFCeval_evalIntBitLShift omc_NFCeval_evalIntBitLShift


#define boxptr_NFCeval_evalIntBitXor omc_NFCeval_evalIntBitXor


#define boxptr_NFCeval_evalIntBitOr omc_NFCeval_evalIntBitOr


#define boxptr_NFCeval_evalIntBitAnd omc_NFCeval_evalIntBitAnd


#define boxptr_NFCeval_evalUriToFilename omc_NFCeval_evalUriToFilename


#define boxptr_NFCeval_evalBuiltinZeros omc_NFCeval_evalBuiltinZeros


#define boxptr_NFCeval_evalBuiltinVector omc_NFCeval_evalBuiltinVector


#define boxptr_NFCeval_evalBuiltinTranspose omc_NFCeval_evalBuiltinTranspose


#define boxptr_NFCeval_evalBuiltinTan omc_NFCeval_evalBuiltinTan


#define boxptr_NFCeval_evalBuiltinTanh omc_NFCeval_evalBuiltinTanh


#define boxptr_NFCeval_evalBuiltinSymmetric omc_NFCeval_evalBuiltinSymmetric


#define boxptr_NFCeval_evalBuiltinSum omc_NFCeval_evalBuiltinSum


#define boxptr_NFCeval_evalBuiltinString omc_NFCeval_evalBuiltinString


#define boxptr_NFCeval_evalBuiltinSqrt omc_NFCeval_evalBuiltinSqrt


#define boxptr_NFCeval_evalBuiltinSkew omc_NFCeval_evalBuiltinSkew


#define boxptr_NFCeval_evalBuiltinSin omc_NFCeval_evalBuiltinSin


#define boxptr_NFCeval_evalBuiltinSinh omc_NFCeval_evalBuiltinSinh


#define boxptr_NFCeval_evalBuiltinSign omc_NFCeval_evalBuiltinSign


#define boxptr_NFCeval_evalBuiltinScalar omc_NFCeval_evalBuiltinScalar


#define boxptr_NFCeval_evalBuiltinRem omc_NFCeval_evalBuiltinRem


#define boxptr_NFCeval_evalBuiltinPromote omc_NFCeval_evalBuiltinPromote


#define boxptr_NFCeval_evalBuiltinProduct omc_NFCeval_evalBuiltinProduct


#define boxptr_NFCeval_evalBuiltinOnes omc_NFCeval_evalBuiltinOnes


#define boxptr_NFCeval_evalBuiltinMod omc_NFCeval_evalBuiltinMod


#define boxptr_NFCeval_evalBuiltinMin2 omc_NFCeval_evalBuiltinMin2


#define boxptr_NFCeval_evalBuiltinMin omc_NFCeval_evalBuiltinMin


#define boxptr_NFCeval_evalPositiveMax omc_NFCeval_evalPositiveMax


#define boxptr_NFCeval_evalBuiltinMax2 omc_NFCeval_evalBuiltinMax2


#define boxptr_NFCeval_evalBuiltinMax omc_NFCeval_evalBuiltinMax


#define boxptr_NFCeval_evalBuiltinMatrix2 omc_NFCeval_evalBuiltinMatrix2


#define boxptr_NFCeval_evalBuiltinMatrix omc_NFCeval_evalBuiltinMatrix


#define boxptr_NFCeval_evalBuiltinLog omc_NFCeval_evalBuiltinLog


#define boxptr_NFCeval_evalBuiltinLog10 omc_NFCeval_evalBuiltinLog10


#define boxptr_NFCeval_evalBuiltinIntegerEnum omc_NFCeval_evalBuiltinIntegerEnum


#define boxptr_NFCeval_evalBuiltinInteger omc_NFCeval_evalBuiltinInteger


#define boxptr_NFCeval_evalBuiltinIdentity omc_NFCeval_evalBuiltinIdentity


#define boxptr_NFCeval_evalBuiltinFloor omc_NFCeval_evalBuiltinFloor


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinFill(threadData_t *threadData, modelica_metatype _args);
#define boxptr_NFCeval_evalBuiltinFill omc_NFCeval_evalBuiltinFill
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinFill,2,0) {(void*) boxptr_NFCeval_evalBuiltinFill,0}};
#define boxvar_NFCeval_evalBuiltinFill MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinFill)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinExp(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinExp omc_NFCeval_evalBuiltinExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinExp,2,0) {(void*) boxptr_NFCeval_evalBuiltinExp,0}};
#define boxvar_NFCeval_evalBuiltinExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinExp)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinDiv(threadData_t *threadData, modelica_metatype _args, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinDiv omc_NFCeval_evalBuiltinDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDiv,2,0) {(void*) boxptr_NFCeval_evalBuiltinDiv,0}};
#define boxvar_NFCeval_evalBuiltinDiv MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDiv)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinDiagonal(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinDiagonal omc_NFCeval_evalBuiltinDiagonal
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDiagonal,2,0) {(void*) boxptr_NFCeval_evalBuiltinDiagonal,0}};
#define boxvar_NFCeval_evalBuiltinDiagonal MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDiagonal)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinDer(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinDer omc_NFCeval_evalBuiltinDer
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDer,2,0) {(void*) boxptr_NFCeval_evalBuiltinDer,0}};
#define boxvar_NFCeval_evalBuiltinDer MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinDer)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCos(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinCos omc_NFCeval_evalBuiltinCos
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCos,2,0) {(void*) boxptr_NFCeval_evalBuiltinCos,0}};
#define boxvar_NFCeval_evalBuiltinCos MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCos)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCosh(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinCosh omc_NFCeval_evalBuiltinCosh
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCosh,2,0) {(void*) boxptr_NFCeval_evalBuiltinCosh,0}};
#define boxvar_NFCeval_evalBuiltinCosh MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCosh)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCeil(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinCeil omc_NFCeval_evalBuiltinCeil
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCeil,2,0) {(void*) boxptr_NFCeval_evalBuiltinCeil,0}};
#define boxvar_NFCeval_evalBuiltinCeil MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCeil)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCat(threadData_t *threadData, modelica_metatype _argN, modelica_metatype _args, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinCat omc_NFCeval_evalBuiltinCat
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCat,2,0) {(void*) boxptr_NFCeval_evalBuiltinCat,0}};
#define boxvar_NFCeval_evalBuiltinCat MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCat)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinAtan(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinAtan omc_NFCeval_evalBuiltinAtan
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAtan,2,0) {(void*) boxptr_NFCeval_evalBuiltinAtan,0}};
#define boxvar_NFCeval_evalBuiltinAtan MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAtan)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinAtan2(threadData_t *threadData, modelica_metatype _args);
#define boxptr_NFCeval_evalBuiltinAtan2 omc_NFCeval_evalBuiltinAtan2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAtan2,2,0) {(void*) boxptr_NFCeval_evalBuiltinAtan2,0}};
#define boxvar_NFCeval_evalBuiltinAtan2 MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAtan2)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinAsin(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinAsin omc_NFCeval_evalBuiltinAsin
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAsin,2,0) {(void*) boxptr_NFCeval_evalBuiltinAsin,0}};
#define boxvar_NFCeval_evalBuiltinAsin MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAsin)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinArray(threadData_t *threadData, modelica_metatype _args);
#define boxptr_NFCeval_evalBuiltinArray omc_NFCeval_evalBuiltinArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinArray,2,0) {(void*) boxptr_NFCeval_evalBuiltinArray,0}};
#define boxvar_NFCeval_evalBuiltinArray MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinArray)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinAcos(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinAcos omc_NFCeval_evalBuiltinAcos
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAcos,2,0) {(void*) boxptr_NFCeval_evalBuiltinAcos,0}};
#define boxvar_NFCeval_evalBuiltinAcos MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAcos)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinAbs(threadData_t *threadData, modelica_metatype _arg);
#define boxptr_NFCeval_evalBuiltinAbs omc_NFCeval_evalBuiltinAbs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAbs,2,0) {(void*) boxptr_NFCeval_evalBuiltinAbs,0}};
#define boxvar_NFCeval_evalBuiltinAbs MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinAbs)


DLLDirection
modelica_metatype omc_NFCeval_evalNormalCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _target);
#define boxptr_NFCeval_evalNormalCall omc_NFCeval_evalNormalCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalNormalCall,2,0) {(void*) boxptr_NFCeval_evalNormalCall,0}};
#define boxvar_NFCeval_evalNormalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalNormalCall)


DLLDirection
modelica_metatype omc_NFCeval_evalNormalCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _target);
#define boxptr_NFCeval_evalNormalCallExp omc_NFCeval_evalNormalCallExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalNormalCallExp,2,0) {(void*) boxptr_NFCeval_evalNormalCallExp,0}};
#define boxvar_NFCeval_evalNormalCallExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalNormalCallExp)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinCall omc_NFCeval_evalBuiltinCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCall,2,0) {(void*) boxptr_NFCeval_evalBuiltinCall,0}};
#define boxvar_NFCeval_evalBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCall)


DLLDirection
modelica_metatype omc_NFCeval_evalBuiltinCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _target);
#define boxptr_NFCeval_evalBuiltinCallExp omc_NFCeval_evalBuiltinCallExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCallExp,2,0) {(void*) boxptr_NFCeval_evalBuiltinCallExp,0}};
#define boxvar_NFCeval_evalBuiltinCallExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBuiltinCallExp)


DLLDirection
modelica_metatype omc_NFCeval_evalCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _target);
#define boxptr_NFCeval_evalCall omc_NFCeval_evalCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalCall,2,0) {(void*) boxptr_NFCeval_evalCall,0}};
#define boxvar_NFCeval_evalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalCall)


DLLDirection
modelica_metatype omc_NFCeval_evalCast(threadData_t *threadData, modelica_metatype _castExp, modelica_metatype _castTy);
#define boxptr_NFCeval_evalCast omc_NFCeval_evalCast
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalCast,2,0) {(void*) boxptr_NFCeval_evalCast,0}};
#define boxvar_NFCeval_evalCast MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalCast)


DLLDirection
modelica_metatype omc_NFCeval_evalIfExp2(threadData_t *threadData, modelica_metatype _ifExp, modelica_metatype _target);
#define boxptr_NFCeval_evalIfExp2 omc_NFCeval_evalIfExp2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalIfExp2,2,0) {(void*) boxptr_NFCeval_evalIfExp2,0}};
#define boxvar_NFCeval_evalIfExp2 MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalIfExp2)


DLLDirection
modelica_metatype omc_NFCeval_evalIfExp(threadData_t *threadData, modelica_metatype _ifExp, modelica_metatype _target);
#define boxptr_NFCeval_evalIfExp omc_NFCeval_evalIfExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalIfExp,2,0) {(void*) boxptr_NFCeval_evalIfExp,0}};
#define boxvar_NFCeval_evalIfExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalIfExp)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationNotEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationNotEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationNotEqual,2,0) {(void*) boxptr_NFCeval_evalRelationNotEqual,0}};
#define boxvar_NFCeval_evalRelationNotEqual MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationNotEqual)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationEqual(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationEqual,2,0) {(void*) boxptr_NFCeval_evalRelationEqual,0}};
#define boxvar_NFCeval_evalRelationEqual MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationEqual)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationGreaterEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationGreaterEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationGreaterEq,2,0) {(void*) boxptr_NFCeval_evalRelationGreaterEq,0}};
#define boxvar_NFCeval_evalRelationGreaterEq MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationGreaterEq)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationGreater(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationGreater(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationGreater,2,0) {(void*) boxptr_NFCeval_evalRelationGreater,0}};
#define boxvar_NFCeval_evalRelationGreater MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationGreater)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationLessEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationLessEq(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationLessEq,2,0) {(void*) boxptr_NFCeval_evalRelationLessEq,0}};
#define boxvar_NFCeval_evalRelationLessEq MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationLessEq)


DLLDirection
modelica_boolean omc_NFCeval_evalRelationLess(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRelationLess(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationLess,2,0) {(void*) boxptr_NFCeval_evalRelationLess,0}};
#define boxvar_NFCeval_evalRelationLess MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationLess)


DLLDirection
modelica_metatype omc_NFCeval_evalRelationOp__dispatch(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFCeval_evalRelationOp__dispatch omc_NFCeval_evalRelationOp__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationOp__dispatch,2,0) {(void*) boxptr_NFCeval_evalRelationOp__dispatch,0}};
#define boxvar_NFCeval_evalRelationOp__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationOp__dispatch)


DLLDirection
modelica_metatype omc_NFCeval_evalRelationExp(threadData_t *threadData, modelica_metatype _relationExp);
#define boxptr_NFCeval_evalRelationExp omc_NFCeval_evalRelationExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationExp,2,0) {(void*) boxptr_NFCeval_evalRelationExp,0}};
#define boxvar_NFCeval_evalRelationExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationExp)


DLLDirection
modelica_metatype omc_NFCeval_evalRelationOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFCeval_evalRelationOp omc_NFCeval_evalRelationOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationOp,2,0) {(void*) boxptr_NFCeval_evalRelationOp,0}};
#define boxvar_NFCeval_evalRelationOp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRelationOp)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicUnaryNot(threadData_t *threadData, modelica_metatype _exp1);
#define boxptr_NFCeval_evalLogicUnaryNot omc_NFCeval_evalLogicUnaryNot
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicUnaryNot,2,0) {(void*) boxptr_NFCeval_evalLogicUnaryNot,0}};
#define boxvar_NFCeval_evalLogicUnaryNot MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicUnaryNot)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicUnaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op);
#define boxptr_NFCeval_evalLogicUnaryOp omc_NFCeval_evalLogicUnaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicUnaryOp,2,0) {(void*) boxptr_NFCeval_evalLogicUnaryOp,0}};
#define boxvar_NFCeval_evalLogicUnaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicUnaryOp)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicBinaryOr(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalLogicBinaryOr omc_NFCeval_evalLogicBinaryOr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOr,2,0) {(void*) boxptr_NFCeval_evalLogicBinaryOr,0}};
#define boxvar_NFCeval_evalLogicBinaryOr MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOr)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicBinaryAnd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalLogicBinaryAnd omc_NFCeval_evalLogicBinaryAnd
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryAnd,2,0) {(void*) boxptr_NFCeval_evalLogicBinaryAnd,0}};
#define boxvar_NFCeval_evalLogicBinaryAnd MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryAnd)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicBinaryOp__dispatch(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalLogicBinaryOp__dispatch omc_NFCeval_evalLogicBinaryOp__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOp__dispatch,2,0) {(void*) boxptr_NFCeval_evalLogicBinaryOp__dispatch,0}};
#define boxvar_NFCeval_evalLogicBinaryOp__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOp__dispatch)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicBinaryExp(threadData_t *threadData, modelica_metatype _binaryExp, modelica_metatype _target);
#define boxptr_NFCeval_evalLogicBinaryExp omc_NFCeval_evalLogicBinaryExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryExp,2,0) {(void*) boxptr_NFCeval_evalLogicBinaryExp,0}};
#define boxvar_NFCeval_evalLogicBinaryExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryExp)


DLLDirection
modelica_metatype omc_NFCeval_evalLogicBinaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalLogicBinaryOp omc_NFCeval_evalLogicBinaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOp,2,0) {(void*) boxptr_NFCeval_evalLogicBinaryOp,0}};
#define boxvar_NFCeval_evalLogicBinaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalLogicBinaryOp)


DLLDirection
modelica_metatype omc_NFCeval_evalUnaryMinus(threadData_t *threadData, modelica_metatype _exp1);
#define boxptr_NFCeval_evalUnaryMinus omc_NFCeval_evalUnaryMinus
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalUnaryMinus,2,0) {(void*) boxptr_NFCeval_evalUnaryMinus,0}};
#define boxvar_NFCeval_evalUnaryMinus MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalUnaryMinus)


DLLDirection
modelica_metatype omc_NFCeval_evalUnaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op);
#define boxptr_NFCeval_evalUnaryOp omc_NFCeval_evalUnaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalUnaryOp,2,0) {(void*) boxptr_NFCeval_evalUnaryOp,0}};
#define boxvar_NFCeval_evalUnaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalUnaryOp)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_integer _n);
DLLDirection
modelica_metatype boxptr_NFCeval_evalBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPowMatrix2,2,0) {(void*) boxptr_NFCeval_evalBinaryPowMatrix2,0}};
#define boxvar_NFCeval_evalBinaryPowMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPowMatrix2)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryPowMatrix(threadData_t *threadData, modelica_metatype _matrixExp, modelica_metatype _nExp);
#define boxptr_NFCeval_evalBinaryPowMatrix omc_NFCeval_evalBinaryPowMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPowMatrix,2,0) {(void*) boxptr_NFCeval_evalBinaryPowMatrix,0}};
#define boxvar_NFCeval_evalBinaryPowMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPowMatrix)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFCeval_evalBinaryMatrixProduct omc_NFCeval_evalBinaryMatrixProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMatrixProduct,2,0) {(void*) boxptr_NFCeval_evalBinaryMatrixProduct,0}};
#define boxvar_NFCeval_evalBinaryMatrixProduct MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMatrixProduct)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryScalarProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFCeval_evalBinaryScalarProduct omc_NFCeval_evalBinaryScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryScalarProduct,2,0) {(void*) boxptr_NFCeval_evalBinaryScalarProduct,0}};
#define boxvar_NFCeval_evalBinaryScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryScalarProduct)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryMulMatrixVector(threadData_t *threadData, modelica_metatype _matrixExp, modelica_metatype _vectorExp);
#define boxptr_NFCeval_evalBinaryMulMatrixVector omc_NFCeval_evalBinaryMulMatrixVector
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMulMatrixVector,2,0) {(void*) boxptr_NFCeval_evalBinaryMulMatrixVector,0}};
#define boxvar_NFCeval_evalBinaryMulMatrixVector MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMulMatrixVector)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryMulVectorMatrix(threadData_t *threadData, modelica_metatype _vectorExp, modelica_metatype _matrixExp);
#define boxptr_NFCeval_evalBinaryMulVectorMatrix omc_NFCeval_evalBinaryMulVectorMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMulVectorMatrix,2,0) {(void*) boxptr_NFCeval_evalBinaryMulVectorMatrix,0}};
#define boxvar_NFCeval_evalBinaryMulVectorMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMulVectorMatrix)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryArrayScalar(threadData_t *threadData, modelica_metatype _arrayExp, modelica_metatype _scalarExp, modelica_fnptr _opFunc);
#define boxptr_NFCeval_evalBinaryArrayScalar omc_NFCeval_evalBinaryArrayScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryArrayScalar,2,0) {(void*) boxptr_NFCeval_evalBinaryArrayScalar,0}};
#define boxvar_NFCeval_evalBinaryArrayScalar MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryArrayScalar)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryScalarArray(threadData_t *threadData, modelica_metatype _scalarExp, modelica_metatype _arrayExp, modelica_fnptr _opFunc);
#define boxptr_NFCeval_evalBinaryScalarArray omc_NFCeval_evalBinaryScalarArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryScalarArray,2,0) {(void*) boxptr_NFCeval_evalBinaryScalarArray,0}};
#define boxvar_NFCeval_evalBinaryScalarArray MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryScalarArray)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryPow(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalBinaryPow omc_NFCeval_evalBinaryPow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPow,2,0) {(void*) boxptr_NFCeval_evalBinaryPow,0}};
#define boxvar_NFCeval_evalBinaryPow MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryPow)


DLLDirection
modelica_metatype omc_NFCeval_evalMultaryMulDiv(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_metatype _operator_ty, modelica_boolean *out_isNeutral);
DLLDirection
modelica_metatype boxptr_NFCeval_evalMultaryMulDiv(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_metatype _operator_ty, modelica_metatype *out_isNeutral);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalMultaryMulDiv,2,0) {(void*) boxptr_NFCeval_evalMultaryMulDiv,0}};
#define boxvar_NFCeval_evalMultaryMulDiv MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalMultaryMulDiv)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalBinaryDiv omc_NFCeval_evalBinaryDiv
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryDiv,2,0) {(void*) boxptr_NFCeval_evalBinaryDiv,0}};
#define boxvar_NFCeval_evalBinaryDiv MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryDiv)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFCeval_evalBinaryMul omc_NFCeval_evalBinaryMul
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMul,2,0) {(void*) boxptr_NFCeval_evalBinaryMul,0}};
#define boxvar_NFCeval_evalBinaryMul MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryMul)


DLLDirection
modelica_metatype omc_NFCeval_evalMultaryAddSub(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_metatype _operator_ty, modelica_boolean *out_isNeutral);
DLLDirection
modelica_metatype boxptr_NFCeval_evalMultaryAddSub(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_metatype _operator_ty, modelica_metatype *out_isNeutral);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalMultaryAddSub,2,0) {(void*) boxptr_NFCeval_evalMultaryAddSub,0}};
#define boxvar_NFCeval_evalMultaryAddSub MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalMultaryAddSub)


DLLDirection
modelica_metatype omc_NFCeval_evalBinarySub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFCeval_evalBinarySub omc_NFCeval_evalBinarySub
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinarySub,2,0) {(void*) boxptr_NFCeval_evalBinarySub,0}};
#define boxvar_NFCeval_evalBinarySub MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinarySub)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryAdd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFCeval_evalBinaryAdd omc_NFCeval_evalBinaryAdd
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryAdd,2,0) {(void*) boxptr_NFCeval_evalBinaryAdd,0}};
#define boxvar_NFCeval_evalBinaryAdd MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryAdd)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryOp__dispatch(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalBinaryOp__dispatch omc_NFCeval_evalBinaryOp__dispatch
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryOp__dispatch,2,0) {(void*) boxptr_NFCeval_evalBinaryOp__dispatch,0}};
#define boxvar_NFCeval_evalBinaryOp__dispatch MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryOp__dispatch)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryExp(threadData_t *threadData, modelica_metatype _binaryExp, modelica_metatype _target);
#define boxptr_NFCeval_evalBinaryExp omc_NFCeval_evalBinaryExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryExp,2,0) {(void*) boxptr_NFCeval_evalBinaryExp,0}};
#define boxvar_NFCeval_evalBinaryExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryExp)


DLLDirection
modelica_metatype omc_NFCeval_evalBinaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _target);
#define boxptr_NFCeval_evalBinaryOp omc_NFCeval_evalBinaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryOp,2,0) {(void*) boxptr_NFCeval_evalBinaryOp,0}};
#define boxvar_NFCeval_evalBinaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalBinaryOp)


DLLDirection
void omc_NFCeval_printFailedEvalError(threadData_t *threadData, modelica_string _name, modelica_metatype _exp, modelica_metatype _info);
#define boxptr_NFCeval_printFailedEvalError omc_NFCeval_printFailedEvalError
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_printFailedEvalError,2,0) {(void*) boxptr_NFCeval_printFailedEvalError,0}};
#define boxvar_NFCeval_printFailedEvalError MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_printFailedEvalError)


DLLDirection
modelica_metatype omc_NFCeval_evalRangeReal(threadData_t *threadData, modelica_real _start, modelica_real _step, modelica_real _stop);
DLLDirection
modelica_metatype boxptr_NFCeval_evalRangeReal(threadData_t *threadData, modelica_metatype _start, modelica_metatype _step, modelica_metatype _stop);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRangeReal,2,0) {(void*) boxptr_NFCeval_evalRangeReal,0}};
#define boxvar_NFCeval_evalRangeReal MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRangeReal)


DLLDirection
modelica_metatype omc_NFCeval_evalRangeExp(threadData_t *threadData, modelica_metatype _rangeExp);
#define boxptr_NFCeval_evalRangeExp omc_NFCeval_evalRangeExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRangeExp,2,0) {(void*) boxptr_NFCeval_evalRangeExp,0}};
#define boxvar_NFCeval_evalRangeExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRangeExp)


DLLDirection
modelica_metatype omc_NFCeval_evalRange(threadData_t *threadData, modelica_metatype _rangeExp, modelica_metatype _target);
#define boxptr_NFCeval_evalRange omc_NFCeval_evalRange
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalRange,2,0) {(void*) boxptr_NFCeval_evalRange,0}};
#define boxvar_NFCeval_evalRange MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalRange)


DLLDirection
modelica_metatype omc_NFCeval_evalTypename(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _originExp, modelica_metatype _target);
#define boxptr_NFCeval_evalTypename omc_NFCeval_evalTypename
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalTypename,2,0) {(void*) boxptr_NFCeval_evalTypename,0}};
#define boxvar_NFCeval_evalTypename MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalTypename)


DLLDirection
modelica_metatype omc_NFCeval_makeRecordBindingExp(threadData_t *threadData, modelica_metatype _typeNode, modelica_metatype _recordNode, modelica_metatype _recordType, modelica_metatype _cref, modelica_metatype _target);
#define boxptr_NFCeval_makeRecordBindingExp omc_NFCeval_makeRecordBindingExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_makeRecordBindingExp,2,0) {(void*) boxptr_NFCeval_makeRecordBindingExp,0}};
#define boxvar_NFCeval_makeRecordBindingExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_makeRecordBindingExp)


DLLDirection
modelica_metatype omc_NFCeval_makeRecordFieldBindingFromParent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _target);
#define boxptr_NFCeval_makeRecordFieldBindingFromParent omc_NFCeval_makeRecordFieldBindingFromParent
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_makeRecordFieldBindingFromParent,2,0) {(void*) boxptr_NFCeval_makeRecordFieldBindingFromParent,0}};
#define boxvar_NFCeval_makeRecordFieldBindingFromParent MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_makeRecordFieldBindingFromParent)


DLLDirection
modelica_metatype omc_NFCeval_makeComponentBinding(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node, modelica_metatype _cref, modelica_metatype _target);
#define boxptr_NFCeval_makeComponentBinding omc_NFCeval_makeComponentBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_makeComponentBinding,2,0) {(void*) boxptr_NFCeval_makeComponentBinding,0}};
#define boxvar_NFCeval_makeComponentBinding MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_makeComponentBinding)


DLLDirection
modelica_metatype omc_NFCeval_evalComponentStartBinding(threadData_t *threadData, modelica_metatype _node, modelica_metatype _comp, modelica_metatype _cref, modelica_metatype _target, modelica_boolean _evalSubscripts);
DLLDirection
modelica_metatype boxptr_NFCeval_evalComponentStartBinding(threadData_t *threadData, modelica_metatype _node, modelica_metatype _comp, modelica_metatype _cref, modelica_metatype _target, modelica_metatype _evalSubscripts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalComponentStartBinding,2,0) {(void*) boxptr_NFCeval_evalComponentStartBinding,0}};
#define boxvar_NFCeval_evalComponentStartBinding MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalComponentStartBinding)


DLLDirection
modelica_metatype omc_NFCeval_subscriptBinding3(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _subMap);
#define boxptr_NFCeval_subscriptBinding3 omc_NFCeval_subscriptBinding3
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding3,2,0) {(void*) boxptr_NFCeval_subscriptBinding3,0}};
#define boxvar_NFCeval_subscriptBinding3 MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding3)


DLLDirection
modelica_boolean omc_NFCeval_isFlatCref(threadData_t *threadData, modelica_metatype _cref);
DLLDirection
modelica_metatype boxptr_NFCeval_isFlatCref(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_isFlatCref,2,0) {(void*) boxptr_NFCeval_isFlatCref,0}};
#define boxvar_NFCeval_isFlatCref MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_isFlatCref)


DLLDirection
modelica_metatype omc_NFCeval_subscriptBinding2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _cref, modelica_boolean _evalSubscripts, modelica_metatype __omcQ_24in_5FsubMap, modelica_metatype *out_subMap);
DLLDirection
modelica_metatype boxptr_NFCeval_subscriptBinding2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _cref, modelica_metatype _evalSubscripts, modelica_metatype __omcQ_24in_5FsubMap, modelica_metatype *out_subMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding2,2,0) {(void*) boxptr_NFCeval_subscriptBinding2,0}};
#define boxvar_NFCeval_subscriptBinding2 MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding2)


DLLDirection
modelica_metatype omc_NFCeval_subscriptBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _cref, modelica_boolean _evalSubscripts);
DLLDirection
modelica_metatype boxptr_NFCeval_subscriptBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _cref, modelica_metatype _evalSubscripts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding,2,0) {(void*) boxptr_NFCeval_subscriptBinding,0}};
#define boxvar_NFCeval_subscriptBinding MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_subscriptBinding)


DLLDirection
modelica_metatype omc_NFCeval_evalComponentBinding(threadData_t *threadData, modelica_metatype _node, modelica_metatype _cref, modelica_metatype _defaultExp, modelica_metatype _target, modelica_boolean _evalSubscripts, modelica_boolean _liftExp);
DLLDirection
modelica_metatype boxptr_NFCeval_evalComponentBinding(threadData_t *threadData, modelica_metatype _node, modelica_metatype _cref, modelica_metatype _defaultExp, modelica_metatype _target, modelica_metatype _evalSubscripts, modelica_metatype _liftExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalComponentBinding,2,0) {(void*) boxptr_NFCeval_evalComponentBinding,0}};
#define boxvar_NFCeval_evalComponentBinding MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalComponentBinding)


DLLDirection
modelica_metatype omc_NFCeval_evalCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _defaultExp, modelica_metatype _target, modelica_boolean _evalSubscripts, modelica_boolean _liftExp);
DLLDirection
modelica_metatype boxptr_NFCeval_evalCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _defaultExp, modelica_metatype _target, modelica_metatype _evalSubscripts, modelica_metatype _liftExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalCref,2,0) {(void*) boxptr_NFCeval_evalCref,0}};
#define boxvar_NFCeval_evalCref MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalCref)


DLLDirection
modelica_metatype omc_NFCeval_evalExpPartial(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _target, modelica_boolean _evaluated, modelica_boolean *out_outEvaluated);
DLLDirection
modelica_metatype boxptr_NFCeval_evalExpPartial(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _target, modelica_metatype _evaluated, modelica_metatype *out_outEvaluated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalExpPartial,2,0) {(void*) boxptr_NFCeval_evalExpPartial,0}};
#define boxvar_NFCeval_evalExpPartial MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalExpPartial)


DLLDirection
modelica_metatype omc_NFCeval_evalExpPartialDefault(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
#define boxptr_NFCeval_evalExpPartialDefault omc_NFCeval_evalExpPartialDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalExpPartialDefault,2,0) {(void*) boxptr_NFCeval_evalExpPartialDefault,0}};
#define boxvar_NFCeval_evalExpPartialDefault MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalExpPartialDefault)


DLLDirection
modelica_metatype omc_NFCeval_evalExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _target);
#define boxptr_NFCeval_evalExp omc_NFCeval_evalExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_evalExp,2,0) {(void*) boxptr_NFCeval_evalExp,0}};
#define boxvar_NFCeval_evalExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_evalExp)


DLLDirection
modelica_metatype omc_NFCeval_tryEvalExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
#define boxptr_NFCeval_tryEvalExp omc_NFCeval_tryEvalExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_tryEvalExp,2,0) {(void*) boxptr_NFCeval_tryEvalExp,0}};
#define boxvar_NFCeval_tryEvalExp MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_tryEvalExp)


DLLDirection
modelica_metatype omc_NFCeval_EvalTarget_getInfo(threadData_t *threadData, modelica_metatype _target);
#define boxptr_NFCeval_EvalTarget_getInfo omc_NFCeval_EvalTarget_getInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_getInfo,2,0) {(void*) boxptr_NFCeval_EvalTarget_getInfo,0}};
#define boxvar_NFCeval_EvalTarget_getInfo MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_getInfo)


DLLDirection
modelica_boolean omc_NFCeval_EvalTarget_hasInfo(threadData_t *threadData, modelica_metatype _target);
DLLDirection
modelica_metatype boxptr_NFCeval_EvalTarget_hasInfo(threadData_t *threadData, modelica_metatype _target);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_hasInfo,2,0) {(void*) boxptr_NFCeval_EvalTarget_hasInfo,0}};
#define boxvar_NFCeval_EvalTarget_hasInfo MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_hasInfo)


DLLDirection
modelica_metatype omc_NFCeval_EvalTarget_new(threadData_t *threadData, modelica_metatype _info, modelica_integer _context, modelica_metatype _extra);
DLLDirection
modelica_metatype boxptr_NFCeval_EvalTarget_new(threadData_t *threadData, modelica_metatype _info, modelica_metatype _context, modelica_metatype _extra);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_new,2,0) {(void*) boxptr_NFCeval_EvalTarget_new,0}};
#define boxvar_NFCeval_EvalTarget_new MMC_REFSTRUCTLIT(boxvar_lit_NFCeval_EvalTarget_new)

#ifdef __cplusplus
}
#endif
#endif
