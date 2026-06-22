#include "omc_simulation_settings.h"
#include "Vectorization.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,3) {&DAE_Operator_ADD__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT2,_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT3,_OMC_LIT0}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,3) {&Absyn_ReductionIterType_COMBINE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,4) {&Values_Value_REAL__desc,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,1) {_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "$sumFold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,8,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "$sumRes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,7,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT13,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT15,_OMC_LIT9}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&DAE_Operator_ADD__desc,_OMC_LIT9}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT14,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT18,_OMC_LIT9}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,4,10) {&DAE_Exp_BINARY__desc,_OMC_LIT16,_OMC_LIT17,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&DAE_ReductionInfo_REDUCTIONINFO__desc,_OMC_LIT7,_OMC_LIT8,_OMC_LIT9,_OMC_LIT12,_OMC_LIT13,_OMC_LIT14,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "$sumIter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,8,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT23,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT24,_OMC_LIT9}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,3,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#include "util/modelica.h"

#include "Vectorization_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_Vectorization_getIndexSubScript(threadData_t *threadData, modelica_metatype _sub);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_getIndexSubScript(threadData_t *threadData, modelica_metatype _sub);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_getIndexSubScript,2,0) {(void*) boxptr_Vectorization_getIndexSubScript,0}};
#define boxvar_Vectorization_getIndexSubScript MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_getIndexSubScript)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_crefPartlyEqual(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _cref1);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_crefPartlyEqual(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _cref1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_crefPartlyEqual,2,0) {(void*) boxptr_Vectorization_crefPartlyEqual,0}};
#define boxvar_Vectorization_crefPartlyEqual MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_crefPartlyEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_crefPartlyEqualToCrefs(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _crefLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_crefPartlyEqualToCrefs(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _crefLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_crefPartlyEqualToCrefs,2,0) {(void*) boxptr_Vectorization_crefPartlyEqualToCrefs,0}};
#define boxvar_Vectorization_crefPartlyEqualToCrefs MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_crefPartlyEqualToCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_dispatchLoopEquations(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _arrayCrefs, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_dispatchLoopEquations,2,0) {(void*) boxptr_Vectorization_dispatchLoopEquations,0}};
#define boxvar_Vectorization_dispatchLoopEquations MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_dispatchLoopEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getArrayVars(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_getArrayVars,2,0) {(void*) boxptr_Vectorization_getArrayVars,0}};
#define boxvar_Vectorization_getArrayVars MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_getArrayVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_addToArrayCrefLst(threadData_t *threadData, modelica_metatype _tplLstIn, modelica_metatype _varIn, modelica_metatype _tplRef, modelica_metatype _tplLstFoldIn, modelica_metatype _varLstIn, modelica_metatype *out_varLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_addToArrayCrefLst,2,0) {(void*) boxptr_Vectorization_addToArrayCrefLst,0}};
#define boxvar_Vectorization_addToArrayCrefLst MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_addToArrayCrefLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getArrayVarCrefs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_getArrayVarCrefs,2,0) {(void*) boxptr_Vectorization_getArrayVarCrefs,0}};
#define boxvar_Vectorization_getArrayVarCrefs MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_getArrayVarCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_setIteratorSubscriptCrefinEquation(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_setIteratorSubscriptCrefinEquation,2,0) {(void*) boxptr_Vectorization_setIteratorSubscriptCrefinEquation,0}};
#define boxvar_Vectorization_setIteratorSubscriptCrefinEquation MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_setIteratorSubscriptCrefinEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getCrefIdcsForEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _constCrefs, modelica_metatype _crefMinMaxIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_getCrefIdcsForEquation,2,0) {(void*) boxptr_Vectorization_getCrefIdcsForEquation,0}};
#define boxvar_Vectorization_getCrefIdcsForEquation MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_getCrefIdcsForEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildBackendDAEForEquations(threadData_t *threadData, modelica_metatype _classEqs, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_buildBackendDAEForEquations,2,0) {(void*) boxptr_Vectorization_buildBackendDAEForEquations,0}};
#define boxvar_Vectorization_buildBackendDAEForEquations MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_buildBackendDAEForEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsListList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsListList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsListList,2,0) {(void*) boxptr_Vectorization_expEqualNoCrefSubsListList,0}};
#define boxvar_Vectorization_expEqualNoCrefSubsListList MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsListList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsList,2,0) {(void*) boxptr_Vectorization_expEqualNoCrefSubsList,0}};
#define boxvar_Vectorization_expEqualNoCrefSubsList MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsOpt(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsOpt(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsOpt,2,0) {(void*) boxptr_Vectorization_expEqualNoCrefSubsOpt,0}};
#define boxvar_Vectorization_expEqualNoCrefSubsOpt MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_expEqualNoCrefSubsOpt)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_minmaxTermEqual(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _term);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_minmaxTermEqual(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _term);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_minmaxTermEqual,2,0) {(void*) boxptr_Vectorization_minmaxTermEqual,0}};
#define boxvar_Vectorization_minmaxTermEqual MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_minmaxTermEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations2(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations2,2,0) {(void*) boxptr_Vectorization_buildAccumExpInEquations2,0}};
#define boxvar_Vectorization_buildAccumExpInEquations2 MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations1(threadData_t *threadData, modelica_metatype _termIn, modelica_metatype _minmaxTermsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations1,2,0) {(void*) boxptr_Vectorization_buildAccumExpInEquations1,0}};
#define boxvar_Vectorization_buildAccumExpInEquations1 MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations(threadData_t *threadData, modelica_metatype _mixEq, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations,2,0) {(void*) boxptr_Vectorization_buildAccumExpInEquations,0}};
#define boxvar_Vectorization_buildAccumExpInEquations MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_buildAccumExpInEquations)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_varIsEqualCrefWithoutSubs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _crefIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_varIsEqualCrefWithoutSubs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _crefIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_varIsEqualCrefWithoutSubs,2,0) {(void*) boxptr_Vectorization_varIsEqualCrefWithoutSubs,0}};
#define boxvar_Vectorization_varIsEqualCrefWithoutSubs MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_varIsEqualCrefWithoutSubs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_unexpandArrayVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Vectorization_unexpandArrayVariables,2,0) {(void*) boxptr_Vectorization_unexpandArrayVariables,0}};
#define boxvar_Vectorization_unexpandArrayVariables MMC_REFSTRUCTLIT(boxvar_lit_Vectorization_unexpandArrayVariables)

DLLDirection
modelica_metatype omc_Vectorization_replaceFirstSubsInCref(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _subs)
{
  modelica_metatype _crefOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _crefIn;
    {
      modelica_string _ident = NULL;
      modelica_metatype _identType = NULL;
      modelica_metatype _subscriptLst = NULL;
      modelica_metatype _cref = NULL;
      int tmp4;
      // _ident has no default value.
      // _identType has no default value.
      // _subscriptLst has no default value.
      // _cref has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _ident = tmpMeta5;
          _identType = tmpMeta6;
          _subscriptLst = tmpMeta7;
          _cref = tmpMeta8;
          /* Pattern matching succeeded */
          if(omc_List_hasOneElement(threadData, _subscriptLst))
          {
            _subscriptLst = _subs;
          }

          _cref = omc_Vectorization_replaceFirstSubsInCref(threadData, _cref, _subs);
          tmpMeta9 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _ident, _identType, _subscriptLst, _cref);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _ident = tmpMeta10;
          _identType = tmpMeta11;
          _subscriptLst = tmpMeta12;
          /* Pattern matching succeeded */
          if(omc_List_hasOneElement(threadData, _subscriptLst))
          {
            _subscriptLst = _subs;
          }
          tmpMeta13 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _ident, _identType, _subscriptLst);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefIn;
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
  _crefOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Vectorization_getIndexSubScript(threadData_t *threadData, modelica_metatype _sub)
{
  modelica_integer _int;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _int has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _sub;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,2,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _int = tmp4  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  return _int;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_getIndexSubScript(threadData_t *threadData, modelica_metatype _sub)
{
  modelica_integer _int;
  modelica_metatype out_int;
  _int = omc_Vectorization_getIndexSubScript(threadData, _sub);
  out_int = mmc_mk_icon(_int);
  return out_int;
}

DLLDirection
modelica_metatype omc_Vectorization_insertSUMexp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _expIn;
    tmp4_2 = _tplIn;
    {
      modelica_metatype _cref0 = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _op = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref0 has no default value.
      // _cref1 has no default value.
      // _repl has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _op has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _exp1 = tmpMeta6;
          _op = tmpMeta7;
          _exp2 = tmpMeta8;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp1 = omc_Vectorization_insertSUMexp(threadData, _exp1, _tplIn, NULL);

          _exp2 = omc_Vectorization_insertSUMexp(threadData, _exp2, _tplIn, NULL);
          tmpMeta9 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp1, _op, _exp2);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _tplIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _op = tmpMeta10;
          _exp1 = tmpMeta11;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp1 = omc_Vectorization_insertSUMexp(threadData, _exp1, _tplIn, NULL);
          tmpMeta12 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _exp1);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _tplIn;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref1 = tmpMeta13;
          _cref0 = tmpMeta14;
          _repl = tmpMeta15;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp16 = omc_Vectorization_crefPartlyEqual(threadData, _cref0, _cref1);
          if (1 /* true */ != tmp16) goto goto_2;
          tmpMeta[0+0] = _repl;
          tmpMeta[0+1] = _tplIn;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expIn;
          tmpMeta[0+1] = _tplIn;
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
  _expOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _expOut;
}

DLLDirection
modelica_metatype omc_Vectorization_reduceLoopExpressions(threadData_t *threadData, modelica_metatype _expIn, modelica_integer _maxSub, modelica_boolean *out_notRemoved)
{
  modelica_metatype _expOut = NULL;
  modelica_boolean _notRemoved;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _notRemoved has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _expIn;
    {
      modelica_boolean _b;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _cref = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _op = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _cref has no default value.
      // _exp has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _op has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cref = tmpMeta6;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _b = (omc_Vectorization_getIndexSubScript(threadData, listHead(omc_ComponentReferenceBasics_crefSubs(threadData, _cref))) <= _maxSub);
          tmpMeta[0+0] = _expIn;
          tmp1_c1 = _b;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta7;
          _op = tmpMeta8;
          _exp2 = tmpMeta9;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp1 = omc_Vectorization_reduceLoopExpressions(threadData, _exp1, _maxSub ,&_b1);

          _exp2 = omc_Vectorization_reduceLoopExpressions(threadData, _exp2, _maxSub ,&_b2);

          if((_b1 && (!_b2)))
          {
            _exp = _exp1;
          }
          else
          {
            if((_b2 && (!_b1)))
            {
              _exp = _exp2;
            }
            else
            {
              tmpMeta10 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp1, _op, _exp2);
              _exp = tmpMeta10;
            }
          }
          tmpMeta[0+0] = _exp;
          tmp1_c1 = (_b1 || _b2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _exp = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_Vectorization_reduceLoopExpressions(threadData, _exp, _maxSub, &tmp1_c1);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expIn;
          tmp1_c1 = 1 /* true */;
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
  _expOut = tmpMeta[0+0];
  _notRemoved = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_notRemoved) { *out_notRemoved = _notRemoved; }
  return _expOut;
}
modelica_metatype boxptr_Vectorization_reduceLoopExpressions(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _maxSub, modelica_metatype *out_notRemoved)
{
  modelica_integer tmp1;
  modelica_boolean _notRemoved;
  modelica_metatype _expOut = NULL;
  tmp1 = mmc_unbox_integer(_maxSub);
  _expOut = omc_Vectorization_reduceLoopExpressions(threadData, _expIn, tmp1, &_notRemoved);
  /* skip box _expOut; DAE.Exp */
  if (out_notRemoved) { *out_notRemoved = mmc_mk_icon(_notRemoved); }
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_crefPartlyEqual(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _cref1)
{
  modelica_boolean _partlyEq;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partlyEq has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _cref0;
    tmp4_2 = _cref1;
    {
      modelica_boolean _b;
      modelica_metatype _cref01 = NULL;
      modelica_metatype _cref11 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _cref01 has no default value.
      // _cref11 has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref0), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref1), 2)))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          _cref01 = tmpMeta6;
          _cref11 = tmpMeta7;
          /* Pattern matching succeeded */
          if((stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref0), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref1), 2))))))
          {
            _b = omc_Vectorization_crefPartlyEqual(threadData, _cref01, _cref11);
          }
          else
          {
            _b = 0 /* false */;
          }
          tmp1 = _b;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref0), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref1), 2)))));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref0), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref1), 2)))));
          goto tmp3_done;
        }
        case 4: {
          
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
  _partlyEq = tmp1;
  _return: OMC_LABEL_UNUSED
  return _partlyEq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_crefPartlyEqual(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _cref1)
{
  modelica_boolean _partlyEq;
  modelica_metatype out_partlyEq;
  _partlyEq = omc_Vectorization_crefPartlyEqual(threadData, _cref0, _cref1);
  out_partlyEq = mmc_mk_icon(_partlyEq);
  return out_partlyEq;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_crefPartlyEqualToCrefs(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _crefLst)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_List_exist1(threadData, _crefLst, boxvar_Vectorization_crefPartlyEqual, _cref0);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_crefPartlyEqualToCrefs(threadData_t *threadData, modelica_metatype _cref0, modelica_metatype _crefLst)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Vectorization_crefPartlyEqualToCrefs(threadData, _cref0, _crefLst);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_dispatchLoopEquations(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _arrayCrefs, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tplIn;
    {
      modelica_metatype _classEqs = NULL;
      modelica_metatype _mixEqs = NULL;
      modelica_metatype _nonArrEqs = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _arrCrefs = NULL;
      modelica_metatype _nonArrCrefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _classEqs has no default value.
      // _mixEqs has no default value.
      // _nonArrEqs has no default value.
      // _crefs has no default value.
      // _arrCrefs has no default value.
      // _nonArrCrefs has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _classEqs = tmpMeta6;
          _mixEqs = tmpMeta7;
          _nonArrEqs = tmpMeta8;
          /* Pattern matching succeeded */
          _crefs = omc_BackendEquation_equationCrefs(threadData, _eqIn);

          _arrCrefs = omc_List_separate1OnTrue(threadData, _crefs, boxvar_Vectorization_crefPartlyEqualToCrefs, _arrayCrefs ,&_nonArrCrefs);

          if(listEmpty(_nonArrCrefs))
          {
            tmpMeta9 = mmc_mk_cons(_eqIn, _classEqs);
            _classEqs = tmpMeta9;
          }
          else
          {
            if(listEmpty(_arrCrefs))
            {
              tmpMeta10 = mmc_mk_cons(_eqIn, _nonArrEqs);
              _nonArrEqs = tmpMeta10;
            }
            else
            {
              tmpMeta11 = mmc_mk_cons(_eqIn, _mixEqs);
              _mixEqs = tmpMeta11;
            }
          }
          tmpMeta12 = mmc_mk_box3(0, _classEqs, _mixEqs, _nonArrEqs);
          tmpMeta1 = tmpMeta12;
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getArrayVars(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _varIn;
    tmp4_2 = _tplIn;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _varLstIn = NULL;
      modelica_metatype _arrVarLstIn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _varLstIn has no default value.
      // _arrVarLstIn has no default value.
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
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta6;
          _varLstIn = tmpMeta7;
          _arrVarLstIn = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_ComponentReference_isArrayElement(threadData, _cref);
          if (1 /* true */ != tmp9) goto goto_2;
          tmpMeta10 = mmc_mk_cons(_varIn, _arrVarLstIn);
          tmpMeta11 = mmc_mk_box2(0, _varLstIn, tmpMeta10);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _varLstIn = tmpMeta12;
          _arrVarLstIn = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(_varIn, _varLstIn);
          tmpMeta15 = mmc_mk_box2(0, tmpMeta14, _arrVarLstIn);
          tmpMeta1 = tmpMeta15;
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_addToArrayCrefLst(threadData_t *threadData, modelica_metatype _tplLstIn, modelica_metatype _varIn, modelica_metatype _tplRef, modelica_metatype _tplLstFoldIn, modelica_metatype _varLstIn, modelica_metatype *out_varLstOut)
{
  modelica_metatype _tplLstFoldOut = NULL;
  modelica_metatype _varLstOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplLstFoldOut has no default value.
  // _varLstOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _tplLstIn;
    tmp4_2 = _tplRef;
    {
      modelica_integer _idx0;
      modelica_integer _idx1;
      modelica_metatype _varLst = NULL;
      modelica_metatype _cref0 = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _crefTailRef = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _tplLst = NULL;
      modelica_metatype _tailCrefs0 = NULL;
      modelica_metatype _tailCrefs1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx0 has no default value.
      // _idx1 has no default value.
      // _varLst has no default value.
      // _cref0 has no default value.
      // _cref1 has no default value.
      // _crefTailRef has no default value.
      // _rest has no default value.
      // _tplLst has no default value.
      // _tailCrefs0 has no default value.
      // _tailCrefs1 has no default value.
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
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (listEmpty(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmpMeta15);
          tmpMeta17 = MMC_CDR(tmpMeta15);
          if (!listEmpty(tmpMeta17)) goto tmp3_end;
          _cref0 = tmpMeta8;
          _idx0 = tmp10  /* pattern as ty=Integer */;
          _tailCrefs0 = tmpMeta11;
          _rest = tmpMeta7;
          _cref1 = tmpMeta12;
          _idx1 = tmp14  /* pattern as ty=Integer */;
          _crefTailRef = tmpMeta16;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_ComponentReferenceBasics_crefEqual(threadData, _cref0, _cref1);
          if (1 /* true */ != tmp18) goto goto_2;

          if(omc_List_notMember(threadData, _crefTailRef, _tailCrefs0))
          {
            tmpMeta19 = mmc_mk_cons(_crefTailRef, _tailCrefs0);
            _tailCrefs0 = tmpMeta19;

            tmpMeta20 = mmc_mk_cons(_varIn, _varLstIn);
            _varLst = tmpMeta20;
          }
          else
          {
            _varLst = _varLstIn;
          }

          tmpMeta22 = mmc_mk_box3(0, _cref0, mmc_mk_integer(modelica_integer_max((modelica_integer)(_idx0),(modelica_integer)(_idx1))), _tailCrefs0);
          tmpMeta21 = mmc_mk_cons(tmpMeta22, _rest);
          _tplLst = tmpMeta21;

          _tplLst = omc_List_append__reverse(threadData, _tplLst, _tplLstFoldIn);
          tmpMeta[0+0] = _tplLst;
          tmpMeta[0+1] = _varLst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          
          _cref0 = tmpMeta25;
          _idx0 = tmp27  /* pattern as ty=Integer */;
          _tailCrefs0 = tmpMeta28;
          _rest = tmpMeta24;
          _cref1 = tmpMeta29;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp30 = omc_ComponentReferenceBasics_crefEqual(threadData, _cref0, _cref1);
          if (0 /* false */ != tmp30) goto goto_2;
          tmpMeta32 = mmc_mk_box3(0, _cref0, mmc_mk_integer(_idx0), _tailCrefs0);
          tmpMeta31 = mmc_mk_cons(tmpMeta32, _tplLstFoldIn);
          tmpMeta[0+0] = omc_Vectorization_addToArrayCrefLst(threadData, _rest, _varIn, _tplRef, tmpMeta31, _varLstIn, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cref1 = tmpMeta33;
          _idx1 = tmp35  /* pattern as ty=Integer */;
          _tailCrefs1 = tmpMeta36;
          /* Pattern matching succeeded */
          tmpMeta38 = mmc_mk_box3(0, _cref1, mmc_mk_integer(_idx1), _tailCrefs1);
          tmpMeta37 = mmc_mk_cons(tmpMeta38, _tplLstFoldIn);
          _tplLst = tmpMeta37;
          tmpMeta39 = mmc_mk_cons(_varIn, _varLstIn);
          tmpMeta[0+0] = _tplLst;
          tmpMeta[0+1] = tmpMeta39;
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
  _tplLstFoldOut = tmpMeta[0+0];
  _varLstOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_varLstOut) { *out_varLstOut = _varLstOut; }
  return _tplLstFoldOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getArrayVarCrefs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _varIn;
    tmp4_2 = _tplIn;
    {
      modelica_integer _idx;
      modelica_metatype _arrVars = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _crefHead = NULL;
      modelica_metatype _crefTailOpt = NULL;
      modelica_metatype _crefLst = NULL;
      modelica_metatype _tplLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx has no default value.
      // _arrVars has no default value.
      // _cref has no default value.
      // _crefHead has no default value.
      // _crefTailOpt has no default value.
      // _crefLst has no default value.
      // _tplLst has no default value.
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
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _cref = tmpMeta6;
          _tplLst = tmpMeta7;
          _arrVars = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_ComponentReference_isArrayElement(threadData, _cref);
          if (1 /* true */ != tmp9) goto goto_2;

          _crefHead = omc_ComponentReference_stripArrayCref(threadData, _cref ,&_idx ,&_crefTailOpt);

          if(isSome(_crefTailOpt))
          {
            tmpMeta10 = mmc_mk_cons(omc_Util_getOption(threadData, _crefTailOpt), MMC_REFSTRUCTLIT(mmc_nil));
            _crefLst = tmpMeta10;
          }
          else
          {
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            _crefLst = tmpMeta11;
          }

          tmpMeta12 = mmc_mk_box3(0, _crefHead, mmc_mk_integer(_idx), _crefLst);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _tplLst = omc_Vectorization_addToArrayCrefLst(threadData, _tplLst, _varIn, tmpMeta12, tmpMeta13, _arrVars ,&_arrVars);
          tmpMeta14 = mmc_mk_box2(0, _tplLst, _arrVars);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tplIn;
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_setIteratorSubscriptCrefinEquation(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _tplIn;
    {
      modelica_integer _min;
      modelica_metatype _path = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _refCref = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _iterator = NULL;
      modelica_metatype _iterator1 = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _eLst = NULL;
      modelica_metatype _constCrefs = NULL;
      modelica_metatype _refCrefMinMax = NULL;
      modelica_metatype _crefMinMax0 = NULL;
      modelica_metatype _crefMinMax1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min has no default value.
      // _path has no default value.
      // _attr has no default value.
      // _cref has no default value.
      // _refCref has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _iterator has no default value.
      // _iterator1 has no default value.
      // _op has no default value.
      // _ty has no default value.
      // _eLst has no default value.
      // _constCrefs has no default value.
      // _refCrefMinMax has no default value.
      // _crefMinMax0 has no default value.
      // _crefMinMax1 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cref = tmpMeta6;
          _ty = tmpMeta7;
          _crefMinMax0 = tmpMeta8;
          _iterator = tmpMeta9;
          _constCrefs = tmpMeta10;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp11 = (!omc_List_exist1(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefEqual, _cref));
          if (1 /* true */ != tmp11) goto goto_2;

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _crefMinMax1 = tmpMeta12;

          {
            modelica_metatype _refCrefMinMax;
            for (tmpMeta13 = _crefMinMax0; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _refCrefMinMax = MMC_CAR(tmpMeta13);
              /* Pattern-matching assignment */
              tmpMeta14 = _refCrefMinMax;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
              tmp17 = mmc_unbox_integer(tmpMeta16);
              _refCref = tmpMeta15;
              _min = tmp17  /* pattern as ty=Integer */;

              if(omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, _refCref, _cref))
              {
                tmpMeta18 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(((modelica_integer) -1) + _min));
                tmpMeta19 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _iterator, _OMC_LIT1, tmpMeta18);
                _iterator1 = omc_ExpressionSimplify_simplify(threadData, tmpMeta19, NULL);

                tmpMeta21 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, _iterator1);
                tmpMeta20 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
                _cref = omc_Vectorization_replaceFirstSubsInCref(threadData, _cref, tmpMeta20);
              }
              else
              {
                tmpMeta22 = mmc_mk_cons(_refCrefMinMax, _crefMinMax1);
                _crefMinMax1 = tmpMeta22;
              }
            }
          }
          tmpMeta24 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _ty);
          tmpMeta25 = mmc_mk_box3(0, _crefMinMax1, _iterator, _constCrefs);
          tmpMeta[0+0] = tmpMeta24;
          tmpMeta[0+1] = tmpMeta25;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _exp1 = tmpMeta26;
          _op = tmpMeta27;
          _exp2 = tmpMeta28;
          _crefMinMax0 = tmpMeta29;
          _iterator = tmpMeta30;
          _constCrefs = tmpMeta31;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta36 = omc_Vectorization_setIteratorSubscriptCrefinEquation(threadData, _exp1, _tplIn, &tmpMeta32);
          _exp1 = tmpMeta36;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
          _crefMinMax0 = tmpMeta33;
          _iterator = tmpMeta34;
          _constCrefs = tmpMeta35;

          /* Pattern-matching tuple assignment */
          tmpMeta41 = mmc_mk_box3(0, _crefMinMax0, _iterator, _constCrefs);
          tmpMeta42 = omc_Vectorization_setIteratorSubscriptCrefinEquation(threadData, _exp2, tmpMeta41, &tmpMeta37);
          _exp2 = tmpMeta42;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 1));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 3));
          _crefMinMax0 = tmpMeta38;
          _iterator = tmpMeta39;
          _constCrefs = tmpMeta40;
          tmpMeta43 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp1, _op, _exp2);
          tmpMeta44 = mmc_mk_box3(0, _crefMinMax0, _iterator, _constCrefs);
          tmpMeta[0+0] = tmpMeta43;
          tmpMeta[0+1] = tmpMeta44;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _op = tmpMeta45;
          _exp1 = tmpMeta46;
          _crefMinMax0 = tmpMeta47;
          _iterator = tmpMeta48;
          _constCrefs = tmpMeta49;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta54 = omc_Vectorization_setIteratorSubscriptCrefinEquation(threadData, _exp1, _tplIn, &tmpMeta50);
          _exp1 = tmpMeta54;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 1));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 2));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 3));
          _crefMinMax0 = tmpMeta51;
          _iterator = tmpMeta52;
          _constCrefs = tmpMeta53;
          tmpMeta55 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _op, _exp1);
          tmpMeta56 = mmc_mk_box3(0, _crefMinMax0, _iterator, _constCrefs);
          tmpMeta[0+0] = tmpMeta55;
          tmpMeta[0+1] = tmpMeta56;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta57;
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
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _path = tmpMeta57;
          _eLst = tmpMeta58;
          _attr = tmpMeta59;
          _crefMinMax0 = tmpMeta60;
          _iterator = tmpMeta61;
          _constCrefs = tmpMeta62;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta67 = omc_List_mapFold(threadData, _eLst, boxvar_Vectorization_setIteratorSubscriptCrefinEquation, _tplIn, &tmpMeta63);
          _eLst = tmpMeta67;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 1));
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 3));
          _crefMinMax0 = tmpMeta64;
          _iterator = tmpMeta65;
          _constCrefs = tmpMeta66;
          tmpMeta68 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _eLst, _attr);
          tmpMeta69 = mmc_mk_box3(0, _crefMinMax0, _iterator, _constCrefs);
          tmpMeta[0+0] = tmpMeta68;
          tmpMeta[0+1] = tmpMeta69;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _tplIn;
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
  _outExp = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_getCrefIdcsForEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _constCrefs, modelica_metatype _crefMinMaxIn)
{
  modelica_metatype _crefMinMaxOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefMinMaxOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eq;
    tmp4_2 = _crefMinMaxIn;
    {
      modelica_integer _pos;
      modelica_integer _max;
      modelica_integer _min;
      modelica_integer _sub;
      modelica_metatype _cref = NULL;
      modelica_metatype _refCref = NULL;
      modelica_metatype _refCrefMinMax = NULL;
      modelica_metatype _crefMinMax = NULL;
      modelica_metatype _eqCrefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pos has no default value.
      // _max has no default value.
      // _min has no default value.
      // _sub has no default value.
      // _cref has no default value.
      // _refCref has no default value.
      // _refCrefMinMax has no default value.
      // _crefMinMax has no default value.
      // _eqCrefs has no default value.
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
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          _crefMinMax = tmp4_2;
          /* Pattern matching succeeded */
          _eqCrefs = omc_BackendEquation_equationCrefs(threadData, _eq);

          _eqCrefs = omc_List_filter1OnTrue(threadData, _eqCrefs, boxvar_ComponentReferenceBasics_crefNotInLst, _constCrefs);

          {
            modelica_metatype _cref;
            for (tmpMeta6 = _eqCrefs; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _cref = MMC_CAR(tmpMeta6);
              /* Pattern-matching assignment */
              tmpMeta7 = omc_ComponentReferenceBasics_crefSubs(threadData, _cref);
              if (listEmpty(tmpMeta7)) goto goto_2;
              tmpMeta8 = MMC_CAR(tmpMeta7);
              tmpMeta9 = MMC_CDR(tmpMeta7);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto goto_2;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto goto_2;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
              tmp12 = mmc_unbox_integer(tmpMeta11);
              if (!listEmpty(tmpMeta9)) goto goto_2;
              _sub = tmp12  /* pattern as ty=Integer */;

              _pos = ((modelica_integer) 1);

              {
                modelica_metatype _refCrefMinMax;
                for (tmpMeta13 = _crefMinMax; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
                {
                  _refCrefMinMax = MMC_CAR(tmpMeta13);
                  /* Pattern-matching assignment */
                  tmpMeta14 = _refCrefMinMax;
                  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
                  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
                  tmp17 = mmc_unbox_integer(tmpMeta16);
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
                  tmp19 = mmc_unbox_integer(tmpMeta18);
                  _refCref = tmpMeta15;
                  _min = tmp17  /* pattern as ty=Integer */;
                  _max = tmp19  /* pattern as ty=Integer */;

                  if(omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, _refCref, _cref))
                  {
                    _max = modelica_integer_max((modelica_integer)(_max),(modelica_integer)(_sub));

                    _min = modelica_integer_min((modelica_integer)(_min),(modelica_integer)(_sub));

                    tmpMeta20 = mmc_mk_box3(0, _refCref, mmc_mk_integer(_min), mmc_mk_integer(_max));
                    _crefMinMax = omc_List_replaceAt(threadData, tmpMeta20, _pos, _crefMinMax);
                  }

                  _pos = ((modelica_integer) 1) + _pos;
                }
              }
            }
          }
          tmpMeta1 = _crefMinMax;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefMinMaxIn;
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
  _crefMinMaxOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefMinMaxOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildBackendDAEForEquations(threadData_t *threadData, modelica_metatype _classEqs, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _classEqs;
    {
      modelica_integer _min;
      modelica_integer _max;
      modelica_integer _numCrefs;
      modelica_metatype _eq = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _iterator = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _similarEqs = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _crefs2 = NULL;
      modelica_metatype _crefMinMax = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min has no default value.
      // _max has no default value.
      // _numCrefs has no default value.
      // _eq has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _iterator has no default value.
      // _source has no default value.
      // _attr has no default value.
      // _similarEqs has no default value.
      // _rest has no default value.
      // _crefs has no default value.
      // _crefs2 has no default value.
      // _crefMinMax has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _foldIn;
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
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eq = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = _eq;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,4) == 0) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          _lhs = tmpMeta9;
          _rhs = tmpMeta10;
          _source = tmpMeta11;
          _attr = tmpMeta12;

          /* Pattern-matching assignment */
          tmp13 = omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, omc_Expression_expCref(threadData, _lhs), omc_Expression_expCref(threadData, _rhs));
          if (1 /* true */ != tmp13) goto goto_2;

          _similarEqs = omc_List_separate1OnTrue(threadData, _classEqs, boxvar_Vectorization_equationEqualNoCrefSubs, _eq ,&_rest);

          _iterator = _OMC_LIT4;

          tmpMeta14 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(listLength(_similarEqs)));
          tmpMeta15 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _source, _attr);
          tmpMeta16 = mmc_mk_box7(11, &BackendDAE_Equation_FOR__EQUATION__desc, _iterator, _OMC_LIT5, tmpMeta14, tmpMeta15, _source, _attr);
          _eq = tmpMeta16;
          tmpMeta17 = mmc_mk_cons(_eq, _foldIn);
          tmpMeta1 = omc_Vectorization_buildBackendDAEForEquations(threadData, _rest, tmpMeta17);
          goto tmp3_done;
        }
        case 2: {
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
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          _eq = tmpMeta18;
          _rest = tmpMeta19;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta20 = _eq;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,4) == 0) goto goto_2;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 5));
          _lhs = tmpMeta21;
          _rhs = tmpMeta22;
          _source = tmpMeta23;
          _attr = tmpMeta24;

          _similarEqs = omc_List_separate1OnTrue(threadData, _classEqs, boxvar_Vectorization_equationEqualNoCrefSubs, _eq ,&_rest);

          _crefs = omc_BackendEquation_equationCrefs(threadData, _eq);

          _crefs2 = omc_BackendEquation_equationCrefs(threadData, listGet(_similarEqs, ((modelica_integer) 1)));

          _crefs2 = omc_List_intersection1OnTrue(threadData, _crefs, _crefs2, boxvar_ComponentReferenceBasics_crefEqual ,&_crefs ,NULL);

          _numCrefs = listLength(_crefs);

          _crefMinMax = omc_List_thread3Map(threadData, listReverse(_crefs), omc_List_fill(threadData, mmc_mk_integer(((modelica_integer) 999999999)), _numCrefs), omc_List_fill(threadData, mmc_mk_integer(((modelica_integer) 0)), _numCrefs), boxvar_Util_make3Tuple);

          _crefMinMax = omc_List_fold1(threadData, _similarEqs, boxvar_Vectorization_getCrefIdcsForEquation, _crefs2, _crefMinMax);

          _min = ((modelica_integer) 1);

          _max = listLength(_similarEqs);

          _iterator = _OMC_LIT4;

          /* Pattern-matching tuple assignment */
          tmpMeta25 = mmc_mk_box3(0, _crefMinMax, _iterator, _crefs2);
          tmpMeta26 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_Vectorization_setIteratorSubscriptCrefinEquation, tmpMeta25, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,4) == 0) goto goto_2;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 3));
          _lhs = tmpMeta27;
          _rhs = tmpMeta28;

          tmpMeta29 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_min));
          tmpMeta30 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_max));
          tmpMeta31 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _source, _attr);
          tmpMeta32 = mmc_mk_box7(11, &BackendDAE_Equation_FOR__EQUATION__desc, _iterator, tmpMeta29, tmpMeta30, tmpMeta31, _source, _attr);
          _eq = tmpMeta32;
          tmpMeta33 = mmc_mk_cons(_eq, _foldIn);
          tmpMeta1 = omc_Vectorization_buildBackendDAEForEquations(threadData, _rest, tmpMeta33);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _foldIn;
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
  _foldOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsListList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2)
{
  modelica_boolean _outEqual;
  modelica_metatype _expl2 = NULL;
  modelica_metatype _rest_expl2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  // _expl2 has no default value.
  _rest_expl2 = _inExpl2;
  if((listLength(_inExpl1) != listLength(_inExpl2)))
  {
    _outEqual = 0 /* false */;

    goto _return;
  }

  {
    modelica_metatype _expl1;
    for (tmpMeta1 = _inExpl1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _expl1 = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _rest_expl2;
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_CDR(tmpMeta2);
      _expl2 = tmpMeta3;
      _rest_expl2 = tmpMeta4;

      if((!omc_Vectorization_expEqualNoCrefSubsList(threadData, _expl1, _expl2)))
      {
        _outEqual = 0 /* false */;

        goto _return;
      }
    }
  }

  _outEqual = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsListList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_Vectorization_expEqualNoCrefSubsListList(threadData, _inExpl1, _inExpl2);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2)
{
  modelica_boolean _outEqual;
  modelica_metatype _e2 = NULL;
  modelica_metatype _rest_expl2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  // _e2 has no default value.
  _rest_expl2 = _inExpl2;
  if((listLength(_inExpl1) != listLength(_inExpl2)))
  {
    _outEqual = 0 /* false */;

    goto _return;
  }

  {
    modelica_metatype _e1;
    for (tmpMeta1 = _inExpl1; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e1 = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _rest_expl2;
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_CDR(tmpMeta2);
      _e2 = tmpMeta3;
      _rest_expl2 = tmpMeta4;

      if((!omc_Vectorization_expEqualNoCrefSubs(threadData, _e1, _e2)))
      {
        _outEqual = 0 /* false */;

        goto _return;
      }
    }
  }

  _outEqual = 1 /* true */;
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsList(threadData_t *threadData, modelica_metatype _inExpl1, modelica_metatype _inExpl2)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_Vectorization_expEqualNoCrefSubsList(threadData, _inExpl1, _inExpl2);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_expEqualNoCrefSubsOpt(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2)
{
  modelica_boolean _outEqual;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_Vectorization_expEqualNoCrefSubs(threadData, _e1, _e2);
          goto tmp3_done;
        }
        case 2: {
          
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
  _outEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_expEqualNoCrefSubsOpt(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_Vectorization_expEqualNoCrefSubsOpt(threadData, _inExp1, _inExp2);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

DLLDirection
modelica_boolean omc_Vectorization_expEqualNoCrefSubs(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2)
{
  modelica_boolean _outEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqual has no default value.
  if(referenceEq(_inExp1, _inExp2))
  {
    _outEqual = 1 /* true */;

    goto _return;
  }

  if((valueConstructor(_inExp1) != valueConstructor(_inExp2)))
  {
    _outEqual = 0 /* false */;

    goto _return;
  }

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp1;
    {
      modelica_integer _i;
      modelica_real _r;
      modelica_string _s = NULL;
      modelica_boolean _b;
      modelica_metatype _p = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _oe = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _expl2 = NULL;
      modelica_metatype _mexpl = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _subs = NULL;
      int tmp4;
      // _i has no default value.
      // _r has no default value.
      // _s has no default value.
      // _b has no default value.
      // _p has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _oe has no default value.
      // _expl has no default value.
      // _expl2 has no default value.
      // _mexpl has no default value.
      // _op has no default value.
      // _cr has no default value.
      // _ty has no default value.
      // _subs has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,1) == 0) goto goto_2;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _i = tmp7  /* pattern as ty=Integer */;
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)))) == _i);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_real(tmpMeta9);
          _r = tmp10  /* pattern as ty=Real */;
          tmp1 = (mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)))) == _r);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,1) == 0) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _s = tmpMeta12;
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _s));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta13 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,1) == 0) goto goto_2;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _b = tmp15  /* pattern as ty=Boolean */;
          tmp1 = (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)))) == !_b);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta16 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,5,2) == 0) goto goto_2;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          _p = tmpMeta17;
          tmp1 = omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _p);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta18 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,2) == 0) goto goto_2;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _cr = tmpMeta19;
          tmp1 = omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _cr);
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta20 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,16,3) == 0) goto goto_2;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          _ty = tmpMeta21;
          _expl = tmpMeta22;
          tmp1 = (valueEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _ty) && omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _expl));
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta23 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,17,3) == 0) goto goto_2;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 4));
          _ty = tmpMeta24;
          _mexpl = tmpMeta25;
          tmp1 = (valueEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _ty) && omc_Vectorization_expEqualNoCrefSubsListList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _mexpl));
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta26 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,7,3) == 0) goto goto_2;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 4));
          _e1 = tmpMeta27;
          _op = tmpMeta28;
          _e2 = tmpMeta29;
          tmp1 = ((omc_Expression_operatorEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _op) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e1)) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _e2));
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta30 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,9,3) == 0) goto goto_2;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 4));
          _e1 = tmpMeta31;
          _op = tmpMeta32;
          _e2 = tmpMeta33;
          tmp1 = ((omc_Expression_operatorEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _op) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e1)) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _e2));
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta34 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,8,2) == 0) goto goto_2;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          _op = tmpMeta35;
          _e = tmpMeta36;
          tmp1 = (omc_Expression_operatorEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _op) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e));
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta37 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,10,2) == 0) goto goto_2;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 3));
          _op = tmpMeta38;
          _e = tmpMeta39;
          tmp1 = (omc_Expression_operatorEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _op) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e));
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta40 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,11,5) == 0) goto goto_2;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 4));
          _e1 = tmpMeta41;
          _op = tmpMeta42;
          _e2 = tmpMeta43;
          tmp1 = ((omc_Expression_operatorEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _op) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e1)) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _e2));
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta44 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,12,3) == 0) goto goto_2;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 4));
          _e = tmpMeta45;
          _e1 = tmpMeta46;
          _e2 = tmpMeta47;
          tmp1 = ((omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e1)) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _e2));
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta48 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,13,3) == 0) goto goto_2;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 3));
          _p = tmpMeta49;
          _expl = tmpMeta50;
          tmp1 = (omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _p) && omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _expl));
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta51 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,14,4) == 0) goto goto_2;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 3));
          _p = tmpMeta52;
          _expl = tmpMeta53;
          tmp1 = (omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _p) && omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _expl));
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta54 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,15,4) == 0) goto goto_2;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 3));
          _p = tmpMeta55;
          _expl = tmpMeta56;
          tmp1 = (omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _p) && omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _expl));
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta57 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,18,4) == 0) goto goto_2;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 3));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 4));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 5));
          _e1 = tmpMeta58;
          _oe = tmpMeta59;
          _e2 = tmpMeta60;
          tmp1 = ((omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e1) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 5))), _e2)) && omc_Vectorization_expEqualNoCrefSubsOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 4))), _oe));
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta61 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,19,1) == 0) goto goto_2;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          _expl = tmpMeta62;
          tmp1 = omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _expl);
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta63 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,20,2) == 0) goto goto_2;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 3));
          _ty = tmpMeta64;
          _e = tmpMeta65;
          tmp1 = (valueEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _ty) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e));
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp67;
            modelica_metatype tmpMeta68;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp69;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3)));
            tmpMeta68 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta68; /* defaultValue */
            tmp67 = &__omcQ_24tmpVar1;
            while(1) {
              tmp69 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp69--;
              }
              if (tmp69 == 0) {
                __omcQ_24tmpVar0 = omc_Expression_getSubscriptExp(threadData, _sub);
                *tmp67 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp67 = &MMC_CDR(*tmp67);
              } else if (tmp69 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp67 = mmc_mk_nil();
            tmpMeta66 = __omcQ_24tmpVar1;
          }
          _expl = tmpMeta66;

          /* Pattern-matching assignment */
          tmpMeta70 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta70,21,2) == 0) goto goto_2;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 2));
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 3));
          _e = tmpMeta71;
          _subs = tmpMeta72;

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp74;
            modelica_metatype tmpMeta75;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp76;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = _subs;
            tmpMeta75 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta75; /* defaultValue */
            tmp74 = &__omcQ_24tmpVar3;
            while(1) {
              tmp76 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp76--;
              }
              if (tmp76 == 0) {
                __omcQ_24tmpVar2 = omc_Expression_getSubscriptExp(threadData, _sub);
                *tmp74 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp74 = &MMC_CDR(*tmp74);
              } else if (tmp76 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp74 = mmc_mk_nil();
            tmpMeta73 = __omcQ_24tmpVar3;
          }
          _expl2 = tmpMeta73;
          tmp1 = (omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e) && omc_Vectorization_expEqualNoCrefSubsList(threadData, _expl, _expl2));
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta77 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta77,24,2) == 0) goto goto_2;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 2));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 3));
          _e = tmpMeta78;
          _oe = tmpMeta79;
          tmp1 = (omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e) && omc_Vectorization_expEqualNoCrefSubsOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _oe));
          goto tmp3_done;
        }
        case 30: {
          
          /* Pattern matching succeeded */
          tmp1 = valueEq(_inExp1, _inExp2);
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta80 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta80,28,1) == 0) goto goto_2;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta80), 2));
          _expl = tmpMeta81;
          tmp1 = omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _expl);
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta82 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta82,29,2) == 0) goto goto_2;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 2));
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 3));
          _e1 = tmpMeta83;
          _e2 = tmpMeta84;
          tmp1 = (omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _e1) && omc_Vectorization_expEqualNoCrefSubs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _e2));
          goto tmp3_done;
        }
        case 33: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta85 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,30,1) == 0) goto goto_2;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta85), 2));
          _expl = tmpMeta86;
          tmp1 = omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _expl);
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta87 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta87,31,1) == 0) goto goto_2;
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta87), 2));
          _oe = tmpMeta88;
          tmp1 = omc_Vectorization_expEqualNoCrefSubsOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _oe);
          goto tmp3_done;
        }
        case 35: {
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta89 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta89,32,5) == 0) goto goto_2;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 2));
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 3));
          _p = tmpMeta90;
          _expl = tmpMeta91;
          tmp1 = (omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2))), _p) && omc_Vectorization_expEqualNoCrefSubsList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 3))), _expl));
          goto tmp3_done;
        }
        case 36: {
          
          /* Pattern matching succeeded */
          tmp1 = valueEq(_inExp1, _inExp2);
          goto tmp3_done;
        }
        case 37: {
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta92 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta92,34,1) == 0) goto goto_2;
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta92), 2));
          _e = tmpMeta93;
          /* Tail recursive call */
          _inExp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)));
          _inExp2 = _e;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 38: {
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta94 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta94,35,2) == 0) goto goto_2;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta94), 2));
          _e = tmpMeta95;
          /* Tail recursive call */
          _inExp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)));
          _inExp2 = _e;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 39: {
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_integer tmp98;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta96 = _inExp2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta96,36,2) == 0) goto goto_2;
          tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta96), 2));
          tmp98 = mmc_unbox_integer(tmpMeta97);
          _i = tmp98  /* pattern as ty=Integer */;
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp1), 2)))) == _i);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _outEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outEqual;
}
modelica_metatype boxptr_Vectorization_expEqualNoCrefSubs(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2)
{
  modelica_boolean _outEqual;
  modelica_metatype out_outEqual;
  _outEqual = omc_Vectorization_expEqualNoCrefSubs(threadData, _inExp1, _inExp2);
  out_outEqual = mmc_mk_icon(_outEqual);
  return out_outEqual;
}

DLLDirection
modelica_boolean omc_Vectorization_equationEqualNoCrefSubs(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _e1;
    tmp4_2 = _e2;
    {
      modelica_metatype _e11 = NULL;
      modelica_metatype _e12 = NULL;
      modelica_metatype _e21 = NULL;
      modelica_metatype _e22 = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_metatype _alg1 = NULL;
      modelica_metatype _alg2 = NULL;
      modelica_metatype _explst1 = NULL;
      modelica_metatype _explst2 = NULL;
      modelica_metatype _terms1 = NULL;
      modelica_metatype _terms2 = NULL;
      modelica_metatype _crefs1 = NULL;
      modelica_metatype _crefs2 = NULL;
      modelica_metatype _commCrefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e11 has no default value.
      // _e12 has no default value.
      // _e21 has no default value.
      // _e22 has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _cr1 has no default value.
      // _cr2 has no default value.
      // _alg1 has no default value.
      // _alg2 has no default value.
      // _explst1 has no default value.
      // _explst2 has no default value.
      // _terms1 has no default value.
      // _terms2 has no default value.
      // _crefs1 has no default value.
      // _crefs2 has no default value.
      // _commCrefs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = referenceEq(_e1, _e2);
          if (1 /* true */ != tmp6) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _e11 = tmpMeta7;
          _e12 = tmpMeta8;
          _e21 = tmpMeta9;
          _e22 = tmpMeta10;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          if((omc_Vectorization_expEqualNoCrefSubs(threadData, _e11, _e21) && omc_Vectorization_expEqualNoCrefSubs(threadData, _e12, _e22)))
          {
            _res = 1 /* true */;
          }
          else
          {
            _crefs1 = omc_BackendEquation_equationCrefs(threadData, _e1);

            _crefs2 = omc_BackendEquation_equationCrefs(threadData, _e2);

            _commCrefs = omc_List_intersectionOnTrue(threadData, _crefs1, _crefs2, boxvar_ComponentReferenceBasics_crefEqualWithoutSubs);

            if(((listLength(_crefs1) == listLength(_commCrefs)) && (listLength(_crefs2) == listLength(_commCrefs))))
            {
              _terms1 = listAppend(omc_Expression_allTerms(threadData, _e11), omc_Expression_allTerms(threadData, _e12));

              _terms2 = listAppend(omc_Expression_allTerms(threadData, _e21), omc_Expression_allTerms(threadData, _e22));

              omc_List_intersection1OnTrue(threadData, _terms1, _terms2, boxvar_Vectorization_expEqualNoCrefSubs ,&_terms1 ,&_terms2);

              _res = (listEmpty(_terms1) && listEmpty(_terms2));
            }
            else
            {
              _res = 0 /* false */;
            }
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _e11 = tmpMeta11;
          _e12 = tmpMeta12;
          _e21 = tmpMeta13;
          _e22 = tmpMeta14;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = (omc_Vectorization_expEqualNoCrefSubs(threadData, _e11, _e21) && omc_Vectorization_expEqualNoCrefSubs(threadData, _e12, _e22));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,5) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          
          _e11 = tmpMeta15;
          _e12 = tmpMeta16;
          _e21 = tmpMeta17;
          _e22 = tmpMeta18;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = (omc_Vectorization_expEqualNoCrefSubs(threadData, _e11, _e21) && omc_Vectorization_expEqualNoCrefSubs(threadData, _e12, _e22));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,4) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _cr1 = tmpMeta19;
          _exp1 = tmpMeta20;
          _cr2 = tmpMeta21;
          _exp2 = tmpMeta22;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = (omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, _cr1, _cr2) && omc_Vectorization_expEqualNoCrefSubs(threadData, _exp1, _exp2));
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _exp1 = tmpMeta23;
          _exp2 = tmpMeta24;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Vectorization_expEqualNoCrefSubs(threadData, _exp1, _exp2);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,4,5) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _alg1 = tmpMeta25;
          _alg2 = tmpMeta26;
          /* Pattern matching succeeded */
          _explst1 = omc_Algorithm_getAllExps(threadData, _alg1);

          _explst2 = omc_Algorithm_getAllExps(threadData, _alg2);
          tmp1 = omc_List_isEqualOnTrue(threadData, _explst1, _explst2, boxvar_Vectorization_expEqualNoCrefSubs);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
      if (++tmp4 < 8) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_Vectorization_equationEqualNoCrefSubs(threadData_t *threadData, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Vectorization_equationEqualNoCrefSubs(threadData, _e1, _e2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_minmaxTermEqual(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _term)
{
  modelica_boolean _b;
  modelica_metatype _term0 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _term0 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _minmaxTerm;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _term0 = tmpMeta2;

  _b = omc_Vectorization_expEqualNoCrefSubs(threadData, _term0, _term);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_minmaxTermEqual(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _term)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Vectorization_minmaxTermEqual(threadData, _minmaxTerm, _term);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_Vectorization_replaceSubscriptInCrefExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _subsIn, modelica_metatype *out_subsOut)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype _subsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _subsOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _expIn;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _cref = tmpMeta6;
          _ty = tmpMeta7;
          /* Pattern matching succeeded */
          _cref = omc_Vectorization_replaceFirstSubsInCref(threadData, _cref, _subsIn);
          tmpMeta8 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _ty);
          tmpMeta[0+0] = tmpMeta8;
          tmpMeta[0+1] = _subsIn;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _expIn;
          tmpMeta[0+1] = _subsIn;
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
  _subsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_subsOut) { *out_subsOut = _subsOut; }
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations2(threadData_t *threadData, modelica_metatype _minmaxTerm, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype _sumReductionInfo = NULL;
  modelica_metatype _sumExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  _sumReductionInfo = _OMC_LIT22;
  _sumExp = _OMC_LIT25;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _minmaxTerm;
    tmp4_2 = _foldIn;
    {
      modelica_integer _min;
      modelica_integer _max;
      modelica_metatype _exp0 = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _min has no default value.
      // _max has no default value.
      // _exp0 has no default value.
      // _exp1 has no default value.
      // _iter has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _exp1 = tmpMeta6;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = mmc_mk_cons(_exp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_boolean tmp16;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          _exp1 = tmpMeta11;
          _min = tmp13  /* pattern as ty=Integer */;
          _max = tmp15  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp16 = (_min != _max);
          if (1 /* true */ != tmp16) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta17 = omc_Expression_typeof(threadData, _exp1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto goto_2;
          

          omc_List_split1OnTrue(threadData, _rest, boxvar_Vectorization_minmaxTermEqual, _exp1 ,&_rest);

          _iter = _OMC_LIT4;

          tmpMeta19 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, _iter);
          tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
          _exp1 = omc_Expression_traverseExpBottomUp(threadData, _exp1, boxvar_Vectorization_replaceSubscriptInCrefExp, tmpMeta18, NULL);

          tmpMeta22 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_max - _min));
          tmpMeta21 = mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta23 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT0, tmpMeta21);
          tmpMeta24 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_min));
          tmpMeta25 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_max));
          tmpMeta26 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, tmpMeta23, tmpMeta24, mmc_mk_none(), tmpMeta25);
          tmpMeta27 = mmc_mk_box5(3, &DAE_ReductionIterator_REDUCTIONITER__desc, _OMC_LIT23, tmpMeta26, mmc_mk_none(), _OMC_LIT0);
          tmpMeta20 = mmc_mk_cons(tmpMeta27, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta28 = mmc_mk_box4(30, &DAE_Exp_REDUCTION__desc, _OMC_LIT22, _OMC_LIT25, tmpMeta20);
          _exp1 = tmpMeta28;
          tmpMeta29 = mmc_mk_cons(_exp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Vectorization_buildAccumExpInEquations2(threadData, _rest, tmpMeta29);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_1);
          tmpMeta31 = MMC_CDR(tmp4_1);
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 3));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmp4_2);
          tmpMeta38 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta38)) goto tmp3_end;
          _exp1 = tmpMeta32;
          _min = tmp34  /* pattern as ty=Integer */;
          _max = tmp36  /* pattern as ty=Integer */;
          _rest = tmpMeta31;
          _exp0 = tmpMeta37;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp39 = (_min != _max);
          if (1 /* true */ != tmp39) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta40 = omc_Expression_typeof(threadData, _exp1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,1) == 0) goto goto_2;
          

          omc_List_split1OnTrue(threadData, _rest, boxvar_Vectorization_minmaxTermEqual, _exp1 ,&_rest);

          _iter = _OMC_LIT4;

          tmpMeta42 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, _iter);
          tmpMeta41 = mmc_mk_cons(tmpMeta42, MMC_REFSTRUCTLIT(mmc_nil));
          _exp1 = omc_Expression_traverseExpBottomUp(threadData, _exp1, boxvar_Vectorization_replaceSubscriptInCrefExp, tmpMeta41, NULL);

          tmpMeta45 = mmc_mk_box2(3, &DAE_Dimension_DIM__INTEGER__desc, mmc_mk_integer(_max - _min));
          tmpMeta44 = mmc_mk_cons(tmpMeta45, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta46 = mmc_mk_box3(9, &DAE_Type_T__ARRAY__desc, _OMC_LIT0, tmpMeta44);
          tmpMeta47 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_min));
          tmpMeta48 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_max));
          tmpMeta49 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, tmpMeta46, tmpMeta47, mmc_mk_none(), tmpMeta48);
          tmpMeta50 = mmc_mk_box5(3, &DAE_ReductionIterator_REDUCTIONITER__desc, _OMC_LIT23, tmpMeta49, mmc_mk_none(), _OMC_LIT0);
          tmpMeta43 = mmc_mk_cons(tmpMeta50, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta51 = mmc_mk_box4(30, &DAE_Exp_REDUCTION__desc, _OMC_LIT22, _OMC_LIT25, tmpMeta43);
          _exp1 = tmpMeta51;
          tmpMeta53 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, omc_Expression_typeof(threadData, _exp0));
          tmpMeta54 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp0, tmpMeta53, _exp1);
          tmpMeta52 = mmc_mk_cons(tmpMeta54, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Vectorization_buildAccumExpInEquations2(threadData, _rest, tmpMeta52);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta55 = MMC_CAR(tmp4_1);
          tmpMeta56 = MMC_CDR(tmp4_1);
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 1));
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          _exp1 = tmpMeta57;
          _rest = tmpMeta56;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta58 = mmc_mk_cons(_exp1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Vectorization_buildAccumExpInEquations2(threadData, _rest, tmpMeta58);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta59 = MMC_CAR(tmp4_1);
          tmpMeta60 = MMC_CDR(tmp4_1);
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 1));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta62 = MMC_CAR(tmp4_2);
          tmpMeta63 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta63)) goto tmp3_end;
          _exp1 = tmpMeta61;
          _rest = tmpMeta60;
          _exp0 = tmpMeta62;
          /* Pattern matching succeeded */
          tmpMeta65 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, omc_Expression_typeof(threadData, _exp0));
          tmpMeta66 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp0, tmpMeta65, _exp1);
          tmpMeta64 = mmc_mk_cons(tmpMeta66, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = omc_Vectorization_buildAccumExpInEquations2(threadData, _rest, tmpMeta64);
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
  _foldOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations1(threadData_t *threadData, modelica_metatype _termIn, modelica_metatype _minmaxTermsIn)
{
  modelica_metatype _minmaxTermsOut = NULL;
  modelica_integer _pos;
  modelica_integer _idx;
  modelica_integer _min;
  modelica_integer _max;
  modelica_metatype _cref = NULL;
  modelica_metatype _term = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _minmaxTermsOut has no default value.
  // _pos has no default value.
  // _idx has no default value.
  // _min has no default value.
  // _max has no default value.
  // _cref has no default value.
  // _term has no default value.
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
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = omc_Expression_extractCrefsFromExp(threadData, _termIn);
          if (listEmpty(tmpMeta5)) goto goto_1;
          tmpMeta6 = MMC_CAR(tmpMeta5);
          tmpMeta7 = MMC_CDR(tmpMeta5);
          if (!listEmpty(tmpMeta7)) goto goto_1;
          _cref = tmpMeta6;

          /* Pattern-matching assignment */
          tmp8 = omc_ComponentReference_crefHaveSubs(threadData, _cref);
          if (1 /* true */ != tmp8) goto goto_1;

          _pos = omc_List_position1OnTrue(threadData, _minmaxTermsIn, boxvar_Vectorization_minmaxTermEqual, _termIn);

          if((_pos == ((modelica_integer) -1)))
          {
            /* Pattern-matching assignment */
            tmpMeta9 = omc_ComponentReferenceBasics_crefSubs(threadData, _cref);
            if (listEmpty(tmpMeta9)) goto goto_1;
            tmpMeta10 = MMC_CAR(tmpMeta9);
            tmpMeta11 = MMC_CDR(tmpMeta9);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,1) == 0) goto goto_1;
            tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,1) == 0) goto goto_1;
            tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
            tmp14 = mmc_unbox_integer(tmpMeta13);
            if (!listEmpty(tmpMeta11)) goto goto_1;
            _idx = tmp14  /* pattern as ty=Integer */;

            tmpMeta16 = mmc_mk_box3(0, _termIn, mmc_mk_integer(_idx), mmc_mk_integer(_idx));
            tmpMeta15 = mmc_mk_cons(tmpMeta16, _minmaxTermsIn);
            _minmaxTermsOut = tmpMeta15;
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta17 = listGet(_minmaxTermsIn, _pos);
            tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
            tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
            tmp20 = mmc_unbox_integer(tmpMeta19);
            tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
            tmp22 = mmc_unbox_integer(tmpMeta21);
            _term = tmpMeta18;
            _min = tmp20  /* pattern as ty=Integer */;
            _max = tmp22  /* pattern as ty=Integer */;

            /* Pattern-matching assignment */
            tmpMeta23 = omc_ComponentReferenceBasics_crefSubs(threadData, _cref);
            if (listEmpty(tmpMeta23)) goto goto_1;
            tmpMeta24 = MMC_CAR(tmpMeta23);
            tmpMeta25 = MMC_CDR(tmpMeta23);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,2,1) == 0) goto goto_1;
            tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,1) == 0) goto goto_1;
            tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
            tmp28 = mmc_unbox_integer(tmpMeta27);
            if (!listEmpty(tmpMeta25)) goto goto_1;
            _idx = tmp28  /* pattern as ty=Integer */;

            tmpMeta29 = mmc_mk_box3(0, _term, mmc_mk_integer(modelica_integer_min((modelica_integer)(_idx),(modelica_integer)(_min))), mmc_mk_integer(modelica_integer_max((modelica_integer)(_idx),(modelica_integer)(_max))));
            _minmaxTermsOut = omc_List_replaceAt(threadData, tmpMeta29, _pos, _minmaxTermsIn);
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box3(0, _termIn, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_integer(((modelica_integer) -1)));
          tmpMeta30 = mmc_mk_cons(tmpMeta31, _minmaxTermsIn);
          _minmaxTermsOut = tmpMeta30;
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
  return _minmaxTermsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_buildAccumExpInEquations(threadData_t *threadData, modelica_metatype _mixEq, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _mixEq;
    {
      modelica_metatype _rhs = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _allTerms = NULL;
      modelica_metatype _minmaxTerms = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rhs has no default value.
      // _lhs has no default value.
      // _source has no default value.
      // _attr has no default value.
      // _allTerms has no default value.
      // _minmaxTerms has no default value.
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _rhs = tmpMeta6;
          _lhs = tmpMeta7;
          _source = tmpMeta8;
          _attr = tmpMeta9;
          /* Pattern matching succeeded */
          _allTerms = omc_Expression_allTerms(threadData, _lhs);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _minmaxTerms = omc_List_fold(threadData, _allTerms, boxvar_Vectorization_buildAccumExpInEquations1, tmpMeta10);

          /* Pattern-matching assignment */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = omc_Vectorization_buildAccumExpInEquations2(threadData, listReverse(_minmaxTerms), tmpMeta11);
          if (listEmpty(tmpMeta12)) goto goto_2;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (!listEmpty(tmpMeta14)) goto goto_2;
          _lhs = tmpMeta13;

          _allTerms = omc_Expression_allTerms(threadData, _rhs);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _minmaxTerms = omc_List_fold(threadData, _allTerms, boxvar_Vectorization_buildAccumExpInEquations1, tmpMeta15);

          /* Pattern-matching assignment */
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = omc_Vectorization_buildAccumExpInEquations2(threadData, listReverse(_minmaxTerms), tmpMeta16);
          if (listEmpty(tmpMeta17)) goto goto_2;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          if (!listEmpty(tmpMeta19)) goto goto_2;
          _rhs = tmpMeta18;
          tmpMeta21 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _rhs, _lhs, _source, _attr);
          tmpMeta20 = mmc_mk_cons(tmpMeta21, _foldIn);
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta22 = mmc_mk_cons(_mixEq, _foldIn);
          tmpMeta1 = tmpMeta22;
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
  _foldOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Vectorization_varIsEqualCrefWithoutSubs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _crefIn)
{
  modelica_boolean _b;
  modelica_metatype _cref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _cref has no default value.
  _cref = omc_BackendVariable_varCref(threadData, _varIn);

  _b = omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, _cref, _crefIn);
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Vectorization_varIsEqualCrefWithoutSubs(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _crefIn)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Vectorization_varIsEqualCrefWithoutSubs(threadData, _varIn, _crefIn);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Vectorization_unexpandArrayVariables(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _varsIn;
    {
      modelica_metatype _var = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _scalars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _cref has no default value.
      // _rest has no default value.
      // _scalars has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _foldIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _var = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _cref = omc_BackendVariable_varCref(threadData, _var);

          /* Pattern-matching assignment */
          tmp8 = omc_ComponentReference_crefHaveSubs(threadData, _cref);
          if (1 /* true */ != tmp8) goto goto_2;

          _scalars = omc_List_split1OnTrue(threadData, _rest, boxvar_Vectorization_varIsEqualCrefWithoutSubs, _cref ,&_rest);

          tmpMeta10 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(((modelica_integer) 1) + listLength(_scalars)));
          tmpMeta11 = mmc_mk_box5(21, &DAE_Exp_RANGE__desc, omc_BackendVariable_varType(threadData, _var), _OMC_LIT5, mmc_mk_none(), tmpMeta10);
          tmpMeta12 = mmc_mk_box2(5, &DAE_Subscript_INDEX__desc, tmpMeta11);
          tmpMeta9 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          _cref = omc_Vectorization_replaceFirstSubsInCref(threadData, _cref, tmpMeta9);

          _var = omc_BackendVariable_copyVarNewName(threadData, _cref, _var);
          tmpMeta13 = mmc_mk_cons(_var, _foldIn);
          tmpMeta1 = omc_Vectorization_unexpandArrayVariables(threadData, _rest, tmpMeta13);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          _var = tmpMeta14;
          _rest = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_cons(_var, _foldIn);
          tmpMeta1 = omc_Vectorization_unexpandArrayVariables(threadData, _rest, tmpMeta16);
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
  _foldOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

DLLDirection
modelica_metatype omc_Vectorization_collectForLoops(threadData_t *threadData, modelica_metatype _varsIn, modelica_metatype _eqsIn, modelica_metatype *out_eqsOut)
{
  modelica_metatype _varsOut = NULL;
  modelica_metatype _eqsOut = NULL;
  modelica_metatype _arrayCrefs = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _arrayVars = NULL;
  modelica_metatype _forEqs = NULL;
  modelica_metatype _mixEqs = NULL;
  modelica_metatype _nonArrEqs = NULL;
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
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsOut has no default value.
  // _eqsOut has no default value.
  // _arrayCrefs has no default value.
  // _varLst has no default value.
  // _arrayVars has no default value.
  // _forEqs has no default value.
  // _mixEqs has no default value.
  // _nonArrEqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_List_fold(threadData, _varsIn, boxvar_Vectorization_getArrayVars, _OMC_LIT26);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _varLst = tmpMeta2;
  _arrayVars = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = omc_List_fold(threadData, _arrayVars, boxvar_Vectorization_getArrayVarCrefs, _OMC_LIT26);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  _arrayCrefs = tmpMeta5;

  /* Pattern-matching assignment */
  tmpMeta6 = omc_List_fold1(threadData, _eqsIn, boxvar_Vectorization_dispatchLoopEquations, omc_List_map(threadData, _arrayCrefs, boxvar_Util_tuple31), _OMC_LIT27);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
  _forEqs = tmpMeta7;
  _mixEqs = tmpMeta8;
  _nonArrEqs = tmpMeta9;

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _forEqs = omc_Vectorization_buildBackendDAEForEquations(threadData, _forEqs, tmpMeta10);

  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _mixEqs = listReverse(omc_List_fold(threadData, _mixEqs, boxvar_Vectorization_buildAccumExpInEquations, tmpMeta11));

  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _arrayVars = omc_Vectorization_unexpandArrayVariables(threadData, _arrayVars, tmpMeta12);

  _eqsOut = listAppend(_forEqs, listAppend(_mixEqs, _nonArrEqs));

  _varsOut = listAppend(_arrayVars, _varLst);
  _return: OMC_LABEL_UNUSED
  if (out_eqsOut) { *out_eqsOut = _eqsOut; }
  return _varsOut;
}

