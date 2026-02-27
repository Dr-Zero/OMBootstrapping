#include "omc_simulation_settings.h"
#include "NFCheckModel.h"
#define _OMC_LIT0_data "Algorithm size: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,16,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#include "util/modelica.h"

#include "NFCheckModel_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputCrefFinder2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fcrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputCrefFinder2,2,0) {(void*) boxptr_NFCheckModel_statementOutputCrefFinder2,0}};
#define boxvar_NFCheckModel_statementOutputCrefFinder2 MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputCrefFinder2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputCrefFinder(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fcrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputCrefFinder,2,0) {(void*) boxptr_NFCheckModel_statementOutputCrefFinder,0}};
#define boxvar_NFCheckModel_statementOutputCrefFinder MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputCrefFinder)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputs(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Fcrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputs,2,0) {(void*) boxptr_NFCheckModel_statementOutputs,0}};
#define boxvar_NFCheckModel_statementOutputs MMC_REFSTRUCTLIT(boxvar_lit_NFCheckModel_statementOutputs)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputCrefFinder2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fcrefs)
{
  modelica_metatype _crefs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _crefs = __omcQ_24in_5Fcrefs;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFComponentRef_isCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) && (!omc_NFComponentRef_isIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))))) goto tmp2_end;
          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _crefs);
          goto tmp2_done;
        }
        case 1: {
          
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
  return _crefs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputCrefFinder(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fcrefs)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _crefs = __omcQ_24in_5Fcrefs;
  // _cref has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _cref = omc_NFComponentRef_stripSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), NULL);
          tmpMeta1 = omc_NFExpression_fold(threadData, omc_NFExpandExp_expand(threadData, omc_NFExpression_fromCref(threadData, _cref, 0 /* false */), 0 /* false */, NULL), boxvar_NFCheckModel_statementOutputCrefFinder2, _crefs);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefs;
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
  _crefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCheckModel_statementOutputs(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Fcrefs)
{
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _crefs = __omcQ_24in_5Fcrefs;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))), boxvar_NFCheckModel_statementOutputCrefFinder, _crefs);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), boxvar_NFCheckModel_statementOutputs, _crefs);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _b = MMC_CAR(tmpMeta5);
              _crefs = omc_List_fold(threadData, omc_Util_tuple22(threadData, _b), boxvar_NFCheckModel_statementOutputs, _crefs);
            }
          }
          tmpMeta1 = _crefs;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _b;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _b = MMC_CAR(tmpMeta7);
              _crefs = omc_List_fold(threadData, omc_Util_tuple22(threadData, _b), boxvar_NFCheckModel_statementOutputs, _crefs);
            }
          }
          tmpMeta1 = _crefs;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), boxvar_NFCheckModel_statementOutputs, _crefs);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefs;
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
  _crefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefs;
}

DLLDirection
modelica_integer omc_NFCheckModel_countAlgorithmSize(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_integer _equations;
  modelica_metatype _crefs = NULL;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _equations = ((modelica_integer) 0);
  // _crefs has no default value.
  _crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

  _crefs = omc_List_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), boxvar_NFCheckModel_statementOutputs, _crefs);

  _equations = _equations + omc_UnorderedSet_size(threadData, _crefs);

  tmp1 = modelica_integer_to_modelica_string(omc_UnorderedSet_size(threadData, _crefs), ((modelica_integer) 0), 1 /* true */);
  tmpMeta2 = stringAppend(_OMC_LIT0,tmp1);
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT1);
  fputs(MMC_STRINGDATA(tmpMeta3),stdout);

  {
    modelica_metatype _cr;
    for (tmpMeta4 = omc_UnorderedSet_toList(threadData, _crefs); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _cr = MMC_CAR(tmpMeta4);
      tmpMeta5 = stringAppend(omc_NFComponentRef_toString(threadData, _cr),_OMC_LIT1);
      fputs(MMC_STRINGDATA(tmpMeta5),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _equations;
}
modelica_metatype boxptr_NFCheckModel_countAlgorithmSize(threadData_t *threadData, modelica_metatype _alg)
{
  modelica_integer _equations;
  modelica_metatype out_equations;
  _equations = omc_NFCheckModel_countAlgorithmSize(threadData, _alg);
  out_equations = mmc_mk_icon(_equations);
  return out_equations;
}

DLLDirection
modelica_integer omc_NFCheckModel_countVariableSize(threadData_t *threadData, modelica_metatype _var, modelica_integer __omcQ_24in_5Fvariables, modelica_integer __omcQ_24in_5Fequations, modelica_integer *out_equations)
{
  modelica_integer _variables;
  modelica_integer _equations;
  modelica_metatype _ty = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _attr = NULL;
  modelica_integer _var_size;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _variables = __omcQ_24in_5Fvariables;
  _equations = __omcQ_24in_5Fequations;
  // _ty has no default value.
  // _binding has no default value.
  // _attr has no default value.
  // _var_size has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _var;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,10) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _ty = tmpMeta2;
  _binding = tmpMeta3;
  _attr = tmpMeta4;

  if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_attr), 4)))) < 5))
  {
    goto _return;
  }

  if(omc_NFType_isExternalObject(threadData, _ty))
  {
    goto _return;
  }

  _var_size = omc_NFType_sizeOf(threadData, _ty, 0 /* false */);

  _variables = _variables + _var_size;

  if(omc_NFVariable_isTopLevelInput(threadData, _var))
  {
    _equations = _equations + _var_size;
  }
  else
  {
    _equations = _equations + omc_NFType_sizeOf(threadData, omc_NFBinding_getType(threadData, _binding), 0 /* false */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_equations) { *out_equations = _equations; }
  return _variables;
}
modelica_metatype boxptr_NFCheckModel_countVariableSize(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fvariables, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype *out_equations)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _equations;
  modelica_integer _variables;
  modelica_metatype out_variables;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fvariables);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fequations);
  _variables = omc_NFCheckModel_countVariableSize(threadData, _var, tmp1, tmp2, &_equations);
  out_variables = mmc_mk_icon(_variables);
  if (out_equations) { *out_equations = mmc_mk_icon(_equations); }
  return out_variables;
}

DLLDirection
modelica_integer omc_NFCheckModel_checkModel(threadData_t *threadData, modelica_metatype _flatModel, modelica_integer *out_equations)
{
  modelica_integer _variables;
  modelica_integer _equations;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _variables = ((modelica_integer) 0);
  _equations = ((modelica_integer) 0);
  {
    modelica_metatype _v;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _variables = omc_NFCheckModel_countVariableSize(threadData, _v, _variables, _equations ,&_equations);
    }
  }

  _equations = _equations + omc_NFEquation_sizeOfList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))));

  {
    modelica_metatype _a;
    for (tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 6))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _a = MMC_CAR(tmpMeta3);
      _equations = _equations + omc_NFCheckModel_countAlgorithmSize(threadData, _a);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_equations) { *out_equations = _equations; }
  return _variables;
}
modelica_metatype boxptr_NFCheckModel_checkModel(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype *out_equations)
{
  modelica_integer _equations;
  modelica_integer _variables;
  modelica_metatype out_variables;
  _variables = omc_NFCheckModel_checkModel(threadData, _flatModel, &_equations);
  out_variables = mmc_mk_icon(_variables);
  if (out_equations) { *out_equations = mmc_mk_icon(_equations); }
  return out_variables;
}

