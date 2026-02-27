#include "omc_simulation_settings.h"
#include "NBInline.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NBInline.getElementList failed to get subscripted tuple element: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,65,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "SIM"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,3,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "-- Result: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,11,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,0,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "dumpBackendInline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,17,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Dumps debug output while inline function."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,41,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(151)),_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n[NBInline.inlineCatCall] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,36,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "} "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT17,0.0);
#define _OMC_LIT17 MMC_REFREALLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,5) {&NFSubscript_INDEX__desc,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,1) {_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,11) {&NBEquation_Equation_DUMMY__EQUATION__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\n[NBInline.inlinePromoteCall] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,40,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "\n[NBInline.inlineArrayConstructor] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,45,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "\n[NBInline.inlineArrayEquation] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,42,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "\n[NBInline.inlineTupleEquation] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,42,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "\n[NBInline.inlineRecordEquation] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,43,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "cat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,3,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "promote"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Failed to inline following equation:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,37,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,9,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,41,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,8) {&DAE_InlineType_AFTER__INDEX__RED__INLINE__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "$"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,1,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/2_Pre/NBInline.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,87,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT41_6,1.772181172e9);
#define _OMC_LIT41_6 MMC_REFREALLIT(_OMC_LIT_STRUCT41_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(246)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(246)),MMC_IMMEDIATE(MMC_TAGFIXNUM(97)),_OMC_LIT41_6}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "NBInline.inlineArrayIterator failed to inline iterator expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,67,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,4,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "[NBInline.inlineForEquation] Inlining: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,39,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "[dumpBackendInline] Inlining operatations for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,47,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,2,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,1,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "NBInline.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,21,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,1) {_OMC_LIT48,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#include "util/modelica.h"

#include "NBInline_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_getElementList(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_getElementList,2,0) {(void*) boxptr_NBInline_getElementList,0}};
#define boxvar_NBInline_getElementList MMC_REFSTRUCTLIT(boxvar_lit_NBInline_getElementList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordConstructorElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordConstructorElements,2,0) {(void*) boxptr_NBInline_inlineRecordConstructorElements,0}};
#define boxvar_NBInline_inlineRecordConstructorElements MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordConstructorElements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordConstructorExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _index, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordConstructorExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _index, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordConstructorExp,2,0) {(void*) boxptr_NBInline_inlineRecordConstructorExp,0}};
#define boxvar_NBInline_inlineRecordConstructorExp MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordConstructorExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_createInlinedEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_createInlinedEquation,2,0) {(void*) boxptr_NBInline_createInlinedEquation,0}};
#define boxvar_NBInline_createInlinedEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_createInlinedEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineCatCallLiterals(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cref, modelica_metatype _iter, modelica_metatype _attr, modelica_integer _n, modelica_metatype _index, modelica_metatype __omcQ_24in_5Feqns, modelica_integer __omcQ_24in_5Fshift, modelica_metatype _subs, modelica_integer *out_shift);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineCatCallLiterals(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cref, modelica_metatype _iter, modelica_metatype _attr, modelica_metatype _n, modelica_metatype _index, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype __omcQ_24in_5Fshift, modelica_metatype _subs, modelica_metatype *out_shift);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineCatCallLiterals,2,0) {(void*) boxptr_NBInline_inlineCatCallLiterals,0}};
#define boxvar_NBInline_inlineCatCallLiterals MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineCatCallLiterals)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineCatCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _args, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineCatCall,2,0) {(void*) boxptr_NBInline_inlineCatCall,0}};
#define boxvar_NBInline_inlineCatCall MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineCatCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlinePromoteCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _args, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlinePromoteCall,2,0) {(void*) boxptr_NBInline_inlinePromoteCall,0}};
#define boxvar_NBInline_inlinePromoteCall MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlinePromoteCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _rhs, modelica_metatype _iters, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayConstructor,2,0) {(void*) boxptr_NBInline_inlineArrayConstructor,0}};
#define boxvar_NBInline_inlineArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayConstructor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs_elements, modelica_metatype _rhs_elements, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayEquation,2,0) {(void*) boxptr_NBInline_inlineArrayEquation,0}};
#define boxvar_NBInline_inlineArrayEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineTupleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _LHS, modelica_metatype _RHS, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineTupleEquation,2,0) {(void*) boxptr_NBInline_inlineTupleEquation,0}};
#define boxvar_NBInline_inlineTupleEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineTupleEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _iter, modelica_metatype _attr, modelica_integer _recordSize, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _iter, modelica_metatype _attr, modelica_metatype _recordSize, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordEquation,2,0) {(void*) boxptr_NBInline_inlineRecordEquation,0}};
#define boxvar_NBInline_inlineRecordEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordTupleArrayIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordTupleArrayIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayIfBody,2,0) {(void*) boxptr_NBInline_inlineRecordTupleArrayIfBody,0}};
#define boxvar_NBInline_inlineRecordTupleArrayIfBody MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayIfBody)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordTupleArrayIfEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _body, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordTupleArrayIfEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _body, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayIfEquation,2,0) {(void*) boxptr_NBInline_inlineRecordTupleArrayIfEquation,0}};
#define boxvar_NBInline_inlineRecordTupleArrayIfEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayIfEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordsTuplesArrays(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _set, modelica_boolean _init);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordsTuplesArrays(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _init);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordsTuplesArrays,2,0) {(void*) boxptr_NBInline_inlineRecordsTuplesArrays,0}};
#define boxvar_NBInline_inlineRecordsTuplesArrays MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordsTuplesArrays)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inline(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _funcMap, modelica_metatype _inline_types, modelica_boolean _init, modelica_metatype *out_varData);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inline(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _funcMap, modelica_metatype _inline_types, modelica_metatype _init, modelica_metatype *out_varData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inline,2,0) {(void*) boxptr_NBInline_inline,0}};
#define boxvar_NBInline_inline MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inline)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_getElementList(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_metatype _elements = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elements has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _sub_exp = NULL;
      modelica_metatype _elem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sub_exp has no default value.
      // _elem has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,27,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,2) == 0) goto tmp3_end;
          
          _sub_exp = tmpMeta6;
          /* Pattern matching succeeded */
          if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) > listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub_exp), 3))))))
          {
            tmpMeta8 = stringAppend(_OMC_LIT5,omc_NFExpression_toString(threadData, _exp));
            tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta7);

            goto goto_2;
          }
          else
          {
            _elem = listGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sub_exp), 3))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          }
          tmpMeta9 = mmc_mk_cons(_elem, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _elements = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordConstructorElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_metatype _new_exp = NULL;
      modelica_metatype _call = NULL;
      modelica_metatype _fn = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _new_exp has no default value.
      // _call has no default value.
      // _fn has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,28,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _call = tmpMeta7;
          _fn = tmpMeta8;
          /* Pattern matching succeeded */
          if(omc_NFFunction_Function_isDefaultRecordConstructor(threadData, _fn))
          {
            _new_exp = listGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          }
          else
          {
            if(omc_NFFunction_Function_isNonDefaultRecordConstructor(threadData, _fn))
            {
              _new_exp = listGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
            }
            else
            {
              _new_exp = _exp;
            }
          }
          tmpMeta1 = _new_exp;
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure0_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordConstructorExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_integer _index, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_nthRecordElement(threadData, _index, _exp);

  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NBInline_inlineRecordConstructorElements);

  tmpMeta1 = mmc_mk_box2(0, _variables, mmc_mk_boolean(1 /* true */));
  _exp = omc_NFExpression_map(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure0_NBackendDAE_lowerComponentReferenceExp,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordConstructorExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _index, modelica_metatype _variables)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_index);
  _exp = omc_NBInline_inlineRecordConstructorExp(threadData, __omcQ_24in_5Fexp, tmp1, _variables);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_createInlinedEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqns = NULL;
  modelica_metatype _tmp_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _inlined = NULL;
  modelica_metatype _new_eqn = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqns = __omcQ_24in_5Feqns;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmp_eqns = omc_Pointer_create(threadData, tmpMeta1);
  // _inlined has no default value.
  // _new_eqn has no default value.
  _new_eqn = omc_NBEquation_Equation_makeAssignment(threadData, _lhs, _rhs, _index, _OMC_LIT6, _iter, _attr);

  _inlined = omc_NBInline_inlineRecordTupleArrayEquation(threadData, omc_Pointer_access(threadData, _new_eqn), _iter, _variables, _tmp_eqns, _set, _index, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _inlined;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,8,0) == 0) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = listAppend(_eqns, omc_Pointer_access(threadData, _tmp_eqns));
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            tmpMeta7 = stringAppend(_OMC_LIT7,omc_NBEquation_Equation_toString(threadData, _inlined, _OMC_LIT8));
            tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT9);
            fputs(MMC_STRINGDATA(tmpMeta8),stdout);
          }
          tmpMeta9 = mmc_mk_cons(_new_eqn, _eqns);
          tmpMeta2 = tmpMeta9;
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
  _eqns = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _eqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineCatCallLiterals(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cref, modelica_metatype _iter, modelica_metatype _attr, modelica_integer _n, modelica_metatype _index, modelica_metatype __omcQ_24in_5Feqns, modelica_integer __omcQ_24in_5Fshift, modelica_metatype _subs, modelica_integer *out_shift)
{
  modelica_metatype _eqns = NULL;
  modelica_integer _shift;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqns = __omcQ_24in_5Feqns;
  _shift = __omcQ_24in_5Fshift;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _exp;
    {
      modelica_integer _sub_idx;
      modelica_boolean _is_cat_dim;
      modelica_metatype _sub = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _lhs_exp = NULL;
      modelica_metatype _new_eqn = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _sub_idx has no default value.
      // _is_cat_dim has no default value.
      // _sub has no default value.
      // _lhs has no default value.
      // _lhs_exp has no default value.
      // _new_eqn has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _is_cat_dim = (_n == ((modelica_integer) 1) + listLength(_subs));

          _sub_idx = (_is_cat_dim?((modelica_integer) 1) + _shift:((modelica_integer) 1));

          {
            modelica_metatype _elem;
            for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), tmp11 = arrayLength(tmpMeta5), tmp10 = 1; tmp10 <= tmp11; tmp10++)
            {
              _elem = arrayGet(tmpMeta5,tmp10);
              tmpMeta6 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_sub_idx));
              tmpMeta7 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, tmpMeta6);
              _sub = tmpMeta7;

              tmpMeta8 = mmc_mk_cons(_sub, _subs);
              _eqns = omc_NBInline_inlineCatCallLiterals(threadData, _elem, _cref, _iter, _attr, _n, _index, _eqns, _shift, tmpMeta8 ,&_shift);

              _sub_idx = ((modelica_integer) 1) + _sub_idx;
            }
          }

          if(_is_cat_dim)
          {
            _shift = _shift + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _lhs = omc_NFComponentRef_mergeSubscripts(threadData, listReverse(_subs), _cref, 0 /* false */, 0 /* false */, 0 /* false */);

          _lhs_exp = omc_NFExpression_fromCref(threadData, _lhs, 0 /* false */);

          _new_eqn = omc_NBEquation_Equation_makeAssignment(threadData, _lhs_exp, _exp, _index, _OMC_LIT6, _iter, _attr);

          tmpMeta12 = mmc_mk_cons(_new_eqn, _eqns);
          _eqns = tmpMeta12;

          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            tmpMeta13 = stringAppend(_OMC_LIT7,omc_NBEquation_Equation_pointerToString(threadData, _new_eqn, _OMC_LIT8));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT9);
            fputs(MMC_STRINGDATA(tmpMeta14),stdout);
          }
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
  if (out_shift) { *out_shift = _shift; }
  return _eqns;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineCatCallLiterals(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _cref, modelica_metatype _iter, modelica_metatype _attr, modelica_metatype _n, modelica_metatype _index, modelica_metatype __omcQ_24in_5Feqns, modelica_metatype __omcQ_24in_5Fshift, modelica_metatype _subs, modelica_metatype *out_shift)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _shift;
  modelica_metatype _eqns = NULL;
  tmp1 = mmc_unbox_integer(_n);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fshift);
  _eqns = omc_NBInline_inlineCatCallLiterals(threadData, _exp, _cref, _iter, _attr, tmp1, _index, __omcQ_24in_5Feqns, tmp2, _subs, &_shift);
  /* skip box _eqns; list<Pointer<NBEquation.Equation>> */
  if (out_shift) { *out_shift = mmc_mk_icon(_shift); }
  return _eqns;
}

static modelica_metatype closure1_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}static modelica_metatype closure2_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineCatCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _args, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqn = NULL;
  modelica_integer _n;
  modelica_integer _sz;
  modelica_integer _shift;
  modelica_metatype _rest = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _dim = NULL;
  modelica_metatype _iterator_name = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _iterator_var = NULL;
  modelica_metatype _update_vars = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _subscript_exp = NULL;
  modelica_metatype _lhs_sub = NULL;
  modelica_metatype _rhs_sub = NULL;
  modelica_metatype _lhs_exp = NULL;
  modelica_metatype _rhs_exp = NULL;
  modelica_metatype _local_iter = NULL;
  modelica_metatype _new_eqn = NULL;
  modelica_boolean _failed;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_boolean tmp11 = 0;
  modelica_metatype tmpMeta41;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _n has no default value.
  // _sz has no default value.
  _shift = ((modelica_integer) 0);
  // _rest has no default value.
  // _eqns has no default value.
  // _ty has no default value.
  // _dim has no default value.
  // _iterator_name has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _iterator_var has no default value.
  // _update_vars has no default value.
  // _range has no default value.
  // _subscript_exp has no default value.
  // _lhs_sub has no default value.
  // _rhs_sub has no default value.
  // _lhs_exp has no default value.
  // _rhs_exp has no default value.
  // _local_iter has no default value.
  // _new_eqn has no default value.
  _failed = 0 /* false */;
  if(omc_Flags_isSet(threadData, _OMC_LIT13))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT14),stdout);

    if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);
    }

    tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  /* Pattern-matching assignment */
  tmpMeta4 = _args;
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  _n = tmp8  /* pattern as ty=Integer */;
  _rest = tmpMeta6;

  _iterator_name = omc_NFComponentRef_makeIterator(threadData, omc_NFInstNode_InstNode_newUniqueIterator(threadData, _OMC_LIT18, _OMC_LIT19), _OMC_LIT19);

  _iterator_var = omc_NBackendDAE_lowerIterator(threadData, _iterator_name);

  _iterator_name = omc_NBVariable_getVarName(threadData, _iterator_var);

  tmpMeta9 = mmc_mk_cons(_iterator_var, MMC_REFSTRUCTLIT(mmc_nil));
  _update_vars = omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta9, 0 /* false */);

  omc_UnorderedSet_add(threadData, _iterator_var, _set);

  _subscript_exp = omc_NFExpression_fromCref(threadData, _iterator_name, 0 /* false */);

  {
    modelica_metatype _arg;
    for (tmpMeta10 = _rest; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _arg = MMC_CAR(tmpMeta10);
      { /* match expression */
        modelica_metatype tmp14_1;
        tmp14_1 = _arg;
        {
          volatile mmc_switch_type tmp14;
          int tmp15;
          tmp14 = 0;
          for (; tmp14 < 3; tmp14++) {
            switch (MMC_SWITCH_CAST(tmp14)) {
            case 0: {
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_boolean tmp23;
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,6,2) == 0) goto tmp13_end;
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 3));
              _rhs = tmpMeta16;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(!_failed)) goto tmp13_end;
              _ty = omc_NFExpression_typeOf(threadData, _arg);

              _sz = omc_NFType_sizeOf(threadData, _ty, 0 /* false */);

              if(omc_NFType_isArray(threadData, _ty))
              {
                _dim = omc_NFType_nthDimension(threadData, _ty, _n);

                _sz = omc_NFDimension_size(threadData, _dim, 0 /* false */);

                if(((_sz != ((modelica_integer) 1)) || omc_NFDimension_isResizable(threadData, _dim)))
                {
                  _range = omc_NFExpression_makeRange(threadData, _OMC_LIT20, mmc_mk_none(), omc_NFDimension_sizeExp(threadData, _dim));

                  tmpMeta18 = mmc_mk_box3(0, _iterator_name, _range, mmc_mk_none());
                  tmpMeta17 = mmc_mk_cons(tmpMeta18, MMC_REFSTRUCTLIT(mmc_nil));
                  _local_iter = omc_NBEquation_Iterator_addFrames(threadData, _iter, tmpMeta17);

                  tmp23 = (modelica_boolean)(_shift == ((modelica_integer) 0));
                  if(tmp23)
                  {
                    tmpMeta24 = _subscript_exp;
                  }
                  else
                  {
                    tmpMeta20 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_shift));
                    tmpMeta19 = mmc_mk_cons(tmpMeta20, mmc_mk_cons(_subscript_exp, MMC_REFSTRUCTLIT(mmc_nil)));
                    tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
                    tmpMeta22 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta19, tmpMeta21, omc_NFOperator_makeAdd(threadData, _OMC_LIT19));
                    tmpMeta24 = tmpMeta22;
                  }
                  _lhs_sub = tmpMeta24;

                  tmpMeta26 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _lhs_sub);
                  tmpMeta25 = mmc_mk_cons(tmpMeta26, MMC_REFSTRUCTLIT(mmc_nil));
                  _lhs = omc_NFComponentRef_mergeSubscripts(threadData, omc_NFSubscript_fillWithWholeLeft(threadData, tmpMeta25, _n), _cref, 0 /* false */, 0 /* false */, 0 /* false */);

                  tmpMeta28 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _subscript_exp);
                  tmpMeta27 = mmc_mk_cons(tmpMeta28, MMC_REFSTRUCTLIT(mmc_nil));
                  _rhs = omc_NFComponentRef_mergeSubscripts(threadData, omc_NFSubscript_fillWithWholeLeft(threadData, tmpMeta27, _n), _rhs, 0 /* false */, 0 /* false */, 0 /* false */);

                  tmpMeta29 = mmc_mk_box2(0, _update_vars, mmc_mk_boolean(0 /* false */));
                  _lhs_exp = omc_NFExpression_map(threadData, omc_NFExpression_fromCref(threadData, _lhs, 0 /* false */), (modelica_fnptr) mmc_mk_box2(0,closure1_NBackendDAE_lowerComponentReferenceExp,tmpMeta29));

                  tmpMeta30 = mmc_mk_box2(0, _update_vars, mmc_mk_boolean(0 /* false */));
                  _rhs_exp = omc_NFExpression_map(threadData, omc_NFExpression_fromCref(threadData, _rhs, 0 /* false */), (modelica_fnptr) mmc_mk_box2(0,closure2_NBackendDAE_lowerComponentReferenceExp,tmpMeta30));
                }
                else
                {
                  tmpMeta31 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer) 1) + _shift));
                  _lhs_sub = tmpMeta31;

                  tmpMeta33 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _lhs_sub);
                  tmpMeta32 = mmc_mk_cons(tmpMeta33, MMC_REFSTRUCTLIT(mmc_nil));
                  _lhs = omc_NFComponentRef_mergeSubscripts(threadData, omc_NFSubscript_fillWithWholeLeft(threadData, tmpMeta32, _n), _cref, 0 /* false */, 0 /* false */, 0 /* false */);

                  _lhs_exp = omc_NFExpression_fromCref(threadData, _lhs, 0 /* false */);

                  _rhs = omc_NFComponentRef_mergeSubscripts(threadData, omc_NFSubscript_fillWithWholeLeft(threadData, _OMC_LIT22, _n), _rhs, 0 /* false */, 0 /* false */, 0 /* false */);

                  _rhs_exp = omc_NFExpression_fromCref(threadData, _rhs, 0 /* false */);

                  _local_iter = _iter;
                }
              }
              else
              {
                tmpMeta34 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer) 1) + _shift));
                _lhs_sub = tmpMeta34;

                tmpMeta36 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _lhs_sub);
                tmpMeta35 = mmc_mk_cons(tmpMeta36, MMC_REFSTRUCTLIT(mmc_nil));
                _lhs = omc_NFComponentRef_mergeSubscripts(threadData, omc_NFSubscript_fillWithWholeLeft(threadData, tmpMeta35, _n), _cref, 0 /* false */, 0 /* false */, 0 /* false */);

                _lhs_exp = omc_NFExpression_fromCref(threadData, _lhs, 0 /* false */);

                _rhs_exp = omc_NFExpression_fromCref(threadData, _rhs, 0 /* false */);

                _local_iter = _iter;
              }

              _new_eqn = omc_NBEquation_Equation_makeAssignment(threadData, _lhs_exp, _rhs_exp, _index, _OMC_LIT6, _local_iter, _attr);

              _shift = _shift + _sz;

              tmpMeta37 = mmc_mk_cons(_new_eqn, _eqns);
              _eqns = tmpMeta37;

              if(omc_Flags_isSet(threadData, _OMC_LIT13))
              {
                tmpMeta38 = stringAppend(_OMC_LIT7,omc_NBEquation_Equation_pointerToString(threadData, _new_eqn, _OMC_LIT8));
                tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT9);
                fputs(MMC_STRINGDATA(tmpMeta39),stdout);
              }
              tmp11 = 0 /* false */;
              goto tmp13_done;
            }
            case 1: {
              modelica_metatype tmpMeta40;
              if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,8,3) == 0) goto tmp13_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!((!_failed) && omc_NFExpression_isLiteral(threadData, _arg))) goto tmp13_end;
              tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
              _eqns = omc_NBInline_inlineCatCallLiterals(threadData, _arg, _cref, _iter, _attr, _n, _index, _eqns, _shift, tmpMeta40 ,&_shift);
              tmp11 = 0 /* false */;
              goto tmp13_done;
            }
            case 2: {
              
              /* Pattern matching succeeded */
              tmp11 = 1 /* true */;
              goto tmp13_done;
            }
            }
            goto tmp13_end;
            tmp13_end: ;
          }
          goto goto_12;
          goto_12:;
          MMC_THROW_INTERNAL();
          goto tmp13_done;
          tmp13_done:;
        }
      }
      _failed = tmp11;
    }
  }

  if((!_failed))
  {
    omc_Pointer_update(threadData, _new_eqns, _eqns);

    _eqn = _OMC_LIT23;
  }
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlinePromoteCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _args, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _arg = NULL;
  modelica_integer _n;
  modelica_integer _dim_count;
  modelica_metatype _subs = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _new_eqn = NULL;
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
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _arg has no default value.
  // _n has no default value.
  // _dim_count has no default value.
  // _subs has no default value.
  // _lhs has no default value.
  // _new_eqn has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT13))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT24),stdout);

    if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);
    }

    tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  /* Pattern-matching assignment */
  tmpMeta4 = _args;
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_CAR(tmpMeta6);
  tmpMeta8 = MMC_CDR(tmpMeta6);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  if (!listEmpty(tmpMeta8)) MMC_THROW_INTERNAL();
  _arg = tmpMeta5;
  _n = tmp10  /* pattern as ty=Integer */;

  { /* match expression */
    modelica_metatype tmp14_1;
    tmp14_1 = _arg;
    {
      volatile mmc_switch_type tmp14;
      int tmp15;
      tmp14 = 0;
      for (; tmp14 < 2; tmp14++) {
        switch (MMC_SWITCH_CAST(tmp14)) {
        case 0: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp14_1,6,2) == 0) goto tmp13_end;
          
          /* Pattern matching succeeded */
          _dim_count = omc_NFType_dimensionCount(threadData, omc_NFComponentRef_getSubscriptedType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), 0 /* false */));

          if((_n == _dim_count))
          {
            _lhs = omc_NFExpression_fromCref(threadData, _cref, 0 /* false */);
          }
          else
          {
            _subs = omc_NFSubscript_fillWithWholeLeft(threadData, omc_List_fill(threadData, _OMC_LIT21, _n - _dim_count), _n);

            _lhs = omc_NFExpression_fromCref(threadData, omc_NFComponentRef_mergeSubscripts(threadData, _subs, _cref, 0 /* false */, 0 /* false */, 0 /* false */), 0 /* false */);
          }

          _new_eqn = omc_NBEquation_Equation_makeAssignment(threadData, _lhs, _arg, _index, _OMC_LIT6, _iter, _attr);

          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            tmpMeta16 = stringAppend(_OMC_LIT7,omc_NBEquation_Equation_pointerToString(threadData, _new_eqn, _OMC_LIT8));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT9);
            fputs(MMC_STRINGDATA(tmpMeta17),stdout);
          }
          tmpMeta11 = omc_Pointer_access(threadData, _new_eqn);
          goto tmp13_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta11 = _eqn;
          goto tmp13_done;
        }
        }
        goto tmp13_end;
        tmp13_end: ;
      }
      goto goto_12;
      goto_12:;
      MMC_THROW_INTERNAL();
      goto tmp13_done;
      tmp13_done:;
    }
  }
  _eqn = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

static modelica_metatype closure3_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}static modelica_metatype closure4_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _cref, modelica_metatype _rhs, modelica_metatype _iters, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _frames = NULL;
  modelica_metatype _subs = NULL;
  modelica_metatype _cref_exp = NULL;
  modelica_metatype _new_rhs = NULL;
  modelica_metatype _local_set = NULL;
  modelica_metatype _local_it = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _frames has no default value.
  // _subs has no default value.
  // _cref_exp has no default value.
  // _new_rhs has no default value.
  _local_set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
  // _local_it has no default value.
  // _eqns has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT13))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT25),stdout);

    if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);
    }

    tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp7;
    modelica_metatype _iter_loopVar = 0;
    modelica_metatype _iter;
    _iter_loopVar = _iters;
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar3;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_iter_loopVar)) {
        _iter = MMC_CAR(_iter_loopVar);
        _iter_loopVar = MMC_CDR(_iter_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar2 = omc_NBInline_inlineArrayIterator(threadData, _iter, _local_set);
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar3;
  }
  _frames = tmpMeta4;

  omc_UnorderedSet_merge(threadData, _set, _local_set);

  _subs = omc_NBEquation_Iterator_normalizedSubscripts(threadData, omc_NBEquation_Iterator_fromFrames(threadData, _frames), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)));

  _cref_exp = omc_NFExpression_fromCref(threadData, omc_NFComponentRef_mergeSubscripts(threadData, _subs, _cref, 1 /* true */, 0 /* false */, 0 /* false */), 0 /* false */);

  _local_it = omc_NBVariable_VariablePointers_fromList(threadData, omc_UnorderedSet_toList(threadData, _local_set), 0 /* false */);

  tmpMeta8 = mmc_mk_box2(0, _local_it, mmc_mk_boolean(0 /* false */));
  _cref_exp = omc_NFExpression_map(threadData, _cref_exp, (modelica_fnptr) mmc_mk_box2(0,closure3_NBackendDAE_lowerComponentReferenceExp,tmpMeta8));

  tmpMeta9 = mmc_mk_box2(0, _local_it, mmc_mk_boolean(0 /* false */));
  _new_rhs = omc_NFExpression_map(threadData, _rhs, (modelica_fnptr) mmc_mk_box2(0,closure4_NBackendDAE_lowerComponentReferenceExp,tmpMeta9));

  _eqns = omc_NBInline_createInlinedEquation(threadData, _eqns, _cref_exp, _new_rhs, _attr, omc_NBEquation_Iterator_addFrames(threadData, _iter, _frames), _variables, _set, _index);

  omc_Pointer_update(threadData, _new_eqns, _eqns);

  _eqn = _OMC_LIT23;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs_elements, modelica_metatype _rhs_elements, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _tmp_eqns = NULL;
  modelica_metatype _inlined = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _new_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _tmp_eqns has no default value.
  // _inlined has no default value.
  // _eqns has no default value.
  // _new_eqn has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT13))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT26),stdout);

    if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);
    }

    tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = arrayLength(_lhs_elements);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      _eqns = omc_NBInline_createInlinedEquation(threadData, _eqns, arrayGet(_lhs_elements,_i) /* DAE.ASUB */, arrayGet(_rhs_elements,_i) /* DAE.ASUB */, _attr, _iter, _variables, _set, _index);
    }
  }

  omc_Pointer_update(threadData, _new_eqns, _eqns);

  _eqn = _OMC_LIT23;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineTupleEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _LHS, modelica_metatype _RHS, modelica_metatype _attr, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _lhs_elems = NULL;
  modelica_metatype _rhs_elems = NULL;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _tmp_eqn = NULL;
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
  _eqn = __omcQ_24in_5Feqn;
  // _eqns has no default value.
  // _lhs_elems has no default value.
  // _rhs_elems has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _tmp_eqn has no default value.
  _lhs_elems = omc_NBInline_getElementList(threadData, _LHS);

  _rhs_elems = omc_NBInline_getElementList(threadData, _RHS);

  if(((!listEmpty(_lhs_elems)) && (omc_List_compareLength(threadData, _lhs_elems, _rhs_elems) == ((modelica_integer) 0))))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT13))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT27),stdout);

      if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
      {
        tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
        tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
        fputs(MMC_STRINGDATA(tmpMeta2),stdout);
      }

      tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
      fputs(MMC_STRINGDATA(tmpMeta3),stdout);
    }

    _eqns = omc_Pointer_access(threadData, _new_eqns);

    {
      modelica_metatype _tpl;
      for (tmpMeta4 = omc_List_zip(threadData, _lhs_elems, _rhs_elems); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
      {
        _tpl = MMC_CAR(tmpMeta4);
        /* Pattern-matching assignment */
        tmpMeta5 = _tpl;
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
        _lhs = tmpMeta6;
        _rhs = tmpMeta7;

        if((!(omc_NFExpression_isWildCref(threadData, _lhs) || omc_NFExpression_isWildCref(threadData, _rhs))))
        {
          _eqns = omc_NBInline_createInlinedEquation(threadData, _eqns, _lhs, _rhs, _attr, _iter, _variables, _set, _index);
        }
      }
    }

    omc_Pointer_update(threadData, _new_eqns, _eqns);

    _eqn = _OMC_LIT23;
  }
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _iter, modelica_metatype _attr, modelica_integer _recordSize, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _new_lhs = NULL;
  modelica_metatype _new_rhs = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _new_lhs has no default value.
  // _new_rhs has no default value.
  // _eqns has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT13))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT28),stdout);

    if((!omc_NBEquation_Iterator_isEmpty(threadData, _iter)))
    {
      tmpMeta1 = stringAppend(_OMC_LIT15,omc_NBEquation_Iterator_toString(threadData, _iter));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT16);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);
    }

    tmpMeta3 = stringAppend(omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8),_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  }

  _eqns = omc_Pointer_access(threadData, _new_eqns);

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _recordSize;
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      _new_lhs = omc_NBInline_inlineRecordConstructorExp(threadData, _lhs, _i, _variables);

      _new_rhs = omc_NBInline_inlineRecordConstructorExp(threadData, _rhs, _i, _variables);

      _eqns = omc_NBInline_createInlinedEquation(threadData, _eqns, _new_lhs, _new_rhs, _attr, _iter, _variables, _set, _index);
    }
  }

  omc_Pointer_update(threadData, _new_eqns, _eqns);

  _eqn = _OMC_LIT23;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _iter, modelica_metatype _attr, modelica_metatype _recordSize, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _eqn = NULL;
  tmp1 = mmc_unbox_integer(_recordSize);
  tmp2 = mmc_unbox_integer(_inlineSimple);
  _eqn = omc_NBInline_inlineRecordEquation(threadData, __omcQ_24in_5Feqn, _lhs, _rhs, _iter, _attr, tmp1, _variables, _new_eqns, _set, _index, tmp2);
  /* skip box _eqn; NBEquation.Equation */
  return _eqn;
}

static modelica_metatype closure5_NBInline_inlineRecordTupleArrayIfBody(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_body)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype inlineSimple = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_NBInline_inlineRecordTupleArrayIfBody(thData, $in_body, iter, variables, set, index, inlineSimple);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordTupleArrayIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple)
{
  modelica_metatype _body = NULL;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _body = __omcQ_24in_5Fbody;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = omc_Pointer_create(threadData, tmpMeta1);
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp12;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 3)));
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta5; /* defaultValue */
    tmp4 = &__omcQ_24tmpVar5;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        { /* match expression */
          modelica_metatype tmp9_1;
          tmp9_1 = omc_NBInline_inlineRecordTupleArrayEquation(threadData, omc_Pointer_access(threadData, _e), _iter, _variables, _new_eqns, _set, _index, _inlineSimple);
          {
            volatile mmc_switch_type tmp9;
            int tmp10;
            tmp9 = 0;
            for (; tmp9 < 2; tmp9++) {
              switch (MMC_SWITCH_CAST(tmp9)) {
              case 0: {
                if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,8,0) == 0) goto tmp8_end;
                /* Pattern matching succeeded */
                tmpMeta6 = omc_Pointer_access(threadData, _new_eqns);
                goto tmp8_done;
              }
              case 1: {
                modelica_metatype tmpMeta11;
                
                /* Pattern matching succeeded */
                tmpMeta11 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta6 = tmpMeta11;
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
        }__omcQ_24tmpVar4 = tmpMeta6;
        *tmp4 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp4 = &MMC_CDR(*tmp4);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp4 = mmc_mk_nil();
    tmpMeta3 = __omcQ_24tmpVar5;
  }
  tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_body), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = omc_List_flatten(threadData, tmpMeta3);
  _body = tmpMeta2;

  tmpMeta14 = mmc_mk_box5(0, _iter, _variables, _set, _index, mmc_mk_boolean(_inlineSimple));
  tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_body), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[4] = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body), 4))), (modelica_fnptr) mmc_mk_box2(0,closure5_NBInline_inlineRecordTupleArrayIfBody,tmpMeta14));
  _body = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  return _body;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordTupleArrayIfBody(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbody, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple)
{
  modelica_integer tmp1;
  modelica_metatype _body = NULL;
  tmp1 = mmc_unbox_integer(_inlineSimple);
  _body = omc_NBInline_inlineRecordTupleArrayIfBody(threadData, __omcQ_24in_5Fbody, _iter, _variables, _set, _index, tmp1);
  /* skip box _body; NBEquation.IfEquationBody */
  return _body;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordTupleArrayIfEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _body, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _new_body = NULL;
  modelica_metatype _new_eqn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _eqns has no default value.
  // _new_body has no default value.
  // _new_eqn has no default value.
  _eqns = omc_Pointer_access(threadData, _new_eqns);

  _new_body = omc_NBInline_inlineRecordTupleArrayIfBody(threadData, _body, _iter, _variables, _set, _index, _inlineSimple);

  {
    modelica_metatype _b;
    for (tmpMeta1 = omc_NBEquation_IfEquationBody_split(threadData, _new_body); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _b = MMC_CAR(tmpMeta1);
      _new_eqn = omc_NBEquation_IfEquationBody_makeIfEquation(threadData, _b, _index, _OMC_LIT6, _iter, omc_NBEquation_Equation_getSource(threadData, _eqn), omc_NBEquation_Equation_getAttributes(threadData, _eqn));

      tmpMeta2 = mmc_mk_cons(_new_eqn, _eqns);
      _eqns = tmpMeta2;
    }
  }

  omc_Pointer_update(threadData, _new_eqns, _eqns);

  _eqn = _OMC_LIT23;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordTupleArrayIfEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _body, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple)
{
  modelica_integer tmp1;
  modelica_metatype _eqn = NULL;
  tmp1 = mmc_unbox_integer(_inlineSimple);
  _eqn = omc_NBInline_inlineRecordTupleArrayIfEquation(threadData, __omcQ_24in_5Feqn, _body, _iter, _variables, _new_eqns, _set, _index, tmp1);
  /* skip box _eqn; NBEquation.Equation */
  return _eqn;
}

DLLDirection
modelica_metatype omc_NBInline_inlineRecordTupleArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple)
{
  modelica_metatype _eqn = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
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
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _eqn;
            {
              modelica_metatype _new_eqn = NULL;
              modelica_metatype _body = NULL;
              modelica_metatype _lhs = NULL;
              modelica_metatype _rhs = NULL;
              modelica_metatype _call = NULL;
              modelica_metatype _dim = NULL;
              modelica_metatype _elements = NULL;
              modelica_integer _size;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _new_eqn has no default value.
              // _body has no default value.
              // _lhs has no default value.
              // _rhs has no default value.
              // _call has no default value.
              // _dim has no default value.
              // _elements has no default value.
              // _size has no default value.
              tmp8 = 0;
              for (; tmp8 < 17; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,6) == 0) goto tmp7_end;
                  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp7_end;
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto tmp7_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(!_inlineSimple)) goto tmp7_end;
                  tmpMeta5 = _eqn;
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto tmp7_end;
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp7_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(!_inlineSimple)) goto tmp7_end;
                  tmpMeta5 = _eqn;
                  goto tmp7_done;
                }
                case 2: {
                  modelica_metatype tmpMeta14;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,6) == 0) goto tmp7_end;
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,11,2) == 0) goto tmp7_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineRecordEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), _iter, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 7)))), _variables, _new_eqns, _set, _index, _inlineSimple);
                  goto tmp7_done;
                }
                case 3: {
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_integer tmp17;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 7));
                  if (optionNone(tmpMeta15)) goto tmp7_end;
                  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
                  tmp17 = mmc_unbox_integer(tmpMeta16);
                  _size = tmp17  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineRecordEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), _iter, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _size, _variables, _new_eqns, _set, _index, _inlineSimple);
                  goto tmp7_done;
                }
                case 4: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,6) == 0) goto tmp7_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineTupleEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 5: {
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,8,3) == 0) goto tmp7_end;
                  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,8,3) == 0) goto tmp7_end;
                  
                  _lhs = tmpMeta18;
                  _rhs = tmpMeta19;
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineArrayEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 6: {
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  modelica_metatype tmpMeta22;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp7_end;
                  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,8,3) == 0) goto tmp7_end;
                  
                  _lhs = tmpMeta20;
                  _rhs = tmpMeta21;
                  /* Pattern matching succeeded */
                  _dim = listHead(omc_NFType_arrayDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 2)))));

                  {
                    modelica_metatype __omcQ_24tmpVar7;
                    modelica_metatype* tmp23;
                    modelica_metatype tmpMeta24;
                    modelica_metatype tmpMeta25;
                    modelica_metatype __omcQ_24tmpVar6;
                    modelica_integer tmp26;
                    modelica_integer tmp27;
                    modelica_integer tmp28;
                    modelica_integer _i;
                    tmp27 = 1 /* Range step-value */;
                    tmp28 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3)))) /* Range stop-value */;
                    _i = ((modelica_integer) 1) /* Range start-value */;
                    _i = (((modelica_integer) 1) /* Range start-value */)-tmp27;
                    tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar7 = tmpMeta24; /* defaultValue */
                    tmp23 = &__omcQ_24tmpVar7;
                    while(1) {
                      tmp26 = 1;
                      if (tmp27 > 0 ? _i+tmp27 <= tmp28 : _i+tmp27 >= tmp28) {
                        _i += tmp27;
                        tmp26--;
                      }
                      if (tmp26 == 0) {
                        tmpMeta25 = mmc_mk_cons(omc_NFSubscript_nth(threadData, _dim, _i), MMC_REFSTRUCTLIT(mmc_nil));
                        __omcQ_24tmpVar6 = omc_NFExpression_applySubscripts(threadData, tmpMeta25, _lhs, 1 /* true */);
                        *tmp23 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                        tmp23 = &MMC_CDR(*tmp23);
                      } else if (tmp26 == 1) {
                        break;
                      } else {
                        goto goto_6;
                      }
                    }
                    *tmp23 = mmc_mk_nil();
                    tmpMeta22 = __omcQ_24tmpVar7;
                  }
                  _elements = tmpMeta22;
                  tmpMeta5 = omc_NBInline_inlineArrayEquation(threadData, _eqn, listArray(_elements), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 7: {
                  modelica_metatype tmpMeta29;
                  modelica_metatype tmpMeta30;
                  modelica_metatype tmpMeta31;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,8,3) == 0) goto tmp7_end;
                  tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,6,2) == 0) goto tmp7_end;
                  
                  _lhs = tmpMeta29;
                  _rhs = tmpMeta30;
                  /* Pattern matching succeeded */
                  _dim = listHead(omc_NFType_arrayDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 2)))));

                  {
                    modelica_metatype __omcQ_24tmpVar9;
                    modelica_metatype* tmp32;
                    modelica_metatype tmpMeta33;
                    modelica_metatype tmpMeta34;
                    modelica_metatype __omcQ_24tmpVar8;
                    modelica_integer tmp35;
                    modelica_integer tmp36;
                    modelica_integer tmp37;
                    modelica_integer _i;
                    tmp36 = 1 /* Range step-value */;
                    tmp37 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3)))) /* Range stop-value */;
                    _i = ((modelica_integer) 1) /* Range start-value */;
                    _i = (((modelica_integer) 1) /* Range start-value */)-tmp36;
                    tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar9 = tmpMeta33; /* defaultValue */
                    tmp32 = &__omcQ_24tmpVar9;
                    while(1) {
                      tmp35 = 1;
                      if (tmp36 > 0 ? _i+tmp36 <= tmp37 : _i+tmp36 >= tmp37) {
                        _i += tmp36;
                        tmp35--;
                      }
                      if (tmp35 == 0) {
                        tmpMeta34 = mmc_mk_cons(omc_NFSubscript_nth(threadData, _dim, _i), MMC_REFSTRUCTLIT(mmc_nil));
                        __omcQ_24tmpVar8 = omc_NFExpression_applySubscripts(threadData, tmpMeta34, _rhs, 1 /* true */);
                        *tmp32 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                        tmp32 = &MMC_CDR(*tmp32);
                      } else if (tmp35 == 1) {
                        break;
                      } else {
                        goto goto_6;
                      }
                    }
                    *tmp32 = mmc_mk_nil();
                    tmpMeta31 = __omcQ_24tmpVar9;
                  }
                  _elements = tmpMeta31;
                  tmpMeta5 = omc_NBInline_inlineArrayEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), listArray(_elements), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 8: {
                  modelica_metatype tmpMeta38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,6,2) == 0) goto tmp7_end;
                  tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,13,1) == 0) goto tmp7_end;
                  tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,4,5) == 0) goto tmp7_end;
                  
                  _lhs = tmpMeta38;
                  _call = tmpMeta40;
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineArrayConstructor(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 9: {
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,13,1) == 0) goto tmp7_end;
                  tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,4,5) == 0) goto tmp7_end;
                  tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,6,2) == 0) goto tmp7_end;
                  
                  _call = tmpMeta42;
                  _rhs = tmpMeta43;
                  /* Pattern matching succeeded */
                  tmpMeta5 = omc_NBInline_inlineArrayConstructor(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 10: {
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_metatype tmpMeta46;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,6,2) == 0) goto tmp7_end;
                  tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta45,13,1) == 0) goto tmp7_end;
                  tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
                  
                  _lhs = tmpMeta44;
                  _call = tmpMeta46;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, omc_NFCall_typedFunction(threadData, _call)), _OMC_LIT29, 1 /* true */, 0 /* false */), _OMC_LIT30))) goto tmp7_end;
                  tmpMeta5 = omc_NBInline_inlineCatCall(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), omc_NFCall_arguments(threadData, _call), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 11: {
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,13,1) == 0) goto tmp7_end;
                  tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
                  tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta49,6,2) == 0) goto tmp7_end;
                  
                  _call = tmpMeta48;
                  _rhs = tmpMeta49;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, omc_NFCall_typedFunction(threadData, _call)), _OMC_LIT29, 1 /* true */, 0 /* false */), _OMC_LIT30))) goto tmp7_end;
                  tmpMeta5 = omc_NBInline_inlineCatCall(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), omc_NFCall_arguments(threadData, _call), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 12: {
                  modelica_metatype tmpMeta50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,6,2) == 0) goto tmp7_end;
                  tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta51,13,1) == 0) goto tmp7_end;
                  tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
                  
                  _lhs = tmpMeta50;
                  _call = tmpMeta52;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, omc_NFCall_typedFunction(threadData, _call)), _OMC_LIT29, 1 /* true */, 0 /* false */), _OMC_LIT31))) goto tmp7_end;
                  tmpMeta5 = omc_NBInline_inlinePromoteCall(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), omc_NFCall_arguments(threadData, _call), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 13: {
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta53,13,1) == 0) goto tmp7_end;
                  tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
                  tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,6,2) == 0) goto tmp7_end;
                  
                  _call = tmpMeta54;
                  _rhs = tmpMeta55;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(stringEqual(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, omc_NFCall_typedFunction(threadData, _call)), _OMC_LIT29, 1 /* true */, 0 /* false */), _OMC_LIT31))) goto tmp7_end;
                  tmpMeta5 = omc_NBInline_inlinePromoteCall(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), omc_NFCall_arguments(threadData, _call), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  goto tmp7_done;
                }
                case 14: {
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  modelica_metatype tmpMeta58;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,5,5) == 0) goto tmp7_end;
                  tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (listEmpty(tmpMeta56)) goto tmp7_end;
                  tmpMeta57 = MMC_CAR(tmpMeta56);
                  tmpMeta58 = MMC_CDR(tmpMeta56);
                  if (!listEmpty(tmpMeta58)) goto tmp7_end;
                  
                  _body = tmpMeta57;
                  /* Pattern matching succeeded */
                  _new_eqn = omc_NBInline_inlineRecordTupleArrayEquation(threadData, _body, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _variables, _new_eqns, _set, _index, 1 /* true */);
                  tmpMeta5 = (omc_NBEquation_Equation_isDummy(threadData, _new_eqn)?_new_eqn:_eqn);
                  goto tmp7_done;
                }
                case 15: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,4,4) == 0) goto tmp7_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_NBEquation_IfEquationBody_isRecordOrTupleEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))))) goto tmp7_end;
                  _new_eqn = omc_NBInline_inlineRecordTupleArrayIfEquation(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _iter, _variables, _new_eqns, _set, _index, _inlineSimple);
                  tmpMeta5 = (omc_NBEquation_Equation_isDummy(threadData, _new_eqn)?_new_eqn:_eqn);
                  goto tmp7_done;
                }
                case 16: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta5 = _eqn;
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
          _eqn = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta59;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT36))
          {
            tmpMeta59 = stringAppend(_OMC_LIT32,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8));
            omc_Error_addCompilerWarning(threadData, tmpMeta59);
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
  return _eqn;
}
modelica_metatype boxptr_NBInline_inlineRecordTupleArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple)
{
  modelica_integer tmp1;
  modelica_metatype _eqn = NULL;
  tmp1 = mmc_unbox_integer(_inlineSimple);
  _eqn = omc_NBInline_inlineRecordTupleArrayEquation(threadData, __omcQ_24in_5Feqn, _iter, _variables, _new_eqns, _set, _index, tmp1);
  /* skip box _eqn; NBEquation.Equation */
  return _eqn;
}

static modelica_metatype closure6_NBInline_inlineRecordTupleArrayEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype new_eqns = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype inlineSimple = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_NBInline_inlineRecordTupleArrayEquation(thData, $in_eqn, iter, variables, new_eqns, set, index, inlineSimple);
}static modelica_metatype closure7_NBInline_inlineRecordTupleArrayEquation(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype new_eqns = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype index = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype inlineSimple = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_NBInline_inlineRecordTupleArrayEquation(thData, $in_eqn, iter, variables, new_eqns, set, index, inlineSimple);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inlineRecordsTuplesArrays(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _set, modelica_boolean _init)
{
  modelica_metatype _eqData = NULL;
  modelica_metatype _index = NULL;
  modelica_metatype _new_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqData = __omcQ_24in_5FeqData;
  _index = omc_NBEquation_EqData_getUniqueIndex(threadData, _eqData);
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_eqns = omc_Pointer_create(threadData, tmpMeta1);
  if(_init)
  {
    { /* match expression */
      modelica_metatype tmp5_1;
      tmp5_1 = _eqData;
      {
        volatile mmc_switch_type tmp5;
        int tmp6;
        tmp5 = 0;
        for (; tmp5 < 2; tmp5++) {
          switch (MMC_SWITCH_CAST(tmp5)) {
          case 0: {
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,0,9) == 0) goto tmp4_end;
            
            /* Pattern matching succeeded */
            tmpMeta8 = mmc_mk_box6(0, _OMC_LIT37, _variables, _new_eqns, _set, _index, mmc_mk_boolean(0 /* false */));
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(11));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[8] = omc_NBEquation_EquationPointers_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 8))), (modelica_fnptr) mmc_mk_box2(0,closure6_NBInline_inlineRecordTupleArrayEquation,tmpMeta8));
            _eqData = tmpMeta7;

            tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(11));
            memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[8] = omc_NBEquation_EquationPointers_addList(threadData, omc_Pointer_access(threadData, _new_eqns), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 8))));
            _eqData = tmpMeta9;

            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(11));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[8] = omc_NBEquation_EquationPointers_compress(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 8))));
            _eqData = tmpMeta10;
            tmpMeta2 = _eqData;
            goto tmp4_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            tmpMeta2 = _eqData;
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
    _eqData = tmpMeta2;
  }
  else
  {
    tmpMeta11 = mmc_mk_box6(0, _OMC_LIT37, _variables, _new_eqns, _set, _index, mmc_mk_boolean(0 /* false */));
    _eqData = omc_NBEquation_EqData_map(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure7_NBInline_inlineRecordTupleArrayEquation,tmpMeta11));

    _eqData = omc_NBEquation_EqData_addUntypedList(threadData, _eqData, omc_Pointer_access(threadData, _new_eqns), 0 /* false */);

    _eqData = omc_NBEquation_EqData_compress(threadData, _eqData);
  }
  _return: OMC_LABEL_UNUSED
  return _eqData;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inlineRecordsTuplesArrays(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _init)
{
  modelica_integer tmp1;
  modelica_metatype _eqData = NULL;
  tmp1 = mmc_unbox_integer(_init);
  _eqData = omc_NBInline_inlineRecordsTuplesArrays(threadData, __omcQ_24in_5FeqData, _variables, _set, tmp1);
  /* skip box _eqData; NBEquation.EqData */
  return _eqData;
}

static modelica_metatype closure8_DAEUtil_inlineTypeEqual(threadData_t *thData, modelica_metatype closure, modelica_metatype it1)
{
  modelica_metatype it2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_DAEUtil_inlineTypeEqual(thData, it1, it2);
}static modelica_metatype closure9_NBackendDAE_lowerEquationIterators(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqn)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype set = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerEquationIterators(thData, $in_eqn, variables, set);
}static modelica_metatype closure10_NBackendDAE_lowerComponentReferenceExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype complete = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBackendDAE_lowerComponentReferenceExp(thData, $in_exp, variables, complete);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBInline_inline(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _funcMap, modelica_metatype _inline_types, modelica_boolean _init, modelica_metatype *out_varData)
{
  modelica_metatype _eqData = NULL;
  modelica_metatype _varData = NULL;
  modelica_metatype _replacements = NULL;
  modelica_metatype _set = NULL;
  modelica_metatype _variables = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
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
  _eqData = __omcQ_24in_5FeqData;
  _varData = __omcQ_24in_5FvarData;
  // _replacements has no default value.
  // _set has no default value.
  _variables = omc_NBVariable_VarData_getVariables(threadData, _varData);
  // _key has no default value.
  // _value has no default value.
  _replacements = omc_UnorderedMap_new(threadData, boxvar_AbsynUtil_pathHash, boxvar_AbsynUtil_pathEqual, ((modelica_integer) 1));

  {
    modelica_metatype _tpl;
    for (tmpMeta1 = omc_UnorderedMap_toList(threadData, _funcMap); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _tpl = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      if((omc_List_contains(threadData, _inline_types, omc_NFFunction_Function_inlineBuiltin(threadData, _value), boxvar_DAEUtil_inlineTypeEqual) && omc_NBInline_functionInlineable(threadData, _value)))
      {
        omc_UnorderedMap_add(threadData, _key, _value, _replacements);
      }
    }
  }

  _eqData = omc_NBReplacements_replaceFunctions(threadData, _eqData, _variables, _replacements);

  _set = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));

  tmpMeta6 = mmc_mk_box1(0, _OMC_LIT38);
  if((!omc_List_any(threadData, _inline_types, (modelica_fnptr) mmc_mk_box2(0,closure8_DAEUtil_inlineTypeEqual,tmpMeta6))))
  {
    _eqData = omc_NBInline_inlineRecordsTuplesArrays(threadData, _eqData, _variables, _set, _init);
  }

  tmpMeta7 = mmc_mk_box2(0, _variables, _set);
  _eqData = omc_NBEquation_EqData_map(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure9_NBackendDAE_lowerEquationIterators,tmpMeta7));

  _varData = omc_NBVariable_VarData_addTypedList(threadData, _varData, omc_UnorderedSet_toList(threadData, _set), 9);

  tmpMeta8 = mmc_mk_box2(0, _variables, mmc_mk_boolean(1 /* true */));
  _eqData = omc_NBEquation_EqData_mapExp(threadData, _eqData, (modelica_fnptr) mmc_mk_box2(0,closure10_NBackendDAE_lowerComponentReferenceExp,tmpMeta8));
  _return: OMC_LABEL_UNUSED
  if (out_varData) { *out_varData = _varData; }
  return _eqData;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBInline_inline(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype _funcMap, modelica_metatype _inline_types, modelica_metatype _init, modelica_metatype *out_varData)
{
  modelica_integer tmp1;
  modelica_metatype _eqData = NULL;
  tmp1 = mmc_unbox_integer(_init);
  _eqData = omc_NBInline_inline(threadData, __omcQ_24in_5FeqData, __omcQ_24in_5FvarData, _funcMap, _inline_types, tmp1, out_varData);
  /* skip box _eqData; NBEquation.EqData */
  /* skip box _varData; NBVariable.VarData */
  return _eqData;
}

DLLDirection
modelica_metatype omc_NBInline_inlineArrayIterator(threadData_t *threadData, modelica_metatype _iter, modelica_metatype _set)
{
  modelica_metatype _frame = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _frame has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iter;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _node2 = NULL;
      modelica_metatype _range = NULL;
      modelica_metatype _range2 = NULL;
      modelica_metatype _map = NULL;
      modelica_metatype _iter_cref = NULL;
      modelica_metatype _iter_var = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _node2 has no default value.
      // _range has no default value.
      // _range2 has no default value.
      // _map has no default value.
      // _iter_cref has no default value.
      // _iter_var has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,10,4) == 0) goto tmp3_end;
          
          _node = tmpMeta6;
          _range = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box3(0, omc_NFComponentRef_makeIterator(threadData, _node, _OMC_LIT19), _range, mmc_mk_none());
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,8,3) == 0) goto tmp3_end;
          
          _node = tmpMeta9;
          _range = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT39,omc_NFInstNode_InstNode_name(threadData, _node));
          _node2 = omc_NFInstNode_InstNode_newIterator(threadData, tmpMeta11, _OMC_LIT19, _OMC_LIT41);

          tmpMeta12 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, _range), 0 /* false */)));
          _range2 = omc_NFExpression_makeRange(threadData, _OMC_LIT20, mmc_mk_none(), tmpMeta12);

          tmpMeta14 = mmc_mk_box3(0, omc_NFComponentRef_makeIterator(threadData, _node, omc_NFType_arrayElementType(threadData, omc_NFExpression_typeOf(threadData, _range))), _range, mmc_mk_none());
          tmpMeta13 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          _map = omc_NBEquation_Iterator_fromFrames(threadData, tmpMeta13);

          _iter_cref = omc_NFComponentRef_makeIterator(threadData, _node2, _OMC_LIT19);

          _iter_var = omc_NBackendDAE_lowerIterator(threadData, _iter_cref);

          _iter_cref = omc_NBVariable_getVarName(threadData, _iter_var);

          omc_UnorderedSet_add(threadData, _iter_var, _set);
          tmpMeta15 = mmc_mk_box3(0, _iter_cref, _range2, mmc_mk_some(_map));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_OMC_LIT42,omc_NFInstNode_InstNode_toString(threadData, omc_Util_tuple21(threadData, _iter)));
          tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT43);
          tmpMeta19 = stringAppend(tmpMeta18,omc_NFExpression_toString(threadData, omc_Util_tuple22(threadData, _iter)));
          tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT29);
          tmpMeta16 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta16);
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
  _frame = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _frame;
}

DLLDirection
modelica_metatype omc_NBInline_inlineArrayConstructorSingle(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _new_eqns, modelica_boolean *out_changed)
{
  modelica_metatype _eqn = NULL;
  modelica_boolean _changed;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  // _changed has no default value.
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
          modelica_boolean tmp5_c1 __attribute__((unused)) = 0;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _eqn;
            {
              modelica_metatype _new_eqn = NULL;
              modelica_metatype _body = NULL;
              modelica_metatype _lhs = NULL;
              modelica_metatype _rhs = NULL;
              modelica_metatype _call = NULL;
              volatile mmc_switch_type tmp8;
              int tmp9;
              // _new_eqn has no default value.
              // _body has no default value.
              // _lhs has no default value.
              // _rhs has no default value.
              // _call has no default value.
              tmp8 = 0;
              for (; tmp8 < 4; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,6,2) == 0) goto tmp7_end;
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,13,1) == 0) goto tmp7_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,5) == 0) goto tmp7_end;
                  
                  _lhs = tmpMeta10;
                  _call = tmpMeta12;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = omc_NBInline_inlineArrayConstructor(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  tmp5_c1 = 1 /* true */;
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,6) == 0) goto tmp7_end;
                  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,13,1) == 0) goto tmp7_end;
                  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,4,5) == 0) goto tmp7_end;
                  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,6,2) == 0) goto tmp7_end;
                  
                  _call = tmpMeta14;
                  _rhs = tmpMeta15;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = omc_NBInline_inlineArrayConstructor(threadData, _eqn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_rhs), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 6))), _iter, _variables, _new_eqns, _set, _index);
                  tmp5_c1 = 1 /* true */;
                  goto tmp7_done;
                }
                case 2: {
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,5,5) == 0) goto tmp7_end;
                  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
                  if (listEmpty(tmpMeta16)) goto tmp7_end;
                  tmpMeta17 = MMC_CAR(tmpMeta16);
                  tmpMeta18 = MMC_CDR(tmpMeta16);
                  if (!listEmpty(tmpMeta18)) goto tmp7_end;
                  
                  _body = tmpMeta17;
                  /* Pattern matching succeeded */
                  _new_eqn = omc_NBInline_inlineArrayConstructorSingle(threadData, _body, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), _variables, _set, _index, _new_eqns ,&_changed);

                  _new_eqn = (_changed?_new_eqn:_eqn);
                  tmpMeta[0+0] = _new_eqn;
                  tmp5_c1 = _changed;
                  goto tmp7_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = _eqn;
                  tmp5_c1 = 0 /* false */;
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
          _eqn = tmpMeta[0+0];
          _changed = tmp5_c1;

          _eqn = (omc_NBEquation_Equation_isDummy(threadData, _eqn)?omc_Pointer_access(threadData, listHead(omc_Pointer_access(threadData, _new_eqns))):_eqn);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          /* Pattern matching succeeded */
          _changed = 0 /* false */;

          if(omc_Flags_isSet(threadData, _OMC_LIT36))
          {
            tmpMeta19 = stringAppend(_OMC_LIT32,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8));
            omc_Error_addCompilerWarning(threadData, tmpMeta19);
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
  if (out_changed) { *out_changed = _changed; }
  return _eqn;
}
modelica_metatype boxptr_NBInline_inlineArrayConstructorSingle(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _new_eqns, modelica_metatype *out_changed)
{
  modelica_boolean _changed;
  modelica_metatype _eqn = NULL;
  _eqn = omc_NBInline_inlineArrayConstructorSingle(threadData, __omcQ_24in_5Feqn, _iter, _variables, _set, _index, _new_eqns, &_changed);
  /* skip box _eqn; NBEquation.Equation */
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  return _eqn;
}

DLLDirection
modelica_metatype omc_NBInline_inlineRecordSliceEquation(threadData_t *threadData, modelica_metatype _slice, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple)
{
  modelica_metatype _slices = NULL;
  modelica_metatype _record_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _slices has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _record_eqns = omc_Pointer_create(threadData, tmpMeta1);
  omc_NBInline_inlineRecordTupleArrayEquation(threadData, omc_Pointer_access(threadData, omc_NBSlice_getT(threadData, _slice)), _OMC_LIT37, _variables, _record_eqns, _set, _index, _inlineSimple);

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp7;
    modelica_metatype _eqn_loopVar = 0;
    modelica_metatype _eqn;
    _eqn_loopVar = omc_Pointer_access(threadData, _record_eqns);
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar11;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_eqn_loopVar)) {
        _eqn = MMC_CAR(_eqn_loopVar);
        _eqn_loopVar = MMC_CDR(_eqn_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta6 = mmc_mk_box3(3, &NBSlice_SLICE__desc, _eqn, tmpMeta5);
        __omcQ_24tmpVar10 = tmpMeta6;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar11;
  }
  _slices = tmpMeta2;

  if(listEmpty(_slices))
  {
    tmpMeta8 = mmc_mk_cons(_slice, MMC_REFSTRUCTLIT(mmc_nil));
    _slices = tmpMeta8;
  }
  _return: OMC_LABEL_UNUSED
  return _slices;
}
modelica_metatype boxptr_NBInline_inlineRecordSliceEquation(threadData_t *threadData, modelica_metatype _slice, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple)
{
  modelica_integer tmp1;
  modelica_metatype _slices = NULL;
  tmp1 = mmc_unbox_integer(_inlineSimple);
  _slices = omc_NBInline_inlineRecordSliceEquation(threadData, _slice, _variables, _set, _index, tmp1);
  /* skip box _slices; list<NBSlice<Pointer<NBEquation.Equation>>> */
  return _slices;
}

DLLDirection
modelica_boolean omc_NBInline_functionInlineable(threadData_t *threadData, modelica_metatype _fn)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 0 /* false */;
  if(omc_NFFunction_Function_hasSingleOrEmptyBody(threadData, _fn))
  {
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NFFunction_Function_getBody(threadData, _fn);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            if (listEmpty(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_CAR(tmp4_1);
            tmpMeta7 = MMC_CDR(tmp4_1);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
            if (!listEmpty(tmpMeta7)) goto tmp3_end;
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
    _b = tmp1;
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBInline_functionInlineable(threadData_t *threadData, modelica_metatype _fn)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBInline_functionInlineable(threadData, _fn);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

static modelica_metatype closure11_NBReplacements_applySimpleExp(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBReplacements_applySimpleExp(thData, $in_exp, replacements);
}
DLLDirection
modelica_metatype omc_NBInline_inlineForEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn)
{
  modelica_metatype _eqn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqn = __omcQ_24in_5Feqn;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqn;
    {
      modelica_metatype _new_eqn = NULL;
      modelica_metatype _replacements = NULL;
      modelica_metatype _names = NULL;
      modelica_metatype _ranges = NULL;
      modelica_metatype _name = NULL;
      modelica_metatype _range = NULL;
      modelica_integer _start;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _new_eqn has no default value.
      // _replacements has no default value.
      // _names has no default value.
      // _ranges has no default value.
      // _name has no default value.
      // _range has no default value.
      // _start has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          
          _new_eqn = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NBEquation_Iterator_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))), 0 /* false */) == ((modelica_integer) 1)) && (!omc_NBEquation_Iterator_isResizable(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))))))) goto tmp3_end;
          _replacements = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));

          _names = omc_NBEquation_Iterator_getFrames(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 3))) ,&_ranges, NULL);

          {
            modelica_metatype _tpl;
            for (tmpMeta9 = omc_List_zip(threadData, _names, _ranges); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _tpl = MMC_CAR(tmpMeta9);
              /* Pattern-matching assignment */
              tmpMeta10 = _tpl;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
              _name = tmpMeta11;
              _range = tmpMeta12;

              _start = omc_NFExpression_getIntegerRange(threadData, _range, NULL, NULL);

              tmpMeta13 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_start));
              omc_UnorderedMap_add(threadData, _name, tmpMeta13, _replacements);
            }
          }

          tmpMeta15 = mmc_mk_box1(0, _replacements);
          _new_eqn = omc_NBEquation_Equation_map(threadData, _new_eqn, (modelica_fnptr) mmc_mk_box2(0,closure11_NBReplacements_applySimpleExp,tmpMeta15), mmc_mk_none(), boxvar_NFExpression_map);

          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            tmpMeta16 = stringAppend(_OMC_LIT44,omc_NBEquation_Equation_toString(threadData, _eqn, _OMC_LIT8));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT9);
            fputs(MMC_STRINGDATA(tmpMeta17),stdout);

            tmpMeta18 = stringAppend(_OMC_LIT7,omc_NBEquation_Equation_toString(threadData, _new_eqn, _OMC_LIT8));
            tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT9);
            fputs(MMC_STRINGDATA(tmpMeta19),stdout);
          }
          tmpMeta1 = _new_eqn;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eqn;
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
  _eqn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqn;
}

DLLDirection
modelica_metatype omc_NBInline_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _inline_types, modelica_boolean _init)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _bdae;
    {
      modelica_metatype _eqData = NULL;
      modelica_metatype _varData = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqData has no default value.
      // _varData has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,13) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            tmpMeta6 = stringAppend(_OMC_LIT45,omc_List_toString(threadData, _inline_types, boxvar_DAEDump_dumpInlineTypeBackendStr, _OMC_LIT8, _OMC_LIT15, _OMC_LIT46, _OMC_LIT47, 1 /* true */, ((modelica_integer) 0)));
            fputs(MMC_STRINGDATA(omc_StringUtil_headline__4(threadData, tmpMeta6)),stdout);
          }

          _eqData = omc_NBInline_inline(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 14))), _inline_types, _init ,&_varData);

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[11] = _eqData;
          _bdae = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[10] = _varData;
          _bdae = tmpMeta8;

          if(omc_Flags_isSet(threadData, _OMC_LIT13))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
          }
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT49);
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}
modelica_metatype boxptr_NBInline_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _inline_types, modelica_metatype _init)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_init);
  _bdae = omc_NBInline_main(threadData, __omcQ_24in_5Fbdae, _inline_types, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

