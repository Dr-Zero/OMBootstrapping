#include "omc_simulation_settings.h"
#include "Causalize.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Initialization problem is structurally singular, error found sorting equations\n %s for variables\n %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,100,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(254)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Model is structurally singular, error found sorting equations\n%s\nfor variables\n%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,81,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(34)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,3) {&BackendDAE_Matching_NO__MATCHING__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,3) {&BackendDAE_IndexReduction_INDEX__REDUCTION__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,3) {&BackendDAE_EquationConstraints_ALLOW__UNDERCONSTRAINED__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,4) {&BackendDAE_EquationConstraints_EXACT__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Too few equations, under-determined system. The model has %s equation(s) and %s variable(s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,92,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(32)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Too many equations, over-determined system. The model has %s equation(s) and %s variable(s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,92,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(33)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,9,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,41,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT15,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "- Causalize.singularSystemCheck failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,39,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#include "util/modelica.h"

#include "Causalize_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_getAssignedVars(threadData_t *threadData, modelica_integer _e, modelica_metatype _ass, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_getAssignedVars(threadData_t *threadData, modelica_metatype _e, modelica_metatype _ass, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Causalize_getAssignedVars,2,0) {(void*) boxptr_Causalize_getAssignedVars,0}};
#define boxvar_Causalize_getAssignedVars MMC_REFSTRUCTLIT(boxvar_lit_Causalize_getAssignedVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_foundSingularSystem(threadData_t *threadData, modelica_metatype _eqns, modelica_integer __omcQ_24in_5FactualEqn, modelica_metatype __omcQ_24in_5Fisyst, modelica_metatype __omcQ_24in_5Fishared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_integer *out_actualEqn, modelica_metatype *out_isyst, modelica_metatype *out_ishared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_foundSingularSystem(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype __omcQ_24in_5FactualEqn, modelica_metatype __omcQ_24in_5Fisyst, modelica_metatype __omcQ_24in_5Fishared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_metatype *out_actualEqn, modelica_metatype *out_isyst, modelica_metatype *out_ishared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Causalize_foundSingularSystem,2,0) {(void*) boxptr_Causalize_foundSingularSystem,0}};
#define boxvar_Causalize_foundSingularSystem MMC_REFSTRUCTLIT(boxvar_lit_Causalize_foundSingularSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_freeStateAssignments(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Causalize_freeStateAssignments,2,0) {(void*) boxptr_Causalize_freeStateAssignments,0}};
#define boxvar_Causalize_freeStateAssignments MMC_REFSTRUCTLIT(boxvar_lit_Causalize_freeStateAssignments)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_singularSystemCheck1(threadData_t *threadData, modelica_integer _nVars, modelica_integer _nEqns, modelica_metatype _iSyst, modelica_metatype _eqnConstr, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _iShared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_singularSystemCheck1(threadData_t *threadData, modelica_metatype _nVars, modelica_metatype _nEqns, modelica_metatype _iSyst, modelica_metatype _eqnConstr, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _iShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Causalize_singularSystemCheck1,2,0) {(void*) boxptr_Causalize_singularSystemCheck1,0}};
#define boxvar_Causalize_singularSystemCheck1 MMC_REFSTRUCTLIT(boxvar_lit_Causalize_singularSystemCheck1)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_getAssignedVars(threadData_t *threadData, modelica_integer _e, modelica_metatype _ass, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_integer _i;
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAcc has no default value.
  // _i has no default value.
  // _b has no default value.
  _i = mmc_unbox_integer(arrayGet(_ass,_e) /* DAE.ASUB */);

  _b = (_i > ((modelica_integer) 0));

  _oAcc = omc_List_consOnTrue(threadData, _b, mmc_mk_integer(_i), _iAcc);
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_getAssignedVars(threadData_t *threadData, modelica_metatype _e, modelica_metatype _ass, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_e);
  _oAcc = omc_Causalize_getAssignedVars(threadData, tmp1, _ass, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_foundSingularSystem(threadData_t *threadData, modelica_metatype _eqns, modelica_integer __omcQ_24in_5FactualEqn, modelica_metatype __omcQ_24in_5Fisyst, modelica_metatype __omcQ_24in_5Fishared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_integer *out_actualEqn, modelica_metatype *out_isyst, modelica_metatype *out_ishared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg)
{
  modelica_metatype _changedEqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _actualEqn;
  modelica_metatype _isyst = NULL;
  modelica_metatype _ishared = NULL;
  modelica_metatype _inAssignments1 = NULL;
  modelica_metatype _inAssignments2 = NULL;
  modelica_metatype _inArg = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _source = NULL;
  modelica_integer _n;
  modelica_metatype _unmatched = NULL;
  modelica_metatype _unmatched1 = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _info = NULL;
  modelica_string _eqn_str = NULL;
  modelica_string _var_str = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _changedEqns = tmpMeta1;
  _actualEqn = __omcQ_24in_5FactualEqn;
  _isyst = __omcQ_24in_5Fisyst;
  _ishared = __omcQ_24in_5Fishared;
  _inAssignments1 = __omcQ_24in_5FinAssignments1;
  _inAssignments2 = __omcQ_24in_5FinAssignments2;
  _inArg = __omcQ_24in_5FinArg;
  // _mapIncRowEqn has no default value.
  // _source has no default value.
  // _n has no default value.
  // _unmatched has no default value.
  // _unmatched1 has no default value.
  // _vars has no default value.
  // _info has no default value.
  // _eqn_str has no default value.
  // _var_str has no default value.
  if((!listEmpty(_eqns)))
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _inArg;
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
    _mapIncRowEqn = tmpMeta3;

    _n = omc_BackendDAEUtil_systemSize(threadData, _isyst);

    _unmatched = omc_List_flatten(threadData, _eqns);

    _unmatched1 = omc_List_map1r(threadData, _unmatched, boxvar_arrayGet, _mapIncRowEqn);

    _unmatched1 = omc_List_uniqueIntN(threadData, _unmatched1, arrayLength(_mapIncRowEqn));

    _eqn_str = omc_BackendDump_dumpMarkedEqns(threadData, _isyst, omc_List_sort(threadData, _unmatched1, boxvar_intGt));

    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    _vars = omc_Matching_getUnassigned(threadData, _n, _inAssignments2, tmpMeta4);

    _vars = omc_List_fold1(threadData, _unmatched, boxvar_Causalize_getAssignedVars, _inAssignments1, _vars);

    _var_str = omc_BackendDump_dumpMarkedVars(threadData, _isyst, omc_List_sort(threadData, _vars, boxvar_intGt));

    _source = omc_BackendEquation_markedEquationSource(threadData, _isyst, mmc_unbox_integer(listHead(_unmatched1)));

    _info = omc_ElementSource_getElementSourceFileInfo(threadData, _source);

    tmpMeta5 = mmc_mk_cons(_eqn_str, mmc_mk_cons(_var_str, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessage(threadData, (omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared)?_OMC_LIT3:_OMC_LIT5), tmpMeta5, _info);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  if (out_actualEqn) { *out_actualEqn = _actualEqn; }
  if (out_isyst) { *out_isyst = _isyst; }
  if (out_ishared) { *out_ishared = _ishared; }
  if (out_inAssignments1) { *out_inAssignments1 = _inAssignments1; }
  if (out_inAssignments2) { *out_inAssignments2 = _inAssignments2; }
  if (out_inArg) { *out_inArg = _inArg; }
  return _changedEqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_foundSingularSystem(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype __omcQ_24in_5FactualEqn, modelica_metatype __omcQ_24in_5Fisyst, modelica_metatype __omcQ_24in_5Fishared, modelica_metatype __omcQ_24in_5FinAssignments1, modelica_metatype __omcQ_24in_5FinAssignments2, modelica_metatype __omcQ_24in_5FinArg, modelica_metatype *out_actualEqn, modelica_metatype *out_isyst, modelica_metatype *out_ishared, modelica_metatype *out_inAssignments1, modelica_metatype *out_inAssignments2, modelica_metatype *out_inArg)
{
  modelica_integer tmp1;
  modelica_integer _actualEqn;
  modelica_metatype _changedEqns = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5FactualEqn);
  _changedEqns = omc_Causalize_foundSingularSystem(threadData, _eqns, tmp1, __omcQ_24in_5Fisyst, __omcQ_24in_5Fishared, __omcQ_24in_5FinAssignments1, __omcQ_24in_5FinAssignments2, __omcQ_24in_5FinArg, &_actualEqn, out_isyst, out_ishared, out_inAssignments1, out_inAssignments2, out_inArg);
  /* skip box _changedEqns; list<#Integer> */
  if (out_actualEqn) { *out_actualEqn = mmc_mk_icon(_actualEqn); }
  /* skip box _isyst; BackendDAE.EqSystem */
  /* skip box _ishared; BackendDAE.Shared */
  /* skip box _inAssignments1; array<#Integer> */
  /* skip box _inAssignments2; array<#Integer> */
  /* skip box _inArg; tuple<BackendDAE.StateOrder, array<list<BackendDAE.Equation>>, array<list<#Integer>>, array<#Integer>, #Integer> */
  return _changedEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_freeStateAssignments(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_integer _e;
      modelica_integer _index;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _var = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _index has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _var has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _var = tmp4_1;
          _index = tmp8  /* pattern as ty=Integer */;
          _ass1 = tmpMeta9;
          _ass2 = tmpMeta10;
          /* Pattern matching succeeded */
          _e = mmc_unbox_integer(arrayGet(_ass1,_index) /* DAE.ASUB */);

          _ass1 = arrayUpdate(_ass1, _index, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = arrayUpdate(_ass2, _e, mmc_mk_integer(((modelica_integer) -1)));
          tmpMeta11 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _index), _ass1, _ass2);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _var = tmp4_1;
          _index = tmp13  /* pattern as ty=Integer */;
          _ass1 = tmpMeta14;
          _ass2 = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _index), _ass1, _ass2);
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = tmpMeta16;
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
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Causalize_singularSystemCheck1(threadData_t *threadData, modelica_integer _nVars, modelica_integer _nEqns, modelica_metatype _iSyst, modelica_metatype _eqnConstr, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _iShared)
{
  modelica_metatype _outSyst = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_fnptr _matchingFunc;
  modelica_metatype _syst = NULL;
  modelica_metatype _mapEqnIncRow = NULL;
  modelica_metatype _mapIncRowEqn = NULL;
  modelica_metatype _indexType = NULL;
  modelica_boolean _scalar;
  modelica_boolean _processed;
  modelica_metatype tmpMeta1;
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
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outSyst = _iSyst;
  // _m has no default value.
  // _mT has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _syst has no default value.
  // _mapEqnIncRow has no default value.
  // _mapIncRowEqn has no default value.
  // _indexType has no default value.
  // _scalar has no default value.
  // _processed has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iSyst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  if (optionNone(tmpMeta6)) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  _m = tmpMeta3;
  _mT = tmpMeta5;
  _mapEqnIncRow = tmpMeta8;
  _mapIncRowEqn = tmpMeta9;
  _indexType = tmpMeta10;
  _scalar = tmp12  /* pattern as ty=Boolean */;
  _processed = tmp14  /* pattern as ty=Boolean */;

  /* Pattern-matching assignment */
  tmpMeta15 = _matchingAlgorithm;
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
  _matchingFunc = tmpMeta16;

  _m = omc_AdjacencyMatrix_absAdjacencyMatrix(threadData, _m);

  _mT = omc_AdjacencyMatrix_absAdjacencyMatrix(threadData, _mT);

  tmpMeta17 = mmc_mk_box5(0, _mapEqnIncRow, _mapIncRowEqn, _OMC_LIT6, mmc_mk_boolean(_scalar), mmc_mk_boolean(_processed));
  _syst = omc_BackendDAEUtil_setEqSystMatrices(threadData, _iSyst, mmc_mk_some(_m), mmc_mk_some(_mT), mmc_mk_some(tmpMeta17));

  tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[7] = _OMC_LIT7;
  _syst = tmpMeta18;

  /* Pattern-matching tuple assignment */
  tmpMeta19 = mmc_mk_box2(0, _OMC_LIT8, _eqnConstr);
  tmpMeta20 = mmc_mk_box2(0, _OMC_LIT8, _eqnConstr);
  tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchingFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_fnptr, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchingFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchingFunc), 2))), _syst, _iShared, mmc_mk_boolean(1 /* true */), tmpMeta20, boxvar_Causalize_foundSingularSystem, _arg, NULL, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_fnptr, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchingFunc), 1)))) (threadData, _syst, _iShared, mmc_mk_boolean(1 /* true */), tmpMeta19, boxvar_Causalize_foundSingularSystem, _arg, NULL, NULL);
  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 7));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
  tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
  _syst = tmpMeta21;
  _ass1 = tmpMeta23;
  _ass2 = tmpMeta24;

  tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta27 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, tmpMeta26);
  tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_outSyst), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[7] = tmpMeta27;
  _outSyst = tmpMeta25;

  /* Pattern-matching assignment */
  tmpMeta28 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1)), _ass1, _ass2);
  tmpMeta29 = omc_BackendVariable_traverseBackendDAEVars(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 2))), boxvar_Causalize_freeStateAssignments, tmpMeta28);
  tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
  tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
  _ass1 = tmpMeta30;
  _ass2 = tmpMeta31;
  _return: OMC_LABEL_UNUSED
  return _outSyst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Causalize_singularSystemCheck1(threadData_t *threadData, modelica_metatype _nVars, modelica_metatype _nEqns, modelica_metatype _iSyst, modelica_metatype _eqnConstr, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _iShared)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outSyst = NULL;
  tmp1 = mmc_unbox_integer(_nVars);
  tmp2 = mmc_unbox_integer(_nEqns);
  _outSyst = omc_Causalize_singularSystemCheck1(threadData, tmp1, tmp2, _iSyst, _eqnConstr, _matchingAlgorithm, _arg, _iShared);
  /* skip box _outSyst; BackendDAE.EqSystem */
  return _outSyst;
}

DLLDirection
modelica_metatype omc_Causalize_singularSystemCheck(threadData_t *threadData, modelica_integer _nvars, modelica_integer _neqns, modelica_metatype _isyst, modelica_metatype _inMatchingOptions, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _ishared)
{
  modelica_metatype _outSyst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSyst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inMatchingOptions;
    {
      modelica_string _esize_str = NULL;
      modelica_string _vsize_str = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _esize_str has no default value.
      // _vsize_str has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_Causalize_singularSystemCheck1(threadData, _nvars, _neqns, _isyst, _OMC_LIT9, _matchingAlgorithm, _arg, _ishared);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (_nvars == _neqns);
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta1 = omc_Causalize_singularSystemCheck1(threadData, _nvars, _neqns, _isyst, _OMC_LIT10, _matchingAlgorithm, _arg, _ishared);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_nvars > _neqns);
          if (1 /* true */ != tmp10) goto goto_2;

          _esize_str = intString(_neqns);

          _vsize_str = intString(_nvars);

          tmpMeta11 = mmc_mk_cons(_esize_str, mmc_mk_cons(_vsize_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMessage(threadData, _OMC_LIT12, tmpMeta11);

          omc_BackendDAEUtil_checkAdjacencyMatrixSolvability(threadData, _isyst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ishared), 12))), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared));
          goto goto_2;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (_nvars < _neqns);
          if (1 /* true */ != tmp12) goto goto_2;

          _esize_str = intString(_neqns);

          _vsize_str = intString(_nvars);

          tmpMeta13 = mmc_mk_cons(_esize_str, mmc_mk_cons(_vsize_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMessage(threadData, _OMC_LIT14, tmpMeta13);

          omc_BackendDAEUtil_checkAdjacencyMatrixSolvability(threadData, _isyst, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ishared), 12))), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared));
          goto goto_2;
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp14;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = omc_Flags_isSet(threadData, _OMC_LIT17);
          if (1 /* true */ != tmp14) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT18);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outSyst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSyst;
}
modelica_metatype boxptr_Causalize_singularSystemCheck(threadData_t *threadData, modelica_metatype _nvars, modelica_metatype _neqns, modelica_metatype _isyst, modelica_metatype _inMatchingOptions, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _ishared)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outSyst = NULL;
  tmp1 = mmc_unbox_integer(_nvars);
  tmp2 = mmc_unbox_integer(_neqns);
  _outSyst = omc_Causalize_singularSystemCheck(threadData, tmp1, tmp2, _isyst, _inMatchingOptions, _matchingAlgorithm, _arg, _ishared);
  /* skip box _outSyst; BackendDAE.EqSystem */
  return _outSyst;
}

