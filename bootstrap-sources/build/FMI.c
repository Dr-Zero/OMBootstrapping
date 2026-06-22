#include "omc_simulation_settings.h"
#include "FMI.h"
#define _OMC_LIT0_data "real"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "boolean"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "string"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,6,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,0,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "cs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "me_cs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,5,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "me"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "1.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,3,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT4}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "returns the FMI Version either 1.0 or 2.0."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,42,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(134)),_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT10,_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "cs_st"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,5,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "cs_tool"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#include "util/modelica.h"

#include "FMI_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_FMI_filterModelVariable(threadData_t *threadData, modelica_metatype _modelVar, modelica_string _tipe, modelica_string _variableCausality);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_FMI_filterModelVariable(threadData_t *threadData, modelica_metatype _modelVar, modelica_metatype _tipe, modelica_metatype _variableCausality);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_filterModelVariable,2,0) {(void*) boxptr_FMI_filterModelVariable,0}};
#define boxvar_FMI_filterModelVariable MMC_REFSTRUCTLIT(boxvar_lit_FMI_filterModelVariable)

PROTECTED_FUNCTION_STATIC modelica_boolean omc_FMI_filterModelVariable(threadData_t *threadData, modelica_metatype _modelVar, modelica_string _tipe, modelica_string _variableCausality)
{
  modelica_boolean _result;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _modelVar;
    {
      modelica_string _causality = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _causality has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _causality = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_tipe, _OMC_LIT0)) && (stringEqual(_causality, _variableCausality)))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,14) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _causality = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_tipe, _OMC_LIT1)) && (stringEqual(_causality, _variableCausality)))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,14) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _causality = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_tipe, _OMC_LIT2)) && (stringEqual(_causality, _variableCausality)))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,14) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _causality = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_tipe, _OMC_LIT3)) && (stringEqual(_causality, _variableCausality)))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
  _result = tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_FMI_filterModelVariable(threadData_t *threadData, modelica_metatype _modelVar, modelica_metatype _tipe, modelica_metatype _variableCausality)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_FMI_filterModelVariable(threadData, _modelVar, _tipe, _variableCausality);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLDirection
modelica_metatype omc_FMI_filterModelVariables(threadData_t *threadData, modelica_metatype _inModelVariables, modelica_string _tipe, modelica_string _variableCausality)
{
  modelica_metatype _outModelVariables = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outModelVariables has no default value.
  _outModelVariables = omc_List_filter2OnTrue(threadData, _inModelVariables, boxvar_FMI_filterModelVariable, _tipe, _variableCausality);
  _return: OMC_LABEL_UNUSED
  return _outModelVariables;
}

DLLDirection
modelica_string omc_FMI_getEnumerationTypeFromTypes(threadData_t *threadData, modelica_metatype _inTypeDefinitionsList, modelica_string _inBaseType)
{
  modelica_string _outEnumerationType = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnumerationType has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_string tmp4_2;
    tmp4_1 = _inTypeDefinitionsList;
    tmp4_2 = _inBaseType;
    {
      modelica_metatype _xs = NULL;
      modelica_string _name_ = NULL;
      modelica_string _baseType = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _xs has no default value.
      // _name_ has no default value.
      // _baseType has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _name_ = tmpMeta8;
          _baseType = tmp4_2;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_name_, _baseType))) goto tmp3_end;
          tmp1 = _name_;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          
          _xs = tmpMeta10;
          _baseType = tmp4_2;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTypeDefinitionsList = _xs;
          _inBaseType = _baseType;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT4;
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
  _outEnumerationType = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outEnumerationType;
}

DLLDirection
modelica_boolean omc_FMI_isFMICSType(threadData_t *threadData, modelica_string _inFMIType)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMIType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (2 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT5), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_isFMICSType(threadData_t *threadData, modelica_metatype _inFMIType)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_isFMICSType(threadData, _inFMIType);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_FMI_isFMIMEType(threadData_t *threadData, modelica_string _inFMIType)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMIType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (2 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_isFMIMEType(threadData_t *threadData, modelica_metatype _inFMIType)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_isFMIMEType(threadData, _inFMIType);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_FMI_canExportFMU(threadData_t *threadData, modelica_string _inFMUVersion, modelica_string _inFMIType)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;modelica_string tmp4_2;
    tmp4_1 = _inFMUVersion;
    tmp4_2 = _inFMIType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (2 != MMC_STRLEN(tmp4_2) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_2)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (2 != MMC_STRLEN(tmp4_2) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_2)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (2 != MMC_STRLEN(tmp4_2) || strcmp(MMC_STRINGDATA(_OMC_LIT5), MMC_STRINGDATA(tmp4_2)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          if (5 != MMC_STRLEN(tmp4_2) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_2)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_canExportFMU(threadData_t *threadData, modelica_metatype _inFMUVersion, modelica_metatype _inFMIType)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_canExportFMU(threadData, _inFMUVersion, _inFMIType);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_FMI_checkFMIType(threadData_t *threadData, modelica_string _inFMIType)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMIType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (2 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT7), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (2 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT5), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT6), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_checkFMIType(threadData_t *threadData, modelica_metatype _inFMIType)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_checkFMIType(threadData, _inFMIType);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_string omc_FMI_getFMIVersionString(threadData_t *threadData)
{
  modelica_string _version = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _version = omc_Flags_getConfigString(threadData, _OMC_LIT13);
  _return: OMC_LABEL_UNUSED
  return _version;
}

DLLDirection
modelica_boolean omc_FMI_isFMIVersion20(threadData_t *threadData, modelica_string _inFMUVersion)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMUVersion;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_isFMIVersion20(threadData_t *threadData, modelica_metatype _inFMUVersion)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_isFMIVersion20(threadData, _inFMUVersion);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_FMI_isFMIVersion10(threadData_t *threadData, modelica_string _inFMUVersion)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMUVersion;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_isFMIVersion10(threadData_t *threadData, modelica_metatype _inFMUVersion)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_isFMIVersion10(threadData, _inFMUVersion);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_FMI_checkFMIVersion(threadData_t *threadData, modelica_string _inFMIVersion)
{
  modelica_boolean _success;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inFMIVersion;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
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
  _success = tmp1;
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_FMI_checkFMIVersion(threadData_t *threadData, modelica_metatype _inFMIVersion)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_FMI_checkFMIVersion(threadData, _inFMIVersion);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_string omc_FMI_getFMIVersion(threadData_t *threadData, modelica_metatype _inFMIInfo)
{
  modelica_string _fmiVersion = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fmiVersion has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFMIInfo;
    {
      modelica_string _version = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _version has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _version = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _version;
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
  _fmiVersion = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fmiVersion;
}

DLLDirection
modelica_string omc_FMI_getFMIType(threadData_t *threadData, modelica_metatype _inFMIInfo)
{
  modelica_string _fmiType = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fmiType has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFMIInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (0 != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          if (2 != tmp14) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta15) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmpMeta15)) != 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (1 != tmp17) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta18) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmpMeta18)) != 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          if (2 != tmp20) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT9), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          if (3 != tmp23) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT6;
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
  _fmiType = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fmiType;
}

DLLDirection
modelica_string omc_FMI_getFMIModelIdentifier(threadData_t *threadData, modelica_metatype _inFMIInfo)
{
  modelica_string _fmiModelIdentifier = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fmiModelIdentifier has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFMIInfo;
    {
      modelica_string _modelIdentifier = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _modelIdentifier has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _modelIdentifier = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _modelIdentifier;
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
  _fmiModelIdentifier = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fmiModelIdentifier;
}

