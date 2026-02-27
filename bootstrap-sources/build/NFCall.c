#include "omc_simulation_settings.h"
#include "NFCall.h"
#define _OMC_LIT0_data "__Array"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,7,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,17) {&NFType_POLYMORPHIC__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "__Scalar"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "NFCall.evaluateCallTypeDim"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,26,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,0,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT5,0.0);
#define _OMC_LIT5 MMC_REFREALLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT4,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&NFCallParameterTree_Tree_EMPTY__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NFCall.vectorizeCall got unknown dimension for vectorized call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,62,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NFCall.vectorizeCall got unknown call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,37,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NFCall:checkMatchingFunctions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,29,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "No matching function found for %s.\nCandidates are:\n  %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,55,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(319)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Ambiguous matching functions found for %s.\nCandidates are:\n  %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,63,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(323)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,3,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "product"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,7,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "$array"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,6,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "array"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,5,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "list"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,4,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "listReverse"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,11,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "'+'"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,17,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT29}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "NFCall.reductionDefaultValue got unknown reduction name "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,56,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFCall.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,73,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT34_6,1.770032059e9);
#define _OMC_LIT34_6 MMC_REFREALLIT(_OMC_LIT_STRUCT34_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2641)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2643)),MMC_IMMEDIATE(MMC_TAGFIXNUM(28)),_OMC_LIT34_6}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,3,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,3,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "NFCall.typeReduction got invalid reduction call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,47,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT38_6,1.770032059e9);
#define _OMC_LIT38_6 MMC_REFREALLIT(_OMC_LIT_STRUCT38_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2595)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2595)),MMC_IMMEDIATE(MMC_TAGFIXNUM(98)),_OMC_LIT38_6}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "NFCall.typeArrayConstructor got invalid function call expression"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,64,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,1.770032059e9);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2538)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2538)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,33) {&NFExpression_EMPTY__desc,_OMC_LIT41}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,3) {&NFComplexType_CLASS__desc,}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,3,5) {&Absyn_ComponentRef_CREF__IDENT__desc,_OMC_LIT25,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "NFCall.instArgs got unknown function args"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,41,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT46_6,1.770032059e9);
#define _OMC_LIT46_6 MMC_REFREALLIT(_OMC_LIT_STRUCT46_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2367)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2367)),MMC_IMMEDIATE(MMC_TAGFIXNUM(97)),_OMC_LIT46_6}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "DynamicSelect"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,13,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "size"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,4,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "cardinality"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,11,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "actualStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,12,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "inStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,8,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Connections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,11,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,1,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,1,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "fill"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,4,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "diagonal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,8,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,3,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,3,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,8,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT25}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT62,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT63,_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,1,3) {&Absyn_ReductionIterType_COMBINE__desc,}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "NFCall.toDAE_work got untyped call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,34,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70_6,1.770032059e9);
#define _OMC_LIT70_6 MMC_REFREALLIT(_OMC_LIT_STRUCT70_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1193)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1193)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT70_6}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "NFCall.toAbsyn got unknown call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,31,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT72_6,1.770032059e9);
#define _OMC_LIT72_6 MMC_REFREALLIT(_OMC_LIT_STRUCT72_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1111)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1111)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT72_6}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "name"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,4,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "range"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,5,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "$kind"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,5,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,4,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "arguments"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,9,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "iterator_call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,13,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,3,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "iterators"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,9,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "/*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,2,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "*/ "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,3,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,2,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data " = /*"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,5,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,1,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,1,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data ", format = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,11,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data ", significantDigits = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,22,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data ", minimumLength = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,18,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data ", leftJustified = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,18,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,6,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data " in "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,4,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,1,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data " for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,5,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,1,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,3,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "NFCall.toRecordExpression got unknown call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,42,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT98_6,1.770032059e9);
#define _OMC_LIT98_6 MMC_REFREALLIT(_OMC_LIT_STRUCT98_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(794)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(794)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT98_6}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "NFCall.typedFunction got untyped function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,41,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT100_6,1.770032059e9);
#define _OMC_LIT100_6 MMC_REFREALLIT(_OMC_LIT_STRUCT100_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(700)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(700)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT100_6}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "change"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,6,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "edge"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,4,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "ndims"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,5,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "NFCall.variability got untyped call"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,35,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT105_6,1.770032059e9);
#define _OMC_LIT105_6 MMC_REFREALLIT(_OMC_LIT_STRUCT105_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(524)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(524)),MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT105_6}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "NFCall.retypeCall got invalid function call expression"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,54,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT107_6,1.770032059e9);
#define _OMC_LIT107_6 MMC_REFREALLIT(_OMC_LIT_STRUCT107_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(456)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(456)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT107_6}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,1,3) {&DAE_TailCall_NO__TAIL__desc,}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "NFCall.typeNormalCall got invalid function call expression"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,58,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT110_6,1.770032059e9);
#define _OMC_LIT110_6 MMC_REFREALLIT(_OMC_LIT_STRUCT110_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(300)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(300)),MMC_IMMEDIATE(MMC_TAGFIXNUM(108)),_OMC_LIT110_6}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Called function '%s' is partial."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,32,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT112,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT111}};
#define _OMC_LIT112 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT112)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT113,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(376)),_OMC_LIT14,_OMC_LIT15,_OMC_LIT112}};
#define _OMC_LIT113 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "NFCall.typeCall: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,17,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT115_6,1.770032059e9);
#define _OMC_LIT115_6 MMC_REFREALLIT(_OMC_LIT_STRUCT115_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(235)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(235)),MMC_IMMEDIATE(MMC_TAGFIXNUM(104)),_OMC_LIT115_6}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "NFCall.instantiate got unknown call type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,40,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT117_6,1.770032059e9);
#define _OMC_LIT117_6 MMC_REFREALLIT(_OMC_LIT_STRUCT117_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT33,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(152)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(152)),MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT117_6}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
#include "util/modelica.h"

#include "NFCall_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_resolvePolymorphicReturnType(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_resolvePolymorphicReturnType,2,0) {(void*) boxptr_NFCall_resolvePolymorphicReturnType,0}};
#define boxvar_NFCall_resolvePolymorphicReturnType MMC_REFSTRUCTLIT(boxvar_lit_NFCall_resolvePolymorphicReturnType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallTypeDimExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ptree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallTypeDimExp,2,0) {(void*) boxptr_NFCall_evaluateCallTypeDimExp,0}};
#define boxvar_NFCall_evaluateCallTypeDimExp MMC_REFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallTypeDimExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_buildParameterTree(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fptree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_buildParameterTree,2,0) {(void*) boxptr_NFCall_buildParameterTree,0}};
#define boxvar_NFCall_buildParameterTree MMC_REFSTRUCTLIT(boxvar_lit_NFCall_buildParameterTree)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallTypeDim(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim, modelica_metatype _fn, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallTypeDim,2,0) {(void*) boxptr_NFCall_evaluateCallTypeDim,0}};
#define boxvar_NFCall_evaluateCallTypeDim MMC_REFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallTypeDim)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _fn, modelica_metatype _args, modelica_integer _outputIndex, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_evaluateCallType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _outputIndex, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallType,2,0) {(void*) boxptr_NFCall_evaluateCallType,0}};
#define boxvar_NFCall_evaluateCallType MMC_REFSTRUCTLIT(boxvar_lit_NFCall_evaluateCallType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_devectorizeCall(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_devectorizeCall,2,0) {(void*) boxptr_NFCall_devectorizeCall,0}};
#define boxvar_NFCall_devectorizeCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_devectorizeCall)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isVectorized(threadData_t *threadData, modelica_metatype _call);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isVectorized(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isVectorized,2,0) {(void*) boxptr_NFCall_isVectorized,0}};
#define boxvar_NFCall_isVectorized MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isVectorized)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_vectorizeCall(threadData_t *threadData, modelica_metatype _base_call, modelica_metatype _mk, modelica_metatype _scope, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_vectorizeCall,2,0) {(void*) boxptr_NFCall_vectorizeCall,0}};
#define boxvar_NFCall_vectorizeCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_vectorizeCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_iteratorToDAE(threadData_t *threadData, modelica_metatype _iter);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_iteratorToDAE,2,0) {(void*) boxptr_NFCall_iteratorToDAE,0}};
#define boxvar_NFCall_iteratorToDAE MMC_REFSTRUCTLIT(boxvar_lit_NFCall_iteratorToDAE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_checkMatchingFunctions(threadData_t *threadData, modelica_metatype _call, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_checkMatchingFunctions(threadData_t *threadData, modelica_metatype _call, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_checkMatchingFunctions,2,0) {(void*) boxptr_NFCall_checkMatchingFunctions,0}};
#define boxvar_NFCall_checkMatchingFunctions MMC_REFSTRUCTLIT(boxvar_lit_NFCall_checkMatchingFunctions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeArgs,2,0) {(void*) boxptr_NFCall_typeArgs,0}};
#define boxvar_NFCall_typeArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionFoldIterator(threadData_t *threadData, modelica_string _name, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_reductionFoldIterator,2,0) {(void*) boxptr_NFCall_reductionFoldIterator,0}};
#define boxvar_NFCall_reductionFoldIterator MMC_REFSTRUCTLIT(boxvar_lit_NFCall_reductionFoldIterator)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionFoldExpression(threadData_t *threadData, modelica_metatype _reductionFn, modelica_metatype _reductionType, modelica_integer _reductionVar, modelica_integer _reductionPurity, modelica_string _foldId, modelica_string _resultId, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_reductionFoldExpression(threadData_t *threadData, modelica_metatype _reductionFn, modelica_metatype _reductionType, modelica_metatype _reductionVar, modelica_metatype _reductionPurity, modelica_metatype _foldId, modelica_metatype _resultId, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_reductionFoldExpression,2,0) {(void*) boxptr_NFCall_reductionFoldExpression,0}};
#define boxvar_NFCall_reductionFoldExpression MMC_REFSTRUCTLIT(boxvar_lit_NFCall_reductionFoldExpression)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionDefaultValue(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_reductionDefaultValue,2,0) {(void*) boxptr_NFCall_reductionDefaultValue,0}};
#define boxvar_NFCall_reductionDefaultValue MMC_REFSTRUCTLIT(boxvar_lit_NFCall_reductionDefaultValue)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeReduction,2,0) {(void*) boxptr_NFCall_typeReduction,0}};
#define boxvar_NFCall_typeReduction MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeReduction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_typeArrayConstructor,2,0) {(void*) boxptr_NFCall_typeArrayConstructor,0}};
#define boxvar_NFCall_typeArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFCall_typeArrayConstructor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIterators(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outIters);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIterators(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outIters);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instIterators,2,0) {(void*) boxptr_NFCall_instIterators,0}};
#define boxvar_NFCall_instIterators MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instIterators)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIteratorCallArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_iters);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIteratorCallArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_iters);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instIteratorCallArgs,2,0) {(void*) boxptr_NFCall_instIteratorCallArgs,0}};
#define boxvar_NFCall_instIteratorCallArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instIteratorCallArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIteratorCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIteratorCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instIteratorCall,2,0) {(void*) boxptr_NFCall_instIteratorCall,0}};
#define boxvar_NFCall_instIteratorCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instIteratorCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instNamedArg(threadData_t *threadData, modelica_metatype _absynArg, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instNamedArg(threadData_t *threadData, modelica_metatype _absynArg, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instNamedArg,2,0) {(void*) boxptr_NFCall_instNamedArg,0}};
#define boxvar_NFCall_instNamedArg MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instNamedArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_namedArgs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_namedArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instArgs,2,0) {(void*) boxptr_NFCall_instArgs,0}};
#define boxvar_NFCall_instArgs MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instNormalCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instNormalCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_instNormalCall,2,0) {(void*) boxptr_NFCall_instNormalCall,0}};
#define boxvar_NFCall_instNormalCall MMC_REFSTRUCTLIT(boxvar_lit_NFCall_instNormalCall)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isKnownSizeFill_is__literal__iter(threadData_t *threadData, modelica_metatype _iter);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isKnownSizeFill_is__literal__iter(threadData_t *threadData, modelica_metatype _iter);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isKnownSizeFill_is__literal__iter,2,0) {(void*) boxptr_NFCall_isKnownSizeFill_is__literal__iter,0}};
#define boxvar_NFCall_isKnownSizeFill_is__literal__iter MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isKnownSizeFill_is__literal__iter)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isLiteral_is__literal__iter(threadData_t *threadData, modelica_metatype _iter);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isLiteral_is__literal__iter(threadData_t *threadData, modelica_metatype _iter);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFCall_isLiteral_is__literal__iter,2,0) {(void*) boxptr_NFCall_isLiteral_is__literal__iter,0}};
#define boxvar_NFCall_isLiteral_is__literal__iter MMC_REFSTRUCTLIT(boxvar_lit_NFCall_isLiteral_is__literal__iter)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_resolvePolymorphicReturnType(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _ty)
{
  modelica_metatype _outType = NULL;
  modelica_string _name = NULL;
  modelica_metatype _input_ty = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _rest_args = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outType has no default value.
  // _name has no default value.
  // _input_ty has no default value.
  // _arg has no default value.
  _rest_args = _args;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _name = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype _i;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _i = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _rest_args;
              if (listEmpty(tmpMeta8)) goto goto_2;
              tmpMeta9 = MMC_CAR(tmpMeta8);
              tmpMeta10 = MMC_CDR(tmpMeta8);
              _arg = tmpMeta9;
              _rest_args = tmpMeta10;

              _input_ty = omc_NFInstNode_InstNode_getType(threadData, _i);

              if(omc_NFType_isPolymorphicNamed(threadData, omc_NFType_arrayElementType(threadData, _input_ty), _name))
              {
                _outType = omc_NFType_unliftArrayN(threadData, omc_NFType_dimensionCount(threadData, _input_ty), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 4))));

                goto _return;
              }
            }
          }

          if((stringEqual(_name, _OMC_LIT2)))
          {
            _outType = omc_NFCall_resolvePolymorphicReturnType(threadData, _fn, _args, _OMC_LIT1);

            _outType = omc_NFType_arrayElementType(threadData, _outType);

            goto _return;
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,14,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_NFCall_resolvePolymorphicReturnType(threadData, _fn, _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))));
          _ty = tmpMeta13;
          tmpMeta1 = _ty;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ty;
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
  _outType = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outType;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallTypeDimExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ptree)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _cref_parts = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _oexp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cref_parts has no default value.
  // _cref has no default value.
  // _oexp has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = omc_NFComponentRef_toListReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 1 /* true */, tmpMeta7);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          _cref = tmpMeta9;
          _cref_parts = tmpMeta10;

          _oexp = omc_NFCallParameterTree_getOpt(threadData, _ptree, omc_NFInstNode_InstNode_name(threadData, omc_NFComponentRef_node(threadData, _cref)));

          if(isSome(_oexp))
          {
            /* Pattern-matching assignment */
            tmpMeta11 = _oexp;
            if (optionNone(tmpMeta11)) goto goto_2;
            tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
            _outExp = tmpMeta12;

            _outExp = omc_NFExpression_applySubscripts(threadData, omc_NFComponentRef_getSubscripts(threadData, _cref), _outExp, 0 /* false */);

            {
              modelica_metatype _cr;
              for (tmpMeta13 = _cref_parts; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
              {
                _cr = MMC_CAR(tmpMeta13);
                _outExp = omc_NFExpression_recordElement(threadData, omc_NFInstNode_InstNode_name(threadData, omc_NFComponentRef_node(threadData, _cr)), _outExp);

                _outExp = omc_NFExpression_applySubscripts(threadData, omc_NFComponentRef_getSubscripts(threadData, _cr), _outExp, 0 /* false */);
              }
            }
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
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_buildParameterTree(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fptree)
{
  modelica_metatype _ptree = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _rest_args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ptree = __omcQ_24in_5Fptree;
  // _arg has no default value.
  _rest_args = _args;
  if((!omc_NFCallParameterTree_isEmpty(threadData, _ptree)))
  {
    goto _return;
  }

  {
    modelica_metatype _i;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _rest_args;
      if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_CAR(tmpMeta2);
      tmpMeta4 = MMC_CDR(tmpMeta2);
      _arg = tmpMeta3;
      _rest_args = tmpMeta4;

      _ptree = omc_NFCallParameterTree_add(threadData, _ptree, omc_NFInstNode_InstNode_name(threadData, _i), _arg, boxvar_NFCallParameterTree_addConflictDefault);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ptree;
}

static modelica_metatype closure0_NFCall_evaluateCallTypeDimExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype ptree = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFCall_evaluateCallTypeDimExp(thData, exp, ptree);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallTypeDim(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdim, modelica_metatype _fn, modelica_metatype _args, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree)
{
  modelica_metatype _dim = NULL;
  modelica_metatype _ptree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dim = __omcQ_24in_5Fdim;
  _ptree = __omcQ_24in_5Fptree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _dim;
    {
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _ptree = omc_NFCall_buildParameterTree(threadData, _fn, _args, _ptree);

          tmpMeta6 = mmc_mk_box1(0, _ptree);
          _exp = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dim), 2))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFCall_evaluateCallTypeDimExp,tmpMeta6));

          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT3);

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
                  omc_NFStructural_markExp(threadData, _exp);

                  _exp = omc_NFCeval_evalExp(threadData, _exp, _OMC_LIT7);
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
              goto goto_2;
              tmp8_done2:;
            }
          }
          ;

          omc_ErrorExt_rollBack(threadData, _OMC_LIT3);
          tmpMeta1 = omc_NFDimension_fromExp(threadData, _exp, 1);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _dim;
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
  _dim = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_ptree) { *out_ptree = _ptree; }
  return _dim;
}

static modelica_metatype closure1_NFCall_evaluateCallTypeDim(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_dim, modelica_metatype $in_ptree, modelica_metatype tmp6)
{
  modelica_metatype fn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype args = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NFCall_evaluateCallTypeDim(thData, $in_dim, fn, args, $in_ptree, tmp6);
}static modelica_metatype closure2_NFCall_evaluateCallTypeDimExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype ptree = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFCall_evaluateCallTypeDimExp(thData, exp, ptree);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_evaluateCallType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _fn, modelica_metatype _args, modelica_integer _outputIndex, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree)
{
  modelica_metatype _ty = NULL;
  modelica_metatype _ptree = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _tys = NULL;
  modelica_metatype _binding = NULL;
  modelica_metatype _binding_exp = NULL;
  modelica_metatype _t = NULL;
  modelica_integer _output_index;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ty = __omcQ_24in_5Fty;
  _ptree = __omcQ_24in_5Fptree;
  // _dims has no default value.
  // _tys has no default value.
  // _binding has no default value.
  // _binding_exp has no default value.
  // _t has no default value.
  // _output_index has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ty;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(0, _fn, _args);
          _dims = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 3))), (modelica_fnptr) mmc_mk_box2(0,closure1_NFCall_evaluateCallTypeDim,tmpMeta7), _ptree ,&_ptree);

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = _dims;
          _ty = tmpMeta8;
          tmpMeta1 = _ty;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _tys = tmpMeta9;

          _output_index = ((modelica_integer) 1);

          {
            modelica_metatype _t;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_ty), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _t = MMC_CAR(tmpMeta10);
              _t = omc_NFCall_evaluateCallType(threadData, _t, _fn, _args, _output_index, _ptree ,&_ptree);

              tmpMeta11 = mmc_mk_cons(_t, _tys);
              _tys = tmpMeta11;

              _output_index = ((modelica_integer) 1) + _output_index;
            }
          }

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_ty), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = listReverseInPlace(_tys);
          _ty = tmpMeta13;
          tmpMeta1 = _ty;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFType_isRecord(threadData, _ty) && (!omc_NFFunction_Function_isNonDefaultRecordConstructor(threadData, _fn)))) goto tmp3_end;
          _binding = omc_NFComponent_getBinding(threadData, omc_NFInstNode_InstNode_component(threadData, listGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 5))), _outputIndex)));

          if(omc_NFBinding_isBound(threadData, _binding))
          {
            _binding_exp = omc_NFBinding_getExp(threadData, _binding);

            _ptree = omc_NFCall_buildParameterTree(threadData, _fn, _args, _ptree);

            tmpMeta14 = mmc_mk_box1(0, _ptree);
            _binding_exp = omc_NFExpression_map(threadData, _binding_exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NFCall_evaluateCallTypeDimExp,tmpMeta14));

            _t = omc_NFExpression_typeOf(threadData, _binding_exp);
          }
          else
          {
            _t = _ty;
          }
          tmpMeta1 = _t;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _ty;
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
  _ty = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_ptree) { *out_ptree = _ptree; }
  return _ty;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_evaluateCallType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _outputIndex, modelica_metatype __omcQ_24in_5Fptree, modelica_metatype *out_ptree)
{
  modelica_integer tmp1;
  modelica_metatype _ty = NULL;
  tmp1 = mmc_unbox_integer(_outputIndex);
  _ty = omc_NFCall_evaluateCallType(threadData, __omcQ_24in_5Fty, _fn, _args, tmp1, __omcQ_24in_5Fptree, out_ptree);
  /* skip box _ty; NFType */
  /* skip box _ptree; NFCallParameterTree.Tree */
  return _ty;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_devectorizeCall(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _result = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _iter_exp = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype _iter_node = NULL;
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
  // _result has no default value.
  // _exp has no default value.
  // _iter_exp has no default value.
  // _iters has no default value.
  // _iter_node has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _call;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _exp = tmpMeta2;
  _iters = tmpMeta3;

  {
    modelica_metatype _i;
    for (tmpMeta4 = _iters; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _i = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _i;
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
      _iter_node = tmpMeta6;
      _iter_exp = tmpMeta7;

      _exp = omc_NFExpression_replaceIterator(threadData, _exp, _iter_node, _iter_exp);
    }
  }

  _result = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _result;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isVectorized(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _vectorized;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vectorized has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringGet(omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))))), ((modelica_integer) 1)) == ((modelica_integer) 36));
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
  _vectorized = tmp1;
  _return: OMC_LABEL_UNUSED
  return _vectorized;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isVectorized(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _vectorized;
  modelica_metatype out_vectorized;
  _vectorized = omc_NFCall_isVectorized(threadData, _call);
  out_vectorized = mmc_mk_icon(_vectorized);
  return out_vectorized;
}

static modelica_metatype closure3_NFExpression_applySubscript(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype subscript = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype restSubscripts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype applyToScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFExpression_applySubscript(thData, subscript, exp, restSubscripts, applyToScope);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_vectorizeCall(threadData_t *threadData, modelica_metatype _base_call, modelica_metatype _mk, modelica_metatype _scope, modelica_metatype _info)
{
  modelica_metatype _vectorized_call = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _vect_ty = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype _iter = NULL;
  modelica_integer _i;
  modelica_metatype _call_args = NULL;
  modelica_metatype _sub = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _vectorized_call has no default value.
  // _ty has no default value.
  // _vect_ty has no default value.
  // _exp has no default value.
  // _iters has no default value.
  // _iter has no default value.
  // _i has no default value.
  // _call_args has no default value.
  // _sub has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _base_call;
    tmp4_2 = _mk;
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,3) == 0) goto tmp3_end;
          
          _call_args = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _iters = tmpMeta7;

          _i = ((modelica_integer) 1);

          {
            modelica_metatype _dim;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mk), 2))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _dim = MMC_CAR(tmpMeta8);
              omc_Error_assertion(threadData, omc_NFDimension_isKnown(threadData, _dim, 1 /* true */), _OMC_LIT9, _info);

              tmpMeta9 = mmc_mk_cons(_dim, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta10 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT10, tmpMeta9);
              _ty = tmpMeta10;

              tmpMeta11 = mmc_mk_box5(13, &NFExpression_RANGE__desc, _ty, _OMC_LIT11, mmc_mk_none(), omc_NFDimension_sizeExp(threadData, _dim));
              _exp = tmpMeta11;

              _iter = omc_NFInstNode_InstNode_newUniqueIterator(threadData, _info, _OMC_LIT10);

              tmpMeta13 = mmc_mk_box2(0, _iter, _exp);
              tmpMeta12 = mmc_mk_cons(tmpMeta13, _iters);
              _iters = tmpMeta12;

              tmpMeta14 = mmc_mk_box3(9, &NFExpression_CREF__desc, _OMC_LIT10, omc_NFComponentRef_makeIterator(threadData, _iter, _OMC_LIT10));
              _exp = tmpMeta14;

              tmpMeta15 = mmc_mk_box2(5, &NFSubscript_INDEX__desc, _exp);
              _sub = tmpMeta15;

              tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta16 = mmc_mk_box3(0, _sub, tmpMeta17, mmc_mk_boolean(0 /* false */));
              _call_args = omc_List_mapIndices(threadData, _call_args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mk), 3))), (modelica_fnptr) mmc_mk_box2(0,closure3_NFExpression_applySubscript,tmpMeta16));

              _i = ((modelica_integer) 1) + _i;
            }
          }

          _vect_ty = omc_NFType_liftArrayLeftList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_base_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mk), 2))));

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_base_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[6] = _call_args;
          _base_call = tmpMeta19;
          tmpMeta20 = mmc_mk_box2(16, &NFExpression_CALL__desc, _base_call);
          tmpMeta21 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _vect_ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_base_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_base_call), 5))), tmpMeta20, _iters);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT12, _info);
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
  _vectorized_call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _vectorized_call;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_iteratorToDAE(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_metatype _diter = NULL;
  modelica_metatype _iter_node = NULL;
  modelica_metatype _iter_range = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _b = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _diter has no default value.
  // _iter_node has no default value.
  // _iter_range has no default value.
  // _c has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iter;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _iter_node = tmpMeta2;
  _iter_range = tmpMeta3;

  tmpMeta4 = mmc_mk_box5(3, &DAE_ReductionIterator_REDUCTIONITER__desc, omc_NFInstNode_InstNode_name(threadData, _iter_node), omc_NFExpression_toDAE(threadData, _iter_range), mmc_mk_none(), omc_NFType_toDAE(threadData, omc_NFInstNode_InstNode_getType(threadData, _iter_node), 1 /* true */));
  _diter = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _diter;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_checkMatchingFunctions(threadData_t *threadData, modelica_metatype _call, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize)
{
  modelica_metatype _matchedFunc = NULL;
  modelica_metatype _matchedFunctions = NULL;
  modelica_metatype _exactMatches = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype _allfuncs = NULL;
  modelica_metatype _fn_node = NULL;
  modelica_integer _numerr;
  modelica_metatype _errors = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchedFunc has no default value.
  // _matchedFunctions has no default value.
  // _exactMatches has no default value.
  // _func has no default value.
  // _allfuncs has no default value.
  // _fn_node has no default value.
  _numerr = omc_Error_getNumErrorMessages(threadData);
  // _errors has no default value.
  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT13);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _fn_node = tmpMeta7;
          /* Pattern matching succeeded */
          _allfuncs = omc_NFFunction_Function_getCachedFuncs(threadData, _fn_node);

          if((listLength(_allfuncs) > ((modelica_integer) 1)))
          {
            {
              modelica_metatype __omcQ_24tmpVar3;
              modelica_metatype* tmp9;
              modelica_metatype tmpMeta10;
              modelica_metatype __omcQ_24tmpVar2;
              modelica_integer tmp11;
              modelica_metatype _fn_loopVar = 0;
              modelica_metatype _fn;
              _fn_loopVar = _allfuncs;
              tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar3 = tmpMeta10; /* defaultValue */
              tmp9 = &__omcQ_24tmpVar3;
              while(1) {
                tmp11 = 1;
                while (!listEmpty(_fn_loopVar)) {
                  _fn = MMC_CAR(_fn_loopVar);
                  _fn_loopVar = MMC_CDR(_fn_loopVar);
                  if ((!omc_NFFunction_Function_isDefaultRecordConstructor(threadData, _fn))) {
                    tmp11--;
                    break;
                  }
                }
                if (tmp11 == 0) {
                  __omcQ_24tmpVar2 = _fn;
                  *tmp9 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                  tmp9 = &MMC_CDR(*tmp9);
                } else if (tmp11 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp9 = mmc_mk_nil();
              tmpMeta8 = __omcQ_24tmpVar3;
            }
            _allfuncs = tmpMeta8;
          }
          tmpMeta1 = omc_NFFunction_Function_matchFunctions(threadData, _allfuncs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), _context, _info, _vectorize);
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
  _matchedFunctions = tmpMeta1;

  if(listEmpty(_matchedFunctions))
  {
    if((listLength(_allfuncs) > ((modelica_integer) 1)))
    {
      omc_ErrorExt_rollBack(threadData, _OMC_LIT13);

      tmpMeta12 = mmc_mk_cons(omc_NFCall_typedString(threadData, _call), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, _allfuncs), MMC_REFSTRUCTLIT(mmc_nil)));
      omc_Error_addSourceMessage(threadData, _OMC_LIT18, tmpMeta12, _info);
    }
    else
    {
      if((_numerr == omc_Error_getNumErrorMessages(threadData)))
      {
        omc_ErrorExt_rollBack(threadData, _OMC_LIT13);

        tmpMeta13 = mmc_mk_cons(omc_NFCall_typedString(threadData, _call), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, _allfuncs), MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addSourceMessage(threadData, _OMC_LIT18, tmpMeta13, _info);
      }
      else
      {
        omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT13);
      }
    }

    MMC_THROW_INTERNAL();
  }

  omc_ErrorExt_rollBack(threadData, _OMC_LIT13);

  if((listLength(_matchedFunctions) > ((modelica_integer) 1)))
  {
    _exactMatches = omc_NFFunction_MatchedFunction_getExactMatches(threadData, _matchedFunctions);

    if(listEmpty(_exactMatches))
    {
      _exactMatches = omc_NFFunction_MatchedFunction_getExactVectorizedMatches(threadData, _matchedFunctions);
    }

    if((listLength(_exactMatches) > ((modelica_integer) 1)))
    {
      {
        modelica_metatype __omcQ_24tmpVar7;
        modelica_metatype* tmp16;
        modelica_metatype tmpMeta17;
        modelica_metatype __omcQ_24tmpVar6;
        modelica_integer tmp18;
        modelica_metatype _mfn_loopVar = 0;
        modelica_metatype _mfn;
        _mfn_loopVar = _matchedFunctions;
        tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar7 = tmpMeta17; /* defaultValue */
        tmp16 = &__omcQ_24tmpVar7;
        while(1) {
          tmp18 = 1;
          if (!listEmpty(_mfn_loopVar)) {
            _mfn = MMC_CAR(_mfn_loopVar);
            _mfn_loopVar = MMC_CDR(_mfn_loopVar);
            tmp18--;
          }
          if (tmp18 == 0) {
            __omcQ_24tmpVar6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mfn), 2)));
            *tmp16 = mmc_mk_cons(__omcQ_24tmpVar6,0);
            tmp16 = &MMC_CDR(*tmp16);
          } else if (tmp18 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp16 = mmc_mk_nil();
        tmpMeta15 = __omcQ_24tmpVar7;
      }
      tmpMeta14 = mmc_mk_cons(omc_NFCall_typedString(threadData, _call), mmc_mk_cons(omc_NFFunction_Function_candidateFuncListString(threadData, tmpMeta15), MMC_REFSTRUCTLIT(mmc_nil)));
      omc_Error_addSourceMessage(threadData, _OMC_LIT21, tmpMeta14, _info);

      MMC_THROW_INTERNAL();
    }

    _matchedFunc = listHead(_exactMatches);
  }
  else
  {
    _matchedFunc = listHead(_matchedFunctions);
  }

  if(omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2)))))
  {
    _func = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2)));

    tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(15));
    memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_func), 15*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = omc_NFFunction_Function_nameConsiderBuiltin(threadData, _func);
    _func = tmpMeta19;

    tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(5));
    memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_matchedFunc), 5*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[2] = _func;
    _matchedFunc = tmpMeta20;
  }
  _return: OMC_LABEL_UNUSED
  return _matchedFunc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_checkMatchingFunctions(threadData_t *threadData, modelica_metatype _call, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _matchedFunc = NULL;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_vectorize);
  _matchedFunc = omc_NFCall_checkMatchingFunctions(threadData, _call, tmp1, _info, tmp2);
  /* skip box _matchedFunc; NFFunction.MatchedFunction */
  return _matchedFunc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _arg = NULL;
      modelica_metatype _arg_ty = NULL;
      modelica_integer _arg_var;
      modelica_integer _arg_pur;
      modelica_metatype _typed_args = NULL;
      modelica_metatype _typed_nargs = NULL;
      modelica_string _name = NULL;
      modelica_integer _next_context;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg has no default value.
      // _arg_ty has no default value.
      // _arg_var has no default value.
      // _arg_pur has no default value.
      // _typed_args has no default value.
      // _typed_nargs has no default value.
      // _name has no default value.
      // _next_context has no default value.
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
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _typed_args = tmpMeta6;

          _next_context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 4194304));

          {
            modelica_metatype _arg;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _arg = MMC_CAR(tmpMeta7);
              _arg = omc_NFTyping_typeExp(threadData, _arg, _next_context, _info, 0 /* false */ ,&_arg_ty ,&_arg_var ,&_arg_pur);

              tmpMeta9 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_none(), _arg, _arg_ty, mmc_mk_integer((modelica_integer)_arg_var), mmc_mk_integer((modelica_integer)_arg_pur));
              tmpMeta8 = mmc_mk_cons(tmpMeta9, _typed_args);
              _typed_args = tmpMeta8;
            }
          }

          _typed_args = listReverse(_typed_args);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _typed_nargs = tmpMeta11;

          {
            modelica_metatype _narg;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _narg = MMC_CAR(tmpMeta12);
              /* Pattern-matching assignment */
              tmpMeta13 = _narg;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
              _name = tmpMeta14;
              _arg = tmpMeta15;

              _arg = omc_NFTyping_typeExp(threadData, _arg, _next_context, _info, 0 /* false */ ,&_arg_ty ,&_arg_var ,&_arg_pur);

              tmpMeta17 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_some(_name), _arg, _arg_ty, mmc_mk_integer((modelica_integer)_arg_var), mmc_mk_integer((modelica_integer)_arg_pur));
              tmpMeta16 = mmc_mk_cons(tmpMeta17, _typed_nargs);
              _typed_nargs = tmpMeta16;
            }
          }

          _typed_nargs = listReverse(_typed_nargs);
          tmpMeta19 = mmc_mk_box5(4, &NFCall_ARG__TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _typed_args, _typed_nargs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta19;
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
  _call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _call;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _call = omc_NFCall_typeArgs(threadData, __omcQ_24in_5Fcall, tmp1, _info);
  /* skip box _call; NFCall */
  return _call;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionFoldIterator(threadData_t *threadData, modelica_string _name, modelica_metatype _ty)
{
  modelica_metatype _iterExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iterExp has no default value.
  tmpMeta1 = mmc_mk_box2(7, &NFInstNode_InstNode_NAME__NODE__desc, _name);
  tmpMeta2 = mmc_mk_box3(9, &NFExpression_CREF__desc, _ty, omc_NFComponentRef_makeIterator(threadData, tmpMeta1, _ty));
  _iterExp = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _iterExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionFoldExpression(threadData_t *threadData, modelica_metatype _reductionFn, modelica_metatype _reductionType, modelica_integer _reductionVar, modelica_integer _reductionPurity, modelica_string _foldId, modelica_string _resultId, modelica_metatype _info)
{
  modelica_metatype _foldExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _op_node = NULL;
  modelica_metatype _fn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldExp has no default value.
  // _ty has no default value.
  // _op_node has no default value.
  // _fn has no default value.
  if(omc_NFType_isComplex(threadData, _reductionType))
  {
    { /* match expression */
      modelica_string tmp4_1;
      tmp4_1 = omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, _reductionFn));
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
            if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
            /* Pattern matching succeeded */
            /* Pattern-matching assignment */
            tmpMeta6 = _reductionType;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,11,2) == 0) goto goto_2;
            tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
            _op_node = tmpMeta7;

            _op_node = omc_NFClass_lookupElement(threadData, _OMC_LIT28, omc_NFInstNode_InstNode_getClass(threadData, _op_node), NULL);

            omc_NFFunction_Function_instFunctionNode(threadData, _op_node, ((modelica_integer) 0), _info);

            /* Pattern-matching assignment */
            tmpMeta8 = omc_NFFunction_Function_typeNodeCache(threadData, _op_node, ((modelica_integer) 16));
            if (listEmpty(tmpMeta8)) goto goto_2;
            tmpMeta9 = MMC_CAR(tmpMeta8);
            tmpMeta10 = MMC_CDR(tmpMeta8);
            if (!listEmpty(tmpMeta10)) goto goto_2;
            _fn = tmpMeta9;
            tmpMeta11 = mmc_mk_cons(omc_NFCall_reductionFoldIterator(threadData, _resultId, _reductionType), mmc_mk_cons(omc_NFCall_reductionFoldIterator(threadData, _foldId, _reductionType), MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta12 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _fn, tmpMeta11, (modelica_integer)_reductionVar, (modelica_integer)_reductionPurity, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 8)))));
            tmpMeta1 = mmc_mk_some(tmpMeta12);
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
    _foldExp = tmpMeta1;
  }
  else
  {
    { /* match expression */
      modelica_string tmp16_1;
      tmp16_1 = omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, _reductionFn));
      {
        volatile mmc_switch_type tmp16;
        int tmp17;
        tmp16 = 0;
        for (; tmp16 < 7; tmp16++) {
          switch (MMC_SWITCH_CAST(tmp16)) {
          case 0: {
            modelica_metatype tmpMeta18;
            if (3 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta18 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFCall_reductionFoldIterator(threadData, _resultId, _reductionType), omc_NFOperator_makeAdd(threadData, _reductionType), omc_NFCall_reductionFoldIterator(threadData, _foldId, _reductionType));
            tmpMeta13 = mmc_mk_some(tmpMeta18);
            goto tmp15_done;
          }
          case 1: {
            modelica_metatype tmpMeta19;
            if (7 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta19 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFCall_reductionFoldIterator(threadData, _resultId, _reductionType), omc_NFOperator_makeMul(threadData, _reductionType), omc_NFCall_reductionFoldIterator(threadData, _foldId, _reductionType));
            tmpMeta13 = mmc_mk_some(tmpMeta19);
            goto tmp15_done;
          }
          case 2: {
            if (6 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_none();
            goto tmp15_done;
          }
          case 3: {
            if (5 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_none();
            goto tmp15_done;
          }
          case 4: {
            if (4 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_none();
            goto tmp15_done;
          }
          case 5: {
            if (11 != MMC_STRLEN(tmp16_1) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmp16_1)) != 0) goto tmp15_end;
            /* Pattern matching succeeded */
            tmpMeta13 = mmc_mk_none();
            goto tmp15_done;
          }
          case 6: {
            modelica_metatype tmpMeta20;
            modelica_metatype tmpMeta21;
            
            /* Pattern matching succeeded */
            tmpMeta20 = mmc_mk_cons(omc_NFCall_reductionFoldIterator(threadData, _foldId, _reductionType), mmc_mk_cons(omc_NFCall_reductionFoldIterator(threadData, _resultId, _reductionType), MMC_REFSTRUCTLIT(mmc_nil)));
            tmpMeta21 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _reductionFn, tmpMeta20, (modelica_integer)_reductionVar, (modelica_integer)_reductionPurity, _reductionType));
            tmpMeta13 = mmc_mk_some(tmpMeta21);
            goto tmp15_done;
          }
          }
          goto tmp15_end;
          tmp15_end: ;
        }
        goto goto_14;
        goto_14:;
        MMC_THROW_INTERNAL();
        goto tmp15_done;
        tmp15_done:;
      }
    }
    _foldExp = tmpMeta13;
  }
  _return: OMC_LABEL_UNUSED
  return _foldExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_reductionFoldExpression(threadData_t *threadData, modelica_metatype _reductionFn, modelica_metatype _reductionType, modelica_metatype _reductionVar, modelica_metatype _reductionPurity, modelica_metatype _foldId, modelica_metatype _resultId, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _foldExp = NULL;
  tmp1 = mmc_unbox_integer(_reductionVar);
  tmp2 = mmc_unbox_integer(_reductionPurity);
  _foldExp = omc_NFCall_reductionFoldExpression(threadData, _reductionFn, _reductionType, tmp1, tmp2, _foldId, _resultId, _info);
  /* skip box _foldExp; Option<NFExpression> */
  return _foldExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_reductionDefaultValue(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty)
{
  modelica_metatype _defaultValue = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _defaultValue has no default value.
  if(omc_NFType_isArray(threadData, _ty))
  {
    _defaultValue = mmc_mk_none();
  }
  else
  {
    { /* match expression */
      modelica_string tmp4_1;
      tmp4_1 = omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, _fn));
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 5; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
            /* Pattern matching succeeded */
            tmpMeta1 = mmc_mk_some(omc_NFExpression_makeZero(threadData, _ty));
            goto tmp3_done;
          }
          case 1: {
            if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
            /* Pattern matching succeeded */
            tmpMeta1 = mmc_mk_some(omc_NFExpression_makeOne(threadData, _ty));
            goto tmp3_done;
          }
          case 2: {
            if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT35), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
            /* Pattern matching succeeded */
            tmpMeta1 = mmc_mk_some(omc_NFExpression_makeMaxValue(threadData, _ty));
            goto tmp3_done;
          }
          case 3: {
            if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT36), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
            /* Pattern matching succeeded */
            tmpMeta1 = mmc_mk_some(omc_NFExpression_makeMinValue(threadData, _ty));
            goto tmp3_done;
          }
          case 4: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            
            /* Pattern matching succeeded */
            tmpMeta7 = stringAppend(_OMC_LIT32,omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, _fn)));
            tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addSourceMessage(threadData, _OMC_LIT31, tmpMeta6, _OMC_LIT34);
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
    _defaultValue = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _defaultValue;
}

DLLDirection
modelica_metatype omc_NFCall_makeTypedReduction(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty, modelica_integer _var, modelica_integer _purity, modelica_metatype _arg, modelica_metatype _iters, modelica_metatype _info)
{
  modelica_metatype _call = NULL;
  modelica_string _fold_id = NULL;
  modelica_string _res_id = NULL;
  modelica_metatype _default_exp = NULL;
  modelica_metatype _fold_exp = NULL;
  modelica_metatype _fold_tuple = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _call has no default value.
  // _fold_id has no default value.
  // _res_id has no default value.
  // _default_exp has no default value.
  // _fold_exp has no default value.
  // _fold_tuple has no default value.
  _fold_id = omc_Util_getTempVariableIndex(threadData);

  _res_id = omc_Util_getTempVariableIndex(threadData);

  _default_exp = omc_NFCall_reductionDefaultValue(threadData, _fn, _ty);

  _fold_exp = omc_NFCall_reductionFoldExpression(threadData, _fn, _ty, (modelica_integer)_var, (modelica_integer)_purity, _fold_id, _res_id, _info);

  tmpMeta1 = mmc_mk_box3(0, _fold_exp, _fold_id, _res_id);
  _fold_tuple = tmpMeta1;

  tmpMeta2 = mmc_mk_box9(9, &NFCall_TYPED__REDUCTION__desc, _fn, _ty, mmc_mk_integer((modelica_integer)_var), mmc_mk_integer((modelica_integer)_purity), _arg, _iters, _default_exp, _fold_tuple);
  _call = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _call;
}
modelica_metatype boxptr_NFCall_makeTypedReduction(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _purity, modelica_metatype _arg, modelica_metatype _iters, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_var);
  tmp2 = mmc_unbox_integer(_purity);
  _call = omc_NFCall_makeTypedReduction(threadData, _fn, _ty, tmp1, tmp2, _arg, _iters, _info);
  /* skip box _call; NFCall */
  return _call;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity)
{
  modelica_metatype _call = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _variability;
  modelica_integer _purity;
  modelica_metatype _range = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _default_exp = NULL;
  modelica_metatype _fold_exp = NULL;
  modelica_metatype _iter = NULL;
  modelica_integer _iter_var;
  modelica_integer _exp_var;
  modelica_integer _iter_pur;
  modelica_integer _exp_pur;
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _next_context;
  modelica_metatype _fn = NULL;
  modelica_string _fold_id = NULL;
  modelica_string _res_id = NULL;
  modelica_metatype _fold_tuple = NULL;
  modelica_integer tmp2_c2 __attribute__((unused)) = 0;
  modelica_integer tmp2_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  // _ty has no default value.
  // _variability has no default value.
  // _purity has no default value.
  // _range has no default value.
  // _arg has no default value.
  // _default_exp has no default value.
  // _fold_exp has no default value.
  // _iter has no default value.
  // _iter_var has no default value.
  // _exp_var has no default value.
  // _iter_pur has no default value.
  // _exp_pur has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iters = tmpMeta1;
  // _next_context has no default value.
  // _fn has no default value.
  // _fold_id has no default value.
  // _res_id has no default value.
  // _fold_tuple has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _call;
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,5,3) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          _variability = 1;

          _purity = 1;

          _next_context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 4194304));

          {
            modelica_metatype _i;
            for (tmpMeta7 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _i = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _i;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              _iter = tmpMeta9;
              _range = tmpMeta10;

              if(omc_NFExpression_isEmpty(threadData, _range))
              {
                tmpMeta11 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                _range = omc_NFTyping_deduceIterationRangeExp(threadData, tmpMeta11, _iter, _info);
              }

              _range = omc_NFTyping_typeIterator(threadData, _iter, _range, _context, 0 /* false */ ,NULL ,&_iter_var ,&_iter_pur);

              _variability = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_variability, (modelica_integer)_iter_var);

              _purity = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_purity, (modelica_integer)_iter_pur);

              tmpMeta13 = mmc_mk_box2(0, _iter, _range);
              tmpMeta12 = mmc_mk_cons(tmpMeta13, _iters);
              _iters = tmpMeta12;
            }
          }

          _next_context = omc_NFInstContext_set(threadData, _next_context, ((modelica_integer) 8192));

          _arg = omc_NFTyping_typeExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _next_context, _info, 0 /* false */ ,&_ty ,&_exp_var ,&_exp_pur);

          _variability = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_variability, (modelica_integer)_exp_var);

          _purity = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_purity, (modelica_integer)_exp_pur);

          /* Pattern-matching assignment */
          tmpMeta15 = omc_NFFunction_Function_typeRefCache(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_integer) 16));
          if (listEmpty(tmpMeta15)) goto goto_3;
          tmpMeta16 = MMC_CAR(tmpMeta15);
          tmpMeta17 = MMC_CDR(tmpMeta15);
          if (!listEmpty(tmpMeta17)) goto goto_3;
          _fn = tmpMeta16;

          omc_NFTypeCheck_checkReductionType(threadData, _ty, omc_NFFunction_Function_name(threadData, _fn), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _info);
          tmpMeta[0+0] = omc_NFCall_makeTypedReduction(threadData, _fn, _ty, (modelica_integer)_variability, (modelica_integer)_purity, _arg, _iters, _info);
          tmpMeta[0+1] = _ty;
          tmp2_c2 = (modelica_integer)_variability;
          tmp2_c3 = (modelica_integer)_purity;
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT37, _OMC_LIT38);
          goto goto_3;
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
  _call = tmpMeta[0+0];
  _ty = tmpMeta[0+1];
  _variability = tmp2_c2;
  _purity = tmp2_c3;
  _return: OMC_LABEL_UNUSED
  if (out_ty) { *out_ty = _ty; }
  if (out_variability) { *out_variability = _variability; }
  if (out_purity) { *out_purity = _purity; }
  return _call;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeReduction(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity)
{
  modelica_integer tmp1;
  modelica_integer _variability;
  modelica_integer _purity;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _call = omc_NFCall_typeReduction(threadData, __omcQ_24in_5Fcall, tmp1, _info, out_ty, &_variability, &_purity);
  /* skip box _call; NFCall */
  /* skip box _ty; NFType */
  if (out_variability) { *out_variability = mmc_mk_icon(_variability); }
  if (out_purity) { *out_purity = mmc_mk_icon(_purity); }
  return _call;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_typeArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity)
{
  modelica_metatype _call = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _variability;
  modelica_integer _purity;
  modelica_metatype _arg = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _iter_ty = NULL;
  modelica_integer _iter_var;
  modelica_integer _exp_var;
  modelica_integer _iter_pur;
  modelica_integer _exp_pur;
  modelica_metatype _iter = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _next_context;
  modelica_boolean _is_structural;
  modelica_integer tmp3_c2 __attribute__((unused)) = 0;
  modelica_integer tmp3_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  // _ty has no default value.
  // _variability has no default value.
  // _purity has no default value.
  // _arg has no default value.
  // _range has no default value.
  // _iter_ty has no default value.
  // _iter_var has no default value.
  // _exp_var has no default value.
  // _iter_pur has no default value.
  // _exp_pur has no default value.
  // _iter has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _dims = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _iters = tmpMeta2;
  // _next_context has no default value.
  // _is_structural has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _call;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,3,2) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _variability = 1;

          _purity = 1;

          _is_structural = (!omc_NFInstContext_inFunction(threadData, _context));

          _next_context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 4194304));

          {
            modelica_metatype _i;
            for (tmpMeta8 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _i = MMC_CAR(tmpMeta8);
              /* Pattern-matching assignment */
              tmpMeta9 = _i;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
              _iter = tmpMeta10;
              _range = tmpMeta11;

              if(omc_NFExpression_isEmpty(threadData, _range))
              {
                tmpMeta12 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                _range = omc_NFTyping_deduceIterationRangeExp(threadData, tmpMeta12, _iter, _info);
              }

              _range = omc_NFTyping_typeIterator(threadData, _iter, _range, _next_context, _is_structural ,&_iter_ty ,&_iter_var ,&_iter_pur);

              if(_is_structural)
              {
                if(omc_NFInstContext_inRelaxed(threadData, _context))
                {
                  _range = omc_NFCeval_tryEvalExp(threadData, _range);
                }
                else
                {
                  _range = omc_NFCeval_evalExp(threadData, _range, omc_NFCeval_EvalTarget_new(threadData, _info, ((modelica_integer) 131072), mmc_mk_none()));
                }

                _iter_ty = omc_NFExpression_typeOf(threadData, _range);
              }

              _dims = omc_List_append__reverse(threadData, omc_NFType_arrayDims(threadData, _iter_ty), _dims);

              _variability = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_variability, (modelica_integer)_iter_var);

              _purity = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_purity, (modelica_integer)_iter_pur);

              tmpMeta14 = mmc_mk_box2(0, _iter, _range);
              tmpMeta13 = mmc_mk_cons(tmpMeta14, _iters);
              _iters = tmpMeta13;
            }
          }

          _dims = listReverseInPlace(_dims);

          _next_context = omc_NFInstContext_set(threadData, _next_context, ((modelica_integer) 8192));

          _arg = omc_NFTyping_typeExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _next_context, _info, 0 /* false */ ,&_ty ,&_exp_var ,&_exp_pur);

          _variability = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_variability, (modelica_integer)_exp_var);

          _purity = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_purity, (modelica_integer)_exp_pur);

          _ty = omc_NFType_liftArrayLeftList(threadData, _ty, _dims);
          tmpMeta16 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _ty, mmc_mk_integer((modelica_integer)_variability), mmc_mk_integer((modelica_integer)_purity), _arg, _iters);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _ty;
          tmp3_c2 = (modelica_integer)_variability;
          tmp3_c3 = (modelica_integer)_purity;
          goto tmp5_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT39, _OMC_LIT40);
          goto goto_4;
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
  _call = tmpMeta[0+0];
  _ty = tmpMeta[0+1];
  _variability = tmp3_c2;
  _purity = tmp3_c3;
  _return: OMC_LABEL_UNUSED
  if (out_ty) { *out_ty = _ty; }
  if (out_variability) { *out_variability = _variability; }
  if (out_purity) { *out_purity = _purity; }
  return _call;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_typeArrayConstructor(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity)
{
  modelica_integer tmp1;
  modelica_integer _variability;
  modelica_integer _purity;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _call = omc_NFCall_typeArrayConstructor(threadData, __omcQ_24in_5Fcall, tmp1, _info, out_ty, &_variability, &_purity);
  /* skip box _call; NFCall */
  /* skip box _ty; NFType */
  if (out_variability) { *out_variability = mmc_mk_icon(_variability); }
  if (out_purity) { *out_purity = mmc_mk_icon(_purity); }
  return _call;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIterators(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_outIters)
{
  modelica_metatype _outScope = NULL;
  modelica_metatype _outIters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _range = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _range_node = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outScope = _scope;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIters = tmpMeta1;
  // _range has no default value.
  // _iter has no default value.
  // _range_node has no default value.
  // _ty has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = listReverse(_inIters); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 4)))))
      {
        _range = omc_NFInst_instExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 4)))), _outScope, _context, _info);
      }
      else
      {
        _range = _OMC_LIT42;
      }

      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _range;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,2) == 0) goto tmp5_end;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,5) == 0) goto tmp5_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
              
              _range_node = tmpMeta9;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!omc_NFInstNode_InstNode_isComponent(threadData, _range_node)) goto tmp5_end;
              tmpMeta10 = mmc_mk_box3(14, &NFType_COMPLEX__desc, omc_NFComponent_classInstance(threadData, omc_NFInstNode_InstNode_component(threadData, _range_node)), _OMC_LIT43);
              tmpMeta3 = tmpMeta10;
              goto tmp5_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta3 = _OMC_LIT41;
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
      _ty = tmpMeta3;

      _outScope = omc_NFInst_addIteratorToScope(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_i), 2))), _outScope, _info, _ty ,&_iter);

      tmpMeta12 = mmc_mk_box2(0, _iter, _range);
      tmpMeta11 = mmc_mk_cons(tmpMeta12, _outIters);
      _outIters = tmpMeta11;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outIters) { *out_outIters = _outIters; }
  return _outScope;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIterators(threadData_t *threadData, modelica_metatype _inIters, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_outIters)
{
  modelica_integer tmp1;
  modelica_metatype _outScope = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _outScope = omc_NFCall_instIterators(threadData, _inIters, _scope, tmp1, _info, out_outIters);
  /* skip box _outScope; NFInstNode.InstNode */
  /* skip box _outIters; list<tuple<NFInstNode.InstNode, NFExpression>> */
  return _outScope;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIteratorCallArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_iters)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _iters = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _iters has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _args;
    {
      modelica_metatype _for_scope = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _for_scope has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _for_scope = omc_NFCall_instIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 4))), _scope, _context, _info ,&_iters);

          _exp = omc_NFInst_instExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2))), _for_scope, _context, _info);
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
  if (out_iters) { *out_iters = _iters; }
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIteratorCallArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_iters)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _exp = omc_NFCall_instIteratorCallArgs(threadData, _args, _scope, tmp1, _info, out_iters);
  /* skip box _exp; NFExpression */
  /* skip box _iters; list<tuple<NFInstNode.InstNode, NFExpression>> */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instIteratorCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _callExp = NULL;
  modelica_metatype _fn_name = NULL;
  modelica_metatype _fn_ref = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _iters = NULL;
  modelica_boolean _is_array;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _callExp has no default value.
  // _fn_name has no default value.
  // _fn_ref has no default value.
  // _exp has no default value.
  // _iters has no default value.
  // _is_array has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _functionName;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT44;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _functionName;
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
  _fn_name = tmpMeta1;

  _exp = omc_NFCall_instIteratorCallArgs(threadData, _functionArgs, _scope, _context, _info ,&_iters);

  if((stringEqual(omc_AbsynUtil_crefFirstIdent(threadData, _fn_name), _OMC_LIT25)))
  {
    tmpMeta7 = mmc_mk_box3(6, &NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc, _exp, _iters);
    tmpMeta8 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta7);
    _callExp = tmpMeta8;
  }
  else
  {
    _fn_ref = omc_NFFunction_Function_instFunction(threadData, _fn_name, _scope, _context, _info, NULL, NULL);

    tmpMeta9 = mmc_mk_box4(8, &NFCall_UNTYPED__REDUCTION__desc, _fn_ref, _exp, _iters);
    tmpMeta10 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta9);
    _callExp = tmpMeta10;
  }
  _return: OMC_LABEL_UNUSED
  return _callExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instIteratorCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _callExp = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _callExp = omc_NFCall_instIteratorCall(threadData, _functionName, _functionArgs, _scope, tmp1, _info);
  /* skip box _callExp; NFExpression */
  return _callExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instNamedArg(threadData_t *threadData, modelica_metatype _absynArg, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _arg = NULL;
  modelica_string _name = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _arg has no default value.
  // _name has no default value.
  // _exp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _absynArg;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _name = tmpMeta2;
  _exp = tmpMeta3;

  tmpMeta4 = mmc_mk_box2(0, _name, omc_NFInst_instExp(threadData, _exp, _scope, _context, _info));
  _arg = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _arg;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instNamedArg(threadData_t *threadData, modelica_metatype _absynArg, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _arg = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _arg = omc_NFCall_instNamedArg(threadData, _absynArg, _scope, tmp1, _info);
  /* skip box _arg; tuple<String, NFExpression> */
  return _arg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_namedArgs)
{
  modelica_metatype _posArgs = NULL;
  modelica_metatype _namedArgs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _posArgs has no default value.
  // _namedArgs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _args;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp9;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 2)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar9;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar8 = omc_NFInst_instExp(threadData, _a, _scope, _context, _info);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar9;
          }
          _posArgs = tmpMeta6;

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp13;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_args), 3)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar11;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar10 = omc_NFCall_instNamedArg(threadData, _a, _scope, _context, _info);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar11;
          }
          _namedArgs = tmpMeta10;
          tmpMeta[0+0] = _posArgs;
          tmpMeta[0+1] = _namedArgs;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT45, _OMC_LIT46);
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
  _posArgs = tmpMeta[0+0];
  _namedArgs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_namedArgs) { *out_namedArgs = _namedArgs; }
  return _posArgs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_namedArgs)
{
  modelica_integer tmp1;
  modelica_metatype _posArgs = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _posArgs = omc_NFCall_instArgs(threadData, _args, _scope, tmp1, _info, out_namedArgs);
  /* skip box _posArgs; list<NFExpression> */
  /* skip box _namedArgs; list<tuple<String, NFExpression>> */
  return _posArgs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFCall_instNormalCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _callExp = NULL;
  modelica_metatype _fn_ref = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _named_args = NULL;
  modelica_string _name = NULL;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _callExp has no default value.
  // _fn_ref has no default value.
  // _args has no default value.
  // _named_args has no default value.
  // _name has no default value.
  _name = omc_AbsynUtil_crefFirstIdent(threadData, _functionName);

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
          _args = omc_NFCall_instArgs(threadData, _functionArgs, _scope, _context, _info ,&_named_args);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          if((omc_NFInstContext_inAnnotation(threadData, _context) && (stringEqual(_name, _OMC_LIT47))))
          {
            { /* match expression */
              modelica_metatype tmp8_1;
              tmp8_1 = _functionArgs;
              {
                volatile mmc_switch_type tmp8;
                int tmp9;
                tmp8 = 0;
                for (; tmp8 < 1; tmp8++) {
                  switch (MMC_SWITCH_CAST(tmp8)) {
                  case 0: {
                    if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,2) == 0) goto tmp7_end;
                    
                    /* Pattern matching succeeded */
                    tmpMeta5 = omc_NFInst_instExp(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_functionArgs), 2)))), _scope, _context, _info);
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
            _callExp = tmpMeta5;

            goto _return;
          }
          else
          {
            goto goto_1;
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

  { /* match expression */
    modelica_string tmp13_1;
    tmp13_1 = _name;
    {
      volatile mmc_switch_type tmp13;
      int tmp14;
      tmp13 = 0;
      for (; tmp13 < 4; tmp13++) {
        switch (MMC_SWITCH_CAST(tmp13)) {
        case 0: {
          if (4 != MMC_STRLEN(tmp13_1) || strcmp(MMC_STRINGDATA(_OMC_LIT48), MMC_STRINGDATA(tmp13_1)) != 0) goto tmp12_end;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_NFBuiltinCall_makeSizeExp(threadData, _args, _named_args, _info);
          goto tmp12_done;
        }
        case 1: {
          if (5 != MMC_STRLEN(tmp13_1) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmp13_1)) != 0) goto tmp12_end;
          /* Pattern matching succeeded */
          tmpMeta10 = omc_NFBuiltinCall_makeArrayExp(threadData, _args, _named_args, _info);
          goto tmp12_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFInstContext_inAnnotation(threadData, _context)) goto tmp12_end;
          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp17;
              int tmp18;
              tmp17 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp16_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp17 < 2; tmp17++) {
                switch (MMC_SWITCH_CAST(tmp17)) {
                case 0: {
                  /* Pattern matching succeeded */
                  _fn_ref = omc_NFFunction_Function_instFunction(threadData, _functionName, omc_NFInstNode_InstNode_topScope(threadData, _scope), _context, _info, NULL, NULL);
                  goto tmp16_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _fn_ref = omc_NFFunction_Function_instFunction(threadData, _functionName, _scope, _context, _info, NULL, NULL);
                  goto tmp16_done;
                }
                }
                goto tmp16_end;
                tmp16_end: ;
              }
              goto goto_15;
              tmp16_done:
              (void)tmp17;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp16_done2;
              goto_15:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp17 < 2) {
                goto tmp16_top;
              }
              goto goto_11;
              tmp16_done2:;
            }
          }
          ;
          tmpMeta19 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, _fn_ref, _args, _named_args, _scope);
          tmpMeta20 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta19);
          tmpMeta10 = tmpMeta20;
          goto tmp12_done;
        }
        case 3: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          _fn_ref = omc_NFFunction_Function_instFunction(threadData, _functionName, _scope, _context, _info, NULL, NULL);
          tmpMeta21 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, _fn_ref, _args, _named_args, _scope);
          tmpMeta22 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta21);
          tmpMeta10 = tmpMeta22;
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
  _callExp = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _callExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_instNormalCall(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _callExp = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _callExp = omc_NFCall_instNormalCall(threadData, _functionName, _functionArgs, _scope, tmp1, _info);
  /* skip box _callExp; NFExpression */
  return _callExp;
}

DLLDirection
modelica_boolean omc_NFCall_isCardinality(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isCardinality;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isCardinality has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))) goto tmp3_end;
          tmp1 = (stringEqual(omc_NFCall_functionNameFirst(threadData, _call), _OMC_LIT49));
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
  _isCardinality = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isCardinality;
}
modelica_metatype boxptr_NFCall_isCardinality(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isCardinality;
  modelica_metatype out_isCardinality;
  _isCardinality = omc_NFCall_isCardinality(threadData, _call);
  out_isCardinality = mmc_mk_icon(_isCardinality);
  return out_isCardinality;
}

DLLDirection
modelica_boolean omc_NFCall_isStreamOperator(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isOp;
  modelica_string _name = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOp has no default value.
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))) goto tmp3_end;
          _name = omc_NFCall_functionNameFirst(threadData, _call);
          tmp1 = ((stringEqual(_name, _OMC_LIT50)) || (stringEqual(_name, _OMC_LIT51)));
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
  _isOp = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOp;
}
modelica_metatype boxptr_NFCall_isStreamOperator(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isOp;
  modelica_metatype out_isOp;
  _isOp = omc_NFCall_isStreamOperator(threadData, _call);
  out_isOp = mmc_mk_icon(_isOp);
  return out_isOp;
}

DLLDirection
modelica_boolean omc_NFCall_isConnectionsOperator(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isOp;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))) && (stringEqual(omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))), _OMC_LIT52)));
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
  _isOp = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOp;
}
modelica_metatype boxptr_NFCall_isConnectionsOperator(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isOp;
  modelica_metatype out_isOp;
  _isOp = omc_NFCall_isConnectionsOperator(threadData, _call);
  out_isOp = mmc_mk_icon(_isOp);
  return out_isOp;
}

DLLDirection
modelica_metatype omc_NFCall_toArrayConstructor(threadData_t *threadData, modelica_metatype _iCall, modelica_metatype _index_ptr)
{
  modelica_metatype _oCall = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCall has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _iCall;
    {
      modelica_metatype _iter_name = NULL;
      modelica_metatype _start = NULL;
      modelica_metatype _body = NULL;
      modelica_metatype _iter_range = NULL;
      modelica_metatype _step = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _iterators = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _body_call = NULL;
      modelica_integer _index;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _iter_name has no default value.
      // _start has no default value.
      // _body has no default value.
      // _iter_range has no default value.
      // _step has no default value.
      // _rest has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _iterators = tmpMeta3;
      // _body_call has no default value.
      // _index has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,2,6) == 0) goto tmp4_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iCall), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 2; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta25;
                  if (4 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  _index = mmc_unbox_integer(omc_Pointer_access(threadData, _index_ptr));

                  /* Pattern-matching assignment */
                  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iCall), 6)));
                  if (listEmpty(tmpMeta12)) goto goto_8;
                  tmpMeta13 = MMC_CAR(tmpMeta12);
                  tmpMeta14 = MMC_CDR(tmpMeta12);
                  _body = tmpMeta13;
                  _rest = tmpMeta14;

                  _start = _OMC_LIT11;

                  _step = mmc_mk_none();

                  {
                    modelica_metatype _stop;
                    for (tmpMeta15 = listReverse(_rest); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
                    {
                      _stop = MMC_CAR(tmpMeta15);
                      _iter_name = omc_NFInstNode_InstNode_newIndexedIterator(threadData, _index, _OMC_LIT54, _OMC_LIT6, _OMC_LIT10);

                      _iter_range = omc_NFExpression_makeRange(threadData, _start, _step, _stop);

                      tmpMeta17 = mmc_mk_box2(0, _iter_name, _iter_range);
                      tmpMeta16 = mmc_mk_cons(tmpMeta17, _iterators);
                      _iterators = tmpMeta16;

                      _index = ((modelica_integer) 1) + _index;
                    }
                  }

                  
                  
                  { /* match expression */
                    modelica_metatype tmp22_1;
                    tmp22_1 = _body;
                    {
                      volatile mmc_switch_type tmp22;
                      int tmp23;
                      tmp22 = 0;
                      for (; tmp22 < 2; tmp22++) {
                        switch (MMC_SWITCH_CAST(tmp22)) {
                        case 0: {
                          modelica_metatype tmpMeta24;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp22_1,13,1) == 0) goto tmp21_end;
                          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp22_1), 2));
                          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,4,5) == 0) goto tmp21_end;
                          
                          _body_call = tmpMeta24;
                          /* Pattern matching succeeded */
                          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body_call), 5)));
                          tmpMeta[0+1] = listAppend(_iterators, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_body_call), 6))));
                          goto tmp21_done;
                        }
                        case 1: {
                          
                          /* Pattern matching succeeded */
                          tmpMeta[0+0] = _body;
                          tmpMeta[0+1] = _iterators;
                          goto tmp21_done;
                        }
                        }
                        goto tmp21_end;
                        tmp21_end: ;
                      }
                      goto goto_20;
                      goto_20:;
                      goto goto_8;
                      goto tmp21_done;
                      tmp21_done:;
                    }
                  }
                  _body = tmpMeta[0+0];
                  _iterators = tmpMeta[0+1];

                  omc_Pointer_update(threadData, _index_ptr, mmc_mk_integer(_index));
                  tmpMeta25 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iCall), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iCall), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iCall), 5))), _body, listReverse(_iterators));
                  tmpMeta7 = tmpMeta25;
                  goto tmp9_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = _iCall;
                  goto tmp9_done;
                }
                }
                goto tmp9_end;
                tmp9_end: ;
              }
              goto goto_8;
              goto_8:;
              goto goto_2;
              goto tmp9_done;
              tmp9_done:;
            }
          }tmpMeta1 = tmpMeta7;
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iCall;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  _oCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCall;
}

DLLDirection
void omc_NFCall_updateExternalRecordArgsInType(threadData_t *threadData, modelica_metatype _ty)
{
  modelica_metatype _node = NULL;
  modelica_metatype _cls = NULL;
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _node has no default value.
  // _cls has no default value.
  // _res has no default value.
  if(omc_NFType_isRecord(threadData, _ty))
  {
    _node = omc_NFType_complexNode(threadData, _ty);

    _cls = omc_NFInstNode_InstNode_getClass(threadData, _node);

    _res = omc_NFRestriction_setExternalRecord(threadData, omc_NFClass_restriction(threadData, _cls));

    _cls = omc_NFClass_setRestriction(threadData, _res, _cls);

    omc_NFInstNode_InstNode_updateClass(threadData, _cls, _node);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFCall_updateExternalRecordArgs(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _arg;
    for (tmpMeta1 = _args; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _arg = MMC_CAR(tmpMeta1);
      omc_NFCall_updateExternalRecordArgsInType(threadData, omc_NFExpression_typeOf(threadData, _arg));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFCall_mapFoldIteratorsExpShallow(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg)
{
  modelica_metatype _outIters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _arg = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _new_exp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIters = tmpMeta1;
  _arg = __omcQ_24in_5Farg;
  // _node has no default value.
  // _exp has no default value.
  // _new_exp has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _iters; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _node = tmpMeta4;
      _exp = tmpMeta5;

      _new_exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _exp, _arg ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _exp, _arg ,&_arg);

      tmp8 = (modelica_boolean)referenceEq(_new_exp, _exp);
      if(tmp8)
      {
        tmpMeta9 = _i;
      }
      else
      {
        tmpMeta7 = mmc_mk_box2(0, _node, _new_exp);
        tmpMeta9 = tmpMeta7;
      }
      tmpMeta6 = mmc_mk_cons(tmpMeta9, _outIters);
      _outIters = tmpMeta6;
    }
  }

  _outIters = listReverseInPlace(_outIters);
  _return: OMC_LABEL_UNUSED
  if (out_arg) { *out_arg = _arg; }
  return _outIters;
}

static modelica_metatype closure4_Util_replace(threadData_t *thData, modelica_metatype closure, modelica_metatype replaced)
{
  modelica_metatype arg = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Util_replace(thData, replaced, arg);
}
DLLDirection
modelica_metatype omc_NFCall_mapFoldExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg, modelica_metatype *out_foldArg)
{
  modelica_metatype _outCall = NULL;
  modelica_metatype _foldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCall has no default value.
  _foldArg = __omcQ_24in_5FfoldArg;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _targs = NULL;
      modelica_metatype _tnargs = NULL;
      modelica_string _s = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _default_exp = NULL;
      modelica_metatype _fold_exp = NULL;
      modelica_metatype _oe = NULL;
      int tmp4;
      // _args has no default value.
      // _nargs has no default value.
      // _targs has no default value.
      // _tnargs has no default value.
      // _s has no default value.
      // _e has no default value.
      // _iters has no default value.
      // _default_exp has no default value.
      // _fold_exp has no default value.
      // _oe has no default value.
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
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _args = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _nargs = tmpMeta5;

          {
            modelica_metatype _arg;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _arg = MMC_CAR(tmpMeta6);
              /* Pattern-matching assignment */
              tmpMeta7 = _arg;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
              _s = tmpMeta8;
              _e = tmpMeta9;

              _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e, _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e, _foldArg ,&_foldArg);

              tmpMeta11 = mmc_mk_box2(0, _s, _e);
              tmpMeta10 = mmc_mk_cons(tmpMeta11, _nargs);
              _nargs = tmpMeta10;
            }
          }
          tmpMeta13 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, listReverse(_nargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _targs = tmpMeta14;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _tnargs = tmpMeta15;

          {
            modelica_metatype _arg;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _arg = MMC_CAR(tmpMeta16);
              _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _foldArg ,&_foldArg);

              tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _e;
              _arg = tmpMeta17;

              tmpMeta18 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta18;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _arg = MMC_CAR(tmpMeta20);
              _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _foldArg ,&_foldArg);

              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = _e;
              _arg = tmpMeta21;

              tmpMeta22 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta22;
            }
          }
          tmpMeta24 = mmc_mk_box5(4, &NFCall_ARG__TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), listReverse(_targs), listReverse(_tnargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          _args = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);
          tmpMeta25 = mmc_mk_box7(5, &NFCall_TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg, NULL);
          tmpMeta26 = mmc_mk_box3(6, &NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc, _e, _iters);
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg, NULL);
          tmpMeta27 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), _e, _iters);
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), ((modelica_fnptr) _func), _foldArg, NULL);
          tmpMeta28 = mmc_mk_box4(8, &NFCall_UNTYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _e, _iters);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _foldArg ,&_foldArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), ((modelica_fnptr) _func), _foldArg, NULL);

          _default_exp = omc_NFExpression_mapFoldOptShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _oe = omc_Util_tuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))));

          if(isSome(_oe))
          {
            _oe = omc_NFExpression_mapFoldOptShallow(threadData, _oe, ((modelica_fnptr) _func), _foldArg ,&_foldArg);

            tmpMeta29 = mmc_mk_box1(0, _oe);
            _fold_exp = omc_Util_applyTuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))), (modelica_fnptr) mmc_mk_box2(0,closure4_Util_replace,tmpMeta29));
          }
          else
          {
            _fold_exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)));
          }
          tmpMeta30 = mmc_mk_box9(9, &NFCall_TYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _e, _iters, _default_exp, _fold_exp);
          tmpMeta1 = tmpMeta30;
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
  _outCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_foldArg) { *out_foldArg = _foldArg; }
  return _outCall;
}

DLLDirection
modelica_metatype omc_NFCall_mapFoldIteratorsExp(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg, modelica_metatype *out_arg)
{
  modelica_metatype _outIters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _arg = NULL;
  modelica_metatype _node = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _new_exp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIters = tmpMeta1;
  _arg = __omcQ_24in_5Farg;
  // _node has no default value.
  // _exp has no default value.
  // _new_exp has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _iters; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _node = tmpMeta4;
      _exp = tmpMeta5;

      _new_exp = omc_NFExpression_mapFold(threadData, _exp, ((modelica_fnptr) _func), _arg ,&_arg);

      tmp8 = (modelica_boolean)referenceEq(_new_exp, _exp);
      if(tmp8)
      {
        tmpMeta9 = _i;
      }
      else
      {
        tmpMeta7 = mmc_mk_box2(0, _node, _new_exp);
        tmpMeta9 = tmpMeta7;
      }
      tmpMeta6 = mmc_mk_cons(tmpMeta9, _outIters);
      _outIters = tmpMeta6;
    }
  }

  _outIters = listReverseInPlace(_outIters);
  _return: OMC_LABEL_UNUSED
  if (out_arg) { *out_arg = _arg; }
  return _outIters;
}

static modelica_metatype closure5_Util_replace(threadData_t *thData, modelica_metatype closure, modelica_metatype replaced)
{
  modelica_metatype arg = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Util_replace(thData, replaced, arg);
}
DLLDirection
modelica_metatype omc_NFCall_mapFoldExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg, modelica_metatype *out_foldArg)
{
  modelica_metatype _outCall = NULL;
  modelica_metatype _foldArg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCall has no default value.
  _foldArg = __omcQ_24in_5FfoldArg;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _targs = NULL;
      modelica_metatype _tnargs = NULL;
      modelica_string _s = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _default_exp = NULL;
      modelica_metatype _fold_exp = NULL;
      modelica_metatype _oe = NULL;
      int tmp4;
      // _args has no default value.
      // _nargs has no default value.
      // _targs has no default value.
      // _tnargs has no default value.
      // _s has no default value.
      // _e has no default value.
      // _iters has no default value.
      // _default_exp has no default value.
      // _fold_exp has no default value.
      // _oe has no default value.
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
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _args = omc_List_map1Fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), boxvar_NFExpression_mapFold, ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _nargs = tmpMeta5;

          {
            modelica_metatype _arg;
            for (tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _arg = MMC_CAR(tmpMeta6);
              /* Pattern-matching assignment */
              tmpMeta7 = _arg;
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
              _s = tmpMeta8;
              _e = tmpMeta9;

              _e = omc_NFExpression_mapFold(threadData, _e, ((modelica_fnptr) _func), _foldArg ,&_foldArg);

              tmpMeta11 = mmc_mk_box2(0, _s, _e);
              tmpMeta10 = mmc_mk_cons(tmpMeta11, _nargs);
              _nargs = tmpMeta10;
            }
          }
          tmpMeta13 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, listReverse(_nargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _targs = tmpMeta14;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _tnargs = tmpMeta15;

          {
            modelica_metatype _arg;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _arg = MMC_CAR(tmpMeta16);
              _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

              tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[3] = _e;
              _arg = tmpMeta17;

              tmpMeta18 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta18;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _arg = MMC_CAR(tmpMeta20);
              _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = _e;
              _arg = tmpMeta21;

              tmpMeta22 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta22;
            }
          }
          tmpMeta24 = mmc_mk_box5(4, &NFCall_ARG__TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), listReverse(_targs), listReverse(_tnargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          _args = omc_List_map1Fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), boxvar_NFExpression_mapFold, ((modelica_fnptr) _func), _foldArg ,&_foldArg);
          tmpMeta25 = mmc_mk_box7(5, &NFCall_TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);
          tmpMeta26 = mmc_mk_box3(6, &NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc, _e, _iters);
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);
          tmpMeta27 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), _e, _iters);
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);
          tmpMeta28 = mmc_mk_box4(8, &NFCall_UNTYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _e, _iters);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _iters = omc_NFCall_mapFoldIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _default_exp = omc_NFExpression_mapFoldOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func), _foldArg ,&_foldArg);

          _oe = omc_Util_tuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))));

          if(isSome(_oe))
          {
            _oe = omc_NFExpression_mapFoldOpt(threadData, _oe, ((modelica_fnptr) _func), _foldArg ,&_foldArg);

            tmpMeta29 = mmc_mk_box1(0, _oe);
            _fold_exp = omc_Util_applyTuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))), (modelica_fnptr) mmc_mk_box2(0,closure5_Util_replace,tmpMeta29));
          }
          else
          {
            _fold_exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)));
          }
          tmpMeta30 = mmc_mk_box9(9, &NFCall_TYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _e, _iters, _default_exp, _fold_exp);
          tmpMeta1 = tmpMeta30;
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
  _outCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_foldArg) { *out_foldArg = _foldArg; }
  return _outCall;
}

DLLDirection
modelica_metatype omc_NFCall_mapIteratorsExpShallow(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func)
{
  modelica_metatype _outIters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _node = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _new_exp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIters = tmpMeta1;
  // _node has no default value.
  // _exp has no default value.
  // _new_exp has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _iters; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _node = tmpMeta4;
      _exp = tmpMeta5;

      _new_exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _exp) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _exp);

      tmp8 = (modelica_boolean)referenceEq(_new_exp, _exp);
      if(tmp8)
      {
        tmpMeta9 = _i;
      }
      else
      {
        tmpMeta7 = mmc_mk_box2(0, _node, _new_exp);
        tmpMeta9 = tmpMeta7;
      }
      tmpMeta6 = mmc_mk_cons(tmpMeta9, _outIters);
      _outIters = tmpMeta6;
    }
  }

  _outIters = listReverseInPlace(_outIters);
  _return: OMC_LABEL_UNUSED
  return _outIters;
}

static modelica_metatype closure6_NFExpression_mapShallowOpt(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_mapShallowOpt(thData, exp, func);
}
DLLDirection
modelica_metatype omc_NFCall_mapExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_metatype _outCall = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCall has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _targs = NULL;
      modelica_metatype _tnargs = NULL;
      modelica_string _s = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _default_exp = NULL;
      modelica_metatype _fold_exp = NULL;
      int tmp4;
      // _args has no default value.
      // _nargs has no default value.
      // _targs has no default value.
      // _tnargs has no default value.
      // _s has no default value.
      // _e has no default value.
      // _iters has no default value.
      // _default_exp has no default value.
      // _fold_exp has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp8;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar13;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _arg);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar13;
          }
          _args = tmpMeta5;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _nargs = tmpMeta9;

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              /* Pattern-matching assignment */
              tmpMeta11 = _arg;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              _s = tmpMeta12;
              _e = tmpMeta13;

              _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e);

              tmpMeta15 = mmc_mk_box2(0, _s, _e);
              tmpMeta14 = mmc_mk_cons(tmpMeta15, _nargs);
              _nargs = tmpMeta14;
            }
          }
          tmpMeta17 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, listReverse(_nargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _targs = tmpMeta18;

          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          _tnargs = tmpMeta19;

          {
            modelica_metatype _arg;
            for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _arg = MMC_CAR(tmpMeta20);
              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
              _arg = tmpMeta21;

              tmpMeta22 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta22;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
            {
              _arg = MMC_CAR(tmpMeta24);
              tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
              _arg = tmpMeta25;

              tmpMeta26 = mmc_mk_cons(_arg, _tnargs);
              _tnargs = tmpMeta26;
            }
          }
          tmpMeta28 = mmc_mk_box5(4, &NFCall_ARG__TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), listReverse(_targs), listReverse(_tnargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp30;
            modelica_metatype tmpMeta31;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp32;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta31; /* defaultValue */
            tmp30 = &__omcQ_24tmpVar15;
            while(1) {
              tmp32 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp32--;
              }
              if (tmp32 == 0) {
                __omcQ_24tmpVar14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _arg);
                *tmp30 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp30 = &MMC_CDR(*tmp30);
              } else if (tmp32 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp30 = mmc_mk_nil();
            tmpMeta29 = __omcQ_24tmpVar15;
          }
          _args = tmpMeta29;
          tmpMeta33 = mmc_mk_box7(5, &NFCall_TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))));
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta34;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _iters = omc_NFCall_mapIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));
          tmpMeta34 = mmc_mk_box3(6, &NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc, _e, _iters);
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));

          _iters = omc_NFCall_mapIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          tmpMeta35 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), _e, _iters);
          tmpMeta1 = tmpMeta35;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));

          _iters = omc_NFCall_mapIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), ((modelica_fnptr) _func));
          tmpMeta36 = mmc_mk_box4(8, &NFCall_UNTYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _e, _iters);
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          _e = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))));

          _iters = omc_NFCall_mapIteratorsExpShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), ((modelica_fnptr) _func));

          _default_exp = omc_NFExpression_mapShallowOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func));

          tmpMeta37 = mmc_mk_box1(0, ((modelica_fnptr) _func));
          _fold_exp = omc_Util_applyTuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))), (modelica_fnptr) mmc_mk_box2(0,closure6_NFExpression_mapShallowOpt,tmpMeta37));
          tmpMeta38 = mmc_mk_box9(9, &NFCall_TYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _e, _iters, _default_exp, _fold_exp);
          tmpMeta1 = tmpMeta38;
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
  _outCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCall;
}

DLLDirection
modelica_metatype omc_NFCall_mapIteratorsExp(threadData_t *threadData, modelica_metatype _iters, modelica_fnptr _func)
{
  modelica_metatype _outIters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _node = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _new_exp = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_boolean tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outIters = tmpMeta1;
  // _node has no default value.
  // _exp has no default value.
  // _new_exp has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta2 = _iters; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _i;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _node = tmpMeta4;
      _exp = tmpMeta5;

      _new_exp = omc_NFExpression_map(threadData, _exp, ((modelica_fnptr) _func));

      tmp8 = (modelica_boolean)referenceEq(_new_exp, _exp);
      if(tmp8)
      {
        tmpMeta9 = _i;
      }
      else
      {
        tmpMeta7 = mmc_mk_box2(0, _node, _new_exp);
        tmpMeta9 = tmpMeta7;
      }
      tmpMeta6 = mmc_mk_cons(tmpMeta9, _outIters);
      _outIters = tmpMeta6;
    }
  }

  _outIters = listReverseInPlace(_outIters);
  _return: OMC_LABEL_UNUSED
  return _outIters;
}

static modelica_metatype closure7_NFExpression_map(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_map(thData, exp, func);
}static modelica_metatype closure8_NFExpression_mapOpt(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFExpression_mapOpt(thData, exp, func);
}
DLLDirection
modelica_metatype omc_NFCall_mapExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_metatype _outCall = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCall has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _args = NULL;
      modelica_metatype _nargs = NULL;
      modelica_metatype _targs = NULL;
      modelica_metatype _tnargs = NULL;
      modelica_string _s = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _default_exp = NULL;
      modelica_metatype _fold_exp = NULL;
      int tmp4;
      // _args has no default value.
      // _nargs has no default value.
      // _targs has no default value.
      // _tnargs has no default value.
      // _s has no default value.
      // _e has no default value.
      // _iters has no default value.
      // _default_exp has no default value.
      // _fold_exp has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp8;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar17;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar16 = omc_NFExpression_map(threadData, _arg, ((modelica_fnptr) _func));
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar17;
          }
          _args = tmpMeta5;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _nargs = tmpMeta9;

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              /* Pattern-matching assignment */
              tmpMeta11 = _arg;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              _s = tmpMeta12;
              _e = tmpMeta13;

              _e = omc_NFExpression_map(threadData, _e, ((modelica_fnptr) _func));

              tmpMeta15 = mmc_mk_box2(0, _s, _e);
              tmpMeta14 = mmc_mk_cons(tmpMeta15, _nargs);
              _nargs = tmpMeta14;
            }
          }
          tmpMeta17 = mmc_mk_box5(3, &NFCall_UNTYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, listReverse(_nargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 4: {
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
          
          /* Pattern matching succeeded */
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          _targs = tmpMeta18;

          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          _tnargs = tmpMeta19;

          {
            modelica_metatype _arg;
            for (tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _arg = MMC_CAR(tmpMeta20);
              tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[3] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func));
              _arg = tmpMeta21;

              tmpMeta22 = mmc_mk_cons(_arg, _targs);
              _targs = tmpMeta22;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
            {
              _arg = MMC_CAR(tmpMeta24);
              tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_arg), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[3] = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func));
              _arg = tmpMeta25;

              tmpMeta26 = mmc_mk_cons(_arg, _tnargs);
              _tnargs = tmpMeta26;
            }
          }
          tmpMeta28 = mmc_mk_box5(4, &NFCall_ARG__TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), listReverse(_targs), listReverse(_tnargs), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp30;
            modelica_metatype tmpMeta31;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp32;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta31; /* defaultValue */
            tmp30 = &__omcQ_24tmpVar19;
            while(1) {
              tmp32 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp32--;
              }
              if (tmp32 == 0) {
                __omcQ_24tmpVar18 = omc_NFExpression_map(threadData, _arg, ((modelica_fnptr) _func));
                *tmp30 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp30 = &MMC_CDR(*tmp30);
              } else if (tmp32 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp30 = mmc_mk_nil();
            tmpMeta29 = __omcQ_24tmpVar19;
          }
          _args = tmpMeta29;
          tmpMeta33 = mmc_mk_box7(5, &NFCall_TYPED__CALL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _args, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))));
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta34;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_fnptr) _func));

          _iters = omc_NFCall_mapIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));
          tmpMeta34 = mmc_mk_box3(6, &NFCall_UNTYPED__ARRAY__CONSTRUCTOR__desc, _e, _iters);
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), ((modelica_fnptr) _func));

          _iters = omc_NFCall_mapIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          tmpMeta35 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), _e, _iters);
          tmpMeta1 = tmpMeta35;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta36;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          _iters = omc_NFCall_mapIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), ((modelica_fnptr) _func));
          tmpMeta36 = mmc_mk_box4(8, &NFCall_UNTYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _e, _iters);
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          
          /* Pattern matching succeeded */
          _e = omc_NFExpression_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));

          _iters = omc_NFCall_mapIteratorsExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), ((modelica_fnptr) _func));

          tmpMeta37 = mmc_mk_box1(0, ((modelica_fnptr) _func));
          _default_exp = omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), (modelica_fnptr) mmc_mk_box2(0,closure7_NFExpression_map,tmpMeta37));

          tmpMeta38 = mmc_mk_box1(0, ((modelica_fnptr) _func));
          _fold_exp = omc_Util_applyTuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9))), (modelica_fnptr) mmc_mk_box2(0,closure8_NFExpression_mapOpt,tmpMeta38));
          tmpMeta39 = mmc_mk_box9(9, &NFCall_TYPED__REDUCTION__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _e, _iters, _default_exp, _fold_exp);
          tmpMeta1 = tmpMeta39;
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
  _outCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCall;
}

DLLDirection
modelica_metatype omc_NFCall_foldExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg)
{
  modelica_metatype _foldArg = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg = __omcQ_24in_5FfoldArg;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      modelica_metatype _e = NULL;
      int tmp3;
      // _e has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_foldList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg);

          {
            modelica_metatype _arg;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _arg = MMC_CAR(tmpMeta4);
              /* Pattern-matching assignment */
              tmpMeta5 = _arg;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
              _e = tmpMeta6;

              _foldArg = omc_NFExpression_fold(threadData, _e, ((modelica_fnptr) _func), _foldArg);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _arg = MMC_CAR(tmpMeta8);
              _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func), _foldArg);
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func), _foldArg);
            }
          }
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_foldList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_fnptr) _func), _foldArg);

          {
            modelica_metatype _i;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _i = MMC_CAR(tmpMeta12);
              _foldArg = omc_NFExpression_fold(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func), _foldArg);
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), ((modelica_fnptr) _func), _foldArg);

          {
            modelica_metatype _i;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _i = MMC_CAR(tmpMeta14);
              _foldArg = omc_NFExpression_fold(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func), _foldArg);
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func), _foldArg);

          {
            modelica_metatype _i;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _i = MMC_CAR(tmpMeta16);
              _foldArg = omc_NFExpression_fold(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func), _foldArg);
            }
          }
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          _foldArg = omc_NFExpression_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func), _foldArg);

          {
            modelica_metatype _i;
            for (tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))); !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _i = MMC_CAR(tmpMeta18);
              _foldArg = omc_NFExpression_fold(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func), _foldArg);
            }
          }

          _foldArg = omc_NFExpression_foldOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func), _foldArg);

          _foldArg = omc_NFExpression_foldOpt(threadData, omc_Util_tuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)))), ((modelica_fnptr) _func), _foldArg);
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
  return _foldArg;
}

DLLDirection
void omc_NFCall_applyExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      modelica_metatype _e = NULL;
      int tmp3;
      // _e has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyListShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          {
            modelica_metatype _arg;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _arg = MMC_CAR(tmpMeta4);
              /* Pattern-matching assignment */
              tmpMeta5 = _arg;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
              _e = tmpMeta6;

              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _arg = MMC_CAR(tmpMeta8);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
            }
          }
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyListShallow(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          {
            modelica_metatype _i;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _i = MMC_CAR(tmpMeta12);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple22(threadData, _i)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple22(threadData, _i));
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));

          {
            modelica_metatype _i;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _i = MMC_CAR(tmpMeta14);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple22(threadData, _i)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple22(threadData, _i));
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));

          {
            modelica_metatype _i;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _i = MMC_CAR(tmpMeta16);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple22(threadData, _i)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple22(threadData, _i));
            }
          }
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))));

          {
            modelica_metatype _i;
            for (tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))); !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _i = MMC_CAR(tmpMeta18);
              (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Util_tuple22(threadData, _i)) : ((void(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Util_tuple22(threadData, _i));
            }
          }

          omc_NFExpression_applyShallowOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func));

          omc_NFExpression_applyShallowOpt(threadData, omc_Util_tuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)))), ((modelica_fnptr) _func));
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
void omc_NFCall_applyExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      modelica_metatype _e = NULL;
      int tmp3;
      // _e has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          modelica_metatype tmpMeta4;
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          {
            modelica_metatype _arg;
            for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
            {
              _arg = MMC_CAR(tmpMeta4);
              /* Pattern-matching assignment */
              tmpMeta5 = _arg;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
              _e = tmpMeta6;

              omc_NFExpression_apply(threadData, _e, ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _arg = MMC_CAR(tmpMeta8);
              omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func));
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_NFExpression_applyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_fnptr) _func));

          {
            modelica_metatype _i;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _i = MMC_CAR(tmpMeta12);
              omc_NFExpression_apply(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), ((modelica_fnptr) _func));

          {
            modelica_metatype _i;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _i = MMC_CAR(tmpMeta14);
              omc_NFExpression_apply(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          {
            modelica_metatype _i;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _i = MMC_CAR(tmpMeta16);
              omc_NFExpression_apply(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func));
            }
          }
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          omc_NFExpression_apply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));

          {
            modelica_metatype _i;
            for (tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))); !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _i = MMC_CAR(tmpMeta18);
              omc_NFExpression_apply(threadData, omc_Util_tuple22(threadData, _i), ((modelica_fnptr) _func));
            }
          }

          omc_NFExpression_applyOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), ((modelica_fnptr) _func));

          omc_NFExpression_applyOpt(threadData, omc_Util_tuple31(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)))), ((modelica_fnptr) _func));
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
modelica_boolean omc_NFCall_containsExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _e = NULL;
      int tmp4;
      // _e has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _res = omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          if((!_res))
          {
            {
              modelica_metatype _arg;
              for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _arg = MMC_CAR(tmpMeta5);
                /* Pattern-matching assignment */
                tmpMeta6 = _arg;
                tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
                _e = tmpMeta7;

                if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e)))
                {
                  _res = 1 /* true */;

                  break;
                }
              }
            }
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _arg = MMC_CAR(tmpMeta9);
              if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))))))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _arg = MMC_CAR(tmpMeta11);
              if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))))))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_any(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))));
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
modelica_metatype boxptr_NFCall_containsExpShallow(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFCall_containsExpShallow(threadData, _call, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_boolean omc_NFCall_containsExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _e = NULL;
      int tmp4;
      // _e has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _res = omc_NFExpression_listContains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));

          if((!_res))
          {
            {
              modelica_metatype _arg;
              for (tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _arg = MMC_CAR(tmpMeta5);
                /* Pattern-matching assignment */
                tmpMeta6 = _arg;
                tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
                _e = tmpMeta7;

                if(omc_NFExpression_contains(threadData, _e, ((modelica_fnptr) _func)))
                {
                  _res = 1 /* true */;

                  break;
                }
              }
            }
          }
          tmp1 = _res;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _arg = MMC_CAR(tmpMeta9);
              if(omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func)))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _arg = MMC_CAR(tmpMeta11);
              if(omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), ((modelica_fnptr) _func)))
              {
                _res = 1 /* true */;

                goto _return;
              }
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_listContains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), ((modelica_fnptr) _func));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), ((modelica_fnptr) _func));
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
modelica_metatype boxptr_NFCall_containsExp(threadData_t *threadData, modelica_metatype _call, modelica_fnptr _func)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFCall_containsExp(threadData, _call, _func);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFCall_typeCast(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcallExp, modelica_metatype _ty)
{
  modelica_metatype _callExp = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _cast_ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _callExp = __omcQ_24in_5FcallExp;
  // _call has no default value.
  // _cast_ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _callExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,13,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _call = tmpMeta2;

  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _call;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))) goto tmp5_end;
          _cast_ty = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _ty);
          { /* match expression */
            modelica_string tmp11_1;
            tmp11_1 = omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))));
            {
              volatile mmc_switch_type tmp11;
              int tmp12;
              tmp11 = 0;
              for (; tmp11 < 4; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  if (4 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmpMeta14 = mmc_mk_cons(omc_NFExpression_typeCast(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), _ty), listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))));
                  tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[6] = tmpMeta14;
                  _call = tmpMeta13;

                  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = _cast_ty;
                  _call = tmpMeta15;
                  tmpMeta16 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta8 = tmpMeta16;
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  if (8 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  /* Pattern matching succeeded */
                  tmpMeta18 = mmc_mk_cons(omc_NFExpression_typeCast(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), _ty), MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[6] = tmpMeta18;
                  _call = tmpMeta17;

                  tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = _cast_ty;
                  _call = tmpMeta19;
                  tmpMeta20 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta8 = tmpMeta20;
                  goto tmp10_done;
                }
                case 2: {
                  modelica_metatype tmpMeta21;
                  modelica_metatype tmpMeta22;
                  modelica_metatype tmpMeta26;
                  if (13 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT47), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar21;
                    modelica_metatype* tmp23;
                    modelica_metatype tmpMeta24;
                    modelica_metatype __omcQ_24tmpVar20;
                    modelica_integer tmp25;
                    modelica_metatype _arg_loopVar = 0;
                    modelica_metatype _arg;
                    _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
                    tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar21 = tmpMeta24; /* defaultValue */
                    tmp23 = &__omcQ_24tmpVar21;
                    while(1) {
                      tmp25 = 1;
                      if (!listEmpty(_arg_loopVar)) {
                        _arg = MMC_CAR(_arg_loopVar);
                        _arg_loopVar = MMC_CDR(_arg_loopVar);
                        tmp25--;
                      }
                      if (tmp25 == 0) {
                        __omcQ_24tmpVar20 = omc_NFExpression_typeCast(threadData, _arg, _ty);
                        *tmp23 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                        tmp23 = &MMC_CDR(*tmp23);
                      } else if (tmp25 == 1) {
                        break;
                      } else {
                        goto goto_9;
                      }
                    }
                    *tmp23 = mmc_mk_nil();
                    tmpMeta22 = __omcQ_24tmpVar21;
                  }
                  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(8));
                  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[6] = tmpMeta22;
                  _call = tmpMeta21;
                  tmpMeta26 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta8 = tmpMeta26;
                  goto tmp10_done;
                }
                case 3: {
                  modelica_metatype tmpMeta27;
                  
                  /* Pattern matching succeeded */
                  tmpMeta27 = mmc_mk_box3(26, &NFExpression_CAST__desc, _cast_ty, _callExp);
                  tmpMeta8 = tmpMeta27;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_4;
              goto tmp10_done;
              tmp10_done:;
            }
          }tmpMeta3 = tmpMeta8;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_box3(26, &NFExpression_CAST__desc, omc_NFType_setArrayElementType(threadData, omc_NFCall_typeOf(threadData, _call), _ty), _callExp);
          tmpMeta3 = tmpMeta28;
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
  _callExp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _callExp;
}

DLLDirection
modelica_metatype omc_NFCall_retype(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall)
{
  modelica_metatype _call = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _dims = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _ty has no default value.
      // _dims has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _dims = tmpMeta5;

          {
            modelica_metatype _i;
            for (tmpMeta6 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _i = MMC_CAR(tmpMeta6);
              _dims = listAppend(omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, omc_Util_tuple22(threadData, _i))), _dims);
            }
          }

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_NFType_liftArrayLeftList(threadData, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _dims);
          _call = tmpMeta8;
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
  return _call;
}

DLLDirection
modelica_boolean omc_NFCall_isVectorizeable(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isVect;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isVect has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_string _name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,13) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _name = tmpMeta8;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp12_1;
            tmp12_1 = _name;
            {
              volatile mmc_switch_type tmp12;
              int tmp13;
              tmp12 = 0;
              for (; tmp12 < 4; tmp12++) {
                switch (MMC_SWITCH_CAST(tmp12)) {
                case 0: {
                  if (3 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  /* Pattern matching succeeded */
                  tmp9 = 0 /* false */;
                  goto tmp11_done;
                }
                case 1: {
                  if (3 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  /* Pattern matching succeeded */
                  tmp9 = 0 /* false */;
                  goto tmp11_done;
                }
                case 2: {
                  if (8 != MMC_STRLEN(tmp12_1) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmp12_1)) != 0) goto tmp11_end;
                  /* Pattern matching succeeded */
                  tmp9 = 0 /* false */;
                  goto tmp11_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmp9 = 1 /* true */;
                  goto tmp11_done;
                }
                }
                goto tmp11_end;
                tmp11_end: ;
              }
              goto goto_10;
              goto_10:;
              goto goto_2;
              goto tmp11_done;
              tmp11_done:;
            }
          }tmp1 = tmp9;
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
  _isVect = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isVect;
}
modelica_metatype boxptr_NFCall_isVectorizeable(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isVect;
  modelica_metatype out_isVect;
  _isVect = omc_NFCall_isVectorizeable(threadData, _call);
  out_isVect = mmc_mk_icon(_isVect);
  return out_isVect;
}

DLLDirection
modelica_metatype omc_NFCall_expandReduction(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _outCall = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCall has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _iters = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iters has no default value.
      // _iter has no default value.
      // _ty has no default value.
      tmp4 = 0;
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
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _iters = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_iters) > ((modelica_integer) 1))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta7 = _iters;
          if (listEmpty(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          _iter = tmpMeta8;
          _iters = tmpMeta9;

          _ty = omc_NFType_liftArrayLeftList(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, omc_Util_tuple22(threadData, _iter))));

          tmpMeta10 = mmc_mk_cons(_iter, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), tmpMeta10);
          _outCall = tmpMeta11;

          {
            modelica_metatype _i;
            for (tmpMeta12 = _iters; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _i = MMC_CAR(tmpMeta12);
              _ty = omc_NFType_liftArrayLeftList(threadData, _ty, omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, omc_Util_tuple22(threadData, _i))));

              tmpMeta13 = mmc_mk_box2(16, &NFExpression_CALL__desc, _outCall);
              tmpMeta14 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta15 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))), tmpMeta13, tmpMeta14);
              _outCall = tmpMeta15;
            }
          }
          tmpMeta1 = _outCall;
          goto tmp3_done;
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
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _iters = tmpMeta17;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_iters) > ((modelica_integer) 1))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta18 = _iters;
          if (listEmpty(tmpMeta18)) goto goto_2;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          _iter = tmpMeta19;
          _iters = tmpMeta20;

          tmpMeta21 = mmc_mk_cons(_iter, MMC_REFSTRUCTLIT(mmc_nil));
          _outCall = omc_NFCall_makeTypedReduction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), tmpMeta21, _OMC_LIT6);

          {
            modelica_metatype _i;
            for (tmpMeta22 = _iters; !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
            {
              _i = MMC_CAR(tmpMeta22);
              tmpMeta23 = mmc_mk_box2(16, &NFExpression_CALL__desc, _outCall);
              tmpMeta24 = mmc_mk_cons(_i, MMC_REFSTRUCTLIT(mmc_nil));
              _outCall = omc_NFCall_makeTypedReduction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), tmpMeta23, tmpMeta24, _OMC_LIT6);
            }
          }
          tmpMeta1 = _outCall;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _call;
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
  _outCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outCall;
}

DLLDirection
modelica_metatype omc_NFCall_toDAE__work(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _daeCall = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeCall has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_string _fold_id = NULL;
      modelica_string _res_id = NULL;
      modelica_metatype _fold_exp = NULL;
      int tmp4;
      // _fold_id has no default value.
      // _res_id has no default value.
      // _fold_exp has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar22;
            modelica_integer tmp8;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar23;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar22 = omc_NFExpression_toDAE(threadData, _e);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar23;
          }
          tmpMeta9 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), tmpMeta5, omc_NFCallAttributes_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 7: {
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
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          _fold_id = omc_Util_getTempVariableIndex(threadData);

          _res_id = omc_Util_getTempVariableIndex(threadData);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT61, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, _OMC_LIT41, _OMC_LIT65, tmpMeta14, tmpMeta15, listArray(tmpMeta16), _OMC_LIT66, _OMC_LIT67);
          tmpMeta18 = mmc_mk_box8(3, &DAE_ReductionInfo_REDUCTIONINFO__desc, omc_NFFunction_Function_name(threadData, tmpMeta17), _OMC_LIT68, omc_NFType_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), 1 /* true */), mmc_mk_none(), _fold_id, _res_id, mmc_mk_none());
          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp22;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar25;
            while(1) {
              tmp22 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp22--;
              }
              if (tmp22 == 0) {
                __omcQ_24tmpVar24 = omc_NFCall_iteratorToDAE(threadData, _iter);
                *tmp20 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp20 = &MMC_CDR(*tmp20);
              } else if (tmp22 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp20 = mmc_mk_nil();
            tmpMeta19 = __omcQ_24tmpVar25;
          }
          tmpMeta23 = mmc_mk_box4(30, &DAE_Exp_REDUCTION__desc, tmpMeta18, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), tmpMeta19);
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 9)));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          _fold_exp = tmpMeta25;
          _fold_id = tmpMeta26;
          _res_id = tmpMeta27;
          tmpMeta28 = mmc_mk_box8(3, &DAE_ReductionInfo_REDUCTIONINFO__desc, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT68, omc_NFType_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), 1 /* true */), omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8))), boxvar_NFExpression_toDAEValue), _fold_id, _res_id, omc_Util_applyOption(threadData, _fold_exp, boxvar_NFExpression_toDAE));
          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp30;
            modelica_metatype tmpMeta31;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp32;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)));
            tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta31; /* defaultValue */
            tmp30 = &__omcQ_24tmpVar27;
            while(1) {
              tmp32 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp32--;
              }
              if (tmp32 == 0) {
                __omcQ_24tmpVar26 = omc_NFCall_iteratorToDAE(threadData, _iter);
                *tmp30 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp30 = &MMC_CDR(*tmp30);
              } else if (tmp32 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp30 = mmc_mk_nil();
            tmpMeta29 = __omcQ_24tmpVar27;
          }
          tmpMeta33 = mmc_mk_box4(30, &DAE_Exp_REDUCTION__desc, tmpMeta28, omc_NFExpression_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), tmpMeta29);
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT69, _OMC_LIT70);
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
  _daeCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _daeCall;
}

DLLDirection
modelica_metatype omc_NFCall_toDAE(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _daeCall = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeCall has no default value.
  _daeCall = omc_NFCall_toDAE__work(threadData, omc_NFCall_expandReduction(threadData, _call));
  _return: OMC_LABEL_UNUSED
  return _daeCall;
}

DLLDirection
modelica_metatype omc_NFCall_toAbsynIterators(threadData_t *threadData, modelica_metatype _iterExp, modelica_metatype _iters)
{
  modelica_metatype _args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _args has no default value.
  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp5;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _iters;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar29;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box4(3, &Absyn_ForIterator_ITERATOR__desc, omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _i)), mmc_mk_none(), mmc_mk_some(omc_NFExpression_toAbsyn(threadData, omc_Util_tuple22(threadData, _i))));
        __omcQ_24tmpVar28 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar29;
  }
  tmpMeta6 = mmc_mk_box4(4, &Absyn_FunctionArgs_FOR__ITER__FARG__desc, omc_NFExpression_toAbsyn(threadData, _iterExp), _OMC_LIT68, tmpMeta1);
  _args = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _args;
}

DLLDirection
modelica_metatype omc_NFCall_toAbsyn(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _absynCall = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _absynCall has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _pargs = NULL;
      modelica_metatype _nargs = NULL;
      int tmp4;
      // _pargs has no default value.
      // _nargs has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype __omcQ_24tmpVar30;
            modelica_integer tmp8;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar31;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar30 = omc_NFExpression_toAbsyn(threadData, _arg);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar31;
          }
          _pargs = tmpMeta5;

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp13;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar33;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                tmpMeta12 = mmc_mk_box3(3, &Absyn_NamedArg_NAMEDARG__desc, omc_Util_tuple21(threadData, _arg), omc_NFExpression_toAbsyn(threadData, omc_Util_tuple22(threadData, _arg)));
                __omcQ_24tmpVar32 = tmpMeta12;
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar33;
          }
          _nargs = tmpMeta9;
          tmpMeta1 = omc_AbsynUtil_makeCall(threadData, omc_NFComponentRef_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _pargs, _nargs);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp17;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar35;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar34 = omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar35;
          }
          _pargs = tmpMeta14;

          {
            modelica_metatype __omcQ_24tmpVar37;
            modelica_metatype* tmp19;
            modelica_metatype tmpMeta20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar36;
            modelica_integer tmp22;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar37 = tmpMeta20; /* defaultValue */
            tmp19 = &__omcQ_24tmpVar37;
            while(1) {
              tmp22 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp22--;
              }
              if (tmp22 == 0) {
                tmpMeta21 = mmc_mk_box3(3, &Absyn_NamedArg_NAMEDARG__desc, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2)))), omc_NFExpression_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))));
                __omcQ_24tmpVar36 = tmpMeta21;
                *tmp19 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                tmp19 = &MMC_CDR(*tmp19);
              } else if (tmp22 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp19 = mmc_mk_nil();
            tmpMeta18 = __omcQ_24tmpVar37;
          }
          _nargs = tmpMeta18;
          tmpMeta1 = omc_AbsynUtil_makeCall(threadData, omc_NFComponentRef_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _pargs, _nargs);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar39;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar38;
            modelica_integer tmp26;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar39 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar39;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar38 = omc_NFExpression_toAbsyn(threadData, _arg);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar38,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar39;
          }
          _pargs = tmpMeta23;
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_AbsynUtil_makeCall(threadData, omc_AbsynUtil_pathToCref(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))), _pargs, tmpMeta27);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, _OMC_LIT44, omc_NFCall_toAbsynIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))), tmpMeta28);
          tmpMeta1 = tmpMeta29;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          
          /* Pattern matching succeeded */
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, _OMC_LIT44, omc_NFCall_toAbsynIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), tmpMeta30);
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, omc_NFComponentRef_toAbsyn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), omc_NFCall_toAbsynIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), tmpMeta32);
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = mmc_mk_box4(14, &Absyn_Exp_CALL__desc, omc_AbsynUtil_pathToCref(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))), omc_NFCall_toAbsynIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)))), tmpMeta34);
          tmpMeta1 = tmpMeta35;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT71, _OMC_LIT72);
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
  _absynCall = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _absynCall;
}

DLLDirection
modelica_metatype omc_NFCall_toJSON_iterators__json(threadData_t *threadData, modelica_metatype _iters)
{
  modelica_metatype _json = NULL;
  modelica_metatype _j = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_emptyArray(threadData, listLength(_iters));
  // _j has no default value.
  {
    modelica_metatype _i;
    for (tmpMeta1 = _iters; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      _j = omc_JSON_emptyListObject(threadData);

      _j = omc_JSON_addPair(threadData, _OMC_LIT73, omc_JSON_makeString(threadData, omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _i))), _j);

      _j = omc_JSON_addPair(threadData, _OMC_LIT74, omc_NFExpression_toJSON(threadData, omc_Util_tuple22(threadData, _i)), _j);

      _json = omc_JSON_addElement(threadData, _j, _json);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _json;
}

DLLDirection
modelica_metatype omc_NFCall_toJSON(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _json = NULL;
  modelica_metatype _path = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _json = omc_JSON_emptyListObject(threadData);
  // _path has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 5: {
          modelica_metatype tmpMeta4;
          
          /* Pattern matching succeeded */
          _path = omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _json = omc_JSON_addPair(threadData, _OMC_LIT75, omc_JSON_makeString(threadData, _OMC_LIT76), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT73, omc_JSON_makeString(threadData, omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT53, 1 /* true */, 0 /* false */)), _json);

          {
            modelica_metatype __omcQ_24tmpVar41;
            modelica_metatype* tmp5;
            modelica_metatype tmpMeta6;
            modelica_metatype __omcQ_24tmpVar40;
            modelica_integer tmp7;
            modelica_metatype _a_loopVar = 0;
            modelica_metatype _a;
            _a_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar41 = tmpMeta6; /* defaultValue */
            tmp5 = &__omcQ_24tmpVar41;
            while(1) {
              tmp7 = 1;
              if (!listEmpty(_a_loopVar)) {
                _a = MMC_CAR(_a_loopVar);
                _a_loopVar = MMC_CDR(_a_loopVar);
                tmp7--;
              }
              if (tmp7 == 0) {
                __omcQ_24tmpVar40 = omc_NFExpression_toJSON(threadData, _a);
                *tmp5 = mmc_mk_cons(__omcQ_24tmpVar40,0);
                tmp5 = &MMC_CDR(*tmp5);
              } else if (tmp7 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp5 = mmc_mk_nil();
            tmpMeta4 = __omcQ_24tmpVar41;
          }
          _json = omc_JSON_addPair(threadData, _OMC_LIT77, omc_JSON_makeArray(threadData, tmpMeta4), _json);
          goto tmp2_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT75, omc_JSON_makeString(threadData, _OMC_LIT78), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT73, omc_JSON_makeString(threadData, _OMC_LIT24), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT79, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT80, omc_NFCall_toJSON_iterators__json(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), _json);
          goto tmp2_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          _path = omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _json = omc_JSON_addPair(threadData, _OMC_LIT75, omc_JSON_makeString(threadData, _OMC_LIT78), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT73, omc_JSON_makeString(threadData, omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT53, 1 /* true */, 0 /* false */)), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT79, omc_NFExpression_toJSON(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), _json);

          _json = omc_JSON_addPair(threadData, _OMC_LIT80, omc_NFCall_toJSON_iterators__json(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)))), _json);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          _json = omc_JSON_addPair(threadData, _OMC_LIT75, omc_JSON_makeString(threadData, _OMC_LIT76), _json);
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
  return _json;
}

DLLDirection
modelica_string omc_NFCall_typedString(threadData_t *threadData, modelica_metatype _call)
{
  modelica_string _str = NULL;
  modelica_string _name = NULL;
  modelica_string _arg_str = NULL;
  modelica_string _c = NULL;
  modelica_metatype _argexp = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _name has no default value.
  // _arg_str has no default value.
  // _c has no default value.
  // _argexp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
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
          
          /* Pattern matching succeeded */
          _name = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          {
            modelica_metatype __omcQ_24tmpVar43;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype tmpMeta10;
            modelica_string __omcQ_24tmpVar42;
            modelica_integer tmp11;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar43 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar43;
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                tmpMeta8 = stringAppend(_OMC_LIT81,omc_NFType_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 4)))));
                tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT82);
                tmpMeta10 = stringAppend(tmpMeta9,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))));
                __omcQ_24tmpVar42 = tmpMeta10;
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar42,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar43;
          }
          _arg_str = stringDelimitList(tmpMeta5, _OMC_LIT83);

          {
            modelica_metatype _arg;
            for (tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _arg = MMC_CAR(tmpMeta12);
              _c = ((stringEqual(_arg_str, _OMC_LIT4))?_OMC_LIT4:_OMC_LIT83);

              tmpMeta13 = stringAppend(_arg_str,_c);
              tmpMeta14 = stringAppend(tmpMeta13,omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2)))));
              tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT84);
              tmpMeta16 = stringAppend(tmpMeta15,omc_NFType_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 4)))));
              tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT82);
              tmpMeta18 = stringAppend(tmpMeta17,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))));
              _arg_str = tmpMeta18;
            }
          }
          tmpMeta20 = stringAppend(_name,_OMC_LIT85);
          tmpMeta21 = stringAppend(tmpMeta20,_arg_str);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT86);
          tmp1 = tmpMeta22;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);

          {
            modelica_metatype __omcQ_24tmpVar45;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_string __omcQ_24tmpVar44;
            modelica_integer tmp26;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar45 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar45;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar44 = omc_NFExpression_toStringTyped(threadData, _arg);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar44,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar45;
          }
          _arg_str = stringDelimitList(tmpMeta23, _OMC_LIT83);
          tmpMeta27 = stringAppend(_name,_OMC_LIT85);
          tmpMeta28 = stringAppend(tmpMeta27,_arg_str);
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT86);
          tmp1 = tmpMeta29;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFCall_toString(threadData, _call);
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFCall_toFlatStringArgs(threadData_t *threadData, modelica_metatype _args, modelica_string _fnName, modelica_metatype _format)
{
  modelica_string _argsString = NULL;
  modelica_metatype _arg1 = NULL;
  modelica_metatype _arg2 = NULL;
  modelica_metatype _rest_args = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _argsString has no default value.
  // _arg1 has no default value.
  // _arg2 has no default value.
  // _rest_args has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _fnName;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_string tmp6 = 0;
          if (6 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT91), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp9_1;
            tmp9_1 = _args;
            {
              volatile mmc_switch_type tmp9;
              int tmp10;
              tmp9 = 0;
              for (; tmp9 < 2; tmp9++) {
                switch (MMC_SWITCH_CAST(tmp9)) {
                case 0: {
                  modelica_metatype tmpMeta11;
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  if (listEmpty(tmp9_1)) goto tmp8_end;
                  tmpMeta11 = MMC_CAR(tmp9_1);
                  tmpMeta12 = MMC_CDR(tmp9_1);
                  if (listEmpty(tmpMeta12)) goto tmp8_end;
                  tmpMeta13 = MMC_CAR(tmpMeta12);
                  tmpMeta14 = MMC_CDR(tmpMeta12);
                  if (!listEmpty(tmpMeta14)) goto tmp8_end;
                  _arg1 = tmpMeta11;
                  _arg2 = tmpMeta13;
                  /* Pattern matching succeeded */
                  tmpMeta15 = stringAppend(omc_NFExpression_toFlatString(threadData, _arg1, _format),_OMC_LIT87);
                  tmpMeta16 = stringAppend(tmpMeta15,omc_NFExpression_toFlatString(threadData, _arg2, _format));
                  tmp6 = tmpMeta16;
                  goto tmp8_done;
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
                  
                  /* Pattern matching succeeded */
                  /* Pattern-matching assignment */
                  tmpMeta17 = _args;
                  if (listEmpty(tmpMeta17)) goto goto_7;
                  tmpMeta18 = MMC_CAR(tmpMeta17);
                  tmpMeta19 = MMC_CDR(tmpMeta17);
                  _arg1 = tmpMeta18;
                  _rest_args = tmpMeta19;

                  _argsString = omc_NFExpression_toFlatString(threadData, _arg1, _format);

                  if((listLength(_rest_args) == ((modelica_integer) 3)))
                  {
                    /* Pattern-matching assignment */
                    tmpMeta20 = _rest_args;
                    if (listEmpty(tmpMeta20)) goto goto_7;
                    tmpMeta21 = MMC_CAR(tmpMeta20);
                    tmpMeta22 = MMC_CDR(tmpMeta20);
                    _arg1 = tmpMeta21;
                    _rest_args = tmpMeta22;

                    if((!omc_NFExpression_isIntegerValue(threadData, _arg1, ((modelica_integer) 6))))
                    {
                      tmpMeta23 = stringAppend(_argsString,_OMC_LIT88);
                      tmpMeta24 = stringAppend(tmpMeta23,omc_NFExpression_toFlatString(threadData, _arg1, _format));
                      _argsString = tmpMeta24;
                    }
                  }

                  /* Pattern-matching assignment */
                  tmpMeta25 = _rest_args;
                  if (listEmpty(tmpMeta25)) goto goto_7;
                  tmpMeta26 = MMC_CAR(tmpMeta25);
                  tmpMeta27 = MMC_CDR(tmpMeta25);
                  _arg1 = tmpMeta26;
                  _rest_args = tmpMeta27;

                  if((!omc_NFExpression_isZero(threadData, _arg1)))
                  {
                    tmpMeta28 = stringAppend(_argsString,_OMC_LIT89);
                    tmpMeta29 = stringAppend(tmpMeta28,omc_NFExpression_toFlatString(threadData, _arg1, _format));
                    _argsString = tmpMeta29;
                  }

                  /* Pattern-matching assignment */
                  tmpMeta30 = _rest_args;
                  if (listEmpty(tmpMeta30)) goto goto_7;
                  tmpMeta31 = MMC_CAR(tmpMeta30);
                  tmpMeta32 = MMC_CDR(tmpMeta30);
                  _arg1 = tmpMeta31;
                  _rest_args = tmpMeta32;

                  if((!omc_NFExpression_isTrue(threadData, _arg1)))
                  {
                    tmpMeta33 = stringAppend(_argsString,_OMC_LIT90);
                    tmpMeta34 = stringAppend(tmpMeta33,omc_NFExpression_toFlatString(threadData, _arg1, _format));
                    _argsString = tmpMeta34;
                  }
                  tmp6 = _argsString;
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              goto_7:;
              goto goto_2;
              goto tmp8_done;
              tmp8_done:;
            }
          }tmp1 = tmp6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta35;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar47;
            modelica_metatype* tmp36;
            modelica_metatype tmpMeta37;
            modelica_string __omcQ_24tmpVar46;
            modelica_integer tmp38;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = _args;
            tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar47 = tmpMeta37; /* defaultValue */
            tmp36 = &__omcQ_24tmpVar47;
            while(1) {
              tmp38 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp38--;
              }
              if (tmp38 == 0) {
                __omcQ_24tmpVar46 = omc_NFExpression_toFlatString(threadData, _arg, _format);
                *tmp36 = mmc_mk_cons(__omcQ_24tmpVar46,0);
                tmp36 = &MMC_CDR(*tmp36);
              } else if (tmp38 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp36 = mmc_mk_nil();
            tmpMeta35 = __omcQ_24tmpVar47;
          }
          tmp1 = stringDelimitList(tmpMeta35, _OMC_LIT83);
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
  _argsString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _argsString;
}

DLLDirection
modelica_string omc_NFCall_toFlatString(threadData_t *threadData, modelica_metatype _call, modelica_metatype _format)
{
  modelica_string _str = NULL;
  modelica_string _name = NULL;
  modelica_string _arg_str = NULL;
  modelica_string _c = NULL;
  modelica_metatype _argexp = NULL;
  modelica_metatype _iters = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _name has no default value.
  // _arg_str has no default value.
  // _c has no default value.
  // _argexp has no default value.
  // _iters has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_string tmp9;
          modelica_boolean tmp10;
          modelica_string tmp11;
          
          /* Pattern matching succeeded */
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);

          _arg_str = omc_NFCall_toFlatStringArgs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _name, _format);
          tmp10 = (modelica_boolean)omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          if(tmp10)
          {
            tmpMeta5 = mmc_mk_cons(_name, mmc_mk_cons(_OMC_LIT85, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT86, MMC_REFSTRUCTLIT(mmc_nil)))));
            tmp11 = stringAppendList(tmpMeta5);
          }
          else
          {
            tmp8 = (modelica_boolean)omc_NFCall_isExternalObjectConstructor(threadData, _call);
            if(tmp8)
            {
              tmpMeta6 = mmc_mk_cons(omc_NFType_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), _format), mmc_mk_cons(_OMC_LIT85, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT86, MMC_REFSTRUCTLIT(mmc_nil)))));
              tmp9 = stringAppendList(tmpMeta6);
            }
            else
            {
              tmpMeta7 = mmc_mk_cons(omc_Util_makeQuotedIdentifier(threadData, _name), mmc_mk_cons(_OMC_LIT85, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT86, MMC_REFSTRUCTLIT(mmc_nil)))));
              tmp9 = stringAppendList(tmpMeta7);
            }
            tmp11 = tmp9;
          }
          tmp1 = tmp11;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          if(omc_NFCall_isVectorized(threadData, _call))
          {
            _str = omc_NFExpression_toFlatString(threadData, omc_NFCall_devectorizeCall(threadData, _call), _format);
          }
          else
          {
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta19 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT61, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, _OMC_LIT41, _OMC_LIT65, tmpMeta16, tmpMeta17, listArray(tmpMeta18), _OMC_LIT66, _OMC_LIT67);
            _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, tmpMeta19), _OMC_LIT53, 1 /* true */, 0 /* false */);

            _arg_str = omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), _format);

            {
              modelica_metatype __omcQ_24tmpVar49;
              modelica_metatype* tmp21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              modelica_string __omcQ_24tmpVar48;
              modelica_integer tmp25;
              modelica_metatype _iter_loopVar = 0;
              modelica_metatype _iter;
              _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
              tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar49 = tmpMeta22; /* defaultValue */
              tmp21 = &__omcQ_24tmpVar49;
              while(1) {
                tmp25 = 1;
                if (!listEmpty(_iter_loopVar)) {
                  _iter = MMC_CAR(_iter_loopVar);
                  _iter_loopVar = MMC_CDR(_iter_loopVar);
                  tmp25--;
                }
                if (tmp25 == 0) {
                  tmpMeta23 = stringAppend(omc_Util_makeQuotedIdentifier(threadData, omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter))),_OMC_LIT92);
                  tmpMeta24 = stringAppend(tmpMeta23,omc_NFExpression_toFlatString(threadData, omc_Util_tuple22(threadData, _iter), _format));
                  __omcQ_24tmpVar48 = tmpMeta24;
                  *tmp21 = mmc_mk_cons(__omcQ_24tmpVar48,0);
                  tmp21 = &MMC_CDR(*tmp21);
                } else if (tmp25 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp21 = mmc_mk_nil();
              tmpMeta20 = __omcQ_24tmpVar49;
            }
            _c = stringDelimitList(tmpMeta20, _OMC_LIT83);

            tmpMeta26 = mmc_mk_cons(_OMC_LIT93, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT94, mmc_mk_cons(_c, mmc_mk_cons(_OMC_LIT95, MMC_REFSTRUCTLIT(mmc_nil))))));
            _str = stringAppendList(tmpMeta26);
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_boolean tmp35;
          modelica_string tmp36;
          
          /* Pattern matching succeeded */
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);

          _arg_str = omc_NFExpression_toFlatString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _format);

          {
            modelica_metatype __omcQ_24tmpVar51;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype tmpMeta30;
            modelica_metatype tmpMeta31;
            modelica_string __omcQ_24tmpVar50;
            modelica_integer tmp32;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)));
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar51 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar51;
            while(1) {
              tmp32 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp32--;
              }
              if (tmp32 == 0) {
                tmpMeta30 = stringAppend(omc_Util_makeQuotedIdentifier(threadData, omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter))),_OMC_LIT92);
                tmpMeta31 = stringAppend(tmpMeta30,omc_NFExpression_toFlatString(threadData, omc_Util_tuple22(threadData, _iter), _format));
                __omcQ_24tmpVar50 = tmpMeta31;
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar50,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp32 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar51;
          }
          _c = stringDelimitList(tmpMeta27, _OMC_LIT83);
          tmp35 = (modelica_boolean)omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          if(tmp35)
          {
            tmpMeta33 = mmc_mk_cons(_name, mmc_mk_cons(_OMC_LIT85, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT94, mmc_mk_cons(_c, mmc_mk_cons(_OMC_LIT86, MMC_REFSTRUCTLIT(mmc_nil)))))));
            tmp36 = stringAppendList(tmpMeta33);
          }
          else
          {
            tmpMeta34 = mmc_mk_cons(omc_Util_makeQuotedIdentifier(threadData, _name), mmc_mk_cons(_OMC_LIT85, mmc_mk_cons(_arg_str, mmc_mk_cons(_OMC_LIT94, mmc_mk_cons(_c, mmc_mk_cons(_OMC_LIT86, MMC_REFSTRUCTLIT(mmc_nil)))))));
            tmp36 = stringAppendList(tmpMeta34);
          }
          tmp1 = tmp36;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NFCall_toString(threadData_t *threadData, modelica_metatype _call)
{
  modelica_string _str = NULL;
  modelica_string _name = NULL;
  modelica_string _arg_str = NULL;
  modelica_string _c = NULL;
  modelica_metatype _argexp = NULL;
  modelica_metatype _iters = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _name has no default value.
  // _arg_str has no default value.
  // _c has no default value.
  // _argexp has no default value.
  // _iters has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _name = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          {
            modelica_metatype __omcQ_24tmpVar53;
            modelica_metatype* tmp6;
            modelica_metatype tmpMeta7;
            modelica_string __omcQ_24tmpVar52;
            modelica_integer tmp8;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar53 = tmpMeta7; /* defaultValue */
            tmp6 = &__omcQ_24tmpVar53;
            while(1) {
              tmp8 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp8--;
              }
              if (tmp8 == 0) {
                __omcQ_24tmpVar52 = omc_NFExpression_toString(threadData, _arg);
                *tmp6 = mmc_mk_cons(__omcQ_24tmpVar52,0);
                tmp6 = &MMC_CDR(*tmp6);
              } else if (tmp8 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp6 = mmc_mk_nil();
            tmpMeta5 = __omcQ_24tmpVar53;
          }
          _arg_str = stringDelimitList(tmpMeta5, _OMC_LIT83);
          tmpMeta9 = stringAppend(_name,_OMC_LIT85);
          tmpMeta10 = stringAppend(tmpMeta9,_arg_str);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT86);
          tmp1 = tmpMeta11;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          _name = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          {
            modelica_metatype __omcQ_24tmpVar55;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_string __omcQ_24tmpVar54;
            modelica_integer tmp15;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar55 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar55;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar54 = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))));
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar54,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar55;
          }
          _arg_str = stringDelimitList(tmpMeta12, _OMC_LIT83);

          {
            modelica_metatype _arg;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _arg = MMC_CAR(tmpMeta16);
              _c = ((stringEqual(_arg_str, _OMC_LIT4))?_OMC_LIT4:_OMC_LIT83);

              tmpMeta17 = stringAppend(_arg_str,_c);
              tmpMeta18 = stringAppend(tmpMeta17,omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 2)))));
              tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT96);
              tmpMeta20 = stringAppend(tmpMeta19,omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3)))));
              _arg_str = tmpMeta20;
            }
          }
          tmpMeta22 = stringAppend(_name,_OMC_LIT85);
          tmpMeta23 = stringAppend(tmpMeta22,_arg_str);
          tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT86);
          tmp1 = tmpMeta24;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          
          /* Pattern matching succeeded */
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta32 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT61, tmpMeta25, tmpMeta26, tmpMeta27, tmpMeta28, _OMC_LIT41, _OMC_LIT65, tmpMeta29, tmpMeta30, listArray(tmpMeta31), _OMC_LIT66, _OMC_LIT67);
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, tmpMeta32), _OMC_LIT53, 1 /* true */, 0 /* false */);

          _arg_str = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          {
            modelica_metatype __omcQ_24tmpVar57;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_metatype tmpMeta36;
            modelica_metatype tmpMeta37;
            modelica_string __omcQ_24tmpVar56;
            modelica_integer tmp38;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar57 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar57;
            while(1) {
              tmp38 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp38--;
              }
              if (tmp38 == 0) {
                tmpMeta36 = stringAppend(omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter)),_OMC_LIT92);
                tmpMeta37 = stringAppend(tmpMeta36,omc_NFExpression_toString(threadData, omc_Util_tuple22(threadData, _iter)));
                __omcQ_24tmpVar56 = tmpMeta37;
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar56,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp38 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar57;
          }
          _c = stringDelimitList(tmpMeta33, _OMC_LIT83);
          tmpMeta39 = stringAppend(_OMC_LIT93,_arg_str);
          tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT94);
          tmpMeta41 = stringAppend(tmpMeta40,_c);
          tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT95);
          tmp1 = tmpMeta42;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          
          /* Pattern matching succeeded */
          _name = omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _arg_str = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));

          {
            modelica_metatype __omcQ_24tmpVar59;
            modelica_metatype* tmp44;
            modelica_metatype tmpMeta45;
            modelica_metatype tmpMeta46;
            modelica_metatype tmpMeta47;
            modelica_string __omcQ_24tmpVar58;
            modelica_integer tmp48;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
            tmpMeta45 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar59 = tmpMeta45; /* defaultValue */
            tmp44 = &__omcQ_24tmpVar59;
            while(1) {
              tmp48 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp48--;
              }
              if (tmp48 == 0) {
                tmpMeta46 = stringAppend(omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter)),_OMC_LIT92);
                tmpMeta47 = stringAppend(tmpMeta46,omc_NFExpression_toString(threadData, omc_Util_tuple22(threadData, _iter)));
                __omcQ_24tmpVar58 = tmpMeta47;
                *tmp44 = mmc_mk_cons(__omcQ_24tmpVar58,0);
                tmp44 = &MMC_CDR(*tmp44);
              } else if (tmp48 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp44 = mmc_mk_nil();
            tmpMeta43 = __omcQ_24tmpVar59;
          }
          _c = stringDelimitList(tmpMeta43, _OMC_LIT83);
          tmpMeta49 = stringAppend(_name,_OMC_LIT85);
          tmpMeta50 = stringAppend(tmpMeta49,_arg_str);
          tmpMeta51 = stringAppend(tmpMeta50,_OMC_LIT94);
          tmpMeta52 = stringAppend(tmpMeta51,_c);
          tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT86);
          tmp1 = tmpMeta53;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          
          /* Pattern matching succeeded */
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);

          {
            modelica_metatype __omcQ_24tmpVar61;
            modelica_metatype* tmp55;
            modelica_metatype tmpMeta56;
            modelica_string __omcQ_24tmpVar60;
            modelica_integer tmp57;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar61 = tmpMeta56; /* defaultValue */
            tmp55 = &__omcQ_24tmpVar61;
            while(1) {
              tmp57 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp57--;
              }
              if (tmp57 == 0) {
                __omcQ_24tmpVar60 = omc_NFExpression_toString(threadData, _arg);
                *tmp55 = mmc_mk_cons(__omcQ_24tmpVar60,0);
                tmp55 = &MMC_CDR(*tmp55);
              } else if (tmp57 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp55 = mmc_mk_nil();
            tmpMeta54 = __omcQ_24tmpVar61;
          }
          _arg_str = stringDelimitList(tmpMeta54, _OMC_LIT83);
          tmpMeta58 = stringAppend(_name,_OMC_LIT85);
          tmpMeta59 = stringAppend(tmpMeta58,_arg_str);
          tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT86);
          tmp1 = tmpMeta60;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          
          /* Pattern matching succeeded */
          tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta64 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta67 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta68 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT61, tmpMeta61, tmpMeta62, tmpMeta63, tmpMeta64, _OMC_LIT41, _OMC_LIT65, tmpMeta65, tmpMeta66, listArray(tmpMeta67), _OMC_LIT66, _OMC_LIT67);
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, tmpMeta68), _OMC_LIT53, 1 /* true */, 0 /* false */);

          _arg_str = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));

          {
            modelica_metatype __omcQ_24tmpVar63;
            modelica_metatype* tmp70;
            modelica_metatype tmpMeta71;
            modelica_metatype tmpMeta72;
            modelica_metatype tmpMeta73;
            modelica_string __omcQ_24tmpVar62;
            modelica_integer tmp74;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta71 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar63 = tmpMeta71; /* defaultValue */
            tmp70 = &__omcQ_24tmpVar63;
            while(1) {
              tmp74 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp74--;
              }
              if (tmp74 == 0) {
                tmpMeta72 = stringAppend(omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter)),_OMC_LIT92);
                tmpMeta73 = stringAppend(tmpMeta72,omc_NFExpression_toString(threadData, omc_Util_tuple22(threadData, _iter)));
                __omcQ_24tmpVar62 = tmpMeta73;
                *tmp70 = mmc_mk_cons(__omcQ_24tmpVar62,0);
                tmp70 = &MMC_CDR(*tmp70);
              } else if (tmp74 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp70 = mmc_mk_nil();
            tmpMeta69 = __omcQ_24tmpVar63;
          }
          _c = stringDelimitList(tmpMeta69, _OMC_LIT83);
          tmpMeta75 = stringAppend(_OMC_LIT93,_arg_str);
          tmpMeta76 = stringAppend(tmpMeta75,_OMC_LIT94);
          tmpMeta77 = stringAppend(tmpMeta76,_c);
          tmpMeta78 = stringAppend(tmpMeta77,_OMC_LIT95);
          tmp1 = tmpMeta78;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          
          /* Pattern matching succeeded */
          _name = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);

          _arg_str = omc_NFExpression_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))));

          {
            modelica_metatype __omcQ_24tmpVar65;
            modelica_metatype* tmp80;
            modelica_metatype tmpMeta81;
            modelica_metatype tmpMeta82;
            modelica_metatype tmpMeta83;
            modelica_string __omcQ_24tmpVar64;
            modelica_integer tmp84;
            modelica_metatype _iter_loopVar = 0;
            modelica_metatype _iter;
            _iter_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)));
            tmpMeta81 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar65 = tmpMeta81; /* defaultValue */
            tmp80 = &__omcQ_24tmpVar65;
            while(1) {
              tmp84 = 1;
              if (!listEmpty(_iter_loopVar)) {
                _iter = MMC_CAR(_iter_loopVar);
                _iter_loopVar = MMC_CDR(_iter_loopVar);
                tmp84--;
              }
              if (tmp84 == 0) {
                tmpMeta82 = stringAppend(omc_NFInstNode_InstNode_name(threadData, omc_Util_tuple21(threadData, _iter)),_OMC_LIT92);
                tmpMeta83 = stringAppend(tmpMeta82,omc_NFExpression_toString(threadData, omc_Util_tuple22(threadData, _iter)));
                __omcQ_24tmpVar64 = tmpMeta83;
                *tmp80 = mmc_mk_cons(__omcQ_24tmpVar64,0);
                tmp80 = &MMC_CDR(*tmp80);
              } else if (tmp84 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp80 = mmc_mk_nil();
            tmpMeta79 = __omcQ_24tmpVar65;
          }
          _c = stringDelimitList(tmpMeta79, _OMC_LIT83);
          tmpMeta85 = stringAppend(_name,_OMC_LIT85);
          tmpMeta86 = stringAppend(tmpMeta85,_arg_str);
          tmpMeta87 = stringAppend(tmpMeta86,_OMC_LIT94);
          tmpMeta88 = stringAppend(tmpMeta87,_c);
          tmpMeta89 = stringAppend(tmpMeta88,_OMC_LIT86);
          tmp1 = tmpMeta89;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NFCall_toRecordExpression(threadData_t *threadData, modelica_metatype _call, modelica_metatype _ty)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFEvalFunction_evaluateRecordConstructor(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT97, _OMC_LIT98);
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
  _exp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFCall_iterators(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _iters has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta5;
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
  _iters = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _iters;
}

DLLDirection
modelica_metatype omc_NFCall_setArguments(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _arguments)
{
  modelica_metatype _call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_call), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = _arguments;
          _call = tmpMeta6;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = _arguments;
          _call = tmpMeta7;
          tmpMeta1 = _call;
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
  _call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_arguments(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _arguments = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _arguments has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta8;
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
  _arguments = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _arguments;
}

DLLDirection
modelica_boolean omc_NFCall_isNamed(threadData_t *threadData, modelica_metatype _call, modelica_string _name)
{
  modelica_boolean _res;
  modelica_metatype _path = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _path has no default value.
  _path = omc_NFCall_functionName(threadData, _call);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _path;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_path), 2))), _name));
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
modelica_metatype boxptr_NFCall_isNamed(threadData_t *threadData, modelica_metatype _call, modelica_metatype _name)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFCall_isNamed(threadData, _call, _name);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_string omc_NFCall_functionNameFirst(threadData_t *threadData, modelica_metatype _call)
{
  modelica_string _ident = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ident = omc_AbsynUtil_pathFirstIdent(threadData, omc_NFCall_functionName(threadData, _call));
  _return: OMC_LABEL_UNUSED
  return _ident;
}

DLLDirection
modelica_string omc_NFCall_functionNameLast(threadData_t *threadData, modelica_metatype _call)
{
  modelica_string _ident = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ident = omc_AbsynUtil_pathLastIdent(threadData, omc_NFCall_functionName(threadData, _call));
  _return: OMC_LABEL_UNUSED
  return _ident;
}

DLLDirection
modelica_metatype omc_NFCall_functionName(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _name = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFComponentRef_toPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFComponentRef_toPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT60;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFComponentRef_toPath(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
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
  _name = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _name;
}

DLLDirection
modelica_metatype omc_NFCall_typedFunction(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _fn = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fn has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)));
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT60, _OMC_LIT61, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, _OMC_LIT41, _OMC_LIT65, tmpMeta9, tmpMeta10, listArray(tmpMeta11), _OMC_LIT66, _OMC_LIT67);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT99, _OMC_LIT100);
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
  _fn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _fn;
}

DLLDirection
modelica_metatype omc_NFCall_inlineType(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _inlineTy = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inlineTy has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          
          _inlineTy = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = _inlineTy;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT62;
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
  _inlineTy = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _inlineTy;
}

DLLDirection
modelica_boolean omc_NFCall_isReduction(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_boolean tmp5 = 0;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp8_1;
            tmp8_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT53, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp8;
              int tmp9;
              tmp8 = 0;
              for (; tmp8 < 5; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  if (3 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT35), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                  /* Pattern matching succeeded */
                  tmp5 = 1 /* true */;
                  goto tmp7_done;
                }
                case 1: {
                  if (3 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT36), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                  /* Pattern matching succeeded */
                  tmp5 = 1 /* true */;
                  goto tmp7_done;
                }
                case 2: {
                  if (3 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT22), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                  /* Pattern matching succeeded */
                  tmp5 = 1 /* true */;
                  goto tmp7_done;
                }
                case 3: {
                  if (7 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                  /* Pattern matching succeeded */
                  tmp5 = 1 /* true */;
                  goto tmp7_done;
                }
                case 4: {
                  
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
              goto goto_2;
              goto tmp7_done;
              tmp7_done:;
            }
          }tmp1 = tmp5;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFCall_isReduction(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFCall_isReduction(threadData, _call);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isKnownSizeFill_is__literal__iter(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_boolean _literal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _literal = omc_NFExpression_isLiteral(threadData, omc_Util_tuple22(threadData, _iter));
  _return: OMC_LABEL_UNUSED
  return _literal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isKnownSizeFill_is__literal__iter(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_boolean _literal;
  modelica_metatype out_literal;
  _literal = omc_NFCall_isKnownSizeFill_is__literal__iter(threadData, _iter);
  out_literal = mmc_mk_icon(_literal);
  return out_literal;
}

DLLDirection
modelica_boolean omc_NFCall_isKnownSizeFill(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFCall_isNamed(threadData, _call, _OMC_LIT55) && omc_List_all(threadData, listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), boxvar_NFExpression_isLiteral));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), boxvar_NFCall_isKnownSizeFill_is__literal__iter);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
modelica_metatype boxptr_NFCall_isKnownSizeFill(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFCall_isKnownSizeFill(threadData, _call);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFCall_isLiteral_is__literal__iter(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_boolean _literal;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _literal = omc_NFExpression_isLiteral(threadData, omc_Util_tuple22(threadData, _iter));
  _return: OMC_LABEL_UNUSED
  return _literal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFCall_isLiteral_is__literal__iter(threadData_t *threadData, modelica_metatype _iter)
{
  modelica_boolean _literal;
  modelica_metatype out_literal;
  _literal = omc_NFCall_isLiteral_is__literal__iter(threadData, _iter);
  out_literal = mmc_mk_icon(_literal);
  return out_literal;
}

DLLDirection
modelica_boolean omc_NFCall_isLiteral(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _literal;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _literal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), boxvar_NFExpression_isLiteral);
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_isLiteral(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))) && omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))), boxvar_NFCall_isLiteral_is__literal__iter));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFExpression_isLiteral(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))) && omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), boxvar_NFCall_isLiteral_is__literal__iter));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _literal = tmp1;
  _return: OMC_LABEL_UNUSED
  return _literal;
}
modelica_metatype boxptr_NFCall_isLiteral(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _literal;
  modelica_metatype out_literal;
  _literal = omc_NFCall_isLiteral(threadData, _call);
  out_literal = mmc_mk_icon(_literal);
  return out_literal;
}

DLLDirection
modelica_boolean omc_NFCall_isExternalObjectConstructor(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isConstructor;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConstructor has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFType_isExternalObject(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));
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
  _isConstructor = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConstructor;
}
modelica_metatype boxptr_NFCall_isExternalObjectConstructor(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isConstructor;
  modelica_metatype out_isConstructor;
  _isConstructor = omc_NFCall_isExternalObjectConstructor(threadData, _call);
  out_isConstructor = mmc_mk_icon(_isConstructor);
  return out_isConstructor;
}

DLLDirection
modelica_boolean omc_NFCall_isRecordConstructor(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isConstructor;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConstructor has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_isRecord(threadData, omc_NFInstNode_InstNode_definition(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_SCodeUtil_isRecord(threadData, omc_NFInstNode_InstNode_definition(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), 3)))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _isConstructor = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConstructor;
}
modelica_metatype boxptr_NFCall_isRecordConstructor(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isConstructor;
  modelica_metatype out_isConstructor;
  _isConstructor = omc_NFCall_isRecordConstructor(threadData, _call);
  out_isConstructor = mmc_mk_icon(_isConstructor);
  return out_isConstructor;
}

DLLDirection
modelica_boolean omc_NFCall_isImpure(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isImpure;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isImpure has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFFunction_Function_isImpure(threadData, listHead(omc_NFFunction_Function_getRefCache(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (2 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFFunction_Function_isImpure(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))) || omc_NFFunction_Function_isOMImpure(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))));
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
  _isImpure = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isImpure;
}
modelica_metatype boxptr_NFCall_isImpure(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isImpure;
  modelica_metatype out_isImpure;
  _isImpure = omc_NFCall_isImpure(threadData, _call);
  out_isImpure = mmc_mk_icon(_isImpure);
  return out_isImpure;
}

DLLDirection
modelica_boolean omc_NFCall_isExternal(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isExternal;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isExternal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFClass_isExternalFunction(threadData, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFClass_isExternalFunction(threadData, omc_NFInstNode_InstNode_getClass(threadData, omc_NFComponentRef_node(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFFunction_Function_isExternal(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _isExternal = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isExternal;
}
modelica_metatype boxptr_NFCall_isExternal(threadData_t *threadData, modelica_metatype _call)
{
  modelica_boolean _isExternal;
  modelica_metatype out_isExternal;
  _isExternal = omc_NFCall_isExternal(threadData, _call);
  out_isExternal = mmc_mk_icon(_isExternal);
  return out_isExternal;
}

DLLDirection
modelica_integer omc_NFCall_compareIterator(threadData_t *threadData, modelica_metatype _iter1, modelica_metatype _iter2)
{
  modelica_integer _comp;
  modelica_metatype _n1 = NULL;
  modelica_metatype _n2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  // _n1 has no default value.
  // _n2 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iter1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _n1 = tmpMeta2;
  _e1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _iter2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  _n2 = tmpMeta5;
  _e2 = tmpMeta6;

  _comp = stringCompare(omc_NFInstNode_InstNode_name(threadData, _n1), omc_NFInstNode_InstNode_name(threadData, _n2));

  if((_comp == ((modelica_integer) 0)))
  {
    _comp = omc_NFExpression_compare(threadData, _e1, _e2);
  }
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NFCall_compareIterator(threadData_t *threadData, modelica_metatype _iter1, modelica_metatype _iter2)
{
  modelica_integer _comp;
  modelica_metatype out_comp;
  _comp = omc_NFCall_compareIterator(threadData, _iter1, _iter2);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

DLLDirection
modelica_integer omc_NFCall_compare(threadData_t *threadData, modelica_metatype _call1, modelica_metatype _call2)
{
  modelica_integer _comp;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  _comp = omc_AbsynUtil_pathCompare(threadData, omc_NFCall_functionName(threadData, _call1), omc_NFCall_functionName(threadData, _call2));

  if((_comp == ((modelica_integer) 0)))
  {
    _comp = omc_NFExpression_compareList(threadData, omc_NFCall_arguments(threadData, _call1), omc_NFCall_arguments(threadData, _call2));
  }

  if((_comp == ((modelica_integer) 0)))
  {
    _comp = omc_List_compare(threadData, omc_NFCall_iterators(threadData, _call1), omc_NFCall_iterators(threadData, _call2), boxvar_NFCall_compareIterator);
  }
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_NFCall_compare(threadData_t *threadData, modelica_metatype _call1, modelica_metatype _call2)
{
  modelica_integer _comp;
  modelica_metatype out_comp;
  _comp = omc_NFCall_compare(threadData, _call1, _call2);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

DLLDirection
modelica_integer omc_NFCall_purity(threadData_t *threadData, modelica_metatype _call)
{
  modelica_integer _purity;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _purity has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = 1;
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
  _purity = tmp1;
  _return: OMC_LABEL_UNUSED
  return _purity;
}
modelica_metatype boxptr_NFCall_purity(threadData_t *threadData, modelica_metatype _call)
{
  modelica_integer _purity;
  modelica_metatype out_purity;
  _purity = omc_NFCall_purity(threadData, _call);
  out_purity = mmc_mk_icon(_purity);
  return out_purity;
}

DLLDirection
modelica_integer omc_NFCall_variability(threadData_t *threadData, modelica_metatype _call)
{
  modelica_integer _var;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_boolean _var_set;
      int tmp4;
      // _var_set has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_integer tmp5 = 0;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _var_set = 1 /* true */;

          if(omc_NFComponentRef_isSimple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))))
          {
            { /* match expression */
              modelica_string tmp8_1;
              tmp8_1 = omc_NFComponentRef_firstName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), 0 /* false */);
              {
                volatile mmc_switch_type tmp8;
                int tmp9;
                tmp8 = 0;
                for (; tmp8 < 6; tmp8++) {
                  switch (MMC_SWITCH_CAST(tmp8)) {
                  case 0: {
                    if (6 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT101), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                    /* Pattern matching succeeded */
                    tmp5 = 5;
                    goto tmp7_done;
                  }
                  case 1: {
                    if (4 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT102), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                    /* Pattern matching succeeded */
                    tmp5 = 5;
                    goto tmp7_done;
                  }
                  case 2: {
                    if (3 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                    /* Pattern matching succeeded */
                    tmp5 = 5;
                    goto tmp7_done;
                  }
                  case 3: {
                    if (5 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT103), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                    /* Pattern matching succeeded */
                    tmp5 = 3;
                    goto tmp7_done;
                  }
                  case 4: {
                    if (11 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
                    /* Pattern matching succeeded */
                    tmp5 = 3;
                    goto tmp7_done;
                  }
                  case 5: {
                    
                    /* Pattern matching succeeded */
                    _var_set = 0 /* false */;
                    tmp5 = 7;
                    goto tmp7_done;
                  }
                  }
                  goto tmp7_end;
                  tmp7_end: ;
                }
                goto goto_6;
                goto_6:;
                goto goto_2;
                goto tmp7_done;
                tmp7_done:;
              }
            }
            _var = tmp5;
          }

          if((!_var_set))
          {
            _var = omc_NFExpression_variabilityList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))), 1);

            {
              modelica_metatype _narg;
              for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _narg = MMC_CAR(tmpMeta10);
                _var = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_var, omc_NFExpression_variability(threadData, omc_Util_tuple22(threadData, _narg)));
              }
            }
          }
          tmp1 = (modelica_integer)_var;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_variability(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFExpression_variability(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT104, _OMC_LIT105);
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
  _var = tmp1;
  _return: OMC_LABEL_UNUSED
  return _var;
}
modelica_metatype boxptr_NFCall_variability(threadData_t *threadData, modelica_metatype _call)
{
  modelica_integer _var;
  modelica_metatype out_var;
  _var = omc_NFCall_variability(threadData, _call);
  out_var = mmc_mk_icon(_var);
  return out_var;
}

DLLDirection
modelica_metatype omc_NFCall_setType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _ty)
{
  modelica_metatype _call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[3] = _ty;
          _call = tmpMeta5;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _ty;
          _call = tmpMeta6;
          tmpMeta1 = _call;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(10));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_call), 10*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = _ty;
          _call = tmpMeta7;
          tmpMeta1 = _call;
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
  _call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_typeOf(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)));
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _ty = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ty;
}

DLLDirection
modelica_metatype omc_NFCall_retypeCall(threadData_t *threadData, modelica_metatype _call, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _ty_call = NULL;
  modelica_integer _next_context;
  modelica_metatype _ty = NULL;
  modelica_metatype _arg_ty = NULL;
  modelica_integer _arg_var;
  modelica_integer _arg_pur;
  modelica_metatype _typed_args = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _args = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ty_call has no default value.
  // _next_context has no default value.
  // _ty has no default value.
  // _arg_ty has no default value.
  // _arg_var has no default value.
  // _arg_pur has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _typed_args = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _args = tmpMeta2;
  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _call;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _next_context = omc_NFInstContext_set(threadData, _context, ((modelica_integer) 4194304));

          {
            modelica_metatype _arg;
            for (tmpMeta8 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _arg = MMC_CAR(tmpMeta8);
              _arg = omc_NFTyping_typeExp(threadData, _arg, _next_context, _info, 1 /* true */ ,&_arg_ty ,&_arg_var ,&_arg_pur);

              tmpMeta10 = mmc_mk_box6(3, &NFFunction_TypedArg_TYPED__ARG__desc, mmc_mk_none(), _arg, _arg_ty, mmc_mk_integer((modelica_integer)_arg_var), mmc_mk_integer((modelica_integer)_arg_pur));
              tmpMeta9 = mmc_mk_cons(tmpMeta10, _typed_args);
              _typed_args = tmpMeta9;

              tmpMeta11 = mmc_mk_cons(_arg, _args);
              _args = tmpMeta11;
            }
          }

          _ty = omc_NFFunction_Function_returnType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _ty = omc_NFCall_resolvePolymorphicReturnType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _typed_args, _ty);

          _ty = omc_NFCall_evaluateCallType(threadData, _ty, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, ((modelica_integer) 1), _OMC_LIT8, NULL);
          tmpMeta3 = omc_NFCall_makeTypedCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _args, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5)))), _ty);
          goto tmp5_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT106, _OMC_LIT107);
          goto goto_4;
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
  _ty_call = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _ty_call;
}
modelica_metatype boxptr_NFCall_retypeCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _ty_call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _ty_call = omc_NFCall_retypeCall(threadData, _call, tmp1, _info);
  /* skip box _ty_call; NFCall */
  return _ty_call;
}

DLLDirection
modelica_metatype omc_NFCall_matchTypedNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize)
{
  modelica_metatype _call = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype _args = NULL;
  modelica_metatype _typed_args = NULL;
  modelica_metatype _matchedFunc = NULL;
  modelica_metatype _scope = NULL;
  modelica_integer _var;
  modelica_integer _arg_var;
  modelica_integer _pur;
  modelica_integer _arg_pur;
  modelica_metatype _ty = NULL;
  modelica_metatype _arg_exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  // _func has no default value.
  // _args has no default value.
  // _typed_args has no default value.
  // _matchedFunc has no default value.
  // _scope has no default value.
  // _var has no default value.
  // _arg_var has no default value.
  // _pur has no default value.
  // _arg_pur has no default value.
  // _ty has no default value.
  // _arg_exp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _call;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _scope = tmpMeta2;

  _matchedFunc = omc_NFCall_checkMatchingFunctions(threadData, _call, _context, _info, _vectorize);

  _func = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 2)));

  _typed_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 3)));

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _args = tmpMeta3;

  _var = 1;

  _pur = ((omc_NFFunction_Function_isImpure(threadData, _func) || omc_NFFunction_Function_isOMImpure(threadData, _func))?2:1);

  {
    modelica_metatype _a;
    for (tmpMeta4 = _typed_args; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _a = MMC_CAR(tmpMeta4);
      /* Pattern-matching assignment */
      tmpMeta5 = _a;
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 5));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 6));
      tmp10 = mmc_unbox_integer(tmpMeta9);
      _arg_exp = tmpMeta6;
      _arg_var = tmp8  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
      _arg_pur = tmp10  /* pattern as ty=enumeration(PURE, IMPURE) */;

      tmpMeta11 = mmc_mk_cons(_arg_exp, _args);
      _args = tmpMeta11;

      _var = omc_NFPrefixes_variabilityMax(threadData, (modelica_integer)_var, (modelica_integer)_arg_var);

      _pur = omc_NFPrefixes_purityMin(threadData, (modelica_integer)_pur, (modelica_integer)_arg_pur);
    }
  }

  _args = listReverseInPlace(_args);

  _ty = omc_NFFunction_Function_returnType(threadData, _func);

  _ty = omc_NFCall_resolvePolymorphicReturnType(threadData, _func, _typed_args, _ty);

  if((((modelica_integer)_var == 3) && omc_NFFunction_Function_isExternal(threadData, _func)))
  {
    _var = 4;
  }
  else
  {
    if((omc_NFType_isDiscrete(threadData, _ty) && ((modelica_integer)_var == 7)))
    {
      _var = 6;
    }
  }

  _ty = omc_NFCall_evaluateCallType(threadData, _ty, _func, _args, ((modelica_integer) 1), _OMC_LIT8, NULL);

  _call = omc_NFCall_makeTypedCall(threadData, _func, _args, (modelica_integer)_var, (modelica_integer)_pur, _ty);

  if(omc_NFFunction_MatchedFunction_isVectorized(threadData, _matchedFunc))
  {
    _call = omc_NFCall_vectorizeCall(threadData, _call, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matchedFunc), 4))), _scope, _info);
  }

  if(omc_NFFunction_Function_isExternal(threadData, _func))
  {
    omc_NFCall_updateExternalRecordArgs(threadData, _args);

    omc_NFCall_updateExternalRecordArgsInType(threadData, _ty);
  }
  _return: OMC_LABEL_UNUSED
  return _call;
}
modelica_metatype boxptr_NFCall_matchTypedNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_vectorize);
  _call = omc_NFCall_matchTypedNormalCall(threadData, __omcQ_24in_5Fcall, tmp1, _info, tmp2);
  /* skip box _call; NFCall */
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_typeMatchNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info, modelica_boolean _vectorize)
{
  modelica_metatype _call = NULL;
  modelica_metatype _argtycall = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  // _argtycall has no default value.
  _argtycall = omc_NFCall_typeNormalCall(threadData, _call, _context, _info);

  _call = omc_NFCall_matchTypedNormalCall(threadData, _argtycall, _context, _info, _vectorize);
  _return: OMC_LABEL_UNUSED
  return _call;
}
modelica_metatype boxptr_NFCall_typeMatchNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info, modelica_metatype _vectorize)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_vectorize);
  _call = omc_NFCall_typeMatchNormalCall(threadData, __omcQ_24in_5Fcall, tmp1, _info, tmp2);
  /* skip box _call; NFCall */
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_unboxArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall)
{
  modelica_metatype _call = NULL;
  modelica_metatype _c = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  // _c has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _call;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar67;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar66;
            modelica_integer tmp9;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar67 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar67;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar66 = omc_NFExpression_unbox(threadData, _arg);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar66,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar67;
          }
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[6] = tmpMeta6;
          _call = tmpMeta5;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,5) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,13,1) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _c = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_unboxArgs(threadData, _c));
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_call), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[5] = tmpMeta13;
          _call = tmpMeta12;
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
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_makeTypedCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_integer _variability, modelica_integer _purity, modelica_metatype _returnType)
{
  modelica_metatype _call = NULL;
  modelica_metatype _ca = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _call has no default value.
  // _ca has no default value.
  tmpMeta1 = mmc_mk_box7(3, &NFCallAttributes_CALL__ATTR__desc, mmc_mk_boolean(omc_NFType_isTuple(threadData, _returnType)), mmc_mk_boolean(omc_NFFunction_Function_isBuiltin(threadData, _fn)), mmc_mk_boolean(omc_NFFunction_Function_isImpure(threadData, _fn)), mmc_mk_boolean(omc_NFFunction_Function_isFunctionPointer(threadData, _fn)), omc_NFFunction_Function_inlineBuiltin(threadData, _fn), _OMC_LIT108);
  _ca = tmpMeta1;

  tmpMeta2 = mmc_mk_box7(5, &NFCall_TYPED__CALL__desc, _fn, _returnType, mmc_mk_integer((modelica_integer)_variability), mmc_mk_integer((modelica_integer)_purity), _args, _ca);
  _call = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _call;
}
modelica_metatype boxptr_NFCall_makeTypedCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _variability, modelica_metatype _purity, modelica_metatype _returnType)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_variability);
  tmp2 = mmc_unbox_integer(_purity);
  _call = omc_NFCall_makeTypedCall(threadData, _fn, _args, tmp1, tmp2, _returnType);
  /* skip box _call; NFCall */
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_typeNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _call = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _call = __omcQ_24in_5Fcall;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_integer _fn_context;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fn_context has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_NFInstContext_inRelaxed(threadData, _context))
          {
            _fn_context = omc_NFInstContext_set(threadData, ((modelica_integer) 16), ((modelica_integer) 1));
          }
          else
          {
            _fn_context = ((modelica_integer) 16);
          }

          omc_NFFunction_Function_typeRefCache(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _fn_context);
          tmpMeta1 = omc_NFCall_typeArgs(threadData, _call, _context, _info);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT109, _OMC_LIT110);
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
  _call = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _call;
}
modelica_metatype boxptr_NFCall_typeNormalCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcall, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _call = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _call = omc_NFCall_typeNormalCall(threadData, __omcQ_24in_5Fcall, tmp1, _info);
  /* skip box _call; NFCall */
  return _call;
}

DLLDirection
modelica_metatype omc_NFCall_typeCallExp(threadData_t *threadData, modelica_metatype _ty_call, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_pur)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_integer _pur;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _ty has no default value.
  // _var has no default value.
  // _pur has no default value.
  _ty = omc_NFCall_typeOf(threadData, _ty_call);

  _var = omc_NFCall_variability(threadData, _ty_call);

  _pur = omc_NFCall_purity(threadData, _ty_call);

  if(omc_NFCall_isRecordConstructor(threadData, _ty_call))
  {
    _outExp = omc_NFCall_toRecordExpression(threadData, _ty_call, _ty);
  }
  else
  {
    if(omc_NFFunction_Function_hasUnboxArgs(threadData, omc_NFCall_typedFunction(threadData, _ty_call)))
    {
      tmpMeta1 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_unboxArgs(threadData, _ty_call));
      _outExp = tmpMeta1;
    }
    else
    {
      tmpMeta2 = mmc_mk_box2(16, &NFExpression_CALL__desc, _ty_call);
      _outExp = tmpMeta2;
    }

    _outExp = omc_NFInline_inlineCallExp(threadData, _outExp, 0 /* false */);
  }
  _return: OMC_LABEL_UNUSED
  if (out_ty) { *out_ty = _ty; }
  if (out_var) { *out_var = _var; }
  if (out_pur) { *out_pur = _pur; }
  return _outExp;
}
modelica_metatype boxptr_NFCall_typeCallExp(threadData_t *threadData, modelica_metatype _ty_call, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_pur)
{
  modelica_integer _var;
  modelica_integer _pur;
  modelica_metatype _outExp = NULL;
  _outExp = omc_NFCall_typeCallExp(threadData, _ty_call, out_ty, &_var, &_pur);
  /* skip box _outExp; NFExpression */
  /* skip box _ty; NFType */
  if (out_var) { *out_var = mmc_mk_icon(_var); }
  if (out_pur) { *out_pur = mmc_mk_icon(_pur); }
  return _outExp;
}

DLLDirection
void omc_NFCall_checkNotPartial(threadData_t *threadData, modelica_metatype _fnRef, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((omc_NFInstNode_InstNode_isPartial(threadData, omc_NFComponentRef_node(threadData, _fnRef)) && (!omc_NFInstContext_inRelaxed(threadData, _context))))
  {
    tmpMeta1 = mmc_mk_cons(omc_NFComponentRef_toString(threadData, _fnRef), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT113, tmpMeta1, _info);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFCall_checkNotPartial(threadData_t *threadData, modelica_metatype _fnRef, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_context);
  omc_NFCall_checkNotPartial(threadData, _fnRef, tmp1, _info);
  return;
}

DLLDirection
modelica_metatype omc_NFCall_typeCall(threadData_t *threadData, modelica_metatype _callExp, modelica_integer _context, modelica_metatype _info, modelica_boolean _retype, modelica_metatype *out_ty, modelica_integer *out_var, modelica_integer *out_pur)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_integer _pur;
  modelica_metatype _call = NULL;
  modelica_metatype _ty_call = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _ty has no default value.
  // _var has no default value.
  // _pur has no default value.
  // _call has no default value.
  // _ty_call has no default value.
  // _cref has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _callExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,13,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _call = tmpMeta2;

  { /* match expression */
    modelica_metatype tmp6_1;
    tmp6_1 = _call;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 8; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,4) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          
          _cref = tmpMeta8;
          /* Pattern matching succeeded */
          if(omc_NFBuiltinCall_needSpecialHandling(threadData, _call))
          {
            _outExp = omc_NFBuiltinCall_typeSpecial(threadData, _call, _context, _info ,&_ty ,&_var ,&_pur);
          }
          else
          {
            omc_NFCall_checkNotPartial(threadData, _cref, _context, _info);

            _ty_call = omc_NFCall_typeMatchNormalCall(threadData, _call, _context, _info, 1 /* true */);

            _outExp = omc_NFCall_typeCallExp(threadData, _ty_call ,&_ty ,&_var ,&_pur);
          }
          tmpMeta3 = _outExp;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,3,2) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _ty_call = omc_NFCall_typeArrayConstructor(threadData, _call, _context, _info ,&_ty ,&_var ,&_pur);
          tmpMeta9 = mmc_mk_box2(16, &NFExpression_CALL__desc, _ty_call);
          tmpMeta3 = tmpMeta9;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,5,3) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          omc_NFCall_checkNotPartial(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), _context, _info);

          _ty_call = omc_NFCall_typeReduction(threadData, _call, _context, _info ,&_ty ,&_var ,&_pur);
          tmpMeta10 = mmc_mk_box2(16, &NFExpression_CALL__desc, _ty_call);
          tmpMeta3 = tmpMeta10;
          goto tmp5_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(_retype && (!omc_NFBuiltinCall_needSpecialHandling(threadData, _call)))) goto tmp5_end;
          _ty_call = omc_NFCall_retypeCall(threadData, _call, _context, _info);

          _outExp = omc_NFCall_typeCallExp(threadData, _ty_call ,&_ty ,&_var ,&_pur);
          tmpMeta3 = _outExp;
          goto tmp5_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));

          _var = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));

          _pur = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta3 = _callExp;
          goto tmp5_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)));

          _var = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3))));

          _pur = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));
          tmpMeta3 = _callExp;
          goto tmp5_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,8) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)));

          _var = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4))));

          _pur = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))));
          tmpMeta3 = _callExp;
          goto tmp5_done;
        }
        case 7: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT114,omc_NFExpression_toString(threadData, _callExp));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta11, _OMC_LIT115);
          goto goto_4;
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
  _outExp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  if (out_ty) { *out_ty = _ty; }
  if (out_var) { *out_var = _var; }
  if (out_pur) { *out_pur = _pur; }
  return _outExp;
}
modelica_metatype boxptr_NFCall_typeCall(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _context, modelica_metatype _info, modelica_metatype _retype, modelica_metatype *out_ty, modelica_metatype *out_var, modelica_metatype *out_pur)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _var;
  modelica_integer _pur;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_context);
  tmp2 = mmc_unbox_integer(_retype);
  _outExp = omc_NFCall_typeCall(threadData, _callExp, tmp1, _info, tmp2, out_ty, &_var, &_pur);
  /* skip box _outExp; NFExpression */
  /* skip box _ty; NFType */
  if (out_var) { *out_var = mmc_mk_icon(_var); }
  if (out_pur) { *out_pur = mmc_mk_icon(_pur); }
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFCall_instantiate(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info)
{
  modelica_metatype _callExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _callExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _functionArgs;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFCall_instNormalCall(threadData, _functionName, _functionArgs, _scope, _context, _info);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFCall_instIteratorCall(threadData, _functionName, _functionArgs, _scope, _context, _info);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT116, _OMC_LIT117);
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
  _callExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _callExp;
}
modelica_metatype boxptr_NFCall_instantiate(threadData_t *threadData, modelica_metatype _functionName, modelica_metatype _functionArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _callExp = NULL;
  tmp1 = mmc_unbox_integer(_context);
  _callExp = omc_NFCall_instantiate(threadData, _functionName, _functionArgs, _scope, tmp1, _info);
  /* skip box _callExp; NFExpression */
  return _callExp;
}

