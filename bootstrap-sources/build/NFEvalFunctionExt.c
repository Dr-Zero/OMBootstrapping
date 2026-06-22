#include "omc_simulation_settings.h"
#include "NFEvalFunctionExt.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#include "util/modelica.h"

#include "NFEvalFunctionExt_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_NFEvalFunctionExt_assignVariableExt(threadData_t *threadData, modelica_metatype _variable, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_assignVariableExt,2,0) {(void*) boxptr_NFEvalFunctionExt_assignVariableExt,0}};
#define boxvar_NFEvalFunctionExt_assignVariableExt MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_assignVariableExt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealMatrixArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtRealMatrixArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtRealMatrixArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealMatrixArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealArrayArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtRealArrayArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtRealArrayArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealArrayArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtIntArrayArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtIntArrayArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtIntArrayArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtIntArrayArg)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFEvalFunctionExt_getExtStringValue(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtStringValue,2,0) {(void*) boxptr_NFEvalFunctionExt_getExtStringValue,0}};
#define boxvar_NFEvalFunctionExt_getExtStringValue MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtStringValue)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFEvalFunctionExt_evaluateExtStringArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtStringArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtStringArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtStringArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtStringArg)
PROTECTED_FUNCTION_STATIC modelica_real omc_NFEvalFunctionExt_getExtRealValue(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_getExtRealValue(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtRealValue,2,0) {(void*) boxptr_NFEvalFunctionExt_getExtRealValue,0}};
#define boxvar_NFEvalFunctionExt_getExtRealValue MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtRealValue)
PROTECTED_FUNCTION_STATIC modelica_real omc_NFEvalFunctionExt_evaluateExtRealArg(threadData_t *threadData, modelica_metatype _arg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_evaluateExtRealArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtRealArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtRealArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtRealArg)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFEvalFunctionExt_getExtIntValue(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_getExtIntValue(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtIntValue,2,0) {(void*) boxptr_NFEvalFunctionExt_getExtIntValue,0}};
#define boxvar_NFEvalFunctionExt_getExtIntValue MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_getExtIntValue)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFEvalFunctionExt_evaluateExtIntArg(threadData_t *threadData, modelica_metatype _arg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_evaluateExtIntArg(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtIntArg,2,0) {(void*) boxptr_NFEvalFunctionExt_evaluateExtIntArg,0}};
#define boxvar_NFEvalFunctionExt_evaluateExtIntArg MMC_REFSTRUCTLIT(boxvar_lit_NFEvalFunctionExt_evaluateExtIntArg)

PROTECTED_FUNCTION_STATIC void omc_NFEvalFunctionExt_assignVariableExt(threadData_t *threadData, modelica_metatype _variable, modelica_metatype _value)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = omc_NFExpression_typeOf(threadData, _variable);
    tmp4_2 = _value;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,7,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp18;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp19;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 3)));
            tmp19 = 1;
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar1;
            while(1) {
              tmp18 = 1;
              if (tmp19 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp19++);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar0 = omc_NFExpression_arrayScalarElement(threadData, _e);
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar1;
          }
          tmpMeta1 = omc_NFExpression_makeArray(threadData, omc_NFType_unliftArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_value), 2)))), listArray(tmpMeta15), 1 /* true */);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
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
  _exp = tmpMeta1;

  omc_NFEvalFunction_assignVariable(threadData, _variable, _exp);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_metatype _value = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _expl has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,8,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _ty = tmpMeta2;
  _expl = tmpMeta3;

  { /* match expression */
    modelica_integer tmp7_1;
    tmp7_1 = omc_NFType_dimensionCount(threadData, _ty);
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          if (1 != tmp7_1) goto tmp6_end;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp13;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp14;
            modelica_metatype _e;
            _e_loopVar = _expl;
            tmp14 = 1;
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar3;
            while(1) {
              tmp13 = 1;
              if (tmp14 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp14++);
                tmp13--;
              }
              if (tmp13 == 0) {
                tmpMeta12 = mmc_mk_cons(mmc_mk_real(omc_NFEvalFunctionExt_getExtRealValue(threadData, _e)), MMC_REFSTRUCTLIT(mmc_nil));
                __omcQ_24tmpVar2 = tmpMeta12;
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_5;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar3;
          }
          tmpMeta4 = tmpMeta9;
          goto tmp6_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          if (2 != tmp7_1) goto tmp6_end;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp23;
            modelica_metatype _row_loopVar = 0;
            modelica_integer tmp24;
            modelica_metatype _row;
            _row_loopVar = _expl;
            tmp24 = 1;
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar7;
            while(1) {
              tmp23 = 1;
              if (tmp24 <= arrayLength(_row_loopVar)) {
                _row = arrayGet(_row_loopVar, tmp24++);
                tmp23--;
              }
              if (tmp23 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar5;
                  modelica_metatype* tmp19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype __omcQ_24tmpVar4;
                  modelica_integer tmp21;
                  modelica_metatype _e_loopVar = 0;
                  modelica_integer tmp22;
                  modelica_metatype _e;
                  _e_loopVar = omc_NFExpression_arrayElements(threadData, _row);
                  tmp22 = 1;
                  tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar5 = tmpMeta20; /* defaultValue */
                  tmp19 = &__omcQ_24tmpVar5;
                  while(1) {
                    tmp21 = 1;
                    if (tmp22 <= arrayLength(_e_loopVar)) {
                      _e = arrayGet(_e_loopVar, tmp22++);
                      tmp21--;
                    }
                    if (tmp21 == 0) {
                      __omcQ_24tmpVar4 = mmc_mk_real(omc_NFEvalFunctionExt_getExtRealValue(threadData, _e));
                      *tmp19 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                      tmp19 = &MMC_CDR(*tmp19);
                    } else if (tmp21 == 1) {
                      break;
                    } else {
                      goto goto_5;
                    }
                  }
                  *tmp19 = mmc_mk_nil();
                  tmpMeta18 = __omcQ_24tmpVar5;
                }
                __omcQ_24tmpVar6 = tmpMeta18;
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_5;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar7;
          }
          tmpMeta4 = tmpMeta15;
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
  _value = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _value;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_metatype _value = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _expl has no default value.
  _expl = omc_NFExpression_arrayElementList(threadData, omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3));

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _expl;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = mmc_mk_real(omc_NFEvalFunctionExt_getExtRealValue(threadData, _e));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_metatype _value = NULL;
  modelica_metatype _expl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _expl has no default value.
  _expl = omc_NFExpression_arrayElementList(threadData, omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3));

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _expl;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar10 = mmc_mk_integer(omc_NFEvalFunctionExt_getExtIntValue(threadData, _e));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFEvalFunctionExt_getExtStringValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_string _value = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT0;
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
  _value = tmp1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFEvalFunctionExt_evaluateExtStringArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_string _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_NFEvalFunctionExt_getExtStringValue(threadData, omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3));
  _return: OMC_LABEL_UNUSED
  return _value;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_NFEvalFunctionExt_getExtRealValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_real _value;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0.0;
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
  _value = tmp1;
  _return: OMC_LABEL_UNUSED
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_getExtRealValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_real _value;
  modelica_metatype out_value;
  _value = omc_NFEvalFunctionExt_getExtRealValue(threadData, _exp);
  out_value = mmc_mk_rcon(_value);
  return out_value;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_NFEvalFunctionExt_evaluateExtRealArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_real _value;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_NFEvalFunctionExt_getExtRealValue(threadData, omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3));
  _return: OMC_LABEL_UNUSED
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_evaluateExtRealArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_real _value;
  modelica_metatype out_value;
  _value = omc_NFEvalFunctionExt_evaluateExtRealArg(threadData, _arg);
  out_value = mmc_mk_rcon(_value);
  return out_value;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFEvalFunctionExt_getExtIntValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_integer _value;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _value = tmp1;
  _return: OMC_LABEL_UNUSED
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_getExtIntValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_integer _value;
  modelica_metatype out_value;
  _value = omc_NFEvalFunctionExt_getExtIntValue(threadData, _exp);
  out_value = mmc_mk_icon(_value);
  return out_value;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFEvalFunctionExt_evaluateExtIntArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_integer _value;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = omc_NFEvalFunctionExt_getExtIntValue(threadData, omc_NFCeval_evalExp(threadData, _arg, _OMC_LIT3));
  _return: OMC_LABEL_UNUSED
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEvalFunctionExt_evaluateExtIntArg(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_integer _value;
  modelica_metatype out_value;
  _value = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _arg);
  out_value = mmc_mk_icon(_value);
  return out_value;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dhseqr(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _job = NULL;
  modelica_metatype _compz = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _ilo = NULL;
  modelica_metatype _ihi = NULL;
  modelica_metatype _h = NULL;
  modelica_metatype _ldh = NULL;
  modelica_metatype _wr = NULL;
  modelica_metatype _wi = NULL;
  modelica_metatype _z = NULL;
  modelica_metatype _ldz = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _N;
  modelica_integer _ILO;
  modelica_integer _IHI;
  modelica_integer _LDH;
  modelica_integer _LDZ;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_string _JOB = NULL;
  modelica_string _COMPZ = NULL;
  modelica_metatype _H = NULL;
  modelica_metatype _Z = NULL;
  modelica_metatype _WR = NULL;
  modelica_metatype _WI = NULL;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _job has no default value.
  // _compz has no default value.
  // _n has no default value.
  // _ilo has no default value.
  // _ihi has no default value.
  // _h has no default value.
  // _ldh has no default value.
  // _wr has no default value.
  // _wi has no default value.
  // _z has no default value.
  // _ldz has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _N has no default value.
  // _ILO has no default value.
  // _IHI has no default value.
  // _LDH has no default value.
  // _LDZ has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _JOB has no default value.
  // _COMPZ has no default value.
  // _H has no default value.
  // _Z has no default value.
  // _WR has no default value.
  // _WI has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  tmpMeta28 = MMC_CAR(tmpMeta27);
  tmpMeta29 = MMC_CDR(tmpMeta27);
  if (!listEmpty(tmpMeta29)) MMC_THROW_INTERNAL();
  _job = tmpMeta2;
  _compz = tmpMeta4;
  _n = tmpMeta6;
  _ilo = tmpMeta8;
  _ihi = tmpMeta10;
  _h = tmpMeta12;
  _ldh = tmpMeta14;
  _wr = tmpMeta16;
  _wi = tmpMeta18;
  _z = tmpMeta20;
  _ldz = tmpMeta22;
  _work = tmpMeta24;
  _lwork = tmpMeta26;
  _info = tmpMeta28;

  _JOB = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _job);

  _COMPZ = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _compz);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _ILO = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ilo);

  _IHI = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ihi);

  _H = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _h);

  _LDH = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldh);

  _Z = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _z);

  _LDZ = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldz);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _H = omc_Lapack_dhseqr(threadData, _JOB, _COMPZ, _N, _ILO, _IHI, _H, _LDH, _Z, _LDZ, _WORK, _LWORK ,&_WR ,&_WI ,&_Z ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _h, omc_NFExpression_makeRealMatrix(threadData, _H));

  omc_NFEvalFunction_assignVariable(threadData, _wr, omc_NFExpression_makeRealArray(threadData, _WR));

  omc_NFEvalFunction_assignVariable(threadData, _wi, omc_NFExpression_makeRealArray(threadData, _WI));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _z, omc_NFExpression_makeRealMatrix(threadData, _Z));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dorgqr(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _tau = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _K;
  modelica_integer _LDA;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _TAU = NULL;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _k has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _tau has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _K has no default value.
  // _LDA has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _TAU has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (!listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  _m = tmpMeta2;
  _n = tmpMeta4;
  _k = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _tau = tmpMeta12;
  _work = tmpMeta14;
  _lwork = tmpMeta16;
  _info = tmpMeta18;

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _K = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _k);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _TAU = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _tau);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dorgqr(threadData, _M, _N, _K, _A, _LDA, _TAU, _WORK, _LWORK ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgeqpf(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _jpvt = NULL;
  modelica_metatype _tau = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _LDA;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _JPVT = NULL;
  modelica_metatype _WORK = NULL;
  modelica_metatype _TAU = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _jpvt has no default value.
  // _tau has no default value.
  // _work has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _LDA has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _JPVT has no default value.
  // _WORK has no default value.
  // _TAU has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (!listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  _m = tmpMeta2;
  _n = tmpMeta4;
  _a = tmpMeta6;
  _lda = tmpMeta8;
  _jpvt = tmpMeta10;
  _tau = tmpMeta12;
  _work = tmpMeta14;
  _info = tmpMeta16;

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _JPVT = omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData, _jpvt);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _A = omc_Lapack_dgeqpf(threadData, _M, _N, _A, _LDA, _JPVT, _WORK ,&_JPVT ,&_TAU ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _jpvt, omc_NFExpression_makeIntegerArray(threadData, _JPVT));

  omc_NFEvalFunction_assignVariable(threadData, _tau, omc_NFExpression_makeRealArray(threadData, _TAU));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgetri(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _ipiv = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _N;
  modelica_integer _LDA;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _IPIV = NULL;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _ipiv has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _N has no default value.
  // _LDA has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _IPIV has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (!listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  _n = tmpMeta2;
  _a = tmpMeta4;
  _lda = tmpMeta6;
  _ipiv = tmpMeta8;
  _work = tmpMeta10;
  _lwork = tmpMeta12;
  _info = tmpMeta14;

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _IPIV = omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData, _ipiv);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgetri(threadData, _N, _A, _LDA, _IPIV, _WORK, _LWORK ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgetrs(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _trans = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _ipiv = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _info = NULL;
  modelica_string _TRANS = NULL;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _IPIV = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _trans has no default value.
  // _n has no default value.
  // _nrhs has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _ipiv has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _info has no default value.
  // _TRANS has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _IPIV has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (!listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  _trans = tmpMeta2;
  _n = tmpMeta4;
  _nrhs = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _ipiv = tmpMeta12;
  _b = tmpMeta14;
  _ldb = tmpMeta16;
  _info = tmpMeta18;

  _TRANS = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _trans);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _IPIV = omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData, _ipiv);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _B = omc_Lapack_dgetrs(threadData, _TRANS, _N, _NRHS, _A, _LDA, _IPIV, _B, _LDB ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgetrf(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _ipiv = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _LDA;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _IPIV = NULL;
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
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _ipiv has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _LDA has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _IPIV has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (!listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  _m = tmpMeta2;
  _n = tmpMeta4;
  _a = tmpMeta6;
  _lda = tmpMeta8;
  _ipiv = tmpMeta10;
  _info = tmpMeta12;

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _A = omc_Lapack_dgetrf(threadData, _M, _N, _A, _LDA ,&_IPIV ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _ipiv, omc_NFExpression_makeIntegerArray(threadData, _IPIV));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgesvd(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _jobu = NULL;
  modelica_metatype _jobvt = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _s = NULL;
  modelica_metatype _u = NULL;
  modelica_metatype _ldu = NULL;
  modelica_metatype _vt = NULL;
  modelica_metatype _ldvt = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_string _JOBU = NULL;
  modelica_string _JOBVT = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _LDA;
  modelica_integer _LDU;
  modelica_integer _LDVT;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _U = NULL;
  modelica_metatype _VT = NULL;
  modelica_metatype _S = NULL;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jobu has no default value.
  // _jobvt has no default value.
  // _m has no default value.
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _s has no default value.
  // _u has no default value.
  // _ldu has no default value.
  // _vt has no default value.
  // _ldvt has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _JOBU has no default value.
  // _JOBVT has no default value.
  // _M has no default value.
  // _N has no default value.
  // _LDA has no default value.
  // _LDU has no default value.
  // _LDVT has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _U has no default value.
  // _VT has no default value.
  // _S has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  tmpMeta28 = MMC_CAR(tmpMeta27);
  tmpMeta29 = MMC_CDR(tmpMeta27);
  if (!listEmpty(tmpMeta29)) MMC_THROW_INTERNAL();
  _jobu = tmpMeta2;
  _jobvt = tmpMeta4;
  _m = tmpMeta6;
  _n = tmpMeta8;
  _a = tmpMeta10;
  _lda = tmpMeta12;
  _s = tmpMeta14;
  _u = tmpMeta16;
  _ldu = tmpMeta18;
  _vt = tmpMeta20;
  _ldvt = tmpMeta22;
  _work = tmpMeta24;
  _lwork = tmpMeta26;
  _info = tmpMeta28;

  _JOBU = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobu);

  _JOBVT = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobvt);

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _LDU = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldu);

  _LDVT = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldvt);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgesvd(threadData, _JOBU, _JOBVT, _M, _N, _A, _LDA, _LDU, _LDVT, _WORK, _LWORK ,&_S ,&_U ,&_VT ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _s, omc_NFExpression_makeRealArray(threadData, _S));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _u, omc_NFExpression_makeRealMatrix(threadData, _U));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _vt, omc_NFExpression_makeRealMatrix(threadData, _VT));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgbsv(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _n = NULL;
  modelica_metatype _kl = NULL;
  modelica_metatype _ku = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _ab = NULL;
  modelica_metatype _ldab = NULL;
  modelica_metatype _ipiv = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _N;
  modelica_integer _KL;
  modelica_integer _KU;
  modelica_integer _NRHS;
  modelica_integer _LDAB;
  modelica_integer _LDB;
  modelica_integer _INFO;
  modelica_metatype _AB = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _IPIV = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _n has no default value.
  // _kl has no default value.
  // _ku has no default value.
  // _nrhs has no default value.
  // _ab has no default value.
  // _ldab has no default value.
  // _ipiv has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _info has no default value.
  // _N has no default value.
  // _KL has no default value.
  // _KU has no default value.
  // _NRHS has no default value.
  // _LDAB has no default value.
  // _LDB has no default value.
  // _INFO has no default value.
  // _AB has no default value.
  // _B has no default value.
  // _IPIV has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (!listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  _n = tmpMeta2;
  _kl = tmpMeta4;
  _ku = tmpMeta6;
  _nrhs = tmpMeta8;
  _ab = tmpMeta10;
  _ldab = tmpMeta12;
  _ipiv = tmpMeta14;
  _b = tmpMeta16;
  _ldb = tmpMeta18;
  _info = tmpMeta20;

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _KL = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _kl);

  _KU = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ku);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _AB = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _ab);

  _LDAB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldab);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _AB = omc_Lapack_dgbsv(threadData, _N, _KL, _KU, _NRHS, _AB, _LDAB, _B, _LDB ,&_IPIV ,&_B ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _ab, omc_NFExpression_makeRealMatrix(threadData, _AB));

  omc_NFEvalFunction_assignVariable(threadData, _ipiv, omc_NFExpression_makeIntegerArray(threadData, _IPIV));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgtsv(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _dl = NULL;
  modelica_metatype _d = NULL;
  modelica_metatype _du = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDB;
  modelica_integer _INFO;
  modelica_metatype _DL = NULL;
  modelica_metatype _D = NULL;
  modelica_metatype _DU = NULL;
  modelica_metatype _B = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _n has no default value.
  // _nrhs has no default value.
  // _dl has no default value.
  // _d has no default value.
  // _du has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _info has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDB has no default value.
  // _INFO has no default value.
  // _DL has no default value.
  // _D has no default value.
  // _DU has no default value.
  // _B has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (!listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  _n = tmpMeta2;
  _nrhs = tmpMeta4;
  _dl = tmpMeta6;
  _d = tmpMeta8;
  _du = tmpMeta10;
  _b = tmpMeta12;
  _ldb = tmpMeta14;
  _info = tmpMeta16;

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _DL = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _dl);

  _D = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _d);

  _DU = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _du);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _DL = omc_Lapack_dgtsv(threadData, _N, _NRHS, _DL, _D, _DU, _B, _LDB ,&_D ,&_DU ,&_B ,&_INFO);

  omc_NFEvalFunction_assignVariable(threadData, _dl, omc_NFExpression_makeRealArray(threadData, _DL));

  omc_NFEvalFunction_assignVariable(threadData, _d, omc_NFExpression_makeRealArray(threadData, _D));

  omc_NFEvalFunction_assignVariable(threadData, _du, omc_NFExpression_makeRealArray(threadData, _DU));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgglse(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _p = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _d = NULL;
  modelica_metatype _x = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _P;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _C = NULL;
  modelica_metatype _D = NULL;
  modelica_metatype _WORK = NULL;
  modelica_metatype _X = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _p has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _c has no default value.
  // _d has no default value.
  // _x has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _P has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _C has no default value.
  // _D has no default value.
  // _WORK has no default value.
  // _X has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (!listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  _m = tmpMeta2;
  _n = tmpMeta4;
  _p = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _b = tmpMeta12;
  _ldb = tmpMeta14;
  _c = tmpMeta16;
  _d = tmpMeta18;
  _x = tmpMeta20;
  _work = tmpMeta22;
  _lwork = tmpMeta24;
  _info = tmpMeta26;

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _P = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _p);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _C = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _c);

  _D = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _d);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgglse(threadData, _M, _N, _P, _A, _LDA, _B, _LDB, _C, _D, _WORK, _LWORK ,&_B ,&_C ,&_D ,&_X ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _c, omc_NFExpression_makeRealArray(threadData, _C));

  omc_NFEvalFunction_assignVariable(threadData, _d, omc_NFExpression_makeRealArray(threadData, _D));

  omc_NFEvalFunction_assignVariable(threadData, _x, omc_NFExpression_makeRealArray(threadData, _X));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgesv(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _ipiv = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _IPIV = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _n has no default value.
  // _nrhs has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _ipiv has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _info has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _IPIV has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (!listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  _n = tmpMeta2;
  _nrhs = tmpMeta4;
  _a = tmpMeta6;
  _lda = tmpMeta8;
  _ipiv = tmpMeta10;
  _b = tmpMeta12;
  _ldb = tmpMeta14;
  _info = tmpMeta16;

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _A = omc_Lapack_dgesv(threadData, _N, _NRHS, _A, _LDA, _B, _LDB ,&_IPIV ,&_B ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _ipiv, omc_NFExpression_makeIntegerArray(threadData, _IPIV));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgelsy(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _jpvt = NULL;
  modelica_metatype _rcond = NULL;
  modelica_metatype _rank = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _RANK;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _JPVT = NULL;
  modelica_real _RCOND;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _nrhs has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _jpvt has no default value.
  // _rcond has no default value.
  // _rank has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _RANK has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _JPVT has no default value.
  // _RCOND has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (!listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  _m = tmpMeta2;
  _n = tmpMeta4;
  _nrhs = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _b = tmpMeta12;
  _ldb = tmpMeta14;
  _jpvt = tmpMeta16;
  _rcond = tmpMeta18;
  _rank = tmpMeta20;
  _work = tmpMeta22;
  _lwork = tmpMeta24;
  _info = tmpMeta26;

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _JPVT = omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData, _jpvt);

  _RCOND = omc_NFEvalFunctionExt_evaluateExtRealArg(threadData, _rcond);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgelsy(threadData, _M, _N, _NRHS, _A, _LDA, _B, _LDB, _JPVT, _RCOND, _WORK, _LWORK ,&_B ,&_JPVT ,&_RANK ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _jpvt, omc_NFExpression_makeIntegerArray(threadData, _JPVT));

  omc_NFEvalFunction_assignVariable(threadData, _rank, omc_NFExpression_makeInteger(threadData, _RANK));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgelsx(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _jpvt = NULL;
  modelica_metatype _rcond = NULL;
  modelica_metatype _rank = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _RANK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _JPVT = NULL;
  modelica_real _RCOND;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _m has no default value.
  // _n has no default value.
  // _nrhs has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _jpvt has no default value.
  // _rcond has no default value.
  // _rank has no default value.
  // _work has no default value.
  // _info has no default value.
  // _M has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _RANK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _JPVT has no default value.
  // _RCOND has no default value.
  // _WORK has no default value.
  if((listLength(_args) == ((modelica_integer) 12)))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _args;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_CAR(tmpMeta3);
    tmpMeta5 = MMC_CDR(tmpMeta3);
    if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_CAR(tmpMeta5);
    tmpMeta7 = MMC_CDR(tmpMeta5);
    if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_CAR(tmpMeta7);
    tmpMeta9 = MMC_CDR(tmpMeta7);
    if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
    tmpMeta10 = MMC_CAR(tmpMeta9);
    tmpMeta11 = MMC_CDR(tmpMeta9);
    if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
    tmpMeta12 = MMC_CAR(tmpMeta11);
    tmpMeta13 = MMC_CDR(tmpMeta11);
    if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
    tmpMeta14 = MMC_CAR(tmpMeta13);
    tmpMeta15 = MMC_CDR(tmpMeta13);
    if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
    tmpMeta16 = MMC_CAR(tmpMeta15);
    tmpMeta17 = MMC_CDR(tmpMeta15);
    if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
    tmpMeta18 = MMC_CAR(tmpMeta17);
    tmpMeta19 = MMC_CDR(tmpMeta17);
    if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
    tmpMeta20 = MMC_CAR(tmpMeta19);
    tmpMeta21 = MMC_CDR(tmpMeta19);
    if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
    tmpMeta22 = MMC_CAR(tmpMeta21);
    tmpMeta23 = MMC_CDR(tmpMeta21);
    if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
    tmpMeta24 = MMC_CAR(tmpMeta23);
    tmpMeta25 = MMC_CDR(tmpMeta23);
    if (!listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
    _m = tmpMeta2;
    _n = tmpMeta4;
    _nrhs = tmpMeta6;
    _a = tmpMeta8;
    _lda = tmpMeta10;
    _b = tmpMeta12;
    _ldb = tmpMeta14;
    _jpvt = tmpMeta16;
    _rcond = tmpMeta18;
    _rank = tmpMeta20;
    _work = tmpMeta22;
    _info = tmpMeta24;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta26 = _args;
    if (listEmpty(tmpMeta26)) MMC_THROW_INTERNAL();
    tmpMeta27 = MMC_CAR(tmpMeta26);
    tmpMeta28 = MMC_CDR(tmpMeta26);
    if (listEmpty(tmpMeta28)) MMC_THROW_INTERNAL();
    tmpMeta29 = MMC_CAR(tmpMeta28);
    tmpMeta30 = MMC_CDR(tmpMeta28);
    if (listEmpty(tmpMeta30)) MMC_THROW_INTERNAL();
    tmpMeta31 = MMC_CAR(tmpMeta30);
    tmpMeta32 = MMC_CDR(tmpMeta30);
    if (listEmpty(tmpMeta32)) MMC_THROW_INTERNAL();
    tmpMeta33 = MMC_CAR(tmpMeta32);
    tmpMeta34 = MMC_CDR(tmpMeta32);
    if (listEmpty(tmpMeta34)) MMC_THROW_INTERNAL();
    tmpMeta35 = MMC_CAR(tmpMeta34);
    tmpMeta36 = MMC_CDR(tmpMeta34);
    if (listEmpty(tmpMeta36)) MMC_THROW_INTERNAL();
    tmpMeta37 = MMC_CAR(tmpMeta36);
    tmpMeta38 = MMC_CDR(tmpMeta36);
    if (listEmpty(tmpMeta38)) MMC_THROW_INTERNAL();
    tmpMeta39 = MMC_CAR(tmpMeta38);
    tmpMeta40 = MMC_CDR(tmpMeta38);
    if (listEmpty(tmpMeta40)) MMC_THROW_INTERNAL();
    tmpMeta41 = MMC_CAR(tmpMeta40);
    tmpMeta42 = MMC_CDR(tmpMeta40);
    if (listEmpty(tmpMeta42)) MMC_THROW_INTERNAL();
    tmpMeta43 = MMC_CAR(tmpMeta42);
    tmpMeta44 = MMC_CDR(tmpMeta42);
    if (listEmpty(tmpMeta44)) MMC_THROW_INTERNAL();
    tmpMeta45 = MMC_CAR(tmpMeta44);
    tmpMeta46 = MMC_CDR(tmpMeta44);
    if (listEmpty(tmpMeta46)) MMC_THROW_INTERNAL();
    tmpMeta47 = MMC_CAR(tmpMeta46);
    tmpMeta48 = MMC_CDR(tmpMeta46);
    if (listEmpty(tmpMeta48)) MMC_THROW_INTERNAL();
    tmpMeta49 = MMC_CAR(tmpMeta48);
    tmpMeta50 = MMC_CDR(tmpMeta48);
    if (listEmpty(tmpMeta50)) MMC_THROW_INTERNAL();
    tmpMeta51 = MMC_CAR(tmpMeta50);
    tmpMeta52 = MMC_CDR(tmpMeta50);
    if (!listEmpty(tmpMeta52)) MMC_THROW_INTERNAL();
    _m = tmpMeta27;
    _n = tmpMeta29;
    _nrhs = tmpMeta31;
    _a = tmpMeta33;
    _lda = tmpMeta35;
    _b = tmpMeta37;
    _ldb = tmpMeta39;
    _jpvt = tmpMeta41;
    _rcond = tmpMeta43;
    _rank = tmpMeta45;
    _work = tmpMeta47;
    _info = tmpMeta51;
  }

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _JPVT = omc_NFEvalFunctionExt_evaluateExtIntArrayArg(threadData, _jpvt);

  _RCOND = omc_NFEvalFunctionExt_evaluateExtRealArg(threadData, _rcond);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _A = omc_Lapack_dgelsx(threadData, _M, _N, _NRHS, _A, _LDA, _B, _LDB, _JPVT, _RCOND, _WORK ,&_B ,&_JPVT ,&_RANK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _jpvt, omc_NFExpression_makeIntegerArray(threadData, _JPVT));

  omc_NFEvalFunction_assignVariable(threadData, _rank, omc_NFExpression_makeInteger(threadData, _RANK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgels(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _trans = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _nrhs = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_string _TRANS = NULL;
  modelica_integer _M;
  modelica_integer _N;
  modelica_integer _NRHS;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _WORK = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _trans has no default value.
  // _m has no default value.
  // _n has no default value.
  // _nrhs has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _TRANS has no default value.
  // _M has no default value.
  // _N has no default value.
  // _NRHS has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _WORK has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (!listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  _trans = tmpMeta2;
  _m = tmpMeta4;
  _n = tmpMeta6;
  _nrhs = tmpMeta8;
  _a = tmpMeta10;
  _lda = tmpMeta12;
  _b = tmpMeta14;
  _ldb = tmpMeta16;
  _work = tmpMeta18;
  _lwork = tmpMeta20;
  _info = tmpMeta22;

  _TRANS = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _trans);

  _M = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _m);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _NRHS = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _nrhs);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgels(threadData, _TRANS, _M, _N, _NRHS, _A, _LDA, _B, _LDB, _WORK, _LWORK ,&_B ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _b, omc_NFExpression_makeRealMatrix(threadData, _B));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgegv(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _jobvl = NULL;
  modelica_metatype _jobvr = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype _ldb = NULL;
  modelica_metatype _alphar = NULL;
  modelica_metatype _alphai = NULL;
  modelica_metatype _beta = NULL;
  modelica_metatype _vl = NULL;
  modelica_metatype _ldvl = NULL;
  modelica_metatype _vr = NULL;
  modelica_metatype _ldvr = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _info = NULL;
  modelica_string _JOBVL = NULL;
  modelica_string _JOBVR = NULL;
  modelica_integer _N;
  modelica_integer _LDA;
  modelica_integer _LDB;
  modelica_integer _LDVL;
  modelica_integer _LDVR;
  modelica_integer _LWORK;
  modelica_integer _INFO;
  modelica_metatype _A = NULL;
  modelica_metatype _B = NULL;
  modelica_metatype _VL = NULL;
  modelica_metatype _VR = NULL;
  modelica_metatype _WORK = NULL;
  modelica_metatype _ALPHAR = NULL;
  modelica_metatype _ALPHAI = NULL;
  modelica_metatype _BETA = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jobvl has no default value.
  // _jobvr has no default value.
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _b has no default value.
  // _ldb has no default value.
  // _alphar has no default value.
  // _alphai has no default value.
  // _beta has no default value.
  // _vl has no default value.
  // _ldvl has no default value.
  // _vr has no default value.
  // _ldvr has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _info has no default value.
  // _JOBVL has no default value.
  // _JOBVR has no default value.
  // _N has no default value.
  // _LDA has no default value.
  // _LDB has no default value.
  // _LDVL has no default value.
  // _LDVR has no default value.
  // _LWORK has no default value.
  // _INFO has no default value.
  // _A has no default value.
  // _B has no default value.
  // _VL has no default value.
  // _VR has no default value.
  // _WORK has no default value.
  // _ALPHAR has no default value.
  // _ALPHAI has no default value.
  // _BETA has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  tmpMeta28 = MMC_CAR(tmpMeta27);
  tmpMeta29 = MMC_CDR(tmpMeta27);
  if (listEmpty(tmpMeta29)) MMC_THROW_INTERNAL();
  tmpMeta30 = MMC_CAR(tmpMeta29);
  tmpMeta31 = MMC_CDR(tmpMeta29);
  if (listEmpty(tmpMeta31)) MMC_THROW_INTERNAL();
  tmpMeta32 = MMC_CAR(tmpMeta31);
  tmpMeta33 = MMC_CDR(tmpMeta31);
  if (listEmpty(tmpMeta33)) MMC_THROW_INTERNAL();
  tmpMeta34 = MMC_CAR(tmpMeta33);
  tmpMeta35 = MMC_CDR(tmpMeta33);
  if (!listEmpty(tmpMeta35)) MMC_THROW_INTERNAL();
  _jobvl = tmpMeta2;
  _jobvr = tmpMeta4;
  _n = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _b = tmpMeta12;
  _ldb = tmpMeta14;
  _alphar = tmpMeta16;
  _alphai = tmpMeta18;
  _beta = tmpMeta20;
  _vl = tmpMeta22;
  _ldvl = tmpMeta24;
  _vr = tmpMeta26;
  _ldvr = tmpMeta28;
  _work = tmpMeta30;
  _lwork = tmpMeta32;
  _info = tmpMeta34;

  _JOBVL = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobvl);

  _JOBVR = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobvr);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _B = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _b);

  _LDB = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldb);

  _LDVL = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldvl);

  _LDVR = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldvr);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _ALPHAR = omc_Lapack_dgegv(threadData, _JOBVL, _JOBVR, _N, _A, _LDA, _B, _LDB, _LDVL, _LDVR, _WORK, _LWORK ,&_ALPHAI ,&_BETA ,&_VL ,&_VR ,&_WORK ,&_INFO);

  omc_NFEvalFunction_assignVariable(threadData, _alphar, omc_NFExpression_makeRealArray(threadData, _ALPHAR));

  omc_NFEvalFunction_assignVariable(threadData, _alphai, omc_NFExpression_makeRealArray(threadData, _ALPHAI));

  omc_NFEvalFunction_assignVariable(threadData, _beta, omc_NFExpression_makeRealArray(threadData, _BETA));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _vl, omc_NFExpression_makeRealMatrix(threadData, _VL));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _vr, omc_NFExpression_makeRealMatrix(threadData, _VR));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFEvalFunctionExt_Lapack__dgeev(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _jobvl = NULL;
  modelica_metatype _jobvr = NULL;
  modelica_metatype _n = NULL;
  modelica_metatype _a = NULL;
  modelica_metatype _lda = NULL;
  modelica_metatype _ldvl = NULL;
  modelica_metatype _ldvr = NULL;
  modelica_metatype _work = NULL;
  modelica_metatype _lwork = NULL;
  modelica_metatype _wr = NULL;
  modelica_metatype _wi = NULL;
  modelica_metatype _vl = NULL;
  modelica_metatype _vr = NULL;
  modelica_metatype _info = NULL;
  modelica_integer _INFO;
  modelica_integer _LDA;
  modelica_integer _LDVL;
  modelica_integer _LDVR;
  modelica_integer _LWORK;
  modelica_integer _N;
  modelica_string _JOBVL = NULL;
  modelica_string _JOBVR = NULL;
  modelica_metatype _A = NULL;
  modelica_metatype _VL = NULL;
  modelica_metatype _VR = NULL;
  modelica_metatype _WORK = NULL;
  modelica_metatype _WR = NULL;
  modelica_metatype _WI = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jobvl has no default value.
  // _jobvr has no default value.
  // _n has no default value.
  // _a has no default value.
  // _lda has no default value.
  // _ldvl has no default value.
  // _ldvr has no default value.
  // _work has no default value.
  // _lwork has no default value.
  // _wr has no default value.
  // _wi has no default value.
  // _vl has no default value.
  // _vr has no default value.
  // _info has no default value.
  // _INFO has no default value.
  // _LDA has no default value.
  // _LDVL has no default value.
  // _LDVR has no default value.
  // _LWORK has no default value.
  // _N has no default value.
  // _JOBVL has no default value.
  // _JOBVR has no default value.
  // _A has no default value.
  // _VL has no default value.
  // _VR has no default value.
  // _WORK has no default value.
  // _WR has no default value.
  // _WI has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
  tmpMeta10 = MMC_CAR(tmpMeta9);
  tmpMeta11 = MMC_CDR(tmpMeta9);
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  if (listEmpty(tmpMeta13)) MMC_THROW_INTERNAL();
  tmpMeta14 = MMC_CAR(tmpMeta13);
  tmpMeta15 = MMC_CDR(tmpMeta13);
  if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
  tmpMeta16 = MMC_CAR(tmpMeta15);
  tmpMeta17 = MMC_CDR(tmpMeta15);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  if (listEmpty(tmpMeta19)) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_CAR(tmpMeta19);
  tmpMeta21 = MMC_CDR(tmpMeta19);
  if (listEmpty(tmpMeta21)) MMC_THROW_INTERNAL();
  tmpMeta22 = MMC_CAR(tmpMeta21);
  tmpMeta23 = MMC_CDR(tmpMeta21);
  if (listEmpty(tmpMeta23)) MMC_THROW_INTERNAL();
  tmpMeta24 = MMC_CAR(tmpMeta23);
  tmpMeta25 = MMC_CDR(tmpMeta23);
  if (listEmpty(tmpMeta25)) MMC_THROW_INTERNAL();
  tmpMeta26 = MMC_CAR(tmpMeta25);
  tmpMeta27 = MMC_CDR(tmpMeta25);
  if (listEmpty(tmpMeta27)) MMC_THROW_INTERNAL();
  tmpMeta28 = MMC_CAR(tmpMeta27);
  tmpMeta29 = MMC_CDR(tmpMeta27);
  if (!listEmpty(tmpMeta29)) MMC_THROW_INTERNAL();
  _jobvl = tmpMeta2;
  _jobvr = tmpMeta4;
  _n = tmpMeta6;
  _a = tmpMeta8;
  _lda = tmpMeta10;
  _wr = tmpMeta12;
  _wi = tmpMeta14;
  _vl = tmpMeta16;
  _ldvl = tmpMeta18;
  _vr = tmpMeta20;
  _ldvr = tmpMeta22;
  _work = tmpMeta24;
  _lwork = tmpMeta26;
  _info = tmpMeta28;

  _JOBVL = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobvl);

  _JOBVR = omc_NFEvalFunctionExt_evaluateExtStringArg(threadData, _jobvr);

  _N = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _n);

  _A = omc_NFEvalFunctionExt_evaluateExtRealMatrixArg(threadData, _a);

  _LDA = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lda);

  _LDVL = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldvl);

  _LDVR = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _ldvr);

  _WORK = omc_NFEvalFunctionExt_evaluateExtRealArrayArg(threadData, _work);

  _LWORK = omc_NFEvalFunctionExt_evaluateExtIntArg(threadData, _lwork);

  _A = omc_Lapack_dgeev(threadData, _JOBVL, _JOBVR, _N, _A, _LDA, _LDVL, _LDVR, _WORK, _LWORK ,&_WR ,&_WI ,&_VL ,&_VR ,&_WORK ,&_INFO);

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _a, omc_NFExpression_makeRealMatrix(threadData, _A));

  omc_NFEvalFunction_assignVariable(threadData, _wr, omc_NFExpression_makeRealArray(threadData, _WR));

  omc_NFEvalFunction_assignVariable(threadData, _wi, omc_NFExpression_makeRealArray(threadData, _WI));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _vl, omc_NFExpression_makeRealMatrix(threadData, _VL));

  omc_NFEvalFunctionExt_assignVariableExt(threadData, _vr, omc_NFExpression_makeRealMatrix(threadData, _VR));

  omc_NFEvalFunction_assignVariable(threadData, _work, omc_NFExpression_makeRealArray(threadData, _WORK));

  omc_NFEvalFunction_assignVariable(threadData, _info, omc_NFExpression_makeInteger(threadData, _INFO));
  _return: OMC_LABEL_UNUSED
  return;
}

