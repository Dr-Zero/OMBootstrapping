#include "omc_simulation_settings.h"
#include "HashTableCrToExpSourceTpl.h"
#include "util/modelica.h"

#include "HashTableCrToExpSourceTpl_includes.h"



DLLDirection
modelica_string omc_HashTableCrToExpSourceTpl_printExpSourceTplStr(threadData_t *threadData, modelica_metatype _v)
{
  modelica_string _res = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _e has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _v;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _e = tmpMeta2;

  _res = omc_ExpressionBasics_printExpStr(threadData, _e);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_HashTableCrToExpSourceTpl_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_HashTableCrToExpSourceTpl_printExpSourceTplStr);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTableCrToExpSourceTpl_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTableCrToExpSourceTpl_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<DAE.Exp, DAE.ElementSource>>>>>, #Integer, tuple<.HashTableCrToExpSourceTpl.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrToExpSourceTpl.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrToExpSourceTpl.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrToExpSourceTpl.FuncExpStr<function>(tuple<DAE.Exp, DAE.ElementSource> exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTableCrToExpSourceTpl_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTableCrToExpSourceTpl_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

