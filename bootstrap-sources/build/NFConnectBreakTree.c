#include "omc_simulation_settings.h"
#include "NFConnectBreakTree.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&NFConnectBreakTree_EntryTree_Tree_EMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,7,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,7,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,4,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,4,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,12,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,5) {&NFConnectBreakTree_Tree_EMPTY__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "No matching element found for 'break connect(%s, %s)'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,54,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(419)),_OMC_LIT13,_OMC_LIT14,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#include "util/modelica.h"

#include "NFConnectBreakTree_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_balance,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_balance,0}};
#define boxvar_NFConnectBreakTree_EntryTree_balance MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_EntryTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_calculateBalance,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_calculateBalance,0}};
#define boxvar_NFConnectBreakTree_EntryTree_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_EntryTree_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_height,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_height,0}};
#define boxvar_NFConnectBreakTree_EntryTree_height MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_printTreeStr2,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_printTreeStr2,0}};
#define boxvar_NFConnectBreakTree_EntryTree_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_referenceEqOrEmpty,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_referenceEqOrEmpty,0}};
#define boxvar_NFConnectBreakTree_EntryTree_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_rotateLeft,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_rotateLeft,0}};
#define boxvar_NFConnectBreakTree_EntryTree_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_rotateRight,2,0) {(void*) boxptr_NFConnectBreakTree_EntryTree_rotateRight,0}};
#define boxvar_NFConnectBreakTree_EntryTree_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_EntryTree_rotateRight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_appendBreaksInNode_add__entry(threadData_t *threadData, modelica_metatype _name, modelica_metatype _entry, modelica_metatype _oldTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_appendBreaksInNode_add__entry,2,0) {(void*) boxptr_NFConnectBreakTree_appendBreaksInNode_add__entry,0}};
#define boxvar_NFConnectBreakTree_appendBreaksInNode_add__entry MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_appendBreaksInNode_add__entry)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_balance,2,0) {(void*) boxptr_NFConnectBreakTree_balance,0}};
#define boxvar_NFConnectBreakTree_balance MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_calculateBalance,2,0) {(void*) boxptr_NFConnectBreakTree_calculateBalance,0}};
#define boxvar_NFConnectBreakTree_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_height,2,0) {(void*) boxptr_NFConnectBreakTree_height,0}};
#define boxvar_NFConnectBreakTree_height MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_height)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_isConnectBroken_is__broken(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_isConnectBroken_is__broken(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_isConnectBroken_is__broken,2,0) {(void*) boxptr_NFConnectBreakTree_isConnectBroken_is__broken,0}};
#define boxvar_NFConnectBreakTree_isConnectBroken_is__broken MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_isConnectBroken_is__broken)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFConnectBreakTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_printTreeStr2,2,0) {(void*) boxptr_NFConnectBreakTree_printTreeStr2,0}};
#define boxvar_NFConnectBreakTree_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_referenceEqOrEmpty,2,0) {(void*) boxptr_NFConnectBreakTree_referenceEqOrEmpty,0}};
#define boxvar_NFConnectBreakTree_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_rotateLeft,2,0) {(void*) boxptr_NFConnectBreakTree_rotateLeft,0}};
#define boxvar_NFConnectBreakTree_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_rotateRight,2,0) {(void*) boxptr_NFConnectBreakTree_rotateRight,0}};
#define boxvar_NFConnectBreakTree_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_NFConnectBreakTree_rotateRight)

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
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
          tmpMeta5 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _inKey, _inValue);
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
          _key_comp = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFConnectBreakTree_EntryTree_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFConnectBreakTree_EntryTree_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFConnectBreakTree_EntryTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT0);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT0, tmpMeta12);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_NFConnectBreakTree_EntryTree_balance(threadData, _outTree));
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
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

      _tree = omc_NFConnectBreakTree_EntryTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _key, modelica_fnptr _fn)
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
          tmpMeta5 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFConnectBreakTree_EntryTree_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFConnectBreakTree_EntryTree_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFConnectBreakTree_EntryTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT0);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT0, tmpMeta11);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_NFConnectBreakTree_EntryTree_balance(threadData, _new_tree));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_balance(threadData_t *threadData, modelica_metatype _inTree)
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
          _lh = omc_NFConnectBreakTree_EntryTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_NFConnectBreakTree_EntryTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_NFConnectBreakTree_EntryTree_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_NFConnectBreakTree_EntryTree_rotateLeft(threadData, omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_NFConnectBreakTree_EntryTree_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_NFConnectBreakTree_EntryTree_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_NFConnectBreakTree_EntryTree_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_NFConnectBreakTree_EntryTree_rotateRight(threadData, omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outTree, omc_NFConnectBreakTree_EntryTree_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_NFConnectBreakTree_EntryTree_rotateRight(threadData, _outTree));
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_EntryTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp1 = omc_NFConnectBreakTree_EntryTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_NFConnectBreakTree_EntryTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_NFConnectBreakTree_EntryTree_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
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
      modelica_metatype _key = NULL;
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
          _outResult = omc_NFConnectBreakTree_EntryTree_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
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
            _value = omc_NFConnectBreakTree_EntryTree_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_NFConnectBreakTree_EntryTree_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
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
          _foldArg1 = omc_NFConnectBreakTree_EntryTree_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_NFConnectBreakTree_EntryTree_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
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
void omc_NFConnectBreakTree_EntryTree_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
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
          omc_NFConnectBreakTree_EntryTree_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT0;
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

      _tree = omc_NFConnectBreakTree_EntryTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _key, _k);
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _key;
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _key, _k);
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
modelica_boolean omc_NFConnectBreakTree_EntryTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
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

  _key_comp = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _inKey, _key);

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
modelica_metatype boxptr_NFConnectBreakTree_EntryTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_NFConnectBreakTree_EntryTree_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_EntryTree_height(threadData_t *threadData, modelica_metatype _inNode)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_NFConnectBreakTree_EntryTree_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_NFConnectBreakTree_EntryTree_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NFConnectBreakTree_EntryTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
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
modelica_metatype boxptr_NFConnectBreakTree_EntryTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFConnectBreakTree_EntryTree_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
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
          _tree = omc_NFConnectBreakTree_EntryTree_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_NFConnectBreakTree_EntryTree_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFConnectBreakTree_EntryTree_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
modelica_integer omc_NFConnectBreakTree_EntryTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = omc_AbsynUtil_crefCompare(threadData, _inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_NFConnectBreakTree_EntryTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_NFConnectBreakTree_EntryTree_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_EntryTree_keyStr(threadData_t *threadData, modelica_metatype _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Dump_printComponentRefStr(threadData, _inKey);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_metatype _key = NULL;
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
          _lst = omc_NFConnectBreakTree_EntryTree_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFConnectBreakTree_EntryTree_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFConnectBreakTree_EntryTree_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
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
      modelica_metatype _key = NULL;
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
          _new_left = omc_NFConnectBreakTree_EntryTree_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_NFConnectBreakTree_EntryTree_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
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
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
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
      modelica_metatype _key = NULL;
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
          _new_left = omc_NFConnectBreakTree_EntryTree_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_NFConnectBreakTree_EntryTree_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
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
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT0;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_EntryTree_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
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
          tmpMeta6 = stringAppend(_OMC_LIT1,omc_NFConnectBreakTree_EntryTree_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFConnectBreakTree_EntryTree_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT3);
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
          tmpMeta10 = stringAppend(_OMC_LIT1,omc_NFConnectBreakTree_EntryTree_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT2);
          tmpMeta12 = stringAppend(tmpMeta11,omc_NFConnectBreakTree_EntryTree_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT3);
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
modelica_string omc_NFConnectBreakTree_EntryTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
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
          tmp1 = _OMC_LIT4;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFConnectBreakTree_EntryTree_printNodeStr(threadData, _inTree);
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
          tmpMeta7 = stringAppend(omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT5),omc_NFConnectBreakTree_EntryTree_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT5));
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

PROTECTED_FUNCTION_STATIC modelica_string omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _val_node = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string _left_str = NULL;
  modelica_string _right_str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _val_node has no default value.
  // _left has no default value.
  // _right has no default value.
  // _left_str has no default value.
  // _right_str has no default value.
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
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT7:_OMC_LIT8));
          tmpMeta6 = stringAppend(omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT9:_OMC_LIT10));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT11);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFConnectBreakTree_EntryTree_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT6);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT8:_OMC_LIT7));
          tmpMeta12 = stringAppend(tmpMeta10,omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT9:_OMC_LIT10));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT11);
          tmpMeta15 = stringAppend(tmpMeta14,omc_NFConnectBreakTree_EntryTree_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT6);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_NFConnectBreakTree_EntryTree_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT0);
          tmpMeta1 = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _child, _node, _OMC_LIT0);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_EntryTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _outNode, _OMC_LIT0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData, _child, _OMC_LIT0, _node);
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
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
          tmpMeta6 = mmc_mk_box3(4, &NFConnectBreakTree_EntryTree_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
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
          tmp8 = (modelica_boolean)(omc_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_NFConnectBreakTree_EntryTree_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFConnectBreakTree_EntryTree_height(threadData, _left)),(modelica_integer)(omc_NFConnectBreakTree_EntryTree_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &NFConnectBreakTree_EntryTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFConnectBreakTree_EntryTree_height(threadData, _left)),(modelica_integer)(omc_NFConnectBreakTree_EntryTree_height(threadData, _right)))), _left, _right);
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
modelica_metatype omc_NFConnectBreakTree_EntryTree_smallestKey(threadData_t *threadData, modelica_metatype _tree)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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

DLLDirection
modelica_metatype omc_NFConnectBreakTree_EntryTree_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_metatype _key = NULL;
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
          _lst = omc_NFConnectBreakTree_EntryTree_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_EntryTree_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_NFConnectBreakTree_EntryTree_add(threadData, _tree, _key, _value, boxvar_NFConnectBreakTree_EntryTree_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_EntryTree_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _OMC_LIT5;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
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
          tmpMeta5 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _inKey, _inValue);
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
          _key_comp = omc_NFConnectBreakTree_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_NFConnectBreakTree_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_NFConnectBreakTree_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFConnectBreakTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT12);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT12, tmpMeta12);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_NFConnectBreakTree_balance(threadData, _outTree));
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
modelica_metatype omc_NFConnectBreakTree_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
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
modelica_metatype omc_NFConnectBreakTree_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
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
modelica_metatype omc_NFConnectBreakTree_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
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

      _tree = omc_NFConnectBreakTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _key, modelica_fnptr _fn)
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
          tmpMeta5 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_NFConnectBreakTree_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_NFConnectBreakTree_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_NFConnectBreakTree_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_NFConnectBreakTree_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT12);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT12, tmpMeta11);
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
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_NFConnectBreakTree_balance(threadData, _new_tree));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_appendBreaksInNode_add__entry(threadData_t *threadData, modelica_metatype _name, modelica_metatype _entry, modelica_metatype _oldTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTree has no default value.
  if(isSome(_oldTree))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _oldTree;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _outTree = tmpMeta2;
  }
  else
  {
    _outTree = omc_NFConnectBreakTree_EntryTree_new(threadData);
  }

  _outTree = omc_NFConnectBreakTree_EntryTree_update(threadData, _outTree, _name, _entry);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

static modelica_metatype closure0_NFConnectBreakTree_appendBreaksInNode_add__entry(threadData_t *thData, modelica_metatype closure, modelica_metatype oldTree)
{
  modelica_metatype name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype entry = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFConnectBreakTree_appendBreaksInNode_add__entry(thData, name, entry, oldTree);
}static modelica_metatype closure1_NFConnectBreakTree_appendBreaksInNode_add__entry(threadData_t *thData, modelica_metatype closure, modelica_metatype oldTree)
{
  modelica_metatype name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype entry = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFConnectBreakTree_appendBreaksInNode_add__entry(thData, name, entry, oldTree);
}
DLLDirection
modelica_metatype omc_NFConnectBreakTree_appendBreaksInNode(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype *out_newEntries)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _newEntries = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _mod = NULL;
  modelica_metatype _break_mod = NULL;
  modelica_metatype _entry = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _newEntries = tmpMeta1;
  // _mod has no default value.
  // _break_mod has no default value.
  // _entry has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFInstNode_InstNode_extendsDefinition(threadData, _node);
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
          modelica_metatype tmpMeta18;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,6) == 0) goto tmp3_end;
          
          _mod = tmpMeta7;
          /* Pattern matching succeeded */
          {
            modelica_metatype _sm;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 4))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _sm = MMC_CAR(tmpMeta8);
              { /* match expression */
                modelica_metatype tmp11_1;
                tmp11_1 = _sm;
                {
                  volatile mmc_switch_type tmp11;
                  int tmp12;
                  tmp11 = 0;
                  for (; tmp11 < 2; tmp11++) {
                    switch (MMC_SWITCH_CAST(tmp11)) {
                    case 0: {
                      modelica_metatype tmpMeta13;
                      modelica_metatype tmpMeta14;
                      modelica_metatype tmpMeta15;
                      modelica_metatype tmpMeta16;
                      modelica_metatype tmpMeta17;
                      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 3));
                      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,3,3) == 0) goto tmp10_end;
                      
                      _break_mod = tmpMeta13;
                      /* Pattern matching succeeded */
                      tmpMeta14 = mmc_mk_box3(3, &NFConnectBreakTree_Entry_ENTRY__desc, mmc_mk_boolean(0 /* false */), _break_mod);
                      _entry = omc_Mutable_create(threadData, tmpMeta14);

                      tmpMeta15 = mmc_mk_cons(_entry, _newEntries);
                      _newEntries = tmpMeta15;

                      tmpMeta16 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_break_mod), 2))), _entry);
                      _tree = omc_NFConnectBreakTree_addUpdate(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_break_mod), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFConnectBreakTree_appendBreaksInNode_add__entry,tmpMeta16));

                      tmpMeta17 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_break_mod), 3))), _entry);
                      _tree = omc_NFConnectBreakTree_addUpdate(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_break_mod), 2))), (modelica_fnptr) mmc_mk_box2(0,closure1_NFConnectBreakTree_appendBreaksInNode_add__entry,tmpMeta17));
                      goto tmp10_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp10_done;
                    }
                    }
                    goto tmp10_end;
                    tmp10_end: ;
                  }
                  goto goto_9;
                  goto_9:;
                  goto goto_2;
                  goto tmp10_done;
                  tmp10_done:;
                }
              }
              ;
            }
          }
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
  _return: OMC_LABEL_UNUSED
  if (out_newEntries) { *out_newEntries = _newEntries; }
  return _tree;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_balance(threadData_t *threadData, modelica_metatype _inTree)
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
          _lh = omc_NFConnectBreakTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_NFConnectBreakTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_NFConnectBreakTree_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_NFConnectBreakTree_rotateLeft(threadData, omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_NFConnectBreakTree_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_NFConnectBreakTree_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_NFConnectBreakTree_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_NFConnectBreakTree_rotateRight(threadData, omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outTree, omc_NFConnectBreakTree_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_NFConnectBreakTree_rotateRight(threadData, _outTree));
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

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
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
          tmp1 = omc_NFConnectBreakTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_NFConnectBreakTree_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_NFConnectBreakTree_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
void omc_NFConnectBreakTree_checkUnmatchedBreaks(threadData_t *threadData, modelica_metatype _entries)
{
  modelica_metatype _entry = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _entry has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _info has no default value.
  {
    modelica_metatype _e;
    for (tmpMeta1 = _entries; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      _entry = omc_Mutable_access(threadData, _e);

      if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_entry), 2))))))
      {
        /* Pattern-matching assignment */
        tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_entry), 3)));
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,3,3) == 0) MMC_THROW_INTERNAL();
        tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
        tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
        _lhs = tmpMeta3;
        _rhs = tmpMeta4;
        _info = tmpMeta5;

        tmpMeta6 = mmc_mk_cons(omc_Dump_printComponentRefStr(threadData, _lhs), mmc_mk_cons(omc_Dump_printComponentRefStr(threadData, _rhs), MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addSourceMessage(threadData, _OMC_LIT17, tmpMeta6, _info);

        MMC_THROW_INTERNAL();
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
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
      modelica_metatype _key = NULL;
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
          _outResult = omc_NFConnectBreakTree_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
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
modelica_metatype omc_NFConnectBreakTree_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
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
            _value = omc_NFConnectBreakTree_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_NFConnectBreakTree_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
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
modelica_metatype omc_NFConnectBreakTree_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
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
          _foldArg1 = omc_NFConnectBreakTree_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_NFConnectBreakTree_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
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
void omc_NFConnectBreakTree_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
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
          omc_NFConnectBreakTree_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

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
modelica_metatype omc_NFConnectBreakTree_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT12;
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

      _tree = omc_NFConnectBreakTree_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_NFConnectBreakTree_keyCompare(threadData, _key, _k);
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
modelica_metatype omc_NFConnectBreakTree_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
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
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _key;
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_NFConnectBreakTree_keyCompare(threadData, _key, _k);
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
modelica_boolean omc_NFConnectBreakTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
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

  _key_comp = omc_NFConnectBreakTree_keyCompare(threadData, _inKey, _key);

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
modelica_metatype boxptr_NFConnectBreakTree_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_NFConnectBreakTree_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectBreakTree_height(threadData_t *threadData, modelica_metatype _inNode)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_NFConnectBreakTree_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_NFConnectBreakTree_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_isConnectBroken_is__broken(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope)
{
  modelica_boolean _isBroken;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isBroken has no default value.
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
          _isBroken = omc_NFInstNode_InstNode_isEmpty(threadData, omc_NFLookup_lookupLocalSimpleName(threadData, omc_AbsynUtil_crefFirstIdent(threadData, _cref), _scope, NULL));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _isBroken = 0 /* false */;
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
  return _isBroken;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_isConnectBroken_is__broken(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope)
{
  modelica_boolean _isBroken;
  modelica_metatype out_isBroken;
  _isBroken = omc_NFConnectBreakTree_isConnectBroken_is__broken(threadData, _cref, _scope);
  out_isBroken = mmc_mk_icon(_isBroken);
  return out_isBroken;
}

DLLDirection
modelica_boolean omc_NFConnectBreakTree_isConnectBroken(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _scope, modelica_metatype _connectBreaks)
{
  modelica_boolean _isBroken;
  modelica_metatype _opt_entry_tree = NULL;
  modelica_metatype _opt_entry_ptr = NULL;
  modelica_metatype _entry_ptr = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _isBroken = 0 /* false */;
  // _opt_entry_tree has no default value.
  // _opt_entry_ptr has no default value.
  // _entry_ptr has no default value.
  // _entry has no default value.
  _opt_entry_tree = omc_NFConnectBreakTree_getOpt(threadData, _connectBreaks, _lhs);

  if(isSome(_opt_entry_tree))
  {
    _opt_entry_ptr = omc_NFConnectBreakTree_EntryTree_getOpt(threadData, omc_Util_getOption(threadData, _opt_entry_tree), _rhs);

    if(((isSome(_opt_entry_ptr) && (!omc_NFConnectBreakTree_isConnectBroken_is__broken(threadData, _lhs, _scope))) && (!omc_NFConnectBreakTree_isConnectBroken_is__broken(threadData, _rhs, _scope))))
    {
      /* Pattern-matching assignment */
      tmpMeta1 = _opt_entry_ptr;
      if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      _entry_ptr = tmpMeta2;

      _entry = omc_Mutable_access(threadData, _entry_ptr);

      tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(4));
      memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_entry), 4*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[2] = mmc_mk_boolean(1 /* true */);
      _entry = tmpMeta3;

      omc_Mutable_update(threadData, _entry_ptr, _entry);

      _isBroken = 1 /* true */;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _isBroken;
}
modelica_metatype boxptr_NFConnectBreakTree_isConnectBroken(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _scope, modelica_metatype _connectBreaks)
{
  modelica_boolean _isBroken;
  modelica_metatype out_isBroken;
  _isBroken = omc_NFConnectBreakTree_isConnectBroken(threadData, _lhs, _rhs, _scope, _connectBreaks);
  out_isBroken = mmc_mk_icon(_isBroken);
  return out_isBroken;
}

DLLDirection
modelica_boolean omc_NFConnectBreakTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
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
modelica_metatype boxptr_NFConnectBreakTree_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_NFConnectBreakTree_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
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
          _tree = omc_NFConnectBreakTree_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_NFConnectBreakTree_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFConnectBreakTree_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
modelica_integer omc_NFConnectBreakTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = omc_AbsynUtil_crefCompare(threadData, _inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_NFConnectBreakTree_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_NFConnectBreakTree_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_keyStr(threadData_t *threadData, modelica_metatype _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Dump_printComponentRefStr(threadData, _inKey);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_NFConnectBreakTree_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_metatype _key = NULL;
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
          _lst = omc_NFConnectBreakTree_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFConnectBreakTree_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
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
          _lst = omc_NFConnectBreakTree_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
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
      modelica_metatype _key = NULL;
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
          _new_left = omc_NFConnectBreakTree_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_NFConnectBreakTree_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
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
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

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
modelica_metatype omc_NFConnectBreakTree_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
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
      modelica_metatype _key = NULL;
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
          _new_left = omc_NFConnectBreakTree_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_NFConnectBreakTree_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
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
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

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
modelica_metatype omc_NFConnectBreakTree_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT12;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
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
          tmpMeta6 = stringAppend(_OMC_LIT1,omc_NFConnectBreakTree_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
          tmpMeta8 = stringAppend(tmpMeta7,omc_NFConnectBreakTree_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT3);
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
          tmpMeta10 = stringAppend(_OMC_LIT1,omc_NFConnectBreakTree_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT2);
          tmpMeta12 = stringAppend(tmpMeta11,omc_NFConnectBreakTree_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT3);
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
modelica_string omc_NFConnectBreakTree_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
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
          tmp1 = _OMC_LIT4;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFConnectBreakTree_printNodeStr(threadData, _inTree);
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
          tmpMeta7 = stringAppend(omc_NFConnectBreakTree_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT5),omc_NFConnectBreakTree_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFConnectBreakTree_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT5));
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

PROTECTED_FUNCTION_STATIC modelica_string omc_NFConnectBreakTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _val_node = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string _left_str = NULL;
  modelica_string _right_str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _val_node has no default value.
  // _left has no default value.
  // _right has no default value.
  // _left_str has no default value.
  // _right_str has no default value.
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
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT7:_OMC_LIT8));
          tmpMeta6 = stringAppend(omc_NFConnectBreakTree_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT9:_OMC_LIT10));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT11);
          tmpMeta9 = stringAppend(tmpMeta8,omc_NFConnectBreakTree_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT6);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT8:_OMC_LIT7));
          tmpMeta12 = stringAppend(tmpMeta10,omc_NFConnectBreakTree_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT9:_OMC_LIT10));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT11);
          tmpMeta15 = stringAppend(tmpMeta14,omc_NFConnectBreakTree_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT6);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_NFConnectBreakTree_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectBreakTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectBreakTree_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFConnectBreakTree_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT12);
          tmpMeta1 = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _child, _node, _OMC_LIT12);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectBreakTree_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
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
          _node = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _outNode, _OMC_LIT12, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_NFConnectBreakTree_setTreeLeftRight(threadData, _child, _OMC_LIT12, _node);
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
modelica_metatype omc_NFConnectBreakTree_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
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
          tmpMeta6 = mmc_mk_box3(4, &NFConnectBreakTree_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
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
          tmp8 = (modelica_boolean)(omc_NFConnectBreakTree_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_NFConnectBreakTree_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFConnectBreakTree_height(threadData, _left)),(modelica_integer)(omc_NFConnectBreakTree_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &NFConnectBreakTree_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_NFConnectBreakTree_height(threadData, _left)),(modelica_integer)(omc_NFConnectBreakTree_height(threadData, _right)))), _left, _right);
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
modelica_metatype omc_NFConnectBreakTree_smallestKey(threadData_t *threadData, modelica_metatype _tree)
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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

DLLDirection
modelica_metatype omc_NFConnectBreakTree_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
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
      modelica_metatype _key = NULL;
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
          _lst = omc_NFConnectBreakTree_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

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
modelica_metatype omc_NFConnectBreakTree_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_NFConnectBreakTree_add(threadData, _tree, _key, _value, boxvar_NFConnectBreakTree_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_NFConnectBreakTree_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _OMC_LIT5;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

