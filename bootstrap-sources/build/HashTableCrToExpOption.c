#include "omc_simulation_settings.h"
#include "HashTableCrToExpOption.h"
#define _OMC_LIT0_data "SOME("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,5,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "NONE()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#include "util/modelica.h"

#include "HashTableCrToExpOption_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrToExpOption_printExpOtionStr(threadData_t *threadData, modelica_metatype _expOpt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTableCrToExpOption_printExpOtionStr,2,0) {(void*) boxptr_HashTableCrToExpOption_printExpOtionStr,0}};
#define boxvar_HashTableCrToExpOption_printExpOtionStr MMC_REFSTRUCTLIT(boxvar_lit_HashTableCrToExpOption_printExpOtionStr)

PROTECTED_FUNCTION_STATIC modelica_string omc_HashTableCrToExpOption_printExpOtionStr(threadData_t *threadData, modelica_metatype _expOpt)
{
  modelica_string _outStr = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStr has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _expOpt;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT0,omc_ExpressionBasics_printExpStr(threadData, _exp));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT1);
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT2;
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
  _outStr = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outStr;
}

DLLDirection
modelica_metatype omc_HashTableCrToExpOption_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_HashTableCrToExpOption_printExpOtionStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableCrToExpOption_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableCrToExpOption_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, Option<DAE.Exp>>>>>, #Integer, tuple<.HashTableCrToExpOption.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrToExpOption.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrToExpOption.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrToExpOption.FuncExpStr<function>(Option<DAE.Exp> exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableCrToExpOption_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrToExpOption_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

