#include "omc_simulation_settings.h"
#include "Conversion.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,8) {&ErrorTypes_MessageType_SCRIPTING__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(386)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "No replacement value for placeholder '%s' could be found."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,57,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(388)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "%"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,3) {&Absyn_EqMod_NOMOD__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "convertClass: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,14,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "convertClassIf: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,16,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "convertElement: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,16,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data " => "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,4,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "convertModifiers: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,18,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,0,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "convertMessage: \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,17,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "├─"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,6,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "└─"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,6,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "│ "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,4,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,2,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Invalid conversion rule '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,29,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(385)),_OMC_LIT0,_OMC_LIT25,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "convertMessage"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,14,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "%'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "'%"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,2,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Mismatched % in conversion modifier '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,41,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(387)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "<internal>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,10,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "convertModifiers"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,16,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "convertElement"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,14,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Conversion.parseConvertClassIf: not implemented"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,47,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "convertClass"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,12,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40,0.0);
#define _OMC_LIT40 MMC_REFREALLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT14,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,16) {&Absyn_Exp_ARRAY__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "fill"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,4,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),_OMC_LIT44}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "convertClassIf"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,14,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,2,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data ");\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,3,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "dumpConversionRules"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,19,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "Dumps the rules when converting a package using a conversion script."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,68,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(185)),_OMC_LIT54,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,1,5) {&Conversion_ImportTreeImpl_Tree_EMPTY__desc,}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,7,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,5,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,7,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,4,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,4,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,12,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#include "util/modelica.h"

#include "Conversion_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_Conversion_addComponentTypesToEnv2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _components);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addComponentTypesToEnv2,2,0) {(void*) boxptr_Conversion_addComponentTypesToEnv2,0}};
#define boxvar_Conversion_addComponentTypesToEnv2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addComponentTypesToEnv2)
PROTECTED_FUNCTION_STATIC void omc_Conversion_addComponentTypesToEnv(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _components);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addComponentTypesToEnv,2,0) {(void*) boxptr_Conversion_addComponentTypesToEnv,0}};
#define boxvar_Conversion_addComponentTypesToEnv MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addComponentTypesToEnv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_stripImportPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _importPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_stripImportPath,2,0) {(void*) boxptr_Conversion_stripImportPath,0}};
#define boxvar_Conversion_stripImportPath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_stripImportPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_applyImportsToPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _imports, modelica_metatype *out_importPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_applyImportsToPath,2,0) {(void*) boxptr_Conversion_applyImportsToPath,0}};
#define boxvar_Conversion_applyImportsToPath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_applyImportsToPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImport(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_shadowImport,2,0) {(void*) boxptr_Conversion_shadowImport,0}};
#define boxvar_Conversion_shadowImport MMC_REFSTRUCTLIT(boxvar_lit_Conversion_shadowImport)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInElementSpec(threadData_t *threadData, modelica_metatype _spec, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInElementSpec,2,0) {(void*) boxptr_Conversion_shadowImportsInElementSpec,0}};
#define boxvar_Conversion_shadowImportsInElementSpec MMC_REFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInElementSpec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInElementItem,2,0) {(void*) boxptr_Conversion_shadowImportsInElementItem,0}};
#define boxvar_Conversion_shadowImportsInElementItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInElementItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInParts(threadData_t *threadData, modelica_metatype _parts, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInParts,2,0) {(void*) boxptr_Conversion_shadowImportsInParts,0}};
#define boxvar_Conversion_shadowImportsInParts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_shadowImportsInParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addGroupImportName(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _imp, modelica_metatype _rules, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addGroupImportName,2,0) {(void*) boxptr_Conversion_addGroupImportName,0}};
#define boxvar_Conversion_addGroupImportName MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addGroupImportName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addImportName(threadData_t *threadData, modelica_metatype _imp, modelica_metatype _rules, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addImportName,2,0) {(void*) boxptr_Conversion_addImportName,0}};
#define boxvar_Conversion_addImportName MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addImportName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addImportNamesToEnv(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _rules, modelica_metatype __omcQ_24in_5Fenv);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addImportNamesToEnv,2,0) {(void*) boxptr_Conversion_addImportNamesToEnv,0}};
#define boxvar_Conversion_addImportNamesToEnv MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addImportNamesToEnv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getImportsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5Fimports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getImportsInElementItem,2,0) {(void*) boxptr_Conversion_getImportsInElementItem,0}};
#define boxvar_Conversion_getImportsInElementItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getImportsInElementItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getImportsInParts(threadData_t *threadData, modelica_metatype _parts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getImportsInParts,2,0) {(void*) boxptr_Conversion_getImportsInParts,0}};
#define boxvar_Conversion_getImportsInParts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getImportsInParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsPathsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5FextendsPaths);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getExtendsPathsInElementItem,2,0) {(void*) boxptr_Conversion_getExtendsPathsInElementItem,0}};
#define boxvar_Conversion_getExtendsPathsInElementItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getExtendsPathsInElementItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsPathsInParts(threadData_t *threadData, modelica_metatype _parts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getExtendsPathsInParts,2,0) {(void*) boxptr_Conversion_getExtendsPathsInParts,0}};
#define boxvar_Conversion_getExtendsPathsInParts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getExtendsPathsInParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsRules(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getExtendsRules,2,0) {(void*) boxptr_Conversion_getExtendsRules,0}};
#define boxvar_Conversion_getExtendsRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getExtendsRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertOption(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fopt, modelica_fnptr _optFunc, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertOption,2,0) {(void*) boxptr_Conversion_convertOption,0}};
#define boxvar_Conversion_convertOption MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertOption)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertNamedArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertNamedArg,2,0) {(void*) boxptr_Conversion_convertNamedArg,0}};
#define boxvar_Conversion_convertNamedArg MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertNamedArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertFunctionArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fargs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertFunctionArgs,2,0) {(void*) boxptr_Conversion_convertFunctionArgs,0}};
#define boxvar_Conversion_convertFunctionArgs MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertFunctionArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_applyRulesPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rules, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_applyRulesPath,2,0) {(void*) boxptr_Conversion_applyRulesPath,0}};
#define boxvar_Conversion_applyRulesPath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_applyRulesPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rules, modelica_metatype _imports, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertPath,2,0) {(void*) boxptr_Conversion_convertPath,0}};
#define boxvar_Conversion_convertPath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsub, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertSubscript,2,0) {(void*) boxptr_Conversion_convertSubscript,0}};
#define boxvar_Conversion_convertSubscript MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertSubscript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertSubscripts,2,0) {(void*) boxptr_Conversion_convertSubscripts,0}};
#define boxvar_Conversion_convertSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertSubscripts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCrefSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertCrefSubscripts,2,0) {(void*) boxptr_Conversion_convertCrefSubscripts,0}};
#define boxvar_Conversion_convertCrefSubscripts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertCrefSubscripts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCrefFromType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _rules, modelica_metatype _env, modelica_boolean *out_converted);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_convertCrefFromType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _rules, modelica_metatype _env, modelica_metatype *out_converted);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertCrefFromType,2,0) {(void*) boxptr_Conversion_convertCrefFromType,0}};
#define boxvar_Conversion_convertCrefFromType MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertCrefFromType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCref2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertCref2,2,0) {(void*) boxptr_Conversion_convertCref2,0}};
#define boxvar_Conversion_convertCref2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertCref2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertCref,2,0) {(void*) boxptr_Conversion_convertCref,0}};
#define boxvar_Conversion_convertCref MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertExp,2,0) {(void*) boxptr_Conversion_convertExp,0}};
#define boxvar_Conversion_convertExp MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertOptExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertOptExp,2,0) {(void*) boxptr_Conversion_convertOptExp,0}};
#define boxvar_Conversion_convertOptExp MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertOptExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexps, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertExps,2,0) {(void*) boxptr_Conversion_convertExps,0}};
#define boxvar_Conversion_convertExps MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExternalDecl(threadData_t *threadData, modelica_metatype __omcQ_24in_5FextDecl, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertExternalDecl,2,0) {(void*) boxptr_Conversion_convertExternalDecl,0}};
#define boxvar_Conversion_convertExternalDecl MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertExternalDecl)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertForIterator(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiter, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertForIterator,2,0) {(void*) boxptr_Conversion_convertForIterator,0}};
#define boxvar_Conversion_convertForIterator MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertForIterator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertForIterators(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiters, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertForIterators,2,0) {(void*) boxptr_Conversion_convertForIterators,0}};
#define boxvar_Conversion_convertForIterators MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertForIterators)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertBranches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranches, modelica_fnptr _condFunc, modelica_fnptr _bodyFunc, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertBranches,2,0) {(void*) boxptr_Conversion_convertBranches,0}};
#define boxvar_Conversion_convertBranches MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertBranches)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithm,2,0) {(void*) boxptr_Conversion_convertAlgorithm,0}};
#define boxvar_Conversion_convertAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithm)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithmItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithmItem,2,0) {(void*) boxptr_Conversion_convertAlgorithmItem,0}};
#define boxvar_Conversion_convertAlgorithmItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithmItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithmItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falgs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithmItems,2,0) {(void*) boxptr_Conversion_convertAlgorithmItems,0}};
#define boxvar_Conversion_convertAlgorithmItems MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertAlgorithmItems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertEquation,2,0) {(void*) boxptr_Conversion_convertEquation,0}};
#define boxvar_Conversion_convertEquation MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquationItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertEquationItem,2,0) {(void*) boxptr_Conversion_convertEquationItem,0}};
#define boxvar_Conversion_convertEquationItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertEquationItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquationItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertEquationItems,2,0) {(void*) boxptr_Conversion_convertEquationItems,0}};
#define boxvar_Conversion_convertEquationItems MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertEquationItems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _localRules, modelica_metatype _modifierRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertComponent,2,0) {(void*) boxptr_Conversion_convertComponent,0}};
#define boxvar_Conversion_convertComponent MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertComponentItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _localRules, modelica_metatype _modifierRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertComponentItem,2,0) {(void*) boxptr_Conversion_convertComponentItem,0}};
#define boxvar_Conversion_convertComponentItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertComponentItem)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_importExists(threadData_t *threadData, modelica_metatype _element, modelica_metatype _imports);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_importExists(threadData_t *threadData, modelica_metatype _element, modelica_metatype _imports);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_importExists,2,0) {(void*) boxptr_Conversion_importExists,0}};
#define boxvar_Conversion_importExists MMC_REFSTRUCTLIT(boxvar_lit_Conversion_importExists)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_filterDuplicateImports(threadData_t *threadData, modelica_metatype _elements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_filterDuplicateImports,2,0) {(void*) boxptr_Conversion_filterDuplicateImports,0}};
#define boxvar_Conversion_filterDuplicateImports MMC_REFSTRUCTLIT(boxvar_lit_Conversion_filterDuplicateImports)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_simplifyImport(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fimp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_simplifyImport,2,0) {(void*) boxptr_Conversion_simplifyImport,0}};
#define boxvar_Conversion_simplifyImport MMC_REFSTRUCTLIT(boxvar_lit_Conversion_simplifyImport)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertImport(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fimp, modelica_metatype _rules, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertImport,2,0) {(void*) boxptr_Conversion_convertImport,0}};
#define boxvar_Conversion_convertImport MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertImport)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fspec, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElementSpec,2,0) {(void*) boxptr_Conversion_convertElementSpec,0}};
#define boxvar_Conversion_convertElementSpec MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElementSpec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertConstrainClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcc, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertConstrainClass,2,0) {(void*) boxptr_Conversion_convertConstrainClass,0}};
#define boxvar_Conversion_convertConstrainClass MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertConstrainClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElement,2,0) {(void*) boxptr_Conversion_convertElement,0}};
#define boxvar_Conversion_convertElement MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElementItem,2,0) {(void*) boxptr_Conversion_convertElementItem,0}};
#define boxvar_Conversion_convertElementItem MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElementItem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felements, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElementItems,2,0) {(void*) boxptr_Conversion_convertElementItems,0}};
#define boxvar_Conversion_convertElementItems MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElementItems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertTypePath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rule, modelica_metatype _importPath, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertTypePath,2,0) {(void*) boxptr_Conversion_convertTypePath,0}};
#define boxvar_Conversion_convertTypePath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertTypePath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertTypeSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info, modelica_metatype *out_localRules, modelica_metatype *out_modifierRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertTypeSpec,2,0) {(void*) boxptr_Conversion_convertTypeSpec,0}};
#define boxvar_Conversion_convertTypeSpec MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertTypeSpec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_mergeModifiers(threadData_t *threadData, modelica_metatype _outerMods, modelica_metatype _innerMods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_mergeModifiers,2,0) {(void*) boxptr_Conversion_mergeModifiers,0}};
#define boxvar_Conversion_mergeModifiers MMC_REFSTRUCTLIT(boxvar_lit_Conversion_mergeModifiers)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholdersExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _placeholders, modelica_metatype _info, modelica_metatype *out_outPlaceholders);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholdersExp,2,0) {(void*) boxptr_Conversion_replacePlaceholdersExp,0}};
#define boxvar_Conversion_replacePlaceholdersExp MMC_REFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholdersExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholdersEqMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqMod, modelica_metatype _placeholders, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholdersEqMod,2,0) {(void*) boxptr_Conversion_replacePlaceholdersEqMod,0}};
#define boxvar_Conversion_replacePlaceholdersEqMod MMC_REFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholdersEqMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholders(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _placeholders, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholders,2,0) {(void*) boxptr_Conversion_replacePlaceholders,0}};
#define boxvar_Conversion_replacePlaceholders MMC_REFSTRUCTLIT(boxvar_lit_Conversion_replacePlaceholders)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getElementArgBinding(threadData_t *threadData, modelica_metatype _arg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_getElementArgBinding,2,0) {(void*) boxptr_Conversion_getElementArgBinding,0}};
#define boxvar_Conversion_getElementArgBinding MMC_REFSTRUCTLIT(boxvar_lit_Conversion_getElementArgBinding)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_makePlaceholderTable(threadData_t *threadData, modelica_metatype _args);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_makePlaceholderTable,2,0) {(void*) boxptr_Conversion_makePlaceholderTable,0}};
#define boxvar_Conversion_makePlaceholderTable MMC_REFSTRUCTLIT(boxvar_lit_Conversion_makePlaceholderTable)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_isEqualNameMod(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_isEqualNameMod(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_isEqualNameMod,2,0) {(void*) boxptr_Conversion_isEqualNameMod,0}};
#define boxvar_Conversion_isEqualNameMod MMC_REFSTRUCTLIT(boxvar_lit_Conversion_isEqualNameMod)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_isModifierInList(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _mods);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_isModifierInList(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _mods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_isModifierInList,2,0) {(void*) boxptr_Conversion_isModifierInList,0}};
#define boxvar_Conversion_isModifierInList MMC_REFSTRUCTLIT(boxvar_lit_Conversion_isModifierInList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModifier(threadData_t *threadData, modelica_metatype _rule, modelica_metatype __omcQ_24in_5FelemArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertModifier,2,0) {(void*) boxptr_Conversion_convertModifier,0}};
#define boxvar_Conversion_convertModifier MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertModifier)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModification2(threadData_t *threadData, modelica_metatype _modifierRules, modelica_metatype __omcQ_24in_5FelemArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertModification2,2,0) {(void*) boxptr_Conversion_convertModification2,0}};
#define boxvar_Conversion_convertModification2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertModification2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModification(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _modifierRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertModification,2,0) {(void*) boxptr_Conversion_convertModification,0}};
#define boxvar_Conversion_convertModification MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertModification)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEqMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertEqMod,2,0) {(void*) boxptr_Conversion_convertEqMod,0}};
#define boxvar_Conversion_convertEqMod MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertEqMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModificationExps2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertModificationExps2,2,0) {(void*) boxptr_Conversion_convertModificationExps2,0}};
#define boxvar_Conversion_convertModificationExps2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertModificationExps2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModificationExps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertModificationExps,2,0) {(void*) boxptr_Conversion_convertModificationExps,0}};
#define boxvar_Conversion_convertModificationExps MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertModificationExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElementArg,2,0) {(void*) boxptr_Conversion_convertElementArg,0}};
#define boxvar_Conversion_convertElementArg MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElementArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fargs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertElementArgs,2,0) {(void*) boxptr_Conversion_convertElementArgs,0}};
#define boxvar_Conversion_convertElementArgs MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertElementArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassPart(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertClassPart,2,0) {(void*) boxptr_Conversion_convertClassPart,0}};
#define boxvar_Conversion_convertClassPart MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertClassPart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassParts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fparts, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertClassParts,2,0) {(void*) boxptr_Conversion_convertClassParts,0}};
#define boxvar_Conversion_convertClassParts MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertClassParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassDef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcdef, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertClassDef,2,0) {(void*) boxptr_Conversion_convertClassDef,0}};
#define boxvar_Conversion_convertClassDef MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertClassDef)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertClass,2,0) {(void*) boxptr_Conversion_convertClass,0}};
#define boxvar_Conversion_convertClass MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertProgram(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fprogram, modelica_metatype _rules, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_convertProgram,2,0) {(void*) boxptr_Conversion_convertProgram,0}};
#define boxvar_Conversion_convertProgram MMC_REFSTRUCTLIT(boxvar_lit_Conversion_convertProgram)
PROTECTED_FUNCTION_STATIC void omc_Conversion_dumpRule(threadData_t *threadData, modelica_metatype _rule, modelica_string _indent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_dumpRule,2,0) {(void*) boxptr_Conversion_dumpRule,0}};
#define boxvar_Conversion_dumpRule MMC_REFSTRUCTLIT(boxvar_lit_Conversion_dumpRule)
PROTECTED_FUNCTION_STATIC void omc_Conversion_dumpRules(threadData_t *threadData, modelica_metatype _rules, modelica_string _indent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_dumpRules,2,0) {(void*) boxptr_Conversion_dumpRules,0}};
#define boxvar_Conversion_dumpRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_dumpRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupClassExtendsRules(threadData_t *threadData, modelica_string _name, modelica_metatype _extendsRules, modelica_metatype *out_modificationRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_lookupClassExtendsRules,2,0) {(void*) boxptr_Conversion_lookupClassExtendsRules,0}};
#define boxvar_Conversion_lookupClassExtendsRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_lookupClassExtendsRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_mergeRuleList(threadData_t *threadData, modelica_metatype _oldRules, modelica_metatype _newRule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_mergeRuleList,2,0) {(void*) boxptr_Conversion_mergeRuleList,0}};
#define boxvar_Conversion_mergeRuleList MMC_REFSTRUCTLIT(boxvar_lit_Conversion_mergeRuleList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_sortLocalRules(threadData_t *threadData, modelica_metatype _rules, modelica_metatype _localRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_sortLocalRules,2,0) {(void*) boxptr_Conversion_sortLocalRules,0}};
#define boxvar_Conversion_sortLocalRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_sortLocalRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newEnv(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_newEnv,2,0) {(void*) boxptr_Conversion_newEnv,0}};
#define boxvar_Conversion_newEnv MMC_REFSTRUCTLIT(boxvar_lit_Conversion_newEnv)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newTypeTable(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_newTypeTable,2,0) {(void*) boxptr_Conversion_newTypeTable,0}};
#define boxvar_Conversion_newTypeTable MMC_REFSTRUCTLIT(boxvar_lit_Conversion_newTypeTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newRuleTable(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_newRuleTable,2,0) {(void*) boxptr_Conversion_newRuleTable,0}};
#define boxvar_Conversion_newRuleTable MMC_REFSTRUCTLIT(boxvar_lit_Conversion_newRuleTable)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupTypeRules(threadData_t *threadData, modelica_metatype _typePath, modelica_metatype _rules, modelica_metatype _env, modelica_metatype *out_localRules, modelica_metatype *out_modifierRules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_lookupTypeRules,2,0) {(void*) boxptr_Conversion_lookupTypeRules,0}};
#define boxvar_Conversion_lookupTypeRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_lookupTypeRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupRules(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_lookupRules,2,0) {(void*) boxptr_Conversion_lookupRules,0}};
#define boxvar_Conversion_lookupRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_lookupRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupRuleNode(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_lookupRuleNode,2,0) {(void*) boxptr_Conversion_lookupRuleNode,0}};
#define boxvar_Conversion_lookupRuleNode MMC_REFSTRUCTLIT(boxvar_lit_Conversion_lookupRuleNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_updateNode(threadData_t *threadData, modelica_metatype _onode, modelica_metatype _path, modelica_metatype _rule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_updateNode,2,0) {(void*) boxptr_Conversion_updateNode,0}};
#define boxvar_Conversion_updateNode MMC_REFSTRUCTLIT(boxvar_lit_Conversion_updateNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addRule(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rule, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_addRule,2,0) {(void*) boxptr_Conversion_addRule,0}};
#define boxvar_Conversion_addRule MMC_REFSTRUCTLIT(boxvar_lit_Conversion_addRule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parsePathList(threadData_t *threadData, modelica_string _str);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parsePathList,2,0) {(void*) boxptr_Conversion_parsePathList,0}};
#define boxvar_Conversion_parsePathList MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parsePathList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parsePath(threadData_t *threadData, modelica_string _str);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parsePath,2,0) {(void*) boxptr_Conversion_parsePath,0}};
#define boxvar_Conversion_parsePath MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parsePath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertMessage(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertMessage,2,0) {(void*) boxptr_Conversion_parseConvertMessage,0}};
#define boxvar_Conversion_parseConvertMessage MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertMessage)
PROTECTED_FUNCTION_STATIC modelica_string omc_Conversion_quotePlaceholders(threadData_t *threadData, modelica_string __omcQ_24in_5Fstr, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_quotePlaceholders,2,0) {(void*) boxptr_Conversion_quotePlaceholders,0}};
#define boxvar_Conversion_quotePlaceholders MMC_REFSTRUCTLIT(boxvar_lit_Conversion_quotePlaceholders)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseModifier(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseModifier,2,0) {(void*) boxptr_Conversion_parseModifier,0}};
#define boxvar_Conversion_parseModifier MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseModifier)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertModifiers2(threadData_t *threadData, modelica_string _className, modelica_metatype _oldMods, modelica_metatype _newMods, modelica_boolean _simplify, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_parseConvertModifiers2(threadData_t *threadData, modelica_metatype _className, modelica_metatype _oldMods, modelica_metatype _newMods, modelica_metatype _simplify, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertModifiers2,2,0) {(void*) boxptr_Conversion_parseConvertModifiers2,0}};
#define boxvar_Conversion_parseConvertModifiers2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertModifiers2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertModifiers(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertModifiers,2,0) {(void*) boxptr_Conversion_parseConvertModifiers,0}};
#define boxvar_Conversion_parseConvertModifiers MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertModifiers)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertElement(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertElement,2,0) {(void*) boxptr_Conversion_parseConvertElement,0}};
#define boxvar_Conversion_parseConvertElement MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertElement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClassIf(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClassIf,2,0) {(void*) boxptr_Conversion_parseConvertClassIf,0}};
#define boxvar_Conversion_parseConvertClassIf MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClassIf)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClassStr(threadData_t *threadData, modelica_string _oldName, modelica_string _newName, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClassStr,2,0) {(void*) boxptr_Conversion_parseConvertClassStr,0}};
#define boxvar_Conversion_parseConvertClassStr MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClassStr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClass(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClass,2,0) {(void*) boxptr_Conversion_parseConvertClass,0}};
#define boxvar_Conversion_parseConvertClass MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseConvertClass)
PROTECTED_FUNCTION_STATIC void omc_Conversion_printConversionRuleError(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_printConversionRuleError,2,0) {(void*) boxptr_Conversion_printConversionRuleError,0}};
#define boxvar_Conversion_printConversionRuleError MMC_REFSTRUCTLIT(boxvar_lit_Conversion_printConversionRuleError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_statementInfo(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_statementInfo,2,0) {(void*) boxptr_Conversion_statementInfo,0}};
#define boxvar_Conversion_statementInfo MMC_REFSTRUCTLIT(boxvar_lit_Conversion_statementInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_vectorizeArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _fnType, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_vectorizeArgs,2,0) {(void*) boxptr_Conversion_vectorizeArgs,0}};
#define boxvar_Conversion_vectorizeArgs MMC_REFSTRUCTLIT(boxvar_lit_Conversion_vectorizeArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_expandArg(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_expandArg,2,0) {(void*) boxptr_Conversion_expandArg,0}};
#define boxvar_Conversion_expandArg MMC_REFSTRUCTLIT(boxvar_lit_Conversion_expandArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseRule(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseRule,2,0) {(void*) boxptr_Conversion_parseRule,0}};
#define boxvar_Conversion_parseRule MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseRule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseRules(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5Frules);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_parseRules,2,0) {(void*) boxptr_Conversion_parseRules,0}};
#define boxvar_Conversion_parseRules MMC_REFSTRUCTLIT(boxvar_lit_Conversion_parseRules)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_loadScript(threadData_t *threadData, modelica_string _scriptFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_loadScript,2,0) {(void*) boxptr_Conversion_loadScript,0}};
#define boxvar_Conversion_loadScript MMC_REFSTRUCTLIT(boxvar_lit_Conversion_loadScript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_balance,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_balance,0}};
#define boxvar_Conversion_ImportTreeImpl_balance MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Conversion_ImportTreeImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_calculateBalance,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_calculateBalance,0}};
#define boxvar_Conversion_ImportTreeImpl_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_Conversion_ImportTreeImpl_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_height,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_height,0}};
#define boxvar_Conversion_ImportTreeImpl_height MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_Conversion_ImportTreeImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_printTreeStr2,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_printTreeStr2,0}};
#define boxvar_Conversion_ImportTreeImpl_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_referenceEqOrEmpty,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_referenceEqOrEmpty,0}};
#define boxvar_Conversion_ImportTreeImpl_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_rotateLeft,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_rotateLeft,0}};
#define boxvar_Conversion_ImportTreeImpl_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_rotateRight,2,0) {(void*) boxptr_Conversion_ImportTreeImpl_rotateRight,0}};
#define boxvar_Conversion_ImportTreeImpl_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_Conversion_ImportTreeImpl_rotateRight)

PROTECTED_FUNCTION_STATIC void omc_Conversion_addComponentTypesToEnv2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _components)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      modelica_metatype _comps = NULL;
      modelica_metatype _ty_path = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _comps has no default value.
      // _ty_path has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,6) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,3) == 0) goto tmp2_end;
          
          _comps = tmpMeta6;
          /* Pattern matching succeeded */
          _ty_path = omc_AbsynUtil_typeSpecPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comps), 3))));

          {
            modelica_metatype _c;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comps), 4))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _c = MMC_CAR(tmpMeta7);
              omc_UnorderedMap_add(threadData, omc_AbsynUtil_componentName(threadData, _c), _ty_path, _components);
            }
          }
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

PROTECTED_FUNCTION_STATIC void omc_Conversion_addComponentTypesToEnv(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _components)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_UnorderedMap_clear(threadData, _components);

  {
    modelica_metatype _part;
    for (tmpMeta1 = _parts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _part = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _part;
        {
          int tmp4;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
            case 3: {
              modelica_metatype tmpMeta5;
              modelica_metatype tmpMeta6;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
                {
                  _e = MMC_CAR(tmpMeta5);
                  omc_Conversion_addComponentTypesToEnv2(threadData, _e, _components);
                }
              }
              goto tmp3_done;
            }
            case 4: {
              modelica_metatype tmpMeta7;
              modelica_metatype tmpMeta8;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
                {
                  _e = MMC_CAR(tmpMeta7);
                  omc_Conversion_addComponentTypesToEnv2(threadData, _e, _components);
                }
              }
              goto tmp3_done;
            }
            default:
            tmp3_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_stripImportPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _importPath)
{
  modelica_metatype _path = NULL;
  modelica_metatype _import_path = NULL;
  modelica_string _import_name = NULL;
  modelica_integer _imp_len;
  modelica_integer _path_len;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  // _import_path has no default value.
  // _import_name has no default value.
  // _imp_len has no default value.
  // _path_len has no default value.
  if(isNone(_importPath))
  {
    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = _importPath;
  if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  _import_path = tmpMeta3;
  _import_name = tmpMeta4;

  if(omc_AbsynUtil_pathPrefixOf(threadData, _import_path, _path))
  {
    _imp_len = omc_AbsynUtil_pathPartCount(threadData, _import_path, ((modelica_integer) 0));

    _path_len = omc_AbsynUtil_pathPartCount(threadData, _path, ((modelica_integer) 0));

    if((_imp_len == _path_len))
    {
      tmpMeta5 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _import_name);
      _path = tmpMeta5;
    }
    else
    {
      _path = omc_Util_foldcallN(threadData, omc_AbsynUtil_pathPartCount(threadData, _import_path, ((modelica_integer) 0)), boxvar_AbsynUtil_pathRest, _path);

      _path = omc_AbsynUtil_prefixPath(threadData, _import_name, _path);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_applyImportsToPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _imports, modelica_metatype *out_importPath)
{
  modelica_metatype _path = NULL;
  modelica_metatype _importPath = NULL;
  modelica_metatype _imp_data_opt = NULL;
  modelica_metatype _imp_data = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  // _importPath has no default value.
  // _imp_data_opt has no default value.
  // _imp_data has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _path;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Conversion_ImportTreeImpl_getOpt(threadData, _imports, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_path), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Conversion_ImportTreeImpl_getOpt(threadData, _imports, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_path), 2))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _imp_data_opt = tmpMeta1;

  if(isSome(_imp_data_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta5 = _imp_data_opt;
    if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
    _imp_data = tmpMeta6;

    if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp_data), 5))))))
    {
      tmpMeta7 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp_data), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp_data), 4))));
      _importPath = mmc_mk_some(tmpMeta7);

      _path = omc_AbsynUtil_pathReplaceFirst(threadData, _path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp_data), 2))));
    }
    else
    {
      _importPath = mmc_mk_none();
    }
  }
  else
  {
    _importPath = mmc_mk_none();
  }
  _return: OMC_LABEL_UNUSED
  if (out_importPath) { *out_importPath = _importPath; }
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImport(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  modelica_metatype _imp_data = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  // _imp_data has no default value.
  if((!omc_Conversion_ImportTreeImpl_hasKey(threadData, _imports, _name)))
  {
    goto _return;
  }

  _imp_data = omc_Conversion_ImportTreeImpl_get(threadData, _imports, _name);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_imp_data), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[5] = mmc_mk_boolean(1 /* true */);
  _imp_data = tmpMeta1;

  _imports = omc_Conversion_ImportTreeImpl_update(threadData, _imports, _name, _imp_data);
  _return: OMC_LABEL_UNUSED
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInElementSpec(threadData_t *threadData, modelica_metatype _spec, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _spec;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _name has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          _imports = omc_Conversion_shadowImport(threadData, _name, _imports);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _c;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 4))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _c = MMC_CAR(tmpMeta7);
              _imports = omc_Conversion_shadowImport(threadData, omc_AbsynUtil_componentName(threadData, _c), _imports);
            }
          }
          goto tmp2_done;
        }
        case 2: {
          
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
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      modelica_metatype _spec = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _spec has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,6) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          
          _spec = tmpMeta6;
          /* Pattern matching succeeded */
          _imports = omc_Conversion_shadowImportsInElementSpec(threadData, _spec, _imports);
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
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_shadowImportsInParts(threadData_t *threadData, modelica_metatype _parts, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  {
    modelica_metatype _part;
    for (tmpMeta1 = _parts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _part = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _part;
        {
          int tmp4;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
            case 3: {
              modelica_metatype tmpMeta5;
              modelica_metatype tmpMeta6;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
                {
                  _e = MMC_CAR(tmpMeta5);
                  _imports = omc_Conversion_shadowImportsInElementItem(threadData, _e, _imports);
                }
              }
              goto tmp3_done;
            }
            case 4: {
              modelica_metatype tmpMeta7;
              modelica_metatype tmpMeta8;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
                {
                  _e = MMC_CAR(tmpMeta7);
                  _imports = omc_Conversion_shadowImportsInElementItem(threadData, _e, _imports);
                }
              }
              goto tmp3_done;
            }
            default:
            tmp3_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addGroupImportName(threadData_t *threadData, modelica_metatype _prefix, modelica_metatype _imp, modelica_metatype _rules, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  modelica_string _rename = NULL;
  modelica_string _name = NULL;
  modelica_string _imp_name = NULL;
  modelica_metatype _old_path = NULL;
  modelica_metatype _new_path = NULL;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_string tmp9 = 0;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  // _rename has no default value.
  // _name has no default value.
  // _imp_name has no default value.
  // _old_path has no default value.
  // _new_path has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1_c0 = _name;
          tmp1_c1 = _name;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _rename = tmpMeta7;
          _name = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1_c0 = _rename;
          tmp1_c1 = _name;
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
  _rename = tmp1_c0;
  _name = tmp1_c1;

  _old_path = omc_AbsynUtil_suffixPath(threadData, _prefix, _name);

  _new_path = omc_Conversion_convertPath(threadData, _old_path, _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);

  { /* match expression */
    modelica_metatype tmp12_1;
    tmp12_1 = _imp;
    {
      volatile mmc_switch_type tmp12;
      int tmp13;
      tmp12 = 0;
      for (; tmp12 < 2; tmp12++) {
        switch (MMC_SWITCH_CAST(tmp12)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp12_1,0,1) == 0) goto tmp11_end;
          
          /* Pattern matching succeeded */
          tmp9 = omc_AbsynUtil_pathLastIdent(threadData, _new_path);
          goto tmp11_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp12_1,1,2) == 0) goto tmp11_end;
          
          /* Pattern matching succeeded */
          tmp9 = _rename;
          goto tmp11_done;
        }
        }
        goto tmp11_end;
        tmp11_end: ;
      }
      goto goto_10;
      goto_10:;
      MMC_THROW_INTERNAL();
      goto tmp11_done;
      tmp11_done:;
    }
  }
  _imp_name = tmp9;

  tmpMeta14 = mmc_mk_box5(3, &Conversion_ImportData_IMPORT__DATA__desc, _old_path, _new_path, _imp_name, mmc_mk_boolean(0 /* false */));
  _imports = omc_Conversion_ImportTreeImpl_add(threadData, _imports, _rename, tmpMeta14, boxvar_Conversion_ImportTreeImpl_addConflictDefault);
  _return: OMC_LABEL_UNUSED
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addImportName(threadData_t *threadData, modelica_metatype _imp, modelica_metatype _rules, modelica_metatype _info, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  modelica_string _name = NULL;
  modelica_string _imp_name = NULL;
  modelica_metatype _old_path = NULL;
  modelica_metatype _new_path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  // _name has no default value.
  // _imp_name has no default value.
  // _old_path has no default value.
  // _new_path has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _imp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _name = tmpMeta4;
          _old_path = tmpMeta5;
          /* Pattern matching succeeded */
          _new_path = omc_Conversion_convertPath(threadData, _old_path, _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);

          tmpMeta6 = mmc_mk_box5(3, &Conversion_ImportData_IMPORT__DATA__desc, _old_path, _new_path, _name, mmc_mk_boolean(0 /* false */));
          _imports = omc_Conversion_ImportTreeImpl_add(threadData, _imports, _name, tmpMeta6, boxvar_Conversion_ImportTreeImpl_addConflictDefault);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _old_path = tmpMeta7;
          /* Pattern matching succeeded */
          _new_path = omc_Conversion_convertPath(threadData, _old_path, _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);

          _name = omc_AbsynUtil_pathLastIdent(threadData, _old_path);

          _imp_name = omc_AbsynUtil_pathLastIdent(threadData, _new_path);

          tmpMeta8 = mmc_mk_box5(3, &Conversion_ImportData_IMPORT__DATA__desc, _old_path, _new_path, _imp_name, mmc_mk_boolean(0 /* false */));
          _imports = omc_Conversion_ImportTreeImpl_add(threadData, _imports, _name, tmpMeta8, boxvar_Conversion_ImportTreeImpl_addConflictDefault);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _old_path = tmpMeta9;
          /* Pattern matching succeeded */
          {
            modelica_metatype _group;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _group = MMC_CAR(tmpMeta10);
              _imports = omc_Conversion_addGroupImportName(threadData, _old_path, _group, _rules, _info, _imports);
            }
          }
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addImportNamesToEnv(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _rules, modelica_metatype __omcQ_24in_5Fenv)
{
  modelica_metatype _env = NULL;
  modelica_metatype _imp = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype _imps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _env = __omcQ_24in_5Fenv;
  // _imp has no default value.
  // _info has no default value.
  // _imps has no default value.
  if(listEmpty(_elements))
  {
    goto _return;
  }

  _imps = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3)));

  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _e;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,2,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
      _imp = tmpMeta3;
      _info = tmpMeta4;

      _imps = omc_Conversion_addImportName(threadData, _imp, _rules, _info, _imps);
    }
  }

  tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_env), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = _imps;
  _env = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _env;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getImportsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5Fimports)
{
  modelica_metatype _imports = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imports = __omcQ_24in_5Fimports;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      modelica_metatype _imp = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _imp has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,6) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp2_end;
          
          _imp = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(_imp, _imports);
          _imports = tmpMeta7;
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
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getImportsInParts(threadData_t *threadData, modelica_metatype _parts)
{
  modelica_metatype _imports = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _imports = tmpMeta1;
  {
    modelica_metatype _part;
    for (tmpMeta2 = _parts; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _part = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _part;
        {
          int tmp5;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
            case 3: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta7;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
                {
                  _e = MMC_CAR(tmpMeta6);
                  _imports = omc_Conversion_getImportsInElementItem(threadData, _e, _imports);
                }
              }
              goto tmp4_done;
            }
            case 4: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
                {
                  _e = MMC_CAR(tmpMeta8);
                  _imports = omc_Conversion_getImportsInElementItem(threadData, _e, _imports);
                }
              }
              goto tmp4_done;
            }
            default:
            tmp4_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _imports;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsPathsInElementItem(threadData_t *threadData, modelica_metatype _element, modelica_metatype __omcQ_24in_5FextendsPaths)
{
  modelica_metatype _extendsPaths = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _extendsPaths = __omcQ_24in_5FextendsPaths;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      modelica_metatype _ext_path = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ext_path has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,6) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _ext_path = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_ext_path, _extendsPaths);
          _extendsPaths = tmpMeta8;
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
  return _extendsPaths;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsPathsInParts(threadData_t *threadData, modelica_metatype _parts)
{
  modelica_metatype _extendsPaths = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _extendsPaths = tmpMeta1;
  {
    modelica_metatype _part;
    for (tmpMeta2 = _parts; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _part = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _part;
        {
          int tmp5;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
            case 3: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta7;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
                {
                  _e = MMC_CAR(tmpMeta6);
                  _extendsPaths = omc_Conversion_getExtendsPathsInElementItem(threadData, _e, _extendsPaths);
                }
              }
              goto tmp4_done;
            }
            case 4: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              
              /* Pattern matching succeeded */
              {
                modelica_metatype _e;
                for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
                {
                  _e = MMC_CAR(tmpMeta8);
                  _extendsPaths = omc_Conversion_getExtendsPathsInElementItem(threadData, _e, _extendsPaths);
                }
              }
              goto tmp4_done;
            }
            default:
            tmp4_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _extendsPaths;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getExtendsRules(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _extendsRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _onode = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _extendsRules = tmpMeta1;
  // _onode has no default value.
  {
    modelica_metatype _ext;
    for (tmpMeta2 = omc_Conversion_getExtendsPathsInParts(threadData, _parts); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _ext = MMC_CAR(tmpMeta2);
      _onode = omc_Conversion_lookupRuleNode(threadData, _ext, _rules);

      if(isSome(_onode))
      {
        tmpMeta3 = mmc_mk_cons(omc_Util_getOption(threadData, _onode), _extendsRules);
        _extendsRules = tmpMeta3;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _extendsRules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertOption(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fopt, modelica_fnptr _optFunc, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _opt = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _opt = __omcQ_24in_5Fopt;
  // _e has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _opt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_optFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_optFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_optFunc), 2))), _e, _rules, _env, _info) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_optFunc), 1)))) (threadData, _e, _rules, _env, _info));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _opt;
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
  _opt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _opt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertNamedArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _arg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_arg), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _localRules, _rules, _env, _info);
  _arg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _arg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertFunctionArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fargs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _args = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _args = __omcQ_24in_5Fargs;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_args), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2))), _localRules, _rules, _env, _info);
          _args = tmpMeta5;

          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp10;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar1;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar0 = omc_Conversion_convertNamedArg(threadData, _a, _localRules, _rules, _env, _info);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar1;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_args), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _args = tmpMeta6;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_args), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2))), _localRules, _rules, _env, _info);
          _args = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_args), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = omc_Conversion_convertForIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 4))), _localRules, _rules, _env, _info);
          _args = tmpMeta12;
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
  return _args;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_applyRulesPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rules, modelica_metatype _info)
{
  modelica_metatype _path = NULL;
  modelica_integer _path_len;
  modelica_boolean _found;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3 = 0;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  _path_len = omc_AbsynUtil_pathPartCount(threadData, _path, ((modelica_integer) 0));
  // _found has no default value.
  {
    modelica_metatype _rl;
    for (tmpMeta1 = _rules; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _rl = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _rule;
        for (tmpMeta2 = _rl; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _rule = MMC_CAR(tmpMeta2);
          { /* match expression */
            modelica_metatype tmp6_1;
            tmp6_1 = _rule;
            {
              volatile mmc_switch_type tmp6;
              int tmp7;
              tmp6 = 0;
              for (; tmp6 < 4; tmp6++) {
                switch (MMC_SWITCH_CAST(tmp6)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,2) == 0) goto tmp5_end;
                  
                  /* Pattern matching succeeded */
                  if((_path_len == arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))))))
                  {
                    _path = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3)));
                  }
                  else
                  {
                    _path = omc_Util_foldcallN(threadData, arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2)))), boxvar_AbsynUtil_pathRest, _path);

                    _path = omc_AbsynUtil_joinPaths(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), _path);
                  }
                  tmp3 = 1 /* true */;
                  goto tmp5_done;
                }
                case 1: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,3) == 0) goto tmp5_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!((_path_len > arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))))) && (stringEqual(omc_AbsynUtil_pathNthIdent(threadData, _path, ((modelica_integer) 1) + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))))))) goto tmp5_end;
                  if((_path_len == ((modelica_integer) -1) + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))))))
                  {
                    _path = omc_AbsynUtil_pathSetLastIdent(threadData, _path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4))));
                  }
                  else
                  {
                    _path = omc_AbsynUtil_pathSetNthIdent(threadData, _path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4))), ((modelica_integer) 1) + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2)))));
                  }
                  tmp3 = 1 /* true */;
                  goto tmp5_done;
                }
                case 2: {
                  modelica_metatype tmpMeta8;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,1) == 0) goto tmp5_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta8 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))), MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta8, _info);
                  tmp3 = 1 /* true */;
                  goto tmp5_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp3 = 0 /* false */;
                  goto tmp5_done;
                }
                }
                goto tmp5_end;
                tmp5_end: ;
              }
              goto goto_4;
              goto_4:;
              MMC_THROW_INTERNAL();
              goto tmp5_done;
              tmp5_done:;
            }
          }
          _found = tmp3;

          if(_found)
          {
            goto _return;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertPath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rules, modelica_metatype _imports, modelica_metatype _info)
{
  modelica_metatype _path = NULL;
  modelica_metatype _import_path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  // _import_path has no default value.
  _path = omc_Conversion_applyImportsToPath(threadData, _path, _imports ,&_import_path);

  _path = omc_Conversion_applyRulesPath(threadData, _path, omc_Conversion_lookupRules(threadData, _path, _rules), _info);

  _path = omc_Conversion_stripImportPath(threadData, _path, _import_path);
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsub, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _sub = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sub = __omcQ_24in_5Fsub;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _sub;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_sub), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub), 2))), _localRules, _rules, _env, _info);
          _sub = tmpMeta5;
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
  return _sub;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _subs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _subs = __omcQ_24in_5Fsubs;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _subs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_Conversion_convertSubscript(threadData, _s, _localRules, _rules, _env, _info);
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
  _subs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCrefSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _cref = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cref;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_cref), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_Conversion_convertSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3))), _localRules, _rules, _env, _info);
          _cref = tmpMeta4;

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_cref), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[4] = omc_Conversion_convertCrefSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 4))), _localRules, _rules, _env, _info);
          _cref = tmpMeta5;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_cref), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_Conversion_convertSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3))), _localRules, _rules, _env, _info);
          _cref = tmpMeta6;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCrefFromType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _rules, modelica_metatype _env, modelica_boolean *out_converted)
{
  modelica_metatype _cref = NULL;
  modelica_boolean _converted;
  modelica_string _id = NULL;
  modelica_metatype _first_cref = NULL;
  modelica_metatype _rest_cref = NULL;
  modelica_metatype _opt_ty = NULL;
  modelica_metatype _cref_rules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  _converted = 0 /* false */;
  // _id has no default value.
  // _first_cref has no default value.
  // _rest_cref has no default value.
  // _opt_ty has no default value.
  // _cref_rules has no default value.
  if((!omc_AbsynUtil_crefIsQual(threadData, _cref)))
  {
    goto _return;
  }

  _id = omc_AbsynUtil_crefFirstIdent(threadData, _cref);

  _opt_ty = omc_UnorderedMap_get(threadData, _id, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 2))));

  if(isSome(_opt_ty))
  {
    _cref_rules = listHead(omc_Conversion_lookupRules(threadData, omc_Util_getOption(threadData, _opt_ty), _rules));
  }
  else
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _cref_rules = tmpMeta1;
  }

  if(listEmpty(_cref_rules))
  {
    goto _return;
  }

  _first_cref = omc_AbsynUtil_crefFirstCref(threadData, _cref);

  _rest_cref = omc_AbsynUtil_crefStripFirst(threadData, _cref);

  _id = omc_AbsynUtil_crefFirstIdent(threadData, _rest_cref);

  {
    modelica_metatype _rule;
    for (tmpMeta2 = _cref_rules; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _rule = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _rule;
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,3) == 0) goto tmp4_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), _id))) goto tmp4_end;
              _rest_cref = omc_AbsynUtil_crefSetFirstIdent(threadData, _rest_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4))));

              _cref = omc_AbsynUtil_joinCrefs(threadData, _first_cref, _rest_cref);

              _converted = 1 /* true */;

              goto _return;
              goto tmp4_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_converted) { *out_converted = _converted; }
  return _cref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_convertCrefFromType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _rules, modelica_metatype _env, modelica_metatype *out_converted)
{
  modelica_boolean _converted;
  modelica_metatype _cref = NULL;
  _cref = omc_Conversion_convertCrefFromType(threadData, __omcQ_24in_5Fcref, _rules, _env, &_converted);
  /* skip box _cref; Absyn.ComponentRef */
  if (out_converted) { *out_converted = mmc_mk_icon(_converted); }
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCref2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _cref = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _cref_rules = NULL;
  modelica_metatype _rule = NULL;
  modelica_boolean _has_subs;
  modelica_boolean _converted;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  // _path has no default value.
  // _cref_rules has no default value.
  // _rule has no default value.
  // _has_subs has no default value.
  // _converted has no default value.
  _has_subs = omc_AbsynUtil_crefHasSubscripts(threadData, _cref);

  if(_has_subs)
  {
    _cref = omc_Conversion_convertCrefSubscripts(threadData, _cref, _localRules, _rules, _env, _info);
  }

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cref_rules = omc_UnorderedMap_getOrDefault(threadData, omc_AbsynUtil_crefFirstIdent(threadData, _cref), _localRules, tmpMeta1);

  if((!listEmpty(_cref_rules)))
  {
    _rule = listHead(_cref_rules);

    { /* match expression */
      modelica_metatype tmp5_1;
      tmp5_1 = _rule;
      {
        volatile mmc_switch_type tmp5;
        int tmp6;
        tmp5 = 0;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,3) == 0) goto tmp4_end;
            
            /* Pattern matching succeeded */
            tmpMeta2 = omc_AbsynUtil_crefSetFirstIdent(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4))));
            goto tmp4_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta2 = _cref;
            goto tmp4_done;
          }
          }
          goto tmp4_end;
          tmp4_end: ;
        }
        goto goto_3;
        goto_3:;
        MMC_THROW_INTERNAL();
        goto tmp4_done;
        tmp4_done:;
      }
    }
    _cref = tmpMeta2;

    _converted = 1 /* true */;
  }
  else
  {
    _cref = omc_Conversion_convertCrefFromType(threadData, _cref, _rules, _env ,&_converted);
  }

  if(((!_converted) && (!_has_subs)))
  {
    _path = omc_AbsynUtil_crefToPath(threadData, _cref);

    _path = omc_Conversion_convertPath(threadData, _path, _rules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))), _info);

    _cref = omc_AbsynUtil_pathToCref(threadData, _path);
  }
  _return: OMC_LABEL_UNUSED
  return _cref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cref = __omcQ_24in_5Fcref;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _cref;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _cref;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(3, &Absyn_ComponentRef_CREF__FULLYQUALIFIED__desc, omc_Conversion_convertCref2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 2))), _localRules, _rules, _env, _info));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Conversion_convertCref2(threadData, _cref, _localRules, _rules, _env, _info);
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
  _cref = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cref;
}

static modelica_metatype closure0_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}static modelica_metatype closure1_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta4;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _localRules, _rules, _env, _info);
          _exp = tmpMeta6;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta7;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _localRules, _rules, _env, _info);
          _exp = tmpMeta9;
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta10;
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[4] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _localRules, _rules, _env, _info);
          _exp = tmpMeta12;
          goto tmp2_done;
        }
        case 13: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _localRules, _rules, _env, _info);
          _exp = tmpMeta15;

          tmpMeta17 = mmc_mk_box1(0, _info);
          tmpMeta18 = mmc_mk_box1(0, _info);
          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[5] = omc_Conversion_convertBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), (modelica_fnptr) mmc_mk_box2(0,closure0_Conversion_convertExp,tmpMeta17), (modelica_fnptr) mmc_mk_box2(0,closure1_Conversion_convertExp,tmpMeta18), _localRules, _rules, _env);
          _exp = tmpMeta16;
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta19;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[3] = omc_Conversion_convertFunctionArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta20;
          goto tmp2_done;
        }
        case 15: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_Conversion_convertFunctionArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta22;
          goto tmp2_done;
        }
        case 16: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = omc_Conversion_convertExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta23;
          goto tmp2_done;
        }
        case 17: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp28;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar5;
            while(1) {
              tmp28 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp28--;
              }
              if (tmp28 == 0) {
                __omcQ_24tmpVar4 = omc_Conversion_convertExps(threadData, _e, _localRules, _rules, _env, _info);
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp28 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar5;
          }
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = tmpMeta25;
          _exp = tmpMeta24;
          goto tmp2_done;
        }
        case 18: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta29;

          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[3] = omc_Conversion_convertOptExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta30;

          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[4] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), _localRules, _rules, _env, _info);
          _exp = tmpMeta31;
          goto tmp2_done;
        }
        case 19: {
          modelica_metatype tmpMeta32;
          
          /* Pattern matching succeeded */
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[2] = omc_Conversion_convertExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta32;
          goto tmp2_done;
        }
        case 27: {
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta33;
          goto tmp2_done;
        }
        case 28: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), _localRules, _rules, _env, _info);
          _exp = tmpMeta34;

          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[3] = omc_Conversion_convertSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _localRules, _rules, _env, _info);
          _exp = tmpMeta35;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertOptExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(omc_Conversion_convertExp(threadData, _e, _localRules, _rules, _env, _info));
          goto tmp3_done;
        }
        case 1: {
          
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexps, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _exps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exps = __omcQ_24in_5Fexps;
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _exps;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar7;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar6 = omc_Conversion_convertExp(threadData, _e, _localRules, _rules, _env, _info);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar7;
  }
  _exps = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exps;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertExternalDecl(threadData_t *threadData, modelica_metatype __omcQ_24in_5FextDecl, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _extDecl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _extDecl = __omcQ_24in_5FextDecl;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(7));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_extDecl), 7*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[5] = omc_Conversion_convertExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_extDecl), 5))), _localRules, _rules, _env, _info);
  _extDecl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _extDecl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertForIterator(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiter, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _iter = __omcQ_24in_5Fiter;
  __omcQ_24mrfa_5F0 = omc_Conversion_convertOptExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 3))), _localRules, _rules, _env, _info);

  __omcQ_24mrfa_5F1 = omc_Conversion_convertOptExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 4))), _localRules, _rules, _env, _info);

  tmpMeta1 = mmc_mk_box4(3, &Absyn_ForIterator_ITERATOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iter), 2))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1);
  _iter = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iter;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertForIterators(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fiters, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _iters = __omcQ_24in_5Fiters;
  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _iters;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = omc_Conversion_convertForIterator(threadData, _i, _localRules, _rules, _env, _info);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar8,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar9;
  }
  _iters = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iters;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertBranches(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbranches, modelica_fnptr _condFunc, modelica_fnptr _bodyFunc, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _branches = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _branches = __omcQ_24in_5Fbranches;
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp5;
    modelica_metatype _b_loopVar = 0;
    modelica_metatype _b;
    _b_loopVar = _branches;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_b_loopVar)) {
        _b = MMC_CAR(_b_loopVar);
        _b_loopVar = MMC_CDR(_b_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condFunc), 2))), omc_Util_tuple21(threadData, _b), _localRules, _rules, _env) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_condFunc), 1)))) (threadData, omc_Util_tuple21(threadData, _b), _localRules, _rules, _env), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bodyFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bodyFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bodyFunc), 2))), omc_Util_tuple22(threadData, _b), _localRules, _rules, _env) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bodyFunc), 1)))) (threadData, omc_Util_tuple22(threadData, _b), _localRules, _rules, _env));
        __omcQ_24tmpVar10 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  _branches = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _branches;
}

static modelica_metatype closure2_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}static modelica_metatype closure3_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithm(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _alg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _alg;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta4;

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env, _info);
          _alg = tmpMeta5;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_alg), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_alg), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta7;

          tmpMeta9 = mmc_mk_box1(0, _info);
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_alg), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[4] = omc_Conversion_convertBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4))), (modelica_fnptr) mmc_mk_box2(0,closure2_Conversion_convertExp,tmpMeta9), boxvar_Conversion_convertAlgorithmItems, _localRules, _rules, _env);
          _alg = tmpMeta8;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_alg), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[5] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 5))), _localRules, _rules, _env);
          _alg = tmpMeta10;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_Conversion_convertForIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta12;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_Conversion_convertForIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta14;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta16;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_alg), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_alg), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta18;

          tmpMeta20 = mmc_mk_box1(0, _info);
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_alg), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[4] = omc_Conversion_convertBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4))), (modelica_fnptr) mmc_mk_box2(0,closure3_Conversion_convertExp,tmpMeta20), boxvar_Conversion_convertAlgorithmItems, _localRules, _rules, _env);
          _alg = tmpMeta19;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, _info);
          _alg = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_Conversion_convertFunctionArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env, _info);
          _alg = tmpMeta22;
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_alg), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env);
          _alg = tmpMeta23;
          goto tmp2_done;
        }
        case 13: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env);
          _alg = tmpMeta24;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_alg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[3] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 3))), _localRules, _rules, _env);
          _alg = tmpMeta25;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _alg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithmItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _alg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg = __omcQ_24in_5Falg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _alg;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_alg), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertAlgorithm(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))), _localRules, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 4))));
          _alg = tmpMeta5;
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
  return _alg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertAlgorithmItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falgs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _algs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _algs = __omcQ_24in_5Falgs;
  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp4;
    modelica_metatype _alg_loopVar = 0;
    modelica_metatype _alg;
    _alg_loopVar = _algs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar13;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_alg_loopVar)) {
        _alg = MMC_CAR(_alg_loopVar);
        _alg_loopVar = MMC_CDR(_alg_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar12 = omc_Conversion_convertAlgorithmItem(threadData, _alg, _localRules, _rules, _env);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar13;
  }
  _algs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _algs;
}

static modelica_metatype closure4_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}static modelica_metatype closure5_Conversion_convertExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp, modelica_metatype localRules, modelica_metatype rules, modelica_metatype env)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertExp(thData, $in_exp, localRules, rules, env, info);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta4;

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env);
          _eq = tmpMeta5;

          tmpMeta7 = mmc_mk_box1(0, _info);
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_Conversion_convertBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (modelica_fnptr) mmc_mk_box2(0,closure4_Conversion_convertExp,tmpMeta7), boxvar_Conversion_convertEquationItems, _localRules, _rules, _env);
          _eq = tmpMeta6;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_eq), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[5] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _localRules, _rules, _env);
          _eq = tmpMeta8;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env, _info);
          _eq = tmpMeta10;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env, _info);
          _eq = tmpMeta12;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env, _info);
          _eq = tmpMeta14;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_Conversion_convertForIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta15;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[3] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env);
          _eq = tmpMeta16;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[3] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env);
          _eq = tmpMeta18;

          tmpMeta20 = mmc_mk_box1(0, _info);
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[4] = omc_Conversion_convertBranches(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), (modelica_fnptr) mmc_mk_box2(0,closure5_Conversion_convertExp,tmpMeta20), boxvar_Conversion_convertEquationItems, _localRules, _rules, _env);
          _eq = tmpMeta19;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_Conversion_convertCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, _info);
          _eq = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_eq), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_Conversion_convertFunctionArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _localRules, _rules, _env, _info);
          _eq = tmpMeta22;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_eq), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[2] = omc_Conversion_convertEquationItem(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env);
          _eq = tmpMeta23;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquationItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _eq = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eq), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2))), _localRules, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          _eq = tmpMeta5;
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
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEquationItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqs = __omcQ_24in_5Feqs;
  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp4;
    modelica_metatype _eq_loopVar = 0;
    modelica_metatype _eq;
    _eq_loopVar = _eqs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar15;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_eq_loopVar)) {
        _eq = MMC_CAR(_eq_loopVar);
        _eq_loopVar = MMC_CDR(_eq_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar14 = omc_Conversion_convertEquationItem(threadData, _eq, _localRules, _rules, _env);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar15;
  }
  _eqs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertComponent(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _localRules, modelica_metatype _modifierRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_comp), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_Conversion_convertSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _localRules, _rules, _env, _info);
  _comp = tmpMeta1;

  if((!listEmpty(_modifierRules)))
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_comp), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[4] = omc_Conversion_convertModification(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), _modifierRules);
    _comp = tmpMeta2;
  }

  tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_comp), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[4] = omc_Conversion_convertModificationExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))), _localRules, _rules, _env, _info);
  _comp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertComponentItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype _localRules, modelica_metatype _modifierRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype _comp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  _comp = __omcQ_24in_5Fcomp;
  __omcQ_24mrfa_5F2 = omc_Conversion_convertComponent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))), _localRules, _modifierRules, _rules, _env, _info);

  __omcQ_24mrfa_5F3 = omc_Conversion_convertOptExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 3))), _localRules, _rules, _env, _info);

  tmpMeta1 = mmc_mk_box4(3, &Absyn_ComponentItem_COMPONENTITEM__desc, __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 4))));
  _comp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_importExists(threadData_t *threadData, modelica_metatype _element, modelica_metatype _imports)
{
  modelica_boolean _exists;
  modelica_metatype _path = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exists has no default value.
  // _path has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _path = tmpMeta9;
          /* Pattern matching succeeded */
          _exists = omc_UnorderedSet_contains(threadData, _path, _imports);

          if((!_exists))
          {
            omc_UnorderedSet_add(threadData, _path, _imports);
          }
          tmp1 = _exists;
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
  _exists = tmp1;
  _return: OMC_LABEL_UNUSED
  return _exists;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_importExists(threadData_t *threadData, modelica_metatype _element, modelica_metatype _imports)
{
  modelica_boolean _exists;
  modelica_metatype out_exists;
  _exists = omc_Conversion_importExists(threadData, _element, _imports);
  out_exists = mmc_mk_icon(_exists);
  return out_exists;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_filterDuplicateImports(threadData_t *threadData, modelica_metatype _elements)
{
  modelica_metatype _outElements = NULL;
  modelica_metatype _imports = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElements has no default value.
  // _imports has no default value.
  _imports = omc_UnorderedSet_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1));

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar16;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _elements;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar17;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if ((!omc_Conversion_importExists(threadData, _e, _imports))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar16 = _e;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar17;
  }
  _outElements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outElements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_simplifyImport(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fimp)
{
  modelica_metatype _imp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imp = __omcQ_24in_5Fimp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _imp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 2))), omc_AbsynUtil_pathLastIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3))))))) goto tmp3_end;
          tmpMeta6 = mmc_mk_box2(4, &Absyn_Import_QUAL__IMPORT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _imp;
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
  _imp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _imp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertImport(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fimp, modelica_metatype _rules, modelica_metatype _info)
{
  modelica_metatype _imp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _imp = __omcQ_24in_5Fimp;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _imp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_imp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_Conversion_convertPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 3))), _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);
          _imp = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_imp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 2))), _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);
          _imp = tmpMeta5;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_imp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_Conversion_convertPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 2))), _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);
          _imp = tmpMeta6;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_imp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_Conversion_convertPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_imp), 2))), _rules, omc_Conversion_ImportTreeImpl_new(threadData), _info);
          _imp = tmpMeta7;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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

  _imp = omc_Conversion_simplifyImport(threadData, _imp);
  _return: OMC_LABEL_UNUSED
  return _imp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fspec, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info)
{
  modelica_metatype _spec = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _spec = __omcQ_24in_5Fspec;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _spec;
    {
      modelica_metatype _local_rules = NULL;
      modelica_metatype _mod_rules = NULL;
      modelica_metatype _ty_path = NULL;
      modelica_metatype _import_path = NULL;
      modelica_metatype _ty = NULL;
      int tmp3;
      // _local_rules has no default value.
      // _mod_rules has no default value.
      // _ty_path has no default value.
      // _import_path has no default value.
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_spec), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[3] = omc_Conversion_convertClass(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))), _rules, _env, _extendsRules);
          _spec = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _ty_path = omc_Conversion_applyImportsToPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))) ,&_import_path);

          omc_Conversion_lookupTypeRules(threadData, _ty_path, _rules, _env ,&_local_rules ,&_mod_rules);

          _ty_path = omc_Conversion_convertPath(threadData, _ty_path, _rules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))), _info);

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_stripImportPath(threadData, _ty_path, _import_path);
          _spec = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_Conversion_convertModification2(threadData, _mod_rules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))));
          _spec = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = omc_Conversion_convertElementArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))), _local_rules, _rules, _env);
          _spec = tmpMeta7;
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_Conversion_convertImport(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 2))), _rules, _info);
          _spec = tmpMeta8;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _ty = omc_Conversion_convertTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 3))), _rules, _env, _info ,&_local_rules ,&_mod_rules);

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _ty;
          _spec = tmpMeta9;

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp14;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_spec), 4)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar19;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar18 = omc_Conversion_convertComponentItem(threadData, _c, _local_rules, _mod_rules, _rules, _env, _info);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar19;
          }
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_spec), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = tmpMeta11;
          _spec = tmpMeta10;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _spec;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertConstrainClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcc, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _cc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cc = __omcQ_24in_5Fcc;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cc), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_Conversion_convertElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cc), 2))), _rules, _env, tmpMeta2, _info);
  _cc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules)
{
  modelica_metatype _element = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _element = __omcQ_24in_5Felement;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      modelica_metatype _local_rules = NULL;
      int tmp3;
      // _local_rules has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[5] = omc_Conversion_convertElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 5))), _rules, _env, _extendsRules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))));
          _element = tmpMeta4;

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_element), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[7] = omc_Conversion_convertOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 7))), boxvar_Conversion_convertConstrainClass, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 6))));
          _element = tmpMeta5;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _local_rules = omc_Conversion_newRuleTable(threadData);

          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp10;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar21;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar20 = omc_Conversion_convertNamedArg(threadData, _a, _local_rules, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))));
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar21;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_element), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _element = tmpMeta6;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _element;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementItem(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules)
{
  modelica_metatype _element = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _element = __omcQ_24in_5Felement;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _element;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_element), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), _rules, _env, _extendsRules);
          _element = tmpMeta5;
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
  return _element;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementItems(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felements, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules)
{
  modelica_metatype _elements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elements = __omcQ_24in_5Felements;
  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp4;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _elements;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar23;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar22 = omc_Conversion_convertElementItem(threadData, _e, _rules, _env, _extendsRules);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar23;
  }
  _elements = tmpMeta1;

  _elements = omc_Conversion_filterDuplicateImports(threadData, _elements);
  _return: OMC_LABEL_UNUSED
  return _elements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertTypePath(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpath, modelica_metatype _rule, modelica_metatype _importPath, modelica_metatype _info)
{
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = __omcQ_24in_5Fpath;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _rule;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          if((omc_AbsynUtil_pathPartCount(threadData, _path, ((modelica_integer) 0)) == arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))))))
          {
            _path = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3)));
          }
          else
          {
            _path = omc_Util_foldcallN(threadData, arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2)))), boxvar_AbsynUtil_pathRest, _path);

            _path = omc_AbsynUtil_joinPaths(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), _path);
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta4, _info);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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

  _path = omc_Conversion_stripImportPath(threadData, _path, _importPath);
  _return: OMC_LABEL_UNUSED
  return _path;
}

static modelica_metatype closure6_Conversion_convertSubscripts(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_subs, modelica_metatype rules, modelica_metatype env, modelica_metatype info)
{
  modelica_metatype localRules = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertSubscripts(thData, $in_subs, localRules, rules, env, info);
}static modelica_metatype closure7_Conversion_convertSubscripts(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_subs, modelica_metatype rules, modelica_metatype env, modelica_metatype info)
{
  modelica_metatype localRules = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertSubscripts(thData, $in_subs, localRules, rules, env, info);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertTypeSpec(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info, modelica_metatype *out_localRules, modelica_metatype *out_modifierRules)
{
  modelica_metatype _ty = NULL;
  modelica_metatype _localRules = NULL;
  modelica_metatype _modifierRules = NULL;
  modelica_metatype _ty_rule = NULL;
  modelica_metatype _ty_path = NULL;
  modelica_metatype _import_path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  // _localRules has no default value.
  // _modifierRules has no default value.
  // _ty_rule has no default value.
  // _ty_path has no default value.
  // _import_path has no default value.
  _ty_path = omc_Conversion_applyImportsToPath(threadData, omc_AbsynUtil_typeSpecPath(threadData, _ty), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 3))) ,&_import_path);

  _ty_rule = omc_Conversion_lookupTypeRules(threadData, _ty_path, _rules, _env ,&_localRules ,&_modifierRules);

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          if(isSome(_ty_rule))
          {
            tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_Conversion_convertTypePath(threadData, _ty_path, omc_Util_getOption(threadData, _ty_rule), _import_path, _info);
            _ty = tmpMeta4;
          }

          tmpMeta6 = mmc_mk_box1(0, _localRules);
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = omc_Conversion_convertOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))), (modelica_fnptr) mmc_mk_box2(0,closure6_Conversion_convertSubscripts,tmpMeta6), _rules, _env, _info);
          _ty = tmpMeta5;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          if(isSome(_ty_rule))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_Conversion_convertTypePath(threadData, _ty_path, omc_Util_getOption(threadData, _ty_rule), _import_path, _info);
            _ty = tmpMeta7;
          }

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp12;
            modelica_metatype _t_loopVar = 0;
            modelica_metatype _t;
            _t_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3)));
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar25;
            while(1) {
              tmp12 = 1;
              if (!listEmpty(_t_loopVar)) {
                _t = MMC_CAR(_t_loopVar);
                _t_loopVar = MMC_CDR(_t_loopVar);
                tmp12--;
              }
              if (tmp12 == 0) {
                __omcQ_24tmpVar24 = omc_Conversion_convertTypeSpec(threadData, _t, _rules, _env, _info, NULL, NULL);
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar25;
          }
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = tmpMeta9;
          _ty = tmpMeta8;

          tmpMeta14 = mmc_mk_box1(0, _localRules);
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_ty), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[4] = omc_Conversion_convertOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 4))), (modelica_fnptr) mmc_mk_box2(0,closure7_Conversion_convertSubscripts,tmpMeta14), _rules, _env, _info);
          _ty = tmpMeta13;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  if (out_localRules) { *out_localRules = _localRules; }
  if (out_modifierRules) { *out_modifierRules = _modifierRules; }
  return _ty;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_mergeModifiers(threadData_t *threadData, modelica_metatype _outerMods, modelica_metatype _innerMods)
{
  modelica_metatype _mods = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mods = _outerMods;
  {
    modelica_metatype _m;
    for (tmpMeta1 = listReverse(_innerMods); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _m = MMC_CAR(tmpMeta1);
      if((!omc_Conversion_isModifierInList(threadData, _m, _outerMods)))
      {
        tmpMeta2 = mmc_mk_cons(_m, _mods);
        _mods = tmpMeta2;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _mods;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholdersExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _placeholders, modelica_metatype _info, modelica_metatype *out_outPlaceholders)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outPlaceholders = NULL;
  modelica_string _name = NULL;
  modelica_integer _len;
  modelica_metatype _new_exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outPlaceholders = _placeholders;
  // _name has no default value.
  // _len has no default value.
  // _new_exp has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _name = tmpMeta7;
          /* Pattern matching succeeded */
          _len = stringLength(_name);

          if((((((_len > ((modelica_integer) 4)) && (stringGet(_name, ((modelica_integer) 1)) == ((modelica_integer) 39))) && (stringGet(_name, ((modelica_integer) 2)) == ((modelica_integer) 37))) && (stringGet(_name, ((modelica_integer) -1) + _len) == ((modelica_integer) 37))) && (stringGet(_name, _len) == ((modelica_integer) 39))))
          {
            _name = substring(_name, ((modelica_integer) 3), ((modelica_integer) -2) + _len);

            _new_exp = omc_UnorderedMap_getOrDefault(threadData, _name, _placeholders, mmc_mk_none());

            if(isNone(_new_exp))
            {
              tmpMeta10 = stringAppend(_OMC_LIT6,_name);
              tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT6);
              tmpMeta9 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMultiSourceMessage(threadData, _OMC_LIT5, tmpMeta9, _info);
            }

            /* Pattern-matching assignment */
            tmpMeta12 = _new_exp;
            if (optionNone(tmpMeta12)) goto goto_2;
            tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
            _outExp = tmpMeta13;
          }
          else
          {
            _outExp = _exp;
          }
          tmpMeta1 = _outExp;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _outExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outPlaceholders) { *out_outPlaceholders = _outPlaceholders; }
  return _outExp;
}

static modelica_metatype closure8_Conversion_replacePlaceholdersExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp, modelica_metatype placeholders, modelica_metatype tmp6)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_replacePlaceholdersExp(thData, exp, placeholders, info, tmp6);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholdersEqMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqMod, modelica_metatype _placeholders, modelica_metatype _info)
{
  modelica_metatype _eqMod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqMod = __omcQ_24in_5FeqMod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqMod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box1(0, _info);
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_eqMod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_AbsynUtil_traverseExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqMod), 2))), (modelica_fnptr) mmc_mk_box2(0,closure8_Conversion_replacePlaceholdersExp,tmpMeta7), _placeholders, NULL);
          _eqMod = tmpMeta5;
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
  return _eqMod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_replacePlaceholders(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _placeholders, modelica_metatype _info)
{
  modelica_metatype _arg = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _eq_mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  // _mod has no default value.
  // _args has no default value.
  // _eq_mod has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _arg;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
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
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,6) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          
          _mod = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = _mod;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _args = tmpMeta8;
          _eq_mod = tmpMeta9;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp13;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = _args;
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar27;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar26 = omc_Conversion_replacePlaceholders(threadData, _a, _placeholders, _info);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar27;
          }
          _args = tmpMeta10;

          tmpMeta14 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 7))), mmc_mk_cons(_info, MMC_REFSTRUCTLIT(mmc_nil)));
          _eq_mod = omc_Conversion_replacePlaceholdersEqMod(threadData, _eq_mod, _placeholders, tmpMeta14);

          tmpMeta16 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, _args, _eq_mod);
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[5] = mmc_mk_some(tmpMeta16);
          _arg = tmpMeta15;
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
  return _arg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_getElementArgBinding(threadData_t *threadData, modelica_metatype _arg)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _e has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _arg;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_e);
          goto tmp3_done;
        }
        case 1: {
          
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_makePlaceholderTable(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _placeholders = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _placeholders has no default value.
  _placeholders = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));

  {
    modelica_metatype _arg;
    for (tmpMeta1 = _args; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _arg = MMC_CAR(tmpMeta1);
      omc_UnorderedMap_add(threadData, omc_AbsynUtil_pathString(threadData, omc_AbsynUtil_elementArgName(threadData, _arg), _OMC_LIT7, 1 /* true */, 0 /* false */), omc_Conversion_getElementArgBinding(threadData, _arg), _placeholders);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _placeholders;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_isEqualNameMod(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _mod1;
    tmp4_2 = _mod2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_AbsynUtil_pathEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod2), 4))));
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_isEqualNameMod(threadData_t *threadData, modelica_metatype _mod1, modelica_metatype _mod2)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Conversion_isEqualNameMod(threadData, _mod1, _mod2);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

static modelica_metatype closure9_Conversion_isEqualNameMod(threadData_t *thData, modelica_metatype closure, modelica_metatype mod1)
{
  modelica_metatype mod2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_isEqualNameMod(thData, mod1, mod2);
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_isModifierInList(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _mods)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box1(0, _mod);
  _res = omc_List_any(threadData, _mods, (modelica_fnptr) mmc_mk_box2(0,closure9_Conversion_isEqualNameMod,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_isModifierInList(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _mods)
{
  modelica_boolean _res;
  modelica_metatype tmpMeta1;
  modelica_metatype out_res;
  _res = omc_Conversion_isModifierInList(threadData, _mod, _mods);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

static modelica_metatype closure11_Conversion_isModifierInList(threadData_t *thData, modelica_metatype closure, modelica_metatype mod)
{
  modelica_metatype mods = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_isModifierInList(thData, mod, mods);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModifier(threadData_t *threadData, modelica_metatype _rule, modelica_metatype __omcQ_24in_5FelemArgs)
{
  modelica_metatype _elemArgs = NULL;
  modelica_metatype _old_mods = NULL;
  modelica_metatype _new_mods = NULL;
  modelica_metatype _matching_mods = NULL;
  modelica_metatype _rest_mods = NULL;
  modelica_metatype _placeholders = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elemArgs = __omcQ_24in_5FelemArgs;
  // _old_mods has no default value.
  // _new_mods has no default value.
  // _matching_mods has no default value.
  // _rest_mods has no default value.
  // _placeholders has no default value.
  // _info has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _rule;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _old_mods = tmpMeta2;
  _new_mods = tmpMeta3;
  _info = tmpMeta4;

  if(listEmpty(_old_mods))
  {
    _elemArgs = omc_Conversion_mergeModifiers(threadData, _elemArgs, _new_mods);
  }
  else
  {
    tmpMeta5 = mmc_mk_box1(0, _old_mods);
    _matching_mods = omc_List_splitOnTrue(threadData, _elemArgs, (modelica_fnptr) mmc_mk_box2(0,closure11_Conversion_isModifierInList,tmpMeta5) ,&_rest_mods);

    if((!listEmpty(_matching_mods)))
    {
      _placeholders = omc_Conversion_makePlaceholderTable(threadData, listAppend(_old_mods, _matching_mods));

      {
        modelica_metatype __omcQ_24tmpVar29;
        modelica_metatype* tmp7;
        modelica_metatype tmpMeta8;
        modelica_metatype __omcQ_24tmpVar28;
        modelica_integer tmp9;
        modelica_metatype _m_loopVar = 0;
        modelica_metatype _m;
        _m_loopVar = _new_mods;
        tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar29 = tmpMeta8; /* defaultValue */
        tmp7 = &__omcQ_24tmpVar29;
        while(1) {
          tmp9 = 1;
          if (!listEmpty(_m_loopVar)) {
            _m = MMC_CAR(_m_loopVar);
            _m_loopVar = MMC_CDR(_m_loopVar);
            tmp9--;
          }
          if (tmp9 == 0) {
            __omcQ_24tmpVar28 = omc_Conversion_replacePlaceholders(threadData, _m, _placeholders, _info);
            *tmp7 = mmc_mk_cons(__omcQ_24tmpVar28,0);
            tmp7 = &MMC_CDR(*tmp7);
          } else if (tmp9 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp7 = mmc_mk_nil();
        tmpMeta6 = __omcQ_24tmpVar29;
      }
      _new_mods = tmpMeta6;

      _elemArgs = omc_Conversion_mergeModifiers(threadData, _rest_mods, _new_mods);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _elemArgs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModification2(threadData_t *threadData, modelica_metatype _modifierRules, modelica_metatype __omcQ_24in_5FelemArgs)
{
  modelica_metatype _elemArgs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elemArgs = __omcQ_24in_5FelemArgs;
  {
    modelica_metatype _rule;
    for (tmpMeta1 = _modifierRules; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _rule = MMC_CAR(tmpMeta1);
      _elemArgs = omc_Conversion_convertModifier(threadData, _rule, _elemArgs);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _elemArgs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModification(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _modifierRules)
{
  modelica_metatype _mod = NULL;
  modelica_metatype _elem_args = NULL;
  modelica_metatype _eq_mod = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  // _elem_args has no default value.
  // _eq_mod has no default value.
  if(isSome(_mod))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _mod;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
    _elem_args = tmpMeta3;
    _eq_mod = tmpMeta4;
  }
  else
  {
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    _elem_args = tmpMeta5;

    _eq_mod = _OMC_LIT8;
  }

  _elem_args = omc_Conversion_convertModification2(threadData, _modifierRules, _elem_args);

  { /* match expression */
    modelica_metatype tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = _elem_args;
    tmp9_2 = _eq_mod;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (!listEmpty(tmp9_1)) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,0) == 0) goto tmp8_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_none();
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, _elem_args, _eq_mod);
          tmpMeta6 = mmc_mk_some(tmpMeta11);
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _mod = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertEqMod(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _mod = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _mod;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_mod), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))), _localRules, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))));
          _mod = tmpMeta5;
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
  return _mod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModificationExps2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype __omcQ_24mrfa_5F5 = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F4 has no default value.
  // __omcQ_24mrfa_5F5 has no default value.
  _mod = __omcQ_24in_5Fmod;
  __omcQ_24mrfa_5F4 = omc_Conversion_convertElementArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 2))), _localRules, _rules, _env);

  __omcQ_24mrfa_5F5 = omc_Conversion_convertEqMod(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 3))), _localRules, _rules, _env);

  tmpMeta1 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F5);
  _mod = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _mod;
}

static modelica_metatype closure12_Conversion_convertModificationExps2(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_mod, modelica_metatype rules, modelica_metatype env, modelica_metatype info)
{
  modelica_metatype localRules = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_convertModificationExps2(thData, $in_mod, localRules, rules, env, info);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertModificationExps(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fmod, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _mod = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _mod = __omcQ_24in_5Fmod;
  tmpMeta1 = mmc_mk_box1(0, _localRules);
  _mod = omc_Conversion_convertOption(threadData, _mod, (modelica_fnptr) mmc_mk_box2(0,closure12_Conversion_convertModificationExps2,tmpMeta1), _rules, _env, _info);
  _return: OMC_LABEL_UNUSED
  return _mod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementArg(threadData_t *threadData, modelica_metatype __omcQ_24in_5Farg, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _arg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _arg = __omcQ_24in_5Farg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _arg;
    {
      modelica_metatype _mod_rules = NULL;
      int tmp3;
      // _mod_rules has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
          _mod_rules = omc_UnorderedMap_getOrDefault(threadData, omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 4))), _OMC_LIT7, 1 /* true */, 0 /* false */), _localRules, tmpMeta4);

          {
            modelica_metatype _rule;
            for (tmpMeta5 = _mod_rules; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _rule = MMC_CAR(tmpMeta5);
              { /* match expression */
                modelica_metatype tmp8_1;
                tmp8_1 = _rule;
                {
                  volatile mmc_switch_type tmp8;
                  int tmp9;
                  tmp8 = 0;
                  for (; tmp8 < 2; tmp8++) {
                    switch (MMC_SWITCH_CAST(tmp8)) {
                    case 0: {
                      modelica_metatype tmpMeta10;
                      modelica_metatype tmpMeta11;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,3) == 0) goto tmp7_end;
                      
                      /* Pattern matching succeeded */
                      tmpMeta11 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4))));
                      tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(8));
                      memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
                      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = tmpMeta11;
                      _arg = tmpMeta10;
                      goto tmp7_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      goto tmp7_done;
                    }
                    }
                    goto tmp7_end;
                    tmp7_end: ;
                  }
                  goto goto_6;
                  goto_6:;
                  goto goto_1;
                  goto tmp7_done;
                  tmp7_done:;
                }
              }
              ;
            }
          }

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[5] = omc_Conversion_convertModificationExps(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 5))), _localRules, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 7))));
          _arg = tmpMeta13;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[5] = omc_Conversion_convertElementSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 5))), _rules, _env, tmpMeta15, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 7))));
          _arg = tmpMeta14;

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_arg), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[6] = omc_Conversion_convertOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 6))), boxvar_Conversion_convertConstrainClass, _rules, _env, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 7))));
          _arg = tmpMeta16;
          goto tmp2_done;
        }
        case 5: {
          
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
  return _arg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertElementArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fargs, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _args = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _args = __omcQ_24in_5Fargs;
  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp4;
    modelica_metatype _a_loopVar = 0;
    modelica_metatype _a;
    _a_loopVar = _args;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar31;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_a_loopVar)) {
        _a = MMC_CAR(_a_loopVar);
        _a_loopVar = MMC_CDR(_a_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar30 = omc_Conversion_convertElementArg(threadData, _a, _localRules, _rules, _env);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar31;
  }
  _args = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _args;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassPart(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info)
{
  modelica_metatype _part = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _part;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[2] = omc_Conversion_convertElementItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _rules, _env, _extendsRules);
          _part = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_Conversion_convertElementItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _rules, _env, _extendsRules);
          _part = tmpMeta5;
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _localRules, _rules, _env);
          _part = tmpMeta6;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_Conversion_convertEquationItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _localRules, _rules, _env);
          _part = tmpMeta7;
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _localRules, _rules, _env);
          _part = tmpMeta8;
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_part), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = omc_Conversion_convertAlgorithmItems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _localRules, _rules, _env);
          _part = tmpMeta9;
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_part), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_Conversion_convertExternalDecl(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 2))), _localRules, _rules, _env, _info);
          _part = tmpMeta10;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _part;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassParts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fparts, modelica_metatype _localRules, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _info)
{
  modelica_metatype _parts = NULL;
  modelica_metatype _extends_rules = NULL;
  modelica_metatype _cls_env = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _parts = __omcQ_24in_5Fparts;
  // _extends_rules has no default value.
  // _cls_env has no default value.
  _cls_env = omc_Conversion_addImportNamesToEnv(threadData, omc_Conversion_getImportsInParts(threadData, _parts), _rules, _env);

  omc_Conversion_addComponentTypesToEnv(threadData, _parts, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_env), 2))));

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cls_env), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_Conversion_shadowImportsInParts(threadData, _parts, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls_env), 3))));
  _cls_env = tmpMeta1;

  _extends_rules = omc_Conversion_getExtendsRules(threadData, _parts, _rules, _cls_env);

  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp5;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = _parts;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar33;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar32 = omc_Conversion_convertClassPart(threadData, _p, _localRules, _rules, _cls_env, _extends_rules, _info);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar33;
  }
  _parts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _parts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClassDef(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcdef, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules, modelica_metatype _info)
{
  modelica_metatype _cdef = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cdef = __omcQ_24in_5Fcdef;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cdef;
    {
      modelica_metatype _local_rules = NULL;
      modelica_metatype _mod_rules = NULL;
      modelica_metatype _ty = NULL;
      int tmp3;
      // _local_rules has no default value.
      // _mod_rules has no default value.
      // _ty has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[4] = omc_Conversion_convertClassParts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), omc_Conversion_newRuleTable(threadData), _rules, _env, _info);
          _cdef = tmpMeta4;
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _ty = omc_Conversion_convertTypeSpec(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _rules, _env, _info ,&_local_rules ,&_mod_rules);

          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = _ty;
          _cdef = tmpMeta5;

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = omc_Conversion_convertModification2(threadData, _mod_rules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))));
          _cdef = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_cdef), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_Conversion_convertElementArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _local_rules, _rules, _env);
          _cdef = tmpMeta7;
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          _local_rules = omc_Conversion_lookupClassExtendsRules(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _extendsRules ,&_mod_rules);

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_Conversion_convertModification2(threadData, _mod_rules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))));
          _cdef = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = omc_Conversion_convertElementArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), _local_rules, _rules, _env);
          _cdef = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_cdef), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[5] = omc_Conversion_convertClassParts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), _local_rules, _rules, _env, _info);
          _cdef = tmpMeta10;
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  return _cdef;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _rules, modelica_metatype _env, modelica_metatype _extendsRules)
{
  modelica_metatype _cls = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(12));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_cls), 12*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[7] = omc_Conversion_convertClassDef(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 7))), _rules, _env, _extendsRules, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cls), 11))));
  _cls = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cls;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_convertProgram(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fprogram, modelica_metatype _rules, modelica_metatype _env)
{
  modelica_metatype _program = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _program = __omcQ_24in_5Fprogram;
  {
    modelica_metatype __omcQ_24tmpVar35;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar34;
    modelica_integer tmp6;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_program), 2)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar35 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar35;
    while(1) {
      tmp6 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp6--;
      }
      if (tmp6 == 0) {
        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar34 = omc_Conversion_convertClass(threadData, _c, _rules, _env, tmpMeta5);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar34,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp6 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar35;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(4));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_program), 4*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = tmpMeta2;
  _program = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _program;
}

PROTECTED_FUNCTION_STATIC void omc_Conversion_dumpRule(threadData_t *threadData, modelica_metatype _rule, modelica_string _indent)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(_indent),stdout);

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _rule;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);

          fputs(MMC_STRINGDATA(omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), _OMC_LIT7, 1 /* true */, 0 /* false */)),stdout);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT10),stdout);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT11),stdout);

          fputs(MMC_STRINGDATA((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3)))),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);

          fputs(MMC_STRINGDATA((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 4)))),stdout);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT13),stdout);

          fputs(MMC_STRINGDATA(omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2))), boxvar_Dump_unparseElementArgStr, _OMC_LIT14, _OMC_LIT15, _OMC_LIT16, _OMC_LIT17, 1 /* true */, ((modelica_integer) 0))),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);

          fputs(MMC_STRINGDATA(omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), boxvar_Dump_unparseElementArgStr, _OMC_LIT14, _OMC_LIT15, _OMC_LIT16, _OMC_LIT17, 1 /* true */, ((modelica_integer) 0))),stdout);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT18),stdout);

          fputs(MMC_STRINGDATA((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 2)))),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT19),stdout);
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

  fputs(MMC_STRINGDATA(_OMC_LIT20),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Conversion_dumpRules(threadData_t *threadData, modelica_metatype _rules, modelica_string _indent)
{
  modelica_metatype _keys = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype _rule = NULL;
  modelica_metatype _rest_rules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _keys has no default value.
  // _values has no default value.
  // _rule has no default value.
  _rest_rules = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rules), 3)));
  _keys = omc_UnorderedMap_keyArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rules), 2))));

  _values = omc_UnorderedMap_valueArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rules), 2))));

  while(1)
  {
    if(!(!listEmpty(_rest_rules))) break;
    /* Pattern-matching assignment */
    tmpMeta1 = _rest_rules;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    _rule = tmpMeta2;
    _rest_rules = tmpMeta3;

    if((listEmpty(_rest_rules) && (arrayLength(_keys) == ((modelica_integer) 0))))
    {
      tmpMeta4 = stringAppend(_indent,_OMC_LIT22);
      omc_Conversion_dumpRule(threadData, _rule, tmpMeta4);
    }
    else
    {
      tmpMeta5 = stringAppend(_indent,_OMC_LIT21);
      omc_Conversion_dumpRule(threadData, _rule, tmpMeta5);
    }
  }

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_keys);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      if((_i == arrayLength(_keys)))
      {
        tmpMeta6 = stringAppend(_indent,_OMC_LIT22);
        fputs(MMC_STRINGDATA(tmpMeta6),stdout);

        fputs(MMC_STRINGDATA(_keys),stdout);

        fputs(MMC_STRINGDATA(_OMC_LIT20),stdout);

        tmpMeta7 = stringAppend(_indent,_OMC_LIT24);
        omc_Conversion_dumpRules(threadData, arrayGet(_values,_i) /* DAE.ASUB */, tmpMeta7);
      }
      else
      {
        tmpMeta8 = stringAppend(_indent,_OMC_LIT21);
        fputs(MMC_STRINGDATA(tmpMeta8),stdout);

        fputs(MMC_STRINGDATA(_keys),stdout);

        fputs(MMC_STRINGDATA(_OMC_LIT20),stdout);

        tmpMeta9 = stringAppend(_indent,_OMC_LIT23);
        omc_Conversion_dumpRules(threadData, arrayGet(_values,_i) /* DAE.ASUB */, tmpMeta9);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupClassExtendsRules(threadData_t *threadData, modelica_string _name, modelica_metatype _extendsRules, modelica_metatype *out_modificationRules)
{
  modelica_metatype _localRules = NULL;
  modelica_metatype _modificationRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _onode = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _localRules = omc_Conversion_newRuleTable(threadData);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _modificationRules = tmpMeta1;
  // _onode has no default value.
  // _node has no default value.
  {
    modelica_metatype _ext;
    for (tmpMeta2 = _extendsRules; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _ext = MMC_CAR(tmpMeta2);
      _onode = omc_UnorderedMap_get(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ext), 2))));

      if(isSome(_onode))
      {
        /* Pattern-matching assignment */
        tmpMeta3 = _onode;
        if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
        tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
        _node = tmpMeta4;

        _modificationRules = omc_Conversion_sortLocalRules(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), _localRules);

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_modificationRules) { *out_modificationRules = _modificationRules; }
  return _localRules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_mergeRuleList(threadData_t *threadData, modelica_metatype _oldRules, modelica_metatype _newRule)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRules has no default value.
  if(isNone(_oldRules))
  {
    tmpMeta1 = mmc_mk_cons(_newRule, MMC_REFSTRUCTLIT(mmc_nil));
    _outRules = tmpMeta1;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _oldRules;
    if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
    _outRules = tmpMeta3;

    tmpMeta4 = mmc_mk_cons(_newRule, _outRules);
    _outRules = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

static modelica_metatype closure13_Conversion_mergeRuleList(threadData_t *thData, modelica_metatype closure, modelica_metatype oldRules)
{
  modelica_metatype newRule = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Conversion_mergeRuleList(thData, oldRules, newRule);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_sortLocalRules(threadData_t *threadData, modelica_metatype _rules, modelica_metatype _localRules)
{
  modelica_metatype _modifierRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _modifierRules = tmpMeta1;
  {
    modelica_metatype _rule;
    for (tmpMeta2 = _rules; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _rule = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _rule;
        {
          int tmp5;
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
            case 5: {
              modelica_metatype tmpMeta6;
              
              /* Pattern matching succeeded */
              tmpMeta6 = mmc_mk_box1(0, _rule);
              omc_UnorderedMap_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rule), 3))), (modelica_fnptr) mmc_mk_box2(0,closure13_Conversion_mergeRuleList,tmpMeta6), _localRules);
              goto tmp4_done;
            }
            case 6: {
              modelica_metatype tmpMeta7;
              
              /* Pattern matching succeeded */
              tmpMeta7 = mmc_mk_cons(_rule, _modifierRules);
              _modifierRules = tmpMeta7;
              goto tmp4_done;
            }
            default:
            tmp4_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _modifierRules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newEnv(threadData_t *threadData)
{
  modelica_metatype _env = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box3(3, &Conversion_Env_ENV__desc, omc_Conversion_newTypeTable(threadData), omc_Conversion_ImportTreeImpl_new(threadData));
  _env = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _env;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newTypeTable(threadData_t *threadData)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _table has no default value.
  _table = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _table;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_newRuleTable(threadData_t *threadData)
{
  modelica_metatype _table = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _table has no default value.
  _table = omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _table;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupTypeRules(threadData_t *threadData, modelica_metatype _typePath, modelica_metatype _rules, modelica_metatype _env, modelica_metatype *out_localRules, modelica_metatype *out_modifierRules)
{
  modelica_metatype _typeRule = NULL;
  modelica_metatype _localRules = NULL;
  modelica_metatype _modifierRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _found_rules = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _typeRule = mmc_mk_none();
  _localRules = omc_Conversion_newRuleTable(threadData);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _modifierRules = tmpMeta1;
  // _found_rules has no default value.
  _found_rules = omc_Conversion_lookupRules(threadData, _typePath, _rules);

  if(listEmpty(_found_rules))
  {
    goto _return;
  }

  _modifierRules = omc_Conversion_sortLocalRules(threadData, listHead(_found_rules), _localRules);

  {
    modelica_metatype _rl;
    for (tmpMeta2 = _found_rules; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _rl = MMC_CAR(tmpMeta2);
      {
        modelica_metatype _r;
        for (tmpMeta3 = _rl; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _r = MMC_CAR(tmpMeta3);
          { /* match expression */
            modelica_metatype tmp6_1;
            tmp6_1 = _r;
            {
              volatile mmc_switch_type tmp6;
              int tmp7;
              tmp6 = 0;
              for (; tmp6 < 2; tmp6++) {
                switch (MMC_SWITCH_CAST(tmp6)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,2) == 0) goto tmp5_end;
                  
                  /* Pattern matching succeeded */
                  if(isNone(_typeRule))
                  {
                    _typeRule = mmc_mk_some(_r);
                  }
                  goto tmp5_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp5_done;
                }
                }
                goto tmp5_end;
                tmp5_end: ;
              }
              goto goto_4;
              goto_4:;
              MMC_THROW_INTERNAL();
              goto tmp5_done;
              tmp5_done:;
            }
          }
          ;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_localRules) { *out_localRules = _localRules; }
  if (out_modifierRules) { *out_modifierRules = _modifierRules; }
  return _typeRule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupRules(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rules)
{
  modelica_metatype _outRules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _onode = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outRules = tmpMeta1;
  // _onode has no default value.
  _node = _rules;
  {
    modelica_metatype _name;
    for (tmpMeta2 = omc_AbsynUtil_pathToStringList(threadData, _path); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _name = MMC_CAR(tmpMeta2);
      _onode = omc_UnorderedMap_get(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))));

      if(isNone(_onode))
      {
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta3 = mmc_mk_cons(tmpMeta4, _outRules);
        _outRules = tmpMeta3;

        goto _return;
      }

      /* Pattern-matching assignment */
      tmpMeta5 = _onode;
      if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
      _node = tmpMeta6;

      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))))))
      {
        tmpMeta7 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), _outRules);
        _outRules = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outRules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_lookupRuleNode(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rules)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = mmc_mk_none();
  _node = _rules;
  {
    modelica_metatype _name;
    for (tmpMeta1 = omc_AbsynUtil_pathToStringList(threadData, _path); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _name = MMC_CAR(tmpMeta1);
      _outNode = omc_UnorderedMap_get(threadData, _name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))));

      if(isNone(_outNode))
      {
        goto _return;
      }

      /* Pattern-matching assignment */
      tmpMeta2 = _outNode;
      if (optionNone(tmpMeta2)) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      _node = tmpMeta3;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

static modelica_metatype closure14_Conversion_updateNode(threadData_t *thData, modelica_metatype closure, modelica_metatype onode)
{
  modelica_metatype path = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype rule = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_Conversion_updateNode(thData, onode, path, rule);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_updateNode(threadData_t *threadData, modelica_metatype _onode, modelica_metatype _path, modelica_metatype _rule)
{
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _node has no default value.
  if(isSome(_onode))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _onode;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _node = tmpMeta2;
  }
  else
  {
    _node = omc_Conversion_ConversionRules_newNode(threadData);
  }

  if(listEmpty(_path))
  {
    tmpMeta4 = mmc_mk_cons(_rule, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))));
    tmpMeta3 = MMC_TAGPTR(mmc_alloc_words(4));
    memcpy(MMC_UNTAGPTR(tmpMeta3), MMC_UNTAGPTR(_node), 4*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta3))[3] = tmpMeta4;
    _node = tmpMeta3;
  }
  else
  {
    tmpMeta5 = mmc_mk_box2(0, listRest(_path), _rule);
    omc_UnorderedMap_addUpdate(threadData, listHead(_path), (modelica_fnptr) mmc_mk_box2(0,closure14_Conversion_updateNode,tmpMeta5), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))));
  }
  _return: OMC_LABEL_UNUSED
  return _node;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_addRule(threadData_t *threadData, modelica_metatype _path, modelica_metatype _rule, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  omc_Conversion_updateNode(threadData, mmc_mk_some(_rules), _path, _rule);
  _return: OMC_LABEL_UNUSED
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parsePathList(threadData_t *threadData, modelica_string _str)
{
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = omc_Util_stringSplitAtChar(threadData, _str, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parsePath(threadData_t *threadData, modelica_string _str)
{
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _path = omc_AbsynUtil_stringPath(threadData, _str);
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertMessage(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      modelica_string _cls_name = NULL;
      modelica_string _msg = NULL;
      modelica_metatype _rule = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cls_name has no default value.
      // _msg has no default value.
      // _rule has no default value.
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
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,1) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          if (listEmpty(tmpMeta6)) goto tmp2_end;
          tmpMeta8 = MMC_CAR(tmpMeta6);
          tmpMeta9 = MMC_CDR(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (!listEmpty(tmpMeta9)) goto tmp2_end;
          _cls_name = tmpMeta7;
          _msg = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(7, &Conversion_ConversionRule_MESSAGE__desc, _msg);
          _rule = tmpMeta11;

          _rules = omc_Conversion_addRule(threadData, omc_Conversion_parsePathList(threadData, _cls_name), _rule, _rules);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(omc_List_toString(threadData, _args, boxvar_Dump_printExpStr, _OMC_LIT28, _OMC_LIT29, _OMC_LIT16, _OMC_LIT30, 1 /* true */, ((modelica_integer) 0)), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta12, _info);
          goto goto_1;
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
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Conversion_quotePlaceholders(threadData_t *threadData, modelica_string __omcQ_24in_5Fstr, modelica_metatype _info)
{
  modelica_string _str = NULL;
  modelica_metatype _strl = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _in_ident;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  // _strl has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _res = tmpMeta1;
  _in_ident = 0 /* false */;
  _strl = omc_System_strtokIncludingDelimiters(threadData, _str, _OMC_LIT6);

  if((listLength(_strl) <= ((modelica_integer) 1)))
  {
    goto _return;
  }

  {
    modelica_metatype _s;
    for (tmpMeta2 = _strl; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _s = MMC_CAR(tmpMeta2);
      if((stringEqual(_s, _OMC_LIT6)))
      {
        _s = (_in_ident?_OMC_LIT31:_OMC_LIT32);

        _in_ident = (!_in_ident);
      }

      tmpMeta3 = mmc_mk_cons(_s, _res);
      _res = tmpMeta3;
    }
  }

  if(_in_ident)
  {
    tmpMeta5 = mmc_mk_cons(_str, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT34, tmpMeta5, _info);

    MMC_THROW_INTERNAL();
  }

  _str = stringAppendList(listReverseInPlace(_res));
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseModifier(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _info)
{
  modelica_metatype _outMod = NULL;
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outMod has no default value.
  // _str has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _mod;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,3,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _str = tmpMeta2;

  _outMod = omc_Parser_stringMod(threadData, omc_Conversion_quotePlaceholders(threadData, _str, _info), _OMC_LIT35);
  _return: OMC_LABEL_UNUSED
  return _outMod;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertModifiers2(threadData_t *threadData, modelica_string _className, modelica_metatype _oldMods, modelica_metatype _newMods, modelica_boolean _simplify, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  modelica_metatype _cls_path = NULL;
  modelica_metatype _old_mods = NULL;
  modelica_metatype _new_mods = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  // _cls_path has no default value.
  // _old_mods has no default value.
  // _new_mods has no default value.
  _cls_path = omc_Conversion_parsePathList(threadData, _className);

  {
    modelica_metatype __omcQ_24tmpVar37;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar36;
    modelica_integer tmp4;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _oldMods;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar37 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar37;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar36 = omc_Conversion_parseModifier(threadData, _m, _info);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar36,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar37;
  }
  _old_mods = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp8;
    modelica_metatype _m_loopVar = 0;
    modelica_metatype _m;
    _m_loopVar = _newMods;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar39;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_m_loopVar)) {
        _m = MMC_CAR(_m_loopVar);
        _m_loopVar = MMC_CDR(_m_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar38 = omc_Conversion_parseModifier(threadData, _m, _info);
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar39;
  }
  _new_mods = tmpMeta5;

  tmpMeta9 = mmc_mk_box4(6, &Conversion_ConversionRule_MODIFIERS__desc, _old_mods, _new_mods, _info);
  _rules = omc_Conversion_addRule(threadData, _cls_path, tmpMeta9, _rules);
  _return: OMC_LABEL_UNUSED
  return _rules;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_parseConvertModifiers2(threadData_t *threadData, modelica_metatype _className, modelica_metatype _oldMods, modelica_metatype _newMods, modelica_metatype _simplify, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_integer tmp1;
  modelica_metatype _rules = NULL;
  tmp1 = mmc_unbox_integer(_simplify);
  _rules = omc_Conversion_parseConvertModifiers2(threadData, _className, _oldMods, _newMods, tmp1, _info, __omcQ_24in_5Frules);
  /* skip box _rules; Conversion.ConversionRules */
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertModifiers(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _args;
    {
      modelica_string _cls_name = NULL;
      modelica_metatype _old_mods = NULL;
      modelica_metatype _new_mods = NULL;
      modelica_boolean _simplify;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cls_name has no default value.
      // _old_mods has no default value.
      // _new_mods has no default value.
      // _simplify has no default value.
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta7);
          tmpMeta10 = MMC_CDR(tmpMeta7);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,13,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta10);
          tmpMeta13 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,13,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          _cls_name = tmpMeta8;
          _old_mods = tmpMeta11;
          _new_mods = tmpMeta14;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_Conversion_parseConvertModifiers2(threadData, _cls_name, _old_mods, _new_mods, 0 /* false */, _info, _rules);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,3,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta16);
          tmpMeta19 = MMC_CDR(tmpMeta16);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,13,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmpMeta19);
          tmpMeta22 = MMC_CDR(tmpMeta19);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,13,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          if (listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmpMeta22);
          tmpMeta25 = MMC_CDR(tmpMeta22);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,4,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          if (!listEmpty(tmpMeta25)) goto tmp3_end;
          _cls_name = tmpMeta17;
          _old_mods = tmpMeta20;
          _new_mods = tmpMeta23;
          _simplify = tmp27  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Conversion_parseConvertModifiers2(threadData, _cls_name, _old_mods, _new_mods, _simplify, _info, _rules);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_cons(omc_List_toString(threadData, _args, boxvar_Dump_printExpStr, _OMC_LIT36, _OMC_LIT29, _OMC_LIT16, _OMC_LIT30, 1 /* true */, ((modelica_integer) 0)), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta28, _info);
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
  _rules = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertElement(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      modelica_string _cls_name = NULL;
      modelica_string _old_name = NULL;
      modelica_string _new_name = NULL;
      modelica_metatype _old_path = NULL;
      modelica_metatype _rule = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cls_name has no default value.
      // _old_name has no default value.
      // _new_name has no default value.
      // _old_path has no default value.
      // _rule has no default value.
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
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,1) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          if (listEmpty(tmpMeta6)) goto tmp2_end;
          tmpMeta8 = MMC_CAR(tmpMeta6);
          tmpMeta9 = MMC_CDR(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (listEmpty(tmpMeta9)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmpMeta9);
          tmpMeta12 = MMC_CDR(tmpMeta9);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,1) == 0) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (!listEmpty(tmpMeta12)) goto tmp2_end;
          _cls_name = tmpMeta7;
          _old_name = tmpMeta10;
          _new_name = tmpMeta13;
          /* Pattern matching succeeded */
          _old_path = omc_Conversion_parsePathList(threadData, _cls_name);

          tmpMeta14 = mmc_mk_box4(5, &Conversion_ConversionRule_ELEMENT__desc, listArray(_old_path), _old_name, _new_name);
          _rule = tmpMeta14;

          _rules = omc_Conversion_addRule(threadData, _old_path, _rule, _rules);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_cons(omc_List_toString(threadData, _args, boxvar_Dump_printExpStr, _OMC_LIT37, _OMC_LIT29, _OMC_LIT16, _OMC_LIT30, 1 /* true */, ((modelica_integer) 0)), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta15, _info);
          goto goto_1;
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
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClassIf(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  omc_Error_terminate(threadData, _OMC_LIT38, _info);
  _return: OMC_LABEL_UNUSED
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClassStr(threadData_t *threadData, modelica_string _oldName, modelica_string _newName, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  modelica_metatype _old_path = NULL;
  modelica_metatype _rule = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  // _old_path has no default value.
  // _rule has no default value.
  _old_path = omc_Conversion_parsePathList(threadData, _oldName);

  tmpMeta1 = mmc_mk_box3(3, &Conversion_ConversionRule_CLASS__desc, listArray(_old_path), omc_Conversion_parsePath(threadData, _newName));
  _rule = tmpMeta1;

  _rules = omc_Conversion_addRule(threadData, _old_path, _rule, _rules);
  _return: OMC_LABEL_UNUSED
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseConvertClass(threadData_t *threadData, modelica_metatype _args, modelica_metatype _info, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      modelica_string _old_cls = NULL;
      modelica_string _new_cls = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _old_cls has no default value.
      // _new_cls has no default value.
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
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,3,1) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          if (listEmpty(tmpMeta6)) goto tmp2_end;
          tmpMeta8 = MMC_CAR(tmpMeta6);
          tmpMeta9 = MMC_CDR(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (!listEmpty(tmpMeta9)) goto tmp2_end;
          _old_cls = tmpMeta7;
          _new_cls = tmpMeta10;
          /* Pattern matching succeeded */
          omc_Conversion_parseConvertClassStr(threadData, _old_cls, _new_cls, _rules);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(omc_List_toString(threadData, _args, boxvar_Dump_printExpStr, _OMC_LIT39, _OMC_LIT29, _OMC_LIT16, _OMC_LIT30, 1 /* true */, ((modelica_integer) 0)), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta11, _info);
          goto goto_1;
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
  return _rules;
}

PROTECTED_FUNCTION_STATIC void omc_Conversion_printConversionRuleError(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_cons(omc_GlobalScriptDump_printIstmtStr(threadData, _stmt), MMC_REFSTRUCTLIT(mmc_nil));
  omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta1, omc_Conversion_statementInfo(threadData, _stmt));

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_statementInfo(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT41;
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
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_vectorizeArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _fnType, modelica_metatype _stmt)
{
  modelica_metatype _vargs = NULL;
  modelica_integer _vdim;
  modelica_integer _dim;
  modelica_metatype _fn_ty = NULL;
  modelica_integer _arg_ty;
  modelica_metatype _is_varg = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _expl = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vargs has no default value.
  _vdim = ((modelica_integer) -1);
  // _dim has no default value.
  _fn_ty = _fnType;
  // _arg_ty has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _is_varg = tmpMeta1;
  // _expl has no default value.
  if((listLength(_args) > listLength(_fnType)))
  {
    omc_Conversion_printConversionRuleError(threadData, _stmt);
  }

  {
    modelica_metatype _arg;
    for (tmpMeta2 = _args; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _arg = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _fn_ty;
      if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_CAR(tmpMeta3);
      tmpMeta5 = MMC_CDR(tmpMeta3);
      tmp6 = mmc_unbox_integer(tmpMeta4);
      _arg_ty = tmp6  /* pattern as ty=enumeration(SCALAR, ARRAY) */;
      _fn_ty = tmpMeta5;

      
      
      { /* match expression */
        modelica_metatype tmp10_1;modelica_integer tmp10_2;
        tmp10_1 = _arg;
        tmp10_2 = (modelica_integer)_arg_ty;
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          for (; tmp10 < 4; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,13,1) == 0) goto tmp9_end;
              if (1 != tmp10_2) goto tmp9_end;
              /* Pattern matching succeeded */
              _dim = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2))));

              if(((_vdim >= ((modelica_integer) 0)) && (_dim != _vdim)))
              {
                omc_Conversion_printConversionRuleError(threadData, _stmt);
              }
              tmpMeta12 = mmc_mk_cons(mmc_mk_boolean(1 /* true */), _is_varg);
              tmp7_c0 = _dim;
              tmpMeta[0+1] = tmpMeta12;
              goto tmp9_done;
            }
            case 1: {
              modelica_metatype tmpMeta13;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,13,1) == 0) goto tmp9_end;
              if (2 != tmp10_2) goto tmp9_end;
              /* Pattern matching succeeded */
              tmpMeta13 = mmc_mk_cons(mmc_mk_boolean(0 /* false */), _is_varg);
              tmp7_c0 = _vdim;
              tmpMeta[0+1] = tmpMeta13;
              goto tmp9_done;
            }
            case 2: {
              if (2 != tmp10_2) goto tmp9_end;
              
              /* Pattern matching succeeded */
              omc_Conversion_printConversionRuleError(threadData, _stmt);
              goto goto_8;
              goto tmp9_done;
            }
            case 3: {
              modelica_metatype tmpMeta14;
              
              /* Pattern matching succeeded */
              tmpMeta14 = mmc_mk_cons(mmc_mk_boolean(0 /* false */), _is_varg);
              tmp7_c0 = _vdim;
              tmpMeta[0+1] = tmpMeta14;
              goto tmp9_done;
            }
            }
            goto tmp9_end;
            tmp9_end: ;
          }
          goto goto_8;
          goto_8:;
          MMC_THROW_INTERNAL();
          goto tmp9_done;
          tmp9_done:;
        }
      }
      _vdim = tmp7_c0;
      _is_varg = tmpMeta[0+1];
    }
  }

  if((_vdim == ((modelica_integer) 0)))
  {
    tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
    _vargs = tmpMeta16;
  }
  else
  {
    if((_vdim == ((modelica_integer) -1)))
    {
      tmpMeta17 = mmc_mk_cons(_args, MMC_REFSTRUCTLIT(mmc_nil));
      _vargs = tmpMeta17;
    }
    else
    {
      tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
      _vargs = tmpMeta18;

      {
        modelica_metatype _arg;
        for (tmpMeta19 = listReverse(_args); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
        {
          _arg = MMC_CAR(tmpMeta19);
          if(mmc_unbox_boolean(listHead(_is_varg)))
          {
            /* Pattern-matching assignment */
            tmpMeta20 = _arg;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,13,1) == 0) MMC_THROW_INTERNAL();
            tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
            _expl = tmpMeta21;

            tmpMeta22 = mmc_mk_cons(_expl, _vargs);
            _vargs = tmpMeta22;
          }
          else
          {
            tmpMeta23 = mmc_mk_cons(omc_List_fill(threadData, _arg, _vdim), _vargs);
            _vargs = tmpMeta23;
          }

          _is_varg = listRest(_is_varg);
        }
      }

      _vargs = omc_List_transposeList(threadData, _vargs);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _vargs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_expandArg(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (4 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT43), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,0,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          if (0 != tmp15) goto tmp3_end;
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT42;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
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
  _outExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseRule(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  modelica_string _fn_name = NULL;
  modelica_metatype _args = NULL;
  modelica_fnptr _parse_fn;
  modelica_metatype _fn_type = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  // _fn_name has no default value.
  // _args has no default value.
  // _fn_type has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _stmt;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
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
          modelica_fnptr tmp11_c0 __attribute__((unused)) = 0;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,11,3) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,2) == 0) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (!listEmpty(tmpMeta10)) goto tmp2_end;
          
          _fn_name = tmpMeta7;
          _args = tmpMeta9;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_string tmp14_1;
            tmp14_1 = _fn_name;
            {
              volatile mmc_switch_type tmp14;
              int tmp15;
              tmp14 = 0;
              for (; tmp14 < 6; tmp14++) {
                switch (MMC_SWITCH_CAST(tmp14)) {
                case 0: {
                  if (12 != MMC_STRLEN(tmp14_1) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmp14_1)) != 0) goto tmp13_end;
                  /* Pattern matching succeeded */
                  tmp11_c0 = boxvar_Conversion_parseConvertClass;
                  tmpMeta[0+1] = _OMC_LIT45;
                  goto tmp13_done;
                }
                case 1: {
                  if (14 != MMC_STRLEN(tmp14_1) || strcmp(MMC_STRINGDATA(_OMC_LIT51), MMC_STRINGDATA(tmp14_1)) != 0) goto tmp13_end;
                  /* Pattern matching succeeded */
                  tmp11_c0 = boxvar_Conversion_parseConvertClassIf;
                  tmpMeta[0+1] = _OMC_LIT47;
                  goto tmp13_done;
                }
                case 2: {
                  if (14 != MMC_STRLEN(tmp14_1) || strcmp(MMC_STRINGDATA(_OMC_LIT37), MMC_STRINGDATA(tmp14_1)) != 0) goto tmp13_end;
                  /* Pattern matching succeeded */
                  tmp11_c0 = boxvar_Conversion_parseConvertElement;
                  tmpMeta[0+1] = _OMC_LIT46;
                  goto tmp13_done;
                }
                case 3: {
                  if (16 != MMC_STRLEN(tmp14_1) || strcmp(MMC_STRINGDATA(_OMC_LIT36), MMC_STRINGDATA(tmp14_1)) != 0) goto tmp13_end;
                  /* Pattern matching succeeded */
                  tmp11_c0 = boxvar_Conversion_parseConvertModifiers;
                  tmpMeta[0+1] = _OMC_LIT50;
                  goto tmp13_done;
                }
                case 4: {
                  if (14 != MMC_STRLEN(tmp14_1) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmp14_1)) != 0) goto tmp13_end;
                  /* Pattern matching succeeded */
                  tmp11_c0 = boxvar_Conversion_parseConvertMessage;
                  tmpMeta[0+1] = _OMC_LIT46;
                  goto tmp13_done;
                }
                case 5: {
                  
                  /* Pattern matching succeeded */
                  omc_Conversion_printConversionRuleError(threadData, _stmt);
                  goto goto_12;
                  goto tmp13_done;
                }
                }
                goto tmp13_end;
                tmp13_end: ;
              }
              goto goto_12;
              goto_12:;
              goto goto_1;
              goto tmp13_done;
              tmp13_done:;
            }
          }
          _parse_fn = tmp11_c0;
          _fn_type = tmpMeta[0+1];

          {
            modelica_metatype __omcQ_24tmpVar41;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar40;
            modelica_integer tmp19;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = _args;
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar41 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar41;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar40 = omc_Conversion_expandArg(threadData, _a);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar40,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar41;
          }
          _args = tmpMeta16;

          {
            modelica_metatype _a;
            for (tmpMeta20 = omc_Conversion_vectorizeArgs(threadData, _args, _fn_type, _stmt); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _a = MMC_CAR(tmpMeta20);
              _rules = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_parse_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_parse_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_parse_fn), 2))), _a, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _rules) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_parse_fn), 1)))) (threadData, _a, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3))), _rules);
            }
          }
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Conversion_printConversionRuleError(threadData, _stmt);
          goto goto_1;
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
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_parseRules(threadData_t *threadData, modelica_metatype _stmts, modelica_metatype __omcQ_24in_5Frules)
{
  modelica_metatype _rules = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _rules = __omcQ_24in_5Frules;
  {
    modelica_metatype _stmt;
    for (tmpMeta1 = _stmts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _stmt = MMC_CAR(tmpMeta1);
      _rules = omc_Conversion_parseRule(threadData, _stmt, _rules);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _rules;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_loadScript(threadData_t *threadData, modelica_string _scriptFile)
{
  modelica_metatype _stmts = NULL;
  modelica_string _script = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmts has no default value.
  // _script has no default value.
  _script = omc_System_readFile(threadData, _scriptFile);

  _script = omc_System_stringReplace(threadData, _script, _OMC_LIT52, _OMC_LIT53);

  /* Pattern-matching assignment */
  tmpMeta1 = omc_Parser_parsestringexp(threadData, _script, _scriptFile);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _stmts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _stmts;
}

DLLDirection
modelica_metatype omc_Conversion_convertPackage(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcls, modelica_string _scriptFile)
{
  modelica_metatype _cls = NULL;
  modelica_metatype _rules = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _cls = __omcQ_24in_5Fcls;
  // _rules has no default value.
  // _stmts has no default value.
  _stmts = omc_Conversion_loadScript(threadData, _scriptFile);

  _rules = omc_Conversion_ConversionRules_newNode(threadData);

  _rules = omc_Conversion_parseRules(threadData, _stmts, _rules);

  if(omc_Flags_isSet(threadData, _OMC_LIT56))
  {
    omc_Conversion_dumpRules(threadData, _rules, _OMC_LIT14);
  }

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cls = omc_Conversion_convertClass(threadData, _cls, _rules, omc_Conversion_newEnv(threadData), tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _cls;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _inKey, _inValue);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_Conversion_ImportTreeImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_Conversion_ImportTreeImpl_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_Conversion_ImportTreeImpl_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT57);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT57, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
                memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _value;
                _tree = tmpMeta14;
              }

              _outTree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_Conversion_ImportTreeImpl_balance(threadData, _outTree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_Conversion_ImportTreeImpl_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn)
{
  modelica_metatype _tree = NULL;
  modelica_integer _key_comp;
  modelica_metatype _new_tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key_comp has no default value.
  // _new_tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_Conversion_ImportTreeImpl_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_Conversion_ImportTreeImpl_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
              _tree = tmpMeta7;
            }
            else
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_Conversion_ImportTreeImpl_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT57);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT57, tmpMeta11);
              _new_tree = tmpMeta12;
            }
            else
            {
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta13;

              _new_tree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_Conversion_ImportTreeImpl_balance(threadData, _new_tree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_balance(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_integer _lh;
      modelica_integer _rh;
      modelica_integer _diff;
      modelica_metatype _balanced_tree = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lh has no default value.
      // _rh has no default value.
      // _diff has no default value.
      // _balanced_tree has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_Conversion_ImportTreeImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_Conversion_ImportTreeImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_Conversion_ImportTreeImpl_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_Conversion_ImportTreeImpl_rotateLeft(threadData, omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_Conversion_ImportTreeImpl_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_Conversion_ImportTreeImpl_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_Conversion_ImportTreeImpl_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_Conversion_ImportTreeImpl_rotateRight(threadData, omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outTree, omc_Conversion_ImportTreeImpl_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_Conversion_ImportTreeImpl_rotateRight(threadData, _outTree));
            }
            else
            {
              if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
                _outTree = tmpMeta6;

                _balanced_tree = _outTree;
              }
              else
              {
                _balanced_tree = _outTree;
              }
            }
          }
          tmpMeta1 = _balanced_tree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Conversion_ImportTreeImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBalance has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Conversion_ImportTreeImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_Conversion_ImportTreeImpl_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outBalance = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBalance;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_Conversion_ImportTreeImpl_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _outResult = omc_Conversion_ImportTreeImpl_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          _inStartValue = _outResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta7;
          _value = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outResult;
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
  _outResult = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_boolean _c;
      int tmp4;
      // _c has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5);
          _value = tmpMeta7;
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _c = tmp6  /* pattern as ty=Boolean */;

          if(_c)
          {
            _value = omc_Conversion_ImportTreeImpl_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_Conversion_ImportTreeImpl_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
          }
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL);
          _value = tmpMeta8;
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
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
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
  modelica_metatype _foldArg1 = NULL;
  modelica_metatype _foldArg2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg1 = __omcQ_24in_5FfoldArg1;
  _foldArg2 = __omcQ_24in_5FfoldArg2;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _foldArg1 = omc_Conversion_ImportTreeImpl_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_Conversion_ImportTreeImpl_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
  return _foldArg1;
}

DLLDirection
void omc_Conversion_ImportTreeImpl_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Conversion_ImportTreeImpl_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));

          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp2_done;
        }
        case 5: {
          
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
modelica_metatype omc_Conversion_ImportTreeImpl_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT57;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_Conversion_ImportTreeImpl_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _key, _k);
    tmp9_2 = _tree;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 4; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 1: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 2: {
          if (1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        case 3: {
          if (-1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _value = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _key;
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _key, _k);
    tmp8_2 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 1: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 2: {
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_boolean omc_Conversion_ImportTreeImpl_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
  modelica_boolean _comp;
  modelica_string _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_string tmp1 = 0;
  modelica_boolean tmp5 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = 0 /* false */;
  // _key has no default value.
  // _key_comp has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto _return;
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
  _key = tmp1;

  _key_comp = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _inKey, _key);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _key_comp;
    tmp8_2 = _inTree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 6));
          _tree = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
          
          _tree = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmp5;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_Conversion_ImportTreeImpl_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_Conversion_ImportTreeImpl_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_Conversion_ImportTreeImpl_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHeight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outHeight = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outHeight;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_Conversion_ImportTreeImpl_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_Conversion_ImportTreeImpl_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_Conversion_ImportTreeImpl_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
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
  _isEmpty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEmpty;
}
modelica_metatype boxptr_Conversion_ImportTreeImpl_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_Conversion_ImportTreeImpl_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _treeToJoin;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tree;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _tree = omc_Conversion_ImportTreeImpl_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_Conversion_ImportTreeImpl_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Conversion_ImportTreeImpl_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_integer omc_Conversion_ImportTreeImpl_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = stringCompare(_inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_Conversion_ImportTreeImpl_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_Conversion_ImportTreeImpl_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_Conversion_ImportTreeImpl_keyStr(threadData_t *threadData, modelica_string _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _inKey;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _key = NULL;
      int tmp4;
      // _key has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_Conversion_ImportTreeImpl_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_key, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_key, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_Conversion_ImportTreeImpl_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _value = NULL;
      int tmp4;
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _value = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_Conversion_ImportTreeImpl_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_value, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _value = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_value, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_Conversion_ImportTreeImpl_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_Conversion_ImportTreeImpl_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_Conversion_ImportTreeImpl_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_Conversion_ImportTreeImpl_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outTree;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT57;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_Conversion_ImportTreeImpl_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT29,omc_Conversion_ImportTreeImpl_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT16);
          tmpMeta8 = stringAppend(tmpMeta7,omc_Conversion_ImportTreeImpl_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT30);
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT29,omc_Conversion_ImportTreeImpl_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT16);
          tmpMeta12 = stringAppend(tmpMeta11,omc_Conversion_ImportTreeImpl_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT30);
          tmp1 = tmpMeta13;
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
modelica_string omc_Conversion_ImportTreeImpl_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT58;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_Conversion_ImportTreeImpl_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_Conversion_ImportTreeImpl_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT14),omc_Conversion_ImportTreeImpl_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT20);
          tmpMeta9 = stringAppend(tmpMeta8,omc_Conversion_ImportTreeImpl_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT14));
          tmp1 = tmpMeta9;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_Conversion_ImportTreeImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT59:_OMC_LIT60));
          tmpMeta6 = stringAppend(omc_Conversion_ImportTreeImpl_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT61:_OMC_LIT62));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT63);
          tmpMeta9 = stringAppend(tmpMeta8,omc_Conversion_ImportTreeImpl_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT20);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT60:_OMC_LIT59));
          tmpMeta12 = stringAppend(tmpMeta10,omc_Conversion_ImportTreeImpl_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT61:_OMC_LIT62));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT63);
          tmpMeta15 = stringAppend(tmpMeta14,omc_Conversion_ImportTreeImpl_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT20);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_Conversion_ImportTreeImpl_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = referenceEq(_t1, _t2);
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT57);
          tmpMeta1 = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _child, _node, _OMC_LIT57);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Conversion_ImportTreeImpl_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _outNode, _OMC_LIT57, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData, _child, _OMC_LIT57, _node);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orig;
    tmp4_2 = _left;
    tmp4_3 = _right;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(4, &Conversion_ImportTreeImpl_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _orig;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_Conversion_ImportTreeImpl_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_Conversion_ImportTreeImpl_height(threadData, _left)),(modelica_integer)(omc_Conversion_ImportTreeImpl_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &Conversion_ImportTreeImpl_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_Conversion_ImportTreeImpl_height(threadData, _left)),(modelica_integer)(omc_Conversion_ImportTreeImpl_height(threadData, _right)))), _left, _right);
          tmpMeta1 = tmpMeta10;
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_string omc_Conversion_ImportTreeImpl_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_string _key = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _key has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _key = tmp1;
  _return: OMC_LABEL_UNUSED
  return _key;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_Conversion_ImportTreeImpl_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

          tmpMeta8 = mmc_mk_box2(0, _key, _value);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
          _lst = tmpMeta7;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta9;
          _value = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, _key, _value);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_Conversion_ImportTreeImpl_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_Conversion_ImportTreeImpl_add(threadData, _tree, _key, _value, boxvar_Conversion_ImportTreeImpl_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_Conversion_ImportTreeImpl_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _OMC_LIT14;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_Conversion_ConversionRules_newNode(threadData_t *threadData)
{
  modelica_metatype _node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _node has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(3, &Conversion_ConversionRules_CONVERSION__RULES__desc, omc_UnorderedMap_new(threadData, boxvar_stringHashDjb2, boxvar_stringEq, ((modelica_integer) 1)), tmpMeta1);
  _node = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _node;
}

