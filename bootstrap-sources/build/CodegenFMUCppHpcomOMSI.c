#include "omc_simulation_settings.h"
#include "CodegenFMUCppHpcomOMSI.h"
#define _OMC_LIT0_data "hpcomCode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,9,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "openmp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,6,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Sets the code-type produced by hpcom (openmp | pthreads | pthreads_spin | tbb | mpi). Default: openmp."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,102,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(48)),_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,3,3) {&Tpl_Text_MEM__TEXT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "pthreads"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,8,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "pthreads_spin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,13,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " -lboost_thread"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,15,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "__zDot"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,6,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "hpcom cpp-runtime"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,17,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "modelDescription.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,20,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,0,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "OMCpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,5,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "WriteOutput.h"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,13,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "FMU.h"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,5,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "FMU.cpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,7,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "_FMU.makefile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,13,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "CalcHelperMain.cpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,18,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT27}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,7) {&SimCodeFunction_Context_OTHER__CONTEXT__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "-1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,2,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data ".cpp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,4,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "gendebugsymbols"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,15,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Generate code with debugging symbols."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,37,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(69)),_OMC_LIT34,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ".h"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,2,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#include "util/modelica.h"

#include "CodegenFMUCppHpcomOMSI_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMUCppHpcomOMSI_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMUCppHpcomOMSI_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_fun__53,2,0) {(void*) boxptr_CodegenFMUCppHpcomOMSI_fun__53,0}};
#define boxvar_CodegenFMUCppHpcomOMSI_fun__53 MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_fun__53)

DLLDirection
modelica_metatype omc_CodegenFMUCppHpcomOMSI_fmuMakefile(threadData_t *threadData, modelica_metatype _txt, modelica_string _a_target, modelica_metatype _a_simCode, modelica_metatype _a_extraFuncs, modelica_metatype _a_extraFuncsDecl, modelica_metatype _a_extraFuncsNamespace, modelica_string _a_FMUVersion, modelica_metatype *out_out_a_extraFuncs, modelica_metatype *out_out_a_extraFuncsDecl, modelica_metatype *out_out_a_extraFuncsNamespace)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _out_a_extraFuncs = NULL;
  modelica_metatype _out_a_extraFuncsDecl = NULL;
  modelica_metatype _out_a_extraFuncsNamespace = NULL;
  modelica_boolean _ret_8;
  modelica_boolean _ret_7;
  modelica_boolean _ret_6;
  modelica_metatype _l_additionalLinkerFlags__MSVC = NULL;
  modelica_metatype _l_additionalLinkerFlags__GCC = NULL;
  modelica_metatype _l_additionalCFlags__MSVC = NULL;
  modelica_metatype _l_additionalCFlags__GCC = NULL;
  modelica_string _ret_1 = NULL;
  modelica_metatype _l_type = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _out_a_extraFuncs has no default value.
  // _out_a_extraFuncsDecl has no default value.
  // _out_a_extraFuncsNamespace has no default value.
  // _ret_8 has no default value.
  // _ret_7 has no default value.
  // _ret_6 has no default value.
  // _l_additionalLinkerFlags__MSVC has no default value.
  // _l_additionalLinkerFlags__GCC has no default value.
  // _l_additionalCFlags__MSVC has no default value.
  // _l_additionalCFlags__GCC has no default value.
  // _ret_1 has no default value.
  // _l_type has no default value.
  _ret_1 = omc_Flags_getConfigString(threadData, _OMC_LIT5);

  _l_type = omc_Tpl_writeStr(threadData, _OMC_LIT6, _ret_1);

  _l_additionalCFlags__GCC = _OMC_LIT6;

  _l_additionalCFlags__MSVC = _OMC_LIT6;

  _l_additionalLinkerFlags__GCC = _OMC_LIT6;

  _l_additionalLinkerFlags__MSVC = _OMC_LIT6;

  _ret_6 = (stringEqual(omc_Tpl_textString(threadData, _l_type), _OMC_LIT7));

  _ret_7 = (stringEqual(omc_Tpl_textString(threadData, _l_type), _OMC_LIT8));

  _ret_8 = (_ret_6 || _ret_7);

  _l_additionalLinkerFlags__GCC = omc_CodegenFMUCppHpcomOMSI_fun__53(threadData, _l_additionalLinkerFlags__GCC, _ret_8);

  _out_txt = omc_CodegenCppHpcomOMSI_getAdditionalMakefileFlags(threadData, _txt, _l_additionalCFlags__GCC, _l_additionalCFlags__MSVC, _l_additionalLinkerFlags__GCC, _l_additionalLinkerFlags__MSVC ,&_l_additionalCFlags__GCC ,&_l_additionalCFlags__MSVC ,&_l_additionalLinkerFlags__GCC ,&_l_additionalLinkerFlags__MSVC);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_CodegenFMUCppOMSI_fmuMakefile(threadData, _out_txt, _a_target, _a_simCode, _a_extraFuncs, _a_extraFuncsDecl, _a_extraFuncsNamespace, _a_FMUVersion, omc_Tpl_textString(threadData, _l_additionalLinkerFlags__GCC), omc_Tpl_textString(threadData, _l_additionalLinkerFlags__MSVC), omc_Tpl_textString(threadData, _l_additionalCFlags__GCC), omc_Tpl_textString(threadData, _l_additionalCFlags__MSVC) ,&_out_a_extraFuncs ,&_out_a_extraFuncsDecl ,&_out_a_extraFuncsNamespace);
  _return: OMC_LABEL_UNUSED
  if (out_out_a_extraFuncs) { *out_out_a_extraFuncs = _out_a_extraFuncs; }
  if (out_out_a_extraFuncsDecl) { *out_out_a_extraFuncsDecl = _out_a_extraFuncsDecl; }
  if (out_out_a_extraFuncsNamespace) { *out_out_a_extraFuncsNamespace = _out_a_extraFuncsNamespace; }
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CodegenFMUCppHpcomOMSI_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_boolean _in_mArg)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_mArg;
    {
      modelica_metatype _txt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT10);
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CodegenFMUCppHpcomOMSI_fun__53(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_mArg)
{
  modelica_integer tmp1;
  modelica_metatype _out_txt = NULL;
  tmp1 = mmc_unbox_integer(_in_mArg);
  _out_txt = omc_CodegenFMUCppHpcomOMSI_fun__53(threadData, _in_txt, tmp1);
  /* skip box _out_txt; Tpl.Text */
  return _out_txt;
}

DLLDirection
modelica_metatype omc_CodegenFMUCppHpcomOMSI_translateModel(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_FMUVersion, modelica_string _in_a_FMUType)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_string tmp4_3;modelica_string tmp4_4;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_simCode;
    tmp4_3 = _in_a_FMUVersion;
    tmp4_4 = _in_a_FMUType;
    {
      modelica_metatype _txt = NULL;
      modelica_string _a_FMUVersion = NULL;
      modelica_string _a_FMUType = NULL;
      modelica_metatype _i_varToArrayIndexMapping = NULL;
      modelica_metatype _i_hpcomData_schedules = NULL;
      modelica_metatype _i_allEquations = NULL;
      modelica_string _i_fileNamePrefix = NULL;
      modelica_metatype _i_simCode = NULL;
      modelica_metatype _i_hpcomData_hpcOmMemory = NULL;
      modelica_metatype _i_modelInfo = NULL;
      modelica_metatype _i_modelInfo_name = NULL;
      modelica_metatype _txt_46 = NULL;
      modelica_metatype _txt_45 = NULL;
      modelica_metatype _txt_44 = NULL;
      modelica_boolean _ret_43;
      modelica_metatype _txt_42 = NULL;
      modelica_metatype _txt_41 = NULL;
      modelica_metatype _txt_40 = NULL;
      modelica_metatype _txt_39 = NULL;
      modelica_metatype _txt_38 = NULL;
      modelica_metatype _txt_37 = NULL;
      modelica_metatype _txt_36 = NULL;
      modelica_metatype _txt_35 = NULL;
      modelica_metatype _txt_34 = NULL;
      modelica_metatype _txt_33 = NULL;
      modelica_metatype _txt_32 = NULL;
      modelica_metatype _txt_31 = NULL;
      modelica_metatype _txt_30 = NULL;
      modelica_metatype _txt_29 = NULL;
      modelica_metatype _txt_28 = NULL;
      modelica_metatype _txt_27 = NULL;
      modelica_metatype _txt_26 = NULL;
      modelica_metatype _txt_25 = NULL;
      modelica_metatype _txt_24 = NULL;
      modelica_metatype _txt_23 = NULL;
      modelica_metatype _txt_22 = NULL;
      modelica_metatype _txt_21 = NULL;
      modelica_metatype _txt_20 = NULL;
      modelica_metatype _txt_19 = NULL;
      modelica_metatype _txt_18 = NULL;
      modelica_metatype _txt_17 = NULL;
      modelica_metatype _txt_16 = NULL;
      modelica_metatype _txt_14 = NULL;
      modelica_metatype _l_numPreVars = NULL;
      modelica_metatype _l_numStringVars = NULL;
      modelica_metatype _l_numBoolVars = NULL;
      modelica_metatype _l_numIntVars = NULL;
      modelica_metatype _l_numRealVars = NULL;
      modelica_metatype _l_className = NULL;
      modelica_metatype _l_complexStartExpressions = NULL;
      modelica_metatype _l_extraFuncsDecl = NULL;
      modelica_metatype _l_extraFuncs = NULL;
      modelica_metatype _l_stateDerVectorName = NULL;
      modelica_string _ret_3 = NULL;
      modelica_metatype _l_target = NULL;
      modelica_string _ret_1 = NULL;
      modelica_metatype _l_guid = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _txt has no default value.
      // _a_FMUVersion has no default value.
      // _a_FMUType has no default value.
      // _i_varToArrayIndexMapping has no default value.
      // _i_hpcomData_schedules has no default value.
      // _i_allEquations has no default value.
      // _i_fileNamePrefix has no default value.
      // _i_simCode has no default value.
      // _i_hpcomData_hpcOmMemory has no default value.
      // _i_modelInfo has no default value.
      // _i_modelInfo_name has no default value.
      // _txt_46 has no default value.
      // _txt_45 has no default value.
      // _txt_44 has no default value.
      // _ret_43 has no default value.
      // _txt_42 has no default value.
      // _txt_41 has no default value.
      // _txt_40 has no default value.
      // _txt_39 has no default value.
      // _txt_38 has no default value.
      // _txt_37 has no default value.
      // _txt_36 has no default value.
      // _txt_35 has no default value.
      // _txt_34 has no default value.
      // _txt_33 has no default value.
      // _txt_32 has no default value.
      // _txt_31 has no default value.
      // _txt_30 has no default value.
      // _txt_29 has no default value.
      // _txt_28 has no default value.
      // _txt_27 has no default value.
      // _txt_26 has no default value.
      // _txt_25 has no default value.
      // _txt_24 has no default value.
      // _txt_23 has no default value.
      // _txt_22 has no default value.
      // _txt_21 has no default value.
      // _txt_20 has no default value.
      // _txt_19 has no default value.
      // _txt_18 has no default value.
      // _txt_17 has no default value.
      // _txt_16 has no default value.
      // _txt_14 has no default value.
      // _l_numPreVars has no default value.
      // _l_numStringVars has no default value.
      // _l_numBoolVars has no default value.
      // _l_numIntVars has no default value.
      // _l_numRealVars has no default value.
      // _l_className has no default value.
      // _l_complexStartExpressions has no default value.
      // _l_extraFuncsDecl has no default value.
      // _l_extraFuncs has no default value.
      // _l_stateDerVectorName has no default value.
      // _ret_3 has no default value.
      // _l_target has no default value.
      // _ret_1 has no default value.
      // _l_guid has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 32));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 37));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 40));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 42));
          
          _txt = tmp4_1;
          _i_simCode = tmp4_2;
          _i_modelInfo = tmpMeta6;
          _i_modelInfo_name = tmpMeta7;
          _i_allEquations = tmpMeta8;
          _i_fileNamePrefix = tmpMeta10;
          _i_hpcomData_schedules = tmpMeta12;
          _i_hpcomData_hpcOmMemory = tmpMeta13;
          _i_varToArrayIndexMapping = tmpMeta14;
          _a_FMUVersion = tmp4_3;
          _a_FMUType = tmp4_4;
          /* Pattern matching succeeded */
          _ret_1 = omc_System_getUUIDStr(threadData);

          _l_guid = omc_Tpl_writeStr(threadData, _OMC_LIT6, _ret_1);

          _ret_3 = omc_Config_simulationCodeTarget(threadData);

          _l_target = omc_Tpl_writeStr(threadData, _OMC_LIT6, _ret_3);

          _l_stateDerVectorName = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT12);

          _l_extraFuncs = _OMC_LIT6;

          _l_extraFuncsDecl = _OMC_LIT6;

          _l_complexStartExpressions = _OMC_LIT6;

          _l_className = omc_CodegenCppOMSI_lastIdentOfPath(threadData, _OMC_LIT6, _i_modelInfo_name);

          _l_numRealVars = omc_CodegenCppHpcomOMSI_numRealvarsHpcom(threadData, _OMC_LIT6, _i_modelInfo, _i_hpcomData_hpcOmMemory);

          _l_numIntVars = omc_CodegenCppHpcomOMSI_numIntvarsHpcom(threadData, _OMC_LIT6, _i_modelInfo, _i_hpcomData_hpcOmMemory);

          _l_numBoolVars = omc_CodegenCppHpcomOMSI_numBoolvarsHpcom(threadData, _OMC_LIT6, _i_modelInfo, _i_hpcomData_hpcOmMemory);

          _l_numStringVars = omc_CodegenCppHpcomOMSI_numStringvarsHpcom(threadData, _OMC_LIT6, _i_modelInfo, _i_hpcomData_hpcOmMemory);

          _l_numPreVars = omc_CodegenCppHpcomOMSI_numPreVarsHpcom(threadData, _OMC_LIT6, _i_modelInfo, _i_hpcomData_hpcOmMemory);

          _txt_14 = omc_CodegenCppInit_modelInitXMLFile(threadData, _OMC_LIT6, _i_simCode, omc_Tpl_textString(threadData, _l_numRealVars), omc_Tpl_textString(threadData, _l_numIntVars), omc_Tpl_textString(threadData, _l_numBoolVars), omc_Tpl_textString(threadData, _l_numStringVars), _a_FMUVersion, _a_FMUType, omc_Tpl_textString(threadData, _l_guid), 1 /* true */, _OMC_LIT13, _l_complexStartExpressions, _l_stateDerVectorName ,&_l_complexStartExpressions ,&_l_stateDerVectorName);

          omc_Tpl_textFile(threadData, _txt_14, _OMC_LIT14);

          omc_CodegenCppOMSI_translateModel(threadData, _OMC_LIT6, _i_simCode);

          _txt_16 = omc_CodegenFMUCppOMSI_fmuWriteOutputHeaderFile(threadData, _OMC_LIT6, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16) ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_17 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_17 = omc_Tpl_writeStr(threadData, _txt_17, _i_fileNamePrefix);

          _txt_17 = omc_Tpl_writeTok(threadData, _txt_17, _OMC_LIT20);

          omc_Tpl_textFile(threadData, _txt_16, omc_Tpl_textString(threadData, _txt_17));

          _txt_18 = omc_CodegenFMUCppOMSI_fmuModelHeaderFile(threadData, _OMC_LIT6, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), omc_Tpl_textString(threadData, _l_guid), _a_FMUVersion ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_19 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_19 = omc_Tpl_writeStr(threadData, _txt_19, _i_fileNamePrefix);

          _txt_19 = omc_Tpl_writeTok(threadData, _txt_19, _OMC_LIT22);

          omc_Tpl_textFile(threadData, _txt_18, omc_Tpl_textString(threadData, _txt_19));

          _txt_20 = omc_CodegenFMUCppOMSI_fmuModelCppFile(threadData, _OMC_LIT6, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), omc_Tpl_textString(threadData, _l_guid), _a_FMUVersion ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_21 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_21 = omc_Tpl_writeStr(threadData, _txt_21, _i_fileNamePrefix);

          _txt_21 = omc_Tpl_writeTok(threadData, _txt_21, _OMC_LIT24);

          omc_Tpl_textFile(threadData, _txt_20, omc_Tpl_textString(threadData, _txt_21));

          _txt_22 = omc_CodegenFMUCppHpcomOMSI_fmuMakefile(threadData, _OMC_LIT6, omc_Tpl_textString(threadData, _l_target), _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), _a_FMUVersion ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_23 = omc_Tpl_writeStr(threadData, _OMC_LIT6, _i_fileNamePrefix);

          _txt_23 = omc_Tpl_writeTok(threadData, _txt_23, _OMC_LIT26);

          omc_Tpl_textFile(threadData, _txt_22, omc_Tpl_textString(threadData, _txt_23));

          _txt_24 = omc_CodegenFMUCppOMSI_fmuCalcHelperMainfile(threadData, _OMC_LIT6, _i_simCode);

          _txt_25 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_25 = omc_Tpl_writeStr(threadData, _txt_25, _i_fileNamePrefix);

          _txt_25 = omc_Tpl_writeTok(threadData, _txt_25, _OMC_LIT28);

          omc_Tpl_textFile(threadData, _txt_24, omc_Tpl_textString(threadData, _txt_25));

          _txt_26 = omc_CodegenCppHpcomOMSI_updateHpcom(threadData, _OMC_LIT6, _i_allEquations, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), _OMC_LIT29, _l_stateDerVectorName, 0 /* false */ ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL ,&_l_stateDerVectorName);

          _txt_27 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numRealVars);

          _txt_27 = omc_Tpl_writeTok(threadData, _txt_27, _OMC_LIT31);

          _txt_28 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numIntVars);

          _txt_28 = omc_Tpl_writeTok(threadData, _txt_28, _OMC_LIT31);

          _txt_29 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numBoolVars);

          _txt_29 = omc_Tpl_writeTok(threadData, _txt_29, _OMC_LIT31);

          _txt_30 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numStringVars);

          _txt_30 = omc_Tpl_writeTok(threadData, _txt_30, _OMC_LIT31);

          _txt_31 = omc_CodegenCppHpcomOMSI_additionalHpcomConstructorDefinitions(threadData, _OMC_LIT6, _i_hpcomData_schedules);

          _txt_32 = omc_CodegenUtil_dotPath(threadData, _OMC_LIT6, _i_modelInfo_name);

          _txt_33 = omc_CodegenCppHpcomOMSI_additionalHpcomConstructorBodyStatements(threadData, _OMC_LIT6, _i_hpcomData_schedules, omc_Tpl_textString(threadData, _l_className), omc_Tpl_textString(threadData, _txt_32));

          _txt_34 = omc_CodegenCppHpcomOMSI_additionalHpcomDestructorBodyStatements(threadData, _OMC_LIT6, _i_hpcomData_schedules);

          _txt_35 = omc_CodegenCppOMSI_simulationCppFile(threadData, _OMC_LIT6, _i_simCode, _OMC_LIT29, _txt_26, _txt_27, _txt_28, _txt_29, _txt_30, _l_extraFuncs, _l_extraFuncsDecl, _l_className, _txt_31, _txt_33, _txt_34, _l_stateDerVectorName, 0 /* false */, omc_Tpl_textString(threadData, _l_numRealVars), omc_Tpl_textString(threadData, _l_numIntVars), omc_Tpl_textString(threadData, _l_numBoolVars), omc_Tpl_textString(threadData, _l_numStringVars), omc_Tpl_textString(threadData, _l_numPreVars) ,&_txt_26 ,&_txt_27 ,&_txt_28 ,&_txt_29 ,&_txt_30 ,&_l_extraFuncs ,&_l_extraFuncsDecl ,&_l_className ,&_txt_31 ,&_txt_33 ,&_txt_34 ,&_l_stateDerVectorName);

          _txt_36 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_36 = omc_Tpl_writeStr(threadData, _txt_36, _i_fileNamePrefix);

          _txt_36 = omc_Tpl_writeTok(threadData, _txt_36, _OMC_LIT33);

          omc_Tpl_textFile(threadData, _txt_35, omc_Tpl_textString(threadData, _txt_36));

          _txt_37 = omc_CodegenCppHpcomOMSI_additionalHpcomIncludes(threadData, _OMC_LIT6, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, _l_className, 0 /* false */ ,&_l_extraFuncs ,&_l_extraFuncsDecl ,&_l_className);

          _txt_38 = omc_CodegenCppHpcomOMSI_additionalHpcomProtectedMemberDeclaration(threadData, _OMC_LIT6, _i_simCode, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), 0 /* false */ ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_39 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numRealVars);

          _txt_39 = omc_Tpl_writeTok(threadData, _txt_39, _OMC_LIT31);

          _txt_40 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numIntVars);

          _txt_40 = omc_Tpl_writeTok(threadData, _txt_40, _OMC_LIT31);

          _txt_41 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numBoolVars);

          _txt_41 = omc_Tpl_writeTok(threadData, _txt_41, _OMC_LIT31);

          _txt_42 = omc_Tpl_writeText(threadData, _OMC_LIT6, _l_numStringVars);

          _txt_42 = omc_Tpl_writeTok(threadData, _txt_42, _OMC_LIT31);

          _ret_43 = omc_Flags_isSet(threadData, _OMC_LIT36);

          _txt_44 = omc_CodegenCppOMSI_memberVariableDefine(threadData, _OMC_LIT6, _i_modelInfo, _i_varToArrayIndexMapping, _txt_39, _txt_40, _txt_41, _txt_42, _ret_43, 0 /* false */ ,&_txt_39 ,&_txt_40 ,&_txt_41 ,&_txt_42);

          _txt_45 = omc_CodegenCppOMSI_simulationHeaderFile(threadData, _OMC_LIT6, _i_simCode, _OMC_LIT29, _l_extraFuncs, _l_extraFuncsDecl, omc_Tpl_strTokText(threadData, _OMC_LIT16), omc_Tpl_textString(threadData, _txt_37), _OMC_LIT15, omc_Tpl_textString(threadData, _txt_38), omc_Tpl_textString(threadData, _txt_44), 0 /* false */ ,&_l_extraFuncs ,&_l_extraFuncsDecl ,NULL);

          _txt_46 = omc_Tpl_writeTok(threadData, _OMC_LIT6, _OMC_LIT18);

          _txt_46 = omc_Tpl_writeStr(threadData, _txt_46, _i_fileNamePrefix);

          _txt_46 = omc_Tpl_writeTok(threadData, _txt_46, _OMC_LIT38);

          omc_Tpl_textFile(threadData, _txt_45, omc_Tpl_textString(threadData, _txt_46));
          tmpMeta1 = _txt;
          goto tmp3_done;
        }
        case 1: {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

