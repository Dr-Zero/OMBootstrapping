#include "omc_simulation_settings.h"
#include "NFInstDump.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#include "util/modelica.h"

#include "NFInstDump_includes.h"



DLLDirection
modelica_string omc_NFInstDump_dumpUntypedComponentDims(threadData_t *threadData, modelica_metatype _inComponent)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComponent;
    {
      modelica_metatype _dims = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dims has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _dims = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Array_toString(threadData, _dims, boxvar_NFInstDump_dimensionStr, _OMC_LIT0, _OMC_LIT1, _OMC_LIT2, _OMC_LIT3, 0 /* false */, ((modelica_integer) 0));
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
modelica_string omc_NFInstDump_dimensionStr(threadData_t *threadData, modelica_metatype _inDimension)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpDimension, _inDimension);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_equationStr(threadData_t *threadData, modelica_metatype _inEquation)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpEquation, _inEquation);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_prefixStr(threadData_t *threadData, modelica_metatype _inPrefix)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpPrefix, _inPrefix);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_bindingStr(threadData_t *threadData, modelica_metatype _inBinding)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpBinding, _inBinding);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_componentStr(threadData_t *threadData, modelica_metatype _inComponent)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpComponent, _inComponent);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_elementStr(threadData_t *threadData, modelica_metatype _inElement)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString(threadData, boxvar_NFInstDumpTpl_dumpElement, _inElement);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_NFInstDump_modelStr(threadData_t *threadData, modelica_string _inName, modelica_metatype _inClass)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_Tpl_tplString2(threadData, boxvar_NFInstDumpTpl_dumpModel, _inName, _inClass);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

