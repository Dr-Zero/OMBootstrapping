#include "omc_simulation_settings.h"
#include "BinaryTree.h"
#define _OMC_LIT0_data "- BackendDAEUtil.bintreeToList failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,38,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,4,3) {&BinaryTree_BinTree_TREENODE__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,17,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT2,_OMC_LIT3,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "- BinaryTree.treeAdd2 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,29,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#include "util/modelica.h"

#include "BinaryTree_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_binTreeintersection1(threadData_t *threadData, modelica_metatype _key, modelica_metatype _bt2, modelica_metatype _iBt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_binTreeintersection1,2,0) {(void*) boxptr_BinaryTree_binTreeintersection1,0}};
#define boxvar_BinaryTree_binTreeintersection1 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_binTreeintersection1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_bintreeToListOpt(threadData_t *threadData, modelica_metatype _inBinTreeOption, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToListOpt,2,0) {(void*) boxptr_BinaryTree_bintreeToListOpt,0}};
#define boxvar_BinaryTree_bintreeToListOpt MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToListOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_bintreeToList2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToList2,2,0) {(void*) boxptr_BinaryTree_bintreeToList2,0}};
#define boxvar_BinaryTree_bintreeToList2 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_bintreeToList2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_treeAdd2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_integer _keyhash, modelica_string _keystr, modelica_integer _inValue);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeAdd2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _keyhash, modelica_metatype _keystr, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeAdd2,2,0) {(void*) boxptr_BinaryTree_treeAdd2,0}};
#define boxvar_BinaryTree_treeAdd2 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeAdd2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_string _keystr, modelica_integer _keyhash, modelica_integer _inCompResult);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _keystr, modelica_metatype _keyhash, modelica_metatype _inCompResult);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet3,2,0) {(void*) boxptr_BinaryTree_treeGet3,0}};
#define boxvar_BinaryTree_treeGet3 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet3)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_string _keystr, modelica_integer _keyhash);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _keystr, modelica_metatype _keyhash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet2,2,0) {(void*) boxptr_BinaryTree_treeGet2,0}};
#define boxvar_BinaryTree_treeGet2 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_treeGet2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData_t *threadData, modelica_string _lstr, modelica_integer _lhash, modelica_string _rstr, modelica_integer _rhash);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_keyCompareNinjaSecretHashTricks(threadData_t *threadData, modelica_metatype _lstr, modelica_metatype _lhash, modelica_metatype _rstr, modelica_metatype _rhash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTree_keyCompareNinjaSecretHashTricks,2,0) {(void*) boxptr_BinaryTree_keyCompareNinjaSecretHashTricks,0}};
#define boxvar_BinaryTree_keyCompareNinjaSecretHashTricks MMC_REFSTRUCTLIT(boxvar_lit_BinaryTree_keyCompareNinjaSecretHashTricks)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_binTreeintersection1(threadData_t *threadData, modelica_metatype _key, modelica_metatype _bt2, modelica_metatype _iBt)
{
  modelica_metatype _oBt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oBt has no default value.
  { /* matchcontinue expression */
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
          /* Pattern matching succeeded */
          omc_BinaryTree_treeGet(threadData, _bt2, _key);
          tmpMeta1 = omc_BinaryTree_treeAdd(threadData, _iBt, _key, ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iBt;
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
  _oBt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oBt;
}

DLLDirection
modelica_metatype omc_BinaryTree_binTreeintersection(threadData_t *threadData, modelica_metatype _bt1, modelica_metatype _bt2, modelica_metatype _iBt)
{
  modelica_metatype _oBt = NULL;
  modelica_metatype _keys = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oBt has no default value.
  // _keys has no default value.
  _keys = omc_BinaryTree_bintreeToList(threadData, _bt1, NULL);

  _oBt = omc_List_fold1(threadData, _keys, boxvar_BinaryTree_binTreeintersection1, _bt2, _iBt);
  _return: OMC_LABEL_UNUSED
  return _oBt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_bintreeToListOpt(threadData_t *threadData, modelica_metatype _inBinTreeOption, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst)
{
  modelica_metatype _outKeyLst = NULL;
  modelica_metatype _outValueLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKeyLst has no default value.
  // _outValueLst has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inBinTreeOption;
    {
      modelica_metatype _bt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inKeyLst;
          tmpMeta[0+1] = _inValueLst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _bt = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BinaryTree_bintreeToList2(threadData, _bt, _inKeyLst, _inValueLst, &tmpMeta[0+1]);
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
  _outKeyLst = tmpMeta[0+0];
  _outValueLst = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outValueLst) { *out_outValueLst = _outValueLst; }
  return _outKeyLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_bintreeToList2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst)
{
  modelica_metatype _outKeyLst = NULL;
  modelica_metatype _outValueLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKeyLst has no default value.
  // _outValueLst has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inBinTree;
    {
      modelica_metatype _klst = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _key = NULL;
      modelica_integer _value;
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _klst has no default value.
      // _vlst has no default value.
      // _key has no default value.
      // _value has no default value.
      // _left has no default value.
      // _right has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta8)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inKeyLst;
          tmpMeta[0+1] = _inValueLst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _key = tmpMeta11;
          _value = tmp13  /* pattern as ty=Integer */;
          _left = tmpMeta14;
          _right = tmpMeta15;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta16 = mmc_mk_cons(_key, _inKeyLst);
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_value), _inValueLst);
          _klst = omc_BinaryTree_bintreeToListOpt(threadData, _left, tmpMeta16, tmpMeta17 ,&_vlst);
          tmpMeta[0+0] = omc_BinaryTree_bintreeToListOpt(threadData, _right, _klst, _vlst, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _left = tmpMeta19;
          /* Pattern matching succeeded */
          _klst = omc_BinaryTree_bintreeToListOpt(threadData, _left, _inKeyLst, _inValueLst ,&_vlst);
          tmpMeta[0+0] = omc_BinaryTree_bintreeToListOpt(threadData, _left, _klst, _vlst, &tmpMeta[0+1]);
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
  _outKeyLst = tmpMeta[0+0];
  _outValueLst = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outValueLst) { *out_outValueLst = _outValueLst; }
  return _outKeyLst;
}

DLLDirection
modelica_metatype omc_BinaryTree_bintreeToList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype *out_outValueLst)
{
  modelica_metatype _outKeyLst = NULL;
  modelica_metatype _outValueLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKeyLst has no default value.
  // _outValueLst has no default value.
  
  
  { /* matchcontinue expression */
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_BinaryTree_bintreeToList2(threadData, _inBinTree, tmpMeta6, tmpMeta7, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
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
  _outKeyLst = tmpMeta[0+0];
  _outValueLst = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outValueLst) { *out_outValueLst = _outValueLst; }
  return _outKeyLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTree_treeAdd2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_integer _keyhash, modelica_string _keystr, modelica_integer _inValue)
{
  modelica_metatype _outBinTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinTree has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_integer tmp4_3;
    tmp4_1 = _inBinTree;
    tmp4_2 = _inKey;
    tmp4_3 = _inValue;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _rkey = NULL;
      modelica_integer _value;
      modelica_string _rkeystr = NULL;
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      modelica_metatype _t_1 = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _right_1 = NULL;
      modelica_metatype _left_1 = NULL;
      modelica_integer _rhash;
      modelica_metatype _optVal = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _rkey has no default value.
      // _value has no default value.
      // _rkeystr has no default value.
      // _left has no default value.
      // _right has no default value.
      // _t_1 has no default value.
      // _t has no default value.
      // _right_1 has no default value.
      // _left_1 has no default value.
      // _rhash has no default value.
      // _optVal has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta8)) goto tmp3_end;
          
          _key = tmp4_2;
          _value = tmp4_3;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta9 = mmc_mk_box5(3, &BinaryTree_TreeValue_TREEVALUE__desc, _key, _keystr, mmc_mk_integer(_keyhash), mmc_mk_integer(_value));
          tmpMeta10 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, mmc_mk_some(tmpMeta9), mmc_mk_none(), mmc_mk_none());
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _rkey = tmpMeta13;
          _rkeystr = tmpMeta14;
          _rhash = tmp16  /* pattern as ty=Integer */;
          _left = tmpMeta17;
          _right = tmpMeta18;
          _value = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rhash, _keystr, _keyhash);
          if (0 != tmp19) goto goto_2;
          tmpMeta20 = mmc_mk_box5(3, &BinaryTree_TreeValue_TREEVALUE__desc, _rkey, _rkeystr, mmc_mk_integer(_rhash), mmc_mk_integer(_value));
          tmpMeta21 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, mmc_mk_some(tmpMeta20), _left, _right);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta22)) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 4));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta28)) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
          
          _optVal = tmpMeta22;
          _rkeystr = tmpMeta24;
          _rhash = tmp26  /* pattern as ty=Integer */;
          _left = tmpMeta27;
          _t = tmpMeta29;
          _key = tmp4_2;
          _value = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp30 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rhash, _keystr, _keyhash);
          if (1 != tmp30) goto goto_2;

          _t_1 = omc_BinaryTree_treeAdd2(threadData, _t, _key, _keyhash, _keystr, _value);
          tmpMeta31 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, _optVal, _left, mmc_mk_some(_t_1));
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta32)) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 3));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 4));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta38)) goto tmp3_end;
          
          _optVal = tmpMeta32;
          _rkeystr = tmpMeta34;
          _rhash = tmp36  /* pattern as ty=Integer */;
          _left = tmpMeta37;
          _key = tmp4_2;
          _value = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp39 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rhash, _keystr, _keyhash);
          if (1 != tmp39) goto goto_2;

          _right_1 = omc_BinaryTree_treeAdd2(threadData, _OMC_LIT1, _key, _keyhash, _keystr, _value);
          tmpMeta40 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, _optVal, _left, mmc_mk_some(_right_1));
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          modelica_metatype tmpMeta50;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta41)) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 1));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 4));
          tmp45 = mmc_unbox_integer(tmpMeta44);
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta46)) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 1));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _optVal = tmpMeta41;
          _rkeystr = tmpMeta43;
          _rhash = tmp45  /* pattern as ty=Integer */;
          _t = tmpMeta47;
          _right = tmpMeta48;
          _key = tmp4_2;
          _value = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp49 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rhash, _keystr, _keyhash);
          if (-1 != tmp49) goto goto_2;

          _t_1 = omc_BinaryTree_treeAdd2(threadData, _t, _key, _keyhash, _keystr, _value);
          tmpMeta50 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, _optVal, mmc_mk_some(_t_1), _right);
          tmpMeta1 = tmpMeta50;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_integer tmp58;
          modelica_metatype tmpMeta59;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta51)) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 1));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 3));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 4));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta56)) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _optVal = tmpMeta51;
          _rkeystr = tmpMeta53;
          _rhash = tmp55  /* pattern as ty=Integer */;
          _right = tmpMeta57;
          _key = tmp4_2;
          _value = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp58 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rhash, _keystr, _keyhash);
          if (-1 != tmp58) goto goto_2;

          _left_1 = omc_BinaryTree_treeAdd2(threadData, _OMC_LIT1, _key, _keyhash, _keystr, _value);
          tmpMeta59 = mmc_mk_box4(3, &BinaryTree_BinTree_TREENODE__desc, _optVal, mmc_mk_some(_left_1), _right);
          tmpMeta1 = tmpMeta59;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT5, _OMC_LIT7);
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
      if (++tmp4 < 7) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outBinTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinTree;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeAdd2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _keyhash, modelica_metatype _keystr, modelica_metatype _inValue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outBinTree = NULL;
  tmp1 = mmc_unbox_integer(_keyhash);
  tmp2 = mmc_unbox_integer(_inValue);
  _outBinTree = omc_BinaryTree_treeAdd2(threadData, _inBinTree, _inKey, tmp1, _keystr, tmp2);
  /* skip box _outBinTree; BinaryTree.BinTree */
  return _outBinTree;
}

DLLDirection
modelica_metatype omc_BinaryTree_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_integer _inValue)
{
  modelica_metatype _outBinTree = NULL;
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinTree has no default value.
  // _str has no default value.
  _str = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _inKey);

  _outBinTree = omc_BinaryTree_treeAdd2(threadData, _inBinTree, _inKey, stringHashDjb2Mod(_str, ((modelica_integer) 536870879)), _str, _inValue);
  _return: OMC_LABEL_UNUSED
  return _outBinTree;
}
modelica_metatype boxptr_BinaryTree_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _inValue)
{
  modelica_integer tmp1;
  modelica_metatype _outBinTree = NULL;
  tmp1 = mmc_unbox_integer(_inValue);
  _outBinTree = omc_BinaryTree_treeAdd(threadData, _inBinTree, _inKey, tmp1);
  /* skip box _outBinTree; BinaryTree.BinTree */
  return _outBinTree;
}

DLLDirection
modelica_metatype omc_BinaryTree_treeAddList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst)
{
  modelica_metatype _outBinTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinTree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inBinTree;
    tmp4_2 = _inKeyLst;
    {
      modelica_metatype _key = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _bt = NULL;
      modelica_metatype _bt_1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      // _res has no default value.
      // _bt has no default value.
      // _bt_1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          _bt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _bt;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          
          _key = tmpMeta6;
          _res = tmpMeta7;
          _bt = tmp4_1;
          /* Pattern matching succeeded */
          _bt_1 = omc_BinaryTree_treeAdd(threadData, _bt, _key, ((modelica_integer) 0));
          /* Tail recursive call */
          _inBinTree = _bt_1;
          _inKeyLst = _res;
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
  _outBinTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBinTree;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_string _keystr, modelica_integer _keyhash, modelica_integer _inCompResult)
{
  modelica_integer _outValue;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outValue has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _inBinTree;
    tmp4_2 = _inCompResult;
    {
      modelica_integer _rval;
      modelica_metatype _right = NULL;
      modelica_metatype _left = NULL;
      modelica_integer _compResult;
      int tmp4;
      // _rval has no default value.
      // _right has no default value.
      // _left has no default value.
      // _compResult has no default value.
      {
        switch (MMC_SWITCH_CAST(tmp4_2)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (0 != tmp4_2) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta5)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _rval = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _rval;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (1 != tmp4_2) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          _right = tmpMeta10;
          /* Pattern matching succeeded */
          _compResult = omc_BinaryTree_treeGet2(threadData, _right, _keystr, _keyhash);
          /* Tail recursive call */
          _inBinTree = _right;
          _inCompResult = _compResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case -1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (-1 != tmp4_2) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          
          _left = tmpMeta12;
          /* Pattern matching succeeded */
          _compResult = omc_BinaryTree_treeGet2(threadData, _left, _keystr, _keyhash);
          /* Tail recursive call */
          _inBinTree = _left;
          _inCompResult = _compResult;
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
  _outValue = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outValue;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _keystr, modelica_metatype _keyhash, modelica_metatype _inCompResult)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  tmp1 = mmc_unbox_integer(_keyhash);
  tmp2 = mmc_unbox_integer(_inCompResult);
  _outValue = omc_BinaryTree_treeGet3(threadData, _inBinTree, _keystr, tmp1, tmp2);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_string _keystr, modelica_integer _keyhash)
{
  modelica_integer _compResult;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compResult has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inBinTree;
    {
      modelica_string _rkeystr = NULL;
      modelica_integer _rkeyhash;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rkeystr has no default value.
      // _rkeyhash has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          
          _rkeystr = tmpMeta8;
          _rkeyhash = tmp10  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _rkeystr, _rkeyhash, _keystr, _keyhash);
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
  _compResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _compResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _keystr, modelica_metatype _keyhash)
{
  modelica_integer tmp1;
  modelica_integer _compResult;
  modelica_metatype out_compResult;
  tmp1 = mmc_unbox_integer(_keyhash);
  _compResult = omc_BinaryTree_treeGet2(threadData, _inBinTree, _keystr, tmp1);
  out_compResult = mmc_mk_icon(_compResult);
  return out_compResult;
}

DLLDirection
modelica_integer omc_BinaryTree_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key)
{
  modelica_integer _v;
  modelica_string _keystr = NULL;
  modelica_integer _keyhash;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  // _keystr has no default value.
  // _keyhash has no default value.
  _keystr = omc_ComponentReferenceBasics_printComponentRefStr(threadData, _key);

  _keyhash = stringHashDjb2Mod(_keystr, ((modelica_integer) 536870879));

  _v = omc_BinaryTree_treeGet3(threadData, _bt, _keystr, _keyhash, omc_BinaryTree_treeGet2(threadData, _bt, _keystr, _keyhash));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_BinaryTree_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key)
{
  modelica_integer _v;
  modelica_metatype out_v;
  _v = omc_BinaryTree_treeGet(threadData, _bt, _key);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData_t *threadData, modelica_string _lstr, modelica_integer _lhash, modelica_string _rstr, modelica_integer _rhash)
{
  modelica_integer _cmp;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cmp has no default value.
  _cmp = omc_Util_intSign(threadData, _lhash - _rhash);

  _cmp = ((_cmp == ((modelica_integer) 0))?stringCompare(_lstr, _rstr):_cmp);
  _return: OMC_LABEL_UNUSED
  return _cmp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTree_keyCompareNinjaSecretHashTricks(threadData_t *threadData, modelica_metatype _lstr, modelica_metatype _lhash, modelica_metatype _rstr, modelica_metatype _rhash)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _cmp;
  modelica_metatype out_cmp;
  tmp1 = mmc_unbox_integer(_lhash);
  tmp2 = mmc_unbox_integer(_rhash);
  _cmp = omc_BinaryTree_keyCompareNinjaSecretHashTricks(threadData, _lstr, tmp1, _rstr, tmp2);
  out_cmp = mmc_mk_icon(_cmp);
  return out_cmp;
}

