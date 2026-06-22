#include "omc_simulation_settings.h"
#include "NFSCodeCheck.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Illegal to instantiate partial class %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,40,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(38)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Invalid specialized class type '%s' for component %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,53,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(220)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,9,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,41,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "- NFSCodeCheck.checkInstanceRestriction failed on unknown item."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,63,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Found duplicate component\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,26,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Found a component with same name when looking for type %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,58,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(58)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Declaration of element %s causes recursive definition of class %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,66,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "From here:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,10,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(174)),_OMC_LIT0,_OMC_LIT15,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "%s is already redeclared in this scope."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,39,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(197)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Invalid redeclaration of %s %s as %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,37,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(40)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "public element"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,14,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "protected"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,9,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "protected element"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,17,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "public"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,6,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Redeclaration of %s %s %s is not allowed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,41,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(178)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,8,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "final"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,5,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Redeclaration with a new type requires '%s' to be replaceable."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,62,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(41)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "ignoreReplaceable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,17,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Sets whether to ignore replaceability or not when redeclaring."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,62,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT32,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT33,_OMC_LIT34,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "component"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,9,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "a "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,2,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "a component"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,11,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Recursive short class definition of %s in terms of %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,54,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(153)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#include "util/modelica.h"

#include "NFSCodeCheck_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkDuplicateRedeclarations2(threadData_t *threadData, modelica_string _inRedeclareName, modelica_metatype _inRedeclareInfo, modelica_metatype _inRedeclarations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkDuplicateRedeclarations2(threadData_t *threadData, modelica_metatype _inRedeclareName, modelica_metatype _inRedeclareInfo, modelica_metatype _inRedeclarations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkDuplicateRedeclarations2,2,0) {(void*) boxptr_NFSCodeCheck_checkDuplicateRedeclarations2,0}};
#define boxvar_NFSCodeCheck_checkDuplicateRedeclarations2 MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkDuplicateRedeclarations2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationVisibility(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inOriginalVisibility, modelica_metatype _inNewVisibility, modelica_metatype _inOriginInfo, modelica_metatype _inNewInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationVisibility(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inOriginalVisibility, modelica_metatype _inNewVisibility, modelica_metatype _inOriginInfo, modelica_metatype _inNewInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationVisibility,2,0) {(void*) boxptr_NFSCodeCheck_checkRedeclarationVisibility,0}};
#define boxvar_NFSCodeCheck_checkRedeclarationVisibility MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationVisibility)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationVariability(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inVariability, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationVariability(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inVariability, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationVariability,2,0) {(void*) boxptr_NFSCodeCheck_checkRedeclarationVariability,0}};
#define boxvar_NFSCodeCheck_checkRedeclarationVariability MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationVariability)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationFinal(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inFinal, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationFinal(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inFinal, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationFinal,2,0) {(void*) boxptr_NFSCodeCheck_checkRedeclarationFinal,0}};
#define boxvar_NFSCodeCheck_checkRedeclarationFinal MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkRedeclarationFinal)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData_t *threadData, modelica_string _inName, modelica_metatype _inReplaceable, modelica_metatype _inType1, modelica_metatype _inType2, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inReplaceable, modelica_metatype _inType1, modelica_metatype _inType2, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkCompRedeclarationReplaceable,2,0) {(void*) boxptr_NFSCodeCheck_checkCompRedeclarationReplaceable,0}};
#define boxvar_NFSCodeCheck_checkCompRedeclarationReplaceable MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkCompRedeclarationReplaceable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData_t *threadData, modelica_string _inName, modelica_metatype _inReplaceable, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inReplaceable, modelica_metatype _inOriginInfo, modelica_metatype _inInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkClassRedeclarationReplaceable,2,0) {(void*) boxptr_NFSCodeCheck_checkClassRedeclarationReplaceable,0}};
#define boxvar_NFSCodeCheck_checkClassRedeclarationReplaceable MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_checkClassRedeclarationReplaceable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_isSelfReference(threadData_t *threadData, modelica_string _inTypeName, modelica_metatype _inTypePath, modelica_metatype _inReferencedName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_isSelfReference(threadData_t *threadData, modelica_metatype _inTypeName, modelica_metatype _inTypePath, modelica_metatype _inReferencedName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeCheck_isSelfReference,2,0) {(void*) boxptr_NFSCodeCheck_isSelfReference,0}};
#define boxvar_NFSCodeCheck_isSelfReference MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeCheck_isSelfReference)

DLLDirection
void omc_NFSCodeCheck_checkPartialInstance(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inItem;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _name has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,8) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,0) == 0) goto tmp2_end;
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_name, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta8, _inInfo);
          goto goto_1;
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
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkInstanceRestriction(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _inPrefix, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inItem;
    {
      modelica_metatype _res = NULL;
      modelica_string _pre_str = NULL;
      modelica_string _res_str = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _res has no default value.
      // _pre_str has no default value.
      // _res_str has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,8) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 6));
          
          _res = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_SCodeUtil_isInstantiableClassRestriction(threadData, _res);
          if (1 /* true */ != tmp7) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,8) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
          
          _res = tmpMeta9;
          /* Pattern matching succeeded */
          _res_str = omc_SCodeDump_restrictionStringPP(threadData, _res);

          _pre_str = omc_NFInstDump_prefixStr(threadData, _inPrefix);

          tmpMeta10 = mmc_mk_cons(_res_str, mmc_mk_cons(_pre_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT5, tmpMeta10, _inInfo);
          goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_boolean tmp11;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_Flags_isSet(threadData, _OMC_LIT8);
          if (1 /* true */ != tmp11) goto goto_1;

          omc_Debug_traceln(threadData, _OMC_LIT9);
          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 3) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkComponentsEqual(threadData_t *threadData, modelica_metatype _inComponent1, modelica_metatype _inComponent2)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT10),stdout);
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
  return;
}

DLLDirection
modelica_boolean omc_NFSCodeCheck_checkIdentNotEqTypeName(threadData_t *threadData, modelica_string _inIdent, modelica_metatype _inTypeName, modelica_metatype _inInfo)
{
  modelica_boolean _outIsNotEq;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsNotEq has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inIdent;
    tmp4_2 = _inTypeName;
    {
      modelica_string _id = NULL;
      modelica_string _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _ty has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _ty = tmpMeta7;
          _id = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_id, _ty));
          if (1 /* true */ != tmp8) goto goto_2;

          tmpMeta9 = mmc_mk_cons(_id, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT12, tmpMeta9, _inInfo);
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outIsNotEq = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsNotEq;
}
modelica_metatype boxptr_NFSCodeCheck_checkIdentNotEqTypeName(threadData_t *threadData, modelica_metatype _inIdent, modelica_metatype _inTypeName, modelica_metatype _inInfo)
{
  modelica_boolean _outIsNotEq;
  modelica_metatype out_outIsNotEq;
  _outIsNotEq = omc_NFSCodeCheck_checkIdentNotEqTypeName(threadData, _inIdent, _inTypeName, _inInfo);
  out_outIsNotEq = mmc_mk_icon(_outIsNotEq);
  return out_outIsNotEq;
}

DLLDirection
void omc_NFSCodeCheck_checkRecursiveComponentDeclaration(threadData_t *threadData, modelica_string _inComponentName, modelica_metatype _inComponentInfo, modelica_metatype _inTypeEnv, modelica_metatype _inTypeItem, modelica_metatype _inComponentEnv)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;
    tmp3_1 = _inTypeEnv;
    tmp3_2 = _inComponentEnv;
    {
      modelica_string _cls_name = NULL;
      modelica_string _ty_name = NULL;
      modelica_metatype _tree = NULL;
      modelica_metatype _el = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cls_name has no default value.
      // _ty_name has no default value.
      // _tree has no default value.
      // _el has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp5;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = omc_NFSCodeEnv_envPrefixOf(threadData, _inTypeEnv, _inComponentEnv);
          if (0 /* false */ != tmp5) goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta6 = MMC_CAR(tmp3_2);
          tmpMeta7 = MMC_CDR(tmp3_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (optionNone(tmpMeta8)) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (listEmpty(tmpMeta7)) goto tmp2_end;
          tmpMeta10 = MMC_CAR(tmpMeta7);
          tmpMeta11 = MMC_CDR(tmpMeta7);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          
          _cls_name = tmpMeta9;
          _tree = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta13 = omc_NFSCodeEnv_EnvTree_get(threadData, _tree, _cls_name);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,3) == 0) goto goto_1;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          _el = tmpMeta14;

          /* Pattern-matching assignment */
          tmp15 = omc_SCodeUtil_isFunction(threadData, _el);
          if (1 /* true */ != tmp15) goto goto_1;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta16 = MMC_CAR(tmp3_2);
          tmpMeta17 = MMC_CDR(tmp3_2);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (optionNone(tmpMeta18)) goto tmp2_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          if (listEmpty(tmpMeta17)) goto tmp2_end;
          tmpMeta20 = MMC_CAR(tmpMeta17);
          tmpMeta21 = MMC_CDR(tmpMeta17);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          
          _cls_name = tmpMeta19;
          _tree = tmpMeta22;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta23 = omc_NFSCodeEnv_EnvTree_get(threadData, _tree, _cls_name);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,1,3) == 0) goto goto_1;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          _el = tmpMeta24;

          /* Pattern-matching assignment */
          tmp25 = omc_SCodeUtil_isUniontype(threadData, _el);
          if (1 /* true */ != tmp25) goto goto_1;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          _ty_name = omc_NFSCodeEnv_getItemName(threadData, _inTypeItem);

          tmpMeta26 = mmc_mk_cons(_inComponentName, mmc_mk_cons(_ty_name, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT14, tmpMeta26, _inComponentInfo);
          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 5) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkDuplicateRedeclarations2(threadData_t *threadData, modelica_string _inRedeclareName, modelica_metatype _inRedeclareInfo, modelica_metatype _inRedeclarations)
{
  modelica_boolean _outIsDuplicate;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsDuplicate has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inRedeclarations;
    {
      modelica_metatype _redecl = NULL;
      modelica_metatype _rest_redecls = NULL;
      modelica_string _el_name = NULL;
      modelica_metatype _el_info = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _redecl has no default value.
      // _rest_redecls has no default value.
      // _el_name has no default value.
      // _el_info has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _redecl = tmpMeta6;
          /* Pattern matching succeeded */
          _el_name = omc_NFSCodeEnv_getRedeclarationNameInfo(threadData, _redecl ,&_el_info);

          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_inRedeclareName, _el_name));
          if (1 /* true */ != tmp8) goto goto_2;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Error_addSourceMessage(threadData, _OMC_LIT17, tmpMeta9, _el_info);

          tmpMeta10 = mmc_mk_cons(_inRedeclareName, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT19, tmpMeta10, _inRedeclareInfo);
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest_redecls = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_NFSCodeCheck_checkDuplicateRedeclarations2(threadData, _inRedeclareName, _inRedeclareInfo, _rest_redecls);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outIsDuplicate = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsDuplicate;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkDuplicateRedeclarations2(threadData_t *threadData, modelica_metatype _inRedeclareName, modelica_metatype _inRedeclareInfo, modelica_metatype _inRedeclarations)
{
  modelica_boolean _outIsDuplicate;
  modelica_metatype out_outIsDuplicate;
  _outIsDuplicate = omc_NFSCodeCheck_checkDuplicateRedeclarations2(threadData, _inRedeclareName, _inRedeclareInfo, _inRedeclarations);
  out_outIsDuplicate = mmc_mk_icon(_outIsDuplicate);
  return out_outIsDuplicate;
}

DLLDirection
void omc_NFSCodeCheck_checkDuplicateRedeclarations(threadData_t *threadData, modelica_metatype _inRedeclare, modelica_metatype _inRedeclarations)
{
  modelica_string _el_name = NULL;
  modelica_metatype _el_info = NULL;
  modelica_boolean tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _el_name has no default value.
  // _el_info has no default value.
  _el_name = omc_NFSCodeEnv_getRedeclarationNameInfo(threadData, _inRedeclare ,&_el_info);

  /* Pattern-matching assignment */
  tmp1 = omc_NFSCodeCheck_checkDuplicateRedeclarations2(threadData, _el_name, _el_info, _inRedeclarations);
  if (0 /* false */ != tmp1) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationVisibility(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inOriginalVisibility, modelica_metatype _inNewVisibility, modelica_metatype _inOriginInfo, modelica_metatype _inNewInfo)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inOriginalVisibility;
    tmp4_2 = _inNewVisibility;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_OMC_LIT22, mmc_mk_cons(_inName, mmc_mk_cons(_OMC_LIT23, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta7 = mmc_mk_cons(_inNewInfo, mmc_mk_cons(_inOriginInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT21, tmpMeta6, tmpMeta7);
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_OMC_LIT24, mmc_mk_cons(_inName, mmc_mk_cons(_OMC_LIT25, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta9 = mmc_mk_cons(_inNewInfo, mmc_mk_cons(_inOriginInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT21, tmpMeta8, tmpMeta9);
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationVisibility(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inOriginalVisibility, modelica_metatype _inNewVisibility, modelica_metatype _inOriginInfo, modelica_metatype _inNewInfo)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFSCodeCheck_checkRedeclarationVisibility(threadData, _inName, _inType, _inOriginalVisibility, _inNewVisibility, _inOriginInfo, _inNewInfo);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationVariability(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inVariability, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVariability;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_OMC_LIT28, mmc_mk_cons(_inType, mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta7 = mmc_mk_cons(_inOriginInfo, mmc_mk_cons(_inInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT27, tmpMeta6, tmpMeta7);
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationVariability(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inVariability, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFSCodeCheck_checkRedeclarationVariability(threadData, _inName, _inType, _inVariability, _inOriginInfo, _inInfo);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkRedeclarationFinal(threadData_t *threadData, modelica_string _inName, modelica_string _inType, modelica_metatype _inFinal, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFinal;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_OMC_LIT29, mmc_mk_cons(_inType, mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta7 = mmc_mk_cons(_inOriginInfo, mmc_mk_cons(_inInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT27, tmpMeta6, tmpMeta7);
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkRedeclarationFinal(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inType, modelica_metatype _inFinal, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFSCodeCheck_checkRedeclarationFinal(threadData, _inName, _inType, _inFinal, _inOriginInfo, _inInfo);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData_t *threadData, modelica_string _inName, modelica_metatype _inReplaceable, modelica_metatype _inType1, modelica_metatype _inType2, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inReplaceable;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_pathEqual(threadData, omc_AbsynUtil_typeSpecPath(threadData, _inType1), omc_AbsynUtil_typeSpecPath(threadData, _inType2))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_Flags_getConfigBool(threadData, _OMC_LIT36))) goto tmp3_end;
          tmpMeta6 = mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta7 = mmc_mk_cons(_inOriginInfo, mmc_mk_cons(_inInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT31, tmpMeta6, tmpMeta7);
          goto goto_2;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inReplaceable, modelica_metatype _inType1, modelica_metatype _inType2, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData, _inName, _inReplaceable, _inType1, _inType2, _inOriginInfo, _inInfo);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData_t *threadData, modelica_string _inName, modelica_metatype _inReplaceable, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isValid has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inReplaceable;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_Flags_getConfigBool(threadData, _OMC_LIT36))) goto tmp3_end;
          tmpMeta6 = mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta7 = mmc_mk_cons(_inOriginInfo, mmc_mk_cons(_inInfo, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT31, tmpMeta6, tmpMeta7);
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _isValid = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inReplaceable, modelica_metatype _inOriginInfo, modelica_metatype _inInfo)
{
  modelica_boolean _isValid;
  modelica_metatype out_isValid;
  _isValid = omc_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData, _inName, _inReplaceable, _inOriginInfo, _inInfo);
  out_isValid = mmc_mk_icon(_isValid);
  return out_isValid;
}

DLLDirection
void omc_NFSCodeCheck_checkRedeclaredElementPrefix(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _inReplacement, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = _inItem;
    tmp3_2 = _inReplacement;
    {
      modelica_metatype _repl = NULL;
      modelica_metatype _fin = NULL;
      modelica_string _name = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _res = NULL;
      modelica_string _ty = NULL;
      modelica_metatype _ty1 = NULL;
      modelica_metatype _ty2 = NULL;
      modelica_boolean _ok;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _repl has no default value.
      // _fin has no default value.
      // _name has no default value.
      // _info has no default value.
      // _var has no default value.
      // _res has no default value.
      // _ty has no default value.
      // _ty1 has no default value.
      // _ty2 has no default value.
      // _ok has no default value.
      tmp3 = 0;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,8) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 6));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 5));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 9));
          
          _ty2 = tmpMeta6;
          _name = tmpMeta8;
          _fin = tmpMeta10;
          _repl = tmpMeta11;
          _var = tmpMeta13;
          _ty1 = tmpMeta14;
          _info = tmpMeta15;
          /* Pattern matching succeeded */
          _ty = _OMC_LIT37;

          _ok = omc_NFSCodeCheck_checkCompRedeclarationReplaceable(threadData, _name, _repl, _ty1, _ty2, _inInfo, _info);

          _ok = (omc_NFSCodeCheck_checkRedeclarationFinal(threadData, _name, _ty, _fin, _inInfo, _info) && _ok);

          _ok = (omc_NFSCodeCheck_checkRedeclarationVariability(threadData, _name, _ty, _var, _inInfo, _info) && _ok);

          /* Pattern-matching assignment */
          tmp16 = _ok;
          if (1 /* true */ != tmp16) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_boolean tmp25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,8) == 0) goto tmp2_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,2,8) == 0) goto tmp2_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 6));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 6));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 9));
          
          _name = tmpMeta19;
          _fin = tmpMeta21;
          _repl = tmpMeta22;
          _res = tmpMeta23;
          _info = tmpMeta24;
          /* Pattern matching succeeded */
          _ty = omc_SCodeDump_restrictionStringPP(threadData, _res);

          _ok = omc_NFSCodeCheck_checkClassRedeclarationReplaceable(threadData, _name, _repl, _inInfo, _info);

          _ok = (omc_NFSCodeCheck_checkRedeclarationFinal(threadData, _name, _ty, _fin, _inInfo, _info) && _ok);

          /* Pattern-matching assignment */
          tmp25 = _ok;
          if (1 /* true */ != tmp25) goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,2,8) == 0) goto tmp2_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,3,8) == 0) goto tmp2_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 9));
          
          _res = tmpMeta26;
          _name = tmpMeta28;
          _info = tmpMeta29;
          /* Pattern matching succeeded */
          _ty = omc_SCodeDump_restrictionStringPP(threadData, _res);

          tmpMeta30 = stringAppend(_OMC_LIT38,_ty);
          _ty = tmpMeta30;

          tmpMeta31 = mmc_mk_cons(_OMC_LIT37, mmc_mk_cons(_name, mmc_mk_cons(_ty, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta32 = mmc_mk_cons(_inInfo, mmc_mk_cons(_info, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT21, tmpMeta31, tmpMeta32);
          goto goto_1;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_2,3,8) == 0) goto tmp2_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,2,8) == 0) goto tmp2_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 6));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 9));
          
          _name = tmpMeta33;
          _res = tmpMeta35;
          _info = tmpMeta36;
          /* Pattern matching succeeded */
          _ty = omc_SCodeDump_restrictionStringPP(threadData, _res);

          tmpMeta37 = mmc_mk_cons(_ty, mmc_mk_cons(_name, mmc_mk_cons(_OMC_LIT39, MMC_REFSTRUCTLIT(mmc_nil))));
          tmpMeta38 = mmc_mk_cons(_inInfo, mmc_mk_cons(_info, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addMultiSourceMessage(threadData, _OMC_LIT21, tmpMeta37, tmpMeta38);
          goto goto_1;
          goto tmp2_done;
        }
        case 4: {
          
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
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkModifierIfRedeclare(threadData_t *threadData, modelica_metatype _inItem, modelica_metatype _inModifier, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inModifier;
    {
      modelica_metatype _el = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _el has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          _el = tmpMeta5;
          /* Pattern matching succeeded */
          omc_NFSCodeCheck_checkRedeclaredElementPrefix(threadData, _inItem, _el, _inInfo);
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
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkRedeclareModifier2(threadData_t *threadData, modelica_metatype _inModifier, modelica_metatype _inBaseClass, modelica_metatype _inEnv)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inModifier;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _info = NULL;
      modelica_string _name = NULL;
      modelica_string _ty_str = NULL;
      modelica_metatype _ty_path = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ty has no default value.
      // _info has no default value.
      // _name has no default value.
      // _ty_str has no default value.
      // _ty_path has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _name = tmpMeta5;
          _ty = tmpMeta7;
          /* Pattern matching succeeded */
          _ty_path = omc_AbsynUtil_typeSpecPath(threadData, _ty);

          /* Pattern-matching assignment */
          tmp8 = omc_NFSCodeCheck_isSelfReference(threadData, _name, _inBaseClass, _ty_path);
          if (0 /* false */ != tmp8) goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,8) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,2,3) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 9));
          _name = tmpMeta9;
          _ty = tmpMeta11;
          _info = tmpMeta12;
          /* Pattern matching succeeded */
          _ty_str = omc_Dump_unparseTypeSpec(threadData, _ty);

          tmpMeta13 = mmc_mk_cons(_name, mmc_mk_cons(_ty_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT41, tmpMeta13, _info);
          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkRedeclareModifier(threadData_t *threadData, modelica_metatype _inModifier, modelica_metatype _inBaseClass, modelica_metatype _inEnv)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inModifier;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _e has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,8) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp2_end;
          
          _e = tmpMeta5;
          /* Pattern matching succeeded */
          omc_NFSCodeCheck_checkRedeclareModifier2(threadData, _e, _inBaseClass, _inEnv);
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
  return;
}

DLLDirection
void omc_NFSCodeCheck_checkClassExtendsReplaceability(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inOriginInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inBaseClass;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,2,8) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp2_end;
          
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
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFSCodeCheck_isSelfReference(threadData_t *threadData, modelica_string _inTypeName, modelica_metatype _inTypePath, modelica_metatype _inReferencedName)
{
  modelica_boolean _selfRef;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _selfRef has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inTypePath;
    tmp4_2 = _inReferencedName;
    {
      modelica_metatype _p1 = NULL;
      modelica_metatype _p2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _p1 has no default value.
      // _p2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _p2 = tmpMeta6;
          _p1 = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inTypeName);
          tmp1 = omc_AbsynUtil_pathEqual(threadData, omc_AbsynUtil_joinPaths(threadData, _p1, tmpMeta7), _p2);
          goto tmp3_done;
        }
        case 1: {
          
          _p2 = tmp4_2;
          /* Pattern matching succeeded */
          tmp1 = (stringEqual(omc_AbsynUtil_pathLastIdent(threadData, _inTypePath), omc_AbsynUtil_pathFirstIdent(threadData, _p2)));
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
  _selfRef = tmp1;
  _return: OMC_LABEL_UNUSED
  return _selfRef;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSCodeCheck_isSelfReference(threadData_t *threadData, modelica_metatype _inTypeName, modelica_metatype _inTypePath, modelica_metatype _inReferencedName)
{
  modelica_boolean _selfRef;
  modelica_metatype out_selfRef;
  _selfRef = omc_NFSCodeCheck_isSelfReference(threadData, _inTypeName, _inTypePath, _inReferencedName);
  out_selfRef = mmc_mk_icon(_selfRef);
  return out_selfRef;
}

DLLDirection
void omc_NFSCodeCheck_checkRecursiveShortDefinition(threadData_t *threadData, modelica_metatype _inTypeSpec, modelica_string _inTypeName, modelica_metatype _inTypeEnv, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inTypeEnv;
    {
      modelica_metatype _ts_path = NULL;
      modelica_metatype _ty_path = NULL;
      modelica_string _ty = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ts_path has no default value.
      // _ty_path has no default value.
      // _ty has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          /* Pattern matching succeeded */
          _ts_path = omc_AbsynUtil_typeSpecPath(threadData, _inTypeSpec);

          _ty_path = omc_NFSCodeEnv_getEnvPath(threadData, _inTypeEnv);

          /* Pattern-matching assignment */
          tmp7 = omc_NFSCodeCheck_isSelfReference(threadData, _inTypeName, _ty_path, _ts_path);
          if (0 /* false */ != tmp7) goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _ty = omc_Dump_unparseTypeSpec(threadData, _inTypeSpec);

          tmpMeta8 = mmc_mk_cons(_inTypeName, mmc_mk_cons(_ty, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT41, tmpMeta8, _inInfo);
          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 3) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

