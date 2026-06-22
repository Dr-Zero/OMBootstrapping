#include "omc_simulation_settings.h"
#include "HashSetExp.h"
#include "util/modelica.h"

#include "HashSetExp_includes.h"



DLLDirection
modelica_metatype omc_HashSetExp_emptyHashSetSized(threadData_t *threadData, modelica_integer _size)
{
  modelica_metatype _hashSet = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  tmpMeta1 = mmc_mk_box3(0, boxvar_ExpressionBasics_hashExp, boxvar_ExpressionBasics_expEqual, boxvar_ExpressionBasics_printExpStr);
  _hashSet = omc_BaseHashSet_emptyHashSetWork(threadData, _size, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _hashSet;
}
modelica_metatype boxptr_HashSetExp_emptyHashSetSized(threadData_t *threadData, modelica_metatype _size)
{
  modelica_integer tmp1;
  modelica_metatype _hashSet = NULL;
  tmp1 = mmc_unbox_integer(_size);
  _hashSet = omc_HashSetExp_emptyHashSetSized(threadData, tmp1);
  /* skip box _hashSet; tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.Exp>>>, #Integer, #Integer, tuple<.HashSetExp.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashSetExp.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashSetExp.FuncCrefStr<function>(DAE.Exp cr) => String>> */
  return _hashSet;
}

DLLDirection
modelica_metatype omc_HashSetExp_emptyHashSet(threadData_t *threadData)
{
  modelica_metatype _hashSet = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hashSet has no default value.
  _hashSet = omc_HashSetExp_emptyHashSetSized(threadData, ((modelica_integer) 2053));
  _return: OMC_LABEL_UNUSED
  return _hashSet;
}

