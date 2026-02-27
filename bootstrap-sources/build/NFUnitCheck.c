#include "omc_simulation_settings.h"
#include "NFUnitCheck.h"
#define _OMC_LIT0_data "fill"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,0,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "unit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4,0.0);
#define _OMC_LIT4 MMC_REFREALLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,4) {&NFUnit_Unit_MASTER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NONE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "- sub-expression \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,18,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\" has unit \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,12,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,1,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "\"\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,2,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "The following equation is INCONSISTENT due to specified unit information: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,74,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "The units of following sub-expressions need to be equal:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,57,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "jhagemann"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,9,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,7) {&NFInstNode_InstNode_NAME__NODE__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,6,3) {&NFComponentRef_CREF__desc,_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT22,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT25,1.0);
#define _OMC_LIT25 MMC_REFREALLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,9,3) {&NFUnit_Unit_UNIT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,1,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,3,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "sqrt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,4,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "time"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,4,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,2,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,3) {&DAE_Prefix_NOPRE__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT1,_OMC_LIT36,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT37,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "dumpEqUCStruct"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,14,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Dumps all the equations handled by the unit checker as tree-structure."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,70,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(110)),_OMC_LIT39,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\" has the Unit \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,16,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "dumpUnits"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,9,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Dumps all the calculated units."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,31,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT44,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "unitChecking"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,12,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Enable unit checking."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,21,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(31)),_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT49,_OMC_LIT50,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "checkModel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,10,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "Set when checkModel is used to turn on specific features for checking."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,70,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(29)),_OMC_LIT54,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT55,_OMC_LIT50,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,2,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "\n######## UnitCheck COMPLETED ########\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,39,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "NFUnitCheck.checkUnits: unit check module failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,48,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFUnitCheck.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,78,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT63_6,1.770631566e9);
#define _OMC_LIT63_6 MMC_REFREALLIT(_OMC_LIT_STRUCT63_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT62,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),MMC_IMMEDIATE(MMC_TAGFIXNUM(91)),_OMC_LIT63_6}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "NFUnitCheck.checkUnits"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,22,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#include "util/modelica.h"

#include "NFUnitCheck_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_parse(threadData_t *threadData, modelica_string _unitString, modelica_metatype _cref, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_parse,2,0) {(void*) boxptr_NFUnitCheck_parse,0}};
#define boxvar_NFUnitCheck_parse MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_parse)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_getUnitStringFromExp(threadData_t *threadData, modelica_metatype _unitExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_getUnitStringFromExp,2,0) {(void*) boxptr_NFUnitCheck_getUnitStringFromExp,0}};
#define boxvar_NFUnitCheck_getUnitStringFromExp MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_getUnitStringFromExp)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_convertUnitStringToUnit(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_convertUnitStringToUnit,2,0) {(void*) boxptr_NFUnitCheck_convertUnitStringToUnit,0}};
#define boxvar_NFUnitCheck_convertUnitStringToUnit MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_convertUnitStringToUnit)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_addUnit2HtU2S(threadData_t *threadData, modelica_string _name, modelica_metatype _unit, modelica_metatype _htU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_addUnit2HtU2S,2,0) {(void*) boxptr_NFUnitCheck_addUnit2HtU2S,0}};
#define boxvar_NFUnitCheck_addUnit2HtU2S MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_addUnit2HtU2S)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_addUnit2HtS2U(threadData_t *threadData, modelica_string _name, modelica_metatype _unit, modelica_metatype _inHtS2U);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_addUnit2HtS2U,2,0) {(void*) boxptr_NFUnitCheck_addUnit2HtS2U,0}};
#define boxvar_NFUnitCheck_addUnit2HtS2U MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_addUnit2HtS2U)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldCallArg1(threadData_t *threadData, modelica_metatype _args, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _inUnit, modelica_metatype _units, modelica_metatype _vars, modelica_string _fnName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldCallArg1,2,0) {(void*) boxptr_NFUnitCheck_foldCallArg1,0}};
#define boxvar_NFUnitCheck_foldCallArg1 MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldCallArg1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldCallArg(threadData_t *threadData, modelica_metatype _args, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldCallArg,2,0) {(void*) boxptr_NFUnitCheck_foldCallArg,0}};
#define boxvar_NFUnitCheck_foldCallArg MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldCallArg)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_Errorfunction2(threadData_t *threadData, modelica_metatype _inexpList, modelica_metatype _inHtU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_Errorfunction2,2,0) {(void*) boxptr_NFUnitCheck_Errorfunction2,0}};
#define boxvar_NFUnitCheck_Errorfunction2 MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_Errorfunction2)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_Errorfunction(threadData_t *threadData, modelica_metatype _inexpList, modelica_metatype _inEq, modelica_metatype _inHtU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_Errorfunction,2,0) {(void*) boxptr_NFUnitCheck_Errorfunction,0}};
#define boxvar_NFUnitCheck_Errorfunction MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_Errorfunction)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_updateHtCr2U(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _unit, modelica_metatype _htCr2U);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateHtCr2U,2,0) {(void*) boxptr_NFUnitCheck_updateHtCr2U,0}};
#define boxvar_NFUnitCheck_updateHtCr2U MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateHtCr2U)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFUnitCheck_unitTypesEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2, modelica_metatype _htCr2U, modelica_metatype *out_outUnit);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFUnitCheck_unitTypesEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2, modelica_metatype _htCr2U, modelica_metatype *out_outUnit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_unitTypesEqual,2,0) {(void*) boxptr_NFUnitCheck_unitTypesEqual,0}};
#define boxvar_NFUnitCheck_unitTypesEqual MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_unitTypesEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_parseFunctionUnits(threadData_t *threadData, modelica_string _funcName, modelica_metatype _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_parseFunctionUnits,2,0) {(void*) boxptr_NFUnitCheck_parseFunctionUnits,0}};
#define boxvar_NFUnitCheck_parseFunctionUnits MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_parseFunctionUnits)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_getCallUnits(threadData_t *threadData, modelica_string _fnName, modelica_metatype _call, modelica_metatype _fnCache, modelica_metatype *out_outputVars, modelica_metatype *out_inputUnits, modelica_metatype *out_outputUnits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_getCallUnits,2,0) {(void*) boxptr_NFUnitCheck_getCallUnits,0}};
#define boxvar_NFUnitCheck_getCallUnits MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_getCallUnits)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_insertUnitString(threadData_t *threadData, modelica_metatype _unit, modelica_metatype _htS2U, modelica_metatype _htU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitString,2,0) {(void*) boxptr_NFUnitCheck_insertUnitString,0}};
#define boxvar_NFUnitCheck_insertUnitString MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitString)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_insertUnitInEquationCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype __omcQ_24in_5Funit, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype *out_inconsistentUnits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitInEquationCall,2,0) {(void*) boxptr_NFUnitCheck_insertUnitInEquationCall,0}};
#define boxvar_NFUnitCheck_insertUnitInEquationCall MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitInEquationCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_insertUnitInEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Funit, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype *out_inconsistentUnits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitInEquation,2,0) {(void*) boxptr_NFUnitCheck_insertUnitInEquation,0}};
#define boxvar_NFUnitCheck_insertUnitInEquation MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_insertUnitInEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_makeNewCref(threadData_t *threadData, modelica_string _paramName, modelica_string _fnName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_makeNewCref,2,0) {(void*) boxptr_NFUnitCheck_makeNewCref,0}};
#define boxvar_NFUnitCheck_makeNewCref MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_makeNewCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldEquation2(threadData_t *threadData, modelica_metatype _eq, modelica_boolean _dumpEqInitStruct, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFUnitCheck_foldEquation2(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _dumpEqInitStruct, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldEquation2,2,0) {(void*) boxptr_NFUnitCheck_foldEquation2,0}};
#define boxvar_NFUnitCheck_foldEquation2 MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldEquation2)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_foldEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_boolean _dumpEqInitStruct);
PROTECTED_FUNCTION_STATIC void boxptr_NFUnitCheck_foldEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _dumpEqInitStruct);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldEquation,2,0) {(void*) boxptr_NFUnitCheck_foldEquation,0}};
#define boxvar_NFUnitCheck_foldEquation MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldEquation)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_foldBindingExp(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_boolean _dumpEqInitStruct);
PROTECTED_FUNCTION_STATIC void boxptr_NFUnitCheck_foldBindingExp(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _dumpEqInitStruct);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldBindingExp,2,0) {(void*) boxptr_NFUnitCheck_foldBindingExp,0}};
#define boxvar_NFUnitCheck_foldBindingExp MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_foldBindingExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_checkModelConsistency(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype __omcQ_24in_5FhtCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_checkModelConsistency,2,0) {(void*) boxptr_NFUnitCheck_checkModelConsistency,0}};
#define boxvar_NFUnitCheck_checkModelConsistency MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_checkModelConsistency)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_notification2(threadData_t *threadData, modelica_metatype _inLt1, modelica_metatype _inHtCr2U2, modelica_metatype _inHtU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_notification2,2,0) {(void*) boxptr_NFUnitCheck_notification2,0}};
#define boxvar_NFUnitCheck_notification2 MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_notification2)
PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_notification(threadData_t *threadData, modelica_metatype _inHtCr2U1, modelica_metatype _inHtCr2U2, modelica_metatype _inHtU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_notification,2,0) {(void*) boxptr_NFUnitCheck_notification,0}};
#define boxvar_NFUnitCheck_notification MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_notification)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_updateVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _htCr2U, modelica_metatype _htU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateVariable,2,0) {(void*) boxptr_NFUnitCheck_updateVariable,0}};
#define boxvar_NFUnitCheck_updateVariable MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateVariable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_updateModel(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_metatype _htCr2U, modelica_metatype _htU2S);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateModel,2,0) {(void*) boxptr_NFUnitCheck_updateModel,0}};
#define boxvar_NFUnitCheck_updateModel MMC_REFSTRUCTLIT(boxvar_lit_NFUnitCheck_updateModel)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_parse(threadData_t *threadData, modelica_string _unitString, modelica_metatype _cref, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _info)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _unit = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unit has no default value.
  if((stringLength(_unitString) == ((modelica_integer) 0)))
  {
    tmpMeta1 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta2 = mmc_mk_box2(4, &NFUnit_Unit_MASTER__desc, tmpMeta1);
    _unit = tmpMeta2;

    goto _return;
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          /* Pattern matching succeeded */
          _unit = omc_UnorderedMap_getOrFail(threadData, _unitString, _htS2U);
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp9;
              int tmp10;
              tmp9 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp8_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp9 < 2; tmp9++) {
                switch (MMC_SWITCH_CAST(tmp9)) {
                case 0: {
                  /* Pattern matching succeeded */
                  _unit = omc_NFUnit_parseUnitString(threadData, _unitString, _htS2U, _info);
                  goto tmp8_done;
                }
                case 1: {
                  modelica_metatype tmpMeta11;
                  /* Pattern matching succeeded */
                  tmpMeta11 = mmc_mk_box2(5, &NFUnit_Unit_UNKNOWN__desc, _unitString);
                  _unit = tmpMeta11;
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              tmp8_done:
              (void)tmp9;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp8_done2;
              goto_7:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp9 < 2) {
                goto tmp8_top;
              }
              goto goto_3;
              tmp8_done2:;
            }
          }
          ;

          omc_NFUnitCheck_addUnit2HtS2U(threadData, _unitString, _unit, _htS2U);

          omc_NFUnitCheck_addUnit2HtU2S(threadData, _unitString, _unit, _htU2S);
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      tmp4_done:
      (void)tmp5;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp4_done2;
      goto_3:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp5 < 2) {
        goto tmp4_top;
      }
      MMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _unit;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_getUnitStringFromExp(threadData_t *threadData, modelica_metatype _unitExp)
{
  modelica_string _unitString = NULL;
  modelica_metatype _exp = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unitString has no default value.
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unitExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_unitExp), 2)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 /* true */ != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFExpression_isLiteral(threadData, _unitExp) && (!omc_NFType_isEmptyArray(threadData, omc_NFExpression_typeOf(threadData, _unitExp))))) goto tmp3_end;
          /* Tail recursive call */
          _unitExp = omc_NFExpression_arrayFirstScalar(threadData, _unitExp);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,6) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          
          _exp = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFCall_isNamed(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_unitExp), 2))), _OMC_LIT0)) goto tmp3_end;
          /* Tail recursive call */
          _unitExp = _exp;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp12;
          modelica_string tmp13;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFExpression_isLiteral(threadData, _unitExp))) goto tmp3_end;
          _exp = omc_NFCeval_tryEvalExp(threadData, _unitExp);
          tmp12 = (modelica_boolean)omc_NFExpression_isLiteral(threadData, _exp);
          if(tmp12)
          {
            /* Tail recursive call */
            _unitExp = _exp;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          else
          {
            tmp13 = _OMC_LIT1;
          }
          tmp1 = tmp13;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT1;
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
  _unitString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _unitString;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_convertUnitStringToUnit(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S)
{
  modelica_metatype _unit_binding = NULL;
  modelica_metatype _unit_exp = NULL;
  modelica_string _unit_string = NULL;
  modelica_metatype _unit = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unit_binding has no default value.
  // _unit_exp has no default value.
  // _unit_string has no default value.
  // _unit has no default value.
  _unit_binding = omc_NFVariable_lookupTypeAttribute(threadData, _OMC_LIT2, _var);

  _unit_exp = omc_NFBinding_typedExp(threadData, _unit_binding);

  _unit_string = (isSome(_unit_exp)?omc_NFUnitCheck_getUnitStringFromExp(threadData, omc_Util_getOption(threadData, _unit_exp)):_OMC_LIT1);

  if((stringLength(_unit_string) == ((modelica_integer) 0)))
  {
    tmpMeta1 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta2 = mmc_mk_box2(4, &NFUnit_Unit_MASTER__desc, tmpMeta1);
    omc_UnorderedMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), tmpMeta2, _htCr2U);

    tmpMeta3 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = mmc_mk_box2(4, &NFUnit_Unit_MASTER__desc, tmpMeta3);
    omc_NFUnitCheck_addUnit2HtS2U(threadData, _OMC_LIT3, tmpMeta4, _htS2U);

    tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta6 = mmc_mk_box2(4, &NFUnit_Unit_MASTER__desc, tmpMeta5);
    omc_NFUnitCheck_addUnit2HtU2S(threadData, _OMC_LIT3, tmpMeta6, _htU2S);
  }
  else
  {
    _unit = omc_NFUnitCheck_parse(threadData, _unit_string, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _htS2U, _htU2S, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))));

    omc_UnorderedMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _unit, _htCr2U);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_addUnit2HtU2S(threadData_t *threadData, modelica_string _name, modelica_metatype _unit, modelica_metatype _htU2S)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_UnorderedMap_tryAdd(threadData, _unit, _name, _htU2S);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_addUnit2HtS2U(threadData_t *threadData, modelica_string _name, modelica_metatype _unit, modelica_metatype _inHtS2U)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_UnorderedMap_add(threadData, _name, _unit, _inHtS2U);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldCallArg1(threadData_t *threadData, modelica_metatype _args, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _inUnit, modelica_metatype _units, modelica_metatype _vars, modelica_string _fnName)
{
  modelica_metatype _inconsistentUnits = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _unit = NULL;
  modelica_string _var = NULL;
  modelica_metatype _rest_units = NULL;
  modelica_metatype _rest_vars = NULL;
  modelica_metatype _op_unit = NULL;
  modelica_metatype _op_unit2 = NULL;
  modelica_metatype _icu = NULL;
  modelica_metatype _temp = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _inconsistentUnits = tmpMeta1;
  // _unit has no default value.
  // _var has no default value.
  _rest_units = _units;
  _rest_vars = _vars;
  // _op_unit has no default value.
  // _op_unit2 has no default value.
  // _icu has no default value.
  // _temp has no default value.
  // _b has no default value.
  {
    modelica_metatype _arg;
    for (tmpMeta2 = _args; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _arg = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _rest_vars;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      _var = tmpMeta4;
      _rest_vars = tmpMeta5;

      /* Pattern-matching assignment */
      tmpMeta6 = _rest_units;
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_CAR(tmpMeta6);
      tmpMeta8 = MMC_CDR(tmpMeta6);
      _unit = tmpMeta7;
      _rest_units = tmpMeta8;

      _op_unit = omc_NFUnitCheck_insertUnitInEquation(threadData, _arg, _inUnit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu);

      if((stringEqual(_unit, _OMC_LIT7)))
      {
        _op_unit2 = _OMC_LIT6;
      }
      else
      {
        _op_unit2 = omc_NFUnit_parseUnitString(threadData, _unit, _htS2U, _OMC_LIT5);
      }

      _b = omc_NFUnitCheck_unitTypesEqual(threadData, _op_unit, _op_unit2, _htCr2U ,&_op_unit);

      if(_b)
      {
        tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
        _icu = tmpMeta9;
      }
      else
      {
        _temp = omc_NFUnitCheck_makeNewCref(threadData, _var, _fnName);

        tmpMeta12 = mmc_mk_box2(0, _arg, _op_unit);
        tmpMeta13 = mmc_mk_box2(0, _temp, _op_unit2);
        tmpMeta11 = mmc_mk_cons(tmpMeta12, mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil)));
        tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
        _icu = tmpMeta10;
      }

      _inconsistentUnits = omc_List_append__reverse(threadData, _icu, _inconsistentUnits);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _inconsistentUnits;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldCallArg(threadData_t *threadData, modelica_metatype _args, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache)
{
  modelica_metatype _inconsistentUnits = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _icu = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _inconsistentUnits = tmpMeta1;
  // _icu has no default value.
  {
    modelica_metatype _exp;
    for (tmpMeta2 = _args; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _exp = MMC_CAR(tmpMeta2);
      omc_NFUnitCheck_insertUnitInEquation(threadData, _exp, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu);

      _inconsistentUnits = omc_List_append__reverse(threadData, _icu, _inconsistentUnits);
    }
  }

  _inconsistentUnits = listReverse(_inconsistentUnits);
  _return: OMC_LABEL_UNUSED
  return _inconsistentUnits;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_Errorfunction2(threadData_t *threadData, modelica_metatype _inexpList, modelica_metatype _inHtU2S)
{
  modelica_string _outS = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outS has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inexpList;
    {
      modelica_metatype _expList = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _ut = NULL;
      modelica_string _s = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expList has no default value.
      // _exp has no default value.
      // _ut has no default value.
      // _s has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _exp = tmpMeta8;
          _ut = tmpMeta9;
          /* Pattern matching succeeded */
          _s = omc_NFExpression_toString(threadData, _exp);

          _s1 = omc_NFUnit_unitString(threadData, _ut, _inHtU2S);
          tmpMeta10 = stringAppend(_OMC_LIT8,_s);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT9);
          tmpMeta12 = stringAppend(tmpMeta11,_s1);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT10);
          tmp1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _exp = tmpMeta16;
          _ut = tmpMeta17;
          _expList = tmpMeta15;
          /* Pattern matching succeeded */
          _s = omc_NFExpression_toString(threadData, _exp);

          _s1 = omc_NFUnit_unitString(threadData, _ut, _inHtU2S);

          _s2 = omc_NFUnitCheck_Errorfunction2(threadData, _expList, _inHtU2S);
          tmpMeta18 = stringAppend(_OMC_LIT8,_s);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT9);
          tmpMeta20 = stringAppend(tmpMeta19,_s1);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT11);
          tmpMeta22 = stringAppend(tmpMeta21,_s2);
          tmp1 = tmpMeta22;
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
  _outS = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outS;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_Errorfunction(threadData_t *threadData, modelica_metatype _inexpList, modelica_metatype _inEq, modelica_metatype _inHtU2S)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inexpList;
    {
      modelica_string _s = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      modelica_metatype _expList = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _s has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _expList has no default value.
      // _info has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          _expList = tmp3_1;
          /* Pattern matching succeeded */
          _info = omc_NFEquation_info(threadData, _inEq);

          _s = omc_NFEquation_toString(threadData, _inEq, _OMC_LIT1);

          _s1 = omc_NFUnitCheck_Errorfunction2(threadData, _expList, _inHtU2S);

          tmpMeta5 = stringAppend(_OMC_LIT12,_s);
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT13);
          _s2 = tmpMeta6;

          tmpMeta7 = mmc_mk_cons(_s2, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT18, tmpMeta7, _info);

          tmpMeta8 = stringAppend(_OMC_LIT19,_s1);
          omc_Error_addCompilerWarning(threadData, tmpMeta8);
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

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_updateHtCr2U(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _unit, modelica_metatype _htCr2U)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_UnorderedMap_tryAdd(threadData, _OMC_LIT24, _OMC_LIT6, _htCr2U);

  omc_UnorderedMap_add(threadData, _cref, _unit, _htCr2U);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFUnitCheck_unitTypesEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2, modelica_metatype _htCr2U, modelica_metatype *out_outUnit)
{
  modelica_boolean _isEqual;
  modelica_metatype _outUnit = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  // _outUnit has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _unit1;
    tmp4_2 = _unit2;
    {
      modelica_metatype _vars1 = NULL;
      modelica_metatype _vars2 = NULL;
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _vars1 has no default value.
      // _vars2 has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,8) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = omc_NFUnit_isEqual(threadData, _unit1, _unit2);
          tmpMeta[0+1] = _unit1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,8) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _vars2 = tmpMeta6;
          /* Pattern matching succeeded */
          omc_List_map2__0(threadData, _vars2, boxvar_NFUnitCheck_updateHtCr2U, _unit1, _htCr2U);
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _unit1;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,8) == 0) goto tmp3_end;
          
          _vars1 = tmpMeta7;
          /* Pattern matching succeeded */
          omc_List_map2__0(threadData, _vars1, boxvar_NFUnitCheck_updateHtCr2U, _unit2, _htCr2U);
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _unit2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _vars1 = tmpMeta8;
          _vars2 = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(4, &NFUnit_Unit_MASTER__desc, omc_List_append__reverse(threadData, _vars1, _vars2));
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _s1 = tmpMeta11;
          _s2 = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1_c0 = (stringEqual(_s1, _s2));
          tmpMeta[0+1] = _unit1;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _unit1;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1_c0 = 1 /* true */;
          tmpMeta[0+1] = _unit2;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1_c0 = 0 /* false */;
          tmpMeta[0+1] = _unit1;
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
  _isEqual = tmp1_c0;
  _outUnit = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outUnit) { *out_outUnit = _outUnit; }
  return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFUnitCheck_unitTypesEqual(threadData_t *threadData, modelica_metatype _unit1, modelica_metatype _unit2, modelica_metatype _htCr2U, modelica_metatype *out_outUnit)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, out_outUnit);
  out_isEqual = mmc_mk_icon(_isEqual);
  /* skip box _outUnit; NFUnit.Unit */
  return out_isEqual;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_parseFunctionUnits(threadData_t *threadData, modelica_string _funcName, modelica_metatype _func)
{
  modelica_metatype _outArgs = NULL;
  modelica_string _fn_name = NULL;
  modelica_metatype _in_units = NULL;
  modelica_metatype _out_units = NULL;
  modelica_metatype _in_args = NULL;
  modelica_metatype _out_args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outArgs has no default value.
  // _fn_name has no default value.
  // _in_units has no default value.
  // _out_units has no default value.
  // _in_args has no default value.
  // _out_args has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_string __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 4)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_NFComponent_getUnitAttribute(threadData, omc_NFInstNode_InstNode_component(threadData, _p), _OMC_LIT7);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _in_units = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_string __omcQ_24tmpVar4;
    modelica_integer tmp8;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 5)));
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar5;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar4 = omc_NFComponent_getUnitAttribute(threadData, omc_NFInstNode_InstNode_component(threadData, _p), _OMC_LIT7);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar5;
  }
  _out_units = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_string __omcQ_24tmpVar6;
    modelica_integer tmp12;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 4)));
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar7;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar6 = omc_NFInstNode_InstNode_name(threadData, _p);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar7;
  }
  _in_args = tmpMeta9;

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp14;
    modelica_metatype tmpMeta15;
    modelica_string __omcQ_24tmpVar8;
    modelica_integer tmp16;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 5)));
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta15; /* defaultValue */
    tmp14 = &__omcQ_24tmpVar9;
    while(1) {
      tmp16 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp16--;
      }
      if (tmp16 == 0) {
        __omcQ_24tmpVar8 = omc_NFInstNode_InstNode_name(threadData, _p);
        *tmp14 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp14 = &MMC_CDR(*tmp14);
      } else if (tmp16 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp14 = mmc_mk_nil();
    tmpMeta13 = __omcQ_24tmpVar9;
  }
  _out_args = tmpMeta13;

  tmpMeta17 = mmc_mk_box6(3, &NFUnitCheck_Functionargs_FUNCTIONUNITS__desc, _funcName, _in_args, _out_args, _in_units, _out_units);
  _outArgs = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  return _outArgs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_getCallUnits(threadData_t *threadData, modelica_string _fnName, modelica_metatype _call, modelica_metatype _fnCache, modelica_metatype *out_outputVars, modelica_metatype *out_inputUnits, modelica_metatype *out_outputUnits)
{
  modelica_metatype _inputVars = NULL;
  modelica_metatype _outputVars = NULL;
  modelica_metatype _inputUnits = NULL;
  modelica_metatype _outputUnits = NULL;
  modelica_metatype _opt_args = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inputVars has no default value.
  // _outputVars has no default value.
  // _inputUnits has no default value.
  // _outputUnits has no default value.
  // _opt_args has no default value.
  // _args has no default value.
  _opt_args = omc_UnorderedMap_get(threadData, _fnName, _fnCache);

  if(isSome(_opt_args))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _opt_args;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _args = tmpMeta2;
  }
  else
  {
    _args = omc_NFUnitCheck_parseFunctionUnits(threadData, _fnName, omc_NFCall_typedFunction(threadData, _call));

    omc_UnorderedMap_addUnique(threadData, _fnName, _args, _fnCache);
  }

  /* Pattern-matching assignment */
  tmpMeta3 = _args;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 5));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 6));
  _inputVars = tmpMeta4;
  _outputVars = tmpMeta5;
  _inputUnits = tmpMeta6;
  _outputUnits = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  if (out_outputVars) { *out_outputVars = _outputVars; }
  if (out_inputUnits) { *out_inputUnits = _inputUnits; }
  if (out_outputUnits) { *out_outputUnits = _outputUnits; }
  return _inputVars;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_insertUnitString(threadData_t *threadData, modelica_metatype _unit, modelica_metatype _htS2U, modelica_metatype _htU2S)
{
  modelica_string _unit_str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _unit_str has no default value.
  _unit_str = omc_NFUnit_unitString(threadData, _unit, _htU2S);

  omc_NFUnitCheck_addUnit2HtS2U(threadData, _unit_str, _unit, _htS2U);

  omc_NFUnitCheck_addUnit2HtU2S(threadData, _unit_str, _unit, _htU2S);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_insertUnitInEquationCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype __omcQ_24in_5Funit, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype *out_inconsistentUnits)
{
  modelica_metatype _unit = NULL;
  modelica_metatype _inconsistentUnits = NULL;
  modelica_metatype _fn_path = NULL;
  modelica_string _fn_name = NULL;
  modelica_metatype _call_args = NULL;
  modelica_metatype _op_unit = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _var_names = NULL;
  modelica_metatype _unit_names = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unit = __omcQ_24in_5Funit;
  // _inconsistentUnits has no default value.
  // _fn_path has no default value.
  // _fn_name has no default value.
  // _call_args has no default value.
  // _op_unit has no default value.
  // _vars has no default value.
  // _var_names has no default value.
  // _unit_names has no default value.
  _fn_path = omc_NFCall_functionName(threadData, _call);

  _call_args = omc_NFCall_arguments(threadData, _call);

  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _fn_path;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _op_unit = omc_NFUnitCheck_insertUnitInEquation(threadData, listHead(_call_args), _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _op_unit = omc_NFUnitCheck_insertUnitInEquation(threadData, listHead(_call_args), _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);

          if(omc_NFUnit_isUnit(threadData, _op_unit))
          {
            _op_unit = omc_NFUnit_unitDiv(threadData, _op_unit, _OMC_LIT26);

            omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          }
          else
          {
            if(omc_NFUnit_isUnit(threadData, _unit))
            {
              /* Pattern-matching assignment */
              tmpMeta8 = _op_unit;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto goto_2;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              _vars = tmpMeta9;

              _op_unit = omc_NFUnit_unitMul(threadData, _unit, _OMC_LIT26);

              omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

              omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
            }
            else
            {
              _op_unit = _OMC_LIT6;
            }
          }
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (4 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _op_unit = omc_NFUnitCheck_insertUnitInEquation(threadData, listHead(_call_args), _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);

          if(omc_NFUnit_isUnit(threadData, _op_unit))
          {
            _op_unit = omc_NFUnit_unitRoot(threadData, _op_unit, 2.0);

            omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          }
          else
          {
            if(omc_NFUnit_isUnit(threadData, _unit))
            {
              /* Pattern-matching assignment */
              tmpMeta11 = _op_unit;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto goto_2;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              _vars = tmpMeta12;

              _op_unit = omc_NFUnit_unitPow(threadData, _unit, ((modelica_integer) 2));

              omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

              omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);

              _op_unit = _unit;
            }
            else
            {
              _op_unit = _OMC_LIT6;
            }
          }
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_isBuiltin(threadData, omc_NFCall_typedFunction(threadData, _call))) goto tmp3_end;
          _inconsistentUnits = omc_NFUnitCheck_foldCallArg(threadData, _call_args, _htCr2U, _htS2U, _htU2S, _fnCache);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _fn_name = omc_AbsynUtil_pathString(threadData, omc_AbsynUtil_makeNotFullyQualified(threadData, _fn_path), _OMC_LIT27, 1 /* true */, 0 /* false */);

          _var_names = omc_NFUnitCheck_getCallUnits(threadData, _fn_name, _call, _fnCache ,NULL ,&_unit_names, NULL);

          _inconsistentUnits = omc_NFUnitCheck_foldCallArg1(threadData, _call_args, _htCr2U, _htS2U, _htU2S, _fnCache, _unit, _unit_names, _var_names, _fn_name);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta13;
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _unit = tmpMeta[0+0];
  _inconsistentUnits = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_inconsistentUnits) { *out_inconsistentUnits = _inconsistentUnits; }
  return _unit;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_insertUnitInEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Funit, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype *out_inconsistentUnits)
{
  modelica_metatype _unit = NULL;
  modelica_metatype _inconsistentUnits = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unit = __omcQ_24in_5Funit;
  // _inconsistentUnits has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _unit1 = NULL;
      modelica_metatype _unit2 = NULL;
      modelica_metatype _op_unit = NULL;
      modelica_metatype _icu1 = NULL;
      modelica_metatype _icu2 = NULL;
      modelica_metatype _vars = NULL;
      modelica_integer _i;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _unit1 has no default value.
      // _unit2 has no default value.
      // _op_unit has no default value.
      // _icu1 has no default value.
      // _icu2 has no default value.
      // _vars has no default value.
      // _i has no default value.
      // _b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 30; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (2 != tmp9) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta6;
          _exp2 = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta12 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta12;
          _icu2 = tmpMeta11;

          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit2, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp14 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, &tmpMeta13);
          if (1 /* true */ != tmp14) goto goto_2;
          _op_unit = tmpMeta13;
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,0,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (2 != tmp18) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta15;
          _exp2 = tmpMeta19;
          /* Pattern matching succeeded */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit1, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp21 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, &tmpMeta20);
          if (1 /* true */ != tmp21) goto goto_2;
          _op_unit = tmpMeta20;
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,2) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          if (2 != tmp25) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta22;
          _exp2 = tmpMeta26;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta28 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta28;
          _icu2 = tmpMeta27;

          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit2, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp29 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, NULL);
          if (0 /* false */ != tmp29) goto goto_2;
          tmpMeta32 = mmc_mk_box2(0, _exp1, _unit1);
          tmpMeta33 = mmc_mk_box2(0, _exp2, _unit2);
          tmpMeta31 = mmc_mk_cons(tmpMeta32, mmc_mk_cons(tmpMeta33, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta30 = mmc_mk_cons(tmpMeta31, omc_List_append__reverse(threadData, _icu1, _icu2));
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta30;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,0,2) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          if (2 != tmp37) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta34;
          _exp2 = tmpMeta38;
          tmp4 += 25; /* Pattern matching succeeded; we may skip some cases if we fail */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit1, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp39 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, NULL);
          if (0 /* false */ != tmp39) goto goto_2;
          tmpMeta42 = mmc_mk_box2(0, _exp1, _unit1);
          tmpMeta43 = mmc_mk_box2(0, _exp2, _unit2);
          tmpMeta41 = mmc_mk_cons(tmpMeta42, mmc_mk_cons(tmpMeta43, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta40 = mmc_mk_cons(tmpMeta41, omc_List_append__reverse(threadData, _icu1, _icu2));
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta40;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_boolean tmp52;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,0,2) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 3));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          if (1 != tmp47) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta44;
          _exp2 = tmpMeta48;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta50 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta49);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta50;
          _icu2 = tmpMeta49;

          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit2, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp52 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, &tmpMeta51);
          if (1 /* true */ != tmp52) goto goto_2;
          _op_unit = tmpMeta51;
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_boolean tmp59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,0,2) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 3));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          if (1 != tmp56) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta53;
          _exp2 = tmpMeta57;
          /* Pattern matching succeeded */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit1, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp59 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, &tmpMeta58);
          if (1 /* true */ != tmp59) goto goto_2;
          _op_unit = tmpMeta58;
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_integer tmp63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_boolean tmp67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,0,2) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 3));
          tmp63 = mmc_unbox_integer(tmpMeta62);
          if (1 != tmp63) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta60;
          _exp2 = tmpMeta64;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta66 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta65);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta66;
          _icu2 = tmpMeta65;

          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit2, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp67 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, NULL);
          if (0 /* false */ != tmp67) goto goto_2;
          tmpMeta70 = mmc_mk_box2(0, _exp1, _unit1);
          tmpMeta71 = mmc_mk_box2(0, _exp2, _unit2);
          tmpMeta69 = mmc_mk_cons(tmpMeta70, mmc_mk_cons(tmpMeta71, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta68 = mmc_mk_cons(tmpMeta69, omc_List_append__reverse(threadData, _icu1, _icu2));
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta68;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_integer tmp75;
          modelica_metatype tmpMeta76;
          modelica_boolean tmp77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta73,0,2) == 0) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta73), 3));
          tmp75 = mmc_unbox_integer(tmpMeta74);
          if (1 != tmp75) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta72;
          _exp2 = tmpMeta76;
          tmp4 += 21; /* Pattern matching succeeded; we may skip some cases if we fail */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _unit1, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          /* Pattern-matching tuple assignment */
          tmp77 = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, NULL);
          if (0 /* false */ != tmp77) goto goto_2;
          tmpMeta80 = mmc_mk_box2(0, _exp1, _unit1);
          tmpMeta81 = mmc_mk_box2(0, _exp2, _unit2);
          tmpMeta79 = mmc_mk_cons(tmpMeta80, mmc_mk_cons(tmpMeta81, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta78 = mmc_mk_cons(tmpMeta79, omc_List_append__reverse(threadData, _icu1, _icu2));
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta78;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_integer tmp85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta83,0,2) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta83), 3));
          tmp85 = mmc_unbox_integer(tmpMeta84);
          if (3 != tmp85) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta82;
          _exp2 = tmpMeta86;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta88 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta87);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta88,0,8) == 0) goto goto_2;
          _unit1 = tmpMeta88;
          _icu1 = tmpMeta87;

          /* Pattern-matching tuple assignment */
          tmpMeta90 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta89);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta90,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta90;
          _icu2 = tmpMeta89;

          _op_unit = omc_NFUnit_unitMul(threadData, _unit1, _unit2);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_integer tmp94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta92,0,2) == 0) goto tmp3_end;
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta92), 3));
          tmp94 = mmc_unbox_integer(tmpMeta93);
          if (3 != tmp94) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta91;
          _exp2 = tmpMeta95;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isMaster(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta97 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta96);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta97,1,1) == 0) goto goto_2;
          _icu1 = tmpMeta96;

          /* Pattern-matching tuple assignment */
          tmpMeta99 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta98);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta99,0,8) == 0) goto goto_2;
          _icu2 = tmpMeta98;
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_integer tmp103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta101,0,2) == 0) goto tmp3_end;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 3));
          tmp103 = mmc_unbox_integer(tmpMeta102);
          if (3 != tmp103) goto tmp3_end;
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta100;
          _exp2 = tmpMeta104;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isUnit(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta106 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta105);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta106,1,1) == 0) goto goto_2;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          _vars = tmpMeta107;
          _icu1 = tmpMeta105;

          /* Pattern-matching tuple assignment */
          tmpMeta109 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta108);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta109;
          _icu2 = tmpMeta108;

          _op_unit = omc_NFUnit_unitDiv(threadData, _unit, _unit2);

          omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_integer tmp113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta111,0,2) == 0) goto tmp3_end;
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta111), 3));
          tmp113 = mmc_unbox_integer(tmpMeta112);
          if (3 != tmp113) goto tmp3_end;
          tmpMeta114 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta110;
          _exp2 = tmpMeta114;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isMaster(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta116 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta115);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta116,0,8) == 0) goto goto_2;
          _icu1 = tmpMeta115;

          /* Pattern-matching tuple assignment */
          tmpMeta118 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta117);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta118,1,1) == 0) goto goto_2;
          _icu2 = tmpMeta117;
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_integer tmp122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta120,0,2) == 0) goto tmp3_end;
          tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta120), 3));
          tmp122 = mmc_unbox_integer(tmpMeta121);
          if (3 != tmp122) goto tmp3_end;
          tmpMeta123 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta119;
          _exp2 = tmpMeta123;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isUnit(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta125 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta124);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta125,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta125;
          _icu1 = tmpMeta124;

          /* Pattern-matching tuple assignment */
          tmpMeta127 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta126);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta127,1,1) == 0) goto goto_2;
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta127), 2));
          _vars = tmpMeta128;
          _icu2 = tmpMeta126;

          _op_unit = omc_NFUnit_unitDiv(threadData, _unit, _unit2);

          omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_integer tmp132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta130 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta130,0,2) == 0) goto tmp3_end;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta130), 3));
          tmp132 = mmc_unbox_integer(tmpMeta131);
          if (3 != tmp132) goto tmp3_end;
          tmpMeta133 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta129;
          _exp2 = tmpMeta133;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta135 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta134);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta135,1,1) == 0) goto goto_2;
          _icu1 = tmpMeta134;

          /* Pattern-matching tuple assignment */
          tmpMeta137 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta136);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta137,1,1) == 0) goto goto_2;
          _icu2 = tmpMeta136;
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_integer tmp141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta138 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta139,0,2) == 0) goto tmp3_end;
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta139), 3));
          tmp141 = mmc_unbox_integer(tmpMeta140);
          if (4 != tmp141) goto tmp3_end;
          tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta138;
          _exp2 = tmpMeta142;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta144 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta143);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta144,0,8) == 0) goto goto_2;
          _unit1 = tmpMeta144;
          _icu1 = tmpMeta143;

          /* Pattern-matching tuple assignment */
          tmpMeta146 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta145);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta146,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta146;
          _icu2 = tmpMeta145;

          _op_unit = omc_NFUnit_unitDiv(threadData, _unit1, _unit2);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_integer tmp150;
          modelica_metatype tmpMeta151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta147 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta148 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta148,0,2) == 0) goto tmp3_end;
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta148), 3));
          tmp150 = mmc_unbox_integer(tmpMeta149);
          if (4 != tmp150) goto tmp3_end;
          tmpMeta151 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta147;
          _exp2 = tmpMeta151;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isMaster(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta153 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta152);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta153,1,1) == 0) goto goto_2;
          _icu1 = tmpMeta152;

          /* Pattern-matching tuple assignment */
          tmpMeta155 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta154);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta155,0,8) == 0) goto goto_2;
          _icu2 = tmpMeta154;

          _inconsistentUnits = omc_List_append__reverse(threadData, _icu1, _icu2);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_integer tmp159;
          modelica_metatype tmpMeta160;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          modelica_metatype tmpMeta165;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta157 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta157,0,2) == 0) goto tmp3_end;
          tmpMeta158 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta157), 3));
          tmp159 = mmc_unbox_integer(tmpMeta158);
          if (4 != tmp159) goto tmp3_end;
          tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta156;
          _exp2 = tmpMeta160;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isUnit(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta162 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta161);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta162,1,1) == 0) goto goto_2;
          tmpMeta163 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 2));
          _vars = tmpMeta163;
          _icu1 = tmpMeta161;

          /* Pattern-matching tuple assignment */
          tmpMeta165 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta164);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta165,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta165;
          _icu2 = tmpMeta164;

          _op_unit = omc_NFUnit_unitMul(threadData, _unit, _unit2);

          omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta166;
          modelica_metatype tmpMeta167;
          modelica_metatype tmpMeta168;
          modelica_integer tmp169;
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          modelica_metatype tmpMeta172;
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta166 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta167 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta167,0,2) == 0) goto tmp3_end;
          tmpMeta168 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta167), 3));
          tmp169 = mmc_unbox_integer(tmpMeta168);
          if (4 != tmp169) goto tmp3_end;
          tmpMeta170 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta166;
          _exp2 = tmpMeta170;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isMaster(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta172 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta171);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta172,0,8) == 0) goto goto_2;
          _icu1 = tmpMeta171;

          /* Pattern-matching tuple assignment */
          tmpMeta174 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta173);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta174,1,1) == 0) goto goto_2;
          _icu2 = tmpMeta173;
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta175;
          modelica_metatype tmpMeta176;
          modelica_metatype tmpMeta177;
          modelica_integer tmp178;
          modelica_metatype tmpMeta179;
          modelica_metatype tmpMeta180;
          modelica_metatype tmpMeta181;
          modelica_metatype tmpMeta182;
          modelica_metatype tmpMeta183;
          modelica_metatype tmpMeta184;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta175 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta176 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta176,0,2) == 0) goto tmp3_end;
          tmpMeta177 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta176), 3));
          tmp178 = mmc_unbox_integer(tmpMeta177);
          if (4 != tmp178) goto tmp3_end;
          tmpMeta179 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta175;
          _exp2 = tmpMeta179;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isUnit(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta181 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta180);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta181,0,8) == 0) goto goto_2;
          _unit2 = tmpMeta181;
          _icu1 = tmpMeta180;

          /* Pattern-matching tuple assignment */
          tmpMeta183 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta182);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta183,1,1) == 0) goto goto_2;
          tmpMeta184 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta183), 2));
          _vars = tmpMeta184;
          _icu2 = tmpMeta182;

          _op_unit = omc_NFUnit_unitDiv(threadData, _unit2, _unit);

          omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _unit;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta185;
          modelica_metatype tmpMeta186;
          modelica_metatype tmpMeta187;
          modelica_integer tmp188;
          modelica_metatype tmpMeta189;
          modelica_metatype tmpMeta190;
          modelica_metatype tmpMeta191;
          modelica_metatype tmpMeta192;
          modelica_metatype tmpMeta193;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta185 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta186 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta186,0,2) == 0) goto tmp3_end;
          tmpMeta187 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta186), 3));
          tmp188 = mmc_unbox_integer(tmpMeta187);
          if (4 != tmp188) goto tmp3_end;
          tmpMeta189 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta185;
          _exp2 = tmpMeta189;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta191 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta190);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta191,1,1) == 0) goto goto_2;
          _icu1 = tmpMeta190;

          /* Pattern-matching tuple assignment */
          tmpMeta193 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp2, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta192);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta193,1,1) == 0) goto goto_2;
          _icu2 = tmpMeta192;
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta194;
          modelica_metatype tmpMeta195;
          modelica_metatype tmpMeta196;
          modelica_integer tmp197;
          modelica_metatype tmpMeta198;
          modelica_metatype tmpMeta199;
          modelica_metatype tmpMeta200;
          modelica_boolean tmp201;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta194 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta195 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta195,0,2) == 0) goto tmp3_end;
          tmpMeta196 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta195), 3));
          tmp197 = mmc_unbox_integer(tmpMeta196);
          if (5 != tmp197) goto tmp3_end;
          tmpMeta198 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta198,1,1) == 0) goto tmp3_end;
          
          _exp1 = tmpMeta194;
          _exp2 = tmpMeta198;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta200 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta199);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta200,0,8) == 0) goto goto_2;
          _unit1 = tmpMeta200;
          _icu1 = tmpMeta199;

          _i = ((modelica_integer)floor(mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2))))));

          /* Pattern-matching assignment */
          tmp201 = (mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2)))) == ((modelica_real)_i));
          if (1 /* true */ != tmp201) goto goto_2;

          _op_unit = omc_NFUnit_unitPow(threadData, _unit1, _i);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = _icu1;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta202;
          modelica_metatype tmpMeta203;
          modelica_metatype tmpMeta204;
          modelica_integer tmp205;
          modelica_metatype tmpMeta206;
          modelica_metatype tmpMeta207;
          modelica_metatype tmpMeta208;
          modelica_metatype tmpMeta209;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta202 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta203 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta203,0,2) == 0) goto tmp3_end;
          tmpMeta204 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta203), 3));
          tmp205 = mmc_unbox_integer(tmpMeta204);
          if (5 != tmp205) goto tmp3_end;
          tmpMeta206 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta206,1,1) == 0) goto tmp3_end;
          
          _exp1 = tmpMeta202;
          _exp2 = tmpMeta206;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFUnit_isUnit(threadData, _unit)) goto tmp3_end;
          /* Pattern-matching tuple assignment */
          tmpMeta208 = omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta207);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta208,1,1) == 0) goto goto_2;
          tmpMeta209 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta208), 2));
          _vars = tmpMeta209;
          _icu1 = tmpMeta207;

          _op_unit = omc_NFUnit_unitRoot(threadData, _unit, mmc_unbox_real((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 2)))));

          omc_List_map2__0(threadData, _vars, boxvar_NFUnitCheck_updateHtCr2U, _op_unit, _htCr2U);

          omc_NFUnitCheck_insertUnitString(threadData, _op_unit, _htS2U, _htU2S);
          tmpMeta[0+0] = _unit;
          tmpMeta[0+1] = _icu1;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta210;
          modelica_metatype tmpMeta211;
          modelica_metatype tmpMeta212;
          modelica_integer tmp213;
          modelica_metatype tmpMeta214;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta210 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta211 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta211,0,2) == 0) goto tmp3_end;
          tmpMeta212 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta211), 3));
          tmp213 = mmc_unbox_integer(tmpMeta212);
          if (5 != tmp213) goto tmp3_end;
          tmpMeta214 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta214,1,1) == 0) goto tmp3_end;
          
          _exp1 = tmpMeta210;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_NFUnitCheck_insertUnitInEquation(threadData, _exp1, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = _icu1;
          goto tmp3_done;
        }
        case 23: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_NFUnitCheck_insertUnitInEquationCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta215;
          modelica_metatype tmpMeta216;
          modelica_metatype tmpMeta217;
          modelica_metatype tmpMeta218;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,4) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _unit1, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _b = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U ,&_op_unit);

          _inconsistentUnits = omc_List_append__reverse(threadData, _icu1, _icu2);

          if((!_b))
          {
            tmpMeta217 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _unit1);
            tmpMeta218 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _unit2);
            tmpMeta216 = mmc_mk_cons(tmpMeta217, mmc_mk_cons(tmpMeta218, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta215 = mmc_mk_cons(tmpMeta216, _inconsistentUnits);
            _inconsistentUnits = tmpMeta215;

            _op_unit = _OMC_LIT6;
          }
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta219;
          modelica_metatype tmpMeta220;
          modelica_metatype tmpMeta221;
          modelica_metatype tmpMeta222;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,4) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu1);

          _unit2 = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _unit, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);

          _b = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U ,&_op_unit);

          _inconsistentUnits = omc_List_append__reverse(threadData, _icu1, _icu2);

          if((!_b))
          {
            tmpMeta221 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _unit1);
            tmpMeta222 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), _unit2);
            tmpMeta220 = mmc_mk_cons(tmpMeta221, mmc_mk_cons(tmpMeta222, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta219 = mmc_mk_cons(tmpMeta220, _inconsistentUnits);
            _inconsistentUnits = tmpMeta219;

            _op_unit = _OMC_LIT6;
          }
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = _inconsistentUnits;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta223;
          modelica_metatype tmpMeta224;
          modelica_integer tmp225;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          tmpMeta223 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta223,0,2) == 0) goto tmp3_end;
          tmpMeta224 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta223), 3));
          tmp225 = mmc_unbox_integer(tmpMeta224);
          if (26 != tmp225) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _unit, _htCr2U, _htS2U, _htU2S, _fnCache, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta226;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isTime(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))))) goto tmp3_end;
          _op_unit = _OMC_LIT26;

          omc_NFUnitCheck_addUnit2HtS2U(threadData, _OMC_LIT31, _op_unit, _htS2U);

          omc_NFUnitCheck_addUnit2HtU2S(threadData, _OMC_LIT31, _op_unit, _htU2S);
          tmpMeta226 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _op_unit;
          tmpMeta[0+1] = tmpMeta226;
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta227;
          modelica_metatype tmpMeta228;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta227 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta227,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta228 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = omc_UnorderedMap_getOrFail(threadData, omc_NFComponentRef_stripSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), NULL), _htCr2U);
          tmpMeta[0+1] = tmpMeta228;
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta229;
          
          /* Pattern matching succeeded */
          tmpMeta229 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _OMC_LIT6;
          tmpMeta[0+1] = tmpMeta229;
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
      if (++tmp4 < 30) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _unit = tmpMeta[0+0];
  _inconsistentUnits = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_inconsistentUnits) { *out_inconsistentUnits = _inconsistentUnits; }
  return _unit;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_makeNewCref(threadData_t *threadData, modelica_string _paramName, modelica_string _fnName)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  tmpMeta1 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, _paramName);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = stringAppend(_fnName,_OMC_LIT32);
  tmpMeta4 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, tmpMeta3);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box3(9, &NFExpression_CREF__desc, _OMC_LIT22, omc_NFComponentRef_prefixCref(threadData, tmpMeta1, _OMC_LIT22, tmpMeta2, omc_NFComponentRef_fromNode(threadData, tmpMeta4, _OMC_LIT22, tmpMeta5, 1)));
  _outExp = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_foldEquation2(threadData_t *threadData, modelica_metatype _eq, modelica_boolean _dumpEqInitStruct, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache)
{
  modelica_metatype _inconsistentUnits = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inconsistentUnits has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _icu1 = NULL;
      modelica_metatype _icu2 = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _temp = NULL;
      modelica_string _fn_name = NULL;
      modelica_string _formal_args = NULL;
      modelica_string _formal_var = NULL;
      modelica_metatype _out_vars = NULL;
      modelica_metatype _out_units = NULL;
      modelica_metatype _unit1 = NULL;
      modelica_metatype _unit2 = NULL;
      modelica_metatype _eql = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _icu1 has no default value.
      // _icu2 has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _temp has no default value.
      // _fn_name has no default value.
      // _formal_args has no default value.
      // _formal_var has no default value.
      // _out_vars has no default value.
      // _out_units has no default value.
      // _unit1 has no default value.
      // _unit2 has no default value.
      // _eql has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,13,1) == 0) goto tmp3_end;
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFFunction_Function_isBuiltin(threadData, omc_NFCall_typedFunction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))))))) goto tmp3_end;
          _fn_name = omc_AbsynUtil_pathString(threadData, omc_AbsynUtil_makeNotFullyQualified(threadData, omc_NFCall_functionName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))))), _OMC_LIT27, 1 /* true */, 0 /* false */);

          omc_NFUnitCheck_getCallUnits(threadData, _fn_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))), _fnCache ,&_out_vars ,NULL ,&_out_units);

          _icu1 = omc_NFUnitCheck_foldCallArg1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), _htCr2U, _htS2U, _htU2S, _fnCache, _OMC_LIT6, _out_units, _out_vars, _fn_name);

          omc_NFUnitCheck_insertUnitInEquation(threadData, _rhs, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);
          tmpMeta1 = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,13,1) == 0) goto tmp3_end;
          
          _rhs = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFFunction_Function_isBuiltin(threadData, omc_NFCall_typedFunction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))))))) goto tmp3_end;
          _fn_name = omc_AbsynUtil_pathString(threadData, omc_AbsynUtil_makeNotFullyQualified(threadData, omc_NFCall_functionName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))))), _OMC_LIT27, 1 /* true */, 0 /* false */);

          omc_NFUnitCheck_getCallUnits(threadData, _fn_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2))), _fnCache ,&_out_vars ,NULL ,&_out_units);

          _unit1 = omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache, NULL);

          _formal_args = listHead(_out_units);

          _formal_var = listHead(_out_vars);

          _unit2 = ((stringEqual(_formal_args, _OMC_LIT7))?_OMC_LIT6:omc_NFUnit_parseUnitString(threadData, _formal_args, _htS2U, omc_NFEquation_info(threadData, _eq)));

          _b = omc_NFUnitCheck_unitTypesEqual(threadData, _unit1, _unit2, _htCr2U, NULL);

          if(_b)
          {
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            _icu1 = tmpMeta9;
          }
          else
          {
            tmpMeta12 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _unit1);
            tmpMeta13 = mmc_mk_box2(0, omc_NFUnitCheck_makeNewCref(threadData, _formal_var, _fn_name), _unit2);
            tmpMeta11 = mmc_mk_cons(tmpMeta12, mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
            _icu1 = tmpMeta10;
          }

          omc_NFUnitCheck_insertUnitInEquation(threadData, _rhs, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_icu2);
          tmpMeta1 = omc_List_append__reverse(threadData, _icu1, _icu2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box4(19, &NFExpression_BINARY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_NFOperator_makeSub(threadData, _OMC_LIT33), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          _temp = tmpMeta14;

          if(_dumpEqInitStruct)
          {
            omc_ExpressionDump_dumpExp(threadData, omc_NFExpression_toDAE(threadData, _temp));
          }

          omc_NFUnitCheck_insertUnitInEquation(threadData, _temp, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);
          tmpMeta1 = _inconsistentUnits;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box4(19, &NFExpression_BINARY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), omc_NFOperator_makeSub(threadData, _OMC_LIT33), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))));
          _temp = tmpMeta15;

          if(_dumpEqInitStruct)
          {
            omc_ExpressionDump_dumpExp(threadData, omc_NFExpression_toDAE(threadData, _temp));
          }

          omc_NFUnitCheck_insertUnitInEquation(threadData, _temp, _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);
          tmpMeta1 = _inconsistentUnits;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 4));
          
          _eql = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _inconsistentUnits = tmpMeta20;

          {
            modelica_metatype _e;
            for (tmpMeta21 = _eql; !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _e = MMC_CAR(tmpMeta21);
              _icu1 = omc_NFUnitCheck_foldEquation2(threadData, _e, _dumpEqInitStruct, _htCr2U, _htS2U, _htU2S, _fnCache);

              _inconsistentUnits = omc_List_append__reverse(threadData, _icu1, _inconsistentUnits);
            }
          }
          tmpMeta1 = _inconsistentUnits;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_NFUnitCheck_insertUnitInEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _OMC_LIT6, _htCr2U, _htS2U, _htU2S, _fnCache ,&_inconsistentUnits);
          tmpMeta1 = _inconsistentUnits;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta23;
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
  _inconsistentUnits = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _inconsistentUnits;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFUnitCheck_foldEquation2(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _dumpEqInitStruct, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache)
{
  modelica_integer tmp1;
  modelica_metatype _inconsistentUnits = NULL;
  tmp1 = mmc_unbox_integer(_dumpEqInitStruct);
  _inconsistentUnits = omc_NFUnitCheck_foldEquation2(threadData, _eq, tmp1, _htCr2U, _htS2U, _htU2S, _fnCache);
  /* skip box _inconsistentUnits; list<list<tuple<NFExpression, NFUnit.Unit>>> */
  return _inconsistentUnits;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_foldEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_boolean _dumpEqInitStruct)
{
  modelica_metatype _inconsistent_units = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inconsistent_units has no default value.
  _inconsistent_units = omc_NFUnitCheck_foldEquation2(threadData, _eq, _dumpEqInitStruct, _htCr2U, _htS2U, _htU2S, _fnCache);

  {
    modelica_metatype _u;
    for (tmpMeta1 = _inconsistent_units; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _u = MMC_CAR(tmpMeta1);
      omc_NFUnitCheck_Errorfunction(threadData, _u, _eq, _htU2S);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFUnitCheck_foldEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _dumpEqInitStruct)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_dumpEqInitStruct);
  omc_NFUnitCheck_foldEquation(threadData, _eq, _htCr2U, _htS2U, _htU2S, _fnCache, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_foldBindingExp(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_boolean _dumpEqInitStruct)
{
  modelica_metatype _binding_exp = NULL;
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _binding_exp has no default value.
  // _eq has no default value.
  if((omc_NFType_isReal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)))) && omc_NFBinding_isBound(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))))))
  {
    _binding_exp = omc_NFBinding_getTypedExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))));

    _eq = omc_NFEquation_makeEquality(threadData, omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), 0 /* false */), _binding_exp, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), _OMC_LIT34, omc_ElementSource_createElementSource(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), mmc_mk_none(), _OMC_LIT35, _OMC_LIT38));

    omc_NFUnitCheck_foldEquation(threadData, _eq, _htCr2U, _htS2U, _htU2S, _fnCache, _dumpEqInitStruct);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFUnitCheck_foldBindingExp(threadData_t *threadData, modelica_metatype _var, modelica_metatype _htCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache, modelica_metatype _dumpEqInitStruct)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_dumpEqInitStruct);
  omc_NFUnitCheck_foldBindingExp(threadData, _var, _htCr2U, _htS2U, _htU2S, _fnCache, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_checkModelConsistency(threadData_t *threadData, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype __omcQ_24in_5FhtCr2U, modelica_metatype _htS2U, modelica_metatype _htU2S, modelica_metatype _fnCache)
{
  modelica_metatype _htCr2U = NULL;
  modelica_boolean _dump_eq_unit;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _htCr2U = __omcQ_24in_5FhtCr2U;
  _dump_eq_unit = omc_Flags_isSet(threadData, _OMC_LIT42);
  {
    modelica_metatype _v;
    for (tmpMeta1 = _variables; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      omc_NFUnitCheck_foldBindingExp(threadData, _v, _htCr2U, _htS2U, _htU2S, _fnCache, _dump_eq_unit);

      {
        modelica_metatype _c;
        for (tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 8))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _c = MMC_CAR(tmpMeta2);
          omc_NFUnitCheck_foldBindingExp(threadData, _c, _htCr2U, _htS2U, _htU2S, _fnCache, _dump_eq_unit);
        }
      }
    }
  }

  {
    modelica_metatype _eq;
    for (tmpMeta5 = _equations; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _eq = MMC_CAR(tmpMeta5);
      omc_NFUnitCheck_foldEquation(threadData, _eq, _htCr2U, _htS2U, _htU2S, _fnCache, _dump_eq_unit);
    }
  }

  {
    modelica_metatype _ieq;
    for (tmpMeta7 = _initialEquations; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _ieq = MMC_CAR(tmpMeta7);
      omc_NFUnitCheck_foldEquation(threadData, _ieq, _htCr2U, _htS2U, _htU2S, _fnCache, _dump_eq_unit);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _htCr2U;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFUnitCheck_notification2(threadData_t *threadData, modelica_metatype _inLt1, modelica_metatype _inHtCr2U2, modelica_metatype _inHtU2S)
{
  modelica_string _outS = NULL;
  modelica_metatype _cr1 = NULL;
  modelica_real _factor;
  modelica_integer _s;
  modelica_integer _m;
  modelica_integer _g;
  modelica_integer _A;
  modelica_integer _K;
  modelica_integer _mol;
  modelica_integer _cd;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outS has no default value.
  _cr1 = _OMC_LIT23;
  _factor = 0.0;
  _s = ((modelica_integer) 0);
  _m = ((modelica_integer) 0);
  _g = ((modelica_integer) 0);
  _A = ((modelica_integer) 0);
  _K = ((modelica_integer) 0);
  _mol = ((modelica_integer) 0);
  _cd = ((modelica_integer) 0);
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype tmpMeta7;
    modelica_metatype tmpMeta8;
    modelica_string __omcQ_24tmpVar10;
    modelica_integer tmp9;
    modelica_metatype _t1_loopVar = 0;
    modelica_boolean tmp10 = 0;
    modelica_metatype _t1;
    _t1_loopVar = _inLt1;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp9 = 1;
      while (!listEmpty(_t1_loopVar)) {
        _t1 = MMC_CAR(_t1_loopVar);
        _t1_loopVar = MMC_CDR(_t1_loopVar);
        { /* match expression */
          modelica_metatype tmp13_1;
          tmp13_1 = _t1;
          {
            modelica_boolean _b;
            volatile mmc_switch_type tmp13;
            int tmp14;
            // _b has no default value.
            tmp13 = 0;
            for (; tmp13 < 2; tmp13++) {
              switch (MMC_SWITCH_CAST(tmp13)) {
              case 0: {
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 1));
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 2));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp12_end;
                
                _cr1 = tmpMeta15;
                /* Pattern matching succeeded */
                _b = 0 /* false */;

                { /* matchcontinue expression */
                  {
                    volatile mmc_switch_type tmp19;
                    int tmp20;
                    tmp19 = 0;
                    MMC_TRY_INTERNAL(mmc_jumper)
                    tmp18_top:
                    threadData->mmc_jumper = &new_mmc_jumper;
                    for (; tmp19 < 2; tmp19++) {
                      switch (MMC_SWITCH_CAST(tmp19)) {
                      case 0: {
                        modelica_metatype tmpMeta21;
                        modelica_metatype tmpMeta22;
                        modelica_integer tmp23;
                        modelica_metatype tmpMeta24;
                        modelica_integer tmp25;
                        modelica_metatype tmpMeta26;
                        modelica_integer tmp27;
                        modelica_metatype tmpMeta28;
                        modelica_integer tmp29;
                        modelica_metatype tmpMeta30;
                        modelica_integer tmp31;
                        modelica_metatype tmpMeta32;
                        modelica_integer tmp33;
                        modelica_metatype tmpMeta34;
                        modelica_integer tmp35;
                        modelica_metatype tmpMeta36;
                        modelica_real tmp37;
                        /* Pattern matching succeeded */
                        /* Pattern-matching assignment */
                        tmpMeta21 = omc_UnorderedMap_getOrFail(threadData, omc_NFComponentRef_stripSubscripts(threadData, _cr1, NULL), _inHtCr2U2);
                        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,8) == 0) goto goto_17;
                        tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
                        tmp23 = mmc_unbox_integer(tmpMeta22);
                        tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
                        tmp25 = mmc_unbox_integer(tmpMeta24);
                        tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 4));
                        tmp27 = mmc_unbox_integer(tmpMeta26);
                        tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 5));
                        tmp29 = mmc_unbox_integer(tmpMeta28);
                        tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 6));
                        tmp31 = mmc_unbox_integer(tmpMeta30);
                        tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 7));
                        tmp33 = mmc_unbox_integer(tmpMeta32);
                        tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 8));
                        tmp35 = mmc_unbox_integer(tmpMeta34);
                        tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 9));
                        tmp37 = mmc_unbox_real(tmpMeta36);
                        _s = tmp23  /* pattern as ty=Integer */;
                        _m = tmp25  /* pattern as ty=Integer */;
                        _g = tmp27  /* pattern as ty=Integer */;
                        _A = tmp29  /* pattern as ty=Integer */;
                        _K = tmp31  /* pattern as ty=Integer */;
                        _mol = tmp33  /* pattern as ty=Integer */;
                        _cd = tmp35  /* pattern as ty=Integer */;
                        _factor = tmp37  /* pattern as ty=Real */;

                        _b = 1 /* true */;
                        goto tmp18_done;
                      }
                      case 1: {
                        /* Pattern matching succeeded */
                        goto tmp18_done;
                      }
                      }
                      goto tmp18_end;
                      tmp18_end: ;
                    }
                    goto goto_17;
                    tmp18_done:
                    (void)tmp19;
                    MMC_RESTORE_INTERNAL(mmc_jumper);
                    goto tmp18_done2;
                    goto_17:;
                    MMC_CATCH_INTERNAL(mmc_jumper);
                    if (++tmp19 < 2) {
                      goto tmp18_top;
                    }
                    goto goto_11;
                    tmp18_done2:;
                  }
                }
                ;
                tmp10 = _b;
                goto tmp12_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmp10 = 0 /* false */;
                goto tmp12_done;
              }
              }
              goto tmp12_end;
              tmp12_end: ;
            }
            goto goto_11;
            goto_11:;
            MMC_THROW_INTERNAL();
            goto tmp12_done;
            tmp12_done:;
          }
        }
        if (tmp10) {
          tmp9--;
          break;
        }
      }
      if (tmp9 == 0) {
        tmpMeta4 = stringAppend(_OMC_LIT10,omc_NFComponentRef_toString(threadData, _cr1));
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT43);
        tmpMeta6 = mmc_mk_box9(3, &NFUnit_Unit_UNIT__desc, mmc_mk_integer(_s), mmc_mk_integer(_m), mmc_mk_integer(_g), mmc_mk_integer(_A), mmc_mk_integer(_K), mmc_mk_integer(_mol), mmc_mk_integer(_cd), mmc_mk_real(_factor));
        tmpMeta7 = stringAppend(tmpMeta5,omc_NFUnit_unitString(threadData, tmpMeta6, _inHtU2S));
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT11);
        __omcQ_24tmpVar10 = tmpMeta8;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  _outS = stringAppendList(tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _outS;
}

PROTECTED_FUNCTION_STATIC void omc_NFUnitCheck_notification(threadData_t *threadData, modelica_metatype _inHtCr2U1, modelica_metatype _inHtCr2U2, modelica_metatype _inHtU2S)
{
  modelica_string _str = NULL;
  modelica_metatype _lt1 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _lt1 has no default value.
  _lt1 = omc_UnorderedMap_toList(threadData, _inHtCr2U1);

  _str = omc_NFUnitCheck_notification2(threadData, _lt1, _inHtCr2U2, _inHtU2S);

  if((omc_Flags_isSet(threadData, _OMC_LIT47) && (!stringEqual(_str, _OMC_LIT1))))
  {
    omc_Error_addCompilerNotification(threadData, _str);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_updateVariable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _htCr2U, modelica_metatype _htU2S)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _var = NULL;
  modelica_string _name = NULL;
  modelica_string _unit_str = NULL;
  modelica_metatype _binding = NULL;
  modelica_integer _unit_idx;
  modelica_metatype _unit = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  // _name has no default value.
  // _unit_str has no default value.
  // _binding has no default value.
  _unit_idx = ((modelica_integer) 0);
  // _unit has no default value.
  if(omc_NFType_isReal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3)))))
  {
    {
      modelica_metatype _attr;
      for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _attr = MMC_CAR(tmpMeta1);
        /* Pattern-matching assignment */
        tmpMeta2 = _attr;
        tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
        _name = tmpMeta3;
        _binding = tmpMeta4;

        _unit_idx = ((modelica_integer) 1) + _unit_idx;

        if((stringEqual(_name, _OMC_LIT2)))
        {
          if(omc_NFBinding_isBound(threadData, _binding))
          {
            goto _return;
          }
          else
          {
            tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(12));
            memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[7] = listDelete((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _unit_idx);
            _var = tmpMeta5;

            break;
          }
        }
      }
    }

    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp9;
        int tmp10;
        tmp9 = 0;
        MMC_TRY_INTERNAL(mmc_jumper)
        tmp8_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp9 < 2; tmp9++) {
          switch (MMC_SWITCH_CAST(tmp9)) {
          case 0: {
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            modelica_metatype tmpMeta13;
            modelica_metatype tmpMeta14;
            /* Pattern matching succeeded */
            _unit = omc_UnorderedMap_getOrFail(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _htCr2U);

            if(omc_NFUnit_isUnit(threadData, _unit))
            {
              _unit_str = omc_NFUnit_unitString(threadData, _unit, _htU2S);

              tmpMeta11 = mmc_mk_box2(5, &NFExpression_STRING__desc, _unit_str);
              _binding = omc_NFBinding_makeFlat(threadData, tmpMeta11, 1, 4);

              tmpMeta14 = mmc_mk_box2(0, _OMC_LIT2, _binding);
              tmpMeta13 = mmc_mk_cons(tmpMeta14, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))));
              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(12));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_var), 12*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[7] = tmpMeta13;
              _var = tmpMeta12;
            }
            goto tmp8_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            goto tmp8_done;
          }
          }
          goto tmp8_end;
          tmp8_end: ;
        }
        goto goto_7;
        tmp8_done:
        (void)tmp9;
        MMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp8_done2;
        goto_7:;
        MMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp9 < 2) {
          goto tmp8_top;
        }
        MMC_THROW_INTERNAL();
        tmp8_done2:;
      }
    }
    ;
  }
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFUnitCheck_updateModel(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel, modelica_metatype _htCr2U, modelica_metatype _htU2S)
{
  modelica_metatype _flatModel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp5;
    modelica_metatype _v_loopVar = 0;
    modelica_metatype _v;
    _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar13;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_v_loopVar)) {
        _v = MMC_CAR(_v_loopVar);
        _v_loopVar = MMC_CDR(_v_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar12 = omc_NFUnitCheck_updateVariable(threadData, _v, _htCr2U, _htU2S);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar13;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(9));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_flatModel), 9*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = tmpMeta2;
  _flatModel = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _flatModel;
}

DLLDirection
modelica_metatype omc_NFUnitCheck_checkUnits(threadData_t *threadData, modelica_metatype __omcQ_24in_5FflatModel)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _flatModel = NULL;
  modelica_metatype _htCr2U1 = NULL;
  modelica_metatype _htCr2U2 = NULL;
  modelica_metatype _htS2U = NULL;
  modelica_metatype _htU2S = NULL;
  modelica_metatype _fn_cache = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flatModel = __omcQ_24in_5FflatModel;
  // _htCr2U1 has no default value.
  // _htCr2U2 has no default value.
  // _htS2U has no default value.
  // _htU2S has no default value.
  // _fn_cache has no default value.
  if((!(omc_Flags_getConfigBool(threadData, _OMC_LIT53) || omc_Flags_getConfigBool(threadData, _OMC_LIT58))))
  {
    goto _return;
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          _htCr2U1 = omc_NFUnit_newCrefUnitTable(threadData, omc_Util_nextPrime(threadData, ((modelica_integer)floor(10.0 + (1.4) * (((modelica_real)listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))))))))));

          _htS2U = omc_NFUnit_getKnownUnits(threadData);

          _htU2S = omc_NFUnit_getKnownUnitsInverse(threadData);

          _fn_cache = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));

          {
            modelica_metatype _v;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _v = MMC_CAR(tmpMeta5);
              omc_NFUnitCheck_convertUnitStringToUnit(threadData, _v, _htCr2U1, _htS2U, _htU2S);
            }
          }

          _htCr2U2 = omc_UnorderedMap_copy(threadData, _htCr2U1);

          _htCr2U2 = omc_NFUnitCheck_checkModelConsistency(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_flatModel), 5))), _htCr2U2, _htS2U, _htU2S, _fn_cache);

          if(omc_Flags_isSet(threadData, _OMC_LIT47))
          {
            fputs(MMC_STRINGDATA(omc_UnorderedMap_toString(threadData, _htCr2U2, boxvar_NFComponentRef_toString, boxvar_NFUnit_unit2string, _OMC_LIT13, _OMC_LIT59)),stdout);

            fputs(MMC_STRINGDATA(_OMC_LIT60),stdout);
          }

          omc_NFUnitCheck_notification(threadData, _htCr2U1, _htCr2U2, _htU2S);

          _flatModel = omc_NFUnitCheck_updateModel(threadData, _flatModel, _htCr2U2, _htU2S);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT61, _OMC_LIT63);
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

  omc_ExecStat_execStat(threadData, _OMC_LIT64);
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _flatModel;
}

