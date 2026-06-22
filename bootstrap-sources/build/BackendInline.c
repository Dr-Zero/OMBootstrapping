#include "omc_simulation_settings.h"
#include "BackendInline.h"
#define _OMC_LIT0_data "BackendInline.replaceArgs failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,32,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,9,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,41,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "\ncreate EqnSys from function: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,30,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "dumpBackendInlineVerbose"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,24,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Dumps debug output while inline function."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,41,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(152)),_OMC_LIT5,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,4) {&BackendDAE_TearingSelect_AVOID__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,1) {_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,0,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT12,0.0);
#define _OMC_LIT12 MMC_REFREALLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT16,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "newBackendInline.createEqnSysfromFunction failed for function "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,62,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "with different sizes\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,21,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data " <> "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,4,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "\noriginal function body of: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,28,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "\nDump replacements: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,20,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\n replaced protected and output for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,37,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\nreplaced input arguments for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,31,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "BackendInline.createReplacementVariables failed with array handling "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,68,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,1,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,1,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Inline Function "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,16,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data " type: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,7,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "in : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,5,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "out: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,5,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "inlineMethod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,12,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "replace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,7,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,0) {_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "append"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,6,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,0) {_OMC_LIT37,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,1) {_OMC_LIT38,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT36,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT37,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,1) {_OMC_LIT35,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,1,1) {_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Sets the inline method to use.\nreplace : This method inlines by replacing in place all expressions. Might lead to very long expression.\nappend  : This method inlines by adding additional variables to the whole system. Might lead to much bigger system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,251,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT34,_OMC_LIT41,_OMC_LIT45,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\nBackendInline fallback replace implementation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,48,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\ninExp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,8,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\noutExp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,9,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Equation before inline: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,24,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Tmp DAE after Inline Eqn: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,26,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "BackendInline.inlineEquationArrayAppend failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,47,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\n############ BackendInline Method: append ############"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,55,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\n############ BackendInline Method: replace ############"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,56,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "dumpBackendInline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,17,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(151)),_OMC_LIT56,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Result DAE after Inline."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,24,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "BackendInline.inlineCallsBDAE failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,36,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "Inline.inlineEventInfo failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,30,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "Inline.inlineVariables failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,30,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Inline.inlineEquationArray failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,34,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "BackendInline.inlineCalls failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,32,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,1) {_OMC_LIT64,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,1,8) {&DAE_InlineType_AFTER__INDEX__RED__INLINE__desc,}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,1) {_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,1) {_OMC_LIT64,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#include "util/modelica.h"

#include "BackendInline_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_replaceArgs(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_replaceArgs,2,0) {(void*) boxptr_BackendInline_replaceArgs,0}};
#define boxvar_BackendInline_replaceArgs MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_replaceArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_addReplacement(threadData_t *threadData, modelica_metatype _iCr, modelica_metatype _iExp, modelica_metatype _iRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_addReplacement,2,0) {(void*) boxptr_BackendInline_addReplacement,0}};
#define boxvar_BackendInline_addReplacement MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_addReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_createEqnSysfromFunction(threadData_t *threadData, modelica_metatype _fns, modelica_metatype _inArgs, modelica_string _funcname, modelica_metatype *out_outEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_createEqnSysfromFunction,2,0) {(void*) boxptr_BackendInline_createEqnSysfromFunction,0}};
#define boxvar_BackendInline_createEqnSysfromFunction MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_createEqnSysfromFunction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_createReplacementVariables(threadData_t *threadData, modelica_metatype _inCref, modelica_string _funcName, modelica_metatype _inRepls, modelica_metatype *out_outVars, modelica_metatype *out_outRepls);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_createReplacementVariables,2,0) {(void*) boxptr_BackendInline_createReplacementVariables,0}};
#define boxvar_BackendInline_createReplacementVariables MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_createReplacementVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_addNoEvent(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _inB, modelica_boolean *out_outB);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_addNoEvent(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inB, modelica_metatype *out_outB);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_addNoEvent,2,0) {(void*) boxptr_BackendInline_addNoEvent,0}};
#define boxvar_BackendInline_addNoEvent MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_addNoEvent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsWork,2,0) {(void*) boxptr_BackendInline_inlineCallsWork,0}};
#define boxvar_BackendInline_inlineCallsWork MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsAppend(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outSource, modelica_metatype *out_outEqs, modelica_boolean *out_inlined, modelica_metatype *out_shared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineCallsAppend(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outSource, modelica_metatype *out_outEqs, modelica_metatype *out_inlined, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsAppend,2,0) {(void*) boxptr_BackendInline_inlineCallsAppend,0}};
#define boxvar_BackendInline_inlineCallsAppend MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEqAppend(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_boolean *out_inlined, modelica_metatype *out_shared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEqAppend(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_metatype *out_inlined, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEqAppend,2,0) {(void*) boxptr_BackendInline_inlineEqAppend,0}};
#define boxvar_BackendInline_inlineEqAppend MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEqAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationOptArrayAppend(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_boolean *out_oInlined, modelica_metatype *out_shared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationOptArrayAppend(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_oInlined, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationOptArrayAppend,2,0) {(void*) boxptr_BackendInline_inlineEquationOptArrayAppend,0}};
#define boxvar_BackendInline_inlineEquationOptArrayAppend MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationOptArrayAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationArrayAppend(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_boolean *out_oInlined, modelica_metatype *out_shared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationArrayAppend(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_metatype *out_oInlined, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationArrayAppend,2,0) {(void*) boxptr_BackendInline_inlineEquationArrayAppend,0}};
#define boxvar_BackendInline_inlineEquationArrayAppend MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationArrayAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationSystemAppend(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _tpl, modelica_metatype _ishared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationSystemAppend,2,0) {(void*) boxptr_BackendInline_inlineEquationSystemAppend,0}};
#define boxvar_BackendInline_inlineEquationSystemAppend MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationSystemAppend)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsBDAE(threadData_t *threadData, modelica_metatype _inITLst, modelica_metatype _inBackendDAE);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsBDAE,2,0) {(void*) boxptr_BackendInline_inlineCallsBDAE,0}};
#define boxvar_BackendInline_inlineCallsBDAE MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineCallsBDAE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineZeroCrossing(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fzc, modelica_metatype _fns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineZeroCrossing,2,0) {(void*) boxptr_BackendInline_inlineZeroCrossing,0}};
#define boxvar_BackendInline_inlineZeroCrossing MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineZeroCrossing)
PROTECTED_FUNCTION_STATIC void omc_BackendInline_inlineZeroCrossings(threadData_t *threadData, modelica_metatype _inStmts, modelica_metatype _fns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineZeroCrossings,2,0) {(void*) boxptr_BackendInline_inlineZeroCrossings,0}};
#define boxvar_BackendInline_inlineZeroCrossings MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineZeroCrossings)
PROTECTED_FUNCTION_STATIC void omc_BackendInline_inlineEventInfo(threadData_t *threadData, modelica_metatype _inEventInfo, modelica_metatype _fns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEventInfo,2,0) {(void*) boxptr_BackendInline_inlineEventInfo,0}};
#define boxvar_BackendInline_inlineEventInfo MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEventInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inElementList, modelica_boolean *out_inlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inElementList, modelica_metatype *out_inlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineVar,2,0) {(void*) boxptr_BackendInline_inlineVar,0}};
#define boxvar_BackendInline_inlineVar MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVarOpt(threadData_t *threadData, modelica_metatype _inVarOption, modelica_metatype _fns, modelica_boolean *out_inlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVarOpt(threadData_t *threadData, modelica_metatype _inVarOption, modelica_metatype _fns, modelica_metatype *out_inlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineVarOpt,2,0) {(void*) boxptr_BackendInline_inlineVarOpt,0}};
#define boxvar_BackendInline_inlineVarOpt MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineVarOpt)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInline_inlineVarOptArray(threadData_t *threadData, modelica_metatype _inVarArray, modelica_metatype _fns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVarOptArray(threadData_t *threadData, modelica_metatype _inVarArray, modelica_metatype _fns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineVarOptArray,2,0) {(void*) boxptr_BackendInline_inlineVarOptArray,0}};
#define boxvar_BackendInline_inlineVarOptArray MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineVarOptArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inElementList, modelica_boolean *out_inlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inElementList, modelica_metatype *out_inlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineVariables,2,0) {(void*) boxptr_BackendInline_inlineVariables,0}};
#define boxvar_BackendInline_inlineVariables MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineVariables)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineWhenOps(threadData_t *threadData, modelica_metatype _inWhenOps, modelica_metatype _fns, modelica_boolean *out_inlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineWhenOps(threadData_t *threadData, modelica_metatype _inWhenOps, modelica_metatype _fns, modelica_metatype *out_inlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineWhenOps,2,0) {(void*) boxptr_BackendInline_inlineWhenOps,0}};
#define boxvar_BackendInline_inlineWhenOps MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineWhenOps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineWhenEq(threadData_t *threadData, modelica_metatype _inWhenEquation, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype *out_outSource, modelica_boolean *out_inlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineWhenEq(threadData_t *threadData, modelica_metatype _inWhenEquation, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype *out_outSource, modelica_metatype *out_inlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineWhenEq,2,0) {(void*) boxptr_BackendInline_inlineWhenEq,0}};
#define boxvar_BackendInline_inlineWhenEq MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineWhenEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEqsLst(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_boolean _iInlined, modelica_boolean *out_OInlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEqsLst(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_metatype _iInlined, modelica_metatype *out_OInlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEqsLst,2,0) {(void*) boxptr_BackendInline_inlineEqsLst,0}};
#define boxvar_BackendInline_inlineEqsLst MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEqsLst)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInline_inlineEquationOptArray(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationOptArray(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationOptArray,2,0) {(void*) boxptr_BackendInline_inlineEquationOptArray,0}};
#define boxvar_BackendInline_inlineEquationOptArray MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationOptArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationArray(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _inElementList, modelica_boolean *out_oInlined);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationArray(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _inElementList, modelica_metatype *out_oInlined);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationArray,2,0) {(void*) boxptr_BackendInline_inlineEquationArray,0}};
#define boxvar_BackendInline_inlineEquationArray MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationSystem(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _tpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationSystem,2,0) {(void*) boxptr_BackendInline_inlineEquationSystem,0}};
#define boxvar_BackendInline_inlineEquationSystem MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineEquationSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCalls(threadData_t *threadData, modelica_metatype _inITLst, modelica_metatype _inBackendDAE);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendInline_inlineCalls,2,0) {(void*) boxptr_BackendInline_inlineCalls,0}};
#define boxvar_BackendInline_inlineCalls MMC_REFSTRUCTLIT(boxvar_lit_BackendInline_inlineCalls)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_replaceArgs(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_Inline_replaceArgs, _inTuple ,&_outTuple);

  if((!mmc_unbox_boolean(omc_Util_tuple33(threadData, _outTuple))))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      omc_Debug_traceln(threadData, _OMC_LIT0);
    }

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_addReplacement(threadData_t *threadData, modelica_metatype _iCr, modelica_metatype _iExp, modelica_metatype _iRepl)
{
  modelica_metatype _oRepl = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRepl has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCr;
    {
      modelica_metatype _tp = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _arrExp = NULL;
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tp has no default value.
      // _repl has no default value.
      // _crefs has no default value.
      // _arrExp has no default value.
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _tp = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((!omc_Expression_isRecordType(threadData, _tp)) && (!omc_Expression_isArrayType(threadData, _tp)))) goto tmp3_end;
          tmpMeta1 = omc_BackendVarTransform_addReplacement(threadData, _iRepl, _iCr, _iExp, mmc_mk_none());
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _tp = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isArrayType(threadData, _tp)) goto tmp3_end;
          _crefs = omc_ComponentReference_expandCref(threadData, _iCr, 0 /* false */);

          _repl = _iRepl;

          _arrExp = omc_Expression_getArrayOrRangeContents(threadData, _iExp);

          {
            modelica_metatype _c;
            for (tmpMeta8 = _crefs; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _c = MMC_CAR(tmpMeta8);
              /* Pattern-matching assignment */
              tmpMeta9 = _arrExp;
              if (listEmpty(tmpMeta9)) goto goto_2;
              tmpMeta10 = MMC_CAR(tmpMeta9);
              tmpMeta11 = MMC_CDR(tmpMeta9);
              _e = tmpMeta10;
              _arrExp = tmpMeta11;

              _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _c, _e, mmc_mk_none());
            }
          }
          tmpMeta1 = _repl;
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
  _oRepl = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oRepl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_createEqnSysfromFunction(threadData_t *threadData, modelica_metatype _fns, modelica_metatype _inArgs, modelica_string _funcname, modelica_metatype *out_outEqs)
{
  modelica_metatype _oOutput = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outEqs = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _fnInputs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _argmap = NULL;
  modelica_metatype _checkcr = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _eqlst = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta46;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _oOutput = tmpMeta1;
  // _outEqs has no default value.
  _args = _inArgs;
  // _repl has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _fnInputs = tmpMeta2;
  // _argmap has no default value.
  // _checkcr has no default value.
  // _cr has no default value.
  // _eqlst has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT7))
  {
    tmpMeta3 = stringAppend(_OMC_LIT4,_funcname);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqs = omc_BackendDAEUtil_createEqSystem(threadData, omc_BackendVariable_listVar(threadData, tmpMeta4), omc_BackendEquation_listEquation(threadData, tmpMeta5), tmpMeta6, _OMC_LIT8, omc_BackendEquation_emptyEqns(threadData));

  _repl = omc_BackendVarTransform_emptyReplacements(threadData);

  {
    modelica_metatype _fn;
    for (tmpMeta7 = _fns; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _fn = MMC_CAR(tmpMeta7);
      { /* match expression */
        modelica_metatype tmp10_1;
        tmp10_1 = _fn;
        {
          modelica_metatype _crVar = NULL;
          modelica_metatype _st = NULL;
          modelica_metatype _eVar = NULL;
          modelica_metatype _eBind = NULL;
          modelica_metatype _eq = NULL;
          modelica_metatype _varLst = NULL;
          volatile mmc_switch_type tmp10;
          int tmp11;
          // _crVar has no default value.
          // _st has no default value.
          // _eVar has no default value.
          // _eBind has no default value.
          // _eq has no default value.
          // _varLst has no default value.
          tmp10 = 0;
          for (; tmp10 < 5; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,14) == 0) goto tmp9_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,0) == 0) goto tmp9_end;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,0) == 0) goto tmp9_end;
              
              _cr = tmpMeta12;
              /* Pattern matching succeeded */
              tmpMeta15 = mmc_mk_cons(_cr, _fnInputs);
              _fnInputs = tmpMeta15;
              goto tmp9_done;
            }
            case 1: {
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,14) == 0) goto tmp9_end;
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,0) == 0) goto tmp9_end;
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,0) == 0) goto tmp9_end;
              
              _cr = tmpMeta16;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!((!omc_Expression_isRecordType(threadData, omc_ComponentReference_crefTypeFull(threadData, _cr))) && (omc_ComponentReference_crefDepth(threadData, _cr) > ((modelica_integer) 0)))) goto tmp9_end;
              _crVar = omc_BackendInline_createReplacementVariables(threadData, _cr, _funcname, _repl ,&_varLst ,&_repl);

              _outEqs = omc_BackendVariable_addVarsDAE(threadData, _varLst, _outEqs);

              tmpMeta19 = mmc_mk_cons(_crVar, _oOutput);
              _oOutput = tmpMeta19;
              goto tmp9_done;
            }
            case 2: {
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,14) == 0) goto tmp9_end;
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 6));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,0) == 0) goto tmp9_end;
              tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 8));
              if (!optionNone(tmpMeta22)) goto tmp9_end;
              
              _cr = tmpMeta20;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(!omc_Expression_isRecordType(threadData, omc_ComponentReference_crefTypeFull(threadData, _cr)))) goto tmp9_end;
              omc_BackendInline_createReplacementVariables(threadData, _cr, _funcname, _repl ,&_varLst ,&_repl);

              {
                modelica_metatype __omcQ_24tmpVar1;
                modelica_metatype* tmp24;
                modelica_metatype tmpMeta25;
                modelica_metatype __omcQ_24tmpVar0;
                modelica_integer tmp26;
                modelica_metatype __var_loopVar = 0;
                modelica_metatype __var;
                __var_loopVar = _varLst;
                tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar1 = tmpMeta25; /* defaultValue */
                tmp24 = &__omcQ_24tmpVar1;
                while(1) {
                  tmp26 = 1;
                  if (!listEmpty(__var_loopVar)) {
                    __var = MMC_CAR(__var_loopVar);
                    __var_loopVar = MMC_CDR(__var_loopVar);
                    tmp26--;
                  }
                  if (tmp26 == 0) {
                    __omcQ_24tmpVar0 = omc_BackendVariable_setVarTS(threadData, __var, _OMC_LIT10);
                    *tmp24 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                    tmp24 = &MMC_CDR(*tmp24);
                  } else if (tmp26 == 1) {
                    break;
                  } else {
                    goto goto_8;
                  }
                }
                *tmp24 = mmc_mk_nil();
                tmpMeta23 = __omcQ_24tmpVar1;
              }
              _varLst = tmpMeta23;

              _outEqs = omc_BackendVariable_addVarsDAE(threadData, _varLst, _outEqs);
              goto tmp9_done;
            }
            case 3: {
              modelica_metatype tmpMeta27;
              modelica_metatype tmpMeta28;
              modelica_metatype tmpMeta29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,0,14) == 0) goto tmp9_end;
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
              tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 6));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,1,0) == 0) goto tmp9_end;
              tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 8));
              if (optionNone(tmpMeta29)) goto tmp9_end;
              tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
              
              _cr = tmpMeta27;
              _eBind = tmpMeta30;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(!omc_Expression_isRecordType(threadData, omc_ComponentReference_crefTypeFull(threadData, _cr)))) goto tmp9_end;
              _crVar = omc_BackendInline_createReplacementVariables(threadData, _cr, _funcname, _repl ,&_varLst ,&_repl);

              _eVar = omc_Expression_crefExp(threadData, _crVar);

              {
                modelica_metatype __omcQ_24tmpVar3;
                modelica_metatype* tmp32;
                modelica_metatype tmpMeta33;
                modelica_metatype __omcQ_24tmpVar2;
                modelica_integer tmp34;
                modelica_metatype __var_loopVar = 0;
                modelica_metatype __var;
                __var_loopVar = _varLst;
                tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar3 = tmpMeta33; /* defaultValue */
                tmp32 = &__omcQ_24tmpVar3;
                while(1) {
                  tmp34 = 1;
                  if (!listEmpty(__var_loopVar)) {
                    __var = MMC_CAR(__var_loopVar);
                    __var_loopVar = MMC_CDR(__var_loopVar);
                    tmp34--;
                  }
                  if (tmp34 == 0) {
                    __omcQ_24tmpVar2 = omc_BackendVariable_setVarTS(threadData, __var, _OMC_LIT10);
                    *tmp32 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                    tmp32 = &MMC_CDR(*tmp32);
                  } else if (tmp34 == 1) {
                    break;
                  } else {
                    goto goto_8;
                  }
                }
                *tmp32 = mmc_mk_nil();
                tmpMeta31 = __omcQ_24tmpVar3;
              }
              _varLst = tmpMeta31;

              _outEqs = omc_BackendVariable_addVarsDAE(threadData, _varLst, _outEqs);

              _eq = omc_BackendEquation_generateEquation(threadData, _eVar, _eBind, _OMC_LIT15, _OMC_LIT18);

              _outEqs = omc_BackendEquation_equationAddDAE(threadData, _eq, _outEqs);
              goto tmp9_done;
            }
            case 4: {
              modelica_metatype tmpMeta35;
              modelica_metatype tmpMeta36;
              if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,16,2) == 0) goto tmp9_end;
              tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
              tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
              
              _st = tmpMeta36;
              /* Pattern matching succeeded */
              _eqlst = omc_List_map(threadData, _st, boxvar_BackendEquation_statementEq);

              _outEqs = omc_BackendEquation_equationsAddDAE(threadData, _eqlst, _outEqs);
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
      ;
    }
  }

  _oOutput = listReverse(_oOutput);

  if((omc_BackendDAEUtil_systemSize(threadData, _outEqs) != omc_BackendVariable_daenumVariables(threadData, _outEqs)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmpMeta38 = stringAppend(_OMC_LIT19,_funcname);
      tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT20);
      omc_Debug_trace(threadData, tmpMeta39);

      tmpMeta40 = stringAppend(intString(omc_BackendDAEUtil_systemSize(threadData, _outEqs)),_OMC_LIT21);
      tmpMeta41 = stringAppend(tmpMeta40,intString(omc_BackendVariable_daenumVariables(threadData, _outEqs)));
      fputs(MMC_STRINGDATA(tmpMeta41),stdout);
    }

    MMC_THROW_INTERNAL();
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT7))
  {
    tmpMeta42 = stringAppend(_OMC_LIT22,_funcname);
    fputs(MMC_STRINGDATA(tmpMeta42),stdout);

    omc_BackendDump_printEqSystem(threadData, _outEqs);

    fputs(MMC_STRINGDATA(_OMC_LIT23),stdout);

    omc_BackendVarTransform_dumpReplacements(threadData, _repl);
  }

  tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(11));
  memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_outEqs), 11*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[3] = omc_BackendEquation_listEquation(threadData, omc_InlineArrayEquations_getScalarArrayEqns(threadData, omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outEqs), 3)))), NULL));
  _outEqs = tmpMeta43;

  _outEqs = omc_BackendVarTransform_performReplacementsEqSystem(threadData, _outEqs, _repl);

  if(omc_Flags_isSet(threadData, _OMC_LIT7))
  {
    tmpMeta44 = stringAppend(_OMC_LIT24,_funcname);
    fputs(MMC_STRINGDATA(tmpMeta44),stdout);

    omc_BackendDump_printEqSystem(threadData, _outEqs);
  }

  _argmap = omc_List_zip(threadData, listReverse(_fnInputs), _args);

  _argmap = omc_Inline_extendCrefRecords(threadData, _argmap, omc_HashTableCG_emptyHashTable(threadData) ,&_checkcr);

  tmpMeta45 = mmc_mk_box3(0, _argmap, _checkcr, mmc_mk_boolean(1 /* true */));
  omc_BackendDAEUtil_traverseBackendDAEExpsEqSystemWithUpdate(threadData, _outEqs, boxvar_BackendInline_replaceArgs, tmpMeta45);

  if(omc_Flags_isSet(threadData, _OMC_LIT7))
  {
    tmpMeta46 = stringAppend(_OMC_LIT25,_funcname);
    fputs(MMC_STRINGDATA(tmpMeta46),stdout);

    omc_BackendDump_printEqSystem(threadData, _outEqs);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outEqs) { *out_outEqs = _outEqs; }
  return _oOutput;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_createReplacementVariables(threadData_t *threadData, modelica_metatype _inCref, modelica_string _funcName, modelica_metatype _inRepls, modelica_metatype *out_outVars, modelica_metatype *out_outRepls)
{
  modelica_metatype _crVar = NULL;
  modelica_metatype _outVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outRepls = NULL;
  modelica_metatype _eVar = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _arrExp = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _crefs1 = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _var = NULL;
  modelica_boolean tmp2;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crVar has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outVars = tmpMeta1;
  _outRepls = _inRepls;
  // _eVar has no default value.
  // _e has no default value.
  // _arrExp has no default value.
  // _crefs has no default value.
  // _crefs1 has no default value.
  // _cr has no default value.
  // _var has no default value.
  _var = omc_BackendVariable_createTmpVar(threadData, _inCref, _funcName);

  _crVar = omc_BackendVariable_varCref(threadData, _var);

  _eVar = omc_Expression_crefExp(threadData, _crVar);

  /* Pattern-matching assignment */
  tmp2 = omc_Expression_isRecord(threadData, _eVar);
  if (0 /* false */ != tmp2) MMC_THROW_INTERNAL();

  _outRepls = omc_BackendVarTransform_addReplacement(threadData, _outRepls, _inCref, _eVar, mmc_mk_none());

  _crefs = omc_ComponentReference_expandCref(threadData, _inCref, 0 /* false */);

  _crefs1 = omc_ComponentReference_expandCref(threadData, _crVar, 0 /* false */);

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
          _arrExp = omc_Expression_getArrayOrRangeContents(threadData, _eVar);
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(_eVar, MMC_REFSTRUCTLIT(mmc_nil));
          _arrExp = tmpMeta7;
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

  if((listLength(_crefs) != listLength(_arrExp)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT3))
    {
      tmpMeta8 = stringAppend(_OMC_LIT26,omc_ExpressionBasics_printExpStr(threadData, _eVar));
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT27);
      omc_Debug_traceln(threadData, tmpMeta9);
    }

    MMC_THROW_INTERNAL();
  }

  {
    modelica_metatype _c;
    for (tmpMeta10 = _crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _c = MMC_CAR(tmpMeta10);
      /* Pattern-matching assignment */
      tmpMeta11 = _crefs1;
      if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
      tmpMeta12 = MMC_CAR(tmpMeta11);
      tmpMeta13 = MMC_CDR(tmpMeta11);
      _cr = tmpMeta12;
      _crefs1 = tmpMeta13;

      /* Pattern-matching assignment */
      tmpMeta14 = _arrExp;
      if (listEmpty(tmpMeta14)) MMC_THROW_INTERNAL();
      tmpMeta15 = MMC_CAR(tmpMeta14);
      tmpMeta16 = MMC_CDR(tmpMeta14);
      _e = tmpMeta15;
      _arrExp = tmpMeta16;

      tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(20));
      memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = _cr;
      _var = tmpMeta17;

      tmpMeta18 = mmc_mk_cons(_var, _outVars);
      _outVars = tmpMeta18;

      _outRepls = omc_BackendVarTransform_addReplacement(threadData, _outRepls, _c, _e, mmc_mk_none());
    }
  }

  _outVars = listReverse(_outVars);
  _return: OMC_LABEL_UNUSED
  if (out_outVars) { *out_outVars = _outVars; }
  if (out_outRepls) { *out_outRepls = _outRepls; }
  return _crVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_addNoEvent(threadData_t *threadData, modelica_metatype _inExp, modelica_boolean _inB, modelica_boolean *out_outB)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _outB;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outB = _inB;
  _outExp = omc_Expression_addNoEventToRelationsAndConds(threadData, _inExp);

  _outExp = omc_Expression_addNoEventToEventTriggeringFunctions(threadData, _outExp);
  _return: OMC_LABEL_UNUSED
  if (out_outB) { *out_outB = _outB; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_addNoEvent(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inB, modelica_metatype *out_outB)
{
  modelica_integer tmp1;
  modelica_boolean _outB;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inB);
  _outExp = omc_BackendInline_addNoEvent(threadData, _inExp, tmp1, &_outB);
  /* skip box _outExp; DAE.Exp */
  if (out_outB) { *out_outB = mmc_mk_icon(_outB); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsWork(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _fns = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _args = NULL;
      modelica_metatype _outputCrefs = NULL;
      modelica_metatype _newExp = NULL;
      modelica_metatype _inlineType = NULL;
      modelica_boolean _b;
      modelica_metatype _comment = NULL;
      modelica_string _funcname = NULL;
      modelica_metatype _eqSys = NULL;
      modelica_metatype _newEqSys = NULL;
      modelica_boolean _insideIfExp;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fns has no default value.
      // _fn has no default value.
      // _p has no default value.
      // _args has no default value.
      // _outputCrefs has no default value.
      // _newExp has no default value.
      // _inlineType has no default value.
      // _b has no default value.
      // _comment has no default value.
      // _funcname has no default value.
      // _eqSys has no default value.
      // _newEqSys has no default value.
      // _insideIfExp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 /* true */ != tmp8) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
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
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          if (0 /* false */ != tmp12) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 7));
          
          _fns = tmpMeta9;
          _eqSys = tmpMeta10;
          _p = tmpMeta13;
          _args = tmpMeta14;
          _inlineType = tmpMeta16;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_Inline_checkInlineType(threadData, _inlineType, _fns) && (omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 2)))) goto tmp3_end;
          _fn = omc_Inline_getFunctionBody(threadData, _p, _fns ,&_comment);

          _funcname = omc_BackendUtil_modelicaStringToCStr(threadData, omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT28, 1 /* true */, 0 /* false */), 0 /* false */);

          if(omc_Flags_isSet(threadData, _OMC_LIT7))
          {
            tmpMeta17 = stringAppend(_OMC_LIT29,_funcname);
            tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT30);
            tmpMeta19 = stringAppend(tmpMeta18,omc_DAEDump_dumpInlineTypeStr(threadData, _inlineType));
            tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta20),stdout);

            tmpMeta21 = stringAppend(_OMC_LIT31,omc_ExpressionBasics_printExpStr(threadData, _inExp));
            tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta22),stdout);
          }

          _outputCrefs = omc_BackendInline_createEqnSysfromFunction(threadData, _fn, _args, _funcname ,&_newEqSys);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp26;
            modelica_metatype _cr_loopVar = 0;
            modelica_metatype _cr;
            _cr_loopVar = _outputCrefs;
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar5;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_cr_loopVar)) {
                _cr = MMC_CAR(_cr_loopVar);
                _cr_loopVar = MMC_CDR(_cr_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar4 = omc_Expression_crefExp(threadData, _cr);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar5;
          }
          _newExp = omc_Expression_makeTuple(threadData, tmpMeta23);

          if(omc_Flags_isSet(threadData, _OMC_LIT7))
          {
            tmpMeta27 = stringAppend(_OMC_LIT32,omc_ExpressionBasics_printExpStr(threadData, _newExp));
            tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta28),stdout);
          }

          if((!omc_Inline_hasGenerateEventsAnnotation(threadData, _comment)))
          {
            omc_BackendDAEUtil_traverseBackendDAEExpsEqSystemWithUpdate(threadData, _newEqSys, boxvar_BackendInline_addNoEvent, mmc_mk_boolean(0 /* false */));
          }

          _newEqSys = omc_BackendDAEUtil_mergeEqSystems(threadData, _newEqSys, _eqSys);
          tmpMeta29 = mmc_mk_box4(0, _fns, _newEqSys, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */));
          tmpMeta[0+0] = _newExp;
          tmpMeta[0+1] = tmpMeta29;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_integer tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 7));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp38 = mmc_unbox_integer(tmpMeta37);
          _p = tmpMeta30;
          _inlineType = tmpMeta32;
          _fns = tmpMeta33;
          _eqSys = tmpMeta34;
          _b = tmp36  /* pattern as ty=Boolean */;
          _insideIfExp = tmp38  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          _newExp = omc_Inline_inlineCall(threadData, _inExp, tmpMeta39, _fns, NULL);

          if(omc_Flags_isSet(threadData, _OMC_LIT7))
          {
            _funcname = omc_BackendUtil_modelicaStringToCStr(threadData, omc_AbsynUtil_pathString(threadData, _p, _OMC_LIT28, 1 /* true */, 0 /* false */), 0 /* false */);

            tmpMeta40 = stringAppend(_OMC_LIT48,_funcname);
            tmpMeta41 = stringAppend(tmpMeta40,_OMC_LIT30);
            tmpMeta42 = stringAppend(tmpMeta41,omc_DAEDump_dumpInlineTypeStr(threadData, _inlineType));
            tmpMeta43 = stringAppend(tmpMeta42,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta43),stdout);

            tmpMeta44 = stringAppend(_OMC_LIT31,omc_ExpressionBasics_printExpStr(threadData, _inExp));
            tmpMeta45 = stringAppend(tmpMeta44,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta45),stdout);

            tmpMeta46 = stringAppend(_OMC_LIT32,omc_ExpressionBasics_printExpStr(threadData, _newExp));
            tmpMeta47 = stringAppend(tmpMeta46,_OMC_LIT27);
            fputs(MMC_STRINGDATA(tmpMeta47),stdout);
          }
          tmpMeta48 = mmc_mk_box4(0, _fns, _eqSys, mmc_mk_boolean(_b), mmc_mk_boolean(_insideIfExp));
          tmpMeta[0+0] = _newExp;
          tmpMeta[0+1] = tmpMeta48;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTuple;
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
  _outExp = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsAppend(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outSource, modelica_metatype *out_outEqs, modelica_boolean *out_inlined, modelica_metatype *out_shared)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outSource = NULL;
  modelica_metatype _outEqs = NULL;
  modelica_boolean _inlined;
  modelica_metatype _shared = NULL;
  modelica_boolean tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outSource has no default value.
  // _outEqs has no default value.
  // _inlined has no default value.
  _shared = _iShared;
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _source has no default value.
      // _b has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          _e = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta10 = mmc_mk_box4(0, _fns, _inEqs, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          tmpMeta11 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_BackendInline_inlineCallsWork, tmpMeta10, &tmpMeta6);
          _e1 = tmpMeta11;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _outEqs = tmpMeta7;
          _b = tmp9  /* pattern as ty=Boolean */;

          _source = _inSource;

          _e2 = _e1;

          if(omc_Flags_isSet(threadData, _OMC_LIT7))
          {
            tmpMeta12 = stringAppend(_OMC_LIT49,omc_ExpressionBasics_printExpStr(threadData, _inExp));
            fputs(MMC_STRINGDATA(tmpMeta12),stdout);

            tmpMeta13 = stringAppend(_OMC_LIT50,omc_ExpressionBasics_printExpStr(threadData, _e2));
            fputs(MMC_STRINGDATA(tmpMeta13),stdout);
          }
          tmpMeta[0+0] = _e2;
          tmpMeta[0+1] = _source;
          tmpMeta[0+2] = _outEqs;
          tmp1_c3 = _b;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inSource;
          tmpMeta[0+2] = _inEqs;
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
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _outSource = tmpMeta[0+1];
  _outEqs = tmpMeta[0+2];
  _inlined = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_outSource) { *out_outSource = _outSource; }
  if (out_outEqs) { *out_outEqs = _outEqs; }
  if (out_inlined) { *out_inlined = _inlined; }
  if (out_shared) { *out_shared = _shared; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineCallsAppend(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outSource, modelica_metatype *out_outEqs, modelica_metatype *out_inlined, modelica_metatype *out_shared)
{
  modelica_boolean _inlined;
  modelica_metatype _outExp = NULL;
  _outExp = omc_BackendInline_inlineCallsAppend(threadData, _inExp, _fns, _inSource, _inEqs, _iShared, out_outSource, out_outEqs, &_inlined, out_shared);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outSource; DAE.ElementSource */
  /* skip box _outEqs; BackendDAE.EqSystem */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  /* skip box _shared; BackendDAE.Shared */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEqAppend(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_boolean *out_inlined, modelica_metatype *out_shared)
{
  modelica_metatype _outEquation = NULL;
  modelica_metatype _outEqs = NULL;
  modelica_boolean _inlined;
  modelica_metatype _shared = NULL;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  // _outEqs has no default value.
  // _inlined has no default value.
  _shared = _iShared;
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEquation;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _b3;
      modelica_metatype _attr = NULL;
      modelica_metatype _eqn = NULL;
      modelica_integer _size;
      modelica_metatype _explst = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _weq = NULL;
      modelica_metatype _weq_1 = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmts1 = NULL;
      modelica_metatype _crefExpand = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _eqns = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _source has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _b3 has no default value.
      // _attr has no default value.
      // _eqn has no default value.
      // _size has no default value.
      // _explst has no default value.
      // _cref has no default value.
      // _weq has no default value.
      // _weq_1 has no default value.
      // _stmts has no default value.
      // _stmts1 has no default value.
      // _crefExpand has no default value.
      // _eqnslst has no default value.
      // _eqns has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _source = tmpMeta8;
          _attr = tmpMeta9;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendInline_inlineCallsAppend(threadData, _e1, _fns, _source, _inEqs, _shared ,&_source ,&_outEqs ,&_b1 ,&_shared);

          _e2 = omc_BackendInline_inlineCallsAppend(threadData, _e2, _fns, _source, _outEqs, _shared ,&_source ,&_outEqs ,&_b2 ,&_shared);

          _b3 = (_b1 || _b2);
          tmpMeta[0+0] = omc_BackendEquation_generateEquation(threadData, _e1, _e2, _source, _attr);
          tmpMeta[0+1] = _outEqs;
          tmp1_c2 = _b3;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _e1 = tmpMeta10;
          _e2 = tmpMeta11;
          _source = tmpMeta12;
          _attr = tmpMeta13;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendInline_inlineCallsAppend(threadData, _e1, _fns, _source, _inEqs, _shared ,&_source ,&_outEqs ,&_b1 ,&_shared);

          _e2 = omc_BackendInline_inlineCallsAppend(threadData, _e2, _fns, _source, _outEqs, _shared ,&_source ,&_outEqs ,&_b2 ,&_shared);

          _b3 = (_b1 || _b2);

          if(((_b2 && omc_Expression_isScalar(threadData, _e1)) && omc_Expression_isTuple(threadData, _e2)))
          {
            tmpMeta14 = mmc_mk_box4(25, &DAE_Exp_TSUB__desc, _e2, mmc_mk_integer(((modelica_integer) 1)), omc_Expression_typeof(threadData, _e1));
            _e2 = tmpMeta14;
          }
          tmpMeta[0+0] = omc_BackendEquation_generateEquation(threadData, _e1, _e2, _source, _attr);
          tmpMeta[0+1] = _outEqs;
          tmp1_c2 = _b3;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _e1 = tmpMeta15;
          _e2 = tmpMeta16;
          _source = tmpMeta17;
          _attr = tmpMeta18;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendInline_inlineCallsAppend(threadData, _e1, _fns, _source, _inEqs, _shared ,&_source ,&_outEqs ,&_b1 ,&_shared);

          _e2 = omc_BackendInline_inlineCallsAppend(threadData, _e2, _fns, _source, _outEqs, _shared ,&_source ,&_outEqs ,&_b2 ,&_shared);

          _b3 = (_b1 || _b2);
          tmpMeta[0+0] = omc_BackendEquation_generateEquation(threadData, _e1, _e2, _source, _attr);
          tmpMeta[0+1] = _outEqs;
          tmp1_c2 = _b3;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _cref = tmpMeta19;
          _e2 = tmpMeta20;
          _source = tmpMeta21;
          _attr = tmpMeta22;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e2 = omc_BackendInline_inlineCallsAppend(threadData, _e2, _fns, _source, _inEqs, _shared ,&_source ,&_outEqs ,&_b2 ,&_shared);
          tmpMeta23 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cref, _e2, _source, _attr);
          tmpMeta[0+0] = tmpMeta23;
          tmpMeta[0+1] = _outEqs;
          tmp1_c2 = _b2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta24;
          _source = tmpMeta25;
          _attr = tmpMeta26;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendInline_inlineCallsAppend(threadData, _e1, _fns, _source, _inEqs, _shared ,&_source ,&_outEqs ,&_b1 ,&_shared);
          tmpMeta27 = mmc_mk_box4(6, &BackendDAE_Equation_RESIDUAL__EQUATION__desc, _e1, _source, _attr);
          tmpMeta[0+0] = tmpMeta27;
          tmpMeta[0+1] = _outEqs;
          tmp1_c2 = _b1;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _eqn = tmp4_1;
          _size = tmp29  /* pattern as ty=Integer */;
          _stmts = tmpMeta31;
          _source = tmpMeta32;
          _crefExpand = tmpMeta33;
          _attr = tmpMeta34;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmts1 = omc_Inline_inlineStatements(threadData, _stmts, _fns, tmpMeta35, 0 /* false */ ,&_b1);

          if(_b1)
          {
            tmpMeta36 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _stmts1);
            tmpMeta37 = mmc_mk_box6(7, &BackendDAE_Equation_ALGORITHM__desc, mmc_mk_integer(_size), tmpMeta36, _source, _crefExpand, _attr);
            _eqn = tmpMeta37;
          }
          tmpMeta[0+0] = _eqn;
          tmpMeta[0+1] = _inEqs;
          tmp1_c2 = _b1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp39 = mmc_unbox_integer(tmpMeta38);
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _eqn = tmp4_1;
          _size = tmp39  /* pattern as ty=Integer */;
          _weq = tmpMeta40;
          _source = tmpMeta41;
          _attr = tmpMeta42;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _weq_1 = omc_BackendInline_inlineWhenEq(threadData, _weq, _fns, _source ,&_source ,&_b1);

          if(_b1)
          {
            tmpMeta43 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(_size), _weq_1, _source, _attr);
            _eqn = tmpMeta43;
          }
          tmpMeta[0+0] = _eqn;
          tmpMeta[0+1] = _inEqs;
          tmp1_c2 = _b1;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _eqn = tmp4_1;
          _explst = tmpMeta44;
          _eqnslst = tmpMeta45;
          _eqns = tmpMeta46;
          _source = tmpMeta47;
          _attr = tmpMeta48;
          /* Pattern matching succeeded */
          _explst = omc_Inline_inlineExps(threadData, _explst, _fns, _source ,&_source ,&_b1);

          tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqnslst = omc_BackendInline_inlineEqsLst(threadData, _eqnslst, _fns, tmpMeta49, 0 /* false */ ,&_b2);

          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_BackendInline_inlineEqs(threadData, _eqns, _fns, tmpMeta50, 0 /* false */ ,&_b3);

          _b3 = ((_b1 || _b2) || _b3);

          if(_b3)
          {
            tmpMeta51 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, _explst, _eqnslst, _eqns, _source, _attr);
            _eqn = tmpMeta51;
          }
          tmpMeta[0+0] = _eqn;
          tmpMeta[0+1] = _inEqs;
          tmp1_c2 = _b3;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEquation;
          tmpMeta[0+1] = _inEqs;
          tmp1_c2 = 0 /* false */;
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
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEquation = tmpMeta[0+0];
  _outEqs = tmpMeta[0+1];
  _inlined = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outEqs) { *out_outEqs = _outEqs; }
  if (out_inlined) { *out_inlined = _inlined; }
  if (out_shared) { *out_shared = _shared; }
  return _outEquation;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEqAppend(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_metatype _inEqs, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_metatype *out_inlined, modelica_metatype *out_shared)
{
  modelica_boolean _inlined;
  modelica_metatype _outEquation = NULL;
  _outEquation = omc_BackendInline_inlineEqAppend(threadData, _inEquation, _fns, _inEqs, _iShared, out_outEqs, &_inlined, out_shared);
  /* skip box _outEquation; BackendDAE.Equation */
  /* skip box _outEqs; BackendDAE.EqSystem */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  /* skip box _shared; BackendDAE.Shared */
  return _outEquation;
}

DLLDirection
modelica_metatype omc_BackendInline_inlineEqAppend__debug(threadData_t *threadData, modelica_metatype _inEquationOption, modelica_metatype _inElementList, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_boolean *out_inlined, modelica_metatype *out_shared)
{
  modelica_metatype _outEquationOption = NULL;
  modelica_metatype _outEqs = NULL;
  modelica_boolean _inlined;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquationOption has no default value.
  // _outEqs has no default value.
  // _inlined has no default value.
  _shared = _iShared;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqs = omc_BackendDAEUtil_createEqSystem(threadData, omc_BackendVariable_listVar(threadData, tmpMeta1), omc_BackendEquation_listEquation(threadData, tmpMeta2), tmpMeta3, _OMC_LIT8, omc_BackendEquation_emptyEqns(threadData));

  _outEquationOption = omc_BackendInline_inlineEqAppend(threadData, _inEquationOption, _inElementList, _outEqs, _shared ,&_outEqs ,&_inlined ,&_shared);

  if((omc_Flags_isSet(threadData, _OMC_LIT7) && _inlined))
  {
    tmpMeta4 = stringAppend(_OMC_LIT51,omc_BackendDump_equationString(threadData, _inEquationOption));
    tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT27);
    fputs(MMC_STRINGDATA(tmpMeta5),stdout);

    tmpMeta6 = stringAppend(_OMC_LIT52,omc_BackendDump_equationString(threadData, _outEquationOption));
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT27);
    omc_BackendDump_dumpEqSystem(threadData, _outEqs, tmpMeta7);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outEqs) { *out_outEqs = _outEqs; }
  if (out_inlined) { *out_inlined = _inlined; }
  if (out_shared) { *out_shared = _shared; }
  return _outEquationOption;
}
modelica_metatype boxptr_BackendInline_inlineEqAppend__debug(threadData_t *threadData, modelica_metatype _inEquationOption, modelica_metatype _inElementList, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_metatype *out_inlined, modelica_metatype *out_shared)
{
  modelica_boolean _inlined;
  modelica_metatype _outEquationOption = NULL;
  _outEquationOption = omc_BackendInline_inlineEqAppend__debug(threadData, _inEquationOption, _inElementList, _iShared, out_outEqs, &_inlined, out_shared);
  /* skip box _outEquationOption; BackendDAE.Equation */
  /* skip box _outEqs; BackendDAE.EqSystem */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  /* skip box _shared; BackendDAE.Shared */
  return _outEquationOption;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationOptArrayAppend(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_boolean *out_oInlined, modelica_metatype *out_shared)
{
  modelica_metatype _outEqs = NULL;
  modelica_boolean _oInlined;
  modelica_metatype _shared = NULL;
  modelica_metatype _eqn = NULL;
  modelica_boolean _inlined;
  modelica_metatype _tmpEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqs has no default value.
  _oInlined = 0 /* false */;
  _shared = _iShared;
  // _eqn has no default value.
  // _inlined has no default value.
  // _tmpEqs has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outEqs = omc_BackendDAEUtil_createEqSystem(threadData, omc_BackendVariable_listVar(threadData, tmpMeta1), omc_BackendEquation_listEquation(threadData, tmpMeta2), tmpMeta3, _OMC_LIT8, omc_BackendEquation_emptyEqns(threadData));

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = omc_ExpandableArray_getLastUsedIndex(threadData, _inEqnArray);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      if(omc_ExpandableArray_occupied(threadData, _i, _inEqnArray))
      {
        _eqn = omc_BackendInline_inlineEqAppend__debug(threadData, omc_ExpandableArray_get(threadData, _i, _inEqnArray), _fns, _shared ,&_tmpEqs ,&_inlined ,&_shared);

        if(_inlined)
        {
          _outEqs = omc_BackendDAEUtil_mergeEqSystems(threadData, _tmpEqs, _outEqs);

          omc_ExpandableArray_update(threadData, _i, _eqn, _inEqnArray);

          _oInlined = 1 /* true */;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oInlined) { *out_oInlined = _oInlined; }
  if (out_shared) { *out_shared = _shared; }
  return _outEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationOptArrayAppend(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_oInlined, modelica_metatype *out_shared)
{
  modelica_boolean _oInlined;
  modelica_metatype _outEqs = NULL;
  _outEqs = omc_BackendInline_inlineEquationOptArrayAppend(threadData, _inEqnArray, _fns, _iShared, &_oInlined, out_shared);
  /* skip box _outEqs; BackendDAE.EqSystem */
  if (out_oInlined) { *out_oInlined = mmc_mk_icon(_oInlined); }
  /* skip box _shared; BackendDAE.Shared */
  return _outEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationArrayAppend(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_boolean *out_oInlined, modelica_metatype *out_shared)
{
  modelica_metatype _outEquationArray = NULL;
  modelica_metatype _outEqs = NULL;
  modelica_boolean _oInlined;
  modelica_metatype _shared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEquationArray = _inEquationArray;
  // _outEqs has no default value.
  // _oInlined has no default value.
  _shared = _iShared;
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
          /* Pattern matching succeeded */
          _outEqs = omc_BackendInline_inlineEquationOptArrayAppend(threadData, _outEquationArray, _fns, _shared ,&_oInlined ,&_shared);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          _oInlined = 0 /* false */;

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _outEqs = omc_BackendDAEUtil_createEqSystem(threadData, omc_BackendVariable_listVar(threadData, tmpMeta5), omc_BackendEquation_listEquation(threadData, tmpMeta6), tmpMeta7, _OMC_LIT8, omc_BackendEquation_emptyEqns(threadData));

          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            omc_Debug_trace(threadData, _OMC_LIT53);
          }
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
  if (out_outEqs) { *out_outEqs = _outEqs; }
  if (out_oInlined) { *out_oInlined = _oInlined; }
  if (out_shared) { *out_shared = _shared; }
  return _outEquationArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationArrayAppend(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _fns, modelica_metatype _iShared, modelica_metatype *out_outEqs, modelica_metatype *out_oInlined, modelica_metatype *out_shared)
{
  modelica_boolean _oInlined;
  modelica_metatype _outEquationArray = NULL;
  _outEquationArray = omc_BackendInline_inlineEquationArrayAppend(threadData, _inEquationArray, _fns, _iShared, out_outEqs, &_oInlined, out_shared);
  /* skip box _outEquationArray; ExpandableArray<BackendDAE.Equation> */
  /* skip box _outEqs; BackendDAE.EqSystem */
  if (out_oInlined) { *out_oInlined = mmc_mk_icon(_oInlined); }
  /* skip box _shared; BackendDAE.Shared */
  return _outEquationArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationSystemAppend(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _tpl, modelica_metatype _ishared)
{
  modelica_metatype _oeqs = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _new = NULL;
  modelica_boolean _inlined;
  modelica_metatype _eqnsArray = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oeqs = _eqs;
  _shared = _ishared;
  // _new has no default value.
  _inlined = 1 /* true */;
  // _eqnsArray has no default value.
  _eqnsArray = omc_BackendInline_inlineEquationArrayAppend(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oeqs), 3))), _tpl, _shared ,&_new ,&_inlined ,&_shared);

  if(_inlined)
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_oeqs), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = _eqnsArray;
    _oeqs = tmpMeta1;

    _new = omc_BackendInline_inlineEquationSystemAppend(threadData, _new, _tpl, _shared);

    _oeqs = omc_BackendDAEUtil_mergeEqSystems(threadData, _new, _oeqs);
  }
  _return: OMC_LABEL_UNUSED
  return _oeqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCallsBDAE(threadData_t *threadData, modelica_metatype _inITLst, modelica_metatype _inBackendDAE)
{
  modelica_metatype _outBackendDAE = NULL;
  modelica_metatype _tpl = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _shared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBackendDAE has no default value.
  // _tpl has no default value.
  // _eqs has no default value.
  // _shared has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT57))
          {
            if((omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 1)))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT55),stdout);
            }
            else
            {
              if((omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 2)))
              {
                fputs(MMC_STRINGDATA(_OMC_LIT54),stdout);
              }
            }
          }

          _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBackendDAE), 3)));

          _eqs = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBackendDAE), 2)));

          tmpMeta5 = mmc_mk_box2(0, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12)))), _inITLst);
          _tpl = tmpMeta5;

          if((omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 1)))
          {
            _eqs = omc_List_map1(threadData, _eqs, boxvar_BackendInline_inlineEquationSystem, _tpl);
          }
          else
          {
            if((omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 2)))
            {
              _eqs = omc_List_map2(threadData, _eqs, boxvar_BackendInline_inlineEquationSystemAppend, _tpl, _shared);
            }
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT57))
          {
            omc_BackendDump_dumpEqSystems(threadData, _eqs, _OMC_LIT58);
          }

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_BackendInline_inlineVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 2))), _tpl, NULL);
          _shared = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_BackendInline_inlineVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 4))), _tpl, NULL);
          _shared = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 6))), _tpl, NULL);
          _shared = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))), _tpl, NULL);
          _shared = tmpMeta9;

          tmpMeta10 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqs, _shared);
          _outBackendDAE = tmpMeta10;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            omc_Debug_traceln(threadData, _OMC_LIT59);
          }

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

  _outBackendDAE = omc_BackendDAEOptimize_simplifyComplexFunction1(threadData, _outBackendDAE, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _outBackendDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineZeroCrossing(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fzc, modelica_metatype _fns)
{
  modelica_metatype _zc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _zc = __omcQ_24in_5Fzc;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _zc;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e_1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e_1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          _e_1 = omc_Inline_inlineExp(threadData, _e, _fns, _OMC_LIT15, NULL, NULL, NULL);
          tmp8 = (modelica_boolean)(!referenceEq(_e, _e_1));
          if(tmp8)
          {
            tmpMeta7 = mmc_mk_box5(3, &BackendDAE_ZeroCrossing_ZERO__CROSSING__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zc), 2))), _e_1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zc), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zc), 5))));
            tmpMeta9 = tmpMeta7;
          }
          else
          {
            tmpMeta9 = _zc;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _zc;
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
  _zc = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _zc;
}

PROTECTED_FUNCTION_STATIC void omc_BackendInline_inlineZeroCrossings(threadData_t *threadData, modelica_metatype _inStmts, modelica_metatype _fns)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_DoubleEnded_mapNoCopy__1(threadData, _inStmts, boxvar_BackendInline_inlineZeroCrossing, _fns);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_BackendInline_inlineEventInfo(threadData_t *threadData, modelica_metatype _inEventInfo, modelica_metatype _fns)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inEventInfo;
    {
      modelica_metatype _zclst = NULL;
      modelica_metatype _relations = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _zclst has no default value.
      // _relations has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          
          _zclst = tmpMeta5;
          _relations = tmpMeta6;
          /* Pattern matching succeeded */
          omc_BackendInline_inlineZeroCrossings(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_zclst), 2))), _fns);

          omc_BackendInline_inlineZeroCrossings(threadData, _relations, _fns);
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Flags_isSet(threadData, _OMC_LIT3);
          if (1 /* true */ != tmp7) goto goto_1;

          omc_Debug_trace(threadData, _OMC_LIT60);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inElementList, modelica_boolean *out_inlined)
{
  modelica_metatype _outVar = NULL;
  modelica_boolean _inlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _inlined has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _varName = NULL;
      modelica_metatype _varKind = NULL;
      modelica_metatype _varDirection = NULL;
      modelica_metatype _varParallelism = NULL;
      modelica_metatype _varType = NULL;
      modelica_metatype _arrayDim = NULL;
      modelica_metatype _values = NULL;
      modelica_metatype _values1 = NULL;
      modelica_metatype _ts = NULL;
      modelica_metatype _hideResult = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _ct = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _bind = NULL;
      modelica_metatype _tplExp = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _io = NULL;
      modelica_boolean _unreplaceable;
      modelica_boolean _e;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varName has no default value.
      // _varKind has no default value.
      // _varDirection has no default value.
      // _varParallelism has no default value.
      // _varType has no default value.
      // _arrayDim has no default value.
      // _values has no default value.
      // _values1 has no default value.
      // _ts has no default value.
      // _hideResult has no default value.
      // _comment has no default value.
      // _ct has no default value.
      // _source has no default value.
      // _bind has no default value.
      // _tplExp has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _io has no default value.
      // _unreplaceable has no default value.
      // _e has no default value.
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
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 12));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 14));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 15));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 17));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 19));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _varName = tmpMeta6;
          _varKind = tmpMeta7;
          _varDirection = tmpMeta8;
          _varParallelism = tmpMeta9;
          _varType = tmpMeta10;
          _bind = tmpMeta11;
          _tplExp = tmpMeta12;
          _arrayDim = tmpMeta13;
          _source = tmpMeta14;
          _values = tmpMeta15;
          _ts = tmpMeta16;
          _hideResult = tmpMeta17;
          _comment = tmpMeta18;
          _ct = tmpMeta19;
          _io = tmpMeta20;
          _unreplaceable = tmp22  /* pattern as ty=Boolean */;
          _e = tmp24  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _bind = omc_Inline_inlineExpOpt(threadData, _bind, _inElementList, _source ,&_source ,&_b1);

          _values1 = omc_Inline_inlineStartAttribute(threadData, _values, _source, _inElementList ,&_source ,&_b2);
          tmpMeta25 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _varName, _varKind, _varDirection, _varParallelism, _varType, _bind, _tplExp, _arrayDim, _source, _values1, _ts, _hideResult, _comment, _ct, _io, mmc_mk_boolean(_unreplaceable), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(_e));
          tmpMeta[0+0] = tmpMeta25;
          tmp1_c1 = (_b1 || _b2);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmp1_c1 = 0 /* false */;
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
  _outVar = tmpMeta[0+0];
  _inlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_inlined) { *out_inlined = _inlined; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVar(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inElementList, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outVar = NULL;
  _outVar = omc_BackendInline_inlineVar(threadData, _inVar, _inElementList, &_inlined);
  /* skip box _outVar; BackendDAE.Var */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVarOpt(threadData_t *threadData, modelica_metatype _inVarOption, modelica_metatype _fns, modelica_boolean *out_inlined)
{
  modelica_metatype _outVarOption = NULL;
  modelica_boolean _inlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarOption has no default value.
  // _inlined has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVarOption;
    {
      modelica_metatype _var = NULL;
      modelica_metatype _var2 = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _var2 has no default value.
      // _b has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_none();
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _var = tmpMeta6;
          /* Pattern matching succeeded */
          _var2 = omc_BackendInline_inlineVar(threadData, _var, _fns ,&_b);
          tmpMeta[0+0] = (referenceEq(_var, _var2)?_inVarOption:mmc_mk_some(_var2));
          tmp1_c1 = _b;
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
  _outVarOption = tmpMeta[0+0];
  _inlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_inlined) { *out_inlined = _inlined; }
  return _outVarOption;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVarOpt(threadData_t *threadData, modelica_metatype _inVarOption, modelica_metatype _fns, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outVarOption = NULL;
  _outVarOption = omc_BackendInline_inlineVarOpt(threadData, _inVarOption, _fns, &_inlined);
  /* skip box _outVarOption; Option<BackendDAE.Var> */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outVarOption;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInline_inlineVarOptArray(threadData_t *threadData, modelica_metatype _inVarArray, modelica_metatype _fns)
{
  modelica_boolean _oInlined;
  modelica_boolean _b;
  modelica_metatype _var = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oInlined = 0 /* false */;
  // _b has no default value.
  // _var has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_inVarArray);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _index;
    for(_index = ((modelica_integer) 1); in_range_integer(_index, tmp1, tmp3); _index += tmp2)
    {
      _var = arrayGet(_inVarArray,_index) /* DAE.ASUB */;

      _var = omc_BackendInline_inlineVarOpt(threadData, _var, _fns ,&_b);

      if(_b)
      {
        arrayUpdate(_inVarArray, _index, _var);
      }

      _oInlined = (_oInlined || _b);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oInlined;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVarOptArray(threadData_t *threadData, modelica_metatype _inVarArray, modelica_metatype _fns)
{
  modelica_boolean _oInlined;
  modelica_metatype out_oInlined;
  _oInlined = omc_BackendInline_inlineVarOptArray(threadData, _inVarArray, _fns);
  out_oInlined = mmc_mk_icon(_oInlined);
  return out_oInlined;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inElementList, modelica_boolean *out_inlined)
{
  modelica_metatype _outVariables = NULL;
  modelica_boolean _inlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVariables has no default value.
  // _inlined has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVariables;
    tmp4_2 = _inElementList;
    {
      modelica_metatype _fns = NULL;
      modelica_metatype _crefind = NULL;
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_metatype _vararr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fns has no default value.
      // _crefind has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _vararr has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          
          _crefind = tmpMeta6;
          _i3 = tmp9  /* pattern as ty=Integer */;
          _vararr = tmpMeta10;
          _i1 = tmp12  /* pattern as ty=Integer */;
          _i2 = tmp14  /* pattern as ty=Integer */;
          _fns = tmp4_2;
          /* Pattern matching succeeded */
          _inlined = omc_BackendInline_inlineVarOptArray(threadData, _vararr, _fns);
          tmpMeta15 = mmc_mk_box3(3, &BackendDAE_VariableArray_VARIABLE__ARRAY__desc, mmc_mk_integer(_i3), _vararr);
          tmpMeta16 = mmc_mk_box5(3, &BackendDAE_Variables_VARIABLES__desc, _crefind, tmpMeta15, mmc_mk_integer(_i1), mmc_mk_integer(_i2));
          tmpMeta[0+0] = tmpMeta16;
          tmp1_c1 = _inlined;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp17;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = omc_Flags_isSet(threadData, _OMC_LIT3);
          if (1 /* true */ != tmp17) goto goto_2;

          omc_Debug_trace(threadData, _OMC_LIT61);
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
  _outVariables = tmpMeta[0+0];
  _inlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_inlined) { *out_inlined = _inlined; }
  return _outVariables;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineVariables(threadData_t *threadData, modelica_metatype _inVariables, modelica_metatype _inElementList, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outVariables = NULL;
  _outVariables = omc_BackendInline_inlineVariables(threadData, _inVariables, _inElementList, &_inlined);
  /* skip box _outVariables; BackendDAE.Variables */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outVariables;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineWhenOps(threadData_t *threadData, modelica_metatype _inWhenOps, modelica_metatype _fns, modelica_boolean *out_inlined)
{
  modelica_metatype _outWhenOps = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean _inlined;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta40;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outWhenOps = tmpMeta1;
  _inlined = 0 /* false */;
  {
    modelica_metatype _whenOp;
    for (tmpMeta2 = _inWhenOps; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _whenOp = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _whenOp;
        {
          modelica_boolean _b;
          modelica_boolean _b2;
          modelica_metatype _e1 = NULL;
          modelica_metatype _e2 = NULL;
          modelica_metatype _level = NULL;
          modelica_metatype _cr = NULL;
          modelica_metatype _source = NULL;
          int tmp5;
          // _b has no default value.
          // _b2 has no default value.
          // _e1 has no default value.
          // _e2 has no default value.
          // _level has no default value.
          // _cr has no default value.
          // _source has no default value.
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp5_1))) {
            case 3: {
              modelica_metatype tmpMeta6;
              modelica_metatype tmpMeta7;
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_boolean tmp11;
              modelica_metatype tmpMeta12;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,3) == 0) goto tmp4_end;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
              _e1 = tmpMeta6;
              _e2 = tmpMeta7;
              _source = tmpMeta8;
              /* Pattern matching succeeded */
              _e2 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b ,NULL);

              tmp11 = (modelica_boolean)_b;
              if(tmp11)
              {
                tmpMeta10 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _e1, _e2, _source);
                tmpMeta12 = tmpMeta10;
              }
              else
              {
                tmpMeta12 = _whenOp;
              }
              tmpMeta9 = mmc_mk_cons(tmpMeta12, _outWhenOps);
              _outWhenOps = tmpMeta9;

              _inlined = (_inlined || _b);
              goto tmp4_done;
            }
            case 4: {
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_boolean tmp18;
              modelica_metatype tmpMeta19;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,1,3) == 0) goto tmp4_end;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
              _cr = tmpMeta13;
              _e2 = tmpMeta14;
              _source = tmpMeta15;
              /* Pattern matching succeeded */
              _e2 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b ,NULL);

              tmp18 = (modelica_boolean)_b;
              if(tmp18)
              {
                tmpMeta17 = mmc_mk_box4(4, &BackendDAE_WhenOperator_REINIT__desc, _cr, _e2, _source);
                tmpMeta19 = tmpMeta17;
              }
              else
              {
                tmpMeta19 = _whenOp;
              }
              tmpMeta16 = mmc_mk_cons(tmpMeta19, _outWhenOps);
              _outWhenOps = tmpMeta16;

              _inlined = (_inlined || _b);
              goto tmp4_done;
            }
            case 5: {
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_metatype tmpMeta25;
              modelica_boolean tmp26;
              modelica_metatype tmpMeta27;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,4) == 0) goto tmp4_end;
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
              tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
              tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 5));
              _e1 = tmpMeta20;
              _e2 = tmpMeta21;
              _level = tmpMeta22;
              _source = tmpMeta23;
              /* Pattern matching succeeded */
              _e1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b ,NULL);

              _e2 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b2 ,NULL);

              tmp26 = (modelica_boolean)(_b || _b2);
              if(tmp26)
              {
                tmpMeta25 = mmc_mk_box5(5, &BackendDAE_WhenOperator_ASSERT__desc, _e1, _e2, _level, _source);
                tmpMeta27 = tmpMeta25;
              }
              else
              {
                tmpMeta27 = _whenOp;
              }
              tmpMeta24 = mmc_mk_cons(tmpMeta27, _outWhenOps);
              _outWhenOps = tmpMeta24;

              _inlined = ((_inlined || _b) || _b2);
              goto tmp4_done;
            }
            case 6: {
              modelica_metatype tmpMeta28;
              modelica_metatype tmpMeta29;
              modelica_metatype tmpMeta30;
              modelica_metatype tmpMeta31;
              modelica_boolean tmp32;
              modelica_metatype tmpMeta33;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,3,2) == 0) goto tmp4_end;
              tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
              _e1 = tmpMeta28;
              _source = tmpMeta29;
              /* Pattern matching succeeded */
              _e1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b ,NULL);

              tmp32 = (modelica_boolean)_b;
              if(tmp32)
              {
                tmpMeta31 = mmc_mk_box3(6, &BackendDAE_WhenOperator_TERMINATE__desc, _e1, _source);
                tmpMeta33 = tmpMeta31;
              }
              else
              {
                tmpMeta33 = _whenOp;
              }
              tmpMeta30 = mmc_mk_cons(tmpMeta33, _outWhenOps);
              _outWhenOps = tmpMeta30;

              _inlined = (_inlined || _b);
              goto tmp4_done;
            }
            case 7: {
              modelica_metatype tmpMeta34;
              modelica_metatype tmpMeta35;
              modelica_metatype tmpMeta36;
              modelica_metatype tmpMeta37;
              modelica_boolean tmp38;
              modelica_metatype tmpMeta39;
              if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,4,2) == 0) goto tmp4_end;
              tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
              _e1 = tmpMeta34;
              _source = tmpMeta35;
              /* Pattern matching succeeded */
              _e1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b ,NULL);

              tmp38 = (modelica_boolean)_b;
              if(tmp38)
              {
                tmpMeta37 = mmc_mk_box3(7, &BackendDAE_WhenOperator_NORETCALL__desc, _e1, _source);
                tmpMeta39 = tmpMeta37;
              }
              else
              {
                tmpMeta39 = _whenOp;
              }
              tmpMeta36 = mmc_mk_cons(tmpMeta39, _outWhenOps);
              _outWhenOps = tmpMeta36;

              _inlined = (_inlined || _b);
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
  if (out_inlined) { *out_inlined = _inlined; }
  return _outWhenOps;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineWhenOps(threadData_t *threadData, modelica_metatype _inWhenOps, modelica_metatype _fns, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outWhenOps = NULL;
  modelica_metatype tmpMeta1;
  _outWhenOps = omc_BackendInline_inlineWhenOps(threadData, _inWhenOps, _fns, &_inlined);
  /* skip box _outWhenOps; list<BackendDAE.WhenOperator> */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outWhenOps;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineWhenEq(threadData_t *threadData, modelica_metatype _inWhenEquation, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype *out_outSource, modelica_boolean *out_inlined)
{
  modelica_metatype _outWhenEquation = NULL;
  modelica_metatype _outSource = NULL;
  modelica_boolean _inlined;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outWhenEquation has no default value.
  // _outSource has no default value.
  // _inlined has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inWhenEquation;
    {
      modelica_metatype _cond = NULL;
      modelica_metatype _source = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _b3;
      modelica_metatype _elsewe = NULL;
      modelica_metatype _oelsewe = NULL;
      modelica_metatype _whenStmtLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cond has no default value.
      // _source has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _b3 has no default value.
      // _elsewe has no default value.
      // _oelsewe has no default value.
      // _whenStmtLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _cond = tmpMeta6;
          _whenStmtLst = tmpMeta7;
          _oelsewe = tmpMeta8;
          /* Pattern matching succeeded */
          _cond = omc_Inline_inlineExp(threadData, _cond, _fns, _inSource ,&_source ,&_b1 ,NULL);

          _whenStmtLst = omc_BackendInline_inlineWhenOps(threadData, _whenStmtLst, _fns ,&_b2);

          if(isSome(_oelsewe))
          {
            /* Pattern-matching assignment */
            tmpMeta9 = _oelsewe;
            if (optionNone(tmpMeta9)) goto goto_2;
            tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
            _elsewe = tmpMeta10;

            _elsewe = omc_BackendInline_inlineWhenEq(threadData, _elsewe, _fns, _source ,&_source ,&_b3);

            _oelsewe = mmc_mk_some(_elsewe);
          }
          else
          {
            _oelsewe = mmc_mk_none();

            _b3 = 0 /* false */;
          }
          tmpMeta11 = mmc_mk_box4(3, &BackendDAE_WhenEquation_WHEN__STMTS__desc, _cond, _whenStmtLst, _oelsewe);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _source;
          tmp1_c2 = ((_b1 || _b2) || _b3);
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
  _outWhenEquation = tmpMeta[0+0];
  _outSource = tmpMeta[0+1];
  _inlined = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outSource) { *out_outSource = _outSource; }
  if (out_inlined) { *out_inlined = _inlined; }
  return _outWhenEquation;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineWhenEq(threadData_t *threadData, modelica_metatype _inWhenEquation, modelica_metatype _fns, modelica_metatype _inSource, modelica_metatype *out_outSource, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outWhenEquation = NULL;
  _outWhenEquation = omc_BackendInline_inlineWhenEq(threadData, _inWhenEquation, _fns, _inSource, out_outSource, &_inlined);
  /* skip box _outWhenEquation; BackendDAE.WhenEquation */
  /* skip box _outSource; DAE.ElementSource */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outWhenEquation;
}

DLLDirection
modelica_metatype omc_BackendInline_inlineEqs(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_boolean _iInlined, modelica_boolean *out_OInlined)
{
  modelica_metatype _outEqnsList = NULL;
  modelica_boolean _OInlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnsList has no default value.
  // _OInlined has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqnsList;
    {
      modelica_metatype _eqn = NULL;
      modelica_metatype _rest = NULL;
      modelica_boolean _inlined;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _rest has no default value.
      // _inlined has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmp1_c1 = _iInlined;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _eqn = omc_BackendInline_inlineEq(threadData, _eqn, _inFunctions ,&_inlined);
          tmpMeta8 = mmc_mk_cons(_eqn, _iAcc);
          /* Tail recursive call */
          _inEqnsList = _rest;
          _iAcc = tmpMeta8;
          _iInlined = (_inlined || _iInlined);
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
  _outEqnsList = tmpMeta[0+0];
  _OInlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_OInlined) { *out_OInlined = _OInlined; }
  return _outEqnsList;
}
modelica_metatype boxptr_BackendInline_inlineEqs(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_metatype _iInlined, modelica_metatype *out_OInlined)
{
  modelica_integer tmp1;
  modelica_boolean _OInlined;
  modelica_metatype _outEqnsList = NULL;
  tmp1 = mmc_unbox_integer(_iInlined);
  _outEqnsList = omc_BackendInline_inlineEqs(threadData, _inEqnsList, _inFunctions, _iAcc, tmp1, &_OInlined);
  /* skip box _outEqnsList; list<BackendDAE.Equation> */
  if (out_OInlined) { *out_OInlined = mmc_mk_icon(_OInlined); }
  return _outEqnsList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEqsLst(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_boolean _iInlined, modelica_boolean *out_OInlined)
{
  modelica_metatype _outEqnsList = NULL;
  modelica_boolean _OInlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqnsList has no default value.
  // _OInlined has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqnsList;
    {
      modelica_metatype _eqn = NULL;
      modelica_metatype _rest = NULL;
      modelica_boolean _inlined;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _rest has no default value.
      // _inlined has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmp1_c1 = _iInlined;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqn = omc_BackendInline_inlineEqs(threadData, _eqn, _inFunctions, tmpMeta8, 0 /* false */ ,&_inlined);
          tmpMeta9 = mmc_mk_cons(_eqn, _iAcc);
          /* Tail recursive call */
          _inEqnsList = _rest;
          _iAcc = tmpMeta9;
          _iInlined = (_inlined || _iInlined);
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
  _outEqnsList = tmpMeta[0+0];
  _OInlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_OInlined) { *out_OInlined = _OInlined; }
  return _outEqnsList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEqsLst(threadData_t *threadData, modelica_metatype _inEqnsList, modelica_metatype _inFunctions, modelica_metatype _iAcc, modelica_metatype _iInlined, modelica_metatype *out_OInlined)
{
  modelica_integer tmp1;
  modelica_boolean _OInlined;
  modelica_metatype _outEqnsList = NULL;
  tmp1 = mmc_unbox_integer(_iInlined);
  _outEqnsList = omc_BackendInline_inlineEqsLst(threadData, _inEqnsList, _inFunctions, _iAcc, tmp1, &_OInlined);
  /* skip box _outEqnsList; list<list<BackendDAE.Equation>> */
  if (out_OInlined) { *out_OInlined = mmc_mk_icon(_OInlined); }
  return _outEqnsList;
}

DLLDirection
modelica_metatype omc_BackendInline_inlineEq(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_boolean *out_inlined)
{
  modelica_metatype _outEquation = NULL;
  modelica_boolean _inlined;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  // _inlined has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEquation;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _e_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _e2_1 = NULL;
      modelica_integer _size;
      modelica_metatype _recordSize = NULL;
      modelica_metatype _explst = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _weq = NULL;
      modelica_metatype _weq_1 = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _dimSize = NULL;
      modelica_metatype _alg = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmts1 = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _b3;
      modelica_metatype _crefExpand = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _eqn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _e_1 has no default value.
      // _e1 has no default value.
      // _e1_1 has no default value.
      // _e2 has no default value.
      // _e2_1 has no default value.
      // _size has no default value.
      // _recordSize has no default value.
      // _explst has no default value.
      // _cref has no default value.
      // _weq has no default value.
      // _weq_1 has no default value.
      // _source has no default value.
      // _dimSize has no default value.
      // _alg has no default value.
      // _stmts has no default value.
      // _stmts1 has no default value.
      // _eqns has no default value.
      // _eqnslst has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _b3 has no default value.
      // _crefExpand has no default value.
      // _attr has no default value.
      // _eqn has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _source = tmpMeta8;
          _attr = tmpMeta9;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b1 ,NULL);

          _e2_1 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b2 ,NULL);

          /* Pattern-matching assignment */
          tmp10 = (_b1 || _b2);
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta11 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e1_1, _e2_1, _source, _attr);
          tmpMeta[0+0] = tmpMeta11;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _dimSize = tmpMeta12;
          _e1 = tmpMeta13;
          _e2 = tmpMeta14;
          _source = tmpMeta15;
          _attr = tmpMeta16;
          _recordSize = tmpMeta17;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b1 ,NULL);

          _e2_1 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b2 ,NULL);

          /* Pattern-matching assignment */
          tmp18 = (_b1 || _b2);
          if (1 /* true */ != tmp18) goto goto_2;

          { /* match expression */
            modelica_metatype tmp22_1;modelica_metatype tmp22_2;
            tmp22_1 = _e1_1;
            tmp22_2 = _e2_1;
            {
              volatile mmc_switch_type tmp22;
              int tmp23;
              tmp22 = 0;
              for (; tmp22 < 2; tmp22++) {
                switch (MMC_SWITCH_CAST(tmp22)) {
                case 0: {
                  modelica_metatype tmpMeta24;
                  modelica_metatype tmpMeta25;
                  modelica_metatype tmpMeta26;
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_metatype tmpMeta30;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp22_1,16,3) == 0) goto tmp21_end;
                  tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp22_1), 4));
                  if (listEmpty(tmpMeta24)) goto tmp21_end;
                  tmpMeta25 = MMC_CAR(tmpMeta24);
                  tmpMeta26 = MMC_CDR(tmpMeta24);
                  if (!listEmpty(tmpMeta26)) goto tmp21_end;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp22_2,16,3) == 0) goto tmp21_end;
                  tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp22_2), 4));
                  if (listEmpty(tmpMeta27)) goto tmp21_end;
                  tmpMeta28 = MMC_CAR(tmpMeta27);
                  tmpMeta29 = MMC_CDR(tmpMeta27);
                  if (!listEmpty(tmpMeta29)) goto tmp21_end;
                  _e1 = tmpMeta25;
                  _e2 = tmpMeta28;
                  /* Pattern matching succeeded */
                  tmpMeta30 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e1, _e2, _source, _attr);
                  tmpMeta19 = tmpMeta30;
                  goto tmp21_done;
                }
                case 1: {
                  modelica_metatype tmpMeta31;
                  
                  /* Pattern matching succeeded */
                  tmpMeta31 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, _dimSize, _e1_1, _e2_1, _source, _attr, _recordSize);
                  tmpMeta19 = tmpMeta31;
                  goto tmp21_done;
                }
                }
                goto tmp21_end;
                tmp21_end: ;
              }
              goto goto_20;
              goto_20:;
              goto goto_2;
              goto tmp21_done;
              tmp21_done:;
            }
          }
          _eqn = tmpMeta19;
          tmpMeta[0+0] = _eqn;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,6) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _e = tmpMeta32;
          _e1 = tmpMeta33;
          _e2 = tmpMeta34;
          _eqn = tmpMeta35;
          _source = tmpMeta36;
          _attr = tmpMeta37;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta39 = omc_BackendInline_inlineEq(threadData, _eqn, _fns, &tmp38);
          _eqn = tmpMeta39;
          if (1 /* true */ != tmp38) goto goto_2;
          tmpMeta40 = mmc_mk_box7(11, &BackendDAE_Equation_FOR__EQUATION__desc, _e, _e1, _e2, _eqn, _source, _attr);
          tmpMeta[0+0] = tmpMeta40;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_boolean tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _cref = tmpMeta41;
          _e = tmpMeta42;
          _source = tmpMeta43;
          _attr = tmpMeta44;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta47 = omc_Inline_inlineExp(threadData, _e, _fns, _source, &tmpMeta45, &tmp46, NULL);
          _e_1 = tmpMeta47;
          if (1 /* true */ != tmp46) goto goto_2;
          _source = tmpMeta45;
          tmpMeta48 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cref, _e_1, _source, _attr);
          tmpMeta[0+0] = tmpMeta48;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_boolean tmp53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e = tmpMeta49;
          _source = tmpMeta50;
          _attr = tmpMeta51;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta54 = omc_Inline_inlineExp(threadData, _e, _fns, _source, &tmpMeta52, &tmp53, NULL);
          _e_1 = tmpMeta54;
          if (1 /* true */ != tmp53) goto goto_2;
          _source = tmpMeta52;
          tmpMeta55 = mmc_mk_box4(6, &BackendDAE_Equation_RESIDUAL__EQUATION__desc, _e_1, _source, _attr);
          tmpMeta[0+0] = tmpMeta55;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta56;
          modelica_integer tmp57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_boolean tmp63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp57 = mmc_unbox_integer(tmpMeta56);
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _size = tmp57  /* pattern as ty=Integer */;
          _stmts = tmpMeta59;
          _source = tmpMeta60;
          _crefExpand = tmpMeta61;
          _attr = tmpMeta62;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta65 = omc_Inline_inlineStatements(threadData, _stmts, _fns, tmpMeta64, 0 /* false */, &tmp63);
          _stmts1 = tmpMeta65;
          if (1 /* true */ != tmp63) goto goto_2;

          tmpMeta66 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _stmts1);
          _alg = tmpMeta66;
          tmpMeta67 = mmc_mk_box6(7, &BackendDAE_Equation_ALGORITHM__desc, mmc_mk_integer(_size), _alg, _source, _crefExpand, _attr);
          tmpMeta[0+0] = tmpMeta67;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta68;
          modelica_integer tmp69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_boolean tmp74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp69 = mmc_unbox_integer(tmpMeta68);
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _size = tmp69  /* pattern as ty=Integer */;
          _weq = tmpMeta70;
          _source = tmpMeta71;
          _attr = tmpMeta72;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta75 = omc_BackendInline_inlineWhenEq(threadData, _weq, _fns, _source, &tmpMeta73, &tmp74);
          _weq_1 = tmpMeta75;
          if (1 /* true */ != tmp74) goto goto_2;
          _source = tmpMeta73;
          tmpMeta76 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(_size), _weq_1, _source, _attr);
          tmpMeta[0+0] = tmpMeta76;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta77;
          modelica_integer tmp78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_boolean tmp83;
          modelica_metatype tmpMeta84;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp78 = mmc_unbox_integer(tmpMeta77);
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _size = tmp78  /* pattern as ty=Integer */;
          _e1 = tmpMeta79;
          _e2 = tmpMeta80;
          _source = tmpMeta81;
          _attr = tmpMeta82;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1_1 = omc_Inline_inlineExp(threadData, _e1, _fns, _source ,&_source ,&_b1 ,NULL);

          _e2_1 = omc_Inline_inlineExp(threadData, _e2, _fns, _source ,&_source ,&_b2 ,NULL);

          /* Pattern-matching assignment */
          tmp83 = (_b1 || _b2);
          if (1 /* true */ != tmp83) goto goto_2;
          tmpMeta84 = mmc_mk_box6(9, &BackendDAE_Equation_COMPLEX__EQUATION__desc, mmc_mk_integer(_size), _e1_1, _e2_1, _source, _attr);
          tmpMeta[0+0] = tmpMeta84;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_boolean tmp92;
          modelica_metatype tmpMeta93;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _explst = tmpMeta85;
          _eqnslst = tmpMeta86;
          _eqns = tmpMeta87;
          _source = tmpMeta88;
          _attr = tmpMeta89;
          /* Pattern matching succeeded */
          _explst = omc_Inline_inlineExps(threadData, _explst, _fns, _source ,&_source ,&_b1);

          tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqnslst = omc_BackendInline_inlineEqsLst(threadData, _eqnslst, _fns, tmpMeta90, 0 /* false */ ,&_b2);

          tmpMeta91 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_BackendInline_inlineEqs(threadData, _eqns, _fns, tmpMeta91, 0 /* false */ ,&_b3);

          /* Pattern-matching assignment */
          tmp92 = ((_b1 || _b2) || _b3);
          if (1 /* true */ != tmp92) goto goto_2;
          tmpMeta93 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, _explst, _eqnslst, _eqns, _source, _attr);
          tmpMeta[0+0] = tmpMeta93;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEquation;
          tmp1_c1 = 0 /* false */;
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
      if (++tmp4 < 10) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEquation = tmpMeta[0+0];
  _inlined = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_inlined) { *out_inlined = _inlined; }
  return _outEquation;
}
modelica_metatype boxptr_BackendInline_inlineEq(threadData_t *threadData, modelica_metatype _inEquation, modelica_metatype _fns, modelica_metatype *out_inlined)
{
  modelica_boolean _inlined;
  modelica_metatype _outEquation = NULL;
  _outEquation = omc_BackendInline_inlineEq(threadData, _inEquation, _fns, &_inlined);
  /* skip box _outEquation; BackendDAE.Equation */
  if (out_inlined) { *out_inlined = mmc_mk_icon(_inlined); }
  return _outEquation;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendInline_inlineEquationOptArray(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns)
{
  modelica_boolean _oInlined;
  modelica_metatype _eqn = NULL;
  modelica_boolean _inlined;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oInlined = 0 /* false */;
  // _eqn has no default value.
  // _inlined has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = omc_ExpandableArray_getLastUsedIndex(threadData, _inEqnArray);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if(omc_ExpandableArray_occupied(threadData, _i, _inEqnArray))
      {
        _eqn = omc_BackendInline_inlineEq(threadData, omc_ExpandableArray_get(threadData, _i, _inEqnArray), _fns ,&_inlined);

        if(_inlined)
        {
          omc_ExpandableArray_update(threadData, _i, _eqn, _inEqnArray);

          _oInlined = 1 /* true */;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oInlined;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationOptArray(threadData_t *threadData, modelica_metatype _inEqnArray, modelica_metatype _fns)
{
  modelica_boolean _oInlined;
  modelica_metatype out_oInlined;
  _oInlined = omc_BackendInline_inlineEquationOptArray(threadData, _inEqnArray, _fns);
  out_oInlined = mmc_mk_icon(_oInlined);
  return out_oInlined;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationArray(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _inElementList, modelica_boolean *out_oInlined)
{
  modelica_metatype _outEquationArray = NULL;
  modelica_boolean _oInlined;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEquationArray = _inEquationArray;
  // _oInlined has no default value.
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
          /* Pattern matching succeeded */
          _oInlined = omc_BackendInline_inlineEquationOptArray(threadData, _outEquationArray, _inElementList);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            omc_Debug_trace(threadData, _OMC_LIT62);
          }

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
  if (out_oInlined) { *out_oInlined = _oInlined; }
  return _outEquationArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendInline_inlineEquationArray(threadData_t *threadData, modelica_metatype _inEquationArray, modelica_metatype _inElementList, modelica_metatype *out_oInlined)
{
  modelica_boolean _oInlined;
  modelica_metatype _outEquationArray = NULL;
  _outEquationArray = omc_BackendInline_inlineEquationArray(threadData, _inEquationArray, _inElementList, &_oInlined);
  /* skip box _outEquationArray; ExpandableArray<BackendDAE.Equation> */
  if (out_oInlined) { *out_oInlined = mmc_mk_icon(_oInlined); }
  return _outEquationArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineEquationSystem(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _tpl)
{
  modelica_metatype _oeqs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oeqs = _eqs;
  omc_BackendInline_inlineVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oeqs), 2))), _tpl, NULL);

  omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oeqs), 3))), _tpl, NULL);

  omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_oeqs), 10))), _tpl, NULL);
  _return: OMC_LABEL_UNUSED
  return _oeqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendInline_inlineCalls(threadData_t *threadData, modelica_metatype _inITLst, modelica_metatype _inBackendDAE)
{
  modelica_metatype _outBackendDAE = NULL;
  modelica_metatype _tpl = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _shared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBackendDAE has no default value.
  // _tpl has no default value.
  // _eqs has no default value.
  // _shared has no default value.
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
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBackendDAE), 3)));

          _eqs = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBackendDAE), 2)));

          tmpMeta5 = mmc_mk_box2(0, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12)))), _inITLst);
          _tpl = tmpMeta5;

          _eqs = omc_List_map1(threadData, _eqs, boxvar_BackendInline_inlineEquationSystem, _tpl);

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_BackendInline_inlineVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 2))), _tpl, NULL);
          _shared = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[4] = omc_BackendInline_inlineVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 4))), _tpl, NULL);
          _shared = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 6))), _tpl, NULL);
          _shared = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(22));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = omc_BackendInline_inlineEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))), _tpl, NULL);
          _shared = tmpMeta9;

          omc_BackendInline_inlineEventInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 13))), _tpl);

          tmpMeta10 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqs, _shared);
          _outBackendDAE = tmpMeta10;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT3))
          {
            omc_Debug_traceln(threadData, _OMC_LIT63);
          }

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
  return _outBackendDAE;
}

DLLDirection
modelica_metatype omc_BackendInline_normalInlineFunction(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  if((omc_Flags_getConfigEnum(threadData, _OMC_LIT47) == ((modelica_integer) 1)))
  {
    _outDAE = omc_BackendInline_inlineCalls(threadData, _OMC_LIT65, _inDAE);
  }
  else
  {
    _outDAE = omc_BackendInline_inlineCallsBDAE(threadData, _OMC_LIT65, _inDAE);
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_BackendInline_lateInlineFunction(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = omc_BackendInline_inlineCalls(threadData, _OMC_LIT68, _inDAE);
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

