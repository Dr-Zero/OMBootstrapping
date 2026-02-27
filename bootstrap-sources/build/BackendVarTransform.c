#include "omc_simulation_settings.h"
#include "BackendVarTransform.h"
#define _OMC_LIT0_data " -> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\nDerConstReplacements: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,24,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,41,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "\nExtendReplacements: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,22,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\nReplacements: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,16,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,9,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,41,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "BackendVarTransform: failed to replace left hand side of array assign statement "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,80,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " with "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,6,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "BackendVarTransform: failed to replace left hand side of when equation "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,71,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,4) {&DAE_Expand_NOT__EXPAND__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "$ZERO"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,5,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "$_DER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,5,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "$pDER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,5,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,3,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,8,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "change"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,6,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "edge"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,6) {&DAE_ComponentRef_WILD__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "replace_exp on CODE not impl.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,30,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,3,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "- BackendVarTransform.addExtendReplacement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,54,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "-add_replacement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,28,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,3,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "-BackendVarTransform.addReplacement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,47,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "-BackendVarTransform.removeReplacement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,50,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/BackEnd/BackendVarTransform.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,83,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT31_6,1.770631566e9);
#define _OMC_LIT31_6 MMC_REFREALLIT(_OMC_LIT_STRUCT31_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT30,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(155)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(155)),MMC_IMMEDIATE(MMC_TAGFIXNUM(150)),_OMC_LIT31_6}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#include "util/modelica.h"

#include "BackendVarTransform_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_BackendVarTransform_printReplacementTupleStr(threadData_t *threadData, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_printReplacementTupleStr,2,0) {(void*) boxptr_BackendVarTransform_printReplacementTupleStr,0}};
#define boxvar_BackendVarTransform_printReplacementTupleStr MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_printReplacementTupleStr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceZeroCrossing(threadData_t *threadData, modelica_metatype _zcIn, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceZeroCrossing,2,0) {(void*) boxptr_BackendVarTransform_replaceZeroCrossing,0}};
#define boxvar_BackendVarTransform_replaceZeroCrossing MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceZeroCrossing)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceTimeEvents(threadData_t *threadData, modelica_metatype _teIn, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceTimeEvents,2,0) {(void*) boxptr_BackendVarTransform_replaceTimeEvents,0}};
#define boxvar_BackendVarTransform_replaceTimeEvents MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceTimeEvents)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_negateOperator(threadData_t *threadData, modelica_metatype _inOp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_negateOperator,2,0) {(void*) boxptr_BackendVarTransform_negateOperator,0}};
#define boxvar_BackendVarTransform_negateOperator MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_negateOperator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceSTMT__IF(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inSource, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _inBAcc, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceSTMT__IF(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inSource, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _inBAcc, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceSTMT__IF,2,0) {(void*) boxptr_BackendVarTransform_replaceSTMT__IF,0}};
#define boxvar_BackendVarTransform_replaceSTMT__IF MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceSTMT__IF)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceElse1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceElse1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceElse1,2,0) {(void*) boxptr_BackendVarTransform_replaceElse1,0}};
#define boxvar_BackendVarTransform_replaceElse1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceElse1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceElse(threadData_t *threadData, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceElse(threadData_t *threadData, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceElse,2,0) {(void*) boxptr_BackendVarTransform_replaceElse,0}};
#define boxvar_BackendVarTransform_replaceElse MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceElse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validLhsAssignSTMT(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _type_, modelica_metatype _source, modelica_metatype _inStatementLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_validLhsAssignSTMT,2,0) {(void*) boxptr_BackendVarTransform_validLhsAssignSTMT,0}};
#define boxvar_BackendVarTransform_validLhsAssignSTMT MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_validLhsAssignSTMT)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validLhsArrayAssignSTMT(threadData_t *threadData, modelica_metatype _oldCr, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _type_, modelica_metatype _source, modelica_metatype _inStatementLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_validLhsArrayAssignSTMT,2,0) {(void*) boxptr_BackendVarTransform_validLhsArrayAssignSTMT,0}};
#define boxvar_BackendVarTransform_validLhsArrayAssignSTMT MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_validLhsArrayAssignSTMT)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_moveNegateRhs(threadData_t *threadData, modelica_metatype _inLhs, modelica_metatype _inRhs, modelica_metatype *out_outRhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_moveNegateRhs,2,0) {(void*) boxptr_BackendVarTransform_moveNegateRhs,0}};
#define boxvar_BackendVarTransform_moveNegateRhs MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_moveNegateRhs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpWrapper,2,0) {(void*) boxptr_BackendVarTransform_replaceExpWrapper,0}};
#define boxvar_BackendVarTransform_replaceExpWrapper MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpWrapper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceWhenOperator(threadData_t *threadData, modelica_metatype _inReinitStmtLst, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean _replacementPerformed, modelica_metatype _iAcc, modelica_boolean *out_oReplacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceWhenOperator(threadData_t *threadData, modelica_metatype _inReinitStmtLst, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _replacementPerformed, modelica_metatype _iAcc, modelica_metatype *out_oReplacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceWhenOperator,2,0) {(void*) boxptr_BackendVarTransform_replaceWhenOperator,0}};
#define boxvar_BackendVarTransform_replaceWhenOperator MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceWhenOperator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceWhenEquation(threadData_t *threadData, modelica_metatype _whenEqn, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _isource, modelica_metatype *out_osource, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceWhenEquation(threadData_t *threadData, modelica_metatype _whenEqn, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _isource, modelica_metatype *out_osource, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceWhenEquation,2,0) {(void*) boxptr_BackendVarTransform_replaceWhenEquation,0}};
#define boxvar_BackendVarTransform_replaceWhenEquation MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceWhenEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validWhenLeftHandSide(threadData_t *threadData, modelica_metatype _inLhs, modelica_metatype _inRhs, modelica_metatype _oldCr, modelica_metatype *out_oRhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_validWhenLeftHandSide,2,0) {(void*) boxptr_BackendVarTransform_validWhenLeftHandSide,0}};
#define boxvar_BackendVarTransform_validWhenLeftHandSide MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_validWhenLeftHandSide)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_optimizeIfEquation(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _theneqns, modelica_metatype _elseenqs, modelica_metatype _conditions1, modelica_metatype _theneqns1, modelica_metatype _source, modelica_metatype _inEqAttr, modelica_metatype _inEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_optimizeIfEquation,2,0) {(void*) boxptr_BackendVarTransform_optimizeIfEquation,0}};
#define boxvar_BackendVarTransform_optimizeIfEquation MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_optimizeIfEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquation(threadData_t *threadData, modelica_metatype _inBackendDAEEquation, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _iReplacementPerformed, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceEquation(threadData_t *threadData, modelica_metatype _inBackendDAEEquation, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _iReplacementPerformed, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquation,2,0) {(void*) boxptr_BackendVarTransform_replaceEquation,0}};
#define boxvar_BackendVarTransform_replaceEquation MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquations2(threadData_t *threadData, modelica_metatype _inBackendDAEEquationLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _iReplacementPerformed, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceEquations2(threadData_t *threadData, modelica_metatype _inBackendDAEEquationLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _iReplacementPerformed, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquations2,2,0) {(void*) boxptr_BackendVarTransform_replaceEquations2,0}};
#define boxvar_BackendVarTransform_replaceEquations2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquations2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquationTraverser(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquationTraverser,2,0) {(void*) boxptr_BackendVarTransform_replaceEquationTraverser,0}};
#define boxvar_BackendVarTransform_replaceEquationTraverser MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceEquationTraverser)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_selfGeneratedVar,2,0) {(void*) boxptr_BackendVarTransform_selfGeneratedVar,0}};
#define boxvar_BackendVarTransform_selfGeneratedVar MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_selfGeneratedVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpMatrix(threadData_t *threadData, modelica_metatype _inTplExpExpBooleanLstLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpMatrix(threadData_t *threadData, modelica_metatype _inTplExpExpBooleanLstLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpMatrix,2,0) {(void*) boxptr_BackendVarTransform_replaceExpMatrix,0}};
#define boxvar_BackendVarTransform_replaceExpMatrix MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpMatrix)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_replaceExpCond(threadData_t *threadData, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpCond(threadData_t *threadData, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpCond,2,0) {(void*) boxptr_BackendVarTransform_replaceExpCond,0}};
#define boxvar_BackendVarTransform_replaceExpCond MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpCond)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpIters(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpIters(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpIters,2,0) {(void*) boxptr_BackendVarTransform_replaceExpIters,0}};
#define boxvar_BackendVarTransform_replaceExpIters MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceExpIters)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceCrefSubs2(threadData_t *threadData, modelica_metatype _isubs, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceCrefSubs2(threadData_t *threadData, modelica_metatype _isubs, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceCrefSubs2,2,0) {(void*) boxptr_BackendVarTransform_replaceCrefSubs2,0}};
#define boxvar_BackendVarTransform_replaceCrefSubs2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceCrefSubs2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceCrefSubs(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceCrefSubs(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceCrefSubs,2,0) {(void*) boxptr_BackendVarTransform_replaceCrefSubs,0}};
#define boxvar_BackendVarTransform_replaceCrefSubs MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_replaceCrefSubs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_avoidDoubleHashLookup(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_avoidDoubleHashLookup,2,0) {(void*) boxptr_BackendVarTransform_avoidDoubleHashLookup,0}};
#define boxvar_BackendVarTransform_avoidDoubleHashLookup MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_avoidDoubleHashLookup)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_getCrefExpTableEntries(threadData_t *threadData, modelica_metatype _table, modelica_metatype *out_dsts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_getCrefExpTableEntries,2,0) {(void*) boxptr_BackendVarTransform_getCrefExpTableEntries,0}};
#define boxvar_BackendVarTransform_getCrefExpTableEntries MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_getCrefExpTableEntries)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_isIterationVar(threadData_t *threadData, modelica_metatype _repl, modelica_string _inVar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_isIterationVar(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_isIterationVar,2,0) {(void*) boxptr_BackendVarTransform_isIterationVar,0}};
#define boxvar_BackendVarTransform_isIterationVar MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_isIterationVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_removeIterationVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Frepl, modelica_string _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_removeIterationVar,2,0) {(void*) boxptr_BackendVarTransform_removeIterationVar,0}};
#define boxvar_BackendVarTransform_removeIterationVar MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_removeIterationVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addIterationVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Frepl, modelica_string _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_addIterationVar,2,0) {(void*) boxptr_BackendVarTransform_addIterationVar,0}};
#define boxvar_BackendVarTransform_addIterationVar MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_addIterationVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addExtendReplacement(threadData_t *threadData, modelica_metatype _extendrepl, modelica_metatype _cr, modelica_metatype _preCr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_addExtendReplacement,2,0) {(void*) boxptr_BackendVarTransform_addExtendReplacement,0}};
#define boxvar_BackendVarTransform_addExtendReplacement MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_addExtendReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive2(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive2,2,0) {(void*) boxptr_BackendVarTransform_makeTransitive2,0}};
#define boxvar_BackendVarTransform_makeTransitive2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive12(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _repl, modelica_metatype _singleRepl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inSet);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive12,2,0) {(void*) boxptr_BackendVarTransform_makeTransitive12,0}};
#define boxvar_BackendVarTransform_makeTransitive12 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive12)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive1(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive1,2,0) {(void*) boxptr_BackendVarTransform_makeTransitive1,0}};
#define boxvar_BackendVarTransform_makeTransitive1 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive,2,0) {(void*) boxptr_BackendVarTransform_makeTransitive,0}};
#define boxvar_BackendVarTransform_makeTransitive MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_makeTransitive)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementInv2(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinvHt, modelica_metatype _dst, modelica_metatype _src);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementInv2,2,0) {(void*) boxptr_BackendVarTransform_addReplacementInv2,0}};
#define boxvar_BackendVarTransform_addReplacementInv2 MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementInv2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementInv(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinvHt, modelica_metatype _src, modelica_metatype _dst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementInv,2,0) {(void*) boxptr_BackendVarTransform_addReplacementInv,0}};
#define boxvar_BackendVarTransform_addReplacementInv MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementInv)
PROTECTED_FUNCTION_STATIC void omc_BackendVarTransform_removeReplacementInv(threadData_t *threadData, modelica_metatype _invHt, modelica_metatype _dst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_removeReplacementInv,2,0) {(void*) boxptr_BackendVarTransform_removeReplacementInv,0}};
#define boxvar_BackendVarTransform_removeReplacementInv MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_removeReplacementInv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementNoTransitive(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inSrc, modelica_metatype _inDst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementNoTransitive,2,0) {(void*) boxptr_BackendVarTransform_addReplacementNoTransitive,0}};
#define boxvar_BackendVarTransform_addReplacementNoTransitive MMC_REFSTRUCTLIT(boxvar_lit_BackendVarTransform_addReplacementNoTransitive)

DLLDirection
modelica_metatype omc_BackendVarTransform_getConstantReplacements(threadData_t *threadData, modelica_metatype _replIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _exps = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _crefs has no default value.
  // _exps has no default value.
  _crefs = omc_BackendVarTransform_getAllReplacements(threadData, _replIn ,&_exps);

  _exps = omc_List_filterOnTrueSync(threadData, _exps, boxvar_Expression_isEvaluatedConst, _crefs ,&_crefs);

  _replOut = omc_BackendVarTransform_emptyReplacements(threadData);

  _replOut = omc_BackendVarTransform_addReplacements(threadData, _replOut, _crefs, _exps, mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_BackendVarTransform_printReplacementTupleStr(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(omc_ComponentReference_printComponentRefStr(threadData, omc_Util_tuple21(threadData, _tpl)),_OMC_LIT0);
  tmpMeta2 = stringAppend(tmpMeta1,omc_ExpressionDump_printExpStr(threadData, omc_Util_tuple22(threadData, _tpl)));
  _str = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
void omc_BackendVarTransform_dumpDerConstReplacements(threadData_t *threadData, modelica_metatype _repl)
{
  modelica_metatype _srcs = NULL;
  modelica_metatype _dsts = NULL;
  modelica_metatype _tplLst = NULL;
  modelica_string tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _srcs has no default value.
  // _dsts has no default value.
  // _tplLst has no default value.
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 6)))))
  {
    _srcs = omc_BackendVarTransform_getCrefExpTableEntries(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 6)))) ,&_dsts);

    _tplLst = omc_List_zip(threadData, _srcs, _dsts);

    fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);

    tmp1 = modelica_integer_to_modelica_string(listLength(_tplLst), ((modelica_integer) 0), 1 /* true */);
    fputs(MMC_STRINGDATA(tmp1),stdout);

    fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

    fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

    fputs(MMC_STRINGDATA(stringDelimitList(omc_List_map(threadData, _tplLst, boxvar_BackendVarTransform_printReplacementTupleStr), _OMC_LIT4)),stdout);

    fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_BackendVarTransform_dumpExtendReplacements(threadData_t *threadData, modelica_metatype _repl)
{
  modelica_metatype _crefs = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefs has no default value.
  _crefs = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 4))));

  fputs(MMC_STRINGDATA(_OMC_LIT5),stdout);

  tmp1 = modelica_integer_to_modelica_string(listLength(_crefs), ((modelica_integer) 0), 1 /* true */);
  fputs(MMC_STRINGDATA(tmp1),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_string __omcQ_24tmpVar2;
    modelica_integer tmp5;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = _crefs;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar2 = omc_ComponentReference_printComponentRefStr(threadData, _c);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  fputs(MMC_STRINGDATA(stringDelimitList(tmpMeta2, _OMC_LIT4)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_BackendVarTransform_dumpReplacements(threadData_t *threadData, modelica_metatype _repl)
{
  modelica_metatype _srcs = NULL;
  modelica_metatype _dsts = NULL;
  modelica_metatype _tplLst = NULL;
  modelica_string tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _srcs has no default value.
  // _dsts has no default value.
  // _tplLst has no default value.
  _srcs = omc_BackendVarTransform_getAllReplacements(threadData, _repl ,&_dsts);

  _tplLst = omc_List_zip(threadData, _srcs, _dsts);

  fputs(MMC_STRINGDATA(_OMC_LIT6),stdout);

  tmp1 = modelica_integer_to_modelica_string(listLength(_tplLst), ((modelica_integer) 0), 1 /* true */);
  fputs(MMC_STRINGDATA(tmp1),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

  fputs(MMC_STRINGDATA(stringDelimitList(omc_List_map(threadData, _tplLst, boxvar_BackendVarTransform_printReplacementTupleStr), _OMC_LIT4)),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceZeroCrossing(threadData_t *threadData, modelica_metatype _zcIn, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _zcOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _zcOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _zcIn;
    {
      modelica_metatype _relation_ = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _relation_ has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _relation_ = tmpMeta6;
          /* Pattern matching succeeded */
          _relation_ = omc_BackendVarTransform_replaceExp(threadData, _relation_, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, NULL);
          tmpMeta7 = mmc_mk_box5(3, &BackendDAE_ZeroCrossing_ZERO__CROSSING__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zcIn), 2))), _relation_, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zcIn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zcIn), 5))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _zcIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _zcOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _zcOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceTimeEvents(threadData_t *threadData, modelica_metatype _teIn, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _teOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _teOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _teIn;
    {
      modelica_integer _index;
      modelica_metatype _startExp = NULL;
      modelica_metatype _intervalExp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _index has no default value.
      // _startExp has no default value.
      // _intervalExp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _index = tmp7  /* pattern as ty=Integer */;
          _startExp = tmpMeta8;
          _intervalExp = tmpMeta9;
          /* Pattern matching succeeded */
          _startExp = omc_BackendVarTransform_replaceExp(threadData, _startExp, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, NULL);

          _intervalExp = omc_BackendVarTransform_replaceExp(threadData, _intervalExp, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, NULL);
          tmpMeta10 = mmc_mk_box4(4, &BackendDAE_TimeEvent_SAMPLE__TIME__EVENT__desc, mmc_mk_integer(_index), _startExp, _intervalExp);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _teIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _teOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _teOut;
}

static modelica_metatype closure0_BackendVarTransform_replaceZeroCrossing(threadData_t *thData, modelica_metatype closure, modelica_metatype zcIn, modelica_metatype inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype inVariableReplacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendVarTransform_replaceZeroCrossing(thData, zcIn, inVariableReplacements, inFuncTypeExpExpToBooleanOption);
}
DLLDirection
modelica_metatype omc_BackendVarTransform_replaceEventInfo(threadData_t *threadData, modelica_metatype _eInfoIn, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _eInfoOut = NULL;
  modelica_integer _numberMathEvents;
  modelica_metatype _timeEvents = NULL;
  modelica_metatype _zeroCrossingLst = NULL;
  modelica_metatype _sampleLst = NULL;
  modelica_metatype _relationsLst = NULL;
  modelica_fnptr _zc;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eInfoOut has no default value.
  // _numberMathEvents has no default value.
  // _timeEvents has no default value.
  // _zeroCrossingLst has no default value.
  // _sampleLst has no default value.
  // _relationsLst has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _eInfoIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _timeEvents = tmpMeta2;
  _zeroCrossingLst = tmpMeta3;
  _relationsLst = tmpMeta4;
  _sampleLst = tmpMeta5;
  _numberMathEvents = tmp7  /* pattern as ty=Integer */;

  _timeEvents = omc_List_map2(threadData, _timeEvents, boxvar_BackendVarTransform_replaceTimeEvents, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption);

  tmpMeta8 = mmc_mk_box1(0, _inVariableReplacements);
  _zc = (modelica_fnptr) (modelica_fnptr) mmc_mk_box2(0,closure0_BackendVarTransform_replaceZeroCrossing,tmpMeta8);

  omc_DoubleEnded_mapNoCopy__1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zeroCrossingLst), 2))), ((modelica_fnptr) _zc), _inFuncTypeExpExpToBooleanOption);

  omc_DoubleEnded_mapNoCopy__1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sampleLst), 2))), ((modelica_fnptr) _zc), _inFuncTypeExpExpToBooleanOption);

  omc_DoubleEnded_mapNoCopy__1(threadData, _relationsLst, ((modelica_fnptr) _zc), _inFuncTypeExpExpToBooleanOption);

  tmpMeta9 = mmc_mk_box6(3, &BackendDAE_EventInfo_EVENT__INFO__desc, _timeEvents, _zeroCrossingLst, _relationsLst, _sampleLst, mmc_mk_integer(_numberMathEvents));
  _eInfoOut = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _eInfoOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_negateOperator(threadData_t *threadData, modelica_metatype _inOp)
{
  modelica_metatype _outOp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outOp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOp;
    {
      modelica_metatype _ty = NULL;
      int tmp4;
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _ty = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _ty = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _ty = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inOp;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outOp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outOp;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceVariableAttributesInVar(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _repl)
{
  modelica_metatype _varOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varIn;
    {
      modelica_metatype _values = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _values has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _values = tmpMeta7;
          /* Pattern matching succeeded */
          _values = omc_BackendVarTransform_replaceVariableAttributes(threadData, _values, _repl);
          tmpMeta1 = omc_BackendVariable_setVarAttributes(threadData, _varIn, mmc_mk_some(_values));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _varIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _varOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _varOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceOptionExp(threadData_t *threadData, modelica_metatype _optIn, modelica_metatype _repl)
{
  modelica_metatype _optOut = NULL;
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _optOut has no default value.
  // _exp has no default value.
  if(isSome(_optIn))
  {
    _exp = omc_Util_getOption(threadData, _optIn);

    _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, mmc_mk_none(), NULL);

    _optOut = mmc_mk_some(_exp);
  }
  else
  {
    _optOut = mmc_mk_none();
  }
  _return: OMC_LABEL_UNUSED
  return _optOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceVariableAttributes(threadData_t *threadData, modelica_metatype _attrIn, modelica_metatype _repl)
{
  modelica_metatype _attrOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _attrOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _attrIn;
    {
      modelica_metatype _quantity = NULL;
      modelica_metatype _unit = NULL;
      modelica_metatype _displayUnit = NULL;
      modelica_metatype _min = NULL;
      modelica_metatype _max = NULL;
      modelica_metatype _start = NULL;
      modelica_metatype _fixed = NULL;
      modelica_metatype _nominal = NULL;
      modelica_metatype _stateSelectOption = NULL;
      modelica_metatype _uncertainOption = NULL;
      modelica_metatype _distributionOption = NULL;
      modelica_metatype _equationBound = NULL;
      modelica_metatype _isProtected = NULL;
      modelica_metatype _finalPrefix = NULL;
      modelica_metatype _startOrigin = NULL;
      int tmp4;
      // _quantity has no default value.
      // _unit has no default value.
      // _displayUnit has no default value.
      // _min has no default value.
      // _max has no default value.
      // _start has no default value.
      // _fixed has no default value.
      // _nominal has no default value.
      // _stateSelectOption has no default value.
      // _uncertainOption has no default value.
      // _distributionOption has no default value.
      // _equationBound has no default value.
      // _isProtected has no default value.
      // _finalPrefix has no default value.
      // _startOrigin has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,15) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          _quantity = tmpMeta5;
          _unit = tmpMeta6;
          _displayUnit = tmpMeta7;
          _min = tmpMeta8;
          _max = tmpMeta9;
          _start = tmpMeta10;
          _fixed = tmpMeta11;
          _nominal = tmpMeta12;
          _stateSelectOption = tmpMeta13;
          _uncertainOption = tmpMeta14;
          _distributionOption = tmpMeta15;
          _equationBound = tmpMeta16;
          _isProtected = tmpMeta17;
          _finalPrefix = tmpMeta18;
          _startOrigin = tmpMeta19;
          /* Pattern matching succeeded */
          _quantity = omc_BackendVarTransform_replaceOptionExp(threadData, _quantity, _repl);

          _unit = omc_BackendVarTransform_replaceOptionExp(threadData, _unit, _repl);

          _displayUnit = omc_BackendVarTransform_replaceOptionExp(threadData, _displayUnit, _repl);

          _min = omc_BackendVarTransform_replaceOptionExp(threadData, _min, _repl);

          _max = omc_BackendVarTransform_replaceOptionExp(threadData, _max, _repl);

          _start = omc_BackendVarTransform_replaceOptionExp(threadData, _start, _repl);

          _fixed = omc_BackendVarTransform_replaceOptionExp(threadData, _fixed, _repl);

          _nominal = omc_BackendVarTransform_replaceOptionExp(threadData, _nominal, _repl);

          _equationBound = omc_BackendVarTransform_replaceOptionExp(threadData, _equationBound, _repl);

          _startOrigin = omc_BackendVarTransform_replaceOptionExp(threadData, _startOrigin, _repl);
          tmpMeta20 = mmc_mk_box16(3, &DAE_VariableAttributes_VAR__ATTR__REAL__desc, _quantity, _unit, _displayUnit, _min, _max, _start, _fixed, _nominal, _stateSelectOption, _uncertainOption, _distributionOption, _equationBound, _isProtected, _finalPrefix, _startOrigin);
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,11) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          _quantity = tmpMeta21;
          _min = tmpMeta22;
          _max = tmpMeta23;
          _start = tmpMeta24;
          _fixed = tmpMeta25;
          _uncertainOption = tmpMeta26;
          _distributionOption = tmpMeta27;
          _equationBound = tmpMeta28;
          _isProtected = tmpMeta29;
          _finalPrefix = tmpMeta30;
          _startOrigin = tmpMeta31;
          /* Pattern matching succeeded */
          _quantity = omc_BackendVarTransform_replaceOptionExp(threadData, _quantity, _repl);

          _min = omc_BackendVarTransform_replaceOptionExp(threadData, _min, _repl);

          _max = omc_BackendVarTransform_replaceOptionExp(threadData, _max, _repl);

          _start = omc_BackendVarTransform_replaceOptionExp(threadData, _start, _repl);

          _fixed = omc_BackendVarTransform_replaceOptionExp(threadData, _fixed, _repl);

          _equationBound = omc_BackendVarTransform_replaceOptionExp(threadData, _equationBound, _repl);

          _startOrigin = omc_BackendVarTransform_replaceOptionExp(threadData, _startOrigin, _repl);
          tmpMeta32 = mmc_mk_box12(4, &DAE_VariableAttributes_VAR__ATTR__INT__desc, _quantity, _min, _max, _start, _fixed, _uncertainOption, _distributionOption, _equationBound, _isProtected, _finalPrefix, _startOrigin);
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,7) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          _quantity = tmpMeta33;
          _start = tmpMeta34;
          _fixed = tmpMeta35;
          _equationBound = tmpMeta36;
          _isProtected = tmpMeta37;
          _finalPrefix = tmpMeta38;
          _startOrigin = tmpMeta39;
          /* Pattern matching succeeded */
          _quantity = omc_BackendVarTransform_replaceOptionExp(threadData, _quantity, _repl);

          _start = omc_BackendVarTransform_replaceOptionExp(threadData, _start, _repl);

          _fixed = omc_BackendVarTransform_replaceOptionExp(threadData, _fixed, _repl);

          _equationBound = omc_BackendVarTransform_replaceOptionExp(threadData, _equationBound, _repl);

          _startOrigin = omc_BackendVarTransform_replaceOptionExp(threadData, _startOrigin, _repl);
          tmpMeta40 = mmc_mk_box8(5, &DAE_VariableAttributes_VAR__ATTR__BOOL__desc, _quantity, _start, _fixed, _equationBound, _isProtected, _finalPrefix, _startOrigin);
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,7) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          _quantity = tmpMeta41;
          _start = tmpMeta42;
          _fixed = tmpMeta43;
          _equationBound = tmpMeta44;
          _isProtected = tmpMeta45;
          _finalPrefix = tmpMeta46;
          _startOrigin = tmpMeta47;
          /* Pattern matching succeeded */
          _quantity = omc_BackendVarTransform_replaceOptionExp(threadData, _quantity, _repl);

          _start = omc_BackendVarTransform_replaceOptionExp(threadData, _start, _repl);

          _fixed = omc_BackendVarTransform_replaceOptionExp(threadData, _fixed, _repl);

          _equationBound = omc_BackendVarTransform_replaceOptionExp(threadData, _equationBound, _repl);

          _startOrigin = omc_BackendVarTransform_replaceOptionExp(threadData, _startOrigin, _repl);
          tmpMeta48 = mmc_mk_box8(7, &DAE_VariableAttributes_VAR__ATTR__STRING__desc, _quantity, _start, _fixed, _equationBound, _isProtected, _finalPrefix, _startOrigin);
          tmpMeta1 = tmpMeta48;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,9) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          _quantity = tmpMeta49;
          _min = tmpMeta50;
          _max = tmpMeta51;
          _start = tmpMeta52;
          _fixed = tmpMeta53;
          _equationBound = tmpMeta54;
          _isProtected = tmpMeta55;
          _finalPrefix = tmpMeta56;
          _startOrigin = tmpMeta57;
          /* Pattern matching succeeded */
          _quantity = omc_BackendVarTransform_replaceOptionExp(threadData, _quantity, _repl);

          _min = omc_BackendVarTransform_replaceOptionExp(threadData, _min, _repl);

          _max = omc_BackendVarTransform_replaceOptionExp(threadData, _max, _repl);

          _start = omc_BackendVarTransform_replaceOptionExp(threadData, _start, _repl);

          _fixed = omc_BackendVarTransform_replaceOptionExp(threadData, _fixed, _repl);

          _equationBound = omc_BackendVarTransform_replaceOptionExp(threadData, _equationBound, _repl);

          _startOrigin = omc_BackendVarTransform_replaceOptionExp(threadData, _startOrigin, _repl);
          tmpMeta58 = mmc_mk_box10(8, &DAE_VariableAttributes_VAR__ATTR__ENUMERATION__desc, _quantity, _min, _max, _start, _fixed, _equationBound, _isProtected, _finalPrefix, _startOrigin);
          tmpMeta1 = tmpMeta58;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _attrIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _attrOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _attrOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceBindingExp(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _repl)
{
  modelica_metatype _varOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varIn;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          
          _exp = tmpMeta7;
          /* Pattern matching succeeded */
          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, mmc_mk_none(), NULL);

          _exp = omc_ExpressionSimplify_simplify(threadData, _exp, NULL);
          tmpMeta1 = omc_BackendVariable_setBindExp(threadData, _varIn, mmc_mk_some(_exp));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (!optionNone(tmpMeta8)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _varIn;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _varOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _varOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceVarTraverser(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inRepl, modelica_metatype *out_repl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _repl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  _repl = _inRepl;
  _outVar = omc_BackendVarTransform_replaceBindingExp(threadData, _inVar, _inRepl);

  _outVar = omc_BackendVarTransform_replaceVariableAttributesInVar(threadData, _outVar, _inRepl);
  _return: OMC_LABEL_UNUSED
  if (out_repl) { *out_repl = _repl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceSTMT__IF(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inSource, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _inBAcc, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outStatementLst = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatementLst has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;
    tmp4_1 = _inExp;
    tmp4_2 = _inStatementLst;
    tmp4_3 = _inElse;
    tmp4_4 = _inSource;
    tmp4_5 = _inVariableReplacements;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _exp_e = NULL;
      modelica_metatype _statementLst = NULL;
      modelica_metatype _statementLst_e = NULL;
      modelica_metatype _statementLst_1 = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _else_e = NULL;
      modelica_metatype _else_1 = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _repl = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _exp_e has no default value.
      // _statementLst has no default value.
      // _statementLst_e has no default value.
      // _statementLst_1 has no default value.
      // _else_ has no default value.
      // _else_e has no default value.
      // _else_1 has no default value.
      // _source has no default value.
      // _repl has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 /* true */ != tmp7) goto tmp3_end;
          
          _statementLst = tmp4_2;
          _repl = tmp4_5;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, _inAcc, 1 /* true */, &tmp1_c1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (0 /* false */ != tmp9) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inAcc;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          if (0 /* false */ != tmp14) goto tmp3_end;
          
          _exp_e = tmpMeta10;
          _statementLst_e = tmpMeta11;
          _else_e = tmpMeta12;
          _source = tmp4_4;
          _repl = tmp4_5;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_BackendVarTransform_replaceSTMT__IF(threadData, _exp_e, _statementLst_e, _else_e, _source, _repl, _inFuncTypeExpExpToBooleanOption, _inAcc, 1 /* true */, &tmp1_c1);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (0 /* false */ != tmp17) goto tmp3_end;
          
          _statementLst_e = tmpMeta15;
          _repl = tmp4_5;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst_e, _repl, _inFuncTypeExpExpToBooleanOption, _inAcc, 1 /* true */, &tmp1_c1);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          _exp = tmp4_1;
          _statementLst = tmp4_2;
          _else_ = tmp4_3;
          _source = tmp4_4;
          _repl = tmp4_5;
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta18, 0 /* false */ ,&_b1);

          _else_1 = omc_BackendVarTransform_replaceElse(threadData, _else_, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp19 = (_b1 || _b2);
          if (1 /* true */ != tmp19) goto goto_2;
          tmpMeta21 = mmc_mk_box5(6, &DAE_Statement_STMT__IF__desc, _exp, _statementLst_1, _else_1, _source);
          tmpMeta20 = mmc_mk_cons(tmpMeta21, _inAcc);
          tmpMeta[0+0] = tmpMeta20;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          _exp = tmp4_1;
          _statementLst = tmp4_2;
          _else_ = tmp4_3;
          _source = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_box5(6, &DAE_Statement_STMT__IF__desc, _exp, _statementLst, _else_, _source);
          tmpMeta22 = mmc_mk_cons(tmpMeta23, _inAcc);
          tmpMeta[0+0] = tmpMeta22;
          tmp1_c1 = _inBAcc;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outStatementLst = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outStatementLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceSTMT__IF(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inSource, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _inBAcc, modelica_metatype *out_replacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _replacementPerformed;
  modelica_metatype _outStatementLst = NULL;
  tmp1 = mmc_unbox_integer(_inBAcc);
  _outStatementLst = omc_BackendVarTransform_replaceSTMT__IF(threadData, _inExp, _inStatementLst, _inElse, _inSource, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, tmp1, &_replacementPerformed);
  /* skip box _outStatementLst; list<DAE.Statement> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outStatementLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceElse1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outElse = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElse has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;
    tmp4_1 = _inExp;
    tmp4_2 = _inStatementLst;
    tmp4_3 = _inElse;
    tmp4_4 = _inVariableReplacements;
    {
      modelica_metatype _repl = NULL;
      modelica_metatype _statementLst = NULL;
      modelica_metatype _statementLst_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _else_1 = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl has no default value.
      // _statementLst has no default value.
      // _statementLst_1 has no default value.
      // _e1 has no default value.
      // _else_ has no default value.
      // _else_1 has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 /* true */ != tmp7) goto tmp3_end;
          
          _statementLst = tmp4_2;
          _repl = tmp4_4;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta8, 0 /* false */, NULL);
          tmpMeta9 = mmc_mk_box2(5, &DAE_Else_ELSE__desc, _statementLst_1);
          tmpMeta[0+0] = tmpMeta9;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (0 /* false */ != tmp11) goto tmp3_end;
          
          _else_ = tmp4_3;
          _repl = tmp4_4;
          /* Pattern matching succeeded */
          _else_1 = omc_BackendVarTransform_replaceElse(threadData, _else_, _repl, _inFuncTypeExpExpToBooleanOption, NULL);
          tmpMeta[0+0] = _else_1;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          
          _e1 = tmp4_1;
          _statementLst = tmp4_2;
          _else_ = tmp4_3;
          _repl = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta12, 0 /* false */ ,&_b1);

          _else_1 = omc_BackendVarTransform_replaceElse(threadData, _else_, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp13 = (_b1 || _b2);
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta14 = mmc_mk_box4(4, &DAE_Else_ELSEIF__desc, _e1, _statementLst_1, _else_1);
          tmpMeta[0+0] = tmpMeta14;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          
          _e1 = tmp4_1;
          _statementLst = tmp4_2;
          _else_ = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box4(4, &DAE_Else_ELSEIF__desc, _e1, _statementLst, _else_);
          tmpMeta[0+0] = tmpMeta15;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outElse = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outElse;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceElse1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inStatementLst, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outElse = NULL;
  _outElse = omc_BackendVarTransform_replaceElse1(threadData, _inExp, _inStatementLst, _inElse, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outElse; DAE.Else */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outElse;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceElse(threadData_t *threadData, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outElse = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElse has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inElse;
    tmp4_2 = _inVariableReplacements;
    {
      modelica_metatype _repl = NULL;
      modelica_metatype _statementLst = NULL;
      modelica_metatype _statementLst_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e1_2 = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _else_1 = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl has no default value.
      // _statementLst has no default value.
      // _statementLst_1 has no default value.
      // _e1 has no default value.
      // _e1_1 has no default value.
      // _e1_2 has no default value.
      // _else_ has no default value.
      // _else_1 has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e1 = tmpMeta6;
          _statementLst = tmpMeta7;
          _else_ = tmpMeta8;
          _repl = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _e1_1, NULL);

          _else_1 = omc_BackendVarTransform_replaceElse1(threadData, _e1_2, _statementLst, _else_, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp9 = (_b1 || _b2);
          if (1 /* true */ != tmp9) goto goto_2;
          tmpMeta[0+0] = _else_1;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _statementLst = tmpMeta10;
          _repl = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta12, 0 /* false */, &tmp11);
          _statementLst_1 = tmpMeta13;
          if (1 /* true */ != tmp11) goto goto_2;
          tmpMeta14 = mmc_mk_box2(5, &DAE_Else_ELSE__desc, _statementLst_1);
          tmpMeta[0+0] = tmpMeta14;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inElse;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outElse = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outElse;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceElse(threadData_t *threadData, modelica_metatype _inElse, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outElse = NULL;
  _outElse = omc_BackendVarTransform_replaceElse(threadData, _inElse, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outElse; DAE.Else */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outElse;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validLhsAssignSTMT(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _type_, modelica_metatype _source, modelica_metatype _inStatementLst)
{
  modelica_metatype _outStatementLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatementLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _lhs;
    {
      modelica_metatype _tp = NULL;
      int tmp4;
      // _tp has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _type_, _lhs, _rhs, _source);
          tmpMeta5 = mmc_mk_cons(tmpMeta6, _inStatementLst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,5,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          
          _tp = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(8, &DAE_Operator_UMINUS__desc, _tp);
          tmpMeta12 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta11, _rhs);
          tmpMeta13 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _type_, _lhs, tmpMeta12, _source);
          tmpMeta10 = mmc_mk_cons(tmpMeta13, _inStatementLst);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,24,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,6,2) == 0) goto tmp3_end;
          
          _tp = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box2(27, &DAE_Operator_NOT__desc, _tp);
          tmpMeta19 = mmc_mk_box3(13, &DAE_Exp_LUNARY__desc, tmpMeta18, _rhs);
          tmpMeta20 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _type_, _lhs, tmpMeta19, _source);
          tmpMeta17 = mmc_mk_cons(tmpMeta20, _inStatementLst);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outStatementLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStatementLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validLhsArrayAssignSTMT(threadData_t *threadData, modelica_metatype _oldCr, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _type_, modelica_metatype _source, modelica_metatype _inStatementLst)
{
  modelica_metatype _outStatementLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatementLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _lhs;
    {
      modelica_metatype _elst = NULL;
      modelica_metatype _elst1 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _crefexp = NULL;
      modelica_metatype _ds = NULL;
      modelica_metatype _subslst = NULL;
      modelica_string _msg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _elst has no default value.
      // _elst1 has no default value.
      // _tp has no default value.
      // _e has no default value.
      // _crefexp has no default value.
      // _ds has no default value.
      // _subslst has no default value.
      // _msg has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          _crefexp = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box5(5, &DAE_Statement_STMT__ASSIGN__ARR__desc, _type_, _crefexp, _rhs, _source);
          tmpMeta6 = mmc_mk_cons(tmpMeta7, _inStatementLst);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,5,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _tp = tmpMeta9;
          _crefexp = tmpMeta10;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta12 = mmc_mk_box2(8, &DAE_Operator_UMINUS__desc, _tp);
          tmpMeta13 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta12, _rhs);
          tmpMeta14 = mmc_mk_box5(5, &DAE_Statement_STMT__ASSIGN__ARR__desc, _type_, _crefexp, tmpMeta13, _source);
          tmpMeta11 = mmc_mk_cons(tmpMeta14, _inStatementLst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,6,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _tp = tmpMeta16;
          _crefexp = tmpMeta17;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta19 = mmc_mk_box2(9, &DAE_Operator_UMINUS__ARR__desc, _tp);
          tmpMeta20 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta19, _rhs);
          tmpMeta21 = mmc_mk_box5(5, &DAE_Statement_STMT__ASSIGN__ARR__desc, _type_, _crefexp, tmpMeta20, _source);
          tmpMeta18 = mmc_mk_cons(tmpMeta21, _inStatementLst);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,24,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _tp = tmpMeta23;
          _crefexp = tmpMeta24;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta26 = mmc_mk_box2(27, &DAE_Operator_NOT__desc, _tp);
          tmpMeta27 = mmc_mk_box3(13, &DAE_Exp_LUNARY__desc, tmpMeta26, _rhs);
          tmpMeta28 = mmc_mk_box5(5, &DAE_Statement_STMT__ASSIGN__ARR__desc, _type_, _crefexp, tmpMeta27, _source);
          tmpMeta25 = mmc_mk_cons(tmpMeta28, _inStatementLst);
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _elst = tmpMeta29;
          /* Pattern matching succeeded */
          _ds = omc_Expression_dimensionsSizes(threadData, omc_Expression_arrayDimension(threadData, _type_));

          _subslst = omc_Expression_dimensionSizesSubscripts(threadData, _ds);

          _subslst = omc_Expression_rangesToSubscripts(threadData, _subslst);

          _elst1 = omc_List_map1r(threadData, _subslst, boxvar_Expression_applyExpSubscripts, _rhs);

          _e = listHead(_elst1);

          _tp = omc_Expression_typeof(threadData, _e);
          tmpMeta1 = omc_List_threadFold2(threadData, _elst, _elst1, boxvar_BackendVarTransform_validLhsAssignSTMT, _tp, _source, _inStatementLst);
          goto tmp3_done;
        }
        case 5: {
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp30 = omc_Flags_isSet(threadData, _OMC_LIT10);
          if (1 /* true */ != tmp30) goto goto_2;

          tmpMeta31 = stringAppend(_OMC_LIT11,omc_ComponentReference_printComponentRefStr(threadData, _oldCr));
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT12);
          tmpMeta33 = stringAppend(tmpMeta32,omc_ExpressionDump_printExpStr(threadData, _lhs));
          tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT4);
          _msg = tmpMeta34;

          omc_Debug_trace(threadData, _msg);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outStatementLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStatementLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_moveNegateRhs(threadData_t *threadData, modelica_metatype _inLhs, modelica_metatype _inRhs, modelica_metatype *out_outRhs)
{
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outRhs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLhs has no default value.
  // _outRhs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inLhs;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,24,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ty = tmpMeta7;
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(27, &DAE_Operator_NOT__desc, _ty);
          tmpMeta10 = mmc_mk_box3(13, &DAE_Exp_LUNARY__desc, tmpMeta9, _inRhs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,5,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ty = tmpMeta12;
          _e = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(8, &DAE_Operator_UMINUS__desc, _ty);
          tmpMeta15 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta14, _inRhs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta15;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,6,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ty = tmpMeta17;
          _e = tmpMeta18;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_box2(9, &DAE_Operator_UMINUS__ARR__desc, _ty);
          tmpMeta20 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, tmpMeta19, _inRhs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta20;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inLhs;
          tmpMeta[0+1] = _inRhs;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outLhs = tmpMeta[0+0];
  _outRhs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRhs) { *out_outRhs = _outRhs; }
  return _outLhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_tpl)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _tpl = NULL;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_metatype _repl = NULL;
  modelica_metatype _opt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _tpl has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  // _repl has no default value.
  // _opt has no default value.
  _exp = _inExp;

  _tpl = _inTpl;

  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _repl = tmpMeta2;
  _opt = tmpMeta3;
  _b1 = tmp5  /* pattern as ty=Boolean */;

  _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _opt ,&_b2);

  _b2 = (_b1 || _b2);

  tmpMeta6 = mmc_mk_box3(0, _repl, _opt, mmc_mk_boolean(_b2));
  _tpl = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  if (out_tpl) { *out_tpl = _tpl; }
  return _exp;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceStatementLstRHS(threadData_t *threadData, modelica_metatype _inStatementLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _inBAcc, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outStatementLst = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatementLst has no default value.
  // _replacementPerformed has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta4 = mmc_mk_box3(0, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, mmc_mk_boolean(0 /* false */));
  tmpMeta5 = omc_DAEUtil_traverseDAEEquationsStmtsRhsOnly(threadData, _inStatementLst, boxvar_BackendVarTransform_replaceExpWrapper, tmpMeta4, &tmpMeta1);
  _outStatementLst = tmpMeta5;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _replacementPerformed = tmp3  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outStatementLst;
}
modelica_metatype boxptr_BackendVarTransform_replaceStatementLstRHS(threadData_t *threadData, modelica_metatype _inStatementLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _inBAcc, modelica_metatype *out_replacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _replacementPerformed;
  modelica_metatype _outStatementLst = NULL;
  tmp1 = mmc_unbox_integer(_inBAcc);
  _outStatementLst = omc_BackendVarTransform_replaceStatementLstRHS(threadData, _inStatementLst, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, tmp1, &_replacementPerformed);
  /* skip box _outStatementLst; list<DAE.Statement> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outStatementLst;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceStatementLst(threadData_t *threadData, modelica_metatype _inStatementLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _inBAcc, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outStatementLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _replacementPerformed;
  modelica_boolean _isCon;
  modelica_metatype _repl = NULL;
  modelica_metatype _es = NULL;
  modelica_metatype _es_1 = NULL;
  modelica_metatype _statementLst = NULL;
  modelica_metatype _statementLst_1 = NULL;
  modelica_metatype _statement = NULL;
  modelica_metatype _statement_1 = NULL;
  modelica_metatype _type_ = NULL;
  modelica_metatype _e1_1 = NULL;
  modelica_metatype _e2_1 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _e1_2 = NULL;
  modelica_metatype _e2_2 = NULL;
  modelica_metatype _e3 = NULL;
  modelica_metatype _e3_1 = NULL;
  modelica_metatype _e3_2 = NULL;
  modelica_metatype _expExpLst = NULL;
  modelica_metatype _expExpLst_1 = NULL;
  modelica_metatype _else_ = NULL;
  modelica_metatype _source = NULL;
  modelica_metatype _cr = NULL;
  modelica_boolean _iterIsArray;
  modelica_string _ident = NULL;
  modelica_metatype _conditions = NULL;
  modelica_boolean _initialCall;
  modelica_boolean _b;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_boolean _b3;
  modelica_metatype _loopPrlVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta145;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStatementLst = tmpMeta1;
  _replacementPerformed = _inBAcc;
  // _isCon has no default value.
  _repl = _inVariableReplacements;
  // _es has no default value.
  // _es_1 has no default value.
  // _statementLst has no default value.
  // _statementLst_1 has no default value.
  // _statement has no default value.
  // _statement_1 has no default value.
  // _type_ has no default value.
  // _e1_1 has no default value.
  // _e2_1 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _e1_2 has no default value.
  // _e2_2 has no default value.
  // _e3 has no default value.
  // _e3_1 has no default value.
  // _e3_2 has no default value.
  // _expExpLst has no default value.
  // _expExpLst_1 has no default value.
  // _else_ has no default value.
  // _source has no default value.
  // _cr has no default value.
  // _iterIsArray has no default value.
  // _ident has no default value.
  // _conditions has no default value.
  // _initialCall has no default value.
  // _b has no default value.
  // _b1 has no default value.
  // _b2 has no default value.
  // _b3 has no default value.
  // _loopPrlVars has no default value.
  {
    modelica_metatype _stmt;
    for (tmpMeta2 = _inStatementLst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _stmt = MMC_CAR(tmpMeta2);
      
      
      { /* matchcontinue expression */
        volatile modelica_metatype tmp6_1;
        tmp6_1 = _stmt;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp5_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp6 < 15; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_boolean tmp12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,4) == 0) goto tmp5_end;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _type_ = tmpMeta8;
              _e1 = tmpMeta9;
              _e2 = tmpMeta10;
              _source = tmpMeta11;
              tmp6 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp12 = (_b1 || _b2);
              if (1 /* true */ != tmp12) goto goto_4;

              _e1_2 = omc_ExpressionSimplify_simplify(threadData, _e1_1, NULL);

              _e2_2 = omc_ExpressionSimplify_simplify(threadData, _e2_1, NULL);

              _e1_2 = omc_BackendVarTransform_moveNegateRhs(threadData, _e1_2, _e2_2 ,&_e2_2);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_2);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_2);
              tmpMeta14 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _type_, _e1_2, _e2_2, _source);
              tmpMeta13 = mmc_mk_cons(tmpMeta14, _outStatementLst);
              tmpMeta[0+0] = tmpMeta13;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_boolean tmp19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,1,4) == 0) goto tmp5_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _type_ = tmpMeta15;
              _expExpLst = tmpMeta16;
              _e2 = tmpMeta17;
              _source = tmpMeta18;
              tmp6 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
              _expExpLst_1 = omc_BackendVarTransform_replaceExpList(threadData, _expExpLst, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp19 = (_b1 || _b2);
              if (1 /* true */ != tmp19) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_1);

              _e2_2 = omc_ExpressionSimplify_simplify(threadData, _e2_1 ,&_b1);

              tmpMeta20 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e2_1);
              tmpMeta21 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e2_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta20, tmpMeta21);
              tmpMeta23 = mmc_mk_box5(4, &DAE_Statement_STMT__TUPLE__ASSIGN__desc, _type_, _expExpLst_1, _e2_2, _source);
              tmpMeta22 = mmc_mk_cons(tmpMeta23, _outStatementLst);
              tmpMeta[0+0] = tmpMeta22;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 2: {
              modelica_metatype tmpMeta24;
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_boolean tmp29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              modelica_metatype tmpMeta32;
              modelica_metatype tmpMeta33;
              modelica_metatype tmpMeta34;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,4) == 0) goto tmp5_end;
              tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,6,2) == 0) goto tmp5_end;
              tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _type_ = tmpMeta24;
              _e1 = tmpMeta25;
              _cr = tmpMeta26;
              _e2 = tmpMeta27;
              _source = tmpMeta28;
              tmp6 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp29 = (_b1 || _b2);
              if (1 /* true */ != tmp29) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_1);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_1);

              /* Pattern-matching tuple assignment */
              tmpMeta31 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _e1_1, _e2_1);
              tmpMeta32 = omc_ExpressionSimplify_simplifyAddSymbolicOperation(threadData, tmpMeta31, _source, &tmpMeta30);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,2,2) == 0) goto goto_4;
              tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
              tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
              _e1_1 = tmpMeta33;
              _e2_2 = tmpMeta34;
              _source = tmpMeta30;
              tmpMeta[0+0] = omc_BackendVarTransform_validLhsArrayAssignSTMT(threadData, _cr, _e1_1, _e2_2, _type_, _source, _outStatementLst);
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 3: {
              modelica_metatype tmpMeta35;
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              modelica_metatype tmpMeta38;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,3,4) == 0) goto tmp5_end;
              tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _e1 = tmpMeta35;
              _statementLst = tmpMeta36;
              _else_ = tmpMeta37;
              _source = tmpMeta38;
              tmp6 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _e1_1, NULL);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_2);
              tmpMeta[0+0] = omc_BackendVarTransform_replaceSTMT__IF(threadData, _e1_2, _statementLst, _else_, _source, _repl, _inFuncTypeExpExpToBooleanOption, _outStatementLst, (_replacementPerformed || _b1), &tmp3_c1);
              goto tmp5_done;
            }
            case 4: {
              modelica_metatype tmpMeta39;
              modelica_metatype tmpMeta40;
              modelica_integer tmp41;
              modelica_metatype tmpMeta42;
              modelica_metatype tmpMeta43;
              modelica_metatype tmpMeta44;
              modelica_metatype tmpMeta45;
              modelica_metatype tmpMeta46;
              modelica_boolean tmp47;
              modelica_metatype tmpMeta48;
              modelica_metatype tmpMeta49;
              modelica_metatype tmpMeta50;
              modelica_metatype tmpMeta51;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,6) == 0) goto tmp5_end;
              tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmp41 = mmc_unbox_integer(tmpMeta40);
              tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
              tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 7));
              _type_ = tmpMeta39;
              _iterIsArray = tmp41  /* pattern as ty=Boolean */;
              _ident = tmpMeta42;
              _e1 = tmpMeta43;
              _statementLst = tmpMeta44;
              _source = tmpMeta45;
              tmp6 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
              _repl = omc_BackendVarTransform_addIterationVar(threadData, _repl, _ident);

              tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
              _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta46, 0 /* false */ ,&_b1);

              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp47 = (_b1 || _b2);
              if (1 /* true */ != tmp47) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e1_1 ,&_b1);

              tmpMeta48 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta49 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta48, tmpMeta49);

              _repl = omc_BackendVarTransform_removeIterationVar(threadData, _repl, _ident);
              tmpMeta51 = mmc_mk_box7(7, &DAE_Statement_STMT__FOR__desc, _type_, mmc_mk_boolean(_iterIsArray), _ident, _e1_2, _statementLst_1, _source);
              tmpMeta50 = mmc_mk_cons(tmpMeta51, _outStatementLst);
              tmpMeta[0+0] = tmpMeta50;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 5: {
              modelica_metatype tmpMeta52;
              modelica_metatype tmpMeta53;
              modelica_integer tmp54;
              modelica_metatype tmpMeta55;
              modelica_metatype tmpMeta56;
              modelica_metatype tmpMeta57;
              modelica_metatype tmpMeta58;
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_boolean tmp61;
              modelica_metatype tmpMeta62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype tmpMeta65;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,5,7) == 0) goto tmp5_end;
              tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmp54 = mmc_unbox_integer(tmpMeta53);
              tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
              tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 7));
              tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 8));
              _type_ = tmpMeta52;
              _iterIsArray = tmp54  /* pattern as ty=Boolean */;
              _ident = tmpMeta55;
              _e1 = tmpMeta56;
              _statementLst = tmpMeta57;
              _loopPrlVars = tmpMeta58;
              _source = tmpMeta59;
              tmp6 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
              _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta60, 0 /* false */ ,&_b1);

              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp61 = (_b1 || _b2);
              if (1 /* true */ != tmp61) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e1_1 ,&_b1);

              tmpMeta62 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta63 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta62, tmpMeta63);
              tmpMeta65 = mmc_mk_box8(8, &DAE_Statement_STMT__PARFOR__desc, _type_, mmc_mk_boolean(_iterIsArray), _ident, _e1_2, _statementLst_1, _loopPrlVars, _source);
              tmpMeta64 = mmc_mk_cons(tmpMeta65, _outStatementLst);
              tmpMeta[0+0] = tmpMeta64;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 6: {
              modelica_metatype tmpMeta66;
              modelica_metatype tmpMeta67;
              modelica_metatype tmpMeta68;
              modelica_metatype tmpMeta69;
              modelica_boolean tmp70;
              modelica_metatype tmpMeta71;
              modelica_metatype tmpMeta72;
              modelica_metatype tmpMeta73;
              modelica_metatype tmpMeta74;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,3) == 0) goto tmp5_end;
              tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              _e1 = tmpMeta66;
              _statementLst = tmpMeta67;
              _source = tmpMeta68;
              tmp6 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta69 = MMC_REFSTRUCTLIT(mmc_nil);
              _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta69, 0 /* false */ ,&_b1);

              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp70 = (_b1 || _b2);
              if (1 /* true */ != tmp70) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e1_1 ,&_b1);

              tmpMeta71 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta72 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta71, tmpMeta72);
              tmpMeta74 = mmc_mk_box4(9, &DAE_Statement_STMT__WHILE__desc, _e1_2, _statementLst_1, _source);
              tmpMeta73 = mmc_mk_cons(tmpMeta74, _outStatementLst);
              tmpMeta[0+0] = tmpMeta73;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 7: {
              modelica_metatype tmpMeta75;
              modelica_metatype tmpMeta76;
              modelica_metatype tmpMeta77;
              modelica_integer tmp78;
              modelica_metatype tmpMeta79;
              modelica_metatype tmpMeta80;
              modelica_metatype tmpMeta81;
              modelica_metatype tmpMeta82;
              modelica_boolean tmp83;
              modelica_metatype tmpMeta84;
              modelica_metatype tmpMeta85;
              modelica_metatype tmpMeta86;
              modelica_metatype tmpMeta87;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,7,6) == 0) goto tmp5_end;
              tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmp78 = mmc_unbox_integer(tmpMeta77);
              tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
              if (!optionNone(tmpMeta80)) goto tmp5_end;
              tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 7));
              _e1 = tmpMeta75;
              _conditions = tmpMeta76;
              _initialCall = tmp78  /* pattern as ty=Boolean */;
              _statementLst = tmpMeta79;
              _source = tmpMeta81;
              tmp6 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta82 = MMC_REFSTRUCTLIT(mmc_nil);
              _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta82, 0 /* false */ ,&_b1);

              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp83 = (_b1 || _b2);
              if (1 /* true */ != tmp83) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e1_1 ,&_b1);

              tmpMeta84 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta85 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta84, tmpMeta85);
              tmpMeta87 = mmc_mk_box7(10, &DAE_Statement_STMT__WHEN__desc, _e1_2, _conditions, mmc_mk_boolean(_initialCall), _statementLst_1, mmc_mk_none(), _source);
              tmpMeta86 = mmc_mk_cons(tmpMeta87, _outStatementLst);
              tmpMeta[0+0] = tmpMeta86;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 8: {
              modelica_metatype tmpMeta88;
              modelica_metatype tmpMeta89;
              modelica_metatype tmpMeta90;
              modelica_integer tmp91;
              modelica_metatype tmpMeta92;
              modelica_metatype tmpMeta93;
              modelica_metatype tmpMeta94;
              modelica_metatype tmpMeta95;
              modelica_metatype tmpMeta96;
              modelica_boolean tmp97;
              modelica_metatype tmpMeta98;
              modelica_metatype tmpMeta99;
              modelica_metatype tmpMeta100;
              modelica_metatype tmpMeta101;
              modelica_metatype tmpMeta102;
              modelica_boolean tmp103;
              modelica_metatype tmpMeta104;
              modelica_metatype tmpMeta105;
              modelica_metatype tmpMeta106;
              modelica_metatype tmpMeta107;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,7,6) == 0) goto tmp5_end;
              tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmp91 = mmc_unbox_integer(tmpMeta90);
              tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
              if (optionNone(tmpMeta93)) goto tmp5_end;
              tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta93), 1));
              tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 7));
              _e1 = tmpMeta88;
              _conditions = tmpMeta89;
              _initialCall = tmp91  /* pattern as ty=Boolean */;
              _statementLst = tmpMeta92;
              _statement = tmpMeta94;
              _source = tmpMeta95;
              tmp6 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
              tmpMeta96 = MMC_REFSTRUCTLIT(mmc_nil);
              _statementLst_1 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta96, 0 /* false */ ,&_b1);

              /* Pattern-matching tuple assignment */
              tmpMeta98 = mmc_mk_cons(_statement, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta99 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta100 = omc_BackendVarTransform_replaceStatementLst(threadData, tmpMeta98, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta99, 0 /* false */, &tmp97);
              if (listEmpty(tmpMeta100)) goto goto_4;
              tmpMeta101 = MMC_CAR(tmpMeta100);
              tmpMeta102 = MMC_CDR(tmpMeta100);
              if (!listEmpty(tmpMeta102)) goto goto_4;
              _statement_1 = tmpMeta101;
              _b2 = tmp97;

              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b3);

              /* Pattern-matching assignment */
              tmp103 = ((_b1 || _b2) || _b3);
              if (1 /* true */ != tmp103) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b3, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b3, _e1_1 ,&_b1);

              tmpMeta104 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta105 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta104, tmpMeta105);
              tmpMeta107 = mmc_mk_box7(10, &DAE_Statement_STMT__WHEN__desc, _e1_2, _conditions, mmc_mk_boolean(_initialCall), _statementLst_1, mmc_mk_some(_statement_1), _source);
              tmpMeta106 = mmc_mk_cons(tmpMeta107, _outStatementLst);
              tmpMeta[0+0] = tmpMeta106;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 9: {
              modelica_metatype tmpMeta108;
              modelica_metatype tmpMeta109;
              modelica_metatype tmpMeta110;
              modelica_metatype tmpMeta111;
              modelica_boolean tmp112;
              modelica_metatype tmpMeta113;
              modelica_metatype tmpMeta114;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,8,4) == 0) goto tmp5_end;
              tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _e1 = tmpMeta108;
              _e2 = tmpMeta109;
              _e3 = tmpMeta110;
              _source = tmpMeta111;
              tmp6 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              _e3_1 = omc_BackendVarTransform_replaceExp(threadData, _e3, _repl, _inFuncTypeExpExpToBooleanOption ,&_b3);

              /* Pattern-matching assignment */
              tmp112 = ((_b1 || _b2) || _b3);
              if (1 /* true */ != tmp112) goto goto_4;

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _e1_1, NULL);

              _e2_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e2_1, NULL);

              _e3_2 = omc_ExpressionSimplify_condsimplify(threadData, _b3, _e3_1, NULL);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_2);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_2);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b3, _source, _e3, _e3_2);
              tmpMeta114 = mmc_mk_box5(11, &DAE_Statement_STMT__ASSERT__desc, _e1_2, _e2_2, _e3_2, _source);
              tmpMeta113 = mmc_mk_cons(tmpMeta114, _outStatementLst);
              tmpMeta[0+0] = tmpMeta113;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 10: {
              modelica_metatype tmpMeta115;
              modelica_metatype tmpMeta116;
              modelica_boolean tmp117;
              modelica_metatype tmpMeta118;
              modelica_metatype tmpMeta119;
              modelica_metatype tmpMeta120;
              modelica_metatype tmpMeta121;
              modelica_metatype tmpMeta122;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,9,2) == 0) goto tmp5_end;
              tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              _e1 = tmpMeta115;
              _source = tmpMeta116;
              tmp6 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
              /* Pattern-matching tuple assignment */
              tmpMeta118 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption, &tmp117);
              _e1_1 = tmpMeta118;
              if (1 /* true */ != tmp117) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, 1 /* true */, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_simplify(threadData, _e1_1 ,&_b1);

              tmpMeta119 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta120 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta119, tmpMeta120);
              tmpMeta122 = mmc_mk_box3(12, &DAE_Statement_STMT__TERMINATE__desc, _e1_2, _source);
              tmpMeta121 = mmc_mk_cons(tmpMeta122, _outStatementLst);
              tmpMeta[0+0] = tmpMeta121;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 11: {
              modelica_metatype tmpMeta123;
              modelica_metatype tmpMeta124;
              modelica_metatype tmpMeta125;
              modelica_boolean tmp126;
              modelica_metatype tmpMeta127;
              modelica_metatype tmpMeta128;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,10,3) == 0) goto tmp5_end;
              tmpMeta123 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta124 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              _e1 = tmpMeta123;
              _e2 = tmpMeta124;
              _source = tmpMeta125;
              tmp6 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
              _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

              _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

              /* Pattern-matching assignment */
              tmp126 = (_b1 || _b2);
              if (1 /* true */ != tmp126) goto goto_4;

              _e1_2 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _e1_1, NULL);

              _e2_2 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _e2_1, NULL);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_2);

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_2);
              tmpMeta128 = mmc_mk_box4(13, &DAE_Statement_STMT__REINIT__desc, _e1_2, _e2_2, _source);
              tmpMeta127 = mmc_mk_cons(tmpMeta128, _outStatementLst);
              tmpMeta[0+0] = tmpMeta127;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 12: {
              modelica_metatype tmpMeta129;
              modelica_metatype tmpMeta130;
              modelica_boolean tmp131;
              modelica_metatype tmpMeta132;
              modelica_metatype tmpMeta133;
              modelica_metatype tmpMeta134;
              modelica_metatype tmpMeta135;
              modelica_metatype tmpMeta136;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,11,2) == 0) goto tmp5_end;
              tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta130 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              _e1 = tmpMeta129;
              _source = tmpMeta130;
              tmp6 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
              /* Pattern-matching tuple assignment */
              tmpMeta132 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption, &tmp131);
              _e1_1 = tmpMeta132;
              if (1 /* true */ != tmp131) goto goto_4;

              _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, 1 /* true */, _source, _e1, _e1_1);

              _e1_2 = omc_ExpressionSimplify_simplify(threadData, _e1_1 ,&_b1);

              tmpMeta133 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_1);
              tmpMeta134 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _e1_2);
              _source = omc_ElementSource_addSymbolicTransformationSimplify(threadData, _b1, _source, tmpMeta133, tmpMeta134);
              tmpMeta136 = mmc_mk_box3(14, &DAE_Statement_STMT__NORETCALL__desc, _e1_2, _source);
              tmpMeta135 = mmc_mk_cons(tmpMeta136, _outStatementLst);
              tmpMeta[0+0] = tmpMeta135;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 13: {
              modelica_metatype tmpMeta137;
              modelica_metatype tmpMeta138;
              modelica_boolean tmp139;
              modelica_metatype tmpMeta140;
              modelica_metatype tmpMeta141;
              modelica_metatype tmpMeta142;
              modelica_metatype tmpMeta143;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,16,2) == 0) goto tmp5_end;
              tmpMeta137 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              _statementLst = tmpMeta137;
              _source = tmpMeta138;
              /* Pattern matching succeeded */
              /* Pattern-matching tuple assignment */
              tmpMeta140 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta141 = omc_BackendVarTransform_replaceStatementLst(threadData, _statementLst, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta140, 0 /* false */, &tmp139);
              _statementLst_1 = tmpMeta141;
              if (1 /* true */ != tmp139) goto goto_4;
              tmpMeta143 = mmc_mk_box3(19, &DAE_Statement_STMT__FAILURE__desc, _statementLst_1, _source);
              tmpMeta142 = mmc_mk_cons(tmpMeta143, _outStatementLst);
              tmpMeta[0+0] = tmpMeta142;
              tmp3_c1 = 1 /* true */;
              goto tmp5_done;
            }
            case 14: {
              modelica_metatype tmpMeta144;
              
              /* Pattern matching succeeded */
              tmpMeta144 = mmc_mk_cons(_stmt, _outStatementLst);
              tmpMeta[0+0] = tmpMeta144;
              tmp3_c1 = _replacementPerformed;
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          tmp5_done:
          (void)tmp6;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp5_done2;
          goto_4:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp6 < 15) {
            goto tmp5_top;
          }
          MMC_THROW_INTERNAL();
          tmp5_done2:;
        }
      }
      _outStatementLst = tmpMeta[0+0];
      _replacementPerformed = tmp3_c1;
    }
  }

  _outStatementLst = listReverseInPlace(_outStatementLst);
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outStatementLst;
}
modelica_metatype boxptr_BackendVarTransform_replaceStatementLst(threadData_t *threadData, modelica_metatype _inStatementLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _inBAcc, modelica_metatype *out_replacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _replacementPerformed;
  modelica_metatype _outStatementLst = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_inBAcc);
  _outStatementLst = omc_BackendVarTransform_replaceStatementLst(threadData, _inStatementLst, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, tmp1, &_replacementPerformed);
  /* skip box _outStatementLst; list<DAE.Statement> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outStatementLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceWhenOperator(threadData_t *threadData, modelica_metatype _inReinitStmtLst, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean _replacementPerformed, modelica_metatype _iAcc, modelica_boolean *out_oReplacementPerformed)
{
  modelica_metatype _oReinitStmtLst = NULL;
  modelica_boolean _oReplacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oReinitStmtLst has no default value.
  // _oReplacementPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inReinitStmtLst;
    {
      modelica_metatype _res = NULL;
      modelica_metatype _wop = NULL;
      modelica_metatype _wop1 = NULL;
      modelica_metatype _cond = NULL;
      modelica_metatype _cond1 = NULL;
      modelica_metatype _level = NULL;
      modelica_metatype _cre = NULL;
      modelica_metatype _cre1 = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _source = NULL;
      modelica_boolean _b;
      modelica_boolean _b1;
      modelica_boolean _b2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _res has no default value.
      // _wop has no default value.
      // _wop1 has no default value.
      // _cond has no default value.
      // _cond1 has no default value.
      // _level has no default value.
      // _cre has no default value.
      // _cre1 has no default value.
      // _exp has no default value.
      // _exp1 has no default value.
      // _cr has no default value.
      // _cr1 has no default value.
      // _source has no default value.
      // _b has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmp1_c1 = _replacementPerformed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          _wop = tmpMeta6;
          _cre = tmpMeta8;
          _cr = tmpMeta9;
          _exp = tmpMeta10;
          _source = tmpMeta11;
          _res = tmpMeta7;
          /* Pattern matching succeeded */
          _cre1 = omc_BackendVarTransform_replaceExp(threadData, _cre, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          omc_BackendVarTransform_validWhenLeftHandSide(threadData, _cre1, _cre, _cr, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _cre, _cre1);

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          _exp1 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _exp1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _exp, _exp1);

          _b = (_b1 || _b2);

          tmp13 = (modelica_boolean)_b;
          if(tmp13)
          {
            tmpMeta12 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _cre1, _exp1, _source);
            tmpMeta14 = tmpMeta12;
          }
          else
          {
            tmpMeta14 = _wop;
          }
          _wop1 = tmpMeta14;
          tmpMeta15 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta15;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
          _wop = tmpMeta16;
          _cre = tmpMeta18;
          _exp = tmpMeta19;
          _source = tmpMeta20;
          _res = tmpMeta17;
          /* Pattern matching succeeded */
          _cre1 = omc_BackendVarTransform_replaceExp(threadData, _cre, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _cre, _cre1);

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          _exp1 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _exp1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _exp, _exp1);

          _b = (_b1 || _b2);

          tmp22 = (modelica_boolean)_b;
          if(tmp22)
          {
            tmpMeta21 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _cre1, _exp1, _source);
            tmpMeta23 = tmpMeta21;
          }
          else
          {
            tmpMeta23 = _wop;
          }
          _wop1 = tmpMeta23;
          tmpMeta24 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta24;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_boolean tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,3) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 4));
          _wop = tmpMeta25;
          _cr = tmpMeta27;
          _cond = tmpMeta28;
          _source = tmpMeta29;
          _res = tmpMeta26;
          /* Pattern matching succeeded */
          _cre = omc_Expression_crefExp(threadData, _cr);

          _cre1 = omc_BackendVarTransform_replaceExp(threadData, _cre, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _cr1 = omc_BackendVarTransform_validWhenLeftHandSide(threadData, _cre1, _cre, _cr, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _cre, _cre1);

          _cond1 = omc_BackendVarTransform_replaceExp(threadData, _cond, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          _cond1 = omc_ExpressionSimplify_condsimplify(threadData, _b2, _cond1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _cond, _cond1);

          _b = (_b1 || _b2);

          tmp31 = (modelica_boolean)_b;
          if(tmp31)
          {
            tmpMeta30 = mmc_mk_box4(4, &BackendDAE_WhenOperator_REINIT__desc, _cr1, _cond1, _source);
            tmpMeta32 = tmpMeta30;
          }
          else
          {
            tmpMeta32 = _wop;
          }
          _wop1 = tmpMeta32;
          tmpMeta33 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta33;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_boolean tmp41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmp4_1);
          tmpMeta35 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,2,4) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 5));
          _wop = tmpMeta34;
          _cond = tmpMeta36;
          _exp = tmpMeta37;
          _level = tmpMeta38;
          _source = tmpMeta39;
          _res = tmpMeta35;
          /* Pattern matching succeeded */
          _cond1 = omc_BackendVarTransform_replaceExp(threadData, _cond, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _cond1 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _cond1, NULL);

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          _b = (_b1 || _b2);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b, _source, _cond, _cond1);

          tmp41 = (modelica_boolean)_b;
          if(tmp41)
          {
            tmpMeta40 = mmc_mk_box5(5, &BackendDAE_WhenOperator_ASSERT__desc, _cond1, _exp1, _level, _source);
            tmpMeta42 = tmpMeta40;
          }
          else
          {
            tmpMeta42 = _wop;
          }
          _wop1 = tmpMeta42;
          tmpMeta43 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta43;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_boolean tmp49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta44 = MMC_CAR(tmp4_1);
          tmpMeta45 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,3,2) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          _wop = tmpMeta44;
          _exp = tmpMeta46;
          _source = tmpMeta47;
          _res = tmpMeta45;
          /* Pattern matching succeeded */
          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _inFuncTypeExpExpToBooleanOption ,&_b);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b, _source, _exp, _exp1);

          tmp49 = (modelica_boolean)_b;
          if(tmp49)
          {
            tmpMeta48 = mmc_mk_box3(6, &BackendDAE_WhenOperator_TERMINATE__desc, _exp1, _source);
            tmpMeta50 = tmpMeta48;
          }
          else
          {
            tmpMeta50 = _wop;
          }
          _wop1 = tmpMeta50;
          tmpMeta51 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta51;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_boolean tmp57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta52 = MMC_CAR(tmp4_1);
          tmpMeta53 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,4,2) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 3));
          _wop = tmpMeta52;
          _exp = tmpMeta54;
          _source = tmpMeta55;
          _res = tmpMeta53;
          /* Pattern matching succeeded */
          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _inFuncTypeExpExpToBooleanOption ,&_b);

          _exp1 = omc_ExpressionSimplify_condsimplify(threadData, _b, _exp1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b, _source, _exp, _exp1);

          tmp57 = (modelica_boolean)_b;
          if(tmp57)
          {
            tmpMeta56 = mmc_mk_box3(7, &BackendDAE_WhenOperator_NORETCALL__desc, _exp1, _source);
            tmpMeta58 = tmpMeta56;
          }
          else
          {
            tmpMeta58 = _wop;
          }
          _wop1 = tmpMeta58;
          tmpMeta59 = mmc_mk_cons(_wop1, _iAcc);
          /* Tail recursive call */
          _inReinitStmtLst = _res;
          _replacementPerformed = (_replacementPerformed || _b);
          _iAcc = tmpMeta59;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _oReinitStmtLst = tmpMeta[0+0];
  _oReplacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oReplacementPerformed) { *out_oReplacementPerformed = _oReplacementPerformed; }
  return _oReinitStmtLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceWhenOperator(threadData_t *threadData, modelica_metatype _inReinitStmtLst, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _replacementPerformed, modelica_metatype _iAcc, modelica_metatype *out_oReplacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _oReplacementPerformed;
  modelica_metatype _oReinitStmtLst = NULL;
  tmp1 = mmc_unbox_integer(_replacementPerformed);
  _oReinitStmtLst = omc_BackendVarTransform_replaceWhenOperator(threadData, _inReinitStmtLst, _repl, _inFuncTypeExpExpToBooleanOption, tmp1, _iAcc, &_oReplacementPerformed);
  /* skip box _oReinitStmtLst; list<BackendDAE.WhenOperator> */
  if (out_oReplacementPerformed) { *out_oReplacementPerformed = mmc_mk_icon(_oReplacementPerformed); }
  return _oReinitStmtLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceWhenEquation(threadData_t *threadData, modelica_metatype _whenEqn, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _isource, modelica_metatype *out_osource, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outWhenEqn = NULL;
  modelica_metatype _osource = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outWhenEqn has no default value.
  // _osource has no default value.
  // _replacementPerformed has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _whenEqn;
    {
      modelica_metatype _cond = NULL;
      modelica_metatype _cond1 = NULL;
      modelica_metatype _cond2 = NULL;
      modelica_metatype _weqn = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _b3;
      modelica_boolean _b4;
      modelica_metatype _source = NULL;
      modelica_metatype _whenStmtLst = NULL;
      modelica_metatype _oelsewhenPart = NULL;
      modelica_metatype _elsewhenPart = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cond has no default value.
      // _cond1 has no default value.
      // _cond2 has no default value.
      // _weqn has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _b3 has no default value.
      // _b4 has no default value.
      // _source has no default value.
      // _whenStmtLst has no default value.
      // _oelsewhenPart has no default value.
      // _elsewhenPart has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _cond = tmpMeta6;
          _whenStmtLst = tmpMeta7;
          _oelsewhenPart = tmpMeta8;
          /* Pattern matching succeeded */
          _cond1 = omc_BackendVarTransform_replaceExp(threadData, _cond, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _cond2 = omc_ExpressionSimplify_condsimplify(threadData, _b1, _cond1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _isource, _cond, _cond2);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _whenStmtLst = omc_BackendVarTransform_replaceWhenOperator(threadData, _whenStmtLst, _repl, _inFuncTypeExpExpToBooleanOption, 0 /* false */, tmpMeta9 ,&_b2);

          if(isSome(_oelsewhenPart))
          {
            /* Pattern-matching assignment */
            tmpMeta10 = _oelsewhenPart;
            if (optionNone(tmpMeta10)) goto goto_2;
            tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
            _elsewhenPart = tmpMeta11;

            _elsewhenPart = omc_BackendVarTransform_replaceWhenEquation(threadData, _elsewhenPart, _repl, _inFuncTypeExpExpToBooleanOption, _source ,&_source ,&_b3);

            _oelsewhenPart = mmc_mk_some(_elsewhenPart);
          }
          else
          {
            _oelsewhenPart = mmc_mk_none();

            _b3 = 0 /* false */;
          }

          _b4 = ((_b1 || _b2) || _b3);

          tmp13 = (modelica_boolean)_b4;
          if(tmp13)
          {
            tmpMeta12 = mmc_mk_box4(3, &BackendDAE_WhenEquation_WHEN__STMTS__desc, _cond2, _whenStmtLst, _oelsewhenPart);
            tmpMeta14 = tmpMeta12;
          }
          else
          {
            tmpMeta14 = _whenEqn;
          }
          _weqn = tmpMeta14;
          tmpMeta[0+0] = _weqn;
          tmpMeta[0+1] = _source;
          tmp1_c2 = _b4;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outWhenEqn = tmpMeta[0+0];
  _osource = tmpMeta[0+1];
  _replacementPerformed = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_osource) { *out_osource = _osource; }
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outWhenEqn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceWhenEquation(threadData_t *threadData, modelica_metatype _whenEqn, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _isource, modelica_metatype *out_osource, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outWhenEqn = NULL;
  _outWhenEqn = omc_BackendVarTransform_replaceWhenEquation(threadData, _whenEqn, _repl, _inFuncTypeExpExpToBooleanOption, _isource, out_osource, &_replacementPerformed);
  /* skip box _outWhenEqn; BackendDAE.WhenEquation */
  /* skip box _osource; DAE.ElementSource */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outWhenEqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_validWhenLeftHandSide(threadData_t *threadData, modelica_metatype _inLhs, modelica_metatype _inRhs, modelica_metatype _oldCr, modelica_metatype *out_oRhs)
{
  modelica_metatype _outCr = NULL;
  modelica_metatype _oRhs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCr has no default value.
  // _oRhs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inLhs;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _op = NULL;
      modelica_string _msg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _op has no default value.
      // _msg has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _cr;
          tmpMeta[0+1] = _inRhs;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _op = tmpMeta7;
          _cr = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _inRhs);
          tmpMeta[0+0] = _cr;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          
          _op = tmpMeta11;
          _cr = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box3(13, &DAE_Exp_LUNARY__desc, _op, _inRhs);
          tmpMeta[0+0] = _cr;
          tmpMeta[0+1] = tmpMeta14;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp15 = omc_Flags_isSet(threadData, _OMC_LIT10);
          if (1 /* true */ != tmp15) goto goto_2;

          tmpMeta16 = stringAppend(_OMC_LIT13,omc_ComponentReference_printComponentRefStr(threadData, _oldCr));
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT12);
          tmpMeta18 = stringAppend(tmpMeta17,omc_ExpressionDump_printExpStr(threadData, _inLhs));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT4);
          _msg = tmpMeta19;

          omc_Debug_trace(threadData, _msg);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outCr = tmpMeta[0+0];
  _oRhs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oRhs) { *out_oRhs = _oRhs; }
  return _outCr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_optimizeIfEquation(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _theneqns, modelica_metatype _elseenqs, modelica_metatype _conditions1, modelica_metatype _theneqns1, modelica_metatype _source, modelica_metatype _inEqAttr, modelica_metatype _inEqns)
{
  modelica_metatype _outEqns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;
    tmp4_1 = _conditions;
    tmp4_2 = _theneqns;
    tmp4_3 = _conditions1;
    tmp4_4 = _theneqns1;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _explst = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _eqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _explst has no default value.
      // _eqnslst has no default value.
      // _eqns has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend(_elseenqs, _inEqns);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _explst = listReverse(_conditions1);

          _eqnslst = listReverse(_theneqns1);
          tmpMeta7 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, _explst, _eqnslst, _elseenqs, _source, _inEqAttr);
          tmpMeta6 = mmc_mk_cons(tmpMeta7, _inEqns);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 /* true */ != tmp13) goto tmp3_end;
          _eqns = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend(_eqns, _inEqns);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_2);
          tmpMeta15 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          if (1 /* true */ != tmp19) goto tmp3_end;
          _eqns = tmpMeta14;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _explst = listReverse(_conditions1);

          _eqnslst = listReverse(_theneqns1);
          tmpMeta21 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, _explst, _eqnslst, _eqns, _source, _inEqAttr);
          tmpMeta20 = mmc_mk_cons(tmpMeta21, _inEqns);
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmp4_2);
          tmpMeta23 = MMC_CDR(tmp4_2);
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_1);
          tmpMeta25 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,3,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          if (0 /* false */ != tmp27) goto tmp3_end;
          
          _eqnslst = tmpMeta23;
          _explst = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendVarTransform_optimizeIfEquation(threadData, _explst, _eqnslst, _elseenqs, _conditions1, _theneqns1, _source, _inEqAttr, _inEqns);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmp4_1);
          tmpMeta29 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_2);
          tmpMeta31 = MMC_CDR(tmp4_2);
          
          _e = tmpMeta28;
          _explst = tmpMeta29;
          _eqns = tmpMeta30;
          _eqnslst = tmpMeta31;
          /* Pattern matching succeeded */
          tmpMeta32 = mmc_mk_cons(_e, _conditions1);
          tmpMeta33 = mmc_mk_cons(_eqns, _theneqns1);
          tmpMeta1 = omc_BackendVarTransform_optimizeIfEquation(threadData, _explst, _eqnslst, _elseenqs, tmpMeta32, tmpMeta33, _source, _inEqAttr, _inEqns);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEqns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquation(threadData_t *threadData, modelica_metatype _inBackendDAEEquation, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _iReplacementPerformed, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outBackendDAEEquationLst = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBackendDAEEquationLst has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inBackendDAEEquation;
    tmp4_2 = _inVariableReplacements;
    {
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e2_1 = NULL;
      modelica_metatype _e1_2 = NULL;
      modelica_metatype _e2_2 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _e_2 = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _a = NULL;
      modelica_metatype _cr = NULL;
      modelica_integer _size;
      modelica_metatype _recordSize = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _expl1 = NULL;
      modelica_metatype _expl2 = NULL;
      modelica_metatype _whenEqn = NULL;
      modelica_metatype _whenEqn1 = NULL;
      modelica_metatype _source = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _b3;
      modelica_boolean _hasArrayCref;
      modelica_metatype _dimSize = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmts1 = NULL;
      modelica_metatype _blst = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _crefExpand = NULL;
      modelica_metatype _eqAttr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1_1 has no default value.
      // _e2_1 has no default value.
      // _e1_2 has no default value.
      // _e2_2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e_1 has no default value.
      // _e_2 has no default value.
      // _e has no default value.
      // _repl has no default value.
      // _a has no default value.
      // _cr has no default value.
      // _size has no default value.
      // _recordSize has no default value.
      // _expl has no default value.
      // _expl1 has no default value.
      // _expl2 has no default value.
      // _whenEqn has no default value.
      // _whenEqn1 has no default value.
      // _source has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _b3 has no default value.
      // _hasArrayCref has no default value.
      // _dimSize has no default value.
      // _alg has no default value.
      // _crefs has no default value.
      // _stmts has no default value.
      // _stmts1 has no default value.
      // _blst has no default value.
      // _eqns has no default value.
      // _eqnslst has no default value.
      // _crefExpand has no default value.
      // _eqAttr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _dimSize = tmpMeta6;
          _e1 = tmpMeta7;
          _e2 = tmpMeta8;
          _source = tmpMeta9;
          _eqAttr = tmpMeta10;
          _recordSize = tmpMeta11;
          _repl = tmp4_2;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp12 = (_b1 || _b2);
          if (1 /* true */ != tmp12) goto goto_2;

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_1);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_1);

          /* Pattern-matching tuple assignment */
          tmpMeta14 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _e1_1, _e2_1);
          tmpMeta15 = omc_ExpressionSimplify_simplifyAddSymbolicOperation(threadData, tmpMeta14, _source, &tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,2,2) == 0) goto goto_2;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          _e1_2 = tmpMeta16;
          _e2_2 = tmpMeta17;
          _source = tmpMeta13;
          tmpMeta19 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, _dimSize, _e1_2, _e2_2, _source, _eqAttr, _recordSize);
          tmpMeta18 = mmc_mk_cons(tmpMeta19, _inAcc);
          tmpMeta[0+0] = tmpMeta18;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _size = tmp21  /* pattern as ty=Integer */;
          _e1 = tmpMeta22;
          _e2 = tmpMeta23;
          _source = tmpMeta24;
          _eqAttr = tmpMeta25;
          _repl = tmp4_2;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp26 = (_b1 || _b2);
          if (1 /* true */ != tmp26) goto goto_2;

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_1);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_1);

          /* Pattern-matching tuple assignment */
          tmpMeta28 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _e1_1, _e2_1);
          tmpMeta29 = omc_ExpressionSimplify_simplifyAddSymbolicOperation(threadData, tmpMeta28, _source, &tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,2,2) == 0) goto goto_2;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          _e1_2 = tmpMeta30;
          _e2_2 = tmpMeta31;
          _source = tmpMeta27;
          tmpMeta33 = mmc_mk_box6(9, &BackendDAE_Equation_COMPLEX__EQUATION__desc, mmc_mk_integer(_size), _e1_2, _e2_2, _source, _eqAttr);
          tmpMeta32 = mmc_mk_cons(tmpMeta33, _inAcc);
          tmpMeta[0+0] = tmpMeta32;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _e1 = tmpMeta34;
          _e2 = tmpMeta35;
          _source = tmpMeta36;
          _eqAttr = tmpMeta37;
          _repl = tmp4_2;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _inFuncTypeExpExpToBooleanOption ,&_b1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _inFuncTypeExpExpToBooleanOption ,&_b2);

          /* Pattern-matching assignment */
          tmp38 = (_b1 || _b2);
          if (1 /* true */ != tmp38) goto goto_2;

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b1, _source, _e1, _e1_1);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, _b2, _source, _e2, _e2_1);

          /* Pattern-matching tuple assignment */
          tmpMeta40 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _e1_1, _e2_1);
          tmpMeta41 = omc_ExpressionSimplify_simplifyAddSymbolicOperation(threadData, tmpMeta40, _source, &tmpMeta39);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,2,2) == 0) goto goto_2;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 3));
          _e1_2 = tmpMeta42;
          _e2_2 = tmpMeta43;
          _source = tmpMeta39;
          tmpMeta45 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e1_2, _e2_2, _source, _eqAttr);
          tmpMeta44 = mmc_mk_cons(tmpMeta45, _inAcc);
          tmpMeta[0+0] = tmpMeta44;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_boolean tmp53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_boolean tmp59;
          modelica_metatype tmpMeta60;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _size = tmp47  /* pattern as ty=Integer */;
          _stmts = tmpMeta49;
          _source = tmpMeta50;
          _crefExpand = tmpMeta51;
          _eqAttr = tmpMeta52;
          _repl = tmp4_2;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _crefs = omc_Expression_getLhsCrefsFromStatements(threadData, _stmts);

          _hasArrayCref = omc_List_any(threadData, _crefs, boxvar_ComponentReference_isArrayElement);

          _crefExpand = (_hasArrayCref?_crefExpand:_OMC_LIT14);

          /* Pattern-matching tuple assignment */
          tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta55 = omc_BackendVarTransform_replaceStatementLst(threadData, _stmts, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta54, 0 /* false */, &tmp53);
          _stmts1 = tmpMeta55;
          if (1 /* true */ != tmp53) goto goto_2;

          tmpMeta56 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _stmts1);
          _alg = tmpMeta56;

          tmp59 = (modelica_boolean)(!listEmpty(_stmts1));
          if(tmp59)
          {
            tmpMeta58 = mmc_mk_box6(7, &BackendDAE_Equation_ALGORITHM__desc, mmc_mk_integer(_size), _alg, _source, _crefExpand, _eqAttr);
            tmpMeta57 = mmc_mk_cons(tmpMeta58, _inAcc);
            tmpMeta60 = tmpMeta57;
          }
          else
          {
            tmpMeta60 = _inAcc;
          }
          _eqns = tmpMeta60;
          tmpMeta[0+0] = _eqns;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_boolean tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _cr = tmpMeta61;
          _e = tmpMeta62;
          _source = tmpMeta63;
          _eqAttr = tmpMeta64;
          _repl = tmp4_2;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta66 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _inFuncTypeExpExpToBooleanOption, &tmp65);
          _e_1 = tmpMeta66;
          if (1 /* true */ != tmp65) goto goto_2;

          _e_2 = omc_ExpressionSimplify_simplify(threadData, _e_1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, 1 /* true */, _source, _e, _e_2);
          tmpMeta68 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cr, _e_2, _source, _eqAttr);
          tmpMeta67 = mmc_mk_cons(tmpMeta68, _inAcc);
          tmpMeta[0+0] = tmpMeta67;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_boolean tmp72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmpMeta69;
          _source = tmpMeta70;
          _eqAttr = tmpMeta71;
          _repl = tmp4_2;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta73 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _inFuncTypeExpExpToBooleanOption, &tmp72);
          _e_1 = tmpMeta73;
          if (1 /* true */ != tmp72) goto goto_2;

          _e_2 = omc_ExpressionSimplify_simplify(threadData, _e_1, NULL);

          _source = omc_ElementSource_addSymbolicTransformationSubstitution(threadData, 1 /* true */, _source, _e, _e_2);
          tmpMeta75 = mmc_mk_box4(6, &BackendDAE_Equation_RESIDUAL__EQUATION__desc, _e_2, _source, _eqAttr);
          tmpMeta74 = mmc_mk_cons(tmpMeta75, _inAcc);
          tmpMeta[0+0] = tmpMeta74;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta76;
          modelica_integer tmp77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_boolean tmp82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp77 = mmc_unbox_integer(tmpMeta76);
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _size = tmp77  /* pattern as ty=Integer */;
          _whenEqn = tmpMeta78;
          _source = tmpMeta79;
          _eqAttr = tmpMeta80;
          _repl = tmp4_2;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta83 = omc_BackendVarTransform_replaceWhenEquation(threadData, _whenEqn, _repl, _inFuncTypeExpExpToBooleanOption, _source, &tmpMeta81, &tmp82);
          _whenEqn1 = tmpMeta83;
          if (1 /* true */ != tmp82) goto goto_2;
          _source = tmpMeta81;
          tmpMeta85 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(_size), _whenEqn1, _source, _eqAttr);
          tmpMeta84 = mmc_mk_cons(tmpMeta85, _inAcc);
          tmpMeta[0+0] = tmpMeta84;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_integer tmp92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_boolean tmp96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _expl = tmpMeta86;
          _eqnslst = tmpMeta87;
          _eqns = tmpMeta88;
          _source = tmpMeta89;
          _eqAttr = tmpMeta90;
          _repl = tmp4_2;
          /* Pattern matching succeeded */
          _expl1 = omc_BackendVarTransform_replaceExpList1(threadData, _expl, _repl, _inFuncTypeExpExpToBooleanOption ,&_blst);

          _b1 = omc_List_any(threadData, _blst, boxvar_Util_id);

          _source = omc_ElementSource_addSymbolicTransformationSubstitutionLst(threadData, _blst, _source, _expl, _expl1);

          _expl2 = omc_ExpressionSimplify_condsimplifyList1(threadData, _blst, _expl1 ,&_blst);

          _source = omc_ElementSource_addSymbolicTransformationSimplifyLst(threadData, _blst, _source, _expl1, _expl2);

          /* Pattern-matching tuple assignment */
          tmpMeta93 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta94 = omc_List_map3Fold(threadData, _eqnslst, boxvar_BackendVarTransform_replaceEquations2, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta93, mmc_mk_boolean(0 /* false */), &tmpMeta91);
          _eqnslst = tmpMeta94;
          tmp92 = mmc_unbox_integer(tmpMeta91);
          _b2 = tmp92  /* pattern as ty=Boolean */;

          tmpMeta95 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_BackendVarTransform_replaceEquations2(threadData, _eqns, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta95, 0 /* false */ ,&_b3);

          /* Pattern-matching assignment */
          tmp96 = ((_b1 || _b2) || _b3);
          if (1 /* true */ != tmp96) goto goto_2;

          tmpMeta97 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta98 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_BackendVarTransform_optimizeIfEquation(threadData, _expl2, _eqnslst, _eqns, tmpMeta97, tmpMeta98, _source, _eqAttr, _inAcc);
          tmpMeta[0+0] = _eqns;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta99;
          
          _a = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta99 = mmc_mk_cons(_a, _inAcc);
          tmpMeta[0+0] = tmpMeta99;
          tmp1_c1 = _iReplacementPerformed;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outBackendDAEEquationLst = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outBackendDAEEquationLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceEquation(threadData_t *threadData, modelica_metatype _inBackendDAEEquation, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _iReplacementPerformed, modelica_metatype *out_replacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _replacementPerformed;
  modelica_metatype _outBackendDAEEquationLst = NULL;
  tmp1 = mmc_unbox_integer(_iReplacementPerformed);
  _outBackendDAEEquationLst = omc_BackendVarTransform_replaceEquation(threadData, _inBackendDAEEquation, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, tmp1, &_replacementPerformed);
  /* skip box _outBackendDAEEquationLst; list<BackendDAE.Equation> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outBackendDAEEquationLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquations2(threadData_t *threadData, modelica_metatype _inBackendDAEEquationLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_boolean _iReplacementPerformed, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outBackendDAEEquationLst = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBackendDAEEquationLst has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inBackendDAEEquationLst;
    {
      modelica_metatype _a = NULL;
      modelica_metatype _es = NULL;
      modelica_metatype _acc = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _a has no default value.
      // _es has no default value.
      // _acc has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_inAcc);
          tmp1_c1 = _iReplacementPerformed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _a = tmpMeta6;
          _es = tmpMeta7;
          /* Pattern matching succeeded */
          _acc = omc_BackendVarTransform_replaceEquation(threadData, _a, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, _iReplacementPerformed ,&_b);
          /* Tail recursive call */
          _inBackendDAEEquationLst = _es;
          _inAcc = _acc;
          _iReplacementPerformed = _b;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outBackendDAEEquationLst = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outBackendDAEEquationLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceEquations2(threadData_t *threadData, modelica_metatype _inBackendDAEEquationLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inAcc, modelica_metatype _iReplacementPerformed, modelica_metatype *out_replacementPerformed)
{
  modelica_integer tmp1;
  modelica_boolean _replacementPerformed;
  modelica_metatype _outBackendDAEEquationLst = NULL;
  tmp1 = mmc_unbox_integer(_iReplacementPerformed);
  _outBackendDAEEquationLst = omc_BackendVarTransform_replaceEquations2(threadData, _inBackendDAEEquationLst, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, _inAcc, tmp1, &_replacementPerformed);
  /* skip box _outBackendDAEEquationLst; list<BackendDAE.Equation> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outBackendDAEEquationLst;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceEquations(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outEqns = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _replacementPerformed has no default value.
  if(omc_BackendVarTransform_isReplacementEmpty(threadData, _repl))
  {
    _outEqns = _inEqns;

    _replacementPerformed = 0 /* false */;
  }
  else
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _outEqns = omc_BackendVarTransform_replaceEquations2(threadData, _inEqns, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta1, 0 /* false */ ,&_replacementPerformed);
  }
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outEqns;
}
modelica_metatype boxptr_BackendVarTransform_replaceEquations(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outEqns = NULL;
  _outEqns = omc_BackendVarTransform_replaceEquations(threadData, _inEqns, _repl, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outEqns; list<BackendDAE.Equation> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceEquationTraverser(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _e = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _optfunc = NULL;
  modelica_metatype _eqns = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _e has no default value.
  // _outTpl has no default value.
  // _repl has no default value.
  // _optfunc has no default value.
  // _eqns has no default value.
  // _b has no default value.
  _e = _inEq;

  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _repl = tmpMeta2;
  _optfunc = tmpMeta3;
  _eqns = tmpMeta4;
  _b = tmp6  /* pattern as ty=Boolean */;

  _eqns = omc_BackendVarTransform_replaceEquation(threadData, _e, _repl, _optfunc, _eqns, _b ,&_b);

  tmpMeta7 = mmc_mk_box4(0, _repl, _optfunc, _eqns, mmc_mk_boolean(_b));
  _outTpl = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _e;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceEquationsArr(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outEqns = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _eqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqns has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_BackendVarTransform_isReplacementEmpty(threadData, _repl);
          if (0 /* false */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(0, _repl, _inFuncTypeExpExpToBooleanOption, tmpMeta7, mmc_mk_boolean(0 /* false */));
          tmpMeta9 = omc_BackendEquation_traverseEquationArray(threadData, _inEqns, boxvar_BackendVarTransform_replaceEquationTraverser, tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _eqns = tmpMeta10;
          _replacementPerformed = tmp12  /* pattern as ty=Boolean */;

          _outEqns = (_replacementPerformed?omc_BackendEquation_listEquation(threadData, _eqns):_inEqns);
          tmpMeta[0+0] = _outEqns;
          tmp1_c1 = _replacementPerformed;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEqns;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEqns = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outEqns;
}
modelica_metatype boxptr_BackendVarTransform_replaceEquationsArr(threadData_t *threadData, modelica_metatype _inEqns, modelica_metatype _repl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outEqns = NULL;
  _outEqns = omc_BackendVarTransform_replaceEquationsArr(threadData, _inEqns, _repl, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outEqns; ExpandableArray<BackendDAE.Equation> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outEqns;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCref;
    {
      modelica_string _idn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idn has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _idn = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(((stringEqual(_idn, _OMC_LIT15)) || (stringEqual(_idn, _OMC_LIT16))) || (stringEqual(_idn, _OMC_LIT17)))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_selfGeneratedVar(threadData_t *threadData, modelica_metatype _inCref)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_BackendVarTransform_selfGeneratedVar(threadData, _inCref);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_skipPreChangeEdgeOperator(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cr = NULL;
      modelica_string _idn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _idn has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _idn = tmpMeta7;
          _cr = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((((stringEqual(_idn, _OMC_LIT18)) || (stringEqual(_idn, _OMC_LIT19))) || (stringEqual(_idn, _OMC_LIT20))) || (stringEqual(_idn, _OMC_LIT21)))) goto tmp3_end;
          tmp1 = omc_BackendVarTransform_selfGeneratedVar(threadData, _cr);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          
          _idn = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((((stringEqual(_idn, _OMC_LIT18)) || (stringEqual(_idn, _OMC_LIT19))) || (stringEqual(_idn, _OMC_LIT20))) || (stringEqual(_idn, _OMC_LIT21)))) goto tmp3_end;
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVarTransform_skipPreChangeEdgeOperator(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVarTransform_skipPreChangeEdgeOperator(threadData, _inExp);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_skipPreOperator(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_string _idn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idn has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _idn = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_idn, _OMC_LIT18)) || (stringEqual(_idn, _OMC_LIT19)))) goto tmp3_end;
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
modelica_metatype boxptr_BackendVarTransform_skipPreOperator(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVarTransform_skipPreOperator(threadData, _inExp);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpMatrix(threadData_t *threadData, modelica_metatype _inTplExpExpBooleanLstLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outTplExpExpBooleanLstLst = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype _exp_ = NULL;
  modelica_boolean _c;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTplExpExpBooleanLstLst has no default value.
  _replacementPerformed = 0 /* false */;
  // _exp_ has no default value.
  // _c has no default value.
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp9;
    modelica_metatype _exp_loopVar = 0;
    modelica_metatype _exp;
    _exp_loopVar = _inTplExpExpBooleanLstLst;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_exp_loopVar)) {
        _exp = MMC_CAR(_exp_loopVar);
        _exp_loopVar = MMC_CDR(_exp_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        { /* match expression */
          {
            volatile mmc_switch_type tmp7;
            int tmp8;
            tmp7 = 0;
            for (; tmp7 < 1; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                /* Pattern matching succeeded */
                _exp_ = omc_BackendVarTransform_replaceExpList(threadData, _exp, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption ,&_c);

                if(_c)
                {
                  _replacementPerformed = 1 /* true */;
                }
                else
                {
                  _exp_ = _exp;
                }
                tmpMeta4 = _exp_;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            MMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar4 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _outTplExpExpBooleanLstLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outTplExpExpBooleanLstLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpMatrix(threadData_t *threadData, modelica_metatype _inTplExpExpBooleanLstLst, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outTplExpExpBooleanLstLst = NULL;
  _outTplExpExpBooleanLstLst = omc_BackendVarTransform_replaceExpMatrix(threadData, _inTplExpExpBooleanLstLst, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outTplExpExpBooleanLstLst; list<list<DAE.Exp>> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outTplExpExpBooleanLstLst;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_replaceExpCond(threadData_t *threadData, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inFuncTypeExpExpToBooleanOption;
    tmp4_2 = _inExp;
    {
      modelica_fnptr _cond;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          
          _cond = tmpMeta6;
          _e = tmp4_2;
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 1)))) (threadData, _e));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpCond(threadData_t *threadData, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_BackendVarTransform_replaceExpCond(threadData, _inFuncTypeExpExpToBooleanOption, _inExp);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceExpIters(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outIter = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype _it = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIter has no default value.
  _replacementPerformed = 0 /* false */;
  // _it has no default value.
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp20;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _inIters;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp20 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp20--;
      }
      if (tmp20 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _iter;
          {
            modelica_string _id = NULL;
            modelica_metatype _exp = NULL;
            modelica_metatype _gexp = NULL;
            modelica_metatype _ty = NULL;
            modelica_boolean _b1;
            modelica_boolean _b2;
            volatile mmc_switch_type tmp7;
            int tmp8;
            // _id has no default value.
            // _exp has no default value.
            // _gexp has no default value.
            // _ty has no default value.
            // _b1 has no default value.
            // _b2 has no default value.
            tmp7 = 0;
            for (; tmp7 < 3; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                if (!optionNone(tmpMeta11)) goto tmp6_end;
                tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 5));
                _id = tmpMeta9;
                _exp = tmpMeta10;
                _ty = tmpMeta12;
                /* Pattern matching succeeded */
                _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_b1);

                if(_b1)
                {
                  tmpMeta13 = mmc_mk_box5(3, &DAE_ReductionIterator_REDUCTIONITER__desc, _id, _exp, mmc_mk_none(), _ty);
                  _it = tmpMeta13;

                  _replacementPerformed = 1 /* true */;
                }
                else
                {
                  _it = _iter;
                }
                tmpMeta4 = _it;
                goto tmp6_done;
              }
              case 1: {
                modelica_metatype tmpMeta14;
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_metatype tmpMeta18;
                modelica_metatype tmpMeta19;
                tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                if (optionNone(tmpMeta16)) goto tmp6_end;
                tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
                tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 5));
                _id = tmpMeta14;
                _exp = tmpMeta15;
                _gexp = tmpMeta17;
                _ty = tmpMeta18;
                /* Pattern matching succeeded */
                _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_b1);

                _gexp = omc_BackendVarTransform_replaceExp(threadData, _gexp, _repl, _cond ,&_b2);

                if((_b1 || _b2))
                {
                  tmpMeta19 = mmc_mk_box5(3, &DAE_ReductionIterator_REDUCTIONITER__desc, _id, _exp, mmc_mk_some(_gexp), _ty);
                  _it = tmpMeta19;

                  _replacementPerformed = 1 /* true */;
                }
                else
                {
                  _it = _iter;
                }
                tmpMeta4 = _it;
                goto tmp6_done;
              }
              case 2: {
                
                /* Pattern matching succeeded */
                tmpMeta4 = _iter;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            MMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar6 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp20 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _outIter = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outIter;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceExpIters(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outIter = NULL;
  _outIter = omc_BackendVarTransform_replaceExpIters(threadData, _inIters, _repl, _cond, &_replacementPerformed);
  /* skip box _outIter; list<DAE.ReductionIterator> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outIter;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceExpList1(threadData_t *threadData, modelica_metatype _iexpl, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed)
{
  modelica_metatype _outExpl = NULL;
  modelica_metatype _replacementPerformed = NULL;
  modelica_metatype _acc1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _acc2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _c;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExpl has no default value.
  // _replacementPerformed has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc1 = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc2 = tmpMeta2;
  // _c has no default value.
  {
    modelica_metatype _exp;
    for (tmpMeta3 = _iexpl; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _exp = MMC_CAR(tmpMeta3);
      _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_c);

      tmpMeta4 = mmc_mk_cons(mmc_mk_boolean(_c), _acc2);
      _acc2 = tmpMeta4;

      tmpMeta5 = mmc_mk_cons(_exp, _acc1);
      _acc1 = tmpMeta5;
    }
  }

  _outExpl = listReverseInPlace(_acc1);

  _replacementPerformed = listReverseInPlace(_acc2);
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outExpl;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceExpList(threadData_t *threadData, modelica_metatype _iexpl, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outExpl = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype _exp_ = NULL;
  modelica_boolean _c;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExpl has no default value.
  _replacementPerformed = 0 /* false */;
  // _exp_ has no default value.
  // _c has no default value.
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp9;
    modelica_metatype _exp_loopVar = 0;
    modelica_metatype _exp;
    _exp_loopVar = _iexpl;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp9 = 1;
      if (!listEmpty(_exp_loopVar)) {
        _exp = MMC_CAR(_exp_loopVar);
        _exp_loopVar = MMC_CDR(_exp_loopVar);
        tmp9--;
      }
      if (tmp9 == 0) {
        { /* match expression */
          {
            volatile mmc_switch_type tmp7;
            int tmp8;
            tmp7 = 0;
            for (; tmp7 < 1; tmp7++) {
              switch (MMC_SWITCH_CAST(tmp7)) {
              case 0: {
                /* Pattern matching succeeded */
                _exp_ = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_c);

                if(_c)
                {
                  _replacementPerformed = 1 /* true */;
                }
                else
                {
                  _exp_ = _exp;
                }
                tmpMeta4 = _exp_;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            MMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar8 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  _outExpl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outExpl;
}
modelica_metatype boxptr_BackendVarTransform_replaceExpList(threadData_t *threadData, modelica_metatype _iexpl, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outExpl = NULL;
  _outExpl = omc_BackendVarTransform_replaceExpList(threadData, _iexpl, _repl, _cond, &_replacementPerformed);
  /* skip box _outExpl; list<DAE.Exp> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outExpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceCrefSubs2(threadData_t *threadData, modelica_metatype _isubs, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outSubs = NULL;
  modelica_boolean _replacementPerformed;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSubs has no default value.
  _replacementPerformed = 0 /* false */;
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp20;
    modelica_metatype _sub_loopVar = 0;
    modelica_metatype _sub;
    _sub_loopVar = _isubs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp20 = 1;
      if (!listEmpty(_sub_loopVar)) {
        _sub = MMC_CAR(_sub_loopVar);
        _sub_loopVar = MMC_CDR(_sub_loopVar);
        tmp20--;
      }
      if (tmp20 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _sub;
          {
            modelica_metatype _exp = NULL;
            modelica_boolean _c1;
            int tmp7;
            // _exp has no default value.
            // _c1 has no default value.
            {
              switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
              case 3: {
                
                /* Pattern matching succeeded */
                tmpMeta4 = _sub;
                goto tmp6_done;
              }
              case 4: {
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                modelica_boolean tmp10;
                modelica_metatype tmpMeta11;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,1,1) == 0) goto tmp6_end;
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                _exp = tmpMeta8;
                /* Pattern matching succeeded */
                _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_c1);

                _replacementPerformed = (_replacementPerformed || _c1);
                tmp10 = (modelica_boolean)_c1;
                if(tmp10)
                {
                  tmpMeta9 = mmc_mk_box2(4, &DAE_Subscript_SLICE__desc, _exp);
                  tmpMeta11 = tmpMeta9;
                }
                else
                {
                  tmpMeta11 = _sub;
                }
                tmpMeta4 = tmpMeta11;
                goto tmp6_done;
              }
              case 5: {
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                modelica_boolean tmp14;
                modelica_metatype tmpMeta15;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,2,1) == 0) goto tmp6_end;
                tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                _exp = tmpMeta12;
                /* Pattern matching succeeded */
                _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_c1);

                _replacementPerformed = (_replacementPerformed || _c1);
                tmp14 = (modelica_boolean)_c1;
                if(tmp14)
                {
                  tmpMeta13 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, _exp);
                  tmpMeta15 = tmpMeta13;
                }
                else
                {
                  tmpMeta15 = _sub;
                }
                tmpMeta4 = tmpMeta15;
                goto tmp6_done;
              }
              case 6: {
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_boolean tmp18;
                modelica_metatype tmpMeta19;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,3,1) == 0) goto tmp6_end;
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                _exp = tmpMeta16;
                /* Pattern matching succeeded */
                _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, _cond ,&_c1);

                _replacementPerformed = (_replacementPerformed || _c1);
                tmp18 = (modelica_boolean)_c1;
                if(tmp18)
                {
                  tmpMeta17 = mmc_mk_box2(6, &DAE_Subscript_WHOLE__NONEXP__desc, _exp);
                  tmpMeta19 = tmpMeta17;
                }
                else
                {
                  tmpMeta19 = _sub;
                }
                tmpMeta4 = tmpMeta19;
                goto tmp6_done;
              }
              }
              goto tmp6_end;
              tmp6_end: ;
            }
            goto goto_5;
            goto_5:;
            MMC_THROW_INTERNAL();
            goto tmp6_done;
            tmp6_done:;
          }
        }__omcQ_24tmpVar10 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp20 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  _outSubs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outSubs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceCrefSubs2(threadData_t *threadData, modelica_metatype _isubs, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outSubs = NULL;
  _outSubs = omc_BackendVarTransform_replaceCrefSubs2(threadData, _isubs, _repl, _cond, &_replacementPerformed);
  /* skip box _outSubs; list<DAE.Subscript> */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outSubs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_replaceCrefSubs(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _repl, modelica_metatype _cond, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outCr = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCr has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCref;
    {
      modelica_string _name = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr_1 = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _subs = NULL;
      modelica_metatype _subs_1 = NULL;
      modelica_boolean _c1;
      modelica_boolean _c2;
      int tmp4;
      // _name has no default value.
      // _cr has no default value.
      // _cr_1 has no default value.
      // _ty has no default value.
      // _subs has no default value.
      // _subs_1 has no default value.
      // _c1 has no default value.
      // _c2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _name = tmpMeta5;
          _ty = tmpMeta6;
          _subs = tmpMeta7;
          _cr = tmpMeta8;
          /* Pattern matching succeeded */
          _subs_1 = omc_BackendVarTransform_replaceCrefSubs2(threadData, _subs, _repl, _cond ,&_c1);

          _cr_1 = omc_BackendVarTransform_replaceCrefSubs(threadData, _cr, _repl, _cond ,&_c2);

          _subs = (_c1?_subs_1:_subs);

          _cr = (_c2?_cr_1:_cr);

          tmp10 = (modelica_boolean)(_c1 || _c2);
          if(tmp10)
          {
            tmpMeta9 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _name, _ty, _subs, _cr);
            tmpMeta11 = tmpMeta9;
          }
          else
          {
            tmpMeta11 = _inCref;
          }
          _cr = tmpMeta11;
          tmpMeta[0+0] = _cr;
          tmp1_c1 = (_c1 || _c2);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _name = tmpMeta12;
          _ty = tmpMeta13;
          _subs = tmpMeta14;
          /* Pattern matching succeeded */
          _subs = omc_BackendVarTransform_replaceCrefSubs2(threadData, _subs, _repl, _cond ,&_c1);

          tmp16 = (modelica_boolean)_c1;
          if(tmp16)
          {
            tmpMeta15 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _ty, _subs);
            tmpMeta17 = tmpMeta15;
          }
          else
          {
            tmpMeta17 = _inCref;
          }
          _cr = tmpMeta17;
          tmpMeta[0+0] = _cr;
          tmp1_c1 = _c1;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inCref;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outCr = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outCr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_replaceCrefSubs(threadData_t *threadData, modelica_metatype _inCref, modelica_metatype _repl, modelica_metatype _cond, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outCr = NULL;
  _outCr = omc_BackendVarTransform_replaceCrefSubs(threadData, _inCref, _repl, _cond, &_replacementPerformed);
  /* skip box _outCr; DAE.ComponentRef */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outCr;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceCref(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _replIn, modelica_boolean *out_changedOut)
{
  modelica_metatype _expOut = NULL;
  modelica_boolean _changedOut;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _changedOut has no default value.
  
  
  { /* match expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_hasReplacement(threadData, _replIn, _crefIn)) goto tmp3_end;
          _expOut = omc_BackendVarTransform_getReplacement(threadData, _replIn, _crefIn);
          tmpMeta[0+0] = _expOut;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _crefIn, omc_ComponentReference_crefType(threadData, _crefIn));
          _expOut = tmpMeta6;
          tmpMeta[0+0] = _expOut;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _expOut = tmpMeta[0+0];
  _changedOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_changedOut) { *out_changedOut = _changedOut; }
  return _expOut;
}
modelica_metatype boxptr_BackendVarTransform_replaceCref(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _replIn, modelica_metatype *out_changedOut)
{
  modelica_boolean _changedOut;
  modelica_metatype _expOut = NULL;
  _expOut = omc_BackendVarTransform_replaceCref(threadData, _crefIn, _replIn, &_changedOut);
  /* skip box _expOut; DAE.Exp */
  if (out_changedOut) { *out_changedOut = mmc_mk_icon(_changedOut); }
  return _expOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_getRecordElement(threadData_t *threadData, modelica_string _name, modelica_metatype _expl)
{
  modelica_metatype _cref = NULL;
  modelica_string _cref_name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = _OMC_LIT22;
  // _cref_name has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _expl; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _e;
        {
          volatile mmc_switch_type tmp4;
          int tmp5;
          tmp4 = 0;
          for (; tmp4 < 2; tmp4++) {
            switch (MMC_SWITCH_CAST(tmp4)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(stringEqual(omc_ComponentReference_crefLastIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)))), _name))) goto tmp3_end;
              _cref = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2)));

              goto _return;
              goto tmp3_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp3_done;
            }
            }
            goto tmp3_end;
            tmp3_end: ;
          }
          goto goto_2;
          goto_2:;
          MMC_THROW_INTERNAL();
          goto tmp3_done;
          tmp3_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _cref;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_addConstantRecordReplacements(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _expl, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _repl = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  // _cref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      modelica_metatype _bind = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bind has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _var;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _var = MMC_CAR(tmpMeta6);
              if(omc_DAEUtil_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5)))))
              {
                /* Pattern-matching assignment */
                tmpMeta7 = omc_DAEUtil_bindingExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))));
                if (optionNone(tmpMeta7)) goto goto_2;
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
                _bind = tmpMeta8;

                _cref = omc_BackendVarTransform_getRecordElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _expl);

                if((omc_Expression_isConst(threadData, _bind) && (!omc_ComponentReference_isWild(threadData, _cref))))
                {
                  _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cref, _bind, _inFuncTypeExpExpToBooleanOption);
                }
              }
            }
          }
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _repl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _repl;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_replaceExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_boolean *out_replacementPerformed)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _replacementPerformed;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _replacementPerformed has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inExp;
    tmp4_2 = _inVariableReplacements;
    tmp4_3 = _inFuncTypeExpExpToBooleanOption;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e2_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3_1 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _solverMethod = NULL;
      modelica_metatype _resolution = NULL;
      modelica_metatype _startInterval = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _cond = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _expl_1 = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _subs = NULL;
      modelica_metatype _path = NULL;
      modelica_boolean _c;
      modelica_boolean _c1;
      modelica_boolean _c2;
      modelica_boolean _c3;
      modelica_integer _b;
      modelica_integer _i;
      modelica_metatype _a = NULL;
      modelica_metatype _bexpl_1 = NULL;
      modelica_metatype _bexpl = NULL;
      modelica_integer _index_;
      modelica_metatype _isExpisASUB = NULL;
      modelica_metatype _reductionInfo = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _attr = NULL;
      modelica_string _ident = NULL;
      modelica_metatype _derConst = NULL;
      modelica_metatype _fields = NULL;
      modelica_metatype _dims = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _e has no default value.
      // _e1_1 has no default value.
      // _e2_1 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3_1 has no default value.
      // _e3 has no default value.
      // _solverMethod has no default value.
      // _resolution has no default value.
      // _startInterval has no default value.
      // _t has no default value.
      // _tp has no default value.
      // _repl has no default value.
      // _cond has no default value.
      // _op has no default value.
      // _expl_1 has no default value.
      // _expl has no default value.
      // _subs has no default value.
      // _path has no default value.
      // _c has no default value.
      // _c1 has no default value.
      // _c2 has no default value.
      // _c3 has no default value.
      // _b has no default value.
      // _i has no default value.
      // _a has no default value.
      // _bexpl_1 has no default value.
      // _bexpl has no default value.
      // _index_ has no default value.
      // _isExpisASUB has no default value.
      // _reductionInfo has no default value.
      // _iters has no default value.
      // _attr has no default value.
      // _ident has no default value.
      // _derConst has no default value.
      // _fields has no default value.
      // _dims has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 32; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _e = tmp4_1;
          _ident = tmpMeta7;
          _repl = tmp4_2;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_isIterationVar(threadData, _repl, _ident)) goto tmp3_end;
          tmpMeta[0+0] = _e;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _cr = tmpMeta8;
          _t = tmpMeta9;
          _repl = tmp4_2;
          _cond = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _cr = omc_BackendVarTransform_replaceCrefSubs(threadData, _cr, _repl, _cond, NULL);

          _e1 = omc_BackendVarTransform_getReplacement(threadData, _repl, _cr);

          _e2 = omc_BackendVarTransform_avoidDoubleHashLookup(threadData, _e1, _t);
          tmpMeta[0+0] = _e2;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp16;
          modelica_boolean tmp17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _cr = tmpMeta10;
          _t = tmpMeta11;
          _repl = tmp4_2;
          _cond = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          omc_Types_flattenArrayType(threadData, _t ,&_dims);

          /* Pattern-matching assignment */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp15;
            modelica_metatype _dim_loopVar = 0;
            modelica_metatype _dim;
            _dim_loopVar = _dims;
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar13;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_dim_loopVar)) {
                _dim = MMC_CAR(_dim_loopVar);
                _dim_loopVar = MMC_CDR(_dim_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar12 = mmc_mk_boolean(omc_Types_dimNotFixed(threadData, _dim));
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar13;
          }
          tmp16 = omc_List_none(threadData, tmpMeta12, boxvar_Util_id);
          if (1 /* true */ != tmp16) goto goto_2;

          _cr = omc_BackendVarTransform_replaceCrefSubs(threadData, _cr, _repl, _cond, NULL);

          /* Pattern-matching assignment */
          tmp17 = omc_BackendVarTransform_hasExtendReplacement(threadData, _repl, _cr);
          if (1 /* true */ != tmp17) goto goto_2;

          /* Pattern-matching tuple assignment */
          tmpMeta19 = omc_Expression_extendArrExp(threadData, _e, 0 /* false */, &tmp18);
          _e2 = tmpMeta19;
          if (1 /* true */ != tmp18) goto goto_2;

          _e3 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond, NULL);
          tmpMeta[0+0] = _e3;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _cr = tmpMeta20;
          _t = tmpMeta21;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 27; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta23 = omc_BackendVarTransform_replaceCrefSubs(threadData, _cr, _repl, _cond, &tmp22);
          _cr = tmpMeta23;
          if (1 /* true */ != tmp22) goto goto_2;
          tmpMeta24 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _t);
          tmpMeta[0+0] = tmpMeta24;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_boolean tmp28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta25;
          _op = tmpMeta26;
          _e2 = tmpMeta27;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 26; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp28 = (_c1 || _c2);
          if (1 /* true */ != tmp28) goto goto_2;
          tmpMeta29 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1_1, _op, _e2_1);
          tmpMeta[0+0] = tmpMeta29;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta30;
          _op = tmpMeta31;
          _e2 = tmpMeta32;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 25; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp33 = (_c1 || _c2);
          if (1 /* true */ != tmp33) goto goto_2;
          tmpMeta34 = mmc_mk_box4(12, &DAE_Exp_LBINARY__desc, _e1_1, _op, _e2_1);
          tmpMeta[0+0] = tmpMeta34;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _op = tmpMeta35;
          _e1 = tmpMeta36;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 24; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta38 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp37);
          _e1_1 = tmpMeta38;
          if (1 /* true */ != tmp37) goto goto_2;
          tmpMeta39 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _e1_1);
          tmpMeta[0+0] = tmpMeta39;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_boolean tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _op = tmpMeta40;
          _e1 = tmpMeta41;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 23; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta43 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp42);
          _e1_1 = tmpMeta43;
          if (1 /* true */ != tmp42) goto goto_2;
          tmpMeta44 = mmc_mk_box3(13, &DAE_Exp_LUNARY__desc, _op, _e1_1);
          tmpMeta[0+0] = tmpMeta44;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          modelica_metatype tmpMeta50;
          modelica_boolean tmp51;
          modelica_metatype tmpMeta52;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,5) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp49 = mmc_unbox_integer(tmpMeta48);
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _e1 = tmpMeta45;
          _op = tmpMeta46;
          _e2 = tmpMeta47;
          _index_ = tmp49  /* pattern as ty=Integer */;
          _isExpisASUB = tmpMeta50;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 22; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp51 = (_c1 || _c2);
          if (1 /* true */ != tmp51) goto goto_2;
          tmpMeta52 = mmc_mk_box6(14, &DAE_Exp_RELATION__desc, _e1_1, _op, _e2_1, mmc_mk_integer(_index_), _isExpisASUB);
          tmpMeta[0+0] = tmpMeta52;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_boolean tmp56;
          modelica_metatype tmpMeta57;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _e1 = tmpMeta53;
          _e2 = tmpMeta54;
          _e3 = tmpMeta55;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 21; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          _e3_1 = omc_BackendVarTransform_replaceExp(threadData, _e3, _repl, _cond ,&_c3);

          /* Pattern-matching assignment */
          tmp56 = ((_c1 || _c2) || _c3);
          if (1 /* true */ != tmp56) goto goto_2;
          tmpMeta57 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _e1_1, _e2_1, _e3_1);
          tmpMeta[0+0] = tmpMeta57;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          if (optionNone(tmpMeta58)) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,1,1) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          if (3 != MMC_STRLEN(tmpMeta61) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmpMeta61)) != 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta62)) goto tmp3_end;
          tmpMeta63 = MMC_CAR(tmpMeta62);
          tmpMeta64 = MMC_CDR(tmpMeta62);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,6,2) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          if (!listEmpty(tmpMeta64)) goto tmp3_end;
          
          _derConst = tmpMeta59;
          _cr = tmpMeta65;
          _cond = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta66 = omc_UnorderedMap_getOrFail(threadData, _cr, _derConst);
          if (optionNone(tmpMeta66)) goto goto_2;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 1));
          _e = tmpMeta67;

          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _inVariableReplacements, _cond, NULL);
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_boolean tmp74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _path = tmpMeta68;
          _expl = tmpMeta69;
          _attr = tmpMeta70;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 19; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _cr = omc_ComponentReference_toExpCref(threadData, omc_AbsynUtil_pathToCref(threadData, _path));

          if(omc_BackendVarTransform_hasReplacement(threadData, _repl, _cr))
          {
            _e1_1 = omc_BackendVarTransform_getReplacement(threadData, _repl, _cr);

            /* Pattern-matching assignment */
            tmpMeta71 = _e1_1;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta71,15,4) == 0) goto goto_2;
            tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 2));
            tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta71), 3));
            _path = tmpMeta72;
            _expl_1 = tmpMeta73;

            _expl = listAppend(_expl_1, _expl);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta75 = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond, &tmp74);
          _expl_1 = tmpMeta75;
          if (1 /* true */ != tmp74) goto goto_2;
          tmpMeta76 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _expl_1, _attr);
          tmpMeta[0+0] = tmpMeta76;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_boolean tmp81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,4) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _path = tmpMeta77;
          _expl = tmpMeta78;
          _fields = tmpMeta79;
          _t = tmpMeta80;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 18; /* Pattern matching succeeded; we may skip some cases if we fail */
          _repl = omc_BackendVarTransform_addConstantRecordReplacements(threadData, _t, _expl, _repl, _inFuncTypeExpExpToBooleanOption);

          /* Pattern-matching tuple assignment */
          tmpMeta82 = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond, &tmp81);
          _expl = tmpMeta82;
          if (1 /* true */ != tmp81) goto goto_2;
          tmpMeta83 = mmc_mk_box5(17, &DAE_Exp_RECORD__desc, _path, _expl, _fields, _t);
          tmpMeta[0+0] = tmpMeta83;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_boolean tmp89;
          modelica_metatype tmpMeta90;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta84,1,2) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 3));
          
          _e = tmpMeta85;
          _resolution = tmpMeta86;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 17; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _cond ,&_c1);

          _resolution = omc_BackendVarTransform_replaceExp(threadData, _resolution, _repl, _cond ,&_c2);

          _c3 = (_c1 || _c2);
          tmp89 = (modelica_boolean)_c3;
          if(tmp89)
          {
            tmpMeta87 = mmc_mk_box3(4, &DAE_ClockKind_RATIONAL__CLOCK__desc, _e, _resolution);
            tmpMeta88 = mmc_mk_box2(7, &DAE_Exp_CLKCONST__desc, tmpMeta87);
            tmpMeta90 = tmpMeta88;
          }
          else
          {
            tmpMeta90 = _inExp;
          }
          tmpMeta[0+0] = tmpMeta90;
          tmp1_c1 = _c3;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_boolean tmp95;
          modelica_metatype tmpMeta96;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta91,2,1) == 0) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta91), 2));
          
          _e = tmpMeta92;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 16; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _cond ,&_c1);
          tmp95 = (modelica_boolean)_c1;
          if(tmp95)
          {
            tmpMeta93 = mmc_mk_box2(5, &DAE_ClockKind_REAL__CLOCK__desc, _e);
            tmpMeta94 = mmc_mk_box2(7, &DAE_Exp_CLKCONST__desc, tmpMeta93);
            tmpMeta96 = tmpMeta94;
          }
          else
          {
            tmpMeta96 = _inExp;
          }
          tmpMeta[0+0] = tmpMeta96;
          tmp1_c1 = _c1;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_boolean tmp102;
          modelica_metatype tmpMeta103;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta97,3,2) == 0) goto tmp3_end;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 2));
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta97), 3));
          
          _e = tmpMeta98;
          _startInterval = tmpMeta99;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _cond ,&_c1);

          _startInterval = omc_BackendVarTransform_replaceExp(threadData, _startInterval, _repl, _cond ,&_c2);

          _c3 = (_c1 || _c2);
          tmp102 = (modelica_boolean)_c3;
          if(tmp102)
          {
            tmpMeta100 = mmc_mk_box3(6, &DAE_ClockKind_EVENT__CLOCK__desc, _e, _startInterval);
            tmpMeta101 = mmc_mk_box2(7, &DAE_Exp_CLKCONST__desc, tmpMeta100);
            tmpMeta103 = tmpMeta101;
          }
          else
          {
            tmpMeta103 = _inExp;
          }
          tmpMeta[0+0] = tmpMeta103;
          tmp1_c1 = _c3;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_boolean tmp109;
          modelica_metatype tmpMeta110;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta104,4,2) == 0) goto tmp3_end;
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta104), 2));
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta104), 3));
          
          _e = tmpMeta105;
          _solverMethod = tmpMeta106;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, _cond ,&_c1);

          _solverMethod = omc_BackendVarTransform_replaceExp(threadData, _solverMethod, _repl, _cond ,&_c2);

          _c3 = (_c1 || _c2);
          tmp109 = (modelica_boolean)_c3;
          if(tmp109)
          {
            tmpMeta107 = mmc_mk_box3(7, &DAE_ClockKind_SOLVER__CLOCK__desc, _e, _solverMethod);
            tmpMeta108 = mmc_mk_box2(7, &DAE_Exp_CLKCONST__desc, tmpMeta107);
            tmpMeta110 = tmpMeta108;
          }
          else
          {
            tmpMeta110 = _inExp;
          }
          tmpMeta[0+0] = tmpMeta110;
          tmp1_c1 = _c3;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_boolean tmp115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,4) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _e = tmp4_1;
          _path = tmpMeta111;
          _expl = tmpMeta112;
          _tp = tmpMeta113;
          _t = tmpMeta114;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta116 = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond, &tmp115);
          _expl_1 = tmpMeta116;
          if (1 /* true */ != tmp115) goto goto_2;
          tmpMeta117 = mmc_mk_box5(18, &DAE_Exp_PARTEVALFUNCTION__desc, _path, _expl_1, _tp, _t);
          tmpMeta[0+0] = tmpMeta117;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_integer tmp120;
          modelica_metatype tmpMeta121;
          modelica_boolean tmp122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta118 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp120 = mmc_unbox_integer(tmpMeta119);
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _tp = tmpMeta118;
          _c = tmp120  /* pattern as ty=Boolean */;
          _expl = tmpMeta121;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta123 = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond, &tmp122);
          _expl_1 = tmpMeta123;
          if (1 /* true */ != tmp122) goto goto_2;
          tmpMeta124 = mmc_mk_box4(19, &DAE_Exp_ARRAY__desc, _tp, mmc_mk_boolean(_c), _expl_1);
          tmpMeta[0+0] = tmpMeta124;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_integer tmp127;
          modelica_metatype tmpMeta128;
          modelica_boolean tmp129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,3) == 0) goto tmp3_end;
          tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp127 = mmc_unbox_integer(tmpMeta126);
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _t = tmpMeta125;
          _b = tmp127  /* pattern as ty=Integer */;
          _bexpl = tmpMeta128;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta130 = omc_BackendVarTransform_replaceExpMatrix(threadData, _bexpl, _repl, _cond, &tmp129);
          _bexpl_1 = tmpMeta130;
          if (1 /* true */ != tmp129) goto goto_2;
          tmpMeta131 = mmc_mk_box4(20, &DAE_Exp_MATRIX__desc, _t, mmc_mk_integer(_b), _bexpl_1);
          tmpMeta[0+0] = tmpMeta131;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_boolean tmp136;
          modelica_metatype tmpMeta137;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta134 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta134)) goto tmp3_end;
          tmpMeta135 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _e = tmp4_1;
          _tp = tmpMeta132;
          _e1 = tmpMeta133;
          _e2 = tmpMeta135;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp136 = (_c1 || _c2);
          if (1 /* true */ != tmp136) goto goto_2;
          tmpMeta137 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, _tp, _e1_1, mmc_mk_none(), _e2_1);
          tmpMeta[0+0] = tmpMeta137;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_boolean tmp143;
          modelica_metatype tmpMeta144;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta140)) goto tmp3_end;
          tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta140), 1));
          tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _e = tmp4_1;
          _tp = tmpMeta138;
          _e1 = tmpMeta139;
          _e3 = tmpMeta141;
          _e2 = tmpMeta142;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          _e3_1 = omc_BackendVarTransform_replaceExp(threadData, _e3, _repl, _cond ,&_c3);

          /* Pattern-matching assignment */
          tmp143 = ((_c1 || _c2) || _c3);
          if (1 /* true */ != tmp143) goto goto_2;
          tmpMeta144 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, _tp, _e1_1, mmc_mk_some(_e3_1), _e2_1);
          tmpMeta[0+0] = tmpMeta144;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta145;
          modelica_boolean tmp146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmp4_1;
          _expl = tmpMeta145;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta147 = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond, &tmp146);
          _expl_1 = tmpMeta147;
          if (1 /* true */ != tmp146) goto goto_2;
          tmpMeta148 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expl_1);
          tmpMeta[0+0] = tmpMeta148;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          modelica_boolean tmp151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,2) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta150 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _tp = tmpMeta149;
          _e1 = tmpMeta150;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta152 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp151);
          _e1_1 = tmpMeta152;
          if (1 /* true */ != tmp151) goto goto_2;
          tmpMeta153 = mmc_mk_box3(23, &DAE_Exp_CAST__desc, _tp, _e1_1);
          tmpMeta[0+0] = tmpMeta153;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          modelica_boolean tmp156;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,2) == 0) goto tmp3_end;
          tmpMeta154 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _e1 = tmpMeta154;
          _subs = tmpMeta155;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _expl = omc_List_map(threadData, _subs, boxvar_Expression_getSubscriptExp);

          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _expl = omc_BackendVarTransform_replaceExpList(threadData, _expl, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp156 = (_c1 || _c2);
          if (1 /* true */ != tmp156) goto goto_2;
          tmpMeta[0+0] = omc_Expression_makeASUB(threadData, _e1_1, _expl);
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_integer tmp159;
          modelica_metatype tmpMeta160;
          modelica_boolean tmp161;
          modelica_boolean tmp162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,3) == 0) goto tmp3_end;
          tmpMeta157 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta158 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp159 = mmc_unbox_integer(tmpMeta158);
          tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e1 = tmpMeta157;
          _i = tmp159  /* pattern as ty=Integer */;
          _tp = tmpMeta160;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp161 = omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e1);
          if (1 /* true */ != tmp161) goto goto_2;

          /* Pattern-matching tuple assignment */
          tmpMeta163 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp162);
          _e1_1 = tmpMeta163;
          if (1 /* true */ != tmp162) goto goto_2;
          tmpMeta164 = mmc_mk_box4(25, &DAE_Exp_TSUB__desc, _e1_1, mmc_mk_integer(_i), _tp);
          tmpMeta[0+0] = tmpMeta164;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_boolean tmp168;
          modelica_metatype tmpMeta169;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,24,2) == 0) goto tmp3_end;
          tmpMeta165 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta166 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta166)) goto tmp3_end;
          tmpMeta167 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta166), 1));
          
          _e = tmp4_1;
          _e1 = tmpMeta165;
          _e2 = tmpMeta167;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond ,&_c1);

          _e2_1 = omc_BackendVarTransform_replaceExp(threadData, _e2, _repl, _cond ,&_c2);

          /* Pattern-matching assignment */
          tmp168 = (_c1 || _c2);
          if (1 /* true */ != tmp168) goto goto_2;
          tmpMeta169 = mmc_mk_box3(27, &DAE_Exp_SIZE__desc, _e1_1, mmc_mk_some(_e2_1));
          tmpMeta[0+0] = tmpMeta169;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          modelica_metatype tmpMeta172;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          tmpMeta170 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta171 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _a = tmpMeta170;
          _tp = tmpMeta171;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          fputs(MMC_STRINGDATA(_OMC_LIT23),stdout);
          tmpMeta172 = mmc_mk_box3(28, &DAE_Exp_CODE__desc, _a, _tp);
          tmpMeta[0+0] = tmpMeta172;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta175;
          modelica_boolean tmp176;
          modelica_metatype tmpMeta177;
          modelica_metatype tmpMeta178;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,27,3) == 0) goto tmp3_end;
          tmpMeta173 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta174 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta175 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmp4_1;
          _reductionInfo = tmpMeta173;
          _e1 = tmpMeta174;
          _iters = tmpMeta175;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          _e1_1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, NULL);

          /* Pattern-matching tuple assignment */
          tmpMeta177 = omc_BackendVarTransform_replaceExpIters(threadData, _iters, _repl, _cond, &tmp176);
          _iters = tmpMeta177;
          if (1 /* true */ != tmp176) goto goto_2;
          tmpMeta178 = mmc_mk_box4(30, &DAE_Exp_REDUCTION__desc, _reductionInfo, _e1_1, _iters);
          tmpMeta[0+0] = tmpMeta178;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta179;
          modelica_boolean tmp180;
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,34,1) == 0) goto tmp3_end;
          tmpMeta179 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmp4_1;
          _e1 = tmpMeta179;
          _repl = tmp4_2;
          _cond = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta181 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp180);
          _e1_1 = tmpMeta181;
          if (1 /* true */ != tmp180) goto goto_2;
          tmpMeta182 = mmc_mk_box2(37, &DAE_Exp_BOX__desc, _e1_1);
          tmpMeta[0+0] = tmpMeta182;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 30: {
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          modelica_boolean tmp185;
          modelica_metatype tmpMeta186;
          modelica_metatype tmpMeta187;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,35,2) == 0) goto tmp3_end;
          tmpMeta183 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta184 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmp4_1;
          _e1 = tmpMeta183;
          _tp = tmpMeta184;
          _repl = tmp4_2;
          _cond = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVarTransform_replaceExpCond(threadData, _cond, _e)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta186 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, _cond, &tmp185);
          _e1_1 = tmpMeta186;
          if (1 /* true */ != tmp185) goto goto_2;
          tmpMeta187 = mmc_mk_box3(38, &DAE_Exp_UNBOX__desc, _e1_1, _tp);
          tmpMeta[0+0] = tmpMeta187;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 31: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 32) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _replacementPerformed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_replacementPerformed) { *out_replacementPerformed = _replacementPerformed; }
  return _outExp;
}
modelica_metatype boxptr_BackendVarTransform_replaceExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inVariableReplacements, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_replacementPerformed)
{
  modelica_boolean _replacementPerformed;
  modelica_metatype _outExp = NULL;
  _outExp = omc_BackendVarTransform_replaceExp(threadData, _inExp, _inVariableReplacements, _inFuncTypeExpExpToBooleanOption, &_replacementPerformed);
  /* skip box _outExp; DAE.Exp */
  if (out_replacementPerformed) { *out_replacementPerformed = mmc_mk_icon(_replacementPerformed); }
  return _outExp;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_isReplacementEmpty(threadData_t *threadData, modelica_metatype _repl)
{
  modelica_boolean _empty;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _empty = (omc_UnorderedMap_none(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))), boxvar_isSome) && isNone((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 6)))));
  _return: OMC_LABEL_UNUSED
  return _empty;
}
modelica_metatype boxptr_BackendVarTransform_isReplacementEmpty(threadData_t *threadData, modelica_metatype _repl)
{
  modelica_boolean _empty;
  modelica_metatype out_empty;
  _empty = omc_BackendVarTransform_isReplacementEmpty(threadData, _repl);
  out_empty = mmc_mk_icon(_empty);
  return out_empty;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_avoidDoubleHashLookup(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inType)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,8,0) == 0) goto tmp3_end;
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Expression_makeCrefExp(threadData, _cr, _inType);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inExp;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_hasExtendReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src)
{
  modelica_boolean _exists;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exists has no default value.
  _exists = omc_UnorderedSet_contains(threadData, omc_ComponentReference_crefStripLastSubs(threadData, _src), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 4))));
  _return: OMC_LABEL_UNUSED
  return _exists;
}
modelica_metatype boxptr_BackendVarTransform_hasExtendReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src)
{
  modelica_boolean _exists;
  modelica_metatype out_exists;
  _exists = omc_BackendVarTransform_hasExtendReplacement(threadData, _repl, _src);
  out_exists = mmc_mk_icon(_exists);
  return out_exists;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_getCrefExpTableEntries(threadData_t *threadData, modelica_metatype _table, modelica_metatype *out_dsts)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype _dsts = NULL;
  modelica_metatype _opt_dsts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefs has no default value.
  // _dsts has no default value.
  // _opt_dsts has no default value.
  _crefs = omc_UnorderedMap_keyList(threadData, _table);

  _opt_dsts = omc_UnorderedMap_valueList(threadData, _table);

  _opt_dsts = omc_List_filterOnTrueSync(threadData, _opt_dsts, boxvar_isSome, _crefs ,&_crefs);

  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp4;
    modelica_metatype _d_loopVar = 0;
    modelica_metatype _d;
    _d_loopVar = _opt_dsts;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar15;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_d_loopVar)) {
        _d = MMC_CAR(_d_loopVar);
        _d_loopVar = MMC_CDR(_d_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar14 = omc_Util_getOption(threadData, _d);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar15;
  }
  _dsts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_dsts) { *out_dsts = _dsts; }
  return _crefs;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_getAllReplacements(threadData_t *threadData, modelica_metatype _repl, modelica_metatype *out_dsts)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype _dsts = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefs has no default value.
  // _dsts has no default value.
  _crefs = omc_BackendVarTransform_getCrefExpTableEntries(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))) ,&_dsts);
  _return: OMC_LABEL_UNUSED
  if (out_dsts) { *out_dsts = _dsts; }
  return _crefs;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_hasNoReplacement(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _repl)
{
  modelica_boolean _bOut;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  _bOut = isNone(omc_UnorderedMap_getOrDefault(threadData, _inComponentRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))), mmc_mk_none()));
  _return: OMC_LABEL_UNUSED
  return _bOut;
}
modelica_metatype boxptr_BackendVarTransform_hasNoReplacement(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _repl)
{
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  _bOut = omc_BackendVarTransform_hasNoReplacement(threadData, _inComponentRef, _repl);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

DLLDirection
modelica_boolean omc_BackendVarTransform_hasReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inComponentRef)
{
  modelica_boolean _bOut;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  _bOut = isSome(omc_UnorderedMap_getOrDefault(threadData, _inComponentRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))), mmc_mk_none()));
  _return: OMC_LABEL_UNUSED
  return _bOut;
}
modelica_metatype boxptr_BackendVarTransform_hasReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inComponentRef)
{
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  _bOut = omc_BackendVarTransform_hasReplacement(threadData, _repl, _inComponentRef);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_getReplacement(threadData_t *threadData, modelica_metatype _inVariableReplacements, modelica_metatype _inComponentRef)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_UnorderedMap_getOrFail(threadData, _inComponentRef, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVariableReplacements), 2))));
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _outExp = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_addDerConstRepl(threadData_t *threadData, modelica_metatype _inComponentRef, modelica_metatype _inExp, modelica_metatype __omcQ_24in_5Frepl)
{
  modelica_metatype _repl = NULL;
  modelica_metatype _derConst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  // _derConst has no default value.
  if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 6)))))
  {
    omc_UnorderedMap_add(threadData, _inComponentRef, mmc_mk_some(_inExp), omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 6)))));
  }
  else
  {
    _derConst = omc_BackendVarTransform_newCrefExpTable(threadData);

    omc_UnorderedMap_add(threadData, _inComponentRef, mmc_mk_some(_inExp), _derConst);

    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_repl), 7*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[6] = mmc_mk_some(_derConst);
    _repl = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _repl;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendVarTransform_isIterationVar(threadData_t *threadData, modelica_metatype _repl, modelica_string _inVar)
{
  modelica_boolean _is;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _is has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _repl;
    {
      modelica_metatype _iv = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iv has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _iv = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = listMember(_inVar, _iv);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _is = tmp1;
  _return: OMC_LABEL_UNUSED
  return _is;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendVarTransform_isIterationVar(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inVar)
{
  modelica_boolean _is;
  modelica_metatype out_is;
  _is = omc_BackendVarTransform_isIterationVar(threadData, _repl, _inVar);
  out_is = mmc_mk_icon(_is);
  return out_is;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_removeIterationVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Frepl, modelica_string _inVar)
{
  modelica_metatype _repl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_repl), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[5] = omc_List_deleteMemberOnTrue(threadData, _inVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 5))), boxvar_stringEq, NULL);
  _repl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _repl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addIterationVar(threadData_t *threadData, modelica_metatype __omcQ_24in_5Frepl, modelica_string _inVar)
{
  modelica_metatype _repl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  tmpMeta2 = mmc_mk_cons(_inVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 5))));
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_repl), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[5] = tmpMeta2;
  _repl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _repl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addExtendReplacement(threadData_t *threadData, modelica_metatype _extendrepl, modelica_metatype _cr, modelica_metatype _preCr)
{
  modelica_metatype _outExtendrepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtendrepl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _cr;
    tmp4_2 = _preCr;
    {
      modelica_metatype _subcr = NULL;
      modelica_metatype _precr = NULL;
      modelica_metatype _precr1 = NULL;
      modelica_metatype _pcr = NULL;
      modelica_metatype _precrn = NULL;
      modelica_metatype _precrn1 = NULL;
      modelica_string _ident = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _subscriptLst = NULL;
      modelica_metatype _varLst = NULL;
      modelica_metatype _crefs = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _subcr has no default value.
      // _precr has no default value.
      // _precr1 has no default value.
      // _pcr has no default value.
      // _precrn has no default value.
      // _precrn1 has no default value.
      // _ident has no default value.
      // _ty has no default value.
      // _subscriptLst has no default value.
      // _varLst has no default value.
      // _crefs has no default value.
      // _s has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,2) == 0) goto tmp3_end;
          
          _ident = tmpMeta6;
          _ty = tmpMeta7;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta8);

          omc_UnorderedSet_addUnique(threadData, _precr, _extendrepl);
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp3_end;
          
          _pcr = tmpMeta9;
          _ident = tmpMeta10;
          _ty = tmpMeta11;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta12);

          _precr1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _precr);

          omc_UnorderedSet_addUnique(threadData, _precr1, _extendrepl);
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,9,4) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,3,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          
          _ident = tmpMeta13;
          _ty = tmpMeta14;
          _varLst = tmpMeta16;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta17);

          omc_UnorderedSet_addUnique(threadData, _precr, _extendrepl);

          _crefs = omc_List_map(threadData, _varLst, boxvar_ComponentReference_creffromVar);
          tmpMeta1 = omc_List_fold1r(threadData, _crefs, boxvar_BackendVarTransform_addExtendReplacement, mmc_mk_some(_precr), _extendrepl);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,9,4) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,3,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
          
          _pcr = tmpMeta18;
          _ident = tmpMeta19;
          _ty = tmpMeta20;
          _varLst = tmpMeta22;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta23);

          _precr1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _cr);

          omc_UnorderedSet_addUnique(threadData, _precr1, _extendrepl);

          _crefs = omc_List_map(threadData, _varLst, boxvar_ComponentReference_creffromVar);
          tmpMeta1 = omc_List_fold1r(threadData, _crefs, boxvar_BackendVarTransform_addExtendReplacement, mmc_mk_some(_precr1), _extendrepl);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (listEmpty(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          _ident = tmpMeta24;
          _ty = tmpMeta25;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta29);

          omc_UnorderedSet_addUnique(threadData, _precr, _extendrepl);
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (listEmpty(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          _pcr = tmpMeta30;
          _ident = tmpMeta31;
          _ty = tmpMeta32;
          /* Pattern matching succeeded */
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta36);

          _precr1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _precr);

          omc_UnorderedSet_addUnique(threadData, _precr1, _extendrepl);
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _ident = tmpMeta37;
          _ty = tmpMeta38;
          _subscriptLst = tmpMeta39;
          _subcr = tmpMeta40;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta41);

          omc_UnorderedSet_addUnique(threadData, _precr, _extendrepl);

          _precrn = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);
          tmpMeta1 = omc_BackendVarTransform_addExtendReplacement(threadData, _extendrepl, _subcr, mmc_mk_some(_precrn));
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _ident = tmpMeta42;
          _ty = tmpMeta43;
          _subscriptLst = tmpMeta44;
          _subcr = tmpMeta45;
          _pcr = tmpMeta46;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          _precr = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, tmpMeta47);

          _precr1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _precr);

          omc_UnorderedSet_addUnique(threadData, _precr1, _extendrepl);

          _precrn = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);

          _precrn1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _precrn);
          tmpMeta1 = omc_BackendVarTransform_addExtendReplacement(threadData, _extendrepl, _subcr, mmc_mk_some(_precrn1));
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _ident = tmpMeta48;
          _ty = tmpMeta49;
          _subscriptLst = tmpMeta50;
          _subcr = tmpMeta51;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _precrn = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);
          tmpMeta1 = omc_BackendVarTransform_addExtendReplacement(threadData, _extendrepl, _subcr, mmc_mk_some(_precrn));
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _ident = tmpMeta52;
          _ty = tmpMeta53;
          _subscriptLst = tmpMeta54;
          _subcr = tmpMeta55;
          _pcr = tmpMeta56;
          /* Pattern matching succeeded */
          _precrn = omc_ComponentReference_makeCrefIdent(threadData, _ident, _ty, _subscriptLst);

          _precrn1 = omc_ComponentReference_joinCrefs(threadData, _pcr, _precrn);
          tmpMeta1 = omc_BackendVarTransform_addExtendReplacement(threadData, _extendrepl, _subcr, mmc_mk_some(_precrn1));
          goto tmp3_done;
        }
        case 11: {
          modelica_boolean tmp57;
          modelica_metatype tmpMeta58;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp57 = omc_Flags_isSet(threadData, _OMC_LIT10);
          if (1 /* true */ != tmp57) goto goto_2;

          _s = omc_ComponentReference_printComponentRefStr(threadData, _cr);

          tmpMeta58 = stringAppend(_OMC_LIT25,_s);
          omc_Debug_trace(threadData, tmpMeta58);
          tmpMeta1 = _extendrepl;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 12) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExtendrepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExtendrepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive2(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype _outSrc = NULL;
  modelica_metatype _outDst = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  // _outSrc has no default value.
  // _outDst has no default value.
  
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _dst_1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dst_1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _dst_1 = omc_BackendVarTransform_replaceExp(threadData, _dst, _repl, _inFuncTypeExpExpToBooleanOption, NULL);
          tmpMeta[0+0] = _repl;
          tmpMeta[0+1] = _src;
          tmpMeta[0+2] = _dst_1;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _repl;
          tmpMeta[0+1] = _src;
          tmpMeta[0+2] = _dst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outRepl = tmpMeta[0+0];
  _outSrc = tmpMeta[0+1];
  _outDst = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outSrc) { *out_outSrc = _outSrc; }
  if (out_outDst) { *out_outDst = _outDst; }
  return _outRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive12(threadData_t *threadData, modelica_metatype _lst, modelica_metatype _repl, modelica_metatype _singleRepl, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype _inSet)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _lst;
    {
      modelica_metatype _crDst = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _crs = NULL;
      modelica_metatype _repl1 = NULL;
      modelica_metatype _set = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crDst has no default value.
      // _cr has no default value.
      // _crs has no default value.
      // _repl1 has no default value.
      // _set has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _repl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _cr = tmpMeta6;
          _crs = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_BaseHashSet_has(threadData, _cr, _inSet);
          if (0 /* false */ != tmp8) goto goto_2;

          _set = omc_BaseHashSet_add(threadData, _cr, _inSet);

          /* Pattern-matching assignment */
          tmpMeta9 = omc_UnorderedMap_getOrFail(threadData, _cr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))));
          if (optionNone(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          _crDst = tmpMeta10;

          _crDst = omc_BackendVarTransform_replaceExp(threadData, _crDst, _singleRepl, _inFuncTypeExpExpToBooleanOption, NULL);

          _repl1 = omc_BackendVarTransform_addReplacementNoTransitive(threadData, _repl, _cr, _crDst);
          tmpMeta1 = omc_BackendVarTransform_makeTransitive12(threadData, _crs, _repl1, _singleRepl, _inFuncTypeExpExpToBooleanOption, _set);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _crs = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendVarTransform_makeTransitive12(threadData, _crs, _repl, _singleRepl, _inFuncTypeExpExpToBooleanOption, _inSet);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive1(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype _outSrc = NULL;
  modelica_metatype _outDst = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  // _outSrc has no default value.
  // _outDst has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _repl;
    {
      modelica_metatype _lst = NULL;
      modelica_metatype _repl_1 = NULL;
      modelica_metatype _singleRepl = NULL;
      modelica_metatype _invHt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lst has no default value.
      // _repl_1 has no default value.
      // _singleRepl has no default value.
      // _invHt has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _invHt = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_UnorderedMap_getOrFail(threadData, _src, _invHt);
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _lst = tmpMeta8;

          _singleRepl = omc_BackendVarTransform_addReplacementNoTransitive(threadData, omc_BackendVarTransform_emptyReplacementsSized(threadData, ((modelica_integer) 53)), _src, _dst);

          _repl_1 = omc_BackendVarTransform_makeTransitive12(threadData, _lst, _repl, _singleRepl, _inFuncTypeExpExpToBooleanOption, omc_HashSet_emptyHashSet(threadData));
          tmpMeta[0+0] = _repl_1;
          tmpMeta[0+1] = _src;
          tmpMeta[0+2] = _dst;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _repl;
          tmpMeta[0+1] = _src;
          tmpMeta[0+2] = _dst;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outRepl = tmpMeta[0+0];
  _outSrc = tmpMeta[0+1];
  _outDst = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outSrc) { *out_outSrc = _outSrc; }
  if (out_outDst) { *out_outDst = _outDst; }
  return _outRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_makeTransitive(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _src, modelica_metatype _dst, modelica_metatype _inFuncTypeExpExpToBooleanOption, modelica_metatype *out_outSrc, modelica_metatype *out_outDst)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype _outSrc = NULL;
  modelica_metatype _outDst = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  // _outSrc has no default value.
  // _outDst has no default value.
  
  
  
  { /* match expression */
    {
      modelica_metatype _repl_1 = NULL;
      modelica_metatype _repl_2 = NULL;
      modelica_metatype _src_1 = NULL;
      modelica_metatype _src_2 = NULL;
      modelica_metatype _dst_1 = NULL;
      modelica_metatype _dst_2 = NULL;
      modelica_metatype _dst_3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl_1 has no default value.
      // _repl_2 has no default value.
      // _src_1 has no default value.
      // _src_2 has no default value.
      // _dst_1 has no default value.
      // _dst_2 has no default value.
      // _dst_3 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _repl_1 = omc_BackendVarTransform_makeTransitive1(threadData, _repl, _src, _dst, _inFuncTypeExpExpToBooleanOption ,&_src_1 ,&_dst_1);

          _repl_2 = omc_BackendVarTransform_makeTransitive2(threadData, _repl_1, _src_1, _dst_1, _inFuncTypeExpExpToBooleanOption ,&_src_2 ,&_dst_2);

          _dst_3 = omc_ExpressionSimplify_simplify1(threadData, _dst_2, NULL);
          tmpMeta[0+0] = _repl_2;
          tmpMeta[0+1] = _src_2;
          tmpMeta[0+2] = _dst_3;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outRepl = tmpMeta[0+0];
  _outSrc = tmpMeta[0+1];
  _outDst = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outSrc) { *out_outSrc = _outSrc; }
  if (out_outDst) { *out_outDst = _outDst; }
  return _outRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementInv2(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinvHt, modelica_metatype _dst, modelica_metatype _src)
{
  modelica_metatype _invHt = NULL;
  modelica_metatype _srcs_opt = NULL;
  modelica_metatype _srcs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _invHt = __omcQ_24in_5FinvHt;
  // _srcs_opt has no default value.
  // _srcs has no default value.
  _srcs_opt = omc_UnorderedMap_getOrDefault(threadData, _dst, _invHt, mmc_mk_none());

  if(isSome(_srcs_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _srcs_opt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _srcs = tmpMeta2;

    tmpMeta3 = mmc_mk_cons(_src, _srcs);
    _srcs = tmpMeta3;

    omc_UnorderedMap_add(threadData, _dst, mmc_mk_some(_srcs), _invHt);
  }
  else
  {
    tmpMeta4 = mmc_mk_cons(_src, MMC_REFSTRUCTLIT(mmc_nil));
    omc_UnorderedMap_add(threadData, _dst, mmc_mk_some(tmpMeta4), _invHt);
  }
  _return: OMC_LABEL_UNUSED
  return _invHt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementInv(threadData_t *threadData, modelica_metatype __omcQ_24in_5FinvHt, modelica_metatype _src, modelica_metatype _dst)
{
  modelica_metatype _invHt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _invHt = __omcQ_24in_5FinvHt;
  {
    modelica_metatype _d;
    for (tmpMeta1 = omc_Expression_extractCrefsFromExp(threadData, _dst); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      _invHt = omc_BackendVarTransform_addReplacementInv2(threadData, _invHt, _d, _src);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _invHt;
}

PROTECTED_FUNCTION_STATIC void omc_BackendVarTransform_removeReplacementInv(threadData_t *threadData, modelica_metatype _invHt, modelica_metatype _dst)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _d;
    for (tmpMeta1 = omc_Expression_extractCrefsFromExp(threadData, _dst); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      omc_UnorderedMap_tryUpdate(threadData, _d, mmc_mk_none(), _invHt);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendVarTransform_addReplacementNoTransitive(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inSrc, modelica_metatype _inDst)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _repl;
    tmp4_2 = _inSrc;
    tmp4_3 = _inDst;
    {
      modelica_metatype _src = NULL;
      modelica_metatype _dst = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _eht = NULL;
      modelica_metatype _invHt = NULL;
      modelica_metatype _iv = NULL;
      modelica_metatype _derConst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _src has no default value.
      // _dst has no default value.
      // _ht has no default value.
      // _eht has no default value.
      // _invHt has no default value.
      // _iv has no default value.
      // _derConst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _ht = tmpMeta6;
          _invHt = tmpMeta7;
          _eht = tmpMeta8;
          _iv = tmpMeta9;
          _derConst = tmpMeta10;
          _src = tmp4_2;
          _dst = tmp4_3;
          /* Pattern matching succeeded */
          omc_UnorderedMap_add(threadData, _src, mmc_mk_some(_dst), _ht);

          _invHt = omc_BackendVarTransform_addReplacementInv(threadData, _invHt, _src, _dst);

          _eht = omc_BackendVarTransform_addExtendReplacement(threadData, _eht, _src, mmc_mk_none());
          tmpMeta11 = mmc_mk_box6(3, &BackendVarTransform_VariableReplacements_REPLACEMENTS__desc, _ht, _invHt, _eht, _iv, _derConst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT26,omc_ComponentReference_printComponentRefStr(threadData, _inSrc));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT27);
          tmpMeta14 = stringAppend(tmpMeta13,omc_ExpressionDump_printExpStr(threadData, _inDst));
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT4);
          fputs(MMC_STRINGDATA(tmpMeta15),stdout);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRepl;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_performReplacementsEqSystem(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inRepl)
{
  modelica_metatype _outEqs = NULL;
  modelica_metatype _eqArr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEqs = _inEqs;
  // _eqArr has no default value.
  _eqArr = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqs), 3)));

  omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqs), 2))), boxvar_BackendVarTransform_replaceVarTraverser, _inRepl, NULL);

  _eqArr = omc_BackendVarTransform_replaceEquationsArr(threadData, _eqArr, _inRepl, mmc_mk_none(), NULL);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_outEqs), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _eqArr;
  _outEqs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEqs;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_addReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inSrc, modelica_metatype _inDst, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inSrc;
    tmp4_2 = _inDst;
    {
      modelica_metatype _src = NULL;
      modelica_metatype _dst = NULL;
      modelica_metatype _ht = NULL;
      modelica_metatype _eht = NULL;
      modelica_metatype _invHt = NULL;
      modelica_metatype _iv = NULL;
      modelica_string _s = NULL;
      modelica_metatype _derConst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _src has no default value.
      // _dst has no default value.
      // _ht has no default value.
      // _eht has no default value.
      // _invHt has no default value.
      // _iv has no default value.
      // _s has no default value.
      // _derConst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          _src = tmp4_1;
          _dst = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = omc_BackendVarTransform_makeTransitive(threadData, _repl, _src, _dst, _inFuncTypeExpExpToBooleanOption, &tmpMeta6, &tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
          _ht = tmpMeta9;
          _invHt = tmpMeta10;
          _eht = tmpMeta11;
          _iv = tmpMeta12;
          _derConst = tmpMeta13;
          _src = tmpMeta6;
          _dst = tmpMeta7;

          omc_UnorderedMap_add(threadData, _src, mmc_mk_some(_dst), _ht);

          _invHt = omc_BackendVarTransform_addReplacementInv(threadData, _invHt, _src, _dst);

          _eht = omc_BackendVarTransform_addExtendReplacement(threadData, _eht, _src, mmc_mk_none());
          tmpMeta14 = mmc_mk_box6(3, &BackendVarTransform_VariableReplacements_REPLACEMENTS__desc, _ht, _invHt, _eht, _iv, _derConst);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          _s = omc_ComponentReference_printComponentRefStr(threadData, _inSrc);

          tmpMeta15 = stringAppend(_OMC_LIT28,_s);
          fputs(MMC_STRINGDATA(tmpMeta15),stdout);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRepl;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_addReplacements(threadData_t *threadData, modelica_metatype _iRepl, modelica_metatype _inSrcs, modelica_metatype _inDsts, modelica_metatype _inFuncTypeExpExpToBooleanOption)
{
  modelica_metatype _outRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRepl has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inSrcs;
    tmp4_2 = _inDsts;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _explst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _crlst has no default value.
      // _exp has no default value.
      // _repl has no default value.
      // _explst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iRepl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          _cr = tmpMeta6;
          _crlst = tmpMeta7;
          _exp = tmpMeta8;
          _explst = tmpMeta9;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_addReplacement(threadData, _iRepl, _cr, _exp, _inFuncTypeExpExpToBooleanOption);
          /* Tail recursive call */
          _iRepl = _repl;
          _inSrcs = _crlst;
          _inDsts = _explst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outRepl;
}

DLLDirection
void omc_BackendVarTransform_removeReplacements(threadData_t *threadData, modelica_metatype _iRepl, modelica_metatype _inSrcs)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _cr;
    for (tmpMeta1 = _inSrcs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cr = MMC_CAR(tmpMeta1);
      omc_BackendVarTransform_removeReplacement(threadData, _iRepl, _cr);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_BackendVarTransform_removeReplacement(threadData_t *threadData, modelica_metatype _repl, modelica_metatype _inSrc)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _dst_opt = NULL;
  modelica_metatype _dst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dst_opt has no default value.
  // _dst has no default value.
  _dst_opt = omc_UnorderedMap_getOrDefault(threadData, _inSrc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))), mmc_mk_none());

  if(isNone(_dst_opt))
  {
    goto _return;
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          omc_UnorderedMap_add(threadData, _inSrc, mmc_mk_none(), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 2))));

          omc_BackendVarTransform_removeReplacementInv(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_repl), 3))), omc_Util_getOption(threadData, _dst_opt));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT29,omc_ComponentReference_printComponentRefStr(threadData, _inSrc));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT4);
          omc_Error_addInternalError(threadData, tmpMeta6, _OMC_LIT31);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_emptyReplacementsSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _outVariableReplacements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box6(3, &BackendVarTransform_VariableReplacements_REPLACEMENTS__desc, omc_BackendVarTransform_newCrefExpTableSized(threadData, _size), omc_BackendVarTransform_newCrefCrefListTableSized(threadData, _size), omc_BackendVarTransform_newCrefSetSized(threadData, _size), tmpMeta1, mmc_mk_none());
  _outVariableReplacements = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVariableReplacements;
}
modelica_metatype boxptr_BackendVarTransform_emptyReplacementsSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _outVariableReplacements = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_size);
  _outVariableReplacements = omc_BackendVarTransform_emptyReplacementsSized(threadData, tmp1);
  /* skip box _outVariableReplacements; BackendVarTransform.VariableReplacements */
  return _outVariableReplacements;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_emptyReplacements(threadData_t *threadData)
{
  modelica_metatype _outVariableReplacements = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box6(3, &BackendVarTransform_VariableReplacements_REPLACEMENTS__desc, omc_BackendVarTransform_newCrefExpTable(threadData), omc_BackendVarTransform_newCrefCrefListTable(threadData), omc_BackendVarTransform_newCrefSet(threadData), tmpMeta1, mmc_mk_none());
  _outVariableReplacements = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVariableReplacements;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefSetSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _set = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = omc_UnorderedSet_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, _size);
  _return: OMC_LABEL_UNUSED
  return _set;
}
modelica_metatype boxptr_BackendVarTransform_newCrefSetSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _set = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _set = omc_BackendVarTransform_newCrefSetSized(threadData, tmp1);
  /* skip box _set; UnorderedSet<DAE.ComponentRef> */
  return _set;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefSet(threadData_t *threadData)
{
  modelica_metatype _set = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _set = omc_UnorderedSet_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, ((modelica_integer) 13));
  _return: OMC_LABEL_UNUSED
  return _set;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefCrefListTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _table = omc_UnorderedMap_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, _size);
  _return: OMC_LABEL_UNUSED
  return _table;
}
modelica_metatype boxptr_BackendVarTransform_newCrefCrefListTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _table = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _table = omc_BackendVarTransform_newCrefCrefListTableSized(threadData, tmp1);
  /* skip box _table; UnorderedMap<DAE.ComponentRef,Option<list<DAE.ComponentRef>>> */
  return _table;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefCrefListTable(threadData_t *threadData)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _table = omc_UnorderedMap_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _table;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefExpTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _table = omc_UnorderedMap_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, _size);
  _return: OMC_LABEL_UNUSED
  return _table;
}
modelica_metatype boxptr_BackendVarTransform_newCrefExpTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _table = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _table = omc_BackendVarTransform_newCrefExpTableSized(threadData, tmp1);
  /* skip box _table; UnorderedMap<DAE.ComponentRef,Option<DAE.Exp>> */
  return _table;
}

DLLDirection
modelica_metatype omc_BackendVarTransform_newCrefExpTable(threadData_t *threadData)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _table = omc_UnorderedMap_new(threadData, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _table;
}

