#include "omc_simulation_settings.h"
#include "BinaryTreeInt.h"
#define _OMC_LIT0_data "- BackendDAEUtil.bintreeToList failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,38,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,4,3) {&BinaryTreeInt_BinTree_TREENODE__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
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
#define _OMC_LIT6_data "- BinaryTreeInt.treeAdd failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,31,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#include "util/modelica.h"

#include "BinaryTreeInt_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTreeInt_bintreeToListOpt(threadData_t *threadData, modelica_metatype _inBinTreeOption, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToListOpt,2,0) {(void*) boxptr_BinaryTreeInt_bintreeToListOpt,0}};
#define boxvar_BinaryTreeInt_bintreeToListOpt MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToListOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTreeInt_bintreeToList2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToList2,2,0) {(void*) boxptr_BinaryTreeInt_bintreeToList2,0}};
#define boxvar_BinaryTreeInt_bintreeToList2 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_bintreeToList2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _ikey, modelica_integer _inCompResult);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _ikey, modelica_metatype _inCompResult);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet3,2,0) {(void*) boxptr_BinaryTreeInt_treeGet3,0}};
#define boxvar_BinaryTreeInt_treeGet3 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet3)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _ikey);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _ikey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet2,2,0) {(void*) boxptr_BinaryTreeInt_treeGet2,0}};
#define boxvar_BinaryTreeInt_treeGet2 MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_treeGet2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_keyCmp(threadData_t *threadData, modelica_integer _keya, modelica_integer _keyb);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_keyCmp(threadData_t *threadData, modelica_metatype _keya, modelica_metatype _keyb);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BinaryTreeInt_keyCmp,2,0) {(void*) boxptr_BinaryTreeInt_keyCmp,0}};
#define boxvar_BinaryTreeInt_keyCmp MMC_REFSTRUCTLIT(boxvar_lit_BinaryTreeInt_keyCmp)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTreeInt_bintreeToListOpt(threadData_t *threadData, modelica_metatype _inBinTreeOption, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst)
{
  modelica_metatype _outKeyLst = NULL;
  modelica_metatype _outValueLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKeyLst has no default value.
  // _outValueLst has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _inBinTreeOption;
    tmp4_2 = _inKeyLst;
    tmp4_3 = _inValueLst;
    {
      modelica_metatype _klst = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _bt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _klst has no default value.
      // _vlst has no default value.
      // _bt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          
          _klst = tmp4_2;
          _vlst = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _klst;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          
          _bt = tmpMeta6;
          _klst = tmp4_2;
          _vlst = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BinaryTreeInt_bintreeToList2(threadData, _bt, _klst, _vlst, &tmpMeta[0+1]);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BinaryTreeInt_bintreeToList2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst, modelica_metatype _inValueLst, modelica_metatype *out_outValueLst)
{
  modelica_metatype _outKeyLst = NULL;
  modelica_metatype _outValueLst = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKeyLst has no default value.
  // _outValueLst has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inBinTree;
    tmp4_2 = _inKeyLst;
    tmp4_3 = _inValueLst;
    {
      modelica_metatype _klst = NULL;
      modelica_metatype _vlst = NULL;
      modelica_integer _key;
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
          
          _klst = tmp4_2;
          _vlst = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _klst;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 1: {
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
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _key = tmp12  /* pattern as ty=Integer */;
          _value = tmp14  /* pattern as ty=Integer */;
          _left = tmpMeta15;
          _right = tmpMeta16;
          _klst = tmp4_2;
          _vlst = tmp4_3;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _klst = omc_BinaryTreeInt_bintreeToListOpt(threadData, _left, _klst, _vlst ,&_vlst);

          _klst = omc_BinaryTreeInt_bintreeToListOpt(threadData, _right, _klst, _vlst ,&_vlst);
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_key), _klst);
          tmpMeta18 = mmc_mk_cons(mmc_mk_integer(_value), _vlst);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!optionNone(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _left = tmpMeta20;
          _klst = tmp4_2;
          _vlst = tmp4_3;
          /* Pattern matching succeeded */
          _klst = omc_BinaryTreeInt_bintreeToListOpt(threadData, _left, _klst, _vlst ,&_vlst);
          tmpMeta[0+0] = omc_BinaryTreeInt_bintreeToListOpt(threadData, _left, _klst, _vlst, &tmpMeta[0+1]);
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
modelica_metatype omc_BinaryTreeInt_bintreeToList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype *out_outValueLst)
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
      modelica_metatype _bt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bt has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          _bt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_BinaryTreeInt_bintreeToList2(threadData, _bt, tmpMeta6, tmpMeta7, &tmpMeta[0+1]);
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

DLLDirection
modelica_metatype omc_BinaryTreeInt_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _inKey, modelica_integer _inValue)
{
  modelica_metatype _outBinTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBinTree has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inBinTree;
    {
      modelica_integer _rkey;
      modelica_metatype _left = NULL;
      modelica_metatype _right = NULL;
      modelica_metatype _t_1 = NULL;
      modelica_metatype _t = NULL;
      modelica_metatype _right_1 = NULL;
      modelica_metatype _left_1 = NULL;
      modelica_metatype _optVal = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rkey has no default value.
      // _left has no default value.
      // _right has no default value.
      // _t_1 has no default value.
      // _t has no default value.
      // _right_1 has no default value.
      // _left_1 has no default value.
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
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta9 = mmc_mk_box3(3, &BinaryTreeInt_TreeValue_TREEVALUE__desc, mmc_mk_integer(_inKey), mmc_mk_integer(_inValue));
          tmpMeta10 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, mmc_mk_some(tmpMeta9), mmc_mk_none(), mmc_mk_none());
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _rkey = tmp14  /* pattern as ty=Integer */;
          _left = tmpMeta15;
          _right = tmpMeta16;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = omc_BinaryTreeInt_keyCmp(threadData, _rkey, _inKey);
          if (0 != tmp17) goto goto_2;
          tmpMeta18 = mmc_mk_box3(3, &BinaryTreeInt_TreeValue_TREEVALUE__desc, mmc_mk_integer(_rkey), mmc_mk_integer(_inValue));
          tmpMeta19 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, mmc_mk_some(tmpMeta18), _left, _right);
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta25)) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 1));
          _optVal = tmpMeta20;
          _rkey = tmp23  /* pattern as ty=Integer */;
          _left = tmpMeta24;
          _t = tmpMeta26;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp27 = omc_BinaryTreeInt_keyCmp(threadData, _rkey, _inKey);
          if (1 != tmp27) goto goto_2;

          _t_1 = omc_BinaryTreeInt_treeAdd(threadData, _t, _inKey, _inValue);
          tmpMeta28 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, _optVal, _left, mmc_mk_some(_t_1));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta29)) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta34)) goto tmp3_end;
          _optVal = tmpMeta29;
          _rkey = tmp32  /* pattern as ty=Integer */;
          _left = tmpMeta33;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp35 = omc_BinaryTreeInt_keyCmp(threadData, _rkey, _inKey);
          if (1 != tmp35) goto goto_2;

          _right_1 = omc_BinaryTreeInt_treeAdd(threadData, _OMC_LIT1, _inKey, _inValue);
          tmpMeta36 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, _optVal, _left, mmc_mk_some(_right_1));
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_integer tmp40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_integer tmp44;
          modelica_metatype tmpMeta45;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 1));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          tmp40 = mmc_unbox_integer(tmpMeta39);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta41)) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 1));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _optVal = tmpMeta37;
          _rkey = tmp40  /* pattern as ty=Integer */;
          _t = tmpMeta42;
          _right = tmpMeta43;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp44 = omc_BinaryTreeInt_keyCmp(threadData, _rkey, _inKey);
          if (-1 != tmp44) goto goto_2;

          _t_1 = omc_BinaryTreeInt_treeAdd(threadData, _t, _inKey, _inValue);
          tmpMeta45 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, _optVal, mmc_mk_some(_t_1), _right);
          tmpMeta1 = tmpMeta45;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_integer tmp52;
          modelica_metatype tmpMeta53;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta46)) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 1));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
          tmp49 = mmc_unbox_integer(tmpMeta48);
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!optionNone(tmpMeta50)) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _optVal = tmpMeta46;
          _rkey = tmp49  /* pattern as ty=Integer */;
          _right = tmpMeta51;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp52 = omc_BinaryTreeInt_keyCmp(threadData, _rkey, _inKey);
          if (-1 != tmp52) goto goto_2;

          _left_1 = omc_BinaryTreeInt_treeAdd(threadData, _OMC_LIT1, _inKey, _inValue);
          tmpMeta53 = mmc_mk_box4(3, &BinaryTreeInt_BinTree_TREENODE__desc, _optVal, mmc_mk_some(_left_1), _right);
          tmpMeta1 = tmpMeta53;
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
modelica_metatype boxptr_BinaryTreeInt_treeAdd(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKey, modelica_metatype _inValue)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outBinTree = NULL;
  tmp1 = mmc_unbox_integer(_inKey);
  tmp2 = mmc_unbox_integer(_inValue);
  _outBinTree = omc_BinaryTreeInt_treeAdd(threadData, _inBinTree, tmp1, tmp2);
  /* skip box _outBinTree; BinaryTreeInt.BinTree */
  return _outBinTree;
}

DLLDirection
modelica_metatype omc_BinaryTreeInt_treeAddList(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _inKeyLst)
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
      modelica_integer _key;
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
          modelica_integer tmp8;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _key = tmp8  /* pattern as ty=Integer */;
          _res = tmpMeta7;
          _bt = tmp4_1;
          /* Pattern matching succeeded */
          _bt_1 = omc_BinaryTreeInt_treeAdd(threadData, _bt, _key, ((modelica_integer) 0));
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _ikey, modelica_integer _inCompResult)
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
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
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
          _compResult = omc_BinaryTreeInt_treeGet2(threadData, _right, _ikey);
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
          _compResult = omc_BinaryTreeInt_treeGet2(threadData, _left, _ikey);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_treeGet3(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _ikey, modelica_metatype _inCompResult)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outValue;
  modelica_metatype out_outValue;
  tmp1 = mmc_unbox_integer(_ikey);
  tmp2 = mmc_unbox_integer(_inCompResult);
  _outValue = omc_BinaryTreeInt_treeGet3(threadData, _inBinTree, tmp1, tmp2);
  out_outValue = mmc_mk_icon(_outValue);
  return out_outValue;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_integer _ikey)
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
      modelica_integer _key;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _key has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _key = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = omc_BinaryTreeInt_keyCmp(threadData, _key, _ikey);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_treeGet2(threadData_t *threadData, modelica_metatype _inBinTree, modelica_metatype _ikey)
{
  modelica_integer tmp1;
  modelica_integer _compResult;
  modelica_metatype out_compResult;
  tmp1 = mmc_unbox_integer(_ikey);
  _compResult = omc_BinaryTreeInt_treeGet2(threadData, _inBinTree, tmp1);
  out_compResult = mmc_mk_icon(_compResult);
  return out_compResult;
}

DLLDirection
modelica_integer omc_BinaryTreeInt_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_integer _key)
{
  modelica_integer _v;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  _v = omc_BinaryTreeInt_treeGet3(threadData, _bt, _key, omc_BinaryTreeInt_treeGet2(threadData, _bt, _key));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_BinaryTreeInt_treeGet(threadData_t *threadData, modelica_metatype _bt, modelica_metatype _key)
{
  modelica_integer tmp1;
  modelica_integer _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_integer(_key);
  _v = omc_BinaryTreeInt_treeGet(threadData, _bt, tmp1);
  out_v = mmc_mk_icon(_v);
  return out_v;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_BinaryTreeInt_keyCmp(threadData_t *threadData, modelica_integer _keya, modelica_integer _keyb)
{
  modelica_integer _cmp;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cmp has no default value.
  _cmp = omc_Util_intSign(threadData, _keya - _keyb);
  _return: OMC_LABEL_UNUSED
  return _cmp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BinaryTreeInt_keyCmp(threadData_t *threadData, modelica_metatype _keya, modelica_metatype _keyb)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _cmp;
  modelica_metatype out_cmp;
  tmp1 = mmc_unbox_integer(_keya);
  tmp2 = mmc_unbox_integer(_keyb);
  _cmp = omc_BinaryTreeInt_keyCmp(threadData, tmp1, tmp2);
  out_cmp = mmc_mk_icon(_cmp);
  return out_cmp;
}

