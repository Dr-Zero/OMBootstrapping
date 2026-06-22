#include "omc_simulation_settings.h"
#include "NFEnvExtends.h"
#define _OMC_LIT0_data "- NFEnvExtends.addClassExtendsInfoToEnv: Trying to overwrite existing class extends information, this should not happen!."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,121,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,17,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,3) {&SCode_Visibility_PUBLIC__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&NFSCodeEnv_ClassType_CLASS__EXTENDS__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NFSCodeFlattenRedeclare.extendEnvWithClassExtends failed on unknown element "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,76,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,4,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "$base"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,5,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "$ce"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,3,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Invalid redeclaration of class %s, class extends only allowed on inherited classes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,83,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(162)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,5) {&NFEnvExtends_ExtendsWrapper_NO__EXTENDS__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,4) {&NFSCodeLookup_RedeclareReplaceStrategy_IGNORE__REDECLARES__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,1,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "From here:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,10,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(174)),_OMC_LIT1,_OMC_LIT17,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "%s was found in base class %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,30,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(164)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "$1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,2,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Base class %s not found in scope %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,36,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(39)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "$2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,2,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "The base class name %s was found in one or more base classes:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,61,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(59)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "$3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,2,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Class '%s' in 'extends %s' is replaceable, the base class name must be transitively non-replaceable."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,100,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(172)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "$4"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Part %s of base class name %s is not a class."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,45,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(60)),_OMC_LIT1,_OMC_LIT2,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,9,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,41,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT34,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "- NFEnvExtends.printExtendsError failed to print error "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,55,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "$E"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,2,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "$bc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,3,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "$5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,2,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "- NFEnvExtends.qualifyExtends failed on "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,40,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,1,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,3) {&NFSCodeEnv_ClassType_USERDEFINED__desc,}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "- NFEnvExtends.qualify failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,30,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#include "util/modelica.h"

#include "NFEnvExtends_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_addClassExtendsInfoToEnv(threadData_t *threadData, modelica_metatype _inClassExtends, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_addClassExtendsInfoToEnv,2,0) {(void*) boxptr_NFEnvExtends_addClassExtendsInfoToEnv,0}};
#define boxvar_NFEnvExtends_addClassExtendsInfoToEnv MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_addClassExtendsInfoToEnv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupClassExtendsBaseClass(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inInfo, modelica_metatype *out_outItem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupClassExtendsBaseClass,2,0) {(void*) boxptr_NFEnvExtends_lookupClassExtendsBaseClass,0}};
#define boxvar_NFEnvExtends_lookupClassExtendsBaseClass MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupClassExtendsBaseClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_updateClassExtends2(threadData_t *threadData, modelica_metatype _inClass, modelica_string _inName, modelica_metatype _inMods, modelica_metatype _inInfo, modelica_metatype _inEnv, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateClassExtends2,2,0) {(void*) boxptr_NFEnvExtends_updateClassExtends2,0}};
#define boxvar_NFEnvExtends_updateClassExtends2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateClassExtends2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_updateClassExtends(threadData_t *threadData, modelica_metatype _inClass, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateClassExtends,2,0) {(void*) boxptr_NFEnvExtends_updateClassExtends,0}};
#define boxvar_NFEnvExtends_updateClassExtends MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateClassExtends)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_update3(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_update3,2,0) {(void*) boxptr_NFEnvExtends_update3,0}};
#define boxvar_NFEnvExtends_update3 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_update3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_update2(threadData_t *threadData, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_update2,2,0) {(void*) boxptr_NFEnvExtends_update2,0}};
#define boxvar_NFEnvExtends_update2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_update2)
PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_updateQualifiedInTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_integer _inIndex, modelica_metatype _inExtendsTable);
PROTECTED_FUNCTION_STATIC void boxptr_NFEnvExtends_updateQualifiedInTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inIndex, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateQualifiedInTable,2,0) {(void*) boxptr_NFEnvExtends_updateQualifiedInTable,0}};
#define boxvar_NFEnvExtends_updateQualifiedInTable MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_updateQualifiedInTable)
PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_addUnqualifiedToTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_integer _inIndex, modelica_metatype _inExtendsTable);
PROTECTED_FUNCTION_STATIC void boxptr_NFEnvExtends_addUnqualifiedToTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inIndex, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_addUnqualifiedToTable,2,0) {(void*) boxptr_NFEnvExtends_addUnqualifiedToTable,0}};
#define boxvar_NFEnvExtends_addUnqualifiedToTable MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_addUnqualifiedToTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupQualifiedExtends2(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupQualifiedExtends2,2,0) {(void*) boxptr_NFEnvExtends_lookupQualifiedExtends2,0}};
#define boxvar_NFEnvExtends_lookupQualifiedExtends2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupQualifiedExtends2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupQualifiedExtends(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inExtendsTable);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupQualifiedExtends(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupQualifiedExtends,2,0) {(void*) boxptr_NFEnvExtends_lookupQualifiedExtends,0}};
#define boxvar_NFEnvExtends_lookupQualifiedExtends MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupQualifiedExtends)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_createExtendsTable(threadData_t *threadData, modelica_integer _inSize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_createExtendsTable(threadData_t *threadData, modelica_metatype _inSize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_createExtendsTable,2,0) {(void*) boxptr_NFEnvExtends_createExtendsTable,0}};
#define boxvar_NFEnvExtends_createExtendsTable MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_createExtendsTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupFullyQualified2(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupFullyQualified2,2,0) {(void*) boxptr_NFEnvExtends_lookupFullyQualified2,0}};
#define boxvar_NFEnvExtends_lookupFullyQualified2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupFullyQualified2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupFullyQualified(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupFullyQualified,2,0) {(void*) boxptr_NFEnvExtends_lookupFullyQualified,0}};
#define boxvar_NFEnvExtends_lookupFullyQualified MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupFullyQualified)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInUnqualifiedImports(threadData_t *threadData, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInUnqualifiedImports,2,0) {(void*) boxptr_NFEnvExtends_lookupInUnqualifiedImports,0}};
#define boxvar_NFEnvExtends_lookupInUnqualifiedImports MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInUnqualifiedImports)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInQualifiedImports(threadData_t *threadData, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInQualifiedImports,2,0) {(void*) boxptr_NFEnvExtends_lookupInQualifiedImports,0}};
#define boxvar_NFEnvExtends_lookupInQualifiedImports MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInQualifiedImports)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInBaseClasses2(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInBaseClasses2,2,0) {(void*) boxptr_NFEnvExtends_lookupInBaseClasses2,0}};
#define boxvar_NFEnvExtends_lookupInBaseClasses2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInBaseClasses2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInBaseClasses(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInBaseClasses,2,0) {(void*) boxptr_NFEnvExtends_lookupInBaseClasses,0}};
#define boxvar_NFEnvExtends_lookupInBaseClasses MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInBaseClasses)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInLocalScope(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_boolean *out_outFromExtends);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupInLocalScope(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_metatype *out_outFromExtends);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInLocalScope,2,0) {(void*) boxptr_NFEnvExtends_lookupInLocalScope,0}};
#define boxvar_NFEnvExtends_lookupInLocalScope MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupInLocalScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupSimpleName(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_boolean *out_outFromExtends);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupSimpleName(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_metatype *out_outFromExtends);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupSimpleName,2,0) {(void*) boxptr_NFEnvExtends_lookupSimpleName,0}};
#define boxvar_NFEnvExtends_lookupSimpleName MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_lookupSimpleName)
PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_printInheritedExtendsError(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_printInheritedExtendsError,2,0) {(void*) boxptr_NFEnvExtends_printInheritedExtendsError,0}};
#define boxvar_NFEnvExtends_printInheritedExtendsError MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_printInheritedExtendsError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_splitExtendsErrorPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype *out_outPartPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_splitExtendsErrorPath,2,0) {(void*) boxptr_NFEnvExtends_splitExtendsErrorPath,0}};
#define boxvar_NFEnvExtends_splitExtendsErrorPath MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_splitExtendsErrorPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_checkExtendsPart(threadData_t *threadData, modelica_boolean _inIsFirst, modelica_boolean _inFromExtends, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inBaseClass, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_checkExtendsPart(threadData_t *threadData, modelica_metatype _inIsFirst, modelica_metatype _inFromExtends, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inBaseClass, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_checkExtendsPart,2,0) {(void*) boxptr_NFEnvExtends_checkExtendsPart,0}};
#define boxvar_NFEnvExtends_checkExtendsPart MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_checkExtendsPart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_makeExtendsError(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inPart, modelica_string _inError);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_makeExtendsError,2,0) {(void*) boxptr_NFEnvExtends_makeExtendsError,0}};
#define boxvar_NFEnvExtends_makeExtendsError MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_makeExtendsError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsPart2(threadData_t *threadData, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv, modelica_boolean _inIsFirst, modelica_boolean _inFromExtends, modelica_metatype _inFullPath, modelica_metatype *out_outErrorPath);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtendsPart2(threadData_t *threadData, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv, modelica_metatype _inIsFirst, modelica_metatype _inFromExtends, modelica_metatype _inFullPath, modelica_metatype *out_outErrorPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsPart2,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtendsPart2,0}};
#define boxvar_NFEnvExtends_qualifyExtendsPart2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsPart2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsPart(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_boolean _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype *out_outEnv, modelica_metatype *out_outErrorPath);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtendsPart(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype *out_outEnv, modelica_metatype *out_outErrorPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsPart,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtendsPart,0}};
#define boxvar_NFEnvExtends_qualifyExtendsPart MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsPart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_makeExtendsPath(threadData_t *threadData, modelica_metatype _inFirstPath, modelica_metatype _inRestPath, modelica_metatype _inEnv, modelica_metatype _inErrorPath, modelica_boolean _inIsFirst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_makeExtendsPath(threadData_t *threadData, modelica_metatype _inFirstPath, modelica_metatype _inRestPath, modelica_metatype _inEnv, modelica_metatype _inErrorPath, modelica_metatype _inIsFirst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_makeExtendsPath,2,0) {(void*) boxptr_NFEnvExtends_makeExtendsPath,0}};
#define boxvar_NFEnvExtends_makeExtendsPath MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_makeExtendsPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends3(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_boolean _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype _inErrorPath);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtends3(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype _inErrorPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends3,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtends3,0}};
#define boxvar_NFEnvExtends_qualifyExtends3 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends2(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends2,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtends2,0}};
#define boxvar_NFEnvExtends_qualifyExtends2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtends,0}};
#define boxvar_NFEnvExtends_qualifyExtends MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtends)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsList(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inClassType, modelica_metatype _inEnv, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsList,2,0) {(void*) boxptr_NFEnvExtends_qualifyExtendsList,0}};
#define boxvar_NFEnvExtends_qualifyExtendsList MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyExtendsList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyLocalScope(threadData_t *threadData, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyLocalScope,2,0) {(void*) boxptr_NFEnvExtends_qualifyLocalScope,0}};
#define boxvar_NFEnvExtends_qualifyLocalScope MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualifyLocalScope)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualify3(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _inEnv, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualify3,2,0) {(void*) boxptr_NFEnvExtends_qualify3,0}};
#define boxvar_NFEnvExtends_qualify3 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualify3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualify2(threadData_t *threadData, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype _inExtendsTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualify2,2,0) {(void*) boxptr_NFEnvExtends_qualify2,0}};
#define boxvar_NFEnvExtends_qualify2 MMC_REFSTRUCTLIT(boxvar_lit_NFEnvExtends_qualify2)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_addClassExtendsInfoToEnv(threadData_t *threadData, modelica_metatype _inClassExtends, modelica_metatype _inEnv)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _bcl = NULL;
      modelica_metatype _re = NULL;
      modelica_string _estr = NULL;
      modelica_metatype _ext = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bcl has no default value.
      // _re has no default value.
      // _estr has no default value.
      // _ext has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = omc_NFSCodeEnv_getEnvExtendsTable(threadData, _inEnv);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (!optionNone(tmpMeta9)) goto goto_2;
          _bcl = tmpMeta7;
          _re = tmpMeta8;

          tmpMeta10 = mmc_mk_box4(3, &NFSCodeEnv_ExtendsTable_EXTENDS__TABLE__desc, _bcl, _re, mmc_mk_some(_inClassExtends));
          _ext = tmpMeta10;
          tmpMeta1 = omc_NFSCodeEnv_setEnvExtendsTable(threadData, _ext, _inEnv);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          _estr = _OMC_LIT0;

          tmpMeta11 = mmc_mk_cons(_estr, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta11);
          goto goto_2;
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
  _outEnv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

DLLDirection
modelica_metatype omc_NFEnvExtends_extendEnvWithClassExtends(threadData_t *threadData, modelica_metatype _inClassExtends, modelica_metatype _inEnv)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inClassExtends;
    {
      modelica_metatype _pp = NULL;
      modelica_metatype _ep = NULL;
      modelica_metatype _res = NULL;
      modelica_metatype _prefixes = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _cls_env = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _cdef = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _ext = NULL;
      modelica_string _name = NULL;
      modelica_string _el_str = NULL;
      modelica_string _env_str = NULL;
      modelica_string _err_msg = NULL;
      modelica_metatype _cmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pp has no default value.
      // _ep has no default value.
      // _res has no default value.
      // _prefixes has no default value.
      // _info has no default value.
      // _cls_env has no default value.
      // _mods has no default value.
      // _cdef has no default value.
      // _cls has no default value.
      // _ext has no default value.
      // _name has no default value.
      // _el_str has no default value.
      // _env_str has no default value.
      // _err_msg has no default value.
      // _cmt has no default value.
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          _name = tmpMeta6;
          _prefixes = tmpMeta7;
          _ep = tmpMeta8;
          _pp = tmpMeta9;
          _res = tmpMeta10;
          _mods = tmpMeta12;
          _cdef = tmpMeta13;
          _cmt = tmpMeta14;
          _info = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box9(5, &SCode_Element_CLASS__desc, _name, _prefixes, _ep, _pp, _res, _cdef, _cmt, _info);
          _cls = tmpMeta16;

          _cls_env = omc_NFSCodeEnv_makeClassEnvironment(threadData, _cls, 0 /* false */);

          tmpMeta17 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _name);
          tmpMeta18 = mmc_mk_box6(4, &SCode_Element_EXTENDS__desc, tmpMeta17, _OMC_LIT5, _mods, mmc_mk_none(), _info);
          _ext = tmpMeta18;

          _cls_env = omc_NFEnvExtends_addClassExtendsInfoToEnv(threadData, _ext, _cls_env);
          tmpMeta1 = omc_NFSCodeEnv_extendEnvWithItem(threadData, omc_NFSCodeEnv_newClassItem(threadData, _cls, _cls_env, _OMC_LIT6), _inEnv, _name);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          _info = omc_SCodeUtil_elementInfo(threadData, _inClassExtends);

          _el_str = omc_SCodeDump_unparseElementStr(threadData, _inClassExtends, _OMC_LIT7);

          _env_str = omc_NFSCodeEnv_getEnvName(threadData, _inEnv);

          tmpMeta19 = stringAppend(_OMC_LIT8,_el_str);
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT9);
          tmpMeta21 = stringAppend(tmpMeta20,_env_str);
          _err_msg = tmpMeta21;

          tmpMeta22 = mmc_mk_cons(_err_msg, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta22, _info);
          goto goto_2;
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
  _outEnv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupClassExtendsBaseClass(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inInfo, modelica_metatype *out_outItem)
{
  modelica_metatype _outPath = NULL;
  modelica_metatype _outItem = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  // _outItem has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _path = NULL;
      modelica_metatype _item = NULL;
      modelica_string _basename = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _item has no default value.
      // _basename has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_inName,_OMC_LIT10);
          _basename = tmpMeta6;

          _item = omc_NFSCodeLookup_lookupInheritedName(threadData, _basename, _inEnv, NULL);

          tmpMeta7 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _basename);
          tmpMeta8 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _OMC_LIT11, tmpMeta7);
          _path = tmpMeta8;
          tmpMeta[0+0] = _path;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          _item = omc_NFSCodeLookup_lookupInheritedName(threadData, _inName, _inEnv, NULL);

          tmpMeta9 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inName);
          _path = tmpMeta9;
          tmpMeta[0+0] = _path;
          tmpMeta[0+1] = _item;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_inName, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT13, tmpMeta10, _inInfo);
          goto goto_2;
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
  _outPath = tmpMeta[0+0];
  _outItem = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outItem) { *out_outItem = _outItem; }
  return _outPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_updateClassExtends2(threadData_t *threadData, modelica_metatype _inClass, modelica_string _inName, modelica_metatype _inMods, modelica_metatype _inInfo, modelica_metatype _inEnv, modelica_metatype *out_outEnv)
{
  modelica_metatype _outClass = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClass has no default value.
  // _outEnv has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEnv;
    {
      modelica_metatype _ext = NULL;
      modelica_metatype _cls_frame = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ext has no default value.
      // _cls_frame has no default value.
      // _env has no default value.
      // _cls has no default value.
      // _path has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
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
          _cls_frame = tmpMeta6;
          _env = tmpMeta7;
          /* Pattern matching succeeded */
          _path = omc_NFEnvExtends_lookupClassExtendsBaseClass(threadData, _inName, _env, _inInfo, NULL);

          tmpMeta8 = mmc_mk_box6(4, &SCode_Element_EXTENDS__desc, _path, _OMC_LIT5, _inMods, mmc_mk_none(), _inInfo);
          _ext = tmpMeta8;

          /* Pattern-matching assignment */
          tmpMeta9 = mmc_mk_cons(_cls_frame, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = omc_NFSCodeEnv_extendEnvWithExtends(threadData, _ext, tmpMeta9);
          if (listEmpty(tmpMeta10)) goto goto_2;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (!listEmpty(tmpMeta12)) goto goto_2;
          _cls_frame = tmpMeta11;

          _cls = omc_SCodeUtil_addElementToClass(threadData, _ext, _inClass);
          tmpMeta13 = mmc_mk_cons(_cls_frame, _env);
          tmpMeta[0+0] = _cls;
          tmpMeta[0+1] = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inClass;
          tmpMeta[0+1] = _inEnv;
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
  _outClass = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outClass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_updateClassExtends(threadData_t *threadData, modelica_metatype _inClass, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype *out_outEnv)
{
  modelica_metatype _outClass = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClass has no default value.
  // _outEnv has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inEnv;
    tmp4_2 = _inClassType;
    {
      modelica_string _name = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _ext = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _mods has no default value.
      // _info has no default value.
      // _ext has no default value.
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
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (optionNone(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          
          _name = tmpMeta9;
          _ext = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta13 = _ext;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,5) == 0) goto goto_2;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 6));
          _mods = tmpMeta14;
          _info = tmpMeta15;
          tmpMeta[0+0] = omc_NFEnvExtends_updateClassExtends2(threadData, _inClass, _name, _mods, _info, _inEnv, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inClass;
          tmpMeta[0+1] = _inEnv;
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
  _outClass = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outClass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_update3(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _inEnv)
{
  modelica_metatype _item = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _item;
    {
      modelica_metatype _env = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _cls_ty = NULL;
      modelica_metatype _cls_env = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _env has no default value.
      // _cls has no default value.
      // _cls_ty has no default value.
      // _cls_env has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (listEmpty(tmpMeta6)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (!listEmpty(tmpMeta8)) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          _cls = tmpMeta5;
          _cls_env = tmpMeta7;
          _cls_ty = tmpMeta9;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_enterFrame(threadData, _cls_env, _inEnv);

          _cls = omc_NFEnvExtends_updateClassExtends(threadData, _cls, _env, _cls_ty ,&_env);

          /* Pattern-matching assignment */
          tmpMeta10 = omc_NFEnvExtends_update2(threadData, _env);
          if (listEmpty(tmpMeta10)) goto goto_1;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          _cls_env = tmpMeta11;

          tmpMeta13 = mmc_mk_cons(_cls_env, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta14 = mmc_mk_box4(4, &NFSCodeEnv_Item_CLASS__desc, _cls, tmpMeta13, _cls_ty);
          _item = tmpMeta14;
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
  return _item;
}

static modelica_metatype closure0_NFEnvExtends_update3(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_item)
{
  modelica_metatype inEnv = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFEnvExtends_update3(thData, name, $in_item, inEnv);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_update2(threadData_t *threadData, modelica_metatype _inEnv)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype _rest_env = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype _bcl = NULL;
  modelica_metatype _re = NULL;
  modelica_metatype _imps = NULL;
  modelica_metatype _iu = NULL;
  modelica_metatype tmpMeta1;
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
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  // _env has no default value.
  // _rest_env has no default value.
  // _name has no default value.
  // _ty has no default value.
  // _tree has no default value.
  // _bcl has no default value.
  // _re has no default value.
  // _imps has no default value.
  // _iu has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inEnv;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 7));
  _name = tmpMeta4;
  _ty = tmpMeta5;
  _tree = tmpMeta6;
  _bcl = tmpMeta8;
  _re = tmpMeta9;
  _imps = tmpMeta10;
  _iu = tmpMeta11;
  _rest_env = tmpMeta3;

  tmpMeta12 = mmc_mk_box1(0, _inEnv);
  _tree = omc_NFSCodeEnv_EnvTree_map(threadData, _tree, (modelica_fnptr) mmc_mk_box2(0,closure0_NFEnvExtends_update3,tmpMeta12));

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta15 = mmc_mk_box4(3, &NFSCodeEnv_ExtendsTable_EXTENDS__TABLE__desc, _bcl, tmpMeta14, mmc_mk_none());
  tmpMeta16 = mmc_mk_box7(3, &NFSCodeEnv_Frame_FRAME__desc, _name, _ty, _tree, tmpMeta15, _imps, _iu);
  tmpMeta13 = mmc_mk_cons(tmpMeta16, _rest_env);
  _env = tmpMeta13;

  _outEnv = omc_NFSCodeFlattenRedeclare_addElementRedeclarationsToEnv(threadData, _re, _env);
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_updateQualifiedInTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_integer _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(4, &NFEnvExtends_ExtendsWrapper_QUALIFIED__EXTENDS__desc, _inExtends);
  arrayUpdate(_inExtendsTable, _inIndex, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFEnvExtends_updateQualifiedInTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inIndex);
  omc_NFEnvExtends_updateQualifiedInTable(threadData, _inExtends, tmp1, _inExtendsTable);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_addUnqualifiedToTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_integer _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box2(3, &NFEnvExtends_ExtendsWrapper_UNQUALIFIED__EXTENDS__desc, _inExtends);
  arrayUpdate(_inExtendsTable, _inIndex, tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NFEnvExtends_addUnqualifiedToTable(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_inIndex);
  omc_NFEnvExtends_addUnqualifiedToTable(threadData, _inExtends, tmp1, _inExtendsTable);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupQualifiedExtends2(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExtends;
    {
      modelica_metatype _ext = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ext has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _ext = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_ext);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_none();
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
  _outExtends = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupQualifiedExtends(threadData_t *threadData, modelica_integer _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype _ext = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  // _ext has no default value.
  _ext = arrayGet(_inExtendsTable, _inIndex);

  _outExtends = omc_NFEnvExtends_lookupQualifiedExtends2(threadData, _ext, _inExtendsTable);
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupQualifiedExtends(threadData_t *threadData, modelica_metatype _inIndex, modelica_metatype _inExtendsTable)
{
  modelica_integer tmp1;
  modelica_metatype _outExtends = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outExtends = omc_NFEnvExtends_lookupQualifiedExtends(threadData, tmp1, _inExtendsTable);
  /* skip box _outExtends; Option<NFSCodeEnv.Extends> */
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_createExtendsTable(threadData_t *threadData, modelica_integer _inSize)
{
  modelica_metatype _outTable = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTable has no default value.
  _outTable = arrayCreate(_inSize, _OMC_LIT14);
  _return: OMC_LABEL_UNUSED
  return _outTable;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_createExtendsTable(threadData_t *threadData, modelica_metatype _inSize)
{
  modelica_integer tmp1;
  modelica_metatype _outTable = NULL;
  tmp1 = mmc_unbox_integer(_inSize);
  _outTable = omc_NFEnvExtends_createExtendsTable(threadData, tmp1);
  /* skip box _outTable; array<NFEnvExtends.ExtendsWrapper> */
  return _outTable;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupFullyQualified2(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outEnv has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inName;
    {
      modelica_string _name = NULL;
      modelica_metatype _rest_path = NULL;
      modelica_metatype _item = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _rest_path has no default value.
      // _item has no default value.
      // _env has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = omc_NFEnvExtends_lookupInLocalScope(threadData, _name, _inEnv, _inExtendsTable, NULL, &tmpMeta7, NULL);
          if (optionNone(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          _item = tmpMeta10;
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _env = tmpMeta8;
          tmpMeta[0+0] = _item;
          tmpMeta[0+1] = _env;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _name = tmpMeta11;
          _rest_path = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta15 = omc_NFEnvExtends_lookupInLocalScope(threadData, _name, _inEnv, _inExtendsTable, NULL, &tmpMeta13, NULL);
          if (optionNone(tmpMeta15)) goto goto_2;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          _item = tmpMeta16;
          if (optionNone(tmpMeta13)) goto goto_2;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
          _env = tmpMeta14;

          _env = omc_NFSCodeEnv_mergeItemEnv(threadData, _item, _env);
          /* Tail recursive call */
          _inName = _rest_path;
          _inEnv = _env;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outItem = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupFullyQualified(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype _env = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outEnv has no default value.
  // _env has no default value.
  _env = omc_NFSCodeEnv_getEnvTopScope(threadData, _inEnv);

  _outItem = omc_NFEnvExtends_lookupFullyQualified2(threadData, _inName, _env, _inExtendsTable ,&_outEnv);
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInUnqualifiedImports(threadData_t *threadData, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outPath = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outPath has no default value.
  // _outEnv has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inImports;
    {
      modelica_metatype _item = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _rest_imps = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _item has no default value.
      // _path has no default value.
      // _rest_imps has no default value.
      // _env has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _path = tmpMeta8;
          /* Pattern matching succeeded */
          _item = omc_NFEnvExtends_lookupFullyQualified(threadData, _path, _inEnv, _inExtendsTable ,&_env);

          _env = omc_NFSCodeEnv_mergeItemEnv(threadData, _item, _env);

          tmpMeta9 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inName);
          _item = omc_NFEnvExtends_lookupFullyQualified2(threadData, tmpMeta9, _env, _inExtendsTable ,&_env);

          _path = omc_NFSCodeEnv_prefixIdentWithEnv(threadData, _inName, _env);

          _path = omc_AbsynUtil_makeFullyQualified(threadData, _path);
          tmpMeta[0+0] = mmc_mk_some(_item);
          tmpMeta[0+1] = mmc_mk_some(_path);
          tmpMeta[0+2] = mmc_mk_some(_env);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest_imps = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFEnvExtends_lookupInUnqualifiedImports(threadData, _inName, _rest_imps, _inEnv, _inExtendsTable, &tmpMeta[0+1], &tmpMeta[0+2]);
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
  _outItem = tmpMeta[0+0];
  _outPath = tmpMeta[0+1];
  _outEnv = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outPath) { *out_outPath = _outPath; }
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInQualifiedImports(threadData_t *threadData, modelica_string _inName, modelica_metatype _inImports, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outPath = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outPath has no default value.
  // _outEnv has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inImports;
    {
      modelica_string _name = NULL;
      modelica_metatype _path = NULL;
      modelica_metatype _item = NULL;
      modelica_metatype _rest_imps = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _path has no default value.
      // _item has no default value.
      // _rest_imps has no default value.
      // _env has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _name = tmpMeta8;
          _rest_imps = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_inName, _name));
          if (0 /* false */ != tmp9) goto goto_2;
          tmpMeta[0+0] = omc_NFEnvExtends_lookupInQualifiedImports(threadData, _inName, _rest_imps, _inEnv, _inExtendsTable, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          _name = tmpMeta12;
          _path = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (stringEqual(_inName, _name));
          if (1 /* true */ != tmp14) goto goto_2;

          _item = omc_NFEnvExtends_lookupFullyQualified(threadData, _path, _inEnv, _inExtendsTable ,&_env);

          _path = omc_NFSCodeEnv_prefixIdentWithEnv(threadData, _inName, _env);

          _path = omc_AbsynUtil_makeFullyQualified(threadData, _path);
          tmpMeta[0+0] = mmc_mk_some(_item);
          tmpMeta[0+1] = mmc_mk_some(_path);
          tmpMeta[0+2] = mmc_mk_some(_env);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          
          _name = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = (stringEqual(_inName, _name));
          if (1 /* true */ != tmp18) goto goto_2;
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = mmc_mk_none();
          tmpMeta[0+2] = mmc_mk_none();
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
  _outItem = tmpMeta[0+0];
  _outPath = tmpMeta[0+1];
  _outEnv = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outPath) { *out_outPath = _outPath; }
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInBaseClasses2(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outEnv has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExtends;
    {
      modelica_metatype _bc = NULL;
      modelica_metatype _item = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _opt_item = NULL;
      modelica_metatype _opt_env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bc has no default value.
      // _item has no default value.
      // _env has no default value.
      // _opt_item has no default value.
      // _opt_env has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _bc = tmpMeta8;
          /* Pattern matching succeeded */
          _item = omc_NFEnvExtends_lookupFullyQualified(threadData, _bc, _inEnv, _inExtendsTable ,&_env);

          _env = omc_NFSCodeEnv_mergeItemEnv(threadData, _item, _env);

          _env = omc_NFSCodeEnv_setImportTableHidden(threadData, _env, 1 /* true */);

          _opt_item = omc_NFEnvExtends_lookupInLocalScope(threadData, _inName, _env, _inExtendsTable ,NULL ,&_opt_env ,NULL);
          tmpMeta[0+0] = _opt_item;
          tmpMeta[0+1] = _opt_env;
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
  _outItem = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInBaseClasses(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outEnv)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outEnv has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExtends;
    {
      modelica_metatype _ext = NULL;
      modelica_metatype _rest_ext = NULL;
      modelica_metatype _opt_ext = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ext has no default value.
      // _rest_ext has no default value.
      // _opt_ext has no default value.
      // _env has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _ext = tmpMeta6;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_setImportTableHidden(threadData, _inEnv, 0 /* false */);

          _opt_ext = omc_NFEnvExtends_qualifyExtends2(threadData, _ext, _env, _inExtendsTable);
          tmpMeta[0+0] = omc_NFEnvExtends_lookupInBaseClasses2(threadData, _inName, _opt_ext, _env, _inExtendsTable, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _rest_ext = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFEnvExtends_lookupInBaseClasses(threadData, _inName, _rest_ext, _inEnv, _inExtendsTable, &tmpMeta[0+1]);
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
  _outItem = tmpMeta[0+0];
  _outEnv = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupInLocalScope(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_boolean *out_outFromExtends)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outPath = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_boolean _outFromExtends;
  modelica_boolean tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outPath has no default value.
  // _outEnv has no default value.
  // _outFromExtends has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEnv;
    {
      modelica_metatype _item = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _oitem = NULL;
      modelica_metatype _opath = NULL;
      modelica_metatype _oenv = NULL;
      modelica_metatype _bcl = NULL;
      modelica_metatype _imps = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _item has no default value.
      // _env has no default value.
      // _oitem has no default value.
      // _opath has no default value.
      // _oenv has no default value.
      // _bcl has no default value.
      // _imps has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _item = omc_NFSCodeLookup_lookupInClass(threadData, _inName, _inEnv ,&_env);
          tmpMeta6 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inName);
          tmpMeta[0+0] = mmc_mk_some(_item);
          tmpMeta[0+1] = mmc_mk_some(tmpMeta6);
          tmpMeta[0+2] = mmc_mk_some(_env);
          tmp1_c3 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          
          _bcl = tmpMeta10;
          /* Pattern matching succeeded */
          _oitem = omc_NFEnvExtends_lookupInBaseClasses(threadData, _inName, _bcl, _inEnv, _inExtendsTable ,&_oenv);
          tmpMeta13 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inName);
          tmpMeta[0+0] = _oitem;
          tmpMeta[0+1] = mmc_mk_some(tmpMeta13);
          tmpMeta[0+2] = _oenv;
          tmp1_c3 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 6));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (0 /* false */ != tmp18) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          
          _imps = tmpMeta19;
          /* Pattern matching succeeded */
          _oitem = omc_NFEnvExtends_lookupInQualifiedImports(threadData, _inName, _imps, _inEnv, _inExtendsTable ,&_opath ,&_oenv);
          tmpMeta[0+0] = _oitem;
          tmpMeta[0+1] = _opath;
          tmpMeta[0+2] = _oenv;
          tmp1_c3 = 0 /* false */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmp4_1);
          tmpMeta21 = MMC_CDR(tmp4_1);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 6));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          if (0 /* false */ != tmp24) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 4));
          
          _imps = tmpMeta25;
          /* Pattern matching succeeded */
          _oitem = omc_NFEnvExtends_lookupInUnqualifiedImports(threadData, _inName, _imps, _inEnv, _inExtendsTable ,&_opath ,&_oenv);
          tmpMeta[0+0] = _oitem;
          tmpMeta[0+1] = _opath;
          tmpMeta[0+2] = _oenv;
          tmp1_c3 = 0 /* false */;
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outItem = tmpMeta[0+0];
  _outPath = tmpMeta[0+1];
  _outEnv = tmpMeta[0+2];
  _outFromExtends = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_outPath) { *out_outPath = _outPath; }
  if (out_outEnv) { *out_outEnv = _outEnv; }
  if (out_outFromExtends) { *out_outFromExtends = _outFromExtends; }
  return _outItem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupInLocalScope(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_metatype *out_outFromExtends)
{
  modelica_boolean _outFromExtends;
  modelica_metatype _outItem = NULL;
  _outItem = omc_NFEnvExtends_lookupInLocalScope(threadData, _inName, _inEnv, _inExtendsTable, out_outPath, out_outEnv, &_outFromExtends);
  /* skip box _outItem; Option<NFSCodeEnv.Item> */
  /* skip box _outPath; Option<Absyn.Path> */
  /* skip box _outEnv; Option<list<NFSCodeEnv.Frame>> */
  if (out_outFromExtends) { *out_outFromExtends = mmc_mk_icon(_outFromExtends); }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_lookupSimpleName(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_boolean *out_outFromExtends)
{
  modelica_metatype _outItem = NULL;
  modelica_metatype _outPath = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_boolean _outFromExtends;
  modelica_boolean tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outItem has no default value.
  // _outPath has no default value.
  // _outEnv has no default value.
  // _outFromExtends has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEnv;
    {
      modelica_metatype _frame_type = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _opt_item = NULL;
      modelica_metatype _opt_env = NULL;
      modelica_metatype _opt_path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _frame_type has no default value.
      // _env has no default value.
      // _opt_item has no default value.
      // _opt_env has no default value.
      // _opt_path has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFEnvExtends_lookupInLocalScope(threadData, _inName, _inEnv, _inExtendsTable, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _frame_type = tmpMeta8;
          _env = tmpMeta7;
          /* Pattern matching succeeded */
          omc_NFSCodeLookup_frameNotEncapsulated(threadData, _frame_type);

          _opt_item = omc_NFEnvExtends_lookupSimpleName(threadData, _inName, _env, _inExtendsTable ,&_opt_path ,&_opt_env ,NULL);
          tmpMeta[0+0] = _opt_item;
          tmpMeta[0+1] = _opt_path;
          tmpMeta[0+2] = _opt_env;
          tmp1_c3 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = mmc_mk_none();
          tmpMeta[0+2] = mmc_mk_none();
          tmp1_c3 = 0 /* false */;
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
  _outItem = tmpMeta[0+0];
  _outPath = tmpMeta[0+1];
  _outEnv = tmpMeta[0+2];
  _outFromExtends = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_outPath) { *out_outPath = _outPath; }
  if (out_outEnv) { *out_outEnv = _outEnv; }
  if (out_outFromExtends) { *out_outFromExtends = _outFromExtends; }
  return _outItem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_lookupSimpleName(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype *out_outPath, modelica_metatype *out_outEnv, modelica_metatype *out_outFromExtends)
{
  modelica_boolean _outFromExtends;
  modelica_metatype _outItem = NULL;
  _outItem = omc_NFEnvExtends_lookupSimpleName(threadData, _inName, _inEnv, _inExtendsTable, out_outPath, out_outEnv, &_outFromExtends);
  /* skip box _outItem; Option<NFSCodeEnv.Item> */
  /* skip box _outPath; Option<Absyn.Path> */
  /* skip box _outEnv; Option<list<NFSCodeEnv.Frame>> */
  if (out_outFromExtends) { *out_outFromExtends = mmc_mk_icon(_outFromExtends); }
  return _outItem;
}

PROTECTED_FUNCTION_STATIC void omc_NFEnvExtends_printInheritedExtendsError(threadData_t *threadData, modelica_string _inName, modelica_metatype _inExtends, modelica_metatype _inEnv)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inExtends;
    {
      modelica_metatype _rest_ext = NULL;
      modelica_metatype _ext = NULL;
      modelica_metatype _item = NULL;
      modelica_metatype _info1 = NULL;
      modelica_metatype _info2 = NULL;
      modelica_metatype _bc = NULL;
      modelica_string _bc_str = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _rest_ext has no default value.
      // _ext has no default value.
      // _item has no default value.
      // _info1 has no default value.
      // _info2 has no default value.
      // _bc has no default value.
      // _bc_str has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
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
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          _ext = tmpMeta5;
          _bc = tmpMeta7;
          _info2 = tmpMeta8;
          _rest_ext = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = omc_NFSCodeLookup_lookupInBaseClasses3(threadData, _inName, _ext, _inEnv, _inEnv, _OMC_LIT15, tmpMeta9, NULL, NULL);
          if (optionNone(tmpMeta10)) goto goto_1;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          _item = tmpMeta11;

          _info1 = omc_NFSCodeEnv_getItemInfo(threadData, _item);

          /* Pattern-matching assignment */
          tmpMeta12 = _ext;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 5));
          _bc = tmpMeta13;
          _info2 = tmpMeta14;

          _bc = omc_AbsynUtil_makeNotFullyQualified(threadData, _bc);

          _bc_str = omc_AbsynUtil_pathString(threadData, _bc, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Error_addSourceMessage(threadData, _OMC_LIT19, tmpMeta15, _info1);

          tmpMeta16 = mmc_mk_cons(_inName, mmc_mk_cons(_bc_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT21, tmpMeta16, _info2);

          omc_NFEnvExtends_printInheritedExtendsError(threadData, _inName, _rest_ext, _inEnv);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta17 = MMC_CAR(tmp3_1);
          tmpMeta18 = MMC_CDR(tmp3_1);
          _rest_ext = tmpMeta18;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          omc_NFEnvExtends_printInheritedExtendsError(threadData, _inName, _rest_ext, _inEnv);
          goto tmp2_done;
        }
        case 2: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
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
void omc_NFEnvExtends_printExtendsError2(threadData_t *threadData, modelica_string _inError, modelica_metatype _inBaseClass, modelica_metatype _inPartPath, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inPartPath;
    {
      modelica_string _bc_str = NULL;
      modelica_string _env_str = NULL;
      modelica_string _part = NULL;
      modelica_metatype _exts = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _bc_str has no default value.
      // _env_str has no default value.
      // _part has no default value.
      // _exts has no default value.
      // _info has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_boolean tmp5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (stringEqual(_inError, _OMC_LIT22));
          if (1 /* true */ != tmp5) goto goto_1;

          _bc_str = omc_AbsynUtil_pathString(threadData, _inBaseClass, _OMC_LIT16, 1 /* true */, 0 /* false */);

          _env_str = omc_NFSCodeEnv_getEnvName(threadData, _inEnv);

          tmpMeta6 = mmc_mk_cons(_bc_str, mmc_mk_cons(_env_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT24, tmpMeta6, _inInfo);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _part = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_inError, _OMC_LIT25));
          if (1 /* true */ != tmp8) goto goto_1;

          _bc_str = omc_AbsynUtil_pathString(threadData, _inBaseClass, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta9 = mmc_mk_cons(_bc_str, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta9, _inInfo);

          _exts = omc_NFSCodeEnv_getEnvExtendsFromTable(threadData, _inEnv);

          omc_NFEnvExtends_printInheritedExtendsError(threadData, _part, _exts, _inEnv);
          goto tmp2_done;
        }
        case 2: {
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (stringEqual(_inError, _OMC_LIT28));
          if (1 /* true */ != tmp10) goto goto_1;

          /* Pattern-matching tuple assignment */
          tmpMeta11 = omc_NFSCodeLookup_lookupFullyQualified(threadData, _inPartPath, _inEnv, NULL, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,3) == 0) goto goto_1;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,8) == 0) goto goto_1;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 9));
          _part = tmpMeta13;
          _info = tmpMeta14;

          _bc_str = omc_AbsynUtil_pathString(threadData, _inBaseClass, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Error_addSourceMessage(threadData, _OMC_LIT19, tmpMeta15, _inInfo);

          tmpMeta16 = mmc_mk_cons(_part, mmc_mk_cons(_bc_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT30, tmpMeta16, _info);
          goto tmp2_done;
        }
        case 3: {
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = (stringEqual(_inError, _OMC_LIT31));
          if (1 /* true */ != tmp17) goto goto_1;

          /* Pattern-matching tuple assignment */
          tmpMeta18 = omc_NFSCodeLookup_lookupFullyQualified(threadData, _inPartPath, _inEnv, NULL, NULL);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,2) == 0) goto goto_1;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,3,8) == 0) goto goto_1;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 9));
          _part = tmpMeta20;
          _info = tmpMeta21;

          _bc_str = omc_AbsynUtil_pathString(threadData, _inBaseClass, _OMC_LIT16, 1 /* true */, 0 /* false */);

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_Error_addSourceMessage(threadData, _OMC_LIT19, tmpMeta22, _info);

          tmpMeta23 = mmc_mk_cons(_part, mmc_mk_cons(_bc_str, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT33, tmpMeta23, _inInfo);
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
      if (++tmp3 < 4) {
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
void omc_NFEnvExtends_printExtendsError(threadData_t *threadData, modelica_metatype _inErrorPath, modelica_metatype _inEnv, modelica_metatype _inInfo)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inErrorPath;
    {
      modelica_string _err_str = NULL;
      modelica_metatype _bc = NULL;
      modelica_metatype _part = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _err_str has no default value.
      // _bc has no default value.
      // _part has no default value.
      // _env has no default value.
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
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (2 != MMC_STRLEN(tmpMeta5) || strcmp(MMC_STRINGDATA(_OMC_LIT38), MMC_STRINGDATA(tmpMeta5)) != 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _err_str = tmpMeta7;
          _bc = tmpMeta8;
          /* Pattern matching succeeded */
          _bc = omc_NFEnvExtends_splitExtendsErrorPath(threadData, _bc ,&_part);

          _env = omc_NFSCodeEnv_removeExtendFromLocalScope(threadData, _inErrorPath, _inEnv);

          omc_NFEnvExtends_printExtendsError2(threadData, _err_str, _bc, _part, _env, _inInfo);
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Flags_isSet(threadData, _OMC_LIT36);
          if (1 /* true */ != tmp9) goto goto_1;

          tmpMeta10 = stringAppend(_OMC_LIT37,omc_AbsynUtil_pathString(threadData, _inErrorPath, _OMC_LIT16, 1 /* true */, 0 /* false */));
          omc_Debug_traceln(threadData, tmpMeta10);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_splitExtendsErrorPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype *out_outPartPath)
{
  modelica_metatype _outBaseClass = NULL;
  modelica_metatype _outPartPath = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBaseClass has no default value.
  // _outPartPath has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPath;
    {
      modelica_string _part_str = NULL;
      modelica_metatype _part = NULL;
      modelica_metatype _bc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _part_str has no default value.
      // _part has no default value.
      // _bc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (3 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _part_str = tmpMeta6;
          _bc = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _part_str);
          tmpMeta[0+0] = _bc;
          tmpMeta[0+1] = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _part_str = tmpMeta11;
          _part = tmpMeta12;
          /* Pattern matching succeeded */
          _bc = omc_NFEnvExtends_splitExtendsErrorPath(threadData, _part ,&_part);
          tmpMeta13 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _part_str, _part);
          tmpMeta[0+0] = _bc;
          tmpMeta[0+1] = tmpMeta13;
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
  _outBaseClass = tmpMeta[0+0];
  _outPartPath = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outPartPath) { *out_outPartPath = _outPartPath; }
  return _outBaseClass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_checkExtendsPart(threadData_t *threadData, modelica_boolean _inIsFirst, modelica_boolean _inFromExtends, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inBaseClass, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv)
{
  modelica_metatype _outErrorPath = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outErrorPath has no default value.
  { /* matchcontinue expression */
    volatile modelica_boolean tmp4_1;volatile modelica_boolean tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _inIsFirst;
    tmp4_2 = _inFromExtends;
    tmp4_3 = _inItem;
    {
      modelica_metatype _part = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _part has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFEnvExtends_makeExtendsError(threadData, _inBaseClass, _inPartName, _OMC_LIT25);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,3) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = mmc_mk_none();
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _part = omc_NFSCodeEnv_mergePathWithEnvPath(threadData, _inPartName, _inFoundEnv);
          tmpMeta1 = omc_NFEnvExtends_makeExtendsError(threadData, _inBaseClass, _part, _OMC_LIT31);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFEnvExtends_makeExtendsError(threadData, _inBaseClass, _inPartName, _OMC_LIT40);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outErrorPath = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outErrorPath;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_checkExtendsPart(threadData_t *threadData, modelica_metatype _inIsFirst, modelica_metatype _inFromExtends, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inBaseClass, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outErrorPath = NULL;
  tmp1 = mmc_unbox_integer(_inIsFirst);
  tmp2 = mmc_unbox_integer(_inFromExtends);
  _outErrorPath = omc_NFEnvExtends_checkExtendsPart(threadData, tmp1, tmp2, _inPartName, _inItem, _inBaseClass, _inFoundEnv, _inOriginEnv);
  /* skip box _outErrorPath; Option<Absyn.Path> */
  return _outErrorPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_makeExtendsError(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inPart, modelica_string _inError)
{
  modelica_metatype _outError = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outError has no default value.
  { /* match expression */
    {
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _OMC_LIT39, _inBaseClass);
          _path = omc_AbsynUtil_joinPaths(threadData, _inPart, tmpMeta6);

          tmpMeta7 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _inError, _path);
          tmpMeta8 = mmc_mk_box3(3, &Absyn_Path_QUALIFIED__desc, _OMC_LIT38, tmpMeta7);
          _path = tmpMeta8;
          tmpMeta1 = mmc_mk_some(_path);
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
  _outError = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outError;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsPart2(threadData_t *threadData, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv, modelica_boolean _inIsFirst, modelica_boolean _inFromExtends, modelica_metatype _inFullPath, modelica_metatype *out_outErrorPath)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype _outErrorPath = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  // _outErrorPath has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inItem;
    tmp4_2 = _inFoundEnv;
    {
      modelica_metatype _item = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _ep = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _item has no default value.
      // _env has no default value.
      // _ep has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _item = tmpMeta6;
          _env = tmpMeta7;
          /* Pattern matching succeeded */
          _ep = omc_NFEnvExtends_checkExtendsPart(threadData, _inIsFirst, _inFromExtends, _inPartName, _item, _inFullPath, _env, _inOriginEnv);

          _env = omc_NFSCodeEnv_mergeItemEnv(threadData, _item, _env);
          tmpMeta[0+0] = _env;
          tmpMeta[0+1] = _ep;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta8;
          tmpMeta[0+1] = omc_NFEnvExtends_makeExtendsError(threadData, _inFullPath, _inPartName, _OMC_LIT22);
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
  _outEnv = tmpMeta[0+0];
  _outErrorPath = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outErrorPath) { *out_outErrorPath = _outErrorPath; }
  return _outEnv;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtendsPart2(threadData_t *threadData, modelica_metatype _inPartName, modelica_metatype _inItem, modelica_metatype _inFoundEnv, modelica_metatype _inOriginEnv, modelica_metatype _inIsFirst, modelica_metatype _inFromExtends, modelica_metatype _inFullPath, modelica_metatype *out_outErrorPath)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outEnv = NULL;
  tmp1 = mmc_unbox_integer(_inIsFirst);
  tmp2 = mmc_unbox_integer(_inFromExtends);
  _outEnv = omc_NFEnvExtends_qualifyExtendsPart2(threadData, _inPartName, _inItem, _inFoundEnv, _inOriginEnv, tmp1, tmp2, _inFullPath, out_outErrorPath);
  /* skip box _outEnv; list<NFSCodeEnv.Frame> */
  /* skip box _outErrorPath; Option<Absyn.Path> */
  return _outEnv;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsPart(threadData_t *threadData, modelica_string _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_boolean _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype *out_outEnv, modelica_metatype *out_outErrorPath)
{
  modelica_metatype _outPath = NULL;
  modelica_metatype _outEnv = NULL;
  modelica_metatype _outErrorPath = NULL;
  modelica_metatype _oitem = NULL;
  modelica_metatype _oenv = NULL;
  modelica_boolean _fe;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  // _outEnv has no default value.
  // _outErrorPath has no default value.
  // _oitem has no default value.
  // _oenv has no default value.
  // _fe has no default value.
  _oitem = omc_NFEnvExtends_lookupSimpleName(threadData, _inName, _inEnv, _inExtendsTable ,&_outPath ,&_oenv ,&_fe);

  tmpMeta1 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _inName);
  _outEnv = omc_NFEnvExtends_qualifyExtendsPart2(threadData, tmpMeta1, _oitem, _oenv, _inEnv, _inIsFirst, _fe, _inFullPath ,&_outErrorPath);
  _return: OMC_LABEL_UNUSED
  if (out_outEnv) { *out_outEnv = _outEnv; }
  if (out_outErrorPath) { *out_outErrorPath = _outErrorPath; }
  return _outPath;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtendsPart(threadData_t *threadData, modelica_metatype _inName, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype *out_outEnv, modelica_metatype *out_outErrorPath)
{
  modelica_integer tmp1;
  modelica_metatype _outPath = NULL;
  tmp1 = mmc_unbox_integer(_inIsFirst);
  _outPath = omc_NFEnvExtends_qualifyExtendsPart(threadData, _inName, _inEnv, _inExtendsTable, tmp1, _inFullPath, _inInfo, out_outEnv, out_outErrorPath);
  /* skip box _outPath; Option<Absyn.Path> */
  /* skip box _outEnv; list<NFSCodeEnv.Frame> */
  /* skip box _outErrorPath; Option<Absyn.Path> */
  return _outPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_makeExtendsPath(threadData_t *threadData, modelica_metatype _inFirstPath, modelica_metatype _inRestPath, modelica_metatype _inEnv, modelica_metatype _inErrorPath, modelica_boolean _inIsFirst)
{
  modelica_metatype _outPath = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPath has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_boolean tmp4_4;
    tmp4_1 = _inFirstPath;
    tmp4_2 = _inRestPath;
    tmp4_3 = _inErrorPath;
    tmp4_4 = _inIsFirst;
    {
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_3)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          
          _path = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _path;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (2 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT38), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          
          _path = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _path;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,1) == 0) goto tmp3_end;
          
          _path = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _path;
          goto tmp3_done;
        }
        case 3: {
          if (1 /* true */ != tmp4_4) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _path = omc_NFSCodeEnv_getEnvPath(threadData, _inEnv);

          _path = omc_AbsynUtil_joinPathsOptSuffix(threadData, _path, _inRestPath);
          tmpMeta1 = omc_AbsynUtil_makeFullyQualified(threadData, _path);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          
          _path = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_AbsynUtil_joinPathsOptSuffix(threadData, _path, _inRestPath);
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
  _outPath = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPath;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_makeExtendsPath(threadData_t *threadData, modelica_metatype _inFirstPath, modelica_metatype _inRestPath, modelica_metatype _inEnv, modelica_metatype _inErrorPath, modelica_metatype _inIsFirst)
{
  modelica_integer tmp1;
  modelica_metatype _outPath = NULL;
  tmp1 = mmc_unbox_integer(_inIsFirst);
  _outPath = omc_NFEnvExtends_makeExtendsPath(threadData, _inFirstPath, _inRestPath, _inEnv, _inErrorPath, tmp1);
  /* skip box _outPath; Absyn.Path */
  return _outPath;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends3(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_boolean _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype _inErrorPath)
{
  modelica_metatype _outBaseClass = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBaseClass has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inBaseClass;
    tmp4_2 = _inErrorPath;
    {
      modelica_string _name = NULL;
      modelica_metatype _bc = NULL;
      modelica_metatype _rest_path = NULL;
      modelica_metatype _env = NULL;
      modelica_metatype _ep = NULL;
      modelica_metatype _opath = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      // _bc has no default value.
      // _rest_path has no default value.
      // _env has no default value.
      // _ep has no default value.
      // _opath has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          
          _bc = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _bc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _name = tmpMeta7;
          /* Pattern matching succeeded */
          _opath = omc_NFEnvExtends_qualifyExtendsPart(threadData, _name, _inEnv, _inExtendsTable, _inIsFirst, _inFullPath, _inInfo ,&_env ,&_ep);
          tmpMeta1 = omc_NFEnvExtends_makeExtendsPath(threadData, _opath, mmc_mk_none(), _env, _ep, _inIsFirst);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _name = tmpMeta8;
          _rest_path = tmpMeta9;
          /* Pattern matching succeeded */
          _opath = omc_NFEnvExtends_qualifyExtendsPart(threadData, _name, _inEnv, _inExtendsTable, _inIsFirst, _inFullPath, _inInfo ,&_env ,&_ep);

          _rest_path = omc_NFEnvExtends_qualifyExtends3(threadData, _rest_path, _env, _inExtendsTable, 0 /* false */, _inFullPath, _inInfo, _ep);
          tmpMeta1 = omc_NFEnvExtends_makeExtendsPath(threadData, _opath, mmc_mk_some(_rest_path), _env, _ep, _inIsFirst);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _rest_path = tmpMeta10;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_getEnvTopScope(threadData, _inEnv);
          /* Tail recursive call */
          _inBaseClass = _rest_path;
          _inEnv = _env;
          _inFullPath = _rest_path;
          _inErrorPath = mmc_mk_none();
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outBaseClass = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outBaseClass;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFEnvExtends_qualifyExtends3(threadData_t *threadData, modelica_metatype _inBaseClass, modelica_metatype _inEnv, modelica_metatype _inExtendsTable, modelica_metatype _inIsFirst, modelica_metatype _inFullPath, modelica_metatype _inInfo, modelica_metatype _inErrorPath)
{
  modelica_integer tmp1;
  modelica_metatype _outBaseClass = NULL;
  tmp1 = mmc_unbox_integer(_inIsFirst);
  _outBaseClass = omc_NFEnvExtends_qualifyExtends3(threadData, _inBaseClass, _inEnv, _inExtendsTable, tmp1, _inFullPath, _inInfo, _inErrorPath);
  /* skip box _outBaseClass; Absyn.Path */
  return _outBaseClass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends2(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExtends;
    {
      modelica_metatype _bc = NULL;
      modelica_metatype _rl = NULL;
      modelica_integer _index;
      modelica_metatype _info = NULL;
      modelica_metatype _ext = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _bc has no default value.
      // _rl has no default value.
      // _index has no default value.
      // _info has no default value.
      // _ext has no default value.
      // _env has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _index = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFEnvExtends_lookupQualifiedExtends(threadData, _index, _inExtendsTable);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _bc = tmpMeta8;
          _rl = tmpMeta9;
          _index = tmp11  /* pattern as ty=Integer */;
          _info = tmpMeta12;
          /* Pattern matching succeeded */
          omc_NFEnvExtends_addUnqualifiedToTable(threadData, _inExtends, _index, _inExtendsTable);

          _env = omc_NFSCodeEnv_removeExtendFromLocalScope(threadData, _bc, _inEnv);

          _bc = omc_NFEnvExtends_qualifyExtends3(threadData, _bc, _env, _inExtendsTable, 1 /* true */, _bc, _info, mmc_mk_none());

          omc_List_map2__0(threadData, _rl, boxvar_NFSCodeCheck_checkRedeclareModifier, _bc, _inEnv);

          tmpMeta13 = mmc_mk_box5(3, &NFSCodeEnv_Extends_EXTENDS__desc, _bc, _rl, mmc_mk_integer(_index), _info);
          _ext = tmpMeta13;

          omc_NFEnvExtends_updateQualifiedInTable(threadData, _ext, _index, _inExtendsTable);
          tmpMeta1 = mmc_mk_some(_ext);
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
  _outExtends = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtends(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inEnv, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExtends;
    {
      modelica_string _id = NULL;
      modelica_metatype _ext = NULL;
      modelica_metatype _bc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _id has no default value.
      // _ext has no default value.
      // _bc has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _id = tmpMeta7;
          /* Pattern matching succeeded */
          omc_NFSCodeLookup_lookupBuiltinType(threadData, _id);
          tmpMeta1 = _inExtends;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = omc_NFEnvExtends_qualifyExtends2(threadData, _inExtends, _inEnv, _inExtendsTable);
          if (optionNone(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          _ext = tmpMeta9;
          tmpMeta1 = _ext;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _bc = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_Flags_isSet(threadData, _OMC_LIT36);
          if (1 /* true */ != tmp11) goto goto_2;

          tmpMeta12 = stringAppend(_OMC_LIT41,omc_AbsynUtil_pathString(threadData, _bc, _OMC_LIT16, 1 /* true */, 0 /* false */));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT42);
          omc_Debug_traceln(threadData, tmpMeta13);
          goto goto_2;
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
  _outExtends = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyExtendsList(threadData_t *threadData, modelica_metatype _inExtends, modelica_metatype _inClassType, modelica_metatype _inEnv, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outExtends = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExtends has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExtends;
    tmp4_2 = _inClassType;
    {
      modelica_metatype _ext = NULL;
      modelica_metatype _extl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ext has no default value.
      // _extl has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          _ext = tmpMeta6;
          _extl = tmpMeta7;
          /* Pattern matching succeeded */
          _extl = omc_List_map2Reverse(threadData, _extl, boxvar_NFEnvExtends_qualifyExtends, _inEnv, _inExtendsTable);
          tmpMeta8 = mmc_mk_cons(_ext, _extl);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_map2Reverse(threadData, _inExtends, boxvar_NFEnvExtends_qualifyExtends, _inEnv, _inExtendsTable);
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
  _outExtends = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExtends;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualifyLocalScope(threadData_t *threadData, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype _exts = NULL;
  modelica_metatype _re = NULL;
  modelica_metatype _cei = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  // _exts has no default value.
  // _re has no default value.
  // _cei has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFSCodeEnv_getEnvExtendsTable(threadData, _inEnv);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _exts = tmpMeta2;
  _re = tmpMeta3;
  _cei = tmpMeta4;

  _exts = omc_NFEnvExtends_qualifyExtendsList(threadData, _exts, _inClassType, _inEnv, _inExtendsTable);

  tmpMeta5 = mmc_mk_box4(3, &NFSCodeEnv_ExtendsTable_EXTENDS__TABLE__desc, _exts, _re, _cei);
  _outEnv = omc_NFSCodeEnv_setEnvExtendsTable(threadData, tmpMeta5, _inEnv);
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualify3(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fitem, modelica_metatype _inEnv, modelica_metatype _inExtendsTable)
{
  modelica_metatype _item = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _item = __omcQ_24in_5Fitem;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _item;
    {
      modelica_metatype _cls = NULL;
      modelica_metatype _cls_env = NULL;
      modelica_metatype _cls_ty = NULL;
      modelica_metatype _env = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cls has no default value.
      // _cls_env has no default value.
      // _cls_ty has no default value.
      // _env has no default value.
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
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _cls = tmpMeta6;
          _cls_env = tmpMeta8;
          _cls_ty = tmpMeta10;
          /* Pattern matching succeeded */
          _env = omc_NFSCodeEnv_enterFrame(threadData, _cls_env, _inEnv);

          /* Pattern-matching assignment */
          tmpMeta11 = omc_NFEnvExtends_qualify2(threadData, _env, _cls_ty, _inExtendsTable);
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          _cls_env = tmpMeta12;
          tmpMeta14 = mmc_mk_cons(_cls_env, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta15 = mmc_mk_box4(4, &NFSCodeEnv_Item_CLASS__desc, _cls, tmpMeta14, _cls_ty);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _item;
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
  _item = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _item;
}

static modelica_metatype closure1_NFEnvExtends_qualify3(threadData_t *thData, modelica_metatype closure, modelica_string name, modelica_metatype $in_item)
{
  modelica_metatype inEnv = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inExtendsTable = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFEnvExtends_qualify3(thData, name, $in_item, inEnv, inExtendsTable);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFEnvExtends_qualify2(threadData_t *threadData, modelica_metatype _inEnv, modelica_metatype _inClassType, modelica_metatype _inExtendsTable)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype _env = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  // _env has no default value.
  // _tree has no default value.
  _env = omc_NFEnvExtends_qualifyLocalScope(threadData, _inEnv, _inClassType, _inExtendsTable);

  /* Pattern-matching assignment */
  tmpMeta1 = _env;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _tree = tmpMeta4;

  tmpMeta5 = mmc_mk_box2(0, _env, _inExtendsTable);
  _tree = omc_NFSCodeEnv_EnvTree_map(threadData, _tree, (modelica_fnptr) mmc_mk_box2(0,closure1_NFEnvExtends_qualify3,tmpMeta5));

  _outEnv = omc_NFSCodeEnv_setEnvClsAndVars(threadData, _tree, _env);
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

DLLDirection
modelica_metatype omc_NFEnvExtends_qualify(threadData_t *threadData, modelica_metatype _inEnv)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _ext_count;
      modelica_metatype _ext_table = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ext_count has no default value.
      // _ext_table has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _ext_count = omc_System_tmpTickIndex(threadData, ((modelica_integer) 3));

          _ext_table = omc_NFEnvExtends_createExtendsTable(threadData, _ext_count);
          tmpMeta1 = omc_NFEnvExtends_qualify2(threadData, _inEnv, _OMC_LIT43, _ext_table);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT36);
          if (1 /* true */ != tmp6) goto goto_2;

          omc_Debug_traceln(threadData, _OMC_LIT44);
          goto goto_2;
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
  _outEnv = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

DLLDirection
modelica_metatype omc_NFEnvExtends_update(threadData_t *threadData, modelica_metatype _inEnv)
{
  modelica_metatype _outEnv = NULL;
  modelica_metatype _env = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEnv has no default value.
  // _env has no default value.
  _env = omc_NFEnvExtends_qualify(threadData, _inEnv);

  _outEnv = omc_NFEnvExtends_update2(threadData, _env);
  _return: OMC_LABEL_UNUSED
  return _outEnv;
}

