#include "omc_simulation_settings.h"
#include "NFPackage.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NFPackage.replaceConstants"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,26,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "NFPackage.collectConstants"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,26,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,5) {&NFPackage_ConstantsSetImpl_Tree_EMPTY__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,7,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,5,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,7,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,4,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,4,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,12,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#include "util/modelica.h"

#include "NFPackage_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_balance,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_balance,0}};
#define boxvar_NFPackage_ConstantsSetImpl_balance MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFPackage_ConstantsSetImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_calculateBalance,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_calculateBalance,0}};
#define boxvar_NFPackage_ConstantsSetImpl_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFPackage_ConstantsSetImpl_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_height,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_height,0}};
#define boxvar_NFPackage_ConstantsSetImpl_height MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_printTreeStr2,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_printTreeStr2,0}};
#define boxvar_NFPackage_ConstantsSetImpl_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_referenceEqOrEmpty,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_referenceEqOrEmpty,0}};
#define boxvar_NFPackage_ConstantsSetImpl_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_rotateLeft,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_rotateLeft,0}};
#define boxvar_NFPackage_ConstantsSetImpl_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_rotateRight,2,0) {(void*) boxptr_NFPackage_ConstantsSetImpl_rotateRight,0}};
#define boxvar_NFPackage_ConstantsSetImpl_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_NFPackage_ConstantsSetImpl_rotateRight)

DLLDirection
modelica_metatype omc_NFPackage_replaceFuncConstants(threadData_t *threadData, modelica_metatype _name, modelica_metatype __omcQ_24in_5Ffunc)
{
  modelica_metatype _func = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _sections = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _eval_binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _func = __omcQ_24in_5Ffunc;
  // _cls has no default value.
  // _comps has no default value.
  // _sections has no default value.
  // _comp has no default value.
  // _binding has no default value.
  // _eval_binding has no default value.
  _cls = omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cls;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,5) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,5) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _comps = tmpMeta6;
          _sections = tmpMeta7;
          /* Pattern matching succeeded */
          {
            modelica_metatype _c;
            for (tmpMeta8 = _comps, tmp11 = arrayLength(tmpMeta8), tmp10 = 1; tmp10 <= tmp11; tmp10++)
            {
              _c = arrayGet(tmpMeta8,tmp10);
              _comp = omc_NFInstNode_InstNode_component(threadData, _c);

              _binding = omc_NFComponent_getBinding(threadData, _comp);

              _eval_binding = omc_NFPackage_replaceBindingConstants(threadData, _binding);

              if((!referenceEq(_binding, _eval_binding)))
              {
                _comp = omc_NFComponent_setBinding(threadData, _eval_binding, _comp);

                omc_NFInstNode_InstNode_updateComponent(threadData, _comp, _c);
              }
            }
          }

          { /* match expression */
            modelica_metatype tmp14_1;
            tmp14_1 = _sections;
            {
              int tmp14;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp14_1))) {
                case 3: {
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta20;
                  
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar1;
                    modelica_metatype* tmp17;
                    modelica_metatype tmpMeta18;
                    modelica_metatype __omcQ_24tmpVar0;
                    modelica_integer tmp19;
                    modelica_metatype _a_loopVar = 0;
                    modelica_metatype _a;
                    _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sections), 4)));
                    tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar1 = tmpMeta18; /* defaultValue */
                    tmp17 = &__omcQ_24tmpVar1;
                    while(1) {
                      tmp19 = 1;
                      if (!listEmpty(_a_loopVar)) {
                        _a = MMC_CAR(_a_loopVar);
                        _a_loopVar = MMC_CDR(_a_loopVar);
                        tmp19--;
                      }
                      if (tmp19 == 0) {
                        __omcQ_24tmpVar0 = omc_NFAlgorithm_mapExp(threadData, _a, boxvar_NFPackage_replaceExpConstants);
                        *tmp17 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                        tmp17 = &MMC_CDR(*tmp17);
                      } else if (tmp19 == 1) {
                        break;
                      } else {
                        goto goto_12;
                      }
                    }
                    *tmp17 = mmc_mk_nil();
                    tmpMeta16 = __omcQ_24tmpVar1;
                  }
                  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(6));
                  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_sections), 6*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = tmpMeta16;
                  _sections = tmpMeta15;

                  tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(7));
                  memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_cls), 7*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[4] = _sections;
                  _cls = tmpMeta20;

                  omc_NFInstNode_InstNode_updateClass(threadData, _cls, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));
                  goto tmp13_done;
                }
                case 4: {
                  modelica_metatype tmpMeta21;
                  modelica_metatype tmpMeta22;
                  modelica_metatype tmpMeta26;
                  
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar3;
                    modelica_metatype* tmp23;
                    modelica_metatype tmpMeta24;
                    modelica_metatype __omcQ_24tmpVar2;
                    modelica_integer tmp25;
                    modelica_metatype _arg_loopVar = 0;
                    modelica_metatype _arg;
                    _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sections), 3)));
                    tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar3 = tmpMeta24; /* defaultValue */
                    tmp23 = &__omcQ_24tmpVar3;
                    while(1) {
                      tmp25 = 1;
                      if (!listEmpty(_arg_loopVar)) {
                        _arg = MMC_CAR(_arg_loopVar);
                        _arg_loopVar = MMC_CDR(_arg_loopVar);
                        tmp25--;
                      }
                      if (tmp25 == 0) {
                        __omcQ_24tmpVar2 = omc_NFPackage_replaceExpConstants(threadData, _arg);
                        *tmp23 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                        tmp23 = &MMC_CDR(*tmp23);
                      } else if (tmp25 == 1) {
                        break;
                      } else {
                        goto goto_12;
                      }
                    }
                    *tmp23 = mmc_mk_nil();
                    tmpMeta22 = __omcQ_24tmpVar3;
                  }
                  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(9));
                  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_sections), 9*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = tmpMeta22;
                  _sections = tmpMeta21;

                  tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(7));
                  memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_cls), 7*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[4] = _sections;
                  _cls = tmpMeta26;

                  omc_NFInstNode_InstNode_updateClass(threadData, _cls, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));
                  goto tmp13_done;
                }
                default:
                tmp13_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  goto tmp13_done;
                }
                }
                goto tmp13_end;
                tmp13_end: ;
              }
              goto goto_12;
              goto_12:;
              goto goto_1;
              goto tmp13_done;
              tmp13_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NFPackage_replaceExpConstants__traverser(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _cref has no default value.
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
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _cref = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = (omc_NFComponentRef_isPackageConstant(threadData, _cref)?omc_NFCeval_evalExp(threadData, _exp, _OMC_LIT3):_exp);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFPackage_replaceExpConstants(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFPackage_replaceExpConstants__traverser);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFPackage_replaceBindingConstants(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding)
{
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binding = __omcQ_24in_5Fbinding;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _binding;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,10) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_binding), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFPackage_replaceExpConstants(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_binding), 2))));
          _binding = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_metatype omc_NFPackage_replaceVariableConstants(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar)
{
  modelica_metatype _var = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  // _binding has no default value.
  _binding = omc_NFPackage_replaceBindingConstants(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))));

  if((!referenceEq(_binding, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[4] = _binding;
    _var = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _var;
}

DLLDirection
modelica_metatype omc_NFPackage_collectFuncConstants(threadData_t *threadData, modelica_metatype _name, modelica_metatype _func, modelica_metatype __omcQ_24in_5Fconstants)
{
  modelica_metatype _constants = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _sections = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _constants = __omcQ_24in_5Fconstants;
  // _cls has no default value.
  // _comps has no default value.
  // _sections has no default value.
  _cls = omc_NFInstNode_InstNode_getClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 3))));

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cls;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,5) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,5) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _comps = tmpMeta6;
          _sections = tmpMeta7;
          /* Pattern matching succeeded */
          {
            modelica_metatype _c;
            for (tmpMeta8 = _comps, tmp11 = arrayLength(tmpMeta8), tmp10 = 1; tmp10 <= tmp11; tmp10++)
            {
              _c = arrayGet(tmpMeta8,tmp10);
              _constants = omc_NFPackage_collectBindingConstants(threadData, omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _c)), _constants);
            }
          }

          { /* match expression */
            modelica_metatype tmp14_1;
            tmp14_1 = _sections;
            {
              int tmp14;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp14_1))) {
                case 3: {
                  
                  /* Pattern matching succeeded */
                  _constants = omc_NFAlgorithm_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sections), 4))), boxvar_NFPackage_collectExpConstants, _constants);
                  goto tmp13_done;
                }
                case 4: {
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype _arg;
                    for (tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sections), 3))); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
                    {
                      _arg = MMC_CAR(tmpMeta15);
                      _constants = omc_NFPackage_collectExpConstants(threadData, _arg, _constants);
                    }
                  }
                  goto tmp13_done;
                }
                default:
                tmp13_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  goto tmp13_done;
                }
                }
                goto tmp13_end;
                tmp13_end: ;
              }
              goto goto_12;
              goto_12:;
              goto goto_1;
              goto tmp13_done;
              tmp13_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _constants;
}

DLLDirection
modelica_metatype omc_NFPackage_getPackageConstantBinding2(threadData_t *threadData, modelica_metatype _fieldNode, modelica_metatype _cref)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _cr_node = NULL;
  modelica_boolean _is_record;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  // _cr_node has no default value.
  // _is_record has no default value.
  if((!omc_NFComponentRef_isCref(threadData, _cref)))
  {
    _binding = _OMC_LIT4;

    goto _return;
  }

  _is_record = omc_NFType_isRecord(threadData, omc_NFType_arrayElementType(threadData, omc_NFComponentRef_nodeType(threadData, _cref)));

  _cr_node = omc_NFComponentRef_node(threadData, _cref);

  if((!(omc_NFInstNode_InstNode_isComponent(threadData, _cr_node) && _is_record)))
  {
    _binding = _OMC_LIT4;

    goto _return;
  }

  omc_NFTyping_typeComponentBinding(threadData, _cr_node, ((modelica_integer) 8), 1 /* true */);

  _binding = omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _cr_node));

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    _binding = omc_NFPackage_getPackageConstantBinding2(threadData, _cr_node, omc_NFComponentRef_rest(threadData, _cref));
  }

  if(omc_NFBinding_isBound(threadData, _binding))
  {
    _binding = omc_NFBinding_recordFieldBinding(threadData, _fieldNode, _binding);
  }
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_metatype omc_NFPackage_getPackageConstantBinding(threadData_t *threadData, modelica_metatype _cref)
{
  modelica_metatype _binding = NULL;
  modelica_metatype _cr_node = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  _cr_node = omc_NFComponentRef_node(threadData, _cref);
  omc_NFTyping_typeComponentBinding(threadData, _cr_node, ((modelica_integer) 8), 1 /* true */);

  _binding = omc_NFComponent_getImplicitBinding(threadData, omc_NFInstNode_InstNode_component(threadData, _cr_node), omc_NFInstNode_InstNode_instanceParent(threadData, _cr_node));

  if(omc_NFBinding_isUnbound(threadData, _binding))
  {
    _binding = omc_NFPackage_getPackageConstantBinding2(threadData, _cr_node, omc_NFComponentRef_rest(threadData, _cref));

    omc_NFInstNode_InstNode_componentApply(threadData, _cr_node, boxvar_NFComponent_setBinding, _binding);
  }
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_metatype omc_NFPackage_collectExpConstants__traverser(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fconstants)
{
  modelica_metatype _constants = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _constants = __omcQ_24in_5Fconstants;
  // _cref has no default value.
  // _binding has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,5) == 0) goto tmp2_end;
          
          _cref = tmpMeta5;
          /* Pattern matching succeeded */
          if((omc_NFComponentRef_isPackageConstant(threadData, _cref) && (!omc_NFExpression_isFunctionPointer(threadData, _exp))))
          {
            _binding = omc_NFPackage_getPackageConstantBinding(threadData, _cref);

            _constants = omc_NFPackage_ConstantsSetImpl_add(threadData, _constants, omc_NFComponentRef_stripSubscriptsAll(threadData, _cref));

            _constants = omc_NFPackage_collectBindingConstants(threadData, _binding, _constants);
          }
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return _constants;
}

DLLDirection
modelica_metatype omc_NFPackage_collectExpConstants(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fconstants)
{
  modelica_metatype _constants = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _constants = __omcQ_24in_5Fconstants;
  _constants = omc_NFExpression_fold(threadData, _exp, boxvar_NFPackage_collectExpConstants__traverser, _constants);
  _return: OMC_LABEL_UNUSED
  return _constants;
}

DLLDirection
modelica_metatype omc_NFPackage_collectBindingConstants(threadData_t *threadData, modelica_metatype _binding, modelica_metatype __omcQ_24in_5Fconstants)
{
  modelica_metatype _constants = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _constants = __omcQ_24in_5Fconstants;
  if(omc_NFBinding_isExplicitlyBound(threadData, _binding))
  {
    _constants = omc_NFPackage_collectExpConstants(threadData, omc_NFBinding_getTypedExp(threadData, _binding), _constants);
  }
  _return: OMC_LABEL_UNUSED
  return _constants;
}

DLLDirection
modelica_metatype omc_NFPackage_collectVariableConstants(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fconstants)
{
  modelica_metatype _constants = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _constants = __omcQ_24in_5Fconstants;
  _constants = omc_NFPackage_collectBindingConstants(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), _constants);
  _return: OMC_LABEL_UNUSED
  return _constants;
}

DLLDirection
modelica_metatype omc_NFPackage_replaceConstants(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_metatype __omcQ_24in_5Ffunctions, modelica_metatype *out_functions)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype _flatModel = NULL;
  modelica_metatype _functions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  _flatModel = __omcQ_24in_5FflatModel;
  _functions = __omcQ_24in_5Ffunctions;
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = omc_NFPackage_replaceVariableConstants(threadData, _c);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  __omcQ_24mrfa_5F0 = tmpMeta1;

  __omcQ_24mrfa_5F1 = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFPackage_replaceExpConstants);

  __omcQ_24mrfa_5F2 = omc_NFEquation_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFPackage_replaceExpConstants);

  __omcQ_24mrfa_5F3 = omc_NFAlgorithm_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))), boxvar_NFPackage_replaceExpConstants);

  __omcQ_24mrfa_5F4 = omc_NFAlgorithm_mapExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))), boxvar_NFPackage_replaceExpConstants);

  tmpMeta5 = mmc_mk_box8(3, &NFFlatModel_FLAT__MODEL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 2))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3, __omcQ_24mrfa_5F4, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 8))));
  _flatModel = tmpMeta5;

  _functions = omc_NFFlatten_FunctionTreeImpl_map(threadData, _functions, boxvar_NFPackage_replaceFuncConstants);

  omc_ExecStat_execStat(threadData, _OMC_LIT5);
  _return: OMC_LABEL_UNUSED
  if (out_functions) { *out_functions = _functions; }
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFPackage_collectConstants(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _constants = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  // _vars has no default value.
  // _constants has no default value.
  _constants = omc_NFPackage_ConstantsSetImpl_new(threadData);

  _constants = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), boxvar_NFPackage_collectVariableConstants, _constants);

  _constants = omc_NFEquation_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), boxvar_NFPackage_collectExpConstants, _constants);

  _constants = omc_NFEquation_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), boxvar_NFPackage_collectExpConstants, _constants);

  _constants = omc_NFAlgorithm_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))), boxvar_NFPackage_collectExpConstants, _constants);

  _constants = omc_NFAlgorithm_foldExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 7))), boxvar_NFPackage_collectExpConstants, _constants);

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype tmpMeta2;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp3;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype tmpMeta4;
    modelica_metatype _c;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    _c_loopVar = omc_NFPackage_ConstantsSetImpl_listKeys(threadData, _constants, tmpMeta4);
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta2; /* defaultValue */
    while(1) {
      tmp3 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp3--;
      }
      if (tmp3 == 0) {
        __omcQ_24tmpVar6 = omc_NFVariable_fromCref(threadData, _c);
        __omcQ_24tmpVar7 = mmc_mk_cons(__omcQ_24tmpVar6,__omcQ_24tmpVar7);
      } else if (tmp3 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _vars = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp7;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = _vars;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta6; /* defaultValue */
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar8 = omc_NFVariable_expand(threadData, _v, 0 /* false */);
        __omcQ_24tmpVar9 = listAppend(__omcQ_24tmpVar8, __omcQ_24tmpVar9);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmpMeta5 = __omcQ_24tmpVar9;
  }
  _vars = tmpMeta5;

  tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = listAppend(_vars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))));
  _flatModel = tmpMeta8;

  omc_ExecStat_execStat(threadData, _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _key = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(4, &NFPackage_ConstantsSetImpl_Tree_LEAF__desc, _inKey);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_NFPackage_ConstantsSetImpl_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 6*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_NFPackage_ConstantsSetImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 4))), _inKey);
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[5] = omc_NFPackage_ConstantsSetImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey);
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFPackage_ConstantsSetImpl_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _key = tmpMeta9;
          /* Pattern matching succeeded */
          _key_comp = omc_NFPackage_ConstantsSetImpl_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box2(4, &NFPackage_ConstantsSetImpl_Tree_LEAF__desc, _inKey);
            tmpMeta11 = mmc_mk_box5(3, &NFPackage_ConstantsSetImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT7);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box2(4, &NFPackage_ConstantsSetImpl_Tree_LEAF__desc, _inKey);
              tmpMeta13 = mmc_mk_box5(3, &NFPackage_ConstantsSetImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT7, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _outTree = _tree;
            }
          }
          tmpMeta1 = _outTree;
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  {
    modelica_metatype _key;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _key = MMC_CAR(tmpMeta1);
      _tree = omc_NFPackage_ConstantsSetImpl_add(threadData, _tree, _key);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_balance(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_integer _lh;
      modelica_integer _rh;
      modelica_integer _diff;
      modelica_metatype _balanced_tree = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lh has no default value.
      // _rh has no default value.
      // _diff has no default value.
      // _balanced_tree has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_NFPackage_ConstantsSetImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))));

          _rh = omc_NFPackage_ConstantsSetImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_NFPackage_ConstantsSetImpl_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) > ((modelica_integer) 0))?omc_NFPackage_ConstantsSetImpl_rotateLeft(threadData, omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), omc_NFPackage_ConstantsSetImpl_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))))):omc_NFPackage_ConstantsSetImpl_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_NFPackage_ConstantsSetImpl_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) < ((modelica_integer) 0))?omc_NFPackage_ConstantsSetImpl_rotateRight(threadData, omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outTree, omc_NFPackage_ConstantsSetImpl_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))):omc_NFPackage_ConstantsSetImpl_rotateRight(threadData, _outTree));
            }
            else
            {
              if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 3)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 6*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
                _outTree = tmpMeta6;

                _balanced_tree = _outTree;
              }
              else
              {
                _balanced_tree = _outTree;
              }
            }
          }
          tmpMeta1 = _balanced_tree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFPackage_ConstantsSetImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBalance has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFPackage_ConstantsSetImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4)))) - omc_NFPackage_ConstantsSetImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _outBalance = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBalance;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_NFPackage_ConstantsSetImpl_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_boolean omc_NFPackage_ConstantsSetImpl_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp5 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = 0 /* false */;
  // _key has no default value.
  // _key_comp has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto _return;
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
  _key = tmpMeta1;

  _key_comp = omc_NFPackage_ConstantsSetImpl_keyCompare(threadData, _inKey, _key);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _key_comp;
    tmp8_2 = _inTree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,4) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
          _tree = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,4) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 4));
          
          _tree = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmp5;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NFPackage_ConstantsSetImpl_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_NFPackage_ConstantsSetImpl_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFPackage_ConstantsSetImpl_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHeight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _outHeight = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outHeight;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_NFPackage_ConstantsSetImpl_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_intersection(threadData_t *threadData, modelica_metatype _tree1, modelica_metatype _tree2, modelica_metatype *out_rest1, modelica_metatype *out_rest2)
{
  modelica_metatype _intersect = NULL;
  modelica_metatype _rest1 = NULL;
  modelica_metatype _rest2 = NULL;
  modelica_metatype _keylist1 = NULL;
  modelica_metatype _keylist2 = NULL;
  modelica_metatype _k1 = NULL;
  modelica_metatype _k2 = NULL;
  modelica_integer _key_comp;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _intersect = _OMC_LIT7;
  _rest1 = _OMC_LIT7;
  _rest2 = _OMC_LIT7;
  // _keylist1 has no default value.
  // _keylist2 has no default value.
  // _k1 has no default value.
  // _k2 has no default value.
  // _key_comp has no default value.
  if(omc_NFPackage_ConstantsSetImpl_isEmpty(threadData, _tree1))
  {
    _rest2 = _tree2;

    goto _return;
  }

  if(omc_NFPackage_ConstantsSetImpl_isEmpty(threadData, _tree2))
  {
    _rest1 = _tree1;

    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = omc_NFPackage_ConstantsSetImpl_listKeys(threadData, _tree1, tmpMeta1);
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _k1 = tmpMeta3;
  _keylist1 = tmpMeta4;

  /* Pattern-matching assignment */
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = omc_NFPackage_ConstantsSetImpl_listKeys(threadData, _tree2, tmpMeta5);
  if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_CAR(tmpMeta6);
  tmpMeta8 = MMC_CDR(tmpMeta6);
  _k2 = tmpMeta7;
  _keylist2 = tmpMeta8;

  while(1)
  {
    if(!1 /* true */) break;
    _key_comp = omc_NFPackage_ConstantsSetImpl_keyCompare(threadData, _k1, _k2);

    if((_key_comp > ((modelica_integer) 0)))
    {
      if(isPresent(_rest2))
      {
        _rest2 = omc_NFPackage_ConstantsSetImpl_add(threadData, _rest2, _k2);
      }

      if(listEmpty(_keylist2))
      {
        break;
      }

      /* Pattern-matching assignment */
      tmpMeta9 = _keylist2;
      if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
      tmpMeta10 = MMC_CAR(tmpMeta9);
      tmpMeta11 = MMC_CDR(tmpMeta9);
      _k2 = tmpMeta10;
      _keylist2 = tmpMeta11;
    }
    else
    {
      if((_key_comp < ((modelica_integer) 0)))
      {
        if(isPresent(_rest1))
        {
          _rest1 = omc_NFPackage_ConstantsSetImpl_add(threadData, _rest1, _k1);
        }

        if(listEmpty(_keylist1))
        {
          break;
        }

        /* Pattern-matching assignment */
        tmpMeta12 = _keylist1;
        if (listEmpty(tmpMeta12)) MMC_THROW_INTERNAL();
        tmpMeta13 = MMC_CAR(tmpMeta12);
        tmpMeta14 = MMC_CDR(tmpMeta12);
        _k1 = tmpMeta13;
        _keylist1 = tmpMeta14;
      }
      else
      {
        _intersect = omc_NFPackage_ConstantsSetImpl_add(threadData, _intersect, _k1);

        if((listEmpty(_keylist1) || listEmpty(_keylist2)))
        {
          break;
        }

        /* Pattern-matching assignment */
        tmpMeta15 = _keylist1;
        if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
        tmpMeta16 = MMC_CAR(tmpMeta15);
        tmpMeta17 = MMC_CDR(tmpMeta15);
        _k1 = tmpMeta16;
        _keylist1 = tmpMeta17;

        /* Pattern-matching assignment */
        tmpMeta18 = _keylist2;
        if (listEmpty(tmpMeta18)) MMC_THROW_INTERNAL();
        tmpMeta19 = MMC_CAR(tmpMeta18);
        tmpMeta20 = MMC_CDR(tmpMeta18);
        _k2 = tmpMeta19;
        _keylist2 = tmpMeta20;
      }
    }
  }

  if((isPresent(_rest1) && (!listEmpty(_keylist1))))
  {
    {
      modelica_metatype _key;
      for (tmpMeta21 = _keylist1; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
      {
        _key = MMC_CAR(tmpMeta21);
        _rest1 = omc_NFPackage_ConstantsSetImpl_add(threadData, _rest1, _key);
      }
    }
  }

  if((isPresent(_rest2) && (!listEmpty(_keylist2))))
  {
    {
      modelica_metatype _key;
      for (tmpMeta23 = _keylist2; !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
      {
        _key = MMC_CAR(tmpMeta23);
        _rest2 = omc_NFPackage_ConstantsSetImpl_add(threadData, _rest2, _key);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_rest1) { *out_rest1 = _rest1; }
  if (out_rest2) { *out_rest2 = _rest2; }
  return _intersect;
}

DLLDirection
modelica_boolean omc_NFPackage_ConstantsSetImpl_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
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
  _isEmpty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEmpty;
}
modelica_metatype boxptr_NFPackage_ConstantsSetImpl_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFPackage_ConstantsSetImpl_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _treeToJoin;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tree;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _tree = omc_NFPackage_ConstantsSetImpl_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))));

          _tree = omc_NFPackage_ConstantsSetImpl_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 4))));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFPackage_ConstantsSetImpl_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_integer omc_NFPackage_ConstantsSetImpl_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = omc_NFComponentRef_compare(threadData, _inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_NFPackage_ConstantsSetImpl_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_NFPackage_ConstantsSetImpl_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_NFPackage_ConstantsSetImpl_keyStr(threadData_t *threadData, modelica_metatype _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_NFComponentRef_toString(threadData, _inKey);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_listKeys(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_NFPackage_ConstantsSetImpl_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_NFPackage_ConstantsSetImpl_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT7;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFPackage_ConstantsSetImpl_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFPackage_ConstantsSetImpl_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2))));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFPackage_ConstantsSetImpl_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2))));
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFPackage_ConstantsSetImpl_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT8;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFPackage_ConstantsSetImpl_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT0),omc_NFPackage_ConstantsSetImpl_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT9);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT0));
          tmp1 = tmpMeta9;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
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
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT10:_OMC_LIT11));
          tmpMeta6 = stringAppend(omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 4))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT12:_OMC_LIT13));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT14);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFPackage_ConstantsSetImpl_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT9);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT11:_OMC_LIT10));
          tmpMeta12 = stringAppend(tmpMeta10,omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT12:_OMC_LIT13));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT14);
          tmpMeta15 = stringAppend(tmpMeta14,omc_NFPackage_ConstantsSetImpl_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT9);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_NFPackage_ConstantsSetImpl_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = referenceEq(_t1, _t2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 4))));
          tmpMeta1 = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 4))), _OMC_LIT7);
          tmpMeta1 = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _child, _node, _OMC_LIT7);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFPackage_ConstantsSetImpl_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))));
          tmpMeta1 = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 4))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _outNode, _OMC_LIT7, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))));
          tmpMeta1 = omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData, _child, _OMC_LIT7, _node);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orig;
    tmp4_2 = _left;
    tmp4_3 = _right;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(4, &NFPackage_ConstantsSetImpl_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _orig;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 4))), _left) && omc_NFPackage_ConstantsSetImpl_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box5(3, &NFPackage_ConstantsSetImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFPackage_ConstantsSetImpl_height(threadData, _left)),(modelica_integer)(omc_NFPackage_ConstantsSetImpl_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box5(3, &NFPackage_ConstantsSetImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFPackage_ConstantsSetImpl_height(threadData, _left)),(modelica_integer)(omc_NFPackage_ConstantsSetImpl_height(threadData, _right)))), _left, _right);
          tmpMeta1 = tmpMeta10;
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_NFPackage_ConstantsSetImpl_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_metatype _key = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _key has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _key = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _key;
}

