#include "omc_simulation_settings.h"
#include "HashTableCrIntToExp.h"
#define _OMC_LIT0_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#include "util/modelica.h"

#include "HashTableCrIntToExp_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrIntToExp_printKey(threadData_t *threadData, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_printKey,2,0) {(void*) boxptr_HashTableCrIntToExp_printKey,0}};
#define boxvar_HashTableCrIntToExp_printKey MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_printKey)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HashTableCrIntToExp_keyEqual(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTableCrIntToExp_keyEqual(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_keyEqual,2,0) {(void*) boxptr_HashTableCrIntToExp_keyEqual,0}};
#define boxvar_HashTableCrIntToExp_keyEqual MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_keyEqual)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HashTableCrIntToExp_hashFunc(threadData_t *threadData, modelica_metatype _tpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTableCrIntToExp_hashFunc(threadData_t *threadData, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_hashFunc,2,0) {(void*) boxptr_HashTableCrIntToExp_hashFunc,0}};
#define boxvar_HashTableCrIntToExp_hashFunc MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrIntToExp_hashFunc)

DLLDirection
modelica_metatype omc_HashTableCrIntToExp_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_HashTableCrIntToExp_hashFunc, boxvar_HashTableCrIntToExp_keyEqual, boxvar_HashTableCrIntToExp_printKey, boxvar_ExpressionBasics_printExpStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableCrIntToExp_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableCrIntToExp_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<tuple<DAE.ComponentRef, #Integer>, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<tuple<DAE.ComponentRef, #Integer>, DAE.Exp>>>>, #Integer, tuple<.HashTableCrIntToExp.FuncHashCref<function>(tuple<DAE.ComponentRef, #Integer> cr) => #Integer, .HashTableCrIntToExp.FuncCrefEqual<function>(tuple<DAE.ComponentRef, #Integer> cr1, tuple<DAE.ComponentRef, #Integer> cr2) => #Boolean, .HashTableCrIntToExp.FuncCrefStr<function>(tuple<DAE.ComponentRef, #Integer> cr) => String, .HashTableCrIntToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableCrIntToExp_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrIntToExp_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrIntToExp_printKey(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_string _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  tmpMeta1 = stringAppend(omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_Util_tuple21(threadData, _tpl)),_OMC_LIT0);
  tmpMeta2 = stringAppend(tmpMeta1,intString(mmc_unbox_integer(omc_Util_tuple22(threadData, _tpl))));
  _res = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HashTableCrIntToExp_keyEqual(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _tpl1;
    tmp4_2 = _tpl2;
    {
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_integer _i1;
      modelica_integer _i2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr1 has no default value.
      // _cr2 has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_boolean tmp12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _cr1 = tmpMeta6;
          _i1 = tmp8  /* pattern as ty=Integer */;
          _cr2 = tmpMeta9;
          _i2 = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (_i1 == _i2);
          if (1 /* true */ != tmp12) goto goto_2;
          tmp1 = omc_ComponentReferenceBasics_crefEqual(threadData, _cr1, _cr2);
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTableCrIntToExp_keyEqual(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_HashTableCrIntToExp_keyEqual(threadData, _tpl1, _tpl2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HashTableCrIntToExp_hashFunc(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_integer _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_ComponentReferenceBasics_hashComponentRef(threadData, omc_Util_tuple21(threadData, _tpl)) + mmc_unbox_integer(omc_Util_tuple22(threadData, _tpl));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTableCrIntToExp_hashFunc(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_integer _res;
  modelica_metatype out_res;
  _res = omc_HashTableCrIntToExp_hashFunc(threadData, _tpl);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

