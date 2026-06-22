#include "omc_simulation_settings.h"
#include "HashTableExpToExp.h"
#include "util/modelica.h"

#include "HashTableExpToExp_includes.h"



DLLDirection
modelica_metatype omc_HashTableExpToExp_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ExpressionBasics_hashExp, boxvar_ExpressionBasics_expEqual, boxvar_ExpressionBasics_printExpStr, boxvar_ExpressionBasics_printExpStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableExpToExp_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableExpToExp_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, DAE.Exp>>>>, #Integer, tuple<.HashTableExpToExp.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToExp.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToExp.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToExp.FuncExpStr<function>(DAE.Exp exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableExpToExp_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableExpToExp_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

