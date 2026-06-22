#include "omc_simulation_settings.h"
#include "InlineArrayEquations.h"
#define _OMC_LIT0_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,9,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,41,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "- InlineArrayEquations.generateScalarArrayEqns2 failed on: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,59,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#include "util/modelica.h"

#include "InlineArrayEquations_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_generateScalarArrayEqns2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inSource, modelica_metatype _eqAttr, modelica_metatype _eqExp, modelica_metatype _iEqns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_generateScalarArrayEqns2,2,0) {(void*) boxptr_InlineArrayEquations_generateScalarArrayEqns2,0}};
#define boxvar_InlineArrayEquations_generateScalarArrayEqns2 MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_generateScalarArrayEqns2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns1(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inAccEqnLst, modelica_boolean *out_outFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns1(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inAccEqnLst, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns1,2,0) {(void*) boxptr_InlineArrayEquations_getScalarArrayEqns1,0}};
#define boxvar_InlineArrayEquations_getScalarArrayEqns1 MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns0(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype _inAccEqnLst, modelica_boolean _inFound, modelica_boolean *out_outFound);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns0(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype _inAccEqnLst, modelica_metatype _inFound, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns0,2,0) {(void*) boxptr_InlineArrayEquations_getScalarArrayEqns0,0}};
#define boxvar_InlineArrayEquations_getScalarArrayEqns0 MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_inlineArrayEqn1(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_boolean _inOptimized, modelica_metatype *out_outShared, modelica_boolean *out_outOptimized);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_inlineArrayEqn1(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_metatype _inOptimized, modelica_metatype *out_outShared, modelica_metatype *out_outOptimized);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_inlineArrayEqn1,2,0) {(void*) boxptr_InlineArrayEquations_inlineArrayEqn1,0}};
#define boxvar_InlineArrayEquations_inlineArrayEqn1 MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_inlineArrayEqn1)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_generateScalarArrayEqns2(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype _inSource, modelica_metatype _eqAttr, modelica_metatype _eqExp, modelica_metatype _iEqns)
{
  modelica_metatype _oEqns = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oEqns has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iEqns;
    {
      modelica_metatype _tp = NULL;
      modelica_integer _size;
      modelica_integer _i;
      modelica_metatype _recordSize = NULL;
      modelica_metatype _dims = NULL;
      modelica_metatype _ds = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _eqns = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tp has no default value.
      // _size has no default value.
      // _i has no default value.
      // _recordSize has no default value.
      // _dims has no default value.
      // _ds has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _eqns has no default value.
      // _source has no default value.
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
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _i = tmp7  /* pattern as ty=Integer */;
          _eqns = tmpMeta8;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _inExp1);

          /* Pattern-matching assignment */
          tmp9 = omc_DAEUtil_expTypeComplex(threadData, _tp);
          if (1 /* true */ != tmp9) goto goto_2;

          _size = omc_Expression_sizeOf(threadData, _tp);

          tmpMeta10 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _inExp1, _inExp2);
          tmpMeta11 = mmc_mk_box4(7, &DAE_SymbolicOperation_OP__SCALARIZE__desc, _eqExp, mmc_mk_integer(_i), tmpMeta10);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _inSource, tmpMeta11);
          tmpMeta13 = mmc_mk_box6(9, &BackendDAE_Equation_COMPLEX__EQUATION__desc, mmc_mk_integer(_size), _inExp1, _inExp2, _source, _eqAttr);
          tmpMeta12 = mmc_mk_cons(tmpMeta13, _eqns);
          tmpMeta14 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _i), tmpMeta12);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _i = tmp16  /* pattern as ty=Integer */;
          _eqns = tmpMeta17;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _inExp1);

          /* Pattern-matching assignment */
          tmp18 = omc_DAEUtil_expTypeArray(threadData, _tp);
          if (1 /* true */ != tmp18) goto goto_2;

          _dims = omc_Expression_arrayDimension(threadData, _tp);

          _tp = omc_DAEUtil_expTypeElementType(threadData, _tp);

          if(omc_DAEUtil_expTypeComplex(threadData, _tp))
          {
            _recordSize = mmc_mk_some(mmc_mk_integer(omc_Expression_sizeOf(threadData, _tp)));
          }
          else
          {
            _recordSize = mmc_mk_none();
          }

          _ds = omc_Expression_dimensionsSizes(threadData, _dims);

          tmpMeta19 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _inExp1, _inExp2);
          tmpMeta20 = mmc_mk_box4(7, &DAE_SymbolicOperation_OP__SCALARIZE__desc, _eqExp, mmc_mk_integer(_i), tmpMeta19);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _inSource, tmpMeta20);
          tmpMeta22 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, _ds, _inExp1, _inExp2, _source, _eqAttr, _recordSize);
          tmpMeta21 = mmc_mk_cons(tmpMeta22, _eqns);
          tmpMeta23 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _i), tmpMeta21);
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _i = tmp25  /* pattern as ty=Integer */;
          _eqns = tmpMeta26;
          /* Pattern matching succeeded */
          _tp = omc_Expression_typeof(threadData, _inExp1);

          _b1 = omc_DAEUtil_expTypeComplex(threadData, _tp);

          _b2 = omc_DAEUtil_expTypeArray(threadData, _tp);

          /* Pattern-matching assignment */
          tmp27 = (_b1 || _b2);
          if (0 /* false */ != tmp27) goto goto_2;

          tmpMeta28 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _inExp1, _inExp2);
          tmpMeta29 = mmc_mk_box4(7, &DAE_SymbolicOperation_OP__SCALARIZE__desc, _eqExp, mmc_mk_integer(_i), tmpMeta28);
          _source = omc_ElementSource_addSymbolicTransformation(threadData, _inSource, tmpMeta29);
          tmpMeta31 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _inExp1, _inExp2, _source, _eqAttr);
          tmpMeta30 = mmc_mk_cons(tmpMeta31, _eqns);
          tmpMeta32 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _i), tmpMeta30);
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp33 = omc_Flags_isSet(threadData, _OMC_LIT2);
          if (1 /* true */ != tmp33) goto goto_2;

          tmpMeta34 = stringAppend(_OMC_LIT3,omc_ExpressionBasics_printExpStr(threadData, _inExp1));
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT4);
          tmpMeta36 = stringAppend(tmpMeta35,omc_ExpressionBasics_printExpStr(threadData, _inExp2));
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT5);
          omc_Debug_traceln(threadData, tmpMeta37);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oEqns = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns1(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inAccEqnLst, modelica_boolean *out_outFound)
{
  modelica_metatype _outEqnLst = NULL;
  modelica_boolean _outFound;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnLst has no default value.
  // _outFound has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEqn;
    {
      modelica_metatype _source = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _ea1 = NULL;
      modelica_metatype _ea2 = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _attr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _ea1 has no default value.
      // _ea2 has no default value.
      // _eqns has no default value.
      // _attr has no default value.
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
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          _source = tmpMeta8;
          _attr = tmpMeta9;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if((omc_Expression_isArray(threadData, _lhs) || omc_Expression_isMatrix(threadData, _lhs)))
          {
            _ea1 = omc_Expression_flattenArrayExpToList(threadData, _lhs);
          }
          else
          {
            _e1 = omc_Expression_extendArrExp(threadData, _lhs, 0 /* false */, NULL);

            _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

            /* Pattern-matching assignment */
            tmp10 = (omc_Expression_isArray(threadData, _e1) || omc_Expression_isMatrix(threadData, _e1));
            if (1 /* true */ != tmp10) goto goto_2;

            _ea1 = omc_Expression_flattenArrayExpToList(threadData, _e1);
          }

          if((omc_Expression_isArray(threadData, _rhs) || omc_Expression_isMatrix(threadData, _rhs)))
          {
            _ea2 = omc_Expression_flattenArrayExpToList(threadData, _rhs);
          }
          else
          {
            _e2 = omc_Expression_extendArrExp(threadData, _rhs, 0 /* false */, NULL);

            _e2 = omc_ExpressionSimplify_simplify(threadData, _e2, NULL);

            /* Pattern-matching assignment */
            tmp11 = (omc_Expression_isArray(threadData, _e2) || omc_Expression_isMatrix(threadData, _e2));
            if (1 /* true */ != tmp11) goto goto_2;

            _ea2 = omc_Expression_flattenArrayExpToList(threadData, _e2);
          }

          /* Pattern-matching assignment */
          tmpMeta12 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _lhs, _rhs);
          tmpMeta13 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), _inAccEqnLst);
          tmpMeta14 = omc_List_threadFold3(threadData, _ea1, _ea2, boxvar_InlineArrayEquations_generateScalarArrayEqns2, _source, _attr, tmpMeta12, tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _eqns = tmpMeta15;
          tmpMeta[0+0] = _eqns;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _lhs = tmpMeta16;
          _rhs = tmpMeta17;
          _source = tmpMeta18;
          _attr = tmpMeta19;
          /* Pattern matching succeeded */
          _ea1 = omc_Expression_splitRecord(threadData, _lhs, omc_Expression_typeof(threadData, _lhs));

          _ea2 = omc_Expression_splitRecord(threadData, _rhs, omc_Expression_typeof(threadData, _rhs));

          /* Pattern-matching assignment */
          tmpMeta20 = mmc_mk_box3(5, &DAE_EquationExp_EQUALITY__EXPS__desc, _lhs, _rhs);
          tmpMeta21 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), _inAccEqnLst);
          tmpMeta22 = omc_List_threadFold3(threadData, _ea1, _ea2, boxvar_InlineArrayEquations_generateScalarArrayEqns2, _source, _attr, tmpMeta20, tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          _eqns = tmpMeta23;
          tmpMeta[0+0] = _eqns;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          tmpMeta24 = mmc_mk_cons(_inEqn, _inAccEqnLst);
          tmpMeta[0+0] = tmpMeta24;
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
  _outEqnLst = tmpMeta[0+0];
  _outFound = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outEqnLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns1(threadData_t *threadData, modelica_metatype _inEqn, modelica_metatype _inAccEqnLst, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outEqnLst = NULL;
  _outEqnLst = omc_InlineArrayEquations_getScalarArrayEqns1(threadData, _inEqn, _inAccEqnLst, &_outFound);
  /* skip box _outEqnLst; list<BackendDAE.Equation> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outEqnLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns0(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype _inAccEqnLst, modelica_boolean _inFound, modelica_boolean *out_outFound)
{
  modelica_metatype _outEqnLst = NULL;
  modelica_boolean _outFound;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnLst has no default value.
  // _outFound has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqnLst;
    {
      modelica_metatype _eqn = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqns1 = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _eqns has no default value.
      // _eqns1 has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_inAccEqnLst);
          tmp1_c1 = _inFound;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta6;
          _eqns = tmpMeta7;
          /* Pattern matching succeeded */
          _eqns1 = omc_InlineArrayEquations_getScalarArrayEqns1(threadData, _eqn, _inAccEqnLst ,&_b);
          /* Tail recursive call */
          _inEqnLst = _eqns;
          _inAccEqnLst = _eqns1;
          _inFound = (_b || _inFound);
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
  _outEqnLst = tmpMeta[0+0];
  _outFound = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outEqnLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns0(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype _inAccEqnLst, modelica_metatype _inFound, modelica_metatype *out_outFound)
{
  modelica_integer tmp1;
  modelica_boolean _outFound;
  modelica_metatype _outEqnLst = NULL;
  tmp1 = mmc_unbox_integer(_inFound);
  _outEqnLst = omc_InlineArrayEquations_getScalarArrayEqns0(threadData, _inEqnLst, _inAccEqnLst, tmp1, &_outFound);
  /* skip box _outEqnLst; list<BackendDAE.Equation> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outEqnLst;
}

DLLDirection
modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_boolean *out_outFound)
{
  modelica_metatype _outEqnLst = NULL;
  modelica_boolean _outFound;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnLst has no default value.
  // _outFound has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqnLst = omc_InlineArrayEquations_getScalarArrayEqns0(threadData, _inEqnLst, tmpMeta1, 0 /* false */ ,&_outFound);
  _return: OMC_LABEL_UNUSED
  if (out_outFound) { *out_outFound = _outFound; }
  return _outEqnLst;
}
modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype *out_outFound)
{
  modelica_boolean _outFound;
  modelica_metatype _outEqnLst = NULL;
  _outEqnLst = omc_InlineArrayEquations_getScalarArrayEqns(threadData, _inEqnLst, &_outFound);
  /* skip box _outEqnLst; list<BackendDAE.Equation> */
  if (out_outFound) { *out_outFound = mmc_mk_icon(_outFound); }
  return _outEqnLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_InlineArrayEquations_inlineArrayEqn1(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_boolean _inOptimized, modelica_metatype *out_outShared, modelica_boolean *out_outOptimized)
{
  modelica_metatype _outEqSystem = NULL;
  modelica_metatype _outShared = NULL;
  modelica_boolean _outOptimized;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqSystem has no default value.
  _outShared = _inShared;
  // _outOptimized has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEqSystem;
    {
      modelica_metatype _orderedEqs = NULL;
      modelica_metatype _eqnLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _orderedEqs has no default value.
      // _eqnLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _orderedEqs = tmpMeta6;
          /* Pattern matching succeeded */
          _eqnLst = omc_BackendEquation_equationList(threadData, _orderedEqs);

          /* Pattern-matching tuple assignment */
          tmpMeta8 = omc_InlineArrayEquations_getScalarArrayEqns(threadData, _eqnLst, &tmp7);
          _eqnLst = tmpMeta8;
          if (1 /* true */ != tmp7) goto goto_2;

          _orderedEqs = omc_BackendEquation_listEquation(threadData, _eqnLst);
          tmpMeta[0+0] = omc_BackendDAEUtil_clearEqSyst(threadData, omc_BackendDAEUtil_setEqSystEqs(threadData, _inEqSystem, _orderedEqs));
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEqSystem;
          tmp1_c1 = _inOptimized;
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
  _outEqSystem = tmpMeta[0+0];
  _outOptimized = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outOptimized) { *out_outOptimized = _outOptimized; }
  return _outEqSystem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_InlineArrayEquations_inlineArrayEqn1(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_metatype _inOptimized, modelica_metatype *out_outShared, modelica_metatype *out_outOptimized)
{
  modelica_integer tmp1;
  modelica_boolean _outOptimized;
  modelica_metatype _outEqSystem = NULL;
  tmp1 = mmc_unbox_integer(_inOptimized);
  _outEqSystem = omc_InlineArrayEquations_inlineArrayEqn1(threadData, _inEqSystem, _inShared, tmp1, out_outShared, &_outOptimized);
  /* skip box _outEqSystem; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outOptimized) { *out_outOptimized = mmc_mk_icon(_outOptimized); }
  return _outEqSystem;
}

DLLDirection
modelica_metatype omc_InlineArrayEquations_inlineArrayEqn(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, boxvar_InlineArrayEquations_inlineArrayEqn1, mmc_mk_boolean(0 /* false */), NULL);
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

