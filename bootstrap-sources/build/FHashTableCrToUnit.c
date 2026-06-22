#include "omc_simulation_settings.h"
#include "FHashTableCrToUnit.h"
#include "util/modelica.h"

#include "FHashTableCrToUnit_includes.h"



DLLDirection
modelica_metatype omc_FHashTableCrToUnit_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_ComponentReferenceBasics_hashComponentRef, boxvar_ComponentReferenceBasics_crefEqual, boxvar_ComponentReferenceBasics_printComponentRefStr, boxvar_FUnit_unit2string);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_FHashTableCrToUnit_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_FHashTableCrToUnit_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, FUnit.Unit>>>>, #Integer, tuple<.FHashTableCrToUnit.FuncHashKey<function>(DAE.ComponentRef cr) => #Integer, .FHashTableCrToUnit.FuncKeyEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .FHashTableCrToUnit.FuncKeyStr<function>(DAE.ComponentRef cr) => String, .FHashTableCrToUnit.FuncValueStr<function>(FUnit.Unit exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_FHashTableCrToUnit_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_FHashTableCrToUnit_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

