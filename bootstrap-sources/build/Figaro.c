#include "omc_simulation_settings.h"
#include "Figaro.h"
#define _OMC_LIT0_data "OPEN: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,6,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "CLOSE: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,7,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,3,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,8) {&ErrorTypes_MessageType_SCRIPTING__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Figaro: %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,11,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,4) {&Gettext_TranslatableContent_notrans__desc,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(7011)),_OMC_LIT5,_OMC_LIT6,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "LABEL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,5,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "FATAL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,5,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,1) {_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "CRITICITY"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,9,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,5,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "ANSWER"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,6,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "ANSWERS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,7,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT10,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,1) {_OMC_LIT14,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,1) {_OMC_LIT15,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,1) {_OMC_LIT16,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,0,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "<"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data ">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "?"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,1,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,1,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "start "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,6,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data " -testxml "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,10,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "<REQUESTS>\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,13,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\n\n<LOAD_BDC_FI>\n    <FILE_FI>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,29,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "</FILE_FI>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,11,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "<FILE> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ".bdc</FILE>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,12,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data ".bdc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,4,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "</LOAD_BDC_FI>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,15,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "\n\n<LOAD_BDF_FI>\n    <FILE>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,26,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "</FILE>\n</LOAD_BDF_FI>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,23,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "<RUN_TREATMENT>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,16,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "    <TREATMENT>GENERATE_TREE</TREATMENT>\n    <FILE>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,51,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "/FaultTree.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,14,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "</FILE>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,8,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "    <FILE_MACRO>fiab_ADD.h</FILE_MACRO>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,39,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "\n    <FILE_TREE_OPTIONS>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,24,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "</FILE_TREE_OPTIONS>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,20,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "fault-tree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,10,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "    <TREATMENT>GENERATE_FIG0</TREATMENT>\n    <FILE>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,51,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "</FILE>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,7,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "figaro0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,7,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\n    <RESOLVE_CONST>VRAI</RESOLVE_CONST>\n    <RESOLVE_ATTR>FAUX</RESOLVE_ATTR>\n    <INST_RULE>VRAI</INST_RULE>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,111,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "</RUN_TREATMENT>\n</REQUESTS>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,28,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "OBJECT "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,7,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data " IS_A "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,6,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data ";"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,1,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,2,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "fullClassName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,13,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "codeInstanceFigaro"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,18,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Figaro_Object"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,13,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "Figaro_Object_connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,23,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "/FigaroObjects.fi"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,17,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "/Figaro0.fi"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,11,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "/figp_commands.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,18,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "/result.xml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,11,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "sleep 5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,7,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#include "util/modelica.h"

#include "Figaro_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_Figaro_printToken(threadData_t *threadData, modelica_metatype _inToken);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_printToken,2,0) {(void*) boxptr_Figaro_printToken,0}};
#define boxvar_Figaro_printToken MMC_REFSTRUCTLIT(boxvar_lit_Figaro_printToken)
PROTECTED_FUNCTION_STATIC void omc_Figaro_printTokenList(threadData_t *threadData, modelica_metatype _inTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_printTokenList,2,0) {(void*) boxptr_Figaro_printTokenList,0}};
#define boxvar_Figaro_printTokenList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_printTokenList)
PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroObjectList(threadData_t *threadData, modelica_metatype _inFigaroObjectList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_printFigaroObjectList,2,0) {(void*) boxptr_Figaro_printFigaroObjectList,0}};
#define boxvar_Figaro_printFigaroObjectList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_printFigaroObjectList)
PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroClass(threadData_t *threadData, modelica_metatype _inFigaroClass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_printFigaroClass,2,0) {(void*) boxptr_Figaro_printFigaroClass,0}};
#define boxvar_Figaro_printFigaroClass MMC_REFSTRUCTLIT(boxvar_lit_Figaro_printFigaroClass)
PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroClassList(threadData_t *threadData, modelica_metatype _inFigaroClassList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_printFigaroClassList,2,0) {(void*) boxptr_Figaro_printFigaroClassList,0}};
#define boxvar_Figaro_printFigaroClassList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_printFigaroClassList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_reportErrors(threadData_t *threadData, modelica_metatype _inStringList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_reportErrors(threadData_t *threadData, modelica_metatype _inStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_reportErrors,2,0) {(void*) boxptr_Figaro_reportErrors,0}};
#define boxvar_Figaro_reportErrors MMC_REFSTRUCTLIT(boxvar_lit_Figaro_reportErrors)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getMessage(threadData_t *threadData, modelica_metatype _inStringTupleList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_getMessage,2,0) {(void*) boxptr_Figaro_getMessage,0}};
#define boxvar_Figaro_getMessage MMC_REFSTRUCTLIT(boxvar_lit_Figaro_getMessage)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isToBeReported(threadData_t *threadData, modelica_metatype _inStringTupleList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isToBeReported(threadData_t *threadData, modelica_metatype _inStringTupleList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_isToBeReported,2,0) {(void*) boxptr_Figaro_isToBeReported,0}};
#define boxvar_Figaro_isToBeReported MMC_REFSTRUCTLIT(boxvar_lit_Figaro_isToBeReported)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_parseInfo(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseInfo,2,0) {(void*) boxptr_Figaro_parseInfo,0}};
#define boxvar_Figaro_parseInfo MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseInfoList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseInfoList,2,0) {(void*) boxptr_Figaro_parseInfoList,0}};
#define boxvar_Figaro_parseInfoList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseInfoList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseError(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseError,2,0) {(void*) boxptr_Figaro_parseError,0}};
#define boxvar_Figaro_parseError MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseErrorList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseErrorList,2,0) {(void*) boxptr_Figaro_parseErrorList,0}};
#define boxvar_Figaro_parseErrorList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseErrorList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswer(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseAnswer,2,0) {(void*) boxptr_Figaro_parseAnswer,0}};
#define boxvar_Figaro_parseAnswer MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseAnswer)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswerList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseAnswerList,2,0) {(void*) boxptr_Figaro_parseAnswerList,0}};
#define boxvar_Figaro_parseAnswerList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseAnswerList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswers(threadData_t *threadData, modelica_metatype _inTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parseAnswers,2,0) {(void*) boxptr_Figaro_parseAnswers,0}};
#define boxvar_Figaro_parseAnswers MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parseAnswers)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parse(threadData_t *threadData, modelica_metatype _inTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_parse,2,0) {(void*) boxptr_Figaro_parse,0}};
#define boxvar_Figaro_parse MMC_REFSTRUCTLIT(boxvar_lit_Figaro_parse)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isInfoTag(threadData_t *threadData, modelica_string _inTagName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isInfoTag(threadData_t *threadData, modelica_metatype _inTagName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_isInfoTag,2,0) {(void*) boxptr_Figaro_isInfoTag,0}};
#define boxvar_Figaro_isInfoTag MMC_REFSTRUCTLIT(boxvar_lit_Figaro_isInfoTag)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isKnownTag(threadData_t *threadData, modelica_string _inTagName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isKnownTag(threadData_t *threadData, modelica_metatype _inTagName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_isKnownTag,2,0) {(void*) boxptr_Figaro_isKnownTag,0}};
#define boxvar_Figaro_isKnownTag MMC_REFSTRUCTLIT(boxvar_lit_Figaro_isKnownTag)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeUnknown(threadData_t *threadData, modelica_metatype _inTokenList, modelica_string _inTagName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_removeUnknown,2,0) {(void*) boxptr_Figaro_removeUnknown,0}};
#define boxvar_Figaro_removeUnknown MMC_REFSTRUCTLIT(boxvar_lit_Figaro_removeUnknown)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeFirstIfText(threadData_t *threadData, modelica_metatype _inTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_removeFirstIfText,2,0) {(void*) boxptr_Figaro_removeFirstIfText,0}};
#define boxvar_Figaro_removeFirstIfText MMC_REFSTRUCTLIT(boxvar_lit_Figaro_removeFirstIfText)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeTokens(threadData_t *threadData, modelica_metatype _inTokenList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_removeTokens,2,0) {(void*) boxptr_Figaro_removeTokens,0}};
#define boxvar_Figaro_removeTokens MMC_REFSTRUCTLIT(boxvar_lit_Figaro_removeTokens)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanText(threadData_t *threadData, modelica_metatype _inStringList, modelica_string _inText, modelica_string *out_outText);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_scanText,2,0) {(void*) boxptr_Figaro_scanText,0}};
#define boxvar_Figaro_scanText MMC_REFSTRUCTLIT(boxvar_lit_Figaro_scanText)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanTagName(threadData_t *threadData, modelica_metatype _inStringList, modelica_string _inTagName, modelica_string *out_outTagName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_scanTagName,2,0) {(void*) boxptr_Figaro_scanTagName,0}};
#define boxvar_Figaro_scanTagName MMC_REFSTRUCTLIT(boxvar_lit_Figaro_scanTagName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanDeclaration(threadData_t *threadData, modelica_metatype _inStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_scanDeclaration,2,0) {(void*) boxptr_Figaro_scanDeclaration,0}};
#define boxvar_Figaro_scanDeclaration MMC_REFSTRUCTLIT(boxvar_lit_Figaro_scanDeclaration)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scan(threadData_t *threadData, modelica_metatype _inStringList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_scan,2,0) {(void*) boxptr_Figaro_scan,0}};
#define boxvar_Figaro_scan MMC_REFSTRUCTLIT(boxvar_lit_Figaro_scan)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_interpret(threadData_t *threadData, modelica_string _inString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_interpret,2,0) {(void*) boxptr_Figaro_interpret,0}};
#define boxvar_Figaro_interpret MMC_REFSTRUCTLIT(boxvar_lit_Figaro_interpret)
PROTECTED_FUNCTION_STATIC void omc_Figaro_callFigaroProcessor(threadData_t *threadData, modelica_string _inFigaroProcessorFile, modelica_string _inArgumentFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_callFigaroProcessor,2,0) {(void*) boxptr_Figaro_callFigaroProcessor,0}};
#define boxvar_Figaro_callFigaroProcessor MMC_REFSTRUCTLIT(boxvar_lit_Figaro_callFigaroProcessor)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_truncateExtension(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_truncateExtension,2,0) {(void*) boxptr_Figaro_truncateExtension,0}};
#define boxvar_Figaro_truncateExtension MMC_REFSTRUCTLIT(boxvar_lit_Figaro_truncateExtension)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_makeXml(threadData_t *threadData, modelica_string _workingDir, modelica_string _inDatabase, modelica_string _inBdfFile, modelica_string _inMode, modelica_string _inOptions, modelica_string _inFigaroFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_makeXml,2,0) {(void*) boxptr_Figaro_makeXml,0}};
#define boxvar_Figaro_makeXml MMC_REFSTRUCTLIT(boxvar_lit_Figaro_makeXml)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_figaroObjectToString(threadData_t *threadData, modelica_metatype _inFigaroObject);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_figaroObjectToString,2,0) {(void*) boxptr_Figaro_figaroObjectToString,0}};
#define boxvar_Figaro_figaroObjectToString MMC_REFSTRUCTLIT(boxvar_lit_Figaro_figaroObjectToString)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_figaroObjectListToString(threadData_t *threadData, modelica_metatype _inFigaroObjectList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_figaroObjectListToString,2,0) {(void*) boxptr_Figaro_figaroObjectListToString,0}};
#define boxvar_Figaro_figaroObjectListToString MMC_REFSTRUCTLIT(boxvar_lit_Figaro_figaroObjectListToString)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getLastIdent(threadData_t *threadData, modelica_metatype _inPath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_getLastIdent,2,0) {(void*) boxptr_Figaro_getLastIdent,0}};
#define boxvar_Figaro_getLastIdent MMC_REFSTRUCTLIT(boxvar_lit_Figaro_getLastIdent)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foExp(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foExp,2,0) {(void*) boxptr_Figaro_foExp,0}};
#define boxvar_Figaro_foExp MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foExp)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foMod2(threadData_t *threadData, modelica_metatype _inMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foMod2,2,0) {(void*) boxptr_Figaro_foMod2,0}};
#define boxvar_Figaro_foMod2 MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foMod2)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_string _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foSubMod,2,0) {(void*) boxptr_Figaro_foSubMod,0}};
#define boxvar_Figaro_foSubMod MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foSubMod)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foSubModList(threadData_t *threadData, modelica_metatype _inSubModList, modelica_string _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foSubModList,2,0) {(void*) boxptr_Figaro_foSubModList,0}};
#define boxvar_Figaro_foSubModList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foSubModList)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foMod1(threadData_t *threadData, modelica_metatype _inMod, modelica_string _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foMod1,2,0) {(void*) boxptr_Figaro_foMod1,0}};
#define boxvar_Figaro_foMod1 MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foMod1)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getFigaroTypeName(threadData_t *threadData, modelica_metatype _inClassPath, modelica_metatype _inFigaroClass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_getFigaroTypeName,2,0) {(void*) boxptr_Figaro_getFigaroTypeName,0}};
#define boxvar_Figaro_getFigaroTypeName MMC_REFSTRUCTLIT(boxvar_lit_Figaro_getFigaroTypeName)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_findFigaroTypeName(threadData_t *threadData, modelica_metatype _inClassPath, modelica_metatype _inFigaroClassList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_findFigaroTypeName,2,0) {(void*) boxptr_Figaro_findFigaroTypeName,0}};
#define boxvar_Figaro_findFigaroTypeName MMC_REFSTRUCTLIT(boxvar_lit_Figaro_findFigaroTypeName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foElementList(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inElementList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foElementList,2,0) {(void*) boxptr_Figaro_foElementList,0}};
#define boxvar_Figaro_foElementList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foElementList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foClassDef(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inClassDef);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foClassDef,2,0) {(void*) boxptr_Figaro_foClassDef,0}};
#define boxvar_Figaro_foClassDef MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foClassDef)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foElement(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inElement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_foElement,2,0) {(void*) boxptr_Figaro_foElement,0}};
#define boxvar_Figaro_foElement MMC_REFSTRUCTLIT(boxvar_lit_Figaro_foElement)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcExp(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcExp,2,0) {(void*) boxptr_Figaro_fcExp,0}};
#define boxvar_Figaro_fcExp MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcExp)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcMod2(threadData_t *threadData, modelica_metatype _inMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcMod2,2,0) {(void*) boxptr_Figaro_fcMod2,0}};
#define boxvar_Figaro_fcMod2 MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcMod2)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcSubMod(threadData_t *threadData, modelica_metatype _inSubMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcSubMod,2,0) {(void*) boxptr_Figaro_fcSubMod,0}};
#define boxvar_Figaro_fcSubMod MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcSubMod)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcSubModList(threadData_t *threadData, modelica_metatype _inSubModList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcSubModList,2,0) {(void*) boxptr_Figaro_fcSubModList,0}};
#define boxvar_Figaro_fcSubModList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcSubModList)
PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcMod1(threadData_t *threadData, modelica_metatype _inMod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcMod1,2,0) {(void*) boxptr_Figaro_fcMod1,0}};
#define boxvar_Figaro_fcMod1 MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcMod1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcElementList(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcElementList,2,0) {(void*) boxptr_Figaro_fcElementList,0}};
#define boxvar_Figaro_fcElementList MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcElementList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcClassDef(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_string _inClassName, modelica_metatype _inClassDef, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcClassDef,2,0) {(void*) boxptr_Figaro_fcClassDef,0}};
#define boxvar_Figaro_fcClassDef MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcClassDef)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcAddFigaroClass(threadData_t *threadData, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_string _inClassName, modelica_string _inTypeName, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcAddFigaroClass,2,0) {(void*) boxptr_Figaro_fcAddFigaroClass,0}};
#define boxvar_Figaro_fcAddFigaroClass MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcAddFigaroClass)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_fcElementListExt(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_fcElementListExt(threadData_t *threadData, modelica_metatype _inFigaroBase, modelica_metatype _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcElementListExt,2,0) {(void*) boxptr_Figaro_fcElementListExt,0}};
#define boxvar_Figaro_fcElementListExt MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcElementListExt)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_fcExtends(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_fcExtends(threadData_t *threadData, modelica_metatype _inFigaroBase, modelica_metatype _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcExtends,2,0) {(void*) boxptr_Figaro_fcExtends,0}};
#define boxvar_Figaro_fcExtends MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcExtends)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcElement(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Figaro_fcElement,2,0) {(void*) boxptr_Figaro_fcElement,0}};
#define boxvar_Figaro_fcElement MMC_REFSTRUCTLIT(boxvar_lit_Figaro_fcElement)

PROTECTED_FUNCTION_STATIC void omc_Figaro_printToken(threadData_t *threadData, modelica_metatype _inToken)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inToken;
    {
      modelica_string _s = NULL;
      int tmp3;
      // _s has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,1) == 0) goto tmp2_end;
          tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _s = tmpMeta4;
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT0,_s);
          fputs(MMC_STRINGDATA(tmpMeta5),stdout);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _s = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT1,_s);
          fputs(MMC_STRINGDATA(tmpMeta7),stdout);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,1) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _s = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT2,_s);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT2);
          fputs(MMC_STRINGDATA(tmpMeta10),stdout);
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

PROTECTED_FUNCTION_STATIC void omc_Figaro_printTokenList(threadData_t *threadData, modelica_metatype _inTokenList)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inTokenList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _first has no default value.
      // _rest has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          _first = tmpMeta5;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          omc_Figaro_printToken(threadData, _first);

          fputs(MMC_STRINGDATA(_OMC_LIT3),stdout);

          omc_Figaro_printTokenList(threadData, _rest);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          omc_Figaro_printTokenList(threadData, _rest);
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

PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroObjectList(threadData_t *threadData, modelica_metatype _inFigaroObjectList)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inFigaroObjectList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _first has no default value.
      // _rest has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          _first = tmpMeta5;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(omc_Figaro_figaroObjectToString(threadData, _first)),stdout);

          omc_Figaro_printFigaroObjectList(threadData, _rest);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          omc_Figaro_printFigaroObjectList(threadData, _rest);
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

PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroClass(threadData_t *threadData, modelica_metatype _inFigaroClass)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _inFigaroClass;
    {
      modelica_string _cn = NULL;
      modelica_string _tn = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _cn has no default value.
      // _tn has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          _cn = tmpMeta5;
          _tn = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_cn,_OMC_LIT4);
          tmpMeta8 = stringAppend(tmpMeta7,_tn);
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT3);
          fputs(MMC_STRINGDATA(tmpMeta9),stdout);
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

PROTECTED_FUNCTION_STATIC void omc_Figaro_printFigaroClassList(threadData_t *threadData, modelica_metatype _inFigaroClassList)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inFigaroClassList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _first has no default value.
      // _rest has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          _first = tmpMeta5;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          omc_Figaro_printFigaroClass(threadData, _first);

          omc_Figaro_printFigaroClassList(threadData, _rest);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_1);
          tmpMeta8 = MMC_CDR(tmp3_1);
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          omc_Figaro_printFigaroClassList(threadData, _rest);
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

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_reportErrors(threadData_t *threadData, modelica_metatype _inStringList)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inStringList;
    {
      modelica_string _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _first = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_first, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT9, tmpMeta8);

          omc_Figaro_reportErrors(threadData, _rest);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_reportErrors(threadData_t *threadData, modelica_metatype _inStringList)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Figaro_reportErrors(threadData, _inStringList);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getMessage(threadData_t *threadData, modelica_metatype _inStringTupleList)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringTupleList;
    {
      modelica_string _k = NULL;
      modelica_string _v = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _k has no default value.
      // _v has no default value.
      // _rest has no default value.
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
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _k = tmpMeta8;
          _v = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (stringEqual(_k, _OMC_LIT10));
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = _v;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_getMessage(threadData, _rest);
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isToBeReported(threadData_t *threadData, modelica_metatype _inStringTupleList)
{
  modelica_boolean _outBoolean;
  modelica_metatype _errorsToReport = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _errorsToReport = _OMC_LIT12;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringTupleList;
    {
      modelica_string _k = NULL;
      modelica_string _v = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _k has no default value.
      // _v has no default value.
      // _rest has no default value.
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
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _k = tmpMeta8;
          _v = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (stringEqual(_k, _OMC_LIT13));
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = listMember(_v, _errorsToReport);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_isToBeReported(threadData, _rest);
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isToBeReported(threadData_t *threadData, modelica_metatype _inStringTupleList)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Figaro_isToBeReported(threadData, _inStringTupleList);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_parseInfo(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_string _outString = NULL;
  modelica_metatype _outTokenList = NULL;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _outTokenList has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _s = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta7);
          tmpMeta10 = MMC_CDR(tmpMeta7);
          _s = tmpMeta8;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1_c0 = _s;
          tmpMeta[0+1] = _rest;
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
  _outString = tmp1_c0;
  _outTokenList = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseInfoList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_metatype _outStringTupleList = NULL;
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringTupleList has no default value.
  // _outTokenList has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _tn = NULL;
      modelica_string _s = NULL;
      modelica_metatype _stl = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _tl = NULL;
      modelica_metatype _tl2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      // _s has no default value.
      // _stl has no default value.
      // _rest has no default value.
      // _tl has no default value.
      // _tl2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _tn = tmpMeta8;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _s = omc_Figaro_parseInfo(threadData, _rest ,&_tl);

          _stl = omc_Figaro_parseInfoList(threadData, _tl ,&_tl2);
          tmpMeta10 = mmc_mk_box2(0, _tn, _s);
          tmpMeta9 = mmc_mk_cons(tmpMeta10, _stl);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _tl2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _tn = tmpMeta13;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = (stringEqual(_tn, _OMC_LIT14));
          if (1 /* true */ != tmp14) goto goto_2;
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta15;
          tmpMeta[0+1] = _rest;
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
  _outStringTupleList = tmpMeta[0+0];
  _outTokenList = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outStringTupleList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseError(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype _outTokenList = NULL;
  modelica_metatype _stl = NULL;
  modelica_metatype _tl = NULL;
  modelica_metatype _sl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outTokenList has no default value.
  // _stl has no default value.
  // _tl has no default value.
  // _sl has no default value.
  _stl = omc_Figaro_parseInfoList(threadData, _inTokenList ,&_tl);

  tmp3 = (modelica_boolean)omc_Figaro_isToBeReported(threadData, _stl);
  if(tmp3)
  {
    tmpMeta1 = mmc_mk_cons(omc_Figaro_getMessage(threadData, _stl), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = tmpMeta1;
  }
  else
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta4 = tmpMeta2;
  }
  _sl = tmpMeta4;

  /* Pattern-matching assignment */
  tmpMeta5 = mmc_mk_box2(0, _sl, _tl);
  tmpMeta6 = tmpMeta5;
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  _outStringList = tmpMeta7;
  _outTokenList = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseErrorList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outTokenList has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _tn = NULL;
      modelica_metatype _sl = NULL;
      modelica_metatype _sl2 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _tl = NULL;
      modelica_metatype _tl2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      // _sl has no default value.
      // _sl2 has no default value.
      // _rest has no default value.
      // _tl has no default value.
      // _tl2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _tn = tmpMeta8;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_tn, _OMC_LIT14));
          if (1 /* true */ != tmp9) goto goto_2;

          _sl = omc_Figaro_parseError(threadData, _rest ,&_tl);

          _sl2 = omc_Figaro_parseErrorList(threadData, _tl ,&_tl2);
          tmpMeta[0+0] = listAppend(_sl, _sl2);
          tmpMeta[0+1] = _tl2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _tn = tmpMeta12;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (stringEqual(_tn, _OMC_LIT15));
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = _rest;
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
  _outStringList = tmpMeta[0+0];
  _outTokenList = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswer(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype _outTokenList = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outTokenList has no default value.
  _outStringList = omc_Figaro_parseErrorList(threadData, _inTokenList ,&_outTokenList);
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswerList(threadData_t *threadData, modelica_metatype _inTokenList, modelica_metatype *out_outTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outTokenList has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _tn = NULL;
      modelica_metatype _sl = NULL;
      modelica_metatype _sl2 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _tl = NULL;
      modelica_metatype _tl2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      // _sl has no default value.
      // _sl2 has no default value.
      // _rest has no default value.
      // _tl has no default value.
      // _tl2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _tn = tmpMeta8;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_tn, _OMC_LIT15));
          if (1 /* true */ != tmp9) goto goto_2;

          _sl = omc_Figaro_parseAnswer(threadData, _rest ,&_tl);

          _sl2 = omc_Figaro_parseAnswerList(threadData, _tl ,&_tl2);
          tmpMeta[0+0] = listAppend(_sl, _sl2);
          tmpMeta[0+1] = _tl2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _tn = tmpMeta12;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (stringEqual(_tn, _OMC_LIT16));
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = _rest;
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
  _outStringList = tmpMeta[0+0];
  _outTokenList = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTokenList) { *out_outTokenList = _outTokenList; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parseAnswers(threadData_t *threadData, modelica_metatype _inTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype _sl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _sl has no default value.
  _sl = omc_Figaro_parseAnswerList(threadData, _inTokenList, NULL);

  _outStringList = _sl;
  _return: OMC_LABEL_UNUSED
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_parse(threadData_t *threadData, modelica_metatype _inTokenList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _tn = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _tn = tmpMeta9;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (stringEqual(_tn, _OMC_LIT16));
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = omc_Figaro_parseAnswers(threadData, _rest);
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
  _outStringList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isInfoTag(threadData_t *threadData, modelica_string _inTagName)
{
  modelica_boolean _outBoolean;
  modelica_metatype _itl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _itl = _OMC_LIT18;
  _outBoolean = listMember(_inTagName, _itl);
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isInfoTag(threadData_t *threadData, modelica_metatype _inTagName)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Figaro_isInfoTag(threadData, _inTagName);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_isKnownTag(threadData_t *threadData, modelica_string _inTagName)
{
  modelica_boolean _outBoolean;
  modelica_metatype _ktl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  _ktl = _OMC_LIT21;
  _outBoolean = listMember(_inTagName, _ktl);
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_isKnownTag(threadData_t *threadData, modelica_metatype _inTagName)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_Figaro_isKnownTag(threadData, _inTagName);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeUnknown(threadData_t *threadData, modelica_metatype _inTokenList, modelica_string _inTagName)
{
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTokenList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_string _tn = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _tn = tmpMeta9;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (stringEqual(_tn, _inTagName));
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = omc_Figaro_removeFirstIfText(threadData, _rest);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_removeUnknown(threadData, _rest, _inTagName);
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
  _outTokenList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTokenList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeFirstIfText(threadData_t *threadData, modelica_metatype _inTokenList)
{
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTokenList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,1) == 0) goto tmp3_end;
          
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _rest;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTokenList;
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
  _outTokenList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTokenList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_removeTokens(threadData_t *threadData, modelica_metatype _inTokenList)
{
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTokenList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inTokenList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _r = NULL;
      modelica_string _tn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      // _r has no default value.
      // _tn has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _tn = tmpMeta9;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = omc_Figaro_isKnownTag(threadData, _tn);
          if (1 /* true */ != tmp10) goto goto_2;

          /* Pattern-matching assignment */
          tmp11 = omc_Figaro_isInfoTag(threadData, _tn);
          if (0 /* false */ != tmp11) goto goto_2;

          _r = omc_Figaro_removeFirstIfText(threadData, _rest);
          tmpMeta13 = mmc_mk_box2(3, &Figaro_Token_OPENTAG__desc, _tn);
          tmpMeta12 = mmc_mk_cons(tmpMeta13, omc_Figaro_removeTokens(threadData, _r));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _tn = tmpMeta16;
          _rest = tmpMeta15;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp17 = omc_Figaro_isKnownTag(threadData, _tn);
          if (0 /* false */ != tmp17) goto goto_2;

          _r = omc_Figaro_removeUnknown(threadData, _rest, _tn);
          tmpMeta1 = omc_Figaro_removeTokens(threadData, _r);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _tn = tmpMeta20;
          _rest = tmpMeta19;
          /* Pattern matching succeeded */
          _r = omc_Figaro_removeFirstIfText(threadData, _rest);
          tmpMeta22 = mmc_mk_box2(4, &Figaro_Token_CLOSETAG__desc, _tn);
          tmpMeta21 = mmc_mk_cons(tmpMeta22, omc_Figaro_removeTokens(threadData, _r));
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta23 = MMC_CAR(tmp4_1);
          tmpMeta24 = MMC_CDR(tmp4_1);
          _first = tmpMeta23;
          _rest = tmpMeta24;
          /* Pattern matching succeeded */
          tmpMeta25 = mmc_mk_cons(_first, omc_Figaro_removeTokens(threadData, _rest));
          tmpMeta1 = tmpMeta25;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTokenList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTokenList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanText(threadData_t *threadData, modelica_metatype _inStringList, modelica_string _inText, modelica_string *out_outText)
{
  modelica_metatype _outStringList = NULL;
  modelica_string _outText = NULL;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outText has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringList;
    {
      modelica_string _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmp1_c1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (1 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inStringList;
          tmp1_c1 = _inText;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          _first = tmpMeta9;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_inText,_first);
          tmpMeta[0+0] = omc_Figaro_scanText(threadData, _rest, tmpMeta11, &tmp1_c1);
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
  _outStringList = tmpMeta[0+0];
  _outText = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outText) { *out_outText = _outText; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanTagName(threadData_t *threadData, modelica_metatype _inStringList, modelica_string _inTagName, modelica_string *out_outTagName)
{
  modelica_metatype _outStringList = NULL;
  modelica_string _outTagName = NULL;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  // _outTagName has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringList;
    {
      modelica_string _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
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
          if (1 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _rest;
          tmp1_c1 = _inTagName;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _first = tmpMeta8;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_inTagName,_first);
          tmpMeta[0+0] = omc_Figaro_scanTagName(threadData, _rest, tmpMeta10, &tmp1_c1);
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
  _outStringList = tmpMeta[0+0];
  _outTagName = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outTagName) { *out_outTagName = _outTagName; }
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scanDeclaration(threadData_t *threadData, modelica_metatype _inStringList)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringList;
    {
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
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
          if (1 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (1 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = _rest;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_scanDeclaration(threadData, _rest);
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
  _outStringList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_scan(threadData_t *threadData, modelica_metatype _inStringList)
{
  modelica_metatype _outTokenList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTokenList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inStringList;
    {
      modelica_metatype _rest = NULL;
      modelica_metatype _r = NULL;
      modelica_metatype _t = NULL;
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _rest has no default value.
      // _r has no default value.
      // _t has no default value.
      // _s has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (1 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (1 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          _rest = tmpMeta10;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _r = omc_Figaro_scanDeclaration(threadData, _rest);
          tmpMeta1 = omc_Figaro_scan(threadData, _r);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (1 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (1 != MMC_STRLEN(tmpMeta13) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta13)) != 0) goto tmp3_end;
          _rest = tmpMeta14;
          /* Pattern matching succeeded */
          _r = omc_Figaro_scanTagName(threadData, _rest, _OMC_LIT22 ,&_s);

          tmpMeta15 = mmc_mk_box2(4, &Figaro_Token_CLOSETAG__desc, _s);
          _t = tmpMeta15;
          tmpMeta16 = mmc_mk_cons(_t, omc_Figaro_scan(threadData, _r));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmp4_1);
          tmpMeta18 = MMC_CDR(tmp4_1);
          if (1 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          _rest = tmpMeta18;
          /* Pattern matching succeeded */
          _r = omc_Figaro_scanTagName(threadData, _rest, _OMC_LIT22 ,&_s);

          tmpMeta19 = mmc_mk_box2(3, &Figaro_Token_OPENTAG__desc, _s);
          _t = tmpMeta19;
          tmpMeta20 = mmc_mk_cons(_t, omc_Figaro_scan(threadData, _r));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          _rest = tmp4_1;
          /* Pattern matching succeeded */
          _r = omc_Figaro_scanText(threadData, _rest, _OMC_LIT22 ,&_s);

          tmpMeta21 = mmc_mk_box2(5, &Figaro_Token_TEXT__desc, _s);
          _t = tmpMeta21;
          tmpMeta22 = mmc_mk_cons(_t, omc_Figaro_scan(threadData, _r));
          tmpMeta1 = tmpMeta22;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outTokenList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTokenList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_interpret(threadData_t *threadData, modelica_string _inString)
{
  modelica_metatype _outStringList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStringList has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _inString;
    {
      modelica_string _s = NULL;
      modelica_metatype _sl = NULL;
      modelica_metatype _tl = NULL;
      modelica_metatype _tl2 = NULL;
      modelica_metatype _tl3 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
      // _sl has no default value.
      // _tl has no default value.
      // _tl2 has no default value.
      // _tl3 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          _s = tmp4_1;
          /* Pattern matching succeeded */
          _sl = stringListStringChar(_s);

          _tl = omc_Figaro_scan(threadData, _sl);

          _tl2 = omc_Figaro_removeFirstIfText(threadData, _tl);

          _tl3 = omc_Figaro_removeTokens(threadData, _tl2);
          tmpMeta1 = omc_Figaro_parse(threadData, _tl3);
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
  _outStringList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outStringList;
}

PROTECTED_FUNCTION_STATIC void omc_Figaro_callFigaroProcessor(threadData_t *threadData, modelica_string _inFigaroProcessorFile, modelica_string _inArgumentFile)
{
  modelica_string _command = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _command has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,_inFigaroProcessorFile);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  tmpMeta3 = stringAppend(tmpMeta2,_inArgumentFile);
  _command = tmpMeta3;

  omc_System_systemCall(threadData, _command, _OMC_LIT22);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_truncateExtension(threadData_t *threadData, modelica_metatype _name)
{
  modelica_string _newName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _name;
    {
      modelica_string _c = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (1 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _c = tmpMeta8;
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_c,omc_Figaro_truncateExtension(threadData, _rest));
          tmp1 = tmpMeta10;
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
  _newName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _newName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_makeXml(threadData_t *threadData, modelica_string _workingDir, modelica_string _inDatabase, modelica_string _inBdfFile, modelica_string _inMode, modelica_string _inOptions, modelica_string _inFigaroFile)
{
  modelica_string _outXml = NULL;
  modelica_string _xml = NULL;
  modelica_string _newName = NULL;
  modelica_metatype _sl = NULL;
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
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outXml has no default value.
  // _xml has no default value.
  // _newName has no default value.
  // _sl has no default value.
  _xml = _OMC_LIT30;

  tmpMeta1 = stringAppend(_xml,_OMC_LIT31);
  _xml = tmpMeta1;

  tmpMeta2 = stringAppend(_xml,_inDatabase);
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT32);
  _xml = tmpMeta3;

  _sl = stringListStringChar(_inDatabase);

  _newName = omc_Figaro_truncateExtension(threadData, _sl);

  tmpMeta4 = stringAppend(_newName,_OMC_LIT35);
  if(omc_System_regularFileExists(threadData, tmpMeta4))
  {
    tmpMeta5 = stringAppend(_xml,_OMC_LIT33);
    tmpMeta6 = stringAppend(tmpMeta5,_newName);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT34);
    _xml = tmpMeta7;
  }

  tmpMeta8 = stringAppend(_xml,_OMC_LIT36);
  _xml = tmpMeta8;

  tmpMeta9 = stringAppend(_xml,_OMC_LIT37);
  _xml = tmpMeta9;

  tmpMeta10 = stringAppend(_xml,_inBdfFile);
  _xml = tmpMeta10;

  tmpMeta11 = stringAppend(_xml,_OMC_LIT38);
  _xml = tmpMeta11;

  tmpMeta12 = stringAppend(_xml,_OMC_LIT39);
  _xml = tmpMeta12;

  if((stringEqual(_inMode, _OMC_LIT49)))
  {
    tmpMeta13 = stringAppend(_xml,_OMC_LIT47);
    _xml = tmpMeta13;

    tmpMeta14 = stringAppend(_xml,_inFigaroFile);
    _xml = tmpMeta14;

    tmpMeta15 = stringAppend(_xml,_OMC_LIT48);
    _xml = tmpMeta15;
  }
  else
  {
    if((stringEqual(_inMode, _OMC_LIT46)))
    {
      tmpMeta16 = stringAppend(_xml,_OMC_LIT40);
      _xml = tmpMeta16;

      tmpMeta17 = stringAppend(_xml,_workingDir);
      tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT41);
      _xml = tmpMeta18;

      tmpMeta19 = stringAppend(_xml,_OMC_LIT42);
      _xml = tmpMeta19;

      tmpMeta20 = stringAppend(_xml,_OMC_LIT43);
      _xml = tmpMeta20;

      tmpMeta21 = stringAppend(_xml,_OMC_LIT44);
      tmpMeta22 = stringAppend(tmpMeta21,_inOptions);
      tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT45);
      _xml = tmpMeta23;
    }
  }

  tmpMeta24 = stringAppend(_xml,_OMC_LIT50);
  _xml = tmpMeta24;

  tmpMeta25 = stringAppend(_xml,_OMC_LIT51);
  _xml = tmpMeta25;

  _outXml = _xml;
  _return: OMC_LABEL_UNUSED
  return _outXml;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_figaroObjectToString(threadData_t *threadData, modelica_metatype _inFigaroObject)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFigaroObject;
    {
      modelica_string _on = NULL;
      modelica_string _tn = NULL;
      modelica_string _fc = NULL;
      modelica_string _middle = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _on has no default value.
      // _tn has no default value.
      // _fc has no default value.
      // _middle has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_string tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _on = tmpMeta6;
          _tn = tmpMeta7;
          _fc = tmpMeta8;
          /* Pattern matching succeeded */
          tmp10 = (modelica_boolean)(stringEqual(_fc, _OMC_LIT22));
          if(tmp10)
          {
            tmp11 = _OMC_LIT22;
          }
          else
          {
            tmpMeta9 = stringAppend(_OMC_LIT3,_fc);
            tmp11 = tmpMeta9;
          }
          _middle = tmp11;
          tmpMeta12 = stringAppend(_OMC_LIT52,_on);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT53);
          tmpMeta14 = stringAppend(tmpMeta13,_tn);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT54);
          tmpMeta16 = stringAppend(tmpMeta15,_middle);
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT55);
          tmp1 = tmpMeta17;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_figaroObjectListToString(threadData_t *threadData, modelica_metatype _inFigaroObjectList)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inFigaroObjectList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      modelica_string _rf = NULL;
      modelica_string _rr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      // _rf has no default value.
      // _rr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _first = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _rf = omc_Figaro_figaroObjectToString(threadData, _first);

          _rr = omc_Figaro_figaroObjectListToString(threadData, _rest);
          tmpMeta8 = stringAppend(_rf,_rr);
          tmp1 = tmpMeta8;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getLastIdent(threadData_t *threadData, modelica_metatype _inPath)
{
  modelica_string _outIdent = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIdent has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inPath;
    {
      modelica_metatype _p = NULL;
      modelica_string _n = NULL;
      int tmp4;
      // _p has no default value.
      // _n has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _p = tmpMeta5;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inPath = _p;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _n = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _n;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _p = tmpMeta7;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inPath = _p;
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
  _outIdent = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIdent;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_string _outCode = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_string _c = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _c has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _c = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _c;
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
  _outCode = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foMod2(threadData_t *threadData, modelica_metatype _inMod)
{
  modelica_string _outCode = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMod;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_foExp(threadData, _e);
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
  _outCode = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foSubMod(threadData_t *threadData, modelica_metatype _inSubMod, modelica_string _name)
{
  modelica_string _outCode = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSubMod;
    {
      modelica_string _n = NULL;
      modelica_metatype _m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _m has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _n = tmpMeta6;
          _m = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_n, _name));
          if (1 /* true */ != tmp8) goto goto_2;
          tmp1 = omc_Figaro_foMod2(threadData, _m);
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
  _outCode = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foSubModList(threadData_t *threadData, modelica_metatype _inSubModList, modelica_string _name)
{
  modelica_string _outCode = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSubModList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _first = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_foSubMod(threadData, _first, _name);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_foSubModList(threadData, _rest, _name);
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
  _outCode = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_foMod1(threadData_t *threadData, modelica_metatype _inMod, modelica_string _name)
{
  modelica_string _outCode = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMod;
    {
      modelica_metatype _sml = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sml has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _sml = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_foSubModList(threadData, _sml, _name);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
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
  _outCode = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_getFigaroTypeName(threadData_t *threadData, modelica_metatype _inClassPath, modelica_metatype _inFigaroClass)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inClassPath;
    tmp4_2 = _inFigaroClass;
    {
      modelica_metatype _p = NULL;
      modelica_string _cn = NULL;
      modelica_string _tn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _p has no default value.
      // _cn has no default value.
      // _tn has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _p = tmp4_1;
          _cn = tmpMeta6;
          _tn = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(omc_Figaro_getLastIdent(threadData, _p), _cn));
          if (1 /* true */ != tmp8) goto goto_2;
          tmp1 = _tn;
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_findFigaroTypeName(threadData_t *threadData, modelica_metatype _inClassPath, modelica_metatype _inFigaroClassList)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inClassPath;
    tmp4_2 = _inFigaroClassList;
    {
      modelica_metatype _p = NULL;
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _p has no default value.
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          
          _first = tmpMeta6;
          _p = tmp4_1;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_getFigaroTypeName(threadData, _p, _first);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          
          _rest = tmpMeta9;
          _p = tmp4_1;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_findFigaroTypeName(threadData, _p, _rest);
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foElementList(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inElementList)
{
  modelica_metatype _outFigaroObjectList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroObjectList has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inFigaroClassList;
    tmp4_2 = _inElementList;
    {
      modelica_metatype _fcl = NULL;
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _rf = NULL;
      modelica_metatype _rr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fcl has no default value.
      // _first has no default value.
      // _rest has no default value.
      // _rf has no default value.
      // _rr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_2);
          tmpMeta8 = MMC_CDR(tmp4_2);
          
          _first = tmpMeta7;
          _rest = tmpMeta8;
          _fcl = tmp4_1;
          /* Pattern matching succeeded */
          _rf = omc_Figaro_foElement(threadData, _fcl, _first);

          _rr = omc_Figaro_foElementList(threadData, _fcl, _rest);
          tmpMeta1 = listAppend(_rf, _rr);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          
          _rest = tmpMeta10;
          _fcl = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_foElementList(threadData, _fcl, _rest);
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
  _outFigaroObjectList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroObjectList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foClassDef(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inClassDef)
{
  modelica_metatype _outFigaroObjectList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroObjectList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inFigaroClassList;
    tmp4_2 = _inClassDef;
    {
      modelica_metatype _fcl = NULL;
      modelica_metatype _el = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fcl has no default value.
      // _el has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _el = tmpMeta6;
          _fcl = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_foElementList(threadData, _fcl, _el);
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
  _outFigaroObjectList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroObjectList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_foElement(threadData_t *threadData, modelica_metatype _inFigaroClassList, modelica_metatype _inElement)
{
  modelica_metatype _outFigaroObjectList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroObjectList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inFigaroClassList;
    tmp4_2 = _inElement;
    {
      modelica_metatype _fcl = NULL;
      modelica_string _n = NULL;
      modelica_metatype _cd = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _m = NULL;
      modelica_string _tn = NULL;
      modelica_string _c = NULL;
      modelica_string _tmp = NULL;
      modelica_metatype _fo = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fcl has no default value.
      // _n has no default value.
      // _cd has no default value.
      // _p has no default value.
      // _ts has no default value.
      // _m has no default value.
      // _tn has no default value.
      // _c has no default value.
      // _tmp has no default value.
      // _fo has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          
          _cd = tmpMeta6;
          _fcl = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_foClassDef(threadData, _fcl, _cd);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,8) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          
          _n = tmpMeta7;
          _ts = tmpMeta8;
          _m = tmpMeta9;
          _fcl = tmp4_1;
          /* Pattern matching succeeded */
          _p = omc_AbsynUtil_typeSpecPath(threadData, _ts);

          _tmp = omc_Figaro_foMod1(threadData, _m, _OMC_LIT56);

          _tn = ((stringEqual(_tmp, _OMC_LIT22))?omc_Figaro_findFigaroTypeName(threadData, _p, _fcl):_tmp);

          _c = omc_Figaro_foMod1(threadData, _m, _OMC_LIT57);

          tmpMeta10 = mmc_mk_box4(3, &Figaro_FigaroObject_FIGAROOBJECT__desc, _n, _tn, _c);
          _fo = tmpMeta10;
          tmpMeta11 = mmc_mk_cons(_fo, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta11;
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
  _outFigaroObjectList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroObjectList;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_string _tn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tn has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tn = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = _tn;
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcMod2(threadData_t *threadData, modelica_metatype _inMod)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMod;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_fcExp(threadData, _e);
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcSubMod(threadData_t *threadData, modelica_metatype _inSubMod)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSubMod;
    {
      modelica_string _n = NULL;
      modelica_metatype _m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _m has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _n = tmpMeta6;
          _m = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (stringEqual(_n, _OMC_LIT56));
          if (1 /* true */ != tmp8) goto goto_2;
          tmp1 = omc_Figaro_fcMod2(threadData, _m);
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcSubModList(threadData_t *threadData, modelica_metatype _inSubModList)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSubModList;
    {
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _first = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_fcSubMod(threadData, _first);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          _rest = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_fcSubModList(threadData, _rest);
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Figaro_fcMod1(threadData_t *threadData, modelica_metatype _inMod)
{
  modelica_string _outTypeName = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTypeName has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inMod;
    {
      modelica_metatype _sml = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sml has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _sml = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_fcSubModList(threadData, _sml);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
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
  _outTypeName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outTypeName;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcElementList(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env)
{
  modelica_metatype _outFigaroClassList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroClassList has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_string tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inFigaroBase;
    tmp4_2 = _inFigaroType;
    tmp4_3 = _inProgram;
    tmp4_4 = _inClassName;
    tmp4_5 = _inElementList;
    tmp4_6 = _env;
    {
      modelica_string _fb = NULL;
      modelica_string _ft = NULL;
      modelica_metatype _program = NULL;
      modelica_metatype _cn = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _rf = NULL;
      modelica_metatype _rr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fb has no default value.
      // _ft has no default value.
      // _program has no default value.
      // _cn has no default value.
      // _e has no default value.
      // _first has no default value.
      // _rest has no default value.
      // _rf has no default value.
      // _rr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_5)) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_5)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_5);
          tmpMeta8 = MMC_CDR(tmp4_5);
          
          _first = tmpMeta7;
          _rest = tmpMeta8;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          _rf = omc_Figaro_fcElement(threadData, _fb, _ft, _program, _cn, _first, _e);

          _rr = omc_Figaro_fcElementList(threadData, _fb, _ft, _program, _cn, _rest, _e);
          tmpMeta1 = listAppend(_rf, _rr);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_5)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_5);
          tmpMeta10 = MMC_CDR(tmp4_5);
          
          _rest = tmpMeta10;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_fcElementList(threadData, _fb, _ft, _program, _cn, _rest, _e);
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
  _outFigaroClassList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroClassList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcClassDef(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_string _inClassName, modelica_metatype _inClassDef, modelica_metatype _env)
{
  modelica_metatype _outFigaroClassList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroClassList has no default value.
  { /* match expression */
    modelica_string tmp4_1;modelica_string tmp4_2;modelica_metatype tmp4_3;modelica_string tmp4_4;modelica_metatype tmp4_5;modelica_metatype tmp4_6;
    tmp4_1 = _inFigaroBase;
    tmp4_2 = _inFigaroType;
    tmp4_3 = _inProgram;
    tmp4_4 = _inClassName;
    tmp4_5 = _inClassDef;
    tmp4_6 = _env;
    {
      modelica_string _fb = NULL;
      modelica_string _ft = NULL;
      modelica_metatype _program = NULL;
      modelica_string _cn = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _el = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _p = NULL;
      modelica_string _tn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fb has no default value.
      // _ft has no default value.
      // _program has no default value.
      // _cn has no default value.
      // _e has no default value.
      // _el has no default value.
      // _ts has no default value.
      // _m has no default value.
      // _p has no default value.
      // _tn has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,0,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _el = tmpMeta6;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_fcElementList(threadData, _fb, _ft, _program, mmc_mk_some(_cn), _el, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,2,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 3));
          
          _ts = tmpMeta7;
          _m = tmpMeta8;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          _p = omc_AbsynUtil_typeSpecPath(threadData, _ts);

          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_fb, omc_Figaro_getLastIdent(threadData, _p)));
          if (1 /* true */ != tmp9) goto goto_2;

          _tn = omc_Figaro_fcMod1(threadData, _m);
          tmpMeta1 = omc_Figaro_fcAddFigaroClass(threadData, _ft, _program, _cn, _tn, _e);
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
  _outFigaroClassList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroClassList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcAddFigaroClass(threadData_t *threadData, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_string _inClassName, modelica_string _inTypeName, modelica_metatype _env)
{
  modelica_metatype _outFigaroClassList = NULL;
  modelica_string _tn = NULL;
  modelica_metatype _fc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroClassList has no default value.
  // _tn has no default value.
  // _fc has no default value.
  _tn = ((stringEqual(_inTypeName, _OMC_LIT22))?_inFigaroType:_inTypeName);

  tmpMeta1 = mmc_mk_box3(3, &Figaro_FigaroClass_FIGAROCLASS__desc, _inClassName, _tn);
  _fc = tmpMeta1;

  tmpMeta2 = mmc_mk_cons(_fc, omc_Figaro_fcElement(threadData, _inClassName, _tn, _inProgram, mmc_mk_none(), _inProgram, _env));
  _outFigaroClassList = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outFigaroClassList;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_fcElementListExt(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_string tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inFigaroBase;
    tmp4_2 = _inFigaroType;
    tmp4_3 = _inProgram;
    tmp4_4 = _inClassName;
    tmp4_5 = _inElementList;
    tmp4_6 = _env;
    {
      modelica_string _fb = NULL;
      modelica_string _ft = NULL;
      modelica_metatype _program = NULL;
      modelica_metatype _cn = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _first = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fb has no default value.
      // _ft has no default value.
      // _program has no default value.
      // _cn has no default value.
      // _e has no default value.
      // _first has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_5)) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          if (listEmpty(tmp4_5)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_5);
          tmpMeta7 = MMC_CDR(tmp4_5);
          
          _first = tmpMeta6;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = omc_Figaro_fcExtends(threadData, _fb, _ft, _program, _cn, _first, _e);
          if (1 /* true */ != tmp8) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_5)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_5);
          tmpMeta10 = MMC_CDR(tmp4_5);
          
          _rest = tmpMeta10;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _cn = tmp4_4;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          tmp1 = omc_Figaro_fcElementListExt(threadData, _fb, _ft, _program, _cn, _rest, _e);
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_fcElementListExt(threadData_t *threadData, modelica_metatype _inFigaroBase, modelica_metatype _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElementList, modelica_metatype _env)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_Figaro_fcElementListExt(threadData, _inFigaroBase, _inFigaroType, _inProgram, _inClassName, _inElementList, _env);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Figaro_fcExtends(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env)
{
  modelica_boolean _doExtend;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _doExtend has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_string tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inFigaroBase;
    tmp4_2 = _inFigaroType;
    tmp4_3 = _inProgram;
    tmp4_4 = _inClassName;
    tmp4_5 = _inElement;
    tmp4_6 = _env;
    {
      modelica_string _fb = NULL;
      modelica_string _ft = NULL;
      modelica_metatype _program = NULL;
      modelica_metatype _cdef = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _el = NULL;
      modelica_string _cn = NULL;
      modelica_metatype _bcp = NULL;
      modelica_string _n = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fb has no default value.
      // _ft has no default value.
      // _program has no default value.
      // _cdef has no default value.
      // _e has no default value.
      // _el has no default value.
      // _cn has no default value.
      // _bcp has no default value.
      // _n has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,8) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _n = tmpMeta6;
          _el = tmpMeta8;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _e = tmp4_6;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Figaro_fcElementListExt(threadData, _fb, _ft, _program, mmc_mk_some(_n), _el, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          if (optionNone(tmp4_4)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,5) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _bcp = tmpMeta10;
          _fb = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = (stringEqual(_fb, omc_Figaro_getLastIdent(threadData, _bcp)));
          if (1 /* true */ != tmp11) goto goto_2;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (optionNone(tmp4_4)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,5) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _cn = tmpMeta12;
          _bcp = tmpMeta13;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          _cdef = omc_FBuiltin_getElementWithPathCheckBuiltin(threadData, _e, _bcp);
          tmp1 = omc_Figaro_fcExtends(threadData, _fb, _ft, _program, mmc_mk_some(_cn), _cdef, _e);
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
  _doExtend = tmp1;
  _return: OMC_LABEL_UNUSED
  return _doExtend;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Figaro_fcExtends(threadData_t *threadData, modelica_metatype _inFigaroBase, modelica_metatype _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env)
{
  modelica_boolean _doExtend;
  modelica_metatype out_doExtend;
  _doExtend = omc_Figaro_fcExtends(threadData, _inFigaroBase, _inFigaroType, _inProgram, _inClassName, _inElement, _env);
  out_doExtend = mmc_mk_icon(_doExtend);
  return out_doExtend;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Figaro_fcElement(threadData_t *threadData, modelica_string _inFigaroBase, modelica_string _inFigaroType, modelica_metatype _inProgram, modelica_metatype _inClassName, modelica_metatype _inElement, modelica_metatype _env)
{
  modelica_metatype _outFigaroClassList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outFigaroClassList has no default value.
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;volatile modelica_string tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;volatile modelica_metatype tmp4_6;
    tmp4_1 = _inFigaroBase;
    tmp4_2 = _inFigaroType;
    tmp4_3 = _inProgram;
    tmp4_4 = _inClassName;
    tmp4_5 = _inElement;
    tmp4_6 = _env;
    {
      modelica_string _fb = NULL;
      modelica_string _ft = NULL;
      modelica_metatype _program = NULL;
      modelica_metatype _cdef = NULL;
      modelica_metatype _e = NULL;
      modelica_string _cn = NULL;
      modelica_metatype _bcp = NULL;
      modelica_metatype _m = NULL;
      modelica_string _tn = NULL;
      modelica_string _n = NULL;
      modelica_metatype _cd = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fb has no default value.
      // _ft has no default value.
      // _program has no default value.
      // _cdef has no default value.
      // _e has no default value.
      // _cn has no default value.
      // _bcp has no default value.
      // _m has no default value.
      // _tn has no default value.
      // _n has no default value.
      // _cd has no default value.
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
          if (optionNone(tmp4_4)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
          
          _cn = tmpMeta6;
          _bcp = tmpMeta7;
          _m = tmpMeta8;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (stringEqual(_fb, omc_Figaro_getLastIdent(threadData, _bcp)));
          if (1 /* true */ != tmp9) goto goto_2;

          _tn = omc_Figaro_fcMod1(threadData, _m);
          tmpMeta1 = omc_Figaro_fcAddFigaroClass(threadData, _ft, _program, _cn, _tn, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          if (optionNone(tmp4_4)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,1,5) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 4));
          
          _cn = tmpMeta10;
          _bcp = tmpMeta11;
          _m = tmpMeta12;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _e = tmp4_6;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cdef = omc_FBuiltin_getElementWithPathCheckBuiltin(threadData, _e, _bcp);

          /* Pattern-matching assignment */
          tmp13 = omc_Figaro_fcExtends(threadData, _fb, _ft, _program, mmc_mk_some(_cn), _cdef, _e);
          if (1 /* true */ != tmp13) goto goto_2;

          _tn = omc_Figaro_fcMod1(threadData, _m);
          tmpMeta1 = omc_Figaro_fcAddFigaroClass(threadData, _ft, _program, _cn, _tn, _e);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,2,8) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 7));
          
          _n = tmpMeta14;
          _cd = tmpMeta15;
          _fb = tmp4_1;
          _ft = tmp4_2;
          _program = tmp4_3;
          _e = tmp4_6;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_Figaro_fcClassDef(threadData, _fb, _ft, _program, _n, _cd, _e);
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
  _outFigaroClassList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outFigaroClassList;
}

DLLDirection
modelica_string omc_Figaro_makeFigaro(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inModel, modelica_metatype _env)
{
  modelica_string _outCode = NULL;
  modelica_metatype _fcl = NULL;
  modelica_metatype _fol = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCode has no default value.
  // _fcl has no default value.
  // _fol has no default value.
  _fcl = listAppend(omc_Figaro_fcElementList(threadData, _OMC_LIT58, _OMC_LIT22, _inModel, mmc_mk_none(), _inProgram, _env), omc_Figaro_fcElementList(threadData, _OMC_LIT59, _OMC_LIT22, _inModel, mmc_mk_none(), _inProgram, _env));

  omc_Figaro_printFigaroClassList(threadData, _fcl);

  fputs(MMC_STRINGDATA(_OMC_LIT55),stdout);

  _fol = omc_Figaro_foElement(threadData, _fcl, _inModel);

  omc_Figaro_printFigaroObjectList(threadData, _fol);

  _outCode = omc_Figaro_figaroObjectListToString(threadData, _fol);
  _return: OMC_LABEL_UNUSED
  return _outCode;
}

DLLDirection
void omc_Figaro_run(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _inPath, modelica_string _workingDir, modelica_string _inDatabaseFile, modelica_string _inMode, modelica_string _inOptions, modelica_string _inFigaroProcessorFile)
{
  modelica_string _bdfFile = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _figaroFile = NULL;
  modelica_metatype tmpMeta2;
  modelica_string _argumentFile = NULL;
  modelica_metatype tmpMeta3;
  modelica_string _resultFile = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _program = NULL;
  modelica_string _figaro = NULL;
  modelica_string _database = NULL;
  modelica_string _xml = NULL;
  modelica_string _xml2 = NULL;
  modelica_metatype _sl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_workingDir,_OMC_LIT60);
  _bdfFile = tmpMeta1;
  tmpMeta2 = stringAppend(_workingDir,_OMC_LIT61);
  _figaroFile = tmpMeta2;
  tmpMeta3 = stringAppend(_workingDir,_OMC_LIT62);
  _argumentFile = tmpMeta3;
  tmpMeta4 = stringAppend(omc_System_pwd(threadData),_OMC_LIT63);
  _resultFile = tmpMeta4;
  // _program has no default value.
  // _figaro has no default value.
  // _database has no default value.
  // _xml has no default value.
  // _xml2 has no default value.
  // _sl has no default value.
  _program = omc_FBuiltin_getElementWithPathCheckBuiltin(threadData, _inProgram, _inPath);

  _figaro = omc_Figaro_makeFigaro(threadData, _inProgram, _program, _inProgram);

  if((stringEqual(_figaro, _OMC_LIT22)))
  {
    MMC_THROW_INTERNAL();
  }

  omc_System_writeFile(threadData, _bdfFile, _figaro);

  _database = _inDatabaseFile;

  _xml = omc_Figaro_makeXml(threadData, _workingDir, _database, _bdfFile, _inMode, _inOptions, _figaroFile);

  omc_System_writeFile(threadData, _argumentFile, _xml);

  omc_Figaro_callFigaroProcessor(threadData, _inFigaroProcessorFile, _argumentFile);

  omc_System_systemCall(threadData, _OMC_LIT64, _OMC_LIT22);

  _xml2 = omc_System_readFile(threadData, _resultFile);

  _sl = omc_Figaro_interpret(threadData, _xml2);

  if(omc_Figaro_reportErrors(threadData, _sl))
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

