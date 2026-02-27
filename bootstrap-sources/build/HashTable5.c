#include "omc_simulation_settings.h"
#include "HashTable5.h"
#include "util/modelica.h"

#include "HashTable5_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_HashTable5_hashFunc(threadData_t *threadData, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTable5_hashFunc(threadData_t *threadData, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HashTable5_hashFunc,2,0) {(void*) boxptr_HashTable5_hashFunc,0}};
#define boxvar_HashTable5_hashFunc MMC_REFSTRUCTLIT(boxvar_lit_HashTable5_hashFunc)

DLLDirection
modelica_metatype omc_HashTable5_emptyHashTableSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashTable = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  tmpMeta1 = mmc_mk_box4(0, boxvar_HashTable5_hashFunc, boxvar_AbsynUtil_crefEqual, boxvar_Dump_printComponentRefStr, boxvar_intString);
  _hashTable = omc_BaseHashTable_emptyHashTableWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}
modelica_metatype boxptr_HashTable5_emptyHashTableSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashTable = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashTable = omc_HashTable5_emptyHashTableSized(threadData, tmp1);
  /* skip box _hashTable; tuple<array<list<tuple<Absyn.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<Absyn.ComponentRef, #Integer>>>>, #Integer, tuple<.HashTable5.FuncHashCref<function>(Absyn.ComponentRef cr) => #Integer, .HashTable5.FuncCrefEqual<function>(Absyn.ComponentRef cr1, Absyn.ComponentRef cr2) => #Boolean, .HashTable5.FuncCrefStr<function>(Absyn.ComponentRef cr) => String, .HashTable5.FuncExpStr<function>(#Integer exp) => String>> */
  return _hashTable;
}

DLLDirection
modelica_metatype omc_HashTable5_emptyHashTable(threadData_t *threadData)
{
  modelica_metatype _hashTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashTable has no default value.
  _hashTable = omc_HashTable5_emptyHashTableSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashTable;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HashTable5_hashFunc(threadData_t *threadData, modelica_metatype _cr)
{
  modelica_integer _res;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = stringHashDjb2(omc_Dump_printComponentRefStr(threadData, _cr));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HashTable5_hashFunc(threadData_t *threadData, modelica_metatype _cr)
{
  modelica_integer _res;
  modelica_metatype out_res;
  _res = omc_HashTable5_hashFunc(threadData, _cr);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

