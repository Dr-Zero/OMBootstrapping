#include "omc_simulation_settings.h"
#include "SymbolicImplicitSolver.h"
#define _OMC_LIT0_data "$Old"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "__OMC_DT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,8,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,3,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "symSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,4,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,0) {_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "impEuler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,8,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,0) {_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "expEuler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,8,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,0) {_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,1) {_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT9,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT7,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT8,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT6,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,1) {_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Activates symbolic implicit solver (original system is not changed)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,68,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(61)),_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT5,_OMC_LIT15,_OMC_LIT20,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,22) {&BackendDAE_VarKind_ALG__STATE__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,23) {&BackendDAE_VarKind_ALG__STATE__OLD__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT25,0.0);
#define _OMC_LIT25 MMC_REFREALLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,1,1) {_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,1,9) {&BackendDAE_BackendDAEType_INLINESYSTEM__desc,}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "execstat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,8,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Prints out execution statistics for the compiler."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,49,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(31)),_OMC_LIT29,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Generated inline system:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,24,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "dumpInlineSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,16,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Dumps the inline solver equation system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,40,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6)),_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "removeEqualRHS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,14,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "removeSimpleEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,21,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "evalFunc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,8,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,1) {_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT37,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,1) {_OMC_LIT36,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "inlineArrayEqn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,14,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "constantLinearSystem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,20,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "solveSimpleEquations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,20,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "tearingSystem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,13,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "calculateStrongComponentJacobians"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,33,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "removeConstants"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,15,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "simplifyTimeIndepFuncCalls"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,26,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {_OMC_LIT47,_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,1) {_OMC_LIT46,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,1) {_OMC_LIT45,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,1) {_OMC_LIT44,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,1) {_OMC_LIT43,_OMC_LIT53}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT42,_OMC_LIT54}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "Final inline systems:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,21,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "backenddaeinfo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,14,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Enables dumping of back-end information about system (Number of equations before back-end,...)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,95,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT57,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "stateselection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,14,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Enables dumping of selected states. Extends -d=backenddaeinfo."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,62,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(70)),_OMC_LIT60,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "discreteinfo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,12,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "Enables dumping of discrete variables. Extends -d=backenddaeinfo."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,65,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(91)),_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#include "util/modelica.h"

#include "SymbolicImplicitSolver_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SymbolicImplicitSolver_symSolverUpdateDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateDer,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverUpdateDer,0}};
#define boxvar_SymbolicImplicitSolver_symSolverUpdateDer MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateDer)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverAppendStringToStates(threadData_t *threadData, modelica_metatype _inCr, modelica_metatype _incr_lst, modelica_metatype _orderedVars, modelica_metatype *out_outcr_lst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverAppendStringToStates,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverAppendStringToStates,0}};
#define boxvar_SymbolicImplicitSolver_symSolverAppendStringToStates MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverAppendStringToStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateStates(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_boolean *out_cont, modelica_metatype *out_outTl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SymbolicImplicitSolver_symSolverUpdateStates(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_metatype *out_cont, modelica_metatype *out_outTl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateStates,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverUpdateStates,0}};
#define boxvar_SymbolicImplicitSolver_symSolverUpdateStates MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateEqn,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverUpdateEqn,0}};
#define boxvar_SymbolicImplicitSolver_symSolverUpdateEqn MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateEqn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverState(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _knvars, modelica_metatype _crlst, modelica_metatype *out_oknvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverState,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverState,0}};
#define boxvar_SymbolicImplicitSolver_symSolverState MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateSyst(threadData_t *threadData, modelica_metatype _iSyst, modelica_metatype _inKnVars, modelica_metatype *out_oKnVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateSyst,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverUpdateSyst,0}};
#define boxvar_SymbolicImplicitSolver_symSolverUpdateSyst MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverUpdateSyst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverWork(threadData_t *threadData, modelica_metatype _inDAE);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverWork,2,0) {(void*) boxptr_SymbolicImplicitSolver_symSolverWork,0}};
#define boxvar_SymbolicImplicitSolver_symSolverWork MMC_REFSTRUCTLIT(boxvar_lit_SymbolicImplicitSolver_symSolverWork)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _cont = 1 /* true */;
  // _outTpl has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inTpl;
    tmp4_2 = _inExp;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _cr_lst = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _tp has no default value.
      // _cr_lst has no default value.
      // _cr has no default value.
      tmp4 = 0;
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT3), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _e1 = tmpMeta9;
          _cr = tmpMeta11;
          _tp = tmpMeta12;
          _cr_lst = tmp4_1;
          /* Pattern matching succeeded */
          _e2 = omc_Expression_crefExp(threadData, omc_ComponentReference_appendStringLastIdent(threadData, _OMC_LIT0, _cr));

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _e3 = omc_Expression_crefExp(threadData, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT1, _OMC_LIT2, tmpMeta13));
          tmpMeta14 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _tp);
          tmpMeta15 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1, tmpMeta14, _e2);
          tmpMeta16 = mmc_mk_box2(6, &DAE_Operator_DIV__desc, _tp);
          tmpMeta17 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta15, tmpMeta16, _e3);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = omc_List_unionElt(threadData, _cr, _cr_lst);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SymbolicImplicitSolver_symSolverUpdateDer(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_SymbolicImplicitSolver_symSolverUpdateDer(threadData, _inExp, _inTpl, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; list<DAE.ComponentRef> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverAppendStringToStates(threadData_t *threadData, modelica_metatype _inCr, modelica_metatype _incr_lst, modelica_metatype _orderedVars, modelica_metatype *out_outcr_lst)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outcr_lst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = omc_Expression_crefExp(threadData, _inCr);
  _outcr_lst = _incr_lst;
  if(omc_BackendVariable_isState(threadData, _inCr, _orderedVars))
  {
    _outExp = omc_Expression_crefExp(threadData, omc_ComponentReference_appendStringLastIdent(threadData, _OMC_LIT0, _inCr));

    _outcr_lst = omc_List_unionElt(threadData, _inCr, _incr_lst);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outcr_lst) { *out_outcr_lst = _outcr_lst; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateStates(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_boolean *out_cont, modelica_metatype *out_outTl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTl = NULL;
  modelica_metatype _inTpl = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _cont = 1 /* true */;
  // _outTl has no default value.
  // _inTpl has no default value.
  // _orderedVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inTpl = tmpMeta2;
  _orderedVars = tmpMeta3;

  
  
  { /* match expression */
    modelica_metatype tmp7_1;modelica_metatype tmp7_2;
    tmp7_1 = _inTpl;
    tmp7_2 = _inExp;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e3 = NULL;
      modelica_metatype _tp = NULL;
      modelica_metatype _cr_lst = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp7;
      int tmp8;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _e3 has no default value.
      // _tp has no default value.
      // _cr_lst has no default value.
      // _cr has no default value.
      tmp7 = 0;
      for (; tmp7 < 3; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
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
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_2,13,3) == 0) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp6_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (3 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT3), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp6_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 3));
          if (listEmpty(tmpMeta11)) goto tmp6_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto tmp6_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          if (!listEmpty(tmpMeta13)) goto tmp6_end;
          
          _e1 = tmpMeta12;
          _cr = tmpMeta14;
          _tp = tmpMeta15;
          _cr_lst = tmp7_1;
          /* Pattern matching succeeded */
          _e2 = omc_Expression_crefExp(threadData, omc_ComponentReference_appendStringLastIdent(threadData, _OMC_LIT0, _cr));

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _e3 = omc_Expression_crefExp(threadData, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT1, _OMC_LIT2, tmpMeta16));

          _cont = 0 /* false */;
          tmpMeta17 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _tp);
          tmpMeta18 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _e1, tmpMeta17, _e2);
          tmpMeta19 = mmc_mk_box2(6, &DAE_Operator_DIV__desc, _tp);
          tmpMeta20 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta18, tmpMeta19, _e3);
          tmpMeta21 = mmc_mk_box2(0, omc_List_unionElt(threadData, _cr, _cr_lst), _orderedVars);
          tmpMeta[0+0] = tmpMeta20;
          tmpMeta[0+1] = tmpMeta21;
          goto tmp6_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_2,6,2) == 0) goto tmp6_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_2), 2));
          
          _cr = tmpMeta22;
          _cr_lst = tmp7_1;
          /* Pattern matching succeeded */
          _e = omc_SymbolicImplicitSolver_symSolverAppendStringToStates(threadData, _cr, _cr_lst, _orderedVars ,&_cr_lst);
          tmpMeta23 = mmc_mk_box2(0, _cr_lst, _orderedVars);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta23;
          goto tmp6_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTl;
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
  }
  _outExp = tmpMeta[0+0];
  _outTl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTl) { *out_outTl = _outTl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SymbolicImplicitSolver_symSolverUpdateStates(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_metatype *out_cont, modelica_metatype *out_outTl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_SymbolicImplicitSolver_symSolverUpdateStates(threadData, _inExp, _inTl, &_cont, out_outTl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTl; tuple<list<DAE.ComponentRef>, BackendDAE.Variables> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateEqn(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype _inTpl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  // _orderedVars has no default value.
  // _inTpl has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inTpl = tmpMeta2;
  _orderedVars = tmpMeta3;

  if((omc_Flags_getConfigEnum(threadData, _OMC_LIT22) > ((modelica_integer) 1)))
  {
    /* Pattern-matching tuple assignment */
    tmpMeta7 = mmc_mk_box2(0, _inTpl, _orderedVars);
    tmpMeta8 = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_SymbolicImplicitSolver_symSolverUpdateStates, tmpMeta7, &tmpMeta4);
    _outExp = tmpMeta8;
    tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
    _inTpl = tmpMeta5;
    _orderedVars = tmpMeta6;
  }
  else
  {
    _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_SymbolicImplicitSolver_symSolverUpdateDer, _inTpl ,&_inTpl);
  }

  tmpMeta9 = mmc_mk_box2(0, _inTpl, _orderedVars);
  _outTpl = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverState(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _knvars, modelica_metatype _crlst, modelica_metatype *out_oknvars)
{
  modelica_metatype _ovars = NULL;
  modelica_metatype _oknvars = NULL;
  modelica_integer _idx;
  modelica_metatype _oldCref = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ovars = _vars;
  _oknvars = _knvars;
  // _idx has no default value.
  // _oldCref has no default value.
  // _var has no default value.
  {
    modelica_metatype _cref;
    for (tmpMeta1 = _crlst; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      _var = omc_BackendVariable_getVar2(threadData, _cref, _ovars ,&_idx);

      _ovars = omc_BackendVariable_setVarKindForVar(threadData, _idx, _OMC_LIT23, _ovars);

      _oldCref = omc_ComponentReference_appendStringLastIdent(threadData, _OMC_LIT0, _cref);

      _var = omc_BackendVariable_copyVarNewName(threadData, _oldCref, _var);

      _var = omc_BackendVariable_setVarKind(threadData, _var, _OMC_LIT24);

      tmpMeta2 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
      _oknvars = omc_BackendVariable_addVars(threadData, tmpMeta2, _oknvars);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oknvars) { *out_oknvars = _oknvars; }
  return _ovars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverUpdateSyst(threadData_t *threadData, modelica_metatype _iSyst, modelica_metatype _inKnVars, modelica_metatype *out_oKnVars)
{
  modelica_metatype _oSyst = NULL;
  modelica_metatype _oKnVars = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _crlst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSyst has no default value.
  _oKnVars = _inKnVars;
  // _eqn has no default value.
  // _vars has no default value.
  // _eqns has no default value.
  // _crlst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSyst;
    {
      modelica_metatype _syst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
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
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _syst = tmp4_1;
          _vars = tmpMeta6;
          _eqns = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _crlst = tmpMeta8;

          tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = omc_ExpandableArray_getLastUsedIndex(threadData, _eqns);
          if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
            {
              if(omc_ExpandableArray_occupied(threadData, _i, _eqns))
              {
                _eqn = omc_ExpandableArray_get(threadData, _i, _eqns);

                /* Pattern-matching tuple assignment */
                tmpMeta11 = mmc_mk_box2(0, _crlst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));
                tmpMeta12 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eqn, boxvar_SymbolicImplicitSolver_symSolverUpdateEqn, tmpMeta11, &tmpMeta9);
                _eqn = tmpMeta12;
                tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
                _crlst = tmpMeta10;

                omc_ExpandableArray_update(threadData, _i, _eqn, _eqns);
              }
            }
          }

          _vars = omc_SymbolicImplicitSolver_symSolverState(threadData, _vars, _inKnVars, _crlst ,&_oKnVars);

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[2] = _vars;
          _syst = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _eqns;
          _syst = tmpMeta17;
          tmpMeta1 = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
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
  _oSyst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_oKnVars) { *out_oKnVars = _oKnVars; }
  return _oSyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SymbolicImplicitSolver_symSolverWork(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _inlineData = NULL;
  modelica_metatype _osystlst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _syst_ = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _tmpv = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _localInline = NULL;
  modelica_metatype _knownVariables = NULL;
  modelica_metatype _saveKnGlobalVars = NULL;
  modelica_metatype _inlineBDAE = NULL;
  modelica_boolean _execbool;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // _inlineData has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _osystlst = tmpMeta1;
  // _syst_ has no default value.
  // _shared has no default value.
  // _tmpv has no default value.
  // _cref has no default value.
  // _localInline has no default value.
  // _knownVariables has no default value.
  // _saveKnGlobalVars has no default value.
  // _inlineBDAE has no default value.
  // _execbool has no default value.
  _localInline = omc_BackendDAEUtil_copyEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 2))));

  _knownVariables = omc_BackendVariable_emptyVars(threadData, omc_BackendDAEUtil_daeSize(threadData, _inDAE));

  tmpMeta2 = mmc_mk_box3(3, &BackendDAE_InlineData_INLINE__DATA__desc, _localInline, _knownVariables);
  _inlineData = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _cref = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _OMC_LIT1, _OMC_LIT2, tmpMeta3);

  _tmpv = omc_BackendVariable_makeVar(threadData, _cref);

  _tmpv = omc_BackendVariable_setBindExp(threadData, _tmpv, _OMC_LIT27);

  tmpMeta5 = mmc_mk_cons(_tmpv, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_inlineData), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_BackendVariable_addVars(threadData, tmpMeta5, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inlineData), 3))));
  _inlineData = tmpMeta4;

  _knownVariables = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inlineData), 3)));

  {
    modelica_metatype _syst;
    for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inlineData), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _syst = MMC_CAR(tmpMeta6);
      _syst_ = omc_SymbolicImplicitSolver_symSolverUpdateSyst(threadData, _syst, _knownVariables ,&_knownVariables);

      tmpMeta7 = mmc_mk_cons(_syst_, _osystlst);
      _osystlst = tmpMeta7;
    }
  }

  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_inlineData), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _knownVariables;
  _inlineData = tmpMeta9;

  _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)));

  _saveKnGlobalVars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 2)));

  _knownVariables = omc_BackendVariable_addVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 2))), _knownVariables);

  __omcQ_24mrfa_5F0 = _knownVariables;

  __omcQ_24mrfa_5F1 = _OMC_LIT28;

  tmpMeta10 = mmc_mk_box(21, 3, &BackendDAE_Shared_SHARED__desc, __omcQ_24mrfa_5F0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 14))), __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 16))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 17))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 20))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 21))));
  _shared = tmpMeta10;

  tmpMeta11 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _osystlst, _shared);
  _inlineBDAE = tmpMeta11;

  _execbool = omc_FlagsUtil_disableDebug(threadData, _OMC_LIT31);

  if(omc_Flags_isSet(threadData, _OMC_LIT35))
  {
    omc_BackendDump_bltdump(threadData, _OMC_LIT32, _inlineBDAE);
  }

  _inlineBDAE = omc_BackendDAEUtil_getSolvedSystemforJacobians(threadData, _inlineBDAE, _OMC_LIT41, mmc_mk_none(), mmc_mk_none(), _OMC_LIT55);

  omc_FlagsUtil_set(threadData, _OMC_LIT31, _execbool);

  if(omc_Flags_isSet(threadData, _OMC_LIT35))
  {
    omc_BackendDump_bltdump(threadData, _OMC_LIT56, _inlineBDAE);
  }

  if(((omc_Flags_isSet(threadData, _OMC_LIT59) || omc_Flags_isSet(threadData, _OMC_LIT62)) || omc_Flags_isSet(threadData, _OMC_LIT65)))
  {
    omc_BackendDump_dumpCompShort(threadData, _inlineBDAE);
  }

  /* Pattern-matching assignment */
  tmpMeta12 = _inlineBDAE;
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
  _localInline = tmpMeta13;

  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_inlineData), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = _localInline;
  _inlineData = tmpMeta14;

  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = _saveKnGlobalVars;
  _shared = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _inlineData;
}

DLLDirection
modelica_metatype omc_SymbolicImplicitSolver_symSolver(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _inlineData = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inlineData has no default value.
  if((omc_Flags_getConfigEnum(threadData, _OMC_LIT22) > ((modelica_integer) 0)))
  {
    _inlineData = mmc_mk_some(omc_SymbolicImplicitSolver_symSolverWork(threadData, _inDAE));
  }
  else
  {
    _inlineData = mmc_mk_none();
  }
  _return: OMC_LABEL_UNUSED
  return _inlineData;
}

