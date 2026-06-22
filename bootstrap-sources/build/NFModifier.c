#include "omc_simulation_settings.h"
#include "NFModifier.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Duplicate modification of element %s on %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,43,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Trying to override final element %s with modifier '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,55,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(222)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NFModifier.Modifier.toFlatString"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,32,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,4) {&IOStream_IOStreamType_LIST__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,3,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "= "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,2,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,2,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,1,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,17,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Mod.mergeMod failed on unknown mod."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,35,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT17,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20,0.0);
#define _OMC_LIT20 MMC_REFREALLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,5) {&NFModifier_Modifier_NOMOD__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,3) {&SCode_Final_FINAL__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,7) {&SCode_Mod_NOMOD__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "component "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,10,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "class "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,6,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "extends "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,8,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,5) {&NFModifier_ModTable_Tree_EMPTY__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,7,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,1,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,5,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,4,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,4,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#include "util/modelica.h"

#include "NFModifier_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_mergeLocal(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _name, modelica_metatype _scope, modelica_metatype _prefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_mergeLocal,2,0) {(void*) boxptr_NFModifier_Modifier_mergeLocal,0}};
#define boxvar_NFModifier_Modifier_mergeLocal MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_mergeLocal)
PROTECTED_FUNCTION_STATIC void omc_NFModifier_Modifier_checkFinalOverride(threadData_t *threadData, modelica_metatype _innerFinal, modelica_metatype _outerMod, modelica_metatype _innerInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_checkFinalOverride,2,0) {(void*) boxptr_NFModifier_Modifier_checkFinalOverride,0}};
#define boxvar_NFModifier_Modifier_checkFinalOverride MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_checkFinalOverride)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_createSubMod,2,0) {(void*) boxptr_NFModifier_Modifier_createSubMod,0}};
#define boxvar_NFModifier_Modifier_createSubMod MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_Modifier_createSubMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_balance,2,0) {(void*) boxptr_NFModifier_ModTable_balance,0}};
#define boxvar_NFModifier_ModTable_balance MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_calculateBalance,2,0) {(void*) boxptr_NFModifier_ModTable_calculateBalance,0}};
#define boxvar_NFModifier_ModTable_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_height,2,0) {(void*) boxptr_NFModifier_ModTable_height,0}};
#define boxvar_NFModifier_ModTable_height MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_printTreeStr2,2,0) {(void*) boxptr_NFModifier_ModTable_printTreeStr2,0}};
#define boxvar_NFModifier_ModTable_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_referenceEqOrEmpty,2,0) {(void*) boxptr_NFModifier_ModTable_referenceEqOrEmpty,0}};
#define boxvar_NFModifier_ModTable_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateLeft,2,0) {(void*) boxptr_NFModifier_ModTable_rotateLeft,0}};
#define boxvar_NFModifier_ModTable_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateRight,2,0) {(void*) boxptr_NFModifier_ModTable_rotateRight,0}};
#define boxvar_NFModifier_ModTable_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_NFModifier_ModTable_rotateRight)

static modelica_metatype closure0_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype prefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}static modelica_metatype closure1_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype prefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_mergeLocal(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2, modelica_string _name, modelica_metatype _scope, modelica_metatype _prefix)
{
  modelica_metatype _mod = NULL;
  modelica_string _comp_name = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  // _comp_name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _mod1;
    tmp4_2 = _mod2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), _prefix);
          tmpMeta8 = mmc_mk_box2(0, _scope, tmpMeta9);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_mod1), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_join(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 6))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFModifier_Modifier_mergeLocal,tmpMeta8));
          _mod1 = tmpMeta7;
          tmpMeta1 = _mod1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 2))), _prefix);
          tmpMeta12 = mmc_mk_box2(0, _scope, tmpMeta13);
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_mod2), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[6] = omc_NFModifier_ModTable_join(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 6))), (modelica_fnptr) mmc_mk_box2(0,closure1_NFModifier_Modifier_mergeLocal,tmpMeta12));
          _mod2 = tmpMeta11;
          tmpMeta1 = _mod2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(omc_NFModifier_Modifier_name(threadData, _mod1), _prefix);
          _comp_name = stringDelimitList(listReverse(tmpMeta14), _OMC_LIT1);

          tmpMeta15 = mmc_mk_cons(_comp_name, mmc_mk_cons(omc_NFModifier_ModifierScope_toString(threadData, _scope), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta16 = mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _mod1), mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _mod2), MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT5, tmpMeta15, tmpMeta16);
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

PROTECTED_FUNCTION_STATIC void omc_NFModifier_Modifier_checkFinalOverride(threadData_t *threadData, modelica_metatype _innerFinal, modelica_metatype _outerMod, modelica_metatype _innerInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _innerFinal;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,0) == 0) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(omc_NFModifier_Modifier_name(threadData, _outerMod), mmc_mk_cons(omc_NFModifier_Modifier_toString(threadData, _outerMod, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta6 = mmc_mk_cons(omc_NFModifier_Modifier_info(threadData, _outerMod), mmc_mk_cons(_innerInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT7, tmpMeta5, tmpMeta6);
          goto goto_1;
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
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = omc_NFModifier_Modifier_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subMod), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subMod), 2))), _modScope, _scope, _confidence);
  _return: OMC_LABEL_UNUSED
  return _mod;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_Modifier_createSubMod(threadData_t *threadData, modelica_metatype _subMod, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = mmc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_createSubMod(threadData, _subMod, _modScope, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

DLLDirection
modelica_string omc_NFModifier_Modifier_toFlatString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_boolean _printName)
{
  modelica_string _str = NULL;
  modelica_metatype _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  _s = omc_IOStream_create(threadData, _OMC_LIT8, _OMC_LIT9);

  _s = omc_NFModifier_Modifier_toFlatStream(threadData, _mod, _format, _s, _printName);

  _str = omc_IOStream_string(threadData, _s);

  omc_IOStream_delete(threadData, _s);
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NFModifier_Modifier_toFlatString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_printName);
  _str = omc_NFModifier_Modifier_toFlatString(threadData, _mod, _format, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_toFlatStream(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_boolean _printName)
{
  modelica_metatype _s = NULL;
  modelica_metatype _submods = NULL;
  modelica_string _binding_sep = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  // _submods has no default value.
  // _binding_sep has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          if(_printName)
          {
            _s = omc_IOStream_append(threadData, _s, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))));
          }

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _submods = omc_NFModifier_ModTable_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))), tmpMeta5);

          if((!listEmpty(_submods)))
          {
            _s = omc_IOStream_append(threadData, _s, _OMC_LIT12);

            _s = omc_NFModifier_Modifier_toFlatStreamList(threadData, _submods, _format, _s, _OMC_LIT13);

            _s = omc_IOStream_append(threadData, _s, _OMC_LIT14);

            _binding_sep = _OMC_LIT10;
          }
          else
          {
            _binding_sep = (_printName?_OMC_LIT10:_OMC_LIT11);
          }

          _s = omc_IOStream_append(threadData, _s, omc_NFBinding_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _format, _binding_sep));
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
  return _s;
}
modelica_metatype boxptr_NFModifier_Modifier_toFlatStream(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_metatype _s = NULL;
  tmp1 = mmc_unbox_integer(_printName);
  _s = omc_NFModifier_Modifier_toFlatStream(threadData, _mod, _format, __omcQ_24in_5Fs, tmp1);
  /* skip box _s; IOStream.IOStream */
  return _s;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_toFlatStreamList(threadData_t *threadData, modelica_metatype _modifiers, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs, modelica_string _delimiter)
{
  modelica_metatype _s = NULL;
  modelica_metatype _mods = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _s = __omcQ_24in_5Fs;
  _mods = _modifiers;
  if(listEmpty(_mods))
  {
    goto _return;
  }

  while(1)
  {
    if(!1 /* true */) break;
    _s = omc_NFModifier_Modifier_toFlatStream(threadData, listHead(_mods), _format, _s, 1 /* true */);

    _mods = listRest(_mods);

    if(listEmpty(_mods))
    {
      break;
    }
    else
    {
      _s = omc_IOStream_append(threadData, _s, _delimiter);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _s;
}

DLLDirection
modelica_string omc_NFModifier_Modifier_toString(threadData_t *threadData, modelica_metatype _mod, modelica_boolean _printName)
{
  modelica_string _string = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _string has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      modelica_metatype _submods = NULL;
      modelica_string _subs_str = NULL;
      modelica_string _binding_str = NULL;
      modelica_string _binding_sep = NULL;
      int tmp4;
      // _submods has no default value.
      // _subs_str has no default value.
      // _binding_str has no default value.
      // _binding_sep has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_string tmp16;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _submods = omc_NFModifier_ModTable_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))), tmpMeta5);

          if((!listEmpty(_submods)))
          {
            {
              modelica_metatype __omcQ_24tmpVar1;
              modelica_metatype* tmp7;
              modelica_metatype tmpMeta8;
              modelica_string __omcQ_24tmpVar0;
              modelica_integer tmp9;
              modelica_metatype _s_loopVar = 0;
              modelica_metatype _s;
              _s_loopVar = _submods;
              tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
              tmp7 = &__omcQ_24tmpVar1;
              while(1) {
                tmp9 = 1;
                if (!listEmpty(_s_loopVar)) {
                  _s = MMC_CAR(_s_loopVar);
                  _s_loopVar = MMC_CDR(_s_loopVar);
                  tmp9--;
                }
                if (tmp9 == 0) {
                  __omcQ_24tmpVar0 = omc_NFModifier_Modifier_toString(threadData, _s, 1 /* true */);
                  *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                  tmp7 = &MMC_CDR(*tmp7);
                } else if (tmp9 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp7 = mmc_mk_nil();
              tmpMeta6 = __omcQ_24tmpVar1;
            }
            tmpMeta10 = stringAppend(_OMC_LIT12,stringDelimitList(tmpMeta6, _OMC_LIT13));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT14);
            _subs_str = tmpMeta11;

            _binding_sep = _OMC_LIT10;
          }
          else
          {
            _subs_str = _OMC_LIT0;

            _binding_sep = (_printName?_OMC_LIT10:_OMC_LIT11);
          }

          _binding_str = omc_NFBinding_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _binding_sep);
          tmp15 = (modelica_boolean)_printName;
          if(tmp15)
          {
            tmpMeta12 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))),_subs_str);
            tmpMeta13 = stringAppend(tmpMeta12,_binding_str);
            tmp16 = tmpMeta13;
          }
          else
          {
            tmpMeta14 = stringAppend(_subs_str,_binding_str);
            tmp16 = tmpMeta14;
          }
          tmp1 = tmp16;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFInstNode_InstNode_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))));
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
  _string = tmp1;
  _return: OMC_LABEL_UNUSED
  return _string;
}
modelica_metatype boxptr_NFModifier_Modifier_toString(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _printName)
{
  modelica_integer tmp1;
  modelica_string _string = NULL;
  tmp1 = mmc_unbox_integer(_printName);
  _string = omc_NFModifier_Modifier_toString(threadData, _mod, tmp1);
  /* skip box _string; String */
  return _string;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_fnptr _func)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = omc_NFModifier_ModTable_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))), ((modelica_fnptr) _func));
          _mod = tmpMeta5;
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
  return _mod;
}

DLLDirection
modelica_boolean omc_NFModifier_Modifier_isFinal(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isFinal;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isFinal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
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
  _isFinal = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isFinal;
}
modelica_metatype boxptr_NFModifier_Modifier_isFinal(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isFinal;
  modelica_metatype out_isFinal;
  _isFinal = omc_NFModifier_Modifier_isFinal(threadData, _mod);
  out_isFinal = mmc_mk_icon(_isFinal);
  return out_isFinal;
}

DLLDirection
modelica_boolean omc_NFModifier_Modifier_isEach(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEach;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEach has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
          
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
  _isEach = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEach;
}
modelica_metatype boxptr_NFModifier_Modifier_isEach(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEach;
  modelica_metatype out_isEach;
  _isEach = omc_NFModifier_Modifier_isEach(threadData, _mod);
  out_isEach = mmc_mk_icon(_isEach);
  return out_isEach;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_toList(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_metatype _modList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _modList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_NFModifier_ModTable_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))), tmpMeta6);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta7;
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
  _modList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _modList;
}

DLLDirection
modelica_boolean omc_NFModifier_Modifier_isRedeclare(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isRedeclare;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isRedeclare has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
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
  _isRedeclare = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isRedeclare;
}
modelica_metatype boxptr_NFModifier_Modifier_isRedeclare(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isRedeclare;
  modelica_metatype out_isRedeclare;
  _isRedeclare = omc_NFModifier_Modifier_isRedeclare(threadData, _mod);
  out_isRedeclare = mmc_mk_icon(_isRedeclare);
  return out_isRedeclare;
}

DLLDirection
modelica_boolean omc_NFModifier_Modifier_isEmpty(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
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
modelica_metatype boxptr_NFModifier_Modifier_isEmpty(threadData_t *threadData, modelica_metatype _mod)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFModifier_Modifier_isEmpty(threadData, _mod);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

static modelica_metatype closure2_NFModifier_Modifier_propagateSubMod(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_submod)
{
  modelica_metatype subs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFModifier_Modifier_propagateSubMod(thData, name, $in_submod, subs);
}
DLLDirection
modelica_metatype omc_NFModifier_Modifier_propagateSubMod(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fsubmod, modelica_metatype _subs)
{
  modelica_metatype _submod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _submod = __omcQ_24in_5Fsubmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _submod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,1,0) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_submod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFBinding_propagate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_submod), 5))), _subs);
          _submod = tmpMeta6;

          tmpMeta8 = mmc_mk_box1(0, _subs);
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_submod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_submod), 6))), (modelica_fnptr) mmc_mk_box2(0,closure2_NFModifier_Modifier_propagateSubMod,tmpMeta8));
          _submod = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,7) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,0) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_submod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[5] = omc_NFModifier_Modifier_propagateSubMod(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_submod), 5))), _subs);
          _submod = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_submod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[8] = listAppend(_subs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_submod), 8))));
          _submod = tmpMeta11;
          goto tmp2_done;
        }
        case 2: {
          
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
  return _submod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_propagateBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _origin, modelica_metatype _parent)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _subs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  // _subs has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(9, &NFSubscript_SPLIT__PROXY__desc, _origin, _parent);
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          _subs = tmpMeta5;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFBinding_propagate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _subs);
          _mod = tmpMeta7;
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
  return _mod;
}

static modelica_metatype closure3_NFModifier_Modifier_propagateSubMod(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_submod)
{
  modelica_metatype subs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFModifier_Modifier_propagateSubMod(thData, name, $in_submod, subs);
}
DLLDirection
modelica_metatype omc_NFModifier_Modifier_propagateSubs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _subs)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box1(0, _subs);
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = omc_NFModifier_ModTable_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 6))), (modelica_fnptr) mmc_mk_box2(0,closure3_NFModifier_Modifier_propagateSubMod,tmpMeta6));
          _mod = tmpMeta5;
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
  return _mod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_propagate(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _origin, modelica_metatype _parent)
{
  modelica_metatype _outMod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta2 = mmc_mk_box3(9, &NFSubscript_SPLIT__PROXY__desc, _origin, _parent);
  tmpMeta1 = mmc_mk_cons(tmpMeta2, MMC_REFSTRUCTLIT(mmc_nil));
  _outMod = omc_NFModifier_Modifier_propagateSubs(threadData, _mod, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _outMod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_merge(threadData_t *threadData, modelica_metatype _outerMod, modelica_metatype _innerMod, modelica_string _name)
{
  modelica_metatype _mergedMod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mergedMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _outerMod;
    tmp4_2 = _innerMod;
    {
      modelica_metatype _submods = NULL;
      modelica_metatype _binding = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _submods has no default value.
      // _binding has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_NFModifier_Modifier_checkFinalOverride(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 3))), _outerMod, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 7))));

          _binding = (omc_NFBinding_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 5))))?(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 5))):(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 5))));

          _submods = omc_NFModifier_ModTable_join(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 6))), boxvar_NFModifier_Modifier_merge);
          tmpMeta6 = mmc_mk_box7(3, &NFModifier_Modifier_MODIFIER__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 4))), _binding, _submods, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 7))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_outerMod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFModifier_Modifier_merge(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 5))), _innerMod, _OMC_LIT0);
          _outerMod = tmpMeta7;
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_innerMod), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFModifier_Modifier_merge(threadData, _outerMod, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 6))), _OMC_LIT0);
          _innerMod = tmpMeta8;
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box8(4, &NFModifier_Modifier_REDECLARE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_innerMod), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outerMod), 8))));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outerMod;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _innerMod;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT16, _OMC_LIT18);
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
  _mergedMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mergedMod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_setBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype __omcQ_24in_5Fmodifier)
{
  modelica_metatype _modifier = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _modifier = __omcQ_24in_5Fmodifier;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _modifier;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_modifier), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[5] = _binding;
          _modifier = tmpMeta5;
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
  return _modifier;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_binding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_metatype _binding = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 5)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT19;
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
  _binding = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _binding;
}

DLLDirection
modelica_boolean omc_NFModifier_Modifier_hasBinding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_boolean _hasBinding;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasBinding has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFBinding_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 5))));
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
  _hasBinding = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasBinding;
}
modelica_metatype boxptr_NFModifier_Modifier_hasBinding(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_boolean _hasBinding;
  modelica_metatype out_hasBinding;
  _hasBinding = omc_NFModifier_Modifier_hasBinding(threadData, _modifier);
  out_hasBinding = mmc_mk_icon(_hasBinding);
  return out_hasBinding;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_info(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 7)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFInstNode_InstNode_info(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 4))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT21;
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
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_string omc_NFModifier_Modifier_name(threadData_t *threadData, modelica_metatype _modifier)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFInstNode_InstNode_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 4))));
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
  _name = tmp1;
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_lookupModifier(threadData_t *threadData, modelica_string _modName, modelica_metatype _modifier)
{
  modelica_metatype _subMod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subMod has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _modifier;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_ModTable_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modifier), 6))), _modName);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _subMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subMod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_patchElementModFinal(threadData_t *threadData, modelica_metatype _prefixes, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fmod)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  if(omc_SCodeUtil_finalBool(threadData, omc_SCodeUtil_prefixesFinal(threadData, _prefixes)))
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _mod;
      {
        int tmp4;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
          case 3: {
            modelica_metatype tmpMeta5;
            
            /* Pattern matching succeeded */
            tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = _OMC_LIT23;
            _mod = tmpMeta5;
            tmpMeta1 = _mod;
            goto tmp3_done;
          }
          case 4: {
            modelica_metatype tmpMeta6;
            
            /* Pattern matching succeeded */
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_mod), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _OMC_LIT23;
            _mod = tmpMeta6;
            tmpMeta1 = _mod;
            goto tmp3_done;
          }
          default:
          tmp3_default: OMC_LABEL_UNUSED; {
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            
            /* Pattern matching succeeded */
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta8 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, _OMC_LIT23, _OMC_LIT24, tmpMeta7, mmc_mk_none(), mmc_mk_none(), _info);
            tmpMeta1 = tmpMeta8;
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
    _mod = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _mod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_fromElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      modelica_metatype _def = NULL;
      modelica_metatype _smod = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _def has no default value.
      // _smod has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(5, &NFModifier_ModifierScope_EXTENDS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))), _OMC_LIT0, tmpMeta6, _scope, _confidence);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _smod = omc_NFModifier_Modifier_patchElementModFinal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))));
          tmpMeta7 = mmc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), tmpMeta7, _scope, _confidence);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,3) == 0) goto tmp3_end;
          
          _def = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), tmpMeta9, _scope, _confidence);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,2) == 0) goto tmp3_end;
          
          _def = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_def), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), tmpMeta11, _scope, _confidence);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}
modelica_metatype boxptr_NFModifier_Modifier_fromElement(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = mmc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_fromElement(threadData, _element, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_stripSCodeMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felem, modelica_metatype *out_mod)
{
  modelica_metatype _elem = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elem = __omcQ_24in_5Felem;
  // _mod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elem;
    {
      modelica_metatype _cdef = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cdef has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _cdef = tmpMeta6;
          _mod = tmpMeta7;
          /* Pattern matching succeeded */
          if((!omc_SCodeUtil_isEmptyMod(threadData, _mod)))
          {
            tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_cdef), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _OMC_LIT25;
            _cdef = tmpMeta8;

            tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(10));
            memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_elem), 10*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = _cdef;
            _elem = tmpMeta9;
          }
          tmpMeta1 = _mod;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _mod = tmpMeta10;
          /* Pattern matching succeeded */
          if((!omc_SCodeUtil_isEmptyMod(threadData, _mod)))
          {
            tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(10));
            memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_elem), 10*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[6] = _OMC_LIT25;
            _elem = tmpMeta11;
          }
          tmpMeta1 = _mod;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT25;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_mod) { *out_mod = _mod; }
  return _elem;
}

DLLDirection
modelica_metatype omc_NFModifier_Modifier_createConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _smod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mod has no default value.
  // _smod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          
          _smod = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), tmpMeta11, _scope, _confidence);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          if (optionNone(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          
          _smod = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = omc_NFModifier_Modifier_create(threadData, _smod, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), tmpMeta17, _scope, _confidence);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
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
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}
modelica_metatype boxptr_NFModifier_Modifier_createConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _mod = NULL;
  tmp1 = mmc_unbox_integer(_confidence);
  _mod = omc_NFModifier_Modifier_createConstrainingMod(threadData, _element, _scope, tmp1);
  /* skip box _mod; NFModifier.Modifier */
  return _mod;
}

static modelica_metatype closure4_NFModifier_Modifier_mergeLocal(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1, modelica_metatype mod2, modelica_string name)
{
  modelica_metatype scope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype prefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFModifier_Modifier_mergeLocal(thData, mod1, mod2, name, scope, prefix);
}
DLLDirection
modelica_metatype omc_NFModifier_Modifier_create(threadData_t *threadData, modelica_metatype _mod, modelica_string _name, modelica_metatype _modScope, modelica_metatype _scope, modelica_integer _confidence)
{
  modelica_metatype _newMod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newMod has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      modelica_metatype _submod_lst = NULL;
      modelica_metatype _submod_table = NULL;
      modelica_metatype _binding = NULL;
      modelica_metatype _elem = NULL;
      modelica_boolean _is_each;
      modelica_metatype _node = NULL;
      modelica_metatype _cc_mod = NULL;
      int tmp4;
      // _submod_lst has no default value.
      // _submod_table has no default value.
      // _binding has no default value.
      // _elem has no default value.
      // _is_each has no default value.
      // _node has no default value.
      // _cc_mod has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          _is_each = omc_SCodeUtil_eachBool(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))));

          _binding = omc_NFBinding_fromAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 5))), _is_each, omc_NFModifier_ModifierScope_isClass(threadData, _modScope), _scope, _confidence, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))));

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _m_loopVar = 0;
            modelica_metatype _m;
            _m_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              while (!listEmpty(_m_loopVar)) {
                _m = MMC_CAR(_m_loopVar);
                _m_loopVar = MMC_CDR(_m_loopVar);
                if ((!omc_SCodeUtil_isBreakSubMod(threadData, _m))) {
                  tmp9--;
                  break;
                }
              }
              if (tmp9 == 0) {
                tmpMeta8 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_m), 2))), omc_NFModifier_Modifier_createSubMod(threadData, _m, _modScope, _scope, _confidence));
                __omcQ_24tmpVar2 = tmpMeta8;
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar3;
          }
          _submod_lst = tmpMeta5;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box2(0, _modScope, tmpMeta11);
          _submod_table = omc_NFModifier_ModTable_fromList(threadData, _submod_lst, (modelica_fnptr) mmc_mk_box2(0,closure4_NFModifier_Modifier_mergeLocal,tmpMeta10));
          tmpMeta12 = mmc_mk_box7(3, &NFModifier_Modifier_MODIFIER__desc, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))), _binding, _submod_table, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _elem = tmpMeta13;
          /* Pattern matching succeeded */
          _node = omc_NFInstNode_InstNode_new(threadData, _elem, _scope);

          if(omc_NFInstNode_InstNode_isClass(threadData, _node))
          {
            omc_NFInst_partialInstClass(threadData, _node);
          }

          _cc_mod = omc_NFModifier_Modifier_createConstrainingMod(threadData, _elem, _scope, _confidence);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = mmc_mk_box8(4, &NFModifier_Modifier_REDECLARE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))), _node, _OMC_LIT22, _OMC_LIT22, _cc_mod, tmpMeta14);
          tmpMeta1 = tmpMeta15;
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
  _newMod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _newMod;
}
modelica_metatype boxptr_NFModifier_Modifier_create(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _name, modelica_metatype _modScope, modelica_metatype _scope, modelica_metatype _confidence)
{
  modelica_integer tmp1;
  modelica_metatype _newMod = NULL;
  tmp1 = mmc_unbox_integer(_confidence);
  _newMod = omc_NFModifier_Modifier_create(threadData, _mod, _name, _modScope, _scope, tmp1);
  /* skip box _newMod; NFModifier.Modifier */
  return _newMod;
}

DLLDirection
modelica_string omc_NFModifier_ModifierScope_toString(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_string _string = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _string has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT26,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2))));
          tmp1 = tmpMeta5;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT27,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2))));
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT28,omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2))), _OMC_LIT1, 1 /* true */, 0 /* false */));
          tmp1 = tmpMeta7;
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
  _string = tmp1;
  _return: OMC_LABEL_UNUSED
  return _string;
}

DLLDirection
modelica_boolean omc_NFModifier_ModifierScope_isClass(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFModifier_ModifierScope_isClass(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFModifier_ModifierScope_isClass(threadData, _scope);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_string omc_NFModifier_ModifierScope_name(threadData_t *threadData, modelica_metatype _scope)
{
  modelica_string _name = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scope;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_scope), 2))), _OMC_LIT1, 1 /* true */, 0 /* false */);
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
  _name = tmp1;
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_metatype omc_NFModifier_ModifierScope_fromElement(threadData_t *threadData, modelica_metatype _element)
{
  modelica_metatype _scope = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scope has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &NFModifier_ModifierScope_COMPONENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(4, &NFModifier_ModifierScope_CLASS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(5, &NFModifier_ModifierScope_EXTENDS__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
          tmpMeta1 = tmpMeta7;
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
  _scope = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _scope;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
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
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFModifier_ModTable_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFModifier_ModTable_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFModifier_ModTable_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT29);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT29, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
                memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _value;
                _tree = tmpMeta14;
              }

              _outTree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_NFModifier_ModTable_balance(threadData, _outTree));
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
modelica_metatype omc_NFModifier_ModTable_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn)
{
  modelica_metatype _tree = NULL;
  modelica_integer _key_comp;
  modelica_metatype _new_tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key_comp has no default value.
  // _new_tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFModifier_ModTable_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFModifier_ModTable_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
              _tree = tmpMeta7;
            }
            else
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFModifier_ModTable_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT29);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT29, tmpMeta11);
              _new_tree = tmpMeta12;
            }
            else
            {
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta13;

              _new_tree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_NFModifier_ModTable_balance(threadData, _new_tree));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_balance(threadData_t *threadData, modelica_metatype _inTree)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_NFModifier_ModTable_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_NFModifier_ModTable_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_NFModifier_ModTable_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_NFModifier_ModTable_rotateLeft(threadData, omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_NFModifier_ModTable_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_NFModifier_ModTable_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_NFModifier_ModTable_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_NFModifier_ModTable_rotateRight(threadData, omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outTree, omc_NFModifier_ModTable_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_NFModifier_ModTable_rotateRight(threadData, _outTree));
            }
            else
            {
              if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp1 = omc_NFModifier_ModTable_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_NFModifier_ModTable_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_NFModifier_ModTable_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _outResult = omc_NFModifier_ModTable_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          _inStartValue = _outResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta7;
          _value = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outResult;
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
  _outResult = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_boolean _c;
      int tmp4;
      // _c has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5);
          _value = tmpMeta7;
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _c = tmp6  /* pattern as ty=Boolean */;

          if(_c)
          {
            _value = omc_NFModifier_ModTable_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_NFModifier_ModTable_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
          }
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL);
          _value = tmpMeta8;
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
  modelica_metatype _foldArg1 = NULL;
  modelica_metatype _foldArg2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg1 = __omcQ_24in_5FfoldArg1;
  _foldArg2 = __omcQ_24in_5FfoldArg2;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _foldArg1 = omc_NFModifier_ModTable_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_NFModifier_ModTable_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
  return _foldArg1;
}

DLLDirection
void omc_NFModifier_ModTable_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_NFModifier_ModTable_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));

          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp2_done;
        }
        case 5: {
          
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
  return;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT29;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_NFModifier_ModTable_keyCompare(threadData, _key, _k);
    tmp9_2 = _tree;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 4; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 1: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 2: {
          if (1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        case 3: {
          if (-1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _value = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _key;
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_NFModifier_ModTable_keyCompare(threadData, _key, _k);
    tmp8_2 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 1: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 2: {
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
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
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_boolean omc_NFModifier_ModTable_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
  modelica_boolean _comp;
  modelica_string _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_string tmp1 = 0;
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
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
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
  _key = tmp1;

  _key_comp = omc_NFModifier_ModTable_keyCompare(threadData, _inKey, _key);

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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 6));
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
          
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
modelica_metatype boxptr_NFModifier_ModTable_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_NFModifier_ModTable_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_NFModifier_ModTable_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_NFModifier_ModTable_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NFModifier_ModTable_isEmpty(threadData_t *threadData, modelica_metatype _tree)
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
modelica_metatype boxptr_NFModifier_ModTable_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFModifier_ModTable_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
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
          _tree = omc_NFModifier_ModTable_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_NFModifier_ModTable_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFModifier_ModTable_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
modelica_integer omc_NFModifier_ModTable_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = stringCompare(_inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_NFModifier_ModTable_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_NFModifier_ModTable_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_NFModifier_ModTable_keyStr(threadData_t *threadData, modelica_string _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _inKey;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _key = NULL;
      int tmp4;
      // _key has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_NFModifier_ModTable_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_key, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_key, _lst);
          tmpMeta1 = tmpMeta8;
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
modelica_metatype omc_NFModifier_ModTable_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFModifier_ModTable_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
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
modelica_metatype omc_NFModifier_ModTable_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _value = NULL;
      int tmp4;
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _value = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_NFModifier_ModTable_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_value, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _value = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_value, _lst);
          tmpMeta1 = tmpMeta8;
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
modelica_metatype omc_NFModifier_ModTable_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
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
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_NFModifier_ModTable_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_NFModifier_ModTable_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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

DLLDirection
modelica_metatype omc_NFModifier_ModTable_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_NFModifier_ModTable_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_NFModifier_ModTable_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  if (out_outResult) { *out_outResult = _outResult; }
  return _outTree;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT29;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFModifier_ModTable_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT12,omc_NFModifier_ModTable_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT13);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFModifier_ModTable_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT14);
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT12,omc_NFModifier_ModTable_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT13);
          tmpMeta12 = stringAppend(tmpMeta11,omc_NFModifier_ModTable_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT14);
          tmp1 = tmpMeta13;
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
modelica_string omc_NFModifier_ModTable_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
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
          tmp1 = _OMC_LIT30;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFModifier_ModTable_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_NFModifier_ModTable_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT0),omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT31);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFModifier_ModTable_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT0));
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

PROTECTED_FUNCTION_STATIC modelica_string omc_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
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
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT32:_OMC_LIT33));
          tmpMeta6 = stringAppend(omc_NFModifier_ModTable_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT34:_OMC_LIT35));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT36);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT31);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT33:_OMC_LIT32));
          tmpMeta12 = stringAppend(tmpMeta10,omc_NFModifier_ModTable_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT34:_OMC_LIT35));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT36);
          tmpMeta15 = stringAppend(tmpMeta14,omc_NFModifier_ModTable_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT31);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_NFModifier_ModTable_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFModifier_ModTable_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT29);
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _node, _OMC_LIT29);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFModifier_ModTable_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _outNode, _OMC_LIT29, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFModifier_ModTable_setTreeLeftRight(threadData, _child, _OMC_LIT29, _node);
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
modelica_metatype omc_NFModifier_ModTable_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(4, &NFModifier_ModTable_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_NFModifier_ModTable_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFModifier_ModTable_height(threadData, _left)),(modelica_integer)(omc_NFModifier_ModTable_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &NFModifier_ModTable_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFModifier_ModTable_height(threadData, _left)),(modelica_integer)(omc_NFModifier_ModTable_height(threadData, _right)))), _left, _right);
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
modelica_string omc_NFModifier_ModTable_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_string _key = NULL;
  modelica_string tmp1 = 0;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _key = tmp1;
  _return: OMC_LABEL_UNUSED
  return _key;
}

DLLDirection
modelica_metatype omc_NFModifier_ModTable_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_NFModifier_ModTable_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

          tmpMeta8 = mmc_mk_box2(0, _key, _value);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
          _lst = tmpMeta7;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta9;
          _value = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, _key, _value);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
          tmpMeta1 = tmpMeta11;
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
modelica_metatype omc_NFModifier_ModTable_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_NFModifier_ModTable_add(threadData, _tree, _key, _value, boxvar_NFModifier_ModTable_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFModifier_ModTable_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_NFModifier_Modifier_toString(threadData, _inValue, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

