#include "omc_simulation_settings.h"
#include "EvaluateParameter.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,4) {&Absyn_Msg_NO__MSG__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " has unevaluateable fixed attribute value \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,43,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "\" use values from start attribute(s) \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,38,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(6000)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&AvlSetInt_Tree_EMPTY__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "Cannot evaluate Variable \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,26,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "evalParameterDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,17,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Dumps information for evaluating parameters."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,44,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(156)),_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\nBEGINNING of preOptModule 'evaluateParameters'\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,130,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "DAE before evaluating parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,32,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n================================================================================\nThere is nothing to do. All parameters are already evaluated.\n================================================================================\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,226,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "evaluateFinalParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,23,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Evaluates all the final parameters in addition to parameters with annotation(Evaluate=true)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,92,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT16,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT17,_OMC_LIT18,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "evaluateProtectedParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,27,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Evaluates all the protected parameters in addition to parameters with annotation(Evaluate=true)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,96,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(100)),_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT17,_OMC_LIT18,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\nStructural parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,88,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\nStructural parameters, final parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,106,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "\nStructural parameters, protected parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,110,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\nStructural parameters, final parameters, protected parameters and parameters with annotation(Evaluate=true) will be evaluated.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,128,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "\nSTART evaluating parameters:\n================================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,111,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Number of parameters: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,22,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,1,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Number of parameters selected for evaluation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,46,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Selected parameters for evaluation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,36,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,1,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\n\nAfter evaluating the selected parameters:\n================================================================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,125,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\nAll replacements:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,18,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "\nReplacements that will be replaced in the DAE:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,47,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "globalKnownVars"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,15,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "\nmark: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,7,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "markarr: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,9,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\n\nAfter sorting parameters:\n================================================================================\nOrder:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,116,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\n\nAfter replacing the evaluated parameters in parameter bindings:\n================================================================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,146,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n\nAfter replacing the evaluated parameters in variable bindings and start attributes:\n================================================================================"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,166,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,2,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "replaceEvaluatedParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,26,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Replaces all the evaluated parameters in the DAE."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,49,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(101)),_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT17,_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Evaluated parameters are not replaced in the DAE. Use --replaceEvaluatedParameters=true to replace them in the DAE."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,115,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\nThere is no evaluated parameter.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,34,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "DAE after replacing the evaluated parameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,44,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "evaluateAllParameters"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,21,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Evaluates all parameters if set, except the ones that have annotation(Evaluate = false)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,88,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(26)),_OMC_LIT51,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\nEND of preOptModule 'evaluateParameters'\n********************************************************************************\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,124,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#include "util/modelica.h"

#include "EvaluateParameter_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystemEqns(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystemEqns,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersSystemEqns,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersSystemEqns MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystemEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inRepl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersEqns,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersEqns,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersEqns MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersEqns)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParameterTraverser(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParameterTraverser,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParameterTraverser,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParameterTraverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystem(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystem,2,0) {(void*) boxptr_EvaluateParameter_replaceEvaluatedParametersSystem,0}};
#define boxvar_EvaluateParameter_replaceEvaluatedParametersSystem MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceEvaluatedParametersSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseExpVisitorWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseExpVisitorWrapper,2,0) {(void*) boxptr_EvaluateParameter_traverseExpVisitorWrapper,0}};
#define boxvar_EvaluateParameter_traverseExpVisitorWrapper MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseExpVisitorWrapper)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_addConstExpReplacement(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_addConstExpReplacement,2,0) {(void*) boxptr_EvaluateParameter_addConstExpReplacement,0}};
#define boxvar_EvaluateParameter_addConstExpReplacement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_addConstExpReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameterBindings,2,0) {(void*) boxptr_EvaluateParameter_evaluateParameterBindings,0}};
#define boxvar_EvaluateParameter_evaluateParameterBindings MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameterBindings)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_integer _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_boolean _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_integer *out_oMark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_metatype _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_metatype _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_metatype *out_oMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseParameterSorted,2,0) {(void*) boxptr_EvaluateParameter_traverseParameterSorted,0}};
#define boxvar_EvaluateParameter_traverseParameterSorted MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_traverseParameterSorted)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceCrefWithBindStartExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceCrefWithBindStartExp,2,0) {(void*) boxptr_EvaluateParameter_replaceCrefWithBindStartExp,0}};
#define boxvar_EvaluateParameter_replaceCrefWithBindStartExp MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_replaceCrefWithBindStartExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_boolean _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_metatype _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttributeReportWarning,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttributeReportWarning MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttributeReportWarning)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute1,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttribute1,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttribute1 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute,2,0) {(void*) boxptr_EvaluateParameter_evaluateFixedAttribute,0}};
#define boxvar_EvaluateParameter_evaluateFixedAttribute MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateFixedAttribute)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameter,2,0) {(void*) boxptr_EvaluateParameter_evaluateParameter,0}};
#define boxvar_EvaluateParameter_evaluateParameter MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateParameter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameter,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameter,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameter MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameter)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters1,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters1,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters1 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_integer _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_metatype _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters0,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters0,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters0 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters,2,0) {(void*) boxptr_EvaluateParameter_evaluateSelectedParameters,0}};
#define boxvar_EvaluateParameter_evaluateSelectedParameters MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_evaluateSelectedParameters)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_getParameterAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateParameter_getParameterAdjacencyMatrix,2,0) {(void*) boxptr_EvaluateParameter_getParameterAdjacencyMatrix,0}};
#define boxvar_EvaluateParameter_getParameterAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_EvaluateParameter_getParameterAdjacencyMatrix)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystemEqns(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inRepl)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _lsteqns = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _osyst = _isyst;
  // _lsteqns has no default value.
  // _b has no default value.
  _lsteqns = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 3))));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[3] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _osyst = tmpMeta1;

    _osyst = omc_BackendDAEUtil_clearEqSyst(threadData, _osyst);
  }

  _lsteqns = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_osyst), 10))));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(11));
    memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_osyst), 11*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[10] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _osyst = tmpMeta2;
  }
  _return: OMC_LABEL_UNUSED
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _inRepl)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _lsteqns = NULL;
  modelica_metatype _systs = NULL;
  modelica_boolean _b;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _lsteqns has no default value.
  // _systs has no default value.
  // _b has no default value.
  // _shared has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDAE;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _systs = tmpMeta2;
  _shared = tmpMeta3;

  _lsteqns = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 6))));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta4 = MMC_TAGPTR(mmc_alloc_words(22));
    memcpy(MMC_UNTAGPTR(tmpMeta4), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta4))[6] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _shared = tmpMeta4;
  }

  _lsteqns = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))));

  _lsteqns = omc_BackendVarTransform_replaceEquations(threadData, _lsteqns, _inRepl, mmc_mk_none() ,&_b);

  if(_b)
  {
    tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(22));
    memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[7] = omc_BackendEquation_listEquation(threadData, _lsteqns);
    _shared = tmpMeta5;
  }

  _systs = omc_List_map1(threadData, _systs, boxvar_EvaluateParameter_replaceEvaluatedParametersSystemEqns, _inRepl);

  tmpMeta6 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParameterTraverser(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _ieqns = NULL;
      modelica_metatype _cache = NULL;
      modelica_metatype _graph = NULL;
      modelica_integer _mark;
      modelica_metatype _markarr = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _replEvaluate = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_boolean _b;
      modelica_boolean _isInitial;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _globalKnownVars has no default value.
      // _m has no default value.
      // _ieqns has no default value.
      // _cache has no default value.
      // _graph has no default value.
      // _mark has no default value.
      // _markarr has no default value.
      // _repl has no default value.
      // _replEvaluate has no default value.
      // _v has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _b has no default value.
      // _isInitial has no default value.
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
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 9));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          _v = tmp4_1;
          _e = tmpMeta7;
          _attr = tmpMeta8;
          _globalKnownVars = tmpMeta9;
          _m = tmpMeta10;
          _ieqns = tmpMeta11;
          _cache = tmpMeta12;
          _graph = tmpMeta13;
          _mark = tmp15  /* pattern as ty=Integer */;
          _markarr = tmpMeta16;
          _isInitial = tmp18  /* pattern as ty=Boolean */;
          _repl = tmpMeta19;
          _replEvaluate = tmpMeta20;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta22 = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none(), &tmp21);
          _e1 = tmpMeta22;
          if (1 /* true */ != tmp21) goto goto_2;

          _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

          _v = omc_BackendVariable_setBindExp(threadData, _v, mmc_mk_some(_e1));

          /* Pattern-matching tuple assignment */
          tmpMeta27 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta28 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta27, &tmpMeta23);
          _attr = tmpMeta28;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          _replEvaluate = tmpMeta24;
          _b = tmp26  /* pattern as ty=Boolean */;

          _v = (_b?omc_BackendVariable_setVarAttributes(threadData, _v, _attr):_v);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta29 = mmc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, mmc_mk_integer(_mark), _markarr, mmc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta29;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_integer tmp40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_integer tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp40 = mmc_unbox_integer(tmpMeta39);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 9));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          _v = tmp4_1;
          _attr = tmpMeta30;
          _globalKnownVars = tmpMeta31;
          _m = tmpMeta32;
          _ieqns = tmpMeta33;
          _cache = tmpMeta34;
          _graph = tmpMeta35;
          _mark = tmp37  /* pattern as ty=Integer */;
          _markarr = tmpMeta38;
          _isInitial = tmp40  /* pattern as ty=Boolean */;
          _repl = tmpMeta41;
          _replEvaluate = tmpMeta42;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta47 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta48 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta47, &tmpMeta43);
          _attr = tmpMeta48;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
          tmp46 = mmc_unbox_integer(tmpMeta45);
          if (1 /* true */ != tmp46) goto goto_2;
          _replEvaluate = tmpMeta44;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta49 = mmc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, mmc_mk_integer(_mark), _markarr, mmc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta49;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_integer tmp59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp59 = mmc_unbox_integer(tmpMeta58);
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 9));
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          _v = tmp4_1;
          _globalKnownVars = tmpMeta50;
          _m = tmpMeta51;
          _ieqns = tmpMeta52;
          _cache = tmpMeta53;
          _graph = tmpMeta54;
          _mark = tmp56  /* pattern as ty=Integer */;
          _markarr = tmpMeta57;
          _isInitial = tmp59  /* pattern as ty=Boolean */;
          _repl = tmpMeta60;
          _replEvaluate = tmpMeta61;
          /* Pattern matching succeeded */
          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 0 /* false */, _globalKnownVars, _m, _ieqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);
          tmpMeta62 = mmc_mk_box10(0, _globalKnownVars, _m, _ieqns, _cache, _graph, mmc_mk_integer(_mark), _markarr, mmc_mk_boolean(_isInitial), _repl, _replEvaluate);
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta62;
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
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceEvaluatedParametersSystem(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _osyst = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _osyst has no default value.
  // _outTypeA has no default value.
  // _vars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _vars = tmpMeta2;

  _vars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser, _inTypeA ,&_outTypeA);

  _osyst = omc_BackendDAEUtil_setEqSystVars(threadData, _isyst, _vars);
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _osyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseExpVisitorWrapper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _repl = NULL;
      modelica_boolean _b;
      modelica_boolean _b1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _repl has no default value.
      // _b has no default value.
      // _b1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _exp = tmp4_1;
          _repl = tmpMeta6;
          _b = tmp8  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, mmc_mk_none() ,&_b1);
          tmpMeta9 = mmc_mk_box2(0, _repl, mmc_mk_boolean((_b || _b1)));
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_addConstExpReplacement(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _cr, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  if(omc_Expression_isConst(threadData, _inExp))
  {
    _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _inExp, mmc_mk_none());

    _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _inExp, mmc_mk_none());
  }
  _return: OMC_LABEL_UNUSED
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  return _repl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _hideResultExp = NULL;
      modelica_metatype _hideResultOpt = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _exps has no default value.
      // _attr has no default value.
      // _value has no default value.
      // _hideResultExp has no default value.
      // _hideResultOpt has no default value.
      // _b has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 5; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 13));
          
          _v = tmp3_1;
          _cr = tmpMeta5;
          _e = tmpMeta8;
          _hideResultOpt = tmpMeta9;
          /* Pattern matching succeeded */
          if(((omc_Expression_isConst(threadData, _e) && omc_BackendVariable_isFinalVar(threadData, _v)) && omc_BackendVariable_varFixed(threadData, _v)))
          {
            _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);
          }
          else
          {
            _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

            if(_b)
            {
              _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

              { /* match expression */
                modelica_metatype tmp13_1;
                tmp13_1 = _e;
                {
                  volatile mmc_switch_type tmp13;
                  int tmp14;
                  tmp13 = 0;
                  for (; tmp13 < 3; tmp13++) {
                    switch (MMC_SWITCH_CAST(tmp13)) {
                    case 0: {
                      modelica_metatype tmpMeta15;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,13,3) == 0) goto tmp12_end;
                      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 3));
                      
                      _exps = tmpMeta15;
                      /* Pattern matching succeeded */
                      /* Check guard condition after assignments */
                      if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp12_end;
                      omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                      tmpMeta10 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                      goto tmp12_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta16;
                      modelica_metatype tmpMeta17;
                      if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,21,2) == 0) goto tmp12_end;
                      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 2));
                      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,13,3) == 0) goto tmp12_end;
                      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
                      
                      _exps = tmpMeta17;
                      /* Pattern matching succeeded */
                      /* Check guard condition after assignments */
                      if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp12_end;
                      omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                      tmpMeta10 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                      goto tmp12_done;
                    }
                    case 2: {
                      
                      /* Pattern matching succeeded */
                      tmpMeta10 = _e;
                      goto tmp12_done;
                    }
                    }
                    goto tmp12_end;
                    tmp12_end: ;
                  }
                  goto goto_11;
                  goto_11:;
                  goto goto_1;
                  goto tmp12_done;
                  tmp12_done:;
                }
              }
              _e = tmpMeta10;

              _v = omc_BackendVariable_setBindExp(threadData, _v, mmc_mk_some(_e));

              if((!omc_BackendVariable_hasVarEvaluateAnnotationFalse(threadData, _v)))
              {
                _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);

                _v = (omc_Expression_isConst(threadData, _e)?omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */):_v);
              }
            }
          }

          /* Pattern-matching tuple assignment */
          tmpMeta20 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta21 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 11))), boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta20, &tmpMeta18);
          _attr = tmpMeta21;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          _replEvaluate = tmpMeta19;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp26_1;
            tmp26_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp26;
              int tmp27;
              tmp26 = 0;
              for (; tmp26 < 2; tmp26++) {
                switch (MMC_SWITCH_CAST(tmp26)) {
                case 0: {
                  modelica_metatype tmpMeta28;
                  if (optionNone(tmp26_1)) goto tmp25_end;
                  tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp26_1), 1));
                  _hideResultExp = tmpMeta28;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta23 = mmc_mk_some(_hideResultExp);
                  goto tmp25_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13)));
                  goto tmp25_done;
                }
                }
                goto tmp25_end;
                tmp25_end: ;
              }
              goto goto_24;
              goto_24:;
              goto goto_1;
              goto tmp25_done;
              tmp25_done:;
            }
          }
          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[13] = tmpMeta23;
          _v = tmpMeta22;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,7,0) == 0) goto tmp2_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 13));
          
          _v = tmp3_1;
          _cr = tmpMeta29;
          _attr = tmpMeta31;
          _hideResultOpt = tmpMeta32;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp33 = omc_BackendVariable_varFixed(threadData, _var);
          if (1 /* true */ != tmp33) goto goto_1;

          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

          if(_b)
          {
            _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

            { /* match expression */
              modelica_metatype tmp37_1;
              tmp37_1 = _e;
              {
                volatile mmc_switch_type tmp37;
                int tmp38;
                tmp37 = 0;
                for (; tmp37 < 3; tmp37++) {
                  switch (MMC_SWITCH_CAST(tmp37)) {
                  case 0: {
                    modelica_metatype tmpMeta39;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp37_1,13,3) == 0) goto tmp36_end;
                    tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp37_1), 3));
                    
                    _exps = tmpMeta39;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp36_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta34 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp36_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta40;
                    modelica_metatype tmpMeta41;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp37_1,21,2) == 0) goto tmp36_end;
                    tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp37_1), 2));
                    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,13,3) == 0) goto tmp36_end;
                    tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 3));
                    
                    _exps = tmpMeta41;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp36_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta34 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp36_done;
                  }
                  case 2: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta34 = _e;
                    goto tmp36_done;
                  }
                  }
                  goto tmp36_end;
                  tmp36_end: ;
                }
                goto goto_35;
                goto_35:;
                goto goto_1;
                goto tmp36_done;
                tmp36_done:;
              }
            }
            _e = tmpMeta34;

            _v = omc_BackendVariable_setVarStartValue(threadData, _var, _e);

            _repl = omc_EvaluateParameter_addConstExpReplacement(threadData, _e, _cr, _repl, _replEvaluate ,&_replEvaluate);

            _v = (omc_Expression_isConst(threadData, _e)?omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */):_v);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta44 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta45 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta44, &tmpMeta42);
          _attr = tmpMeta45;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 1));
          _replEvaluate = tmpMeta43;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp50_1;
            tmp50_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp50;
              int tmp51;
              tmp50 = 0;
              for (; tmp50 < 2; tmp50++) {
                switch (MMC_SWITCH_CAST(tmp50)) {
                case 0: {
                  modelica_metatype tmpMeta52;
                  if (optionNone(tmp50_1)) goto tmp49_end;
                  tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp50_1), 1));
                  _hideResultExp = tmpMeta52;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta47 = mmc_mk_some(_hideResultExp);
                  goto tmp49_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta47 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13)));
                  goto tmp49_done;
                }
                }
                goto tmp49_end;
                tmp49_end: ;
              }
              goto goto_48;
              goto_48:;
              goto goto_1;
              goto tmp49_done;
              tmp49_done:;
            }
          }
          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[13] = tmpMeta47;
          _v = tmpMeta46;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta53)) goto tmp2_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 1));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 13));
          
          _v = tmp3_1;
          _e = tmpMeta54;
          _hideResultOpt = tmpMeta55;
          /* Pattern matching succeeded */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _replEvaluate, mmc_mk_none() ,&_b);

          if(_b)
          {
            _e = omc_ExpressionSimplify_simplify(threadData, _e, NULL);

            { /* match expression */
              modelica_metatype tmp59_1;
              tmp59_1 = _e;
              {
                volatile mmc_switch_type tmp59;
                int tmp60;
                tmp59 = 0;
                for (; tmp59 < 3; tmp59++) {
                  switch (MMC_SWITCH_CAST(tmp59)) {
                  case 0: {
                    modelica_metatype tmpMeta61;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp59_1,13,3) == 0) goto tmp58_end;
                    tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp59_1), 3));
                    
                    _exps = tmpMeta61;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp58_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta56 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp58_done;
                  }
                  case 1: {
                    modelica_metatype tmpMeta62;
                    modelica_metatype tmpMeta63;
                    if (mmc__uniontype__metarecord__typedef__equal(tmp59_1,21,2) == 0) goto tmp58_end;
                    tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp59_1), 2));
                    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta62,13,3) == 0) goto tmp58_end;
                    tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 3));
                    
                    _exps = tmpMeta63;
                    /* Pattern matching succeeded */
                    /* Check guard condition after assignments */
                    if (!omc_Expression_isConstWorkList(threadData, _exps)) goto tmp58_end;
                    omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);
                    tmpMeta56 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());
                    goto tmp58_done;
                  }
                  case 2: {
                    
                    /* Pattern matching succeeded */
                    tmpMeta56 = _e;
                    goto tmp58_done;
                  }
                  }
                  goto tmp58_end;
                  tmp58_end: ;
                }
                goto goto_57;
                goto_57:;
                goto goto_1;
                goto tmp58_done;
                tmp58_done:;
              }
            }
            _e = tmpMeta56;

            _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e));
          }

          /* Pattern-matching tuple assignment */
          tmpMeta66 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta67 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 11))), boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta66, &tmpMeta64);
          _attr = tmpMeta67;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 1));
          _replEvaluate = tmpMeta65;

          _v = omc_BackendVariable_setVarAttributes(threadData, _v, _attr);

          { /* match expression */
            modelica_metatype tmp72_1;
            tmp72_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp72;
              int tmp73;
              tmp72 = 0;
              for (; tmp72 < 2; tmp72++) {
                switch (MMC_SWITCH_CAST(tmp72)) {
                case 0: {
                  modelica_metatype tmpMeta74;
                  if (optionNone(tmp72_1)) goto tmp71_end;
                  tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp72_1), 1));
                  _hideResultExp = tmpMeta74;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta69 = mmc_mk_some(_hideResultExp);
                  goto tmp71_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta69 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13)));
                  goto tmp71_done;
                }
                }
                goto tmp71_end;
                tmp71_end: ;
              }
              goto goto_70;
              goto_70:;
              goto goto_1;
              goto tmp71_done;
              tmp71_done:;
            }
          }
          tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[13] = tmpMeta69;
          _v = tmpMeta68;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_integer tmp80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 13));
          
          _attr = tmpMeta75;
          _hideResultOpt = tmpMeta76;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta81 = mmc_mk_box2(0, _replEvaluate, mmc_mk_boolean(0 /* false */));
          tmpMeta82 = omc_BackendDAEUtil_traverseBackendDAEVarAttr(threadData, _attr, boxvar_EvaluateParameter_traverseExpVisitorWrapper, tmpMeta81, &tmpMeta77);
          _attr = tmpMeta82;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 1));
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 2));
          tmp80 = mmc_unbox_integer(tmpMeta79);
          if (1 /* true */ != tmp80) goto goto_1;
          _replEvaluate = tmpMeta78;

          _v = omc_BackendVariable_setVarAttributes(threadData, _var, _attr);

          { /* match expression */
            modelica_metatype tmp87_1;
            tmp87_1 = _hideResultOpt;
            {
              volatile mmc_switch_type tmp87;
              int tmp88;
              tmp87 = 0;
              for (; tmp87 < 2; tmp87++) {
                switch (MMC_SWITCH_CAST(tmp87)) {
                case 0: {
                  modelica_metatype tmpMeta89;
                  if (optionNone(tmp87_1)) goto tmp86_end;
                  tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp87_1), 1));
                  _hideResultExp = tmpMeta89;
                  /* Pattern matching succeeded */
                  _hideResultExp = omc_BackendVarTransform_replaceExp(threadData, _hideResultExp, _replEvaluate, mmc_mk_none() ,&_b);

                  if(_b)
                  {
                    _hideResultExp = omc_ExpressionSimplify_simplify(threadData, _hideResultExp, NULL);
                  }
                  tmpMeta84 = mmc_mk_some(_hideResultExp);
                  goto tmp86_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta84 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 13)));
                  goto tmp86_done;
                }
                }
                goto tmp86_end;
                tmp86_end: ;
              }
              goto goto_85;
              goto_85:;
              goto goto_1;
              goto tmp86_done;
              tmp86_done:;
            }
          }
          tmpMeta83 = MMC_TAGPTR(mmc_alloc_words(20));
          memcpy(MMC_UNTAGPTR(tmpMeta83), MMC_UNTAGPTR(_v), 20*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta83))[13] = tmpMeta84;
          _v = tmpMeta83;

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);
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
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameterBindings(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _cache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateParameterBindings(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _cache, _graph, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_integer _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_boolean _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_integer *out_oMark)
{
  modelica_metatype _oKnVars = NULL;
  modelica_metatype _oRepl = NULL;
  modelica_metatype _oReplEvaluate = NULL;
  modelica_metatype _oCache = NULL;
  modelica_integer _oMark;
  modelica_metatype _v = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oKnVars = _inGlobalKnownVars;
  _oRepl = _repl;
  _oReplEvaluate = _replEvaluate;
  _oCache = _iCache;
  _oMark = _iMark;
  // _v has no default value.
  {
    modelica_metatype _ilst;
    for (tmpMeta1 = _inComps; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _ilst = MMC_CAR(tmpMeta1);
      {
        modelica_metatype _i;
        for (tmpMeta2 = _ilst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _i = MMC_CAR(tmpMeta2);
          _v = omc_BackendVariable_getVarAt(threadData, _oKnVars, mmc_unbox_integer(_i));

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _oKnVars, _m, _inIEqns, _oCache, _graph, _oMark, _markarr, _isInitial, _oRepl ,&_oKnVars ,&_oCache ,&_oMark ,&_oRepl);

          _oKnVars = omc_EvaluateParameter_evaluateParameterBindings(threadData, _v, mmc_unbox_integer(_i), _oKnVars, _oCache, _graph, _oRepl, _oReplEvaluate ,&_oRepl ,&_oReplEvaluate);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oRepl) { *out_oRepl = _oRepl; }
  if (out_oReplEvaluate) { *out_oReplEvaluate = _oReplEvaluate; }
  if (out_oCache) { *out_oCache = _oCache; }
  if (out_oMark) { *out_oMark = _oMark; }
  return _oKnVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_traverseParameterSorted(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _inGlobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype _iCache, modelica_metatype _graph, modelica_metatype _iMark, modelica_metatype _markarr, modelica_metatype _repl, modelica_metatype _replEvaluate, modelica_metatype _isInitial, modelica_metatype *out_oRepl, modelica_metatype *out_oReplEvaluate, modelica_metatype *out_oCache, modelica_metatype *out_oMark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _oMark;
  modelica_metatype _oKnVars = NULL;
  tmp1 = mmc_unbox_integer(_iMark);
  tmp2 = mmc_unbox_integer(_isInitial);
  _oKnVars = omc_EvaluateParameter_traverseParameterSorted(threadData, _inComps, _inGlobalKnownVars, _m, _inIEqns, _iCache, _graph, tmp1, _markarr, _repl, _replEvaluate, tmp2, out_oRepl, out_oReplEvaluate, out_oCache, &_oMark);
  /* skip box _oKnVars; BackendDAE.Variables */
  /* skip box _oRepl; BackendVarTransform.VariableReplacements */
  /* skip box _oReplEvaluate; BackendVarTransform.VariableReplacements */
  /* skip box _oCache; FCore.Cache */
  if (out_oMark) { *out_oMark = mmc_mk_icon(_oMark); }
  return _oKnVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_replaceCrefWithBindStartExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
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
      modelica_metatype _e = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _cr = NULL;
      modelica_boolean _b;
      modelica_metatype _hs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _v has no default value.
      // _vars has no default value.
      // _cr has no default value.
      // _b has no default value.
      // _hs has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _cr = tmpMeta6;
          _vars = tmpMeta7;
          _b = tmp9  /* pattern as ty=Boolean */;
          _hs = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = omc_BaseHashSet_has(threadData, _cr, _hs);
          if (0 /* false */ != tmp11) goto goto_2;

          _v = omc_BackendVariable_getVarSingle(threadData, _cr, _vars, NULL);

          _e = omc_BackendVariable_varStartValueType(threadData, _v);

          _hs = omc_BaseHashSet_add(threadData, _cr, _hs);

          /* Pattern-matching tuple assignment */
          tmpMeta16 = mmc_mk_box3(0, _vars, mmc_mk_boolean(_b), _hs);
          tmpMeta17 = omc_Expression_traverseExpBottomUp(threadData, _e, boxvar_EvaluateParameter_replaceCrefWithBindStartExp, tmpMeta16, &tmpMeta12);
          _e = tmpMeta17;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          _b = tmp14  /* pattern as ty=Boolean */;
          _hs = tmpMeta15;
          tmpMeta18 = mmc_mk_box3(0, _vars, mmc_mk_boolean(_b), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          _e = tmp4_1;
          _vars = tmpMeta19;
          _hs = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta21 = mmc_mk_box3(0, _vars, mmc_mk_boolean(1 /* true */), _hs);
          tmpMeta[0+0] = _e;
          tmpMeta[0+1] = tmpMeta21;
          goto tmp3_done;
        }
        case 2: {
          
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
      if (++tmp4 < 3) {
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_boolean _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars)
{
  modelica_metatype _outExp = NULL;
  modelica_string _msg = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _msg has no default value.
  // _info has no default value.
  if(_b)
  {
    _outExp = _e1;
  }
  else
  {
    _info = omc_ElementSource_getElementSourceFileInfo(threadData, _source);

    tmpMeta1 = mmc_mk_box3(0, _globalKnownVars, mmc_mk_boolean(0 /* false */), omc_HashSet_emptyHashSet(threadData));
    _outExp = omc_Expression_traverseExpBottomUp(threadData, _e1, boxvar_EvaluateParameter_replaceCrefWithBindStartExp, tmpMeta1, NULL);

    tmpMeta2 = stringAppend(omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr),_OMC_LIT1);
    tmpMeta3 = stringAppend(tmpMeta2,omc_ExpressionBasics_printExpStr(threadData, _e));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT2);
    tmpMeta5 = stringAppend(tmpMeta4,omc_ExpressionBasics_printExpStr(threadData, _outExp));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT3);
    _msg = tmpMeta6;

    tmpMeta7 = mmc_mk_cons(_msg, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta7, _info);
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData_t *threadData, modelica_metatype _b, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _e1, modelica_metatype _source, modelica_metatype _globalKnownVars)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_b);
  _outExp = omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData, tmp1, _cr, _e, _e1, _source, _globalKnownVars);
  /* skip box _outExp; DAE.Exp */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl)
{
  modelica_metatype _var = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_metatype _e1 = NULL;
  modelica_boolean _b;
  modelica_metatype _ilst = NULL;
  modelica_metatype _attr1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  // _e1 has no default value.
  // _b has no default value.
  // _ilst has no default value.
  // _attr1 has no default value.
  _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta3 = mmc_mk_box3(0, _globalKnownVars, _OMC_LIT8, mmc_mk_boolean(_isInitial));
  omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta3, &tmpMeta1);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _ilst = tmpMeta2;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, omc_AvlSetInt_listKeys(threadData, _ilst, tmpMeta4), _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, omc_BackendVarTransform_emptyReplacements(threadData) ,&_cache ,&_mark ,&_repl, NULL);

  _e1 = omc_BackendVarTransform_replaceExp(threadData, _e1, _repl, mmc_mk_none(), NULL);

  _e1 = omc_ExpressionSimplify_simplify(threadData, _e1, NULL);

  _b = omc_Expression_isConst(threadData, _e1);

  _e1 = omc_EvaluateParameter_evaluateFixedAttributeReportWarning(threadData, _b, _cr, _e, _e1, _source, _globalKnownVars);

  _attr1 = omc_DAEUtil_setFixedAttr(threadData, _attr, mmc_mk_some(_e1));

  _var = omc_BackendVariable_setVarAttributes(threadData, _var, _attr1);

  _globalKnownVars = (_addVar?omc_BackendVariable_addVar(threadData, _var, _globalKnownVars):_globalKnownVars);
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  return _var;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute1(threadData_t *threadData, modelica_metatype _cr, modelica_metatype _e, modelica_metatype _attr, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_addVar);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fmark);
  tmp3 = mmc_unbox_integer(_isInitial);
  _var = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, __omcQ_24in_5Fvar, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp2, _markarr, tmp3, __omcQ_24in_5Frepl, out_globalKnownVars, out_cache, &_mark, out_repl);
  /* skip box _var; BackendDAE.Var */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = mmc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_boolean _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl)
{
  modelica_metatype _var = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = __omcQ_24in_5Fvar;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _e has no default value.
      // _attr has no default value.
      // _source has no default value.
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,15) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 8));
          if (optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,11) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 6));
          if (optionNone(tmpMeta13)) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,2,7) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
          if (optionNone(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,5,9) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 6));
          if (optionNone(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta25)) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,15) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 8));
          if (optionNone(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 1));
          
          _cr = tmpMeta23;
          _source = tmpMeta24;
          _attr = tmpMeta25;
          _e = tmpMeta28;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta31)) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,11) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 6));
          if (optionNone(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 1));
          
          _cr = tmpMeta29;
          _source = tmpMeta30;
          _attr = tmpMeta31;
          _e = tmpMeta34;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta37)) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,2,7) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 4));
          if (optionNone(tmpMeta39)) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 1));
          
          _cr = tmpMeta35;
          _source = tmpMeta36;
          _attr = tmpMeta37;
          _e = tmpMeta40;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          if (optionNone(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,5,9) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 6));
          if (optionNone(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 1));
          
          _cr = tmpMeta41;
          _source = tmpMeta42;
          _attr = tmpMeta43;
          _e = tmpMeta46;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateFixedAttribute1(threadData, _cr, _e, _attr, _source, _var, _addVar, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3, &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _var;
          tmpMeta[0+1] = _globalKnownVars;
          tmpMeta[0+2] = _cache;
          tmp1_c3 = _mark;
          tmpMeta[0+4] = _repl;
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
  _var = tmpMeta[0+0];
  _globalKnownVars = tmpMeta[0+1];
  _cache = tmpMeta[0+2];
  _mark = tmp1_c3;
  _repl = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  return _var;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateFixedAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype _addVar, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype *out_globalKnownVars, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _var = NULL;
  tmp1 = mmc_unbox_integer(_addVar);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fmark);
  tmp3 = mmc_unbox_integer(_isInitial);
  _var = omc_EvaluateParameter_evaluateFixedAttribute(threadData, __omcQ_24in_5Fvar, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp2, _markarr, tmp3, __omcQ_24in_5Frepl, out_globalKnownVars, out_cache, &_mark, out_repl);
  /* skip box _var; BackendDAE.Var */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = mmc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _value has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _cr = tmpMeta5;
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,7,0) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          
          _cr = tmpMeta9;
          _attr = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendVariable_varFixed(threadData, _var)) goto tmp2_end;
          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
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
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateParameter(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _inIEqns, __omcQ_24in_5Fcache, _graph, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_cache, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_integer _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_metatype _cache = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _cache = __omcQ_24in_5Fcache;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _var;
    {
      modelica_metatype _v = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _v has no default value.
      // _cr has no default value.
      // _e has no default value.
      // _e1 has no default value.
      // _attr has no default value.
      // _value has no default value.
      // _info has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 6; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,8,0) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta7)) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _cr = tmpMeta5;
          _e = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_Expression_isConst(threadData, _e);
          if (1 /* true */ != tmp9) goto goto_1;

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e, mmc_mk_none());
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,8,0) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta12)) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
          _cr = tmpMeta10;
          _e = tmpMeta13;
          tmp3 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e1));

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,7,0) == 0) goto tmp2_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta16)) goto tmp2_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          
          _cr = tmpMeta14;
          _e = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = omc_Expression_isConst(threadData, _e);
          if (1 /* true */ != tmp18) goto goto_1;

          _v = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          if(omc_BackendVariable_varFixed(threadData, _v))
          {
            _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e, mmc_mk_none());

            _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e, mmc_mk_none());
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,7,0) == 0) goto tmp2_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 7));
          if (optionNone(tmpMeta21)) goto tmp2_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          
          _cr = tmpMeta19;
          _e = tmpMeta22;
          /* Pattern matching succeeded */
          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_e1));

          _v = omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_boolean tmp26;
          modelica_boolean tmp27;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,7,0) == 0) goto tmp2_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 11));
          
          _cr = tmpMeta23;
          _attr = tmpMeta25;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp26 = omc_BackendVariable_varFixed(threadData, _var);
          if (1 /* true */ != tmp26) goto goto_1;

          /* Pattern-matching assignment */
          tmp27 = omc_BackendVariable_varHasBindExp(threadData, _var);
          if (0 /* false */ != tmp27) goto goto_1;

          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          _e1 = omc_BackendVarTransform_replaceExp(threadData, _e, _repl, mmc_mk_none(), NULL);

          _cache = omc_Ceval_ceval(threadData, _cache, _graph, _e1, 0 /* false */, _OMC_LIT0, ((modelica_integer) 0) ,&_value);

          _e1 = omc_ValuesUtil_valueExp(threadData, _value, mmc_mk_none());

          _v = omc_BackendVariable_setVarStartValue(threadData, _var, _e1);

          _v = omc_BackendVariable_setVarFinal(threadData, _v, 1 /* true */);

          _globalKnownVars = omc_BackendVariable_setVarAt(threadData, _globalKnownVars, _index, _v);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cr, _e1, mmc_mk_none());

          _replEvaluate = omc_BackendVarTransform_addReplacement(threadData, _replEvaluate, _cr, _e1, mmc_mk_none());
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT12))
          {
            _info = omc_ElementSource_getElementSourceFileInfo(threadData, omc_BackendVariable_getVarSource(threadData, _var));

            tmpMeta29 = stringAppend(_OMC_LIT9,omc_BackendDump_varString(threadData, _var));
            tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT3);
            tmpMeta28 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta28, _info);
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
      if (++tmp3 < 6) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_cache) { *out_cache = _cache; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameter(threadData_t *threadData, modelica_metatype _var, modelica_metatype _index, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_cache)
{
  modelica_integer tmp1;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _var, tmp1, __omcQ_24in_5FglobalKnownVars, _inIEqns, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, __omcQ_24in_5Fcache, _graph, out_repl, out_replEvaluate, out_cache);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  /* skip box _cache; FCore.Cache */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_integer __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_integer *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_integer _mark;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _mark = __omcQ_24in_5Fmark;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iUsed;
    {
      modelica_integer _i;
      modelica_metatype _rest = NULL;
      modelica_metatype _v = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _rest has no default value.
      // _v has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _globalKnownVars;
          tmpMeta[0+1] = _cache;
          tmp1_c2 = _mark;
          tmpMeta[0+3] = _repl;
          tmpMeta[0+4] = _replEvaluate;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _i = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(arrayGet(_markarr,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp9) goto goto_2;

          arrayUpdate(_markarr, _i, mmc_mk_integer(_mark));

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, arrayGet(_m,_i) /* DAE.ASUB */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate ,&_cache ,&_mark ,&_repl ,&_replEvaluate);

          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);

          _globalKnownVars = omc_EvaluateParameter_evaluateParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _cache, _graph, _repl, _replEvaluate ,&_cache ,&_repl ,&_replEvaluate);
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _rest, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate, &tmpMeta[0+1], &tmp1_c2, &tmpMeta[0+3], &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _rest, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate, &tmpMeta[0+1], &tmp1_c2, &tmpMeta[0+3], &tmpMeta[0+4]);
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
  _globalKnownVars = tmpMeta[0+0];
  _cache = tmpMeta[0+1];
  _mark = tmp1_c2;
  _repl = tmpMeta[0+3];
  _replEvaluate = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_cache) { *out_cache = _cache; }
  if (out_mark) { *out_mark = _mark; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters1(threadData_t *threadData, modelica_metatype _iUsed, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype *out_cache, modelica_metatype *out_mark, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fmark);
  tmp2 = mmc_unbox_integer(_isInitial);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, _iUsed, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, tmp1, _markarr, tmp2, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, out_cache, &_mark, out_repl, out_replEvaluate);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  if (out_mark) { *out_mark = mmc_mk_icon(_mark); }
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_integer _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer _mark;
  modelica_metatype _v = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _mark = __omcQ_24in_5Fmark;
  // _v has no default value.
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
          modelica_boolean tmp5;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (mmc_unbox_integer(arrayGet(_markarr,_i) /* DAE.ASUB */) > ((modelica_integer) 0));
          if (0 /* false */ != tmp5) goto goto_1;

          arrayUpdate(_markarr, _i, mmc_mk_integer(_mark));

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters1(threadData, arrayGet(_m,_i) /* DAE.ASUB */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl, _replEvaluate ,&_cache ,&_mark ,&_repl ,&_replEvaluate);

          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _v = omc_EvaluateParameter_evaluateFixedAttribute(threadData, _v, 1 /* true */, _globalKnownVars, _m, _inIEqns, _cache, _graph, _mark, _markarr, _isInitial, _repl ,&_globalKnownVars ,&_cache ,&_mark ,&_repl);

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _repl, _replEvaluate, _cache, _graph ,&_repl ,&_replEvaluate ,&_cache);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _v = omc_BackendVariable_getVarAt(threadData, _globalKnownVars, _i);

          _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameter(threadData, _v, _i, _globalKnownVars, _inIEqns, _repl, _replEvaluate, _cache, _graph ,&_repl ,&_replEvaluate ,&_cache);
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
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_mark) { *out_mark = _mark; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters0(threadData_t *threadData, modelica_metatype _i, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(_i);
  tmp2 = mmc_unbox_integer(_isInitial);
  tmp3 = mmc_unbox_integer(__omcQ_24in_5Fmark);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters0(threadData, tmp1, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, _markarr, tmp2, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, tmp3, out_cache, out_repl, out_replEvaluate, &_mark);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  if (out_mark) { *out_mark = mmc_mk_icon(_mark); }
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_boolean _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_integer __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_integer *out_mark)
{
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _replEvaluate = NULL;
  modelica_integer _mark;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _cache = __omcQ_24in_5Fcache;
  _repl = __omcQ_24in_5Frepl;
  _replEvaluate = __omcQ_24in_5FreplEvaluate;
  _mark = __omcQ_24in_5Fmark;
  {
    modelica_metatype _i;
    for (tmpMeta1 = _iSelected; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters0(threadData, mmc_unbox_integer(_i), _globalKnownVars, _m, _inIEqns, _cache, _graph, _markarr, _isInitial, _repl, _replEvaluate, _mark ,&_cache ,&_repl ,&_replEvaluate ,&_mark);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_cache) { *out_cache = _cache; }
  if (out_repl) { *out_repl = _repl; }
  if (out_replEvaluate) { *out_replEvaluate = _replEvaluate; }
  if (out_mark) { *out_mark = _mark; }
  return _globalKnownVars;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateParameter_evaluateSelectedParameters(threadData_t *threadData, modelica_metatype _iSelected, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype _m, modelica_metatype _inIEqns, modelica_metatype __omcQ_24in_5Fcache, modelica_metatype _graph, modelica_metatype _markarr, modelica_metatype _isInitial, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5FreplEvaluate, modelica_metatype __omcQ_24in_5Fmark, modelica_metatype *out_cache, modelica_metatype *out_repl, modelica_metatype *out_replEvaluate, modelica_metatype *out_mark)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _mark;
  modelica_metatype _globalKnownVars = NULL;
  tmp1 = mmc_unbox_integer(_isInitial);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fmark);
  _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters(threadData, _iSelected, __omcQ_24in_5FglobalKnownVars, _m, _inIEqns, __omcQ_24in_5Fcache, _graph, _markarr, tmp1, __omcQ_24in_5Frepl, __omcQ_24in_5FreplEvaluate, tmp2, out_cache, out_repl, out_replEvaluate, &_mark);
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _cache; FCore.Cache */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  /* skip box _replEvaluate; BackendVarTransform.VariableReplacements */
  if (out_mark) { *out_mark = mmc_mk_icon(_mark); }
  return _globalKnownVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateParameter_getParameterAdjacencyMatrix(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outTpl has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inTpl;
    {
      modelica_metatype _globalKnownVars = NULL;
      modelica_metatype _v = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _tree = NULL;
      modelica_metatype _ilst = NULL;
      modelica_metatype _selectedParameters = NULL;
      modelica_integer _index;
      modelica_metatype _m = NULL;
      modelica_metatype _mt = NULL;
      modelica_fnptr _selectParameter;
      modelica_boolean _select;
      modelica_boolean _isInitial;
      modelica_metatype _ht = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _globalKnownVars has no default value.
      // _v has no default value.
      // _e has no default value.
      // _cref has no default value.
      // _attr has no default value.
      // _tree has no default value.
      // _ilst has no default value.
      // _selectedParameters has no default value.
      // _index has no default value.
      // _m has no default value.
      // _mt has no default value.
      // _select has no default value.
      // _isInitial has no default value.
      // _ht has no default value.
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
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,0) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          _v = tmp4_1;
          _e = tmpMeta8;
          _globalKnownVars = tmpMeta9;
          _index = tmp11  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta12;
          _selectedParameters = tmpMeta13;
          _m = tmpMeta14;
          _mt = tmpMeta15;
          _ht = tmpMeta16;
          _isInitial = tmp18  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta21 = mmc_mk_box3(0, _globalKnownVars, _OMC_LIT8, mmc_mk_boolean(_isInitial));
          omc_Expression_traverseExpTopDown(threadData, _e, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta21, &tmpMeta19);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          _tree = tmpMeta20;

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_AvlSetInt_listKeys(threadData, _tree, tmpMeta22);

          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, mmc_mk_integer(_index), _selectedParameters);

          _m = arrayUpdate(_m, _index, _ilst);

          tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_index), _ilst);
          _mt = omc_List_fold1(threadData, tmpMeta23, boxvar_Array_consToElement, mmc_mk_integer(_index), _mt);
          tmpMeta24 = mmc_mk_box8(0, _globalKnownVars, mmc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, mmc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta24;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_integer tmp36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,7,0) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 11));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp36 = mmc_unbox_integer(tmpMeta35);
          _v = tmp4_1;
          _attr = tmpMeta26;
          _globalKnownVars = tmpMeta27;
          _index = tmp29  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta30;
          _selectedParameters = tmpMeta31;
          _m = tmpMeta32;
          _mt = tmpMeta33;
          _ht = tmpMeta34;
          _isInitial = tmp36  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _e = omc_DAEUtil_getStartAttrFail(threadData, _attr);

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta39 = mmc_mk_box3(0, _globalKnownVars, _OMC_LIT8, mmc_mk_boolean(_isInitial));
          omc_Expression_traverseExpTopDown(threadData, _e, boxvar_BackendDAEUtil_traversingadjacencyRowExpFinder, tmpMeta39, &tmpMeta37);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
          _tree = tmpMeta38;

          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          _ilst = omc_AvlSetInt_listKeys(threadData, _tree, tmpMeta40);

          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, mmc_mk_integer(_index), _selectedParameters);

          _m = arrayUpdate(_m, _index, _ilst);

          tmpMeta41 = mmc_mk_cons(mmc_mk_integer(_index), _ilst);
          _mt = omc_List_fold1(threadData, tmpMeta41, boxvar_Array_consToElement, mmc_mk_integer(_index), _mt);
          tmpMeta42 = mmc_mk_box8(0, _globalKnownVars, mmc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, mmc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta42;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_integer tmp52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp45 = mmc_unbox_integer(tmpMeta44);
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp52 = mmc_unbox_integer(tmpMeta51);
          _v = tmp4_1;
          _globalKnownVars = tmpMeta43;
          _index = tmp45  /* pattern as ty=Integer */;
          _selectParameter = tmpMeta46;
          _selectedParameters = tmpMeta47;
          _m = tmpMeta48;
          _mt = tmpMeta49;
          _ht = tmpMeta50;
          _isInitial = tmp52  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _cref = omc_BackendVariable_varCref(threadData, _v);

          _select = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 2))), _v) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_selectParameter), 1)))) (threadData, _v)) || omc_AvlSetCR_hasKey(threadData, _ht, _cref));

          _selectedParameters = omc_List_consOnTrue(threadData, _select, mmc_mk_integer(_index), _selectedParameters);

          tmpMeta53 = mmc_mk_cons(mmc_mk_integer(_index), MMC_REFSTRUCTLIT(mmc_nil));
          _ilst = tmpMeta53;

          _mt = arrayUpdate(_mt, _index, _ilst);
          tmpMeta54 = mmc_mk_box8(0, _globalKnownVars, mmc_mk_integer(((modelica_integer) 1) + _index), ((modelica_fnptr) _selectParameter), _selectedParameters, _m, _mt, _ht, mmc_mk_boolean(_isInitial));
          tmpMeta[0+0] = _v;
          tmpMeta[0+1] = tmpMeta54;
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
  _outVar = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outVar;
}

DLLDirection
modelica_metatype omc_EvaluateParameter_evaluateParameters(threadData_t *threadData, modelica_metatype __omcQ_24in_5FDAE)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype _DAE = NULL;
  modelica_fnptr _selectParameterfunc;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype _initialEqs = NULL;
  modelica_metatype _cache = NULL;
  modelica_metatype _graph = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _oRepl = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_metatype _markarr = NULL;
  modelica_integer _size;
  modelica_integer _mark;
  modelica_integer _nselect;
  modelica_metatype _m = NULL;
  modelica_metatype _mt = NULL;
  modelica_metatype _selectedParameters = NULL;
  modelica_metatype _ht = NULL;
  modelica_boolean _isInitial;
  modelica_fnptr tmp1 = 0;
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
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_integer tmp46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta54;
  modelica_metatype tmpMeta55;
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  // __omcQ_24mrfa_5F4 has no default value.
  _DAE = __omcQ_24in_5FDAE;
  // _globalKnownVars has no default value.
  // _aliasVars has no default value.
  // _initialEqs has no default value.
  // _cache has no default value.
  // _graph has no default value.
  // _repl has no default value.
  // _oRepl has no default value.
  // _systs has no default value.
  // _shared has no default value.
  // _comps has no default value.
  // _ass2 has no default value.
  // _markarr has no default value.
  // _size has no default value.
  // _mark has no default value.
  // _nselect has no default value.
  // _m has no default value.
  // _mt has no default value.
  // _selectedParameters has no default value.
  // _ht has no default value.
  // _isInitial has no default value.
  _isInitial = omc_BackendDAEUtil_isInitializationDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_DAE), 3))));

  if(omc_Flags_isSet(threadData, _OMC_LIT12))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT13),stdout);

    omc_BackendDump_dumpBackendDAE(threadData, _DAE, _OMC_LIT14);
  }

  if((!omc_Flags_isSet(threadData, _OMC_LIT53)))
  {
    { /* match expression */
      modelica_boolean tmp4_1;modelica_boolean tmp4_2;
      tmp4_1 = omc_Flags_getConfigBool(threadData, _OMC_LIT20);
      tmp4_2 = omc_Flags_getConfigBool(threadData, _OMC_LIT23);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 4; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            if (0 /* false */ != tmp4_1) goto tmp3_end;
            if (0 /* false */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT12))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT24),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrue;
            goto tmp3_done;
          }
          case 1: {
            if (1 /* true */ != tmp4_1) goto tmp3_end;
            if (0 /* false */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT12))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT25),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrFinal;
            goto tmp3_done;
          }
          case 2: {
            if (0 /* false */ != tmp4_1) goto tmp3_end;
            if (1 /* true */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT12))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT26),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrProtected;
            goto tmp3_done;
          }
          case 3: {
            if (1 /* true */ != tmp4_1) goto tmp3_end;
            if (1 /* true */ != tmp4_2) goto tmp3_end;
            /* Pattern matching succeeded */
            if(omc_Flags_isSet(threadData, _OMC_LIT12))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT27),stdout);
            }
            tmp1 = boxvar_BackendVariable_hasVarEvaluateAnnotationTrueOrFinalOrProtected;
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
    _selectParameterfunc = (modelica_fnptr) tmp1;

    /* Pattern-matching assignment */
    tmpMeta6 = _DAE;
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
    tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
    tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
    tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 10));
    tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 11));
    _systs = tmpMeta7;
    _shared = tmpMeta8;
    _globalKnownVars = tmpMeta9;
    _aliasVars = tmpMeta10;
    _initialEqs = tmpMeta11;
    _cache = tmpMeta12;
    _graph = tmpMeta13;

    _size = omc_BackendVariable_varsSize(threadData, _globalKnownVars);

    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    _m = arrayCreate(_size, tmpMeta14);

    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    _mt = arrayCreate(_size, tmpMeta15);

    _ass2 = omc_Array_createIntRange(threadData, _size);

    _ht = omc_FCore_getEvaluatedParams(threadData, _cache);

    /* Pattern-matching assignment */
    tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta17 = mmc_mk_box8(0, _globalKnownVars, mmc_mk_integer(((modelica_integer) 1)), ((modelica_fnptr) _selectParameterfunc), tmpMeta16, _m, _mt, _ht, mmc_mk_boolean(_isInitial));
    tmpMeta18 = omc_BackendVariable_traverseBackendDAEVars(threadData, _globalKnownVars, boxvar_EvaluateParameter_getParameterAdjacencyMatrix, tmpMeta17);
    tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 4));
    tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 5));
    tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 6));
    _selectedParameters = tmpMeta19;
    _m = tmpMeta20;
    _mt = tmpMeta21;

    _nselect = listLength(_selectedParameters);

    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT28),stdout);

      tmpMeta22 = stringAppend(_OMC_LIT29,intString(_size));
      tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta23),stdout);

      tmpMeta24 = stringAppend(_OMC_LIT31,intString(_nselect));
      tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta25),stdout);

      tmpMeta26 = stringAppend(_OMC_LIT32,stringDelimitList(omc_List_map(threadData, _selectedParameters, boxvar_intString), _OMC_LIT33));
      tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta27),stdout);

      omc_BackendDump_dumpAdjacencyMatrix(threadData, _m);

      omc_BackendDump_dumpAdjacencyMatrixT(threadData, _mt);
    }

    _markarr = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

    _size = modelica_integer_max((modelica_integer)(((modelica_integer) 2053)),(modelica_integer)(((modelica_integer)floor((0.7) * (((modelica_real)_size))))));

    _nselect = modelica_integer_max((modelica_integer)(((modelica_integer) 2053)),(modelica_integer)((((modelica_integer) 2)) * (_nselect)));

    _repl = omc_BackendVarTransform_emptyReplacementsSized(threadData, _size);

    _oRepl = omc_BackendVarTransform_emptyReplacementsSized(threadData, _nselect);

    _globalKnownVars = omc_EvaluateParameter_evaluateSelectedParameters(threadData, _selectedParameters, _globalKnownVars, _m, _initialEqs, _cache, _graph, _markarr, _isInitial, _repl, _oRepl, ((modelica_integer) 1) ,&_cache ,&_repl ,&_oRepl ,&_mark);

    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT34),stdout);

      fputs(MMC_STRINGDATA(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(MMC_STRINGDATA(_OMC_LIT36),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT37);

      tmpMeta28 = stringAppend(_OMC_LIT38,intString(_mark));
      tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta29),stdout);

      tmpMeta30 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT33));
      tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta31),stdout);
    }

    _comps = omc_Sorting_TarjanTransposed(threadData, _mt, _ass2);

    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT40),stdout);

      {
        modelica_metatype _comp;
        for (tmpMeta32 = _comps; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
        {
          _comp = MMC_CAR(tmpMeta32);
          tmpMeta33 = stringAppend(stringDelimitList(omc_List_map(threadData, _comp, boxvar_intString), _OMC_LIT33),_OMC_LIT30);
          fputs(MMC_STRINGDATA(tmpMeta33),stdout);
        }
      }
    }

    _globalKnownVars = omc_EvaluateParameter_traverseParameterSorted(threadData, _comps, _globalKnownVars, _m, _initialEqs, _cache, _graph, _mark, _markarr, _repl, _oRepl, _isInitial ,&_repl ,&_oRepl ,&_cache ,&_mark);

    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT41),stdout);

      fputs(MMC_STRINGDATA(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(MMC_STRINGDATA(_OMC_LIT36),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT37);

      tmpMeta35 = stringAppend(_OMC_LIT38,intString(_mark));
      tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta36),stdout);

      tmpMeta37 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT33));
      tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta38),stdout);
    }

    /* Pattern-matching tuple assignment */
    tmpMeta50 = mmc_mk_box10(0, _globalKnownVars, _m, _initialEqs, _cache, _graph, mmc_mk_integer(_mark), _markarr, mmc_mk_boolean(_isInitial), _repl, _oRepl);
    tmpMeta51 = omc_List_mapFold(threadData, _systs, boxvar_EvaluateParameter_replaceEvaluatedParametersSystem, tmpMeta50, &tmpMeta39);
    _systs = tmpMeta51;
    tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 1));
    tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
    tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
    tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 4));
    tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 5));
    tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 6));
    tmp46 = mmc_unbox_integer(tmpMeta45);
    tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 7));
    tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 9));
    tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 10));
    _globalKnownVars = tmpMeta40;
    _m = tmpMeta41;
    _initialEqs = tmpMeta42;
    _cache = tmpMeta43;
    _graph = tmpMeta44;
    _mark = tmp46  /* pattern as ty=Integer */;
    _markarr = tmpMeta47;
    _repl = tmpMeta48;
    _oRepl = tmpMeta49;

    tmpMeta52 = mmc_mk_box10(0, _globalKnownVars, _m, _initialEqs, _cache, _graph, mmc_mk_integer(_mark), _markarr, mmc_mk_boolean(_isInitial), _repl, _oRepl);
    _aliasVars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _aliasVars, boxvar_EvaluateParameter_replaceEvaluatedParameterTraverser, tmpMeta52, NULL);

    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT42),stdout);

      fputs(MMC_STRINGDATA(_OMC_LIT35),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _repl);

      fputs(MMC_STRINGDATA(_OMC_LIT36),stdout);

      omc_BackendVarTransform_dumpReplacements(threadData, _oRepl);

      omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT37);

      tmpMeta53 = stringAppend(_OMC_LIT38,intString(_mark));
      tmpMeta54 = stringAppend(tmpMeta53,_OMC_LIT30);
      fputs(MMC_STRINGDATA(tmpMeta54),stdout);

      tmpMeta55 = stringAppend(_OMC_LIT39,stringDelimitList(omc_List_mapArray(threadData, _markarr, boxvar_intString), _OMC_LIT33));
      tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT43);
      fputs(MMC_STRINGDATA(tmpMeta56),stdout);
    }

    if(omc_Flags_getConfigBool(threadData, _OMC_LIT47))
    {
      tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(22));
      memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
      ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[4] = omc_BackendVariable_listVar1(threadData, omc_List_map1(threadData, omc_BackendVariable_varList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 4)))), boxvar_BackendVarTransform_replaceBindingExp, _oRepl));
      _shared = tmpMeta57;
    }

    __omcQ_24mrfa_5F0 = _globalKnownVars;

    __omcQ_24mrfa_5F1 = _aliasVars;

    __omcQ_24mrfa_5F2 = _initialEqs;

    __omcQ_24mrfa_5F3 = _graph;

    __omcQ_24mrfa_5F4 = _cache;

    tmpMeta58 = mmc_mk_box(21, 3, &BackendDAE_Shared_SHARED__desc, __omcQ_24mrfa_5F0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 4))), __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 9))), __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 16))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 17))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 20))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 21))));
    _shared = tmpMeta58;

    tmpMeta59 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
    _DAE = tmpMeta59;

    if(omc_Flags_getConfigBool(threadData, _OMC_LIT47))
    {
      if((!omc_BackendVarTransform_isReplacementEmpty(threadData, _oRepl)))
      {
        _DAE = omc_EvaluateParameter_replaceEvaluatedParametersEqns(threadData, _DAE, _oRepl);

        if(omc_Flags_isSet(threadData, _OMC_LIT12))
        {
          omc_BackendDump_dumpBackendDAE(threadData, _DAE, _OMC_LIT50);
        }
      }
      else
      {
        if(omc_Flags_isSet(threadData, _OMC_LIT12))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT49),stdout);
        }
      }
    }
    else
    {
      if(omc_Flags_isSet(threadData, _OMC_LIT12))
      {
        omc_Error_addCompilerNotification(threadData, _OMC_LIT48);
      }
    }
  }
  else
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT12))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT15),stdout);
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT12))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT54),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _DAE;
}

