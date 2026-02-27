#include "omc_simulation_settings.h"
#include "NFSimplifyExp.h"
#define _OMC_LIT0_data "OpenModelica_fmuLoadResource"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,28,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&NFType_STRING__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10,0.0);
#define _OMC_LIT10 MMC_REFREALLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT4,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,1) {_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT13,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT17,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,3) {&Flags_FlagVisibility_INTERNAL__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Is true when building an FMU (so the compiler can look for URIs to package as FMI resources)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,93,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(114)),_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT23,_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,2,5) {&NFSubscript_INDEX__desc,_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,17,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT30,_OMC_LIT31,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NFSimplifyExp.addArgument failed to add : "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,42,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data " to "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,4,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data ". Only works for MULTARY()!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,27,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "NFSimplifyExp.getConstantValue expression is not known to be a constant number: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,80,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFSimplifyExp.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,80,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT41_6,1.772102377e9);
#define _OMC_LIT41_6 MMC_REFREALLIT(_OMC_LIT_STRUCT41_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1498)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1498)),MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),_OMC_LIT41_6}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "NFSimplifyExp.combineConstantNumbers detected non-commutative operator in MULTARY(): ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,86,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "]\n with following arguments: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,29,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,2,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "\n and following inverse arguments: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,35,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT46_6,1.772102377e9);
#define _OMC_LIT46_6 MMC_REFREALLIT(_OMC_LIT_STRUCT46_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1482)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1485)),MMC_IMMEDIATE(MMC_TAGFIXNUM(21)),_OMC_LIT46_6}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "NFSimplifyExp.simplifyUnary failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,35,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,1) {_OMC_LIT47,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "nfExpandOperations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,18,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "Expand all unary/binary operations to scalar expressions in the new frontend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,77,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(170)),_OMC_LIT49,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "NFSimplifyExp.simplifyMultarySigns failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,42,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,2,1) {_OMC_LIT53,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "NFSimplifyExp.simplifyMultary detected non-commutative operator in MULTARY(): ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,79,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT56_6,1.772102377e9);
#define _OMC_LIT56_6 MMC_REFREALLIT(_OMC_LIT_STRUCT56_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT40,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(850)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(853)),MMC_IMMEDIATE(MMC_TAGFIXNUM(24)),_OMC_LIT56_6}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "NFSimplifyExp.simplifyMultary failed for expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,53,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,3,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "product"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,7,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,11,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,38,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT61,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,1,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "replaceHomotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,15,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,4,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Default, do not replace homotopy."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,33,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,0) {_OMC_LIT68,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "actual"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,6,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Replace homotopy(actual, simplified) with actual."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,49,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,0) {_OMC_LIT73,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "simplified"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,10,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "Replace homotopy(actual, simplified) with simplified."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,53,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,2,0) {_OMC_LIT77,_OMC_LIT79}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,2,1) {_OMC_LIT80,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,1) {_OMC_LIT76,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,1) {_OMC_LIT72,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,1,1) {_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Replaces homotopy(actual, simplified) with the actual expression or the simplified expression. Good for debugging models which use homotopy. The default is to not replace homotopy."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,180,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(50)),_OMC_LIT66,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT67,_OMC_LIT69,_OMC_LIT85,_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "$OMC$PositiveMax"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,16,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,3,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,1,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT93,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,1,1) {_OMC_LIT94}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT92,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT95,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,2,1) {_OMC_LIT96,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT98,2,1) {_OMC_LIT96,_OMC_LIT97}};
#define _OMC_LIT98 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT17,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "$OMC$inStreamDiv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,16,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "newBackend"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,10,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "Activates experimental new backend for better array handling. This also activates the new frontend. [WIP]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,105,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT102}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(140)),_OMC_LIT101,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT67,_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT103}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "cat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,3,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,3,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "delay"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,5,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,3,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "fill"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,4,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "homotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,8,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,3,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "ones"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,4,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "transpose"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,9,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "vector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,6,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "zeros"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,5,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "semiLinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,10,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "OpenModelica_uriToFilename"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,26,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "NFSimplifyExp.simplifyCall2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,27,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "- NFSimplifyExp.simplifyCall2 failed to evaluate "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,49,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,1,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,9,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,41,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT123}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT122,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT124}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "nfExpandFuncArgs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,16,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "Expand all function arguments in the new frontend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,50,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT127}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(176)),_OMC_LIT126,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT128}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "nfEvalConstArgFuncs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,19,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "Evaluate all functions with constant arguments in the new frontend."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,67,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT131}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT133,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(169)),_OMC_LIT130,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT132}};
#define _OMC_LIT133 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "### dumpSimplify | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,19,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data " ###\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,5,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "[BEFORE] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,9,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "[AFTER ] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,9,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,2,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "dumpSimplify"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,12,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "Dumps expressions before and after simplification."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,50,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT141,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT140}};
#define _OMC_LIT141 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(187)),_OMC_LIT139,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT141}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
#include "util/modelica.h"

#include "NFSimplifyExp_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_simplifyURIToFilename(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_simplifyURIToFilename,2,0) {(void*) boxptr_NFSimplifyExp_simplifyURIToFilename,0}};
#define boxvar_NFSimplifyExp_simplifyURIToFilename MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_simplifyURIToFilename)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_removeTrivialScalarProduct(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_removeTrivialScalarProduct,2,0) {(void*) boxptr_NFSimplifyExp_removeTrivialScalarProduct,0}};
#define boxvar_NFSimplifyExp_removeTrivialScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_removeTrivialScalarProduct)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_addArgument(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _arg, modelica_boolean _inverse);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_addArgument(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _arg, modelica_metatype _inverse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_addArgument,2,0) {(void*) boxptr_NFSimplifyExp_addArgument,0}};
#define boxvar_NFSimplifyExp_addArgument MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_addArgument)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_combineBinariesSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubscript);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_combineBinariesSubscript,2,0) {(void*) boxptr_NFSimplifyExp_combineBinariesSubscript,0}};
#define boxvar_NFSimplifyExp_combineBinariesSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_combineBinariesSubscript)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_combineBinariesExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _optOperator, modelica_metatype __omcQ_24in_5Fresult, modelica_boolean _inverse);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_combineBinariesExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _optOperator, modelica_metatype __omcQ_24in_5Fresult, modelica_metatype _inverse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_combineBinariesExp,2,0) {(void*) boxptr_NFSimplifyExp_combineBinariesExp,0}};
#define boxvar_NFSimplifyExp_combineBinariesExp MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_combineBinariesExp)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *threadData, modelica_metatype _oldValue, modelica_integer _step);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *threadData, modelica_metatype _oldValue, modelica_metatype _step);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_cancelTermsInMultary_inc,2,0) {(void*) boxptr_NFSimplifyExp_cancelTermsInMultary_inc,0}};
#define boxvar_NFSimplifyExp_cancelTermsInMultary_inc MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_cancelTermsInMultary_inc)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_cancelTermsInMultary(threadData_t *threadData, modelica_metatype _inArguments, modelica_metatype _inInv_arguments, modelica_metatype *out_outInv_arguments);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_cancelTermsInMultary,2,0) {(void*) boxptr_NFSimplifyExp_cancelTermsInMultary,0}};
#define boxvar_NFSimplifyExp_cancelTermsInMultary MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_cancelTermsInMultary)
PROTECTED_FUNCTION_STATIC modelica_real omc_NFSimplifyExp_getConstantValue(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_getConstantValue(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSimplifyExp_getConstantValue,2,0) {(void*) boxptr_NFSimplifyExp_getConstantValue,0}};
#define boxvar_NFSimplifyExp_getConstantValue MMC_REFSTRUCTLIT(boxvar_lit_NFSimplifyExp_getConstantValue)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_simplifyURIToFilename(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call)
{
  modelica_metatype _outExp = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT27))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta6 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta1, tmpMeta2, _OMC_LIT4, _OMC_LIT20, tmpMeta3, tmpMeta4, listArray(tmpMeta5), _OMC_LIT21, _OMC_LIT22);
    tmpMeta7 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta13 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta8, tmpMeta9, _OMC_LIT4, _OMC_LIT20, tmpMeta10, tmpMeta11, listArray(tmpMeta12), _OMC_LIT21, _OMC_LIT22);
    tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta6, tmpMeta7, omc_NFCall_variability(threadData, _call), 2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 8)))));
    _outExp = tmpMeta14;
  }
  else
  {
    tmpMeta15 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
    _outExp = tmpMeta15;
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_removeTrivialScalarProduct(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _exp1 = NULL;
  modelica_metatype _exp2 = NULL;
  modelica_metatype _subs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _ty has no default value.
  // _exp1 has no default value.
  // _exp2 has no default value.
  // _subs has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (19 != tmp9) goto tmp3_end;
          
          _ty = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), 0 /* false */) == ((modelica_integer) 1)) && (omc_NFType_sizeOf(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), 0 /* false */) == ((modelica_integer) 1)))) goto tmp3_end;
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp13;
            modelica_metatype _d_loopVar = 0;
            modelica_metatype _d;
            _d_loopVar = omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar3;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_d_loopVar)) {
                _d = MMC_CAR(_d_loopVar);
                _d_loopVar = MMC_CDR(_d_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar2 = _OMC_LIT29;
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar3;
          }
          _subs = tmpMeta10;

          _exp1 = omc_NFExpression_applySubscripts(threadData, _subs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 0 /* false */);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp17;
            modelica_metatype _d_loopVar = 0;
            modelica_metatype _d;
            _d_loopVar = omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar5;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_d_loopVar)) {
                _d = MMC_CAR(_d_loopVar);
                _d_loopVar = MMC_CDR(_d_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar4 = _OMC_LIT29;
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar5;
          }
          _subs = tmpMeta14;

          _exp2 = omc_NFExpression_applySubscripts(threadData, _subs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), 0 /* false */);
          tmpMeta18 = mmc_mk_box3(3, &NFOperator_OPERATOR__desc, _ty, mmc_mk_integer(3));
          tmpMeta19 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, tmpMeta18, _exp2);
          tmpMeta1 = tmpMeta19;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_addArgument(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _arg, modelica_boolean _inverse)
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
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_inverse) goto tmp3_end;
          tmpMeta7 = mmc_mk_cons(_arg, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _exp = tmpMeta6;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(_arg, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = tmpMeta9;
          _exp = tmpMeta8;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,30,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _arg;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT35,omc_NFExpression_toString(threadData, _arg));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT36);
          tmpMeta13 = stringAppend(tmpMeta12,omc_NFExpression_toString(threadData, _exp));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT37);
          tmpMeta10 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT34, tmpMeta10);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_addArgument(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _arg, modelica_metatype _inverse)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_inverse);
  _exp = omc_NFSimplifyExp_addArgument(threadData, __omcQ_24in_5Fexp, _arg, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_combineBinariesSubscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsubscript)
{
  modelica_metatype _subscript = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _subscript = __omcQ_24in_5Fsubscript;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subscript;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2)))));
          tmpMeta5 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta5), MMC_UNTAGPTR(_subscript), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta5))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2))), mmc_mk_none(), tmpMeta6, 0 /* false */);
          _subscript = tmpMeta5;
          tmpMeta1 = _subscript;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2)))));
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_subscript), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2))), mmc_mk_none(), tmpMeta8, 0 /* false */);
          _subscript = tmpMeta7;
          tmpMeta1 = _subscript;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2)))));
          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_subscript), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2))), mmc_mk_none(), tmpMeta10, 0 /* false */);
          _subscript = tmpMeta9;
          tmpMeta1 = _subscript;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp15;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subscript), 2)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar7;
            while(1) {
              tmp15 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp15--;
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar6 = omc_NFSimplifyExp_combineBinariesSubscript(threadData, _sub);
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar7;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_subscript), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[2] = tmpMeta12;
          _subscript = tmpMeta11;
          tmpMeta1 = _subscript;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _subscript;
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
  _subscript = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subscript;
}

static modelica_metatype closure0_NFSimplifyExp_combineBinariesExp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype optOperator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype $in_result = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype inverse = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NFSimplifyExp_combineBinariesExp(thData, exp, optOperator, $in_result, inverse);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_combineBinariesExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _optOperator, modelica_metatype __omcQ_24in_5Fresult, modelica_boolean _inverse)
{
  modelica_metatype _result = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _result = __omcQ_24in_5Fresult;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _optOperator;
    tmp4_2 = _exp;
    {
      modelica_metatype _op = NULL;
      modelica_metatype _new_exp = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _op has no default value.
      // _new_exp has no default value.
      // _cref has no default value.
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 28; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          _op = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_compare(threadData, _op, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))) == ((modelica_integer) 0))) goto tmp3_end;
          _result = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_some(_op), _result, _inverse);
          /* Tail recursive call */
          _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
          _optOperator = mmc_mk_some(_op);
          __omcQ_24in_5Fresult = _result;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,21,3) == 0) goto tmp3_end;
          
          _op = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFOperator_compare(threadData, _op, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))) == ((modelica_integer) 0))) goto tmp3_end;
          {
            modelica_metatype _arg;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _arg = MMC_CAR(tmpMeta8);
              _result = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _result, _inverse);
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              _result = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _result, (!_inverse));
            }
          }
          tmpMeta1 = _result;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          _op = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isCombineable(threadData, _op, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))) goto tmp3_end;
          _result = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_some(_op), _result, _inverse);
          /* Tail recursive call */
          _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
          _optOperator = mmc_mk_some(_op);
          __omcQ_24in_5Fresult = _result;
          _inverse = (!_inverse);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,21,3) == 0) goto tmp3_end;
          
          _op = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isCombineable(threadData, _op, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))))) goto tmp3_end;
          {
            modelica_metatype _arg;
            for (tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _arg = MMC_CAR(tmpMeta14);
              _result = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _result, _inverse);
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _arg = MMC_CAR(tmpMeta16);
              _result = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _result, (!_inverse));
            }
          }
          tmpMeta1 = _result;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isCommutative(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))) goto tmp3_end;
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta18, tmpMeta19, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          _new_exp = tmpMeta20;

          _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _new_exp, 0 /* false */);

          _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), _new_exp, 0 /* false */);
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _new_exp, _inverse);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,21,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isCommutative(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))))) goto tmp3_end;
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta23 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta21, tmpMeta22, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))));
          _new_exp = tmpMeta23;

          {
            modelica_metatype _arg;
            for (tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))); !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
            {
              _arg = MMC_CAR(tmpMeta24);
              _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _new_exp, 0 /* false */);
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))); !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
            {
              _arg = MMC_CAR(tmpMeta26);
              _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), _new_exp, 1 /* true */);
            }
          }
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _new_exp, _inverse);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isSoftCommutative(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))) goto tmp3_end;
          _op = omc_NFOperator_invert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta28, tmpMeta29, _op);
          _new_exp = tmpMeta30;

          _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_some(_op), _new_exp, 0 /* false */);

          _new_exp = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), mmc_mk_some(_op), _new_exp, 1 /* true */);
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _new_exp, _inverse);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,0,5) == 0) goto tmp3_end;
          
          _cref = tmpMeta31;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp36;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cref), 3)));
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar9;
            while(1) {
              tmp36 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp36--;
              }
              if (tmp36 == 0) {
                __omcQ_24tmpVar8 = omc_NFSimplifyExp_combineBinariesSubscript(threadData, _sub);
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp36 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar9;
          }
          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_cref), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[3] = tmpMeta33;
          _cref = tmpMeta32;

          tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[3] = _cref;
          _exp = tmpMeta37;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))))))
          {
            tmpMeta40 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _exp));
            tmpMeta39 = mmc_mk_box3(0, mmc_mk_none(), tmpMeta40, mmc_mk_boolean(0 /* false */));
            tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[3] = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_NFSimplifyExp_combineBinariesExp,tmpMeta39));
            _exp = tmpMeta38;
          }
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,10,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta42 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[3] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_none(), tmpMeta42, 0 /* false */);
          _exp = tmpMeta41;

          tmpMeta44 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5)))));
          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[5] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), mmc_mk_none(), tmpMeta44, 0 /* false */);
          _exp = tmpMeta43;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))))
          {
            tmpMeta46 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))))));
            tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(6));
            memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[4] = mmc_mk_some(omc_NFSimplifyExp_combineBinariesExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))), mmc_mk_none(), tmpMeta46, 0 /* false */));
            _exp = tmpMeta45;
          }
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp49;
            modelica_metatype tmpMeta50;
            modelica_metatype tmpMeta51;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp52;
            modelica_metatype _element_loopVar = 0;
            modelica_metatype _element;
            _element_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta50; /* defaultValue */
            tmp49 = &__omcQ_24tmpVar11;
            while(1) {
              tmp52 = 1;
              if (!listEmpty(_element_loopVar)) {
                _element = MMC_CAR(_element_loopVar);
                _element_loopVar = MMC_CDR(_element_loopVar);
                tmp52--;
              }
              if (tmp52 == 0) {
                tmpMeta51 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _element));
                __omcQ_24tmpVar10 = omc_NFSimplifyExp_combineBinariesExp(threadData, _element, mmc_mk_none(), tmpMeta51, 0 /* false */);
                *tmp49 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp49 = &MMC_CDR(*tmp49);
              } else if (tmp52 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp49 = mmc_mk_nil();
            tmpMeta48 = __omcQ_24tmpVar11;
          }
          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[3] = tmpMeta48;
          _exp = tmpMeta47;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,12,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp55;
            modelica_metatype tmpMeta56;
            modelica_metatype tmpMeta57;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp58;
            modelica_metatype _element_loopVar = 0;
            modelica_metatype _element;
            _element_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
            tmpMeta56 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta56; /* defaultValue */
            tmp55 = &__omcQ_24tmpVar13;
            while(1) {
              tmp58 = 1;
              if (!listEmpty(_element_loopVar)) {
                _element = MMC_CAR(_element_loopVar);
                _element_loopVar = MMC_CDR(_element_loopVar);
                tmp58--;
              }
              if (tmp58 == 0) {
                tmpMeta57 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _element));
                __omcQ_24tmpVar12 = omc_NFSimplifyExp_combineBinariesExp(threadData, _element, mmc_mk_none(), tmpMeta57, 0 /* false */);
                *tmp55 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp55 = &MMC_CDR(*tmp55);
              } else if (tmp58 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp55 = mmc_mk_nil();
            tmpMeta54 = __omcQ_24tmpVar13;
          }
          tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[4] = tmpMeta54;
          _exp = tmpMeta53;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta66;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,1) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta59;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp62;
            modelica_metatype tmpMeta63;
            modelica_metatype tmpMeta64;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp65;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)));
            tmpMeta63 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta63; /* defaultValue */
            tmp62 = &__omcQ_24tmpVar15;
            while(1) {
              tmp65 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp65--;
              }
              if (tmp65 == 0) {
                tmpMeta64 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _arg));
                __omcQ_24tmpVar14 = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_none(), tmpMeta64, 0 /* false */);
                *tmp62 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp62 = &MMC_CDR(*tmp62);
              } else if (tmp65 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp62 = mmc_mk_nil();
            tmpMeta61 = __omcQ_24tmpVar15;
          }
          tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[6] = tmpMeta61;
          _call = tmpMeta60;

          tmpMeta66 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta66), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta66))[2] = _call;
          _exp = tmpMeta66;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,14,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta68 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta68, 0 /* false */);
          _exp = tmpMeta67;

          if(isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))))
          {
            tmpMeta70 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))));
            tmpMeta69 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta69), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta69))[3] = mmc_mk_some(omc_NFSimplifyExp_combineBinariesExp(threadData, omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))), mmc_mk_none(), tmpMeta70, 0 /* false */));
            _exp = tmpMeta69;
          }
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta72 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta71 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta71), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta71))[3] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_none(), tmpMeta72, 0 /* false */);
          _exp = tmpMeta71;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,18,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta74 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta73 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta73), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta73))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta74, 0 /* false */);
          _exp = tmpMeta73;

          tmpMeta76 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
          tmpMeta75 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta75), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta75))[4] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), mmc_mk_none(), tmpMeta76, 0 /* false */);
          _exp = tmpMeta75;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta78 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta77 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta77), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta77))[3] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_none(), tmpMeta78, 0 /* false */);
          _exp = tmpMeta77;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,20,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta80 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta79 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta79), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta79))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta80, 0 /* false */);
          _exp = tmpMeta79;

          tmpMeta82 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
          tmpMeta81 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta81), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta81))[4] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), mmc_mk_none(), tmpMeta82, 0 /* false */);
          _exp = tmpMeta81;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,22,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta84 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta83 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta83), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta83))[3] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_none(), tmpMeta84, 0 /* false */);
          _exp = tmpMeta83;

          tmpMeta86 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
          tmpMeta85 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta85), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta85))[4] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), mmc_mk_none(), tmpMeta86, 0 /* false */);
          _exp = tmpMeta85;

          tmpMeta88 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5)))));
          tmpMeta87 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta87), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta87))[5] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 5))), mmc_mk_none(), tmpMeta88, 0 /* false */);
          _exp = tmpMeta87;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,23,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta90 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta89 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta89), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta89))[3] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), mmc_mk_none(), tmpMeta90, 0 /* false */);
          _exp = tmpMeta89;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,24,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta92 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta91 = MMC_TAGPTR(mmc_alloc_words(3));
          memcpy(MMC_UNTAGPTR(tmpMeta91), MMC_UNTAGPTR(_exp), 3*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta91))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta92, 0 /* false */);
          _exp = tmpMeta91;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,25,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta94 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta93 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta93), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta93))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta94, 0 /* false */);
          _exp = tmpMeta93;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,26,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta96 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta95 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta95), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta95))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta96, 0 /* false */);
          _exp = tmpMeta95;

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp99;
            modelica_metatype tmpMeta100;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp101;
            modelica_metatype _sub_loopVar = 0;
            modelica_metatype _sub;
            _sub_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            tmpMeta100 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta100; /* defaultValue */
            tmp99 = &__omcQ_24tmpVar17;
            while(1) {
              tmp101 = 1;
              if (!listEmpty(_sub_loopVar)) {
                _sub = MMC_CAR(_sub_loopVar);
                _sub_loopVar = MMC_CDR(_sub_loopVar);
                tmp101--;
              }
              if (tmp101 == 0) {
                __omcQ_24tmpVar16 = omc_NFSimplifyExp_combineBinariesSubscript(threadData, _sub);
                *tmp99 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp99 = &MMC_CDR(*tmp99);
              } else if (tmp101 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp99 = mmc_mk_nil();
            tmpMeta98 = __omcQ_24tmpVar17;
          }
          tmpMeta97 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta97), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta97))[3] = tmpMeta98;
          _exp = tmpMeta97;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,27,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta103 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta102 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta102), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta102))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta103, 0 /* false */);
          _exp = tmpMeta102;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,28,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta105 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
          tmpMeta104 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta104), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta104))[2] = omc_NFSimplifyExp_combineBinariesExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), mmc_mk_none(), tmpMeta105, 0 /* false */);
          _exp = tmpMeta104;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta106;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,29,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta106 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))));
          omc_Mutable_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), omc_NFSimplifyExp_combineBinariesExp(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), mmc_mk_none(), tmpMeta106, 0 /* false */));
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,31,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp109;
            modelica_metatype tmpMeta110;
            modelica_metatype tmpMeta111;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp112;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            tmpMeta110 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta110; /* defaultValue */
            tmp109 = &__omcQ_24tmpVar19;
            while(1) {
              tmp112 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp112--;
              }
              if (tmp112 == 0) {
                tmpMeta111 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _arg));
                __omcQ_24tmpVar18 = omc_NFSimplifyExp_combineBinariesExp(threadData, _arg, mmc_mk_none(), tmpMeta111, 0 /* false */);
                *tmp109 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp109 = &MMC_CDR(*tmp109);
              } else if (tmp112 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp109 = mmc_mk_nil();
            tmpMeta108 = __omcQ_24tmpVar19;
          }
          tmpMeta107 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta107), MMC_UNTAGPTR(_exp), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta107))[3] = tmpMeta108;
          _exp = tmpMeta107;
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
          goto tmp3_done;
        }
        case 27: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_addArgument(threadData, _result, _exp, _inverse);
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
  _result = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_combineBinariesExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _optOperator, modelica_metatype __omcQ_24in_5Fresult, modelica_metatype _inverse)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_inverse);
  _result = omc_NFSimplifyExp_combineBinariesExp(threadData, _exp, _optOperator, __omcQ_24in_5Fresult, tmp1);
  /* skip box _result; NFExpression */
  return _result;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_splitMultary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_metatype _args = NULL;
      modelica_metatype _inv_args = NULL;
      modelica_metatype _inv_op = NULL;
      modelica_metatype _fixed_op = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _new_exp has no default value.
      // _args has no default value.
      // _inv_args has no default value.
      // _inv_op has no default value.
      // _fixed_op has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))))))
          {
            /* Pattern-matching assignment */
            tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));
            if (listEmpty(tmpMeta6)) goto goto_2;
            tmpMeta7 = MMC_CAR(tmpMeta6);
            tmpMeta8 = MMC_CDR(tmpMeta6);
            _new_exp = tmpMeta7;
            _args = tmpMeta8;

            _inv_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
          }
          else
          {
            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))))))
            {
              if((omc_NFOperator_getMathClassification(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))) == 1))
              {
                /* Pattern-matching assignment */
                tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
                if (listEmpty(tmpMeta9)) goto goto_2;
                tmpMeta10 = MMC_CAR(tmpMeta9);
                tmpMeta11 = MMC_CDR(tmpMeta9);
                _new_exp = tmpMeta10;
                _inv_args = tmpMeta11;

                _args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));

                _new_exp = omc_NFExpression_negate(threadData, _new_exp);
              }
              else
              {
                _new_exp = omc_NFExpression_makeOne(threadData, omc_NFOperator_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));

                _args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));

                _inv_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
              }
            }
            else
            {
              if((omc_NFOperator_getMathClassification(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))) == 1))
              {
                _new_exp = omc_NFExpression_makeZero(threadData, omc_NFOperator_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
              }
              else
              {
                _new_exp = omc_NFExpression_makeOne(threadData, omc_NFOperator_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))));
              }

              _args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)));

              _inv_args = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
            }
          }

          _inv_op = omc_NFOperator_invert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))));

          {
            modelica_metatype _arg;
            for (tmpMeta12 = _args; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _arg = MMC_CAR(tmpMeta12);
              _fixed_op = omc_NFOperator_repairBinary(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), omc_NFExpression_typeOf(threadData, _new_exp), omc_NFExpression_typeOf(threadData, _arg));

              tmpMeta13 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _new_exp, _fixed_op, _arg);
              _new_exp = tmpMeta13;
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta15 = _inv_args; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _arg = MMC_CAR(tmpMeta15);
              _fixed_op = omc_NFOperator_repairBinary(threadData, _inv_op, omc_NFExpression_typeOf(threadData, _new_exp), omc_NFExpression_typeOf(threadData, _arg));

              tmpMeta16 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _new_exp, _fixed_op, _arg);
              _new_exp = tmpMeta16;
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

DLLDirection
modelica_metatype omc_NFSimplifyExp_combineBinaries(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_map(threadData, _exp, boxvar_NFSimplifyExp_removeTrivialScalarProduct);

  tmpMeta1 = mmc_mk_box2(33, &NFExpression_EMPTY__desc, omc_NFExpression_typeOf(threadData, _exp));
  _exp = omc_NFSimplifyExp_combineBinariesExp(threadData, _exp, mmc_mk_none(), tmpMeta1, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *threadData, modelica_metatype _oldValue, modelica_integer _step)
{
  modelica_integer _value;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _oldValue;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _value = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _value + _step;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _step;
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
  _value = tmp1;
  _return: OMC_LABEL_UNUSED
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *threadData, modelica_metatype _oldValue, modelica_metatype _step)
{
  modelica_integer tmp1;
  modelica_integer _value;
  modelica_metatype out_value;
  tmp1 = mmc_unbox_integer(_step);
  _value = omc_NFSimplifyExp_cancelTermsInMultary_inc(threadData, _oldValue, tmp1);
  out_value = mmc_mk_icon(_value);
  return out_value;
}

static modelica_metatype closure1_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *thData, modelica_metatype closure, modelica_metatype oldValue)
{
  modelica_metatype step = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_cancelTermsInMultary_inc(thData, oldValue, step);
}static modelica_metatype closure2_NFSimplifyExp_cancelTermsInMultary_inc(threadData_t *thData, modelica_metatype closure, modelica_metatype oldValue)
{
  modelica_metatype step = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_cancelTermsInMultary_inc(thData, oldValue, step);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFSimplifyExp_cancelTermsInMultary(threadData_t *threadData, modelica_metatype _inArguments, modelica_metatype _inInv_arguments, modelica_metatype *out_outInv_arguments)
{
  modelica_metatype _outArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outInv_arguments = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _counter = NULL;
  modelica_metatype _arg = NULL;
  modelica_integer _count;
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
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outArguments = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outInv_arguments = tmpMeta2;
  // _counter has no default value.
  // _arg has no default value.
  // _count has no default value.
  if((listEmpty(_inArguments) || listEmpty(_inInv_arguments)))
  {
    _outArguments = _inArguments;

    _outInv_arguments = _inInv_arguments;

    goto _return;
  }

  _counter = omc_UnorderedMap_new(threadData, boxvar_NFExpression_hash, boxvar_NFExpression_isEqual, ((modelica_integer) 1));

  {
    modelica_metatype _arg;
    for (tmpMeta3 = _inArguments; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _arg = MMC_CAR(tmpMeta3);
      tmpMeta4 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 1)));
      omc_UnorderedMap_addUpdate(threadData, _arg, (modelica_fnptr) mmc_mk_box2(0,closure1_NFSimplifyExp_cancelTermsInMultary_inc,tmpMeta4), _counter);
    }
  }

  {
    modelica_metatype _arg;
    for (tmpMeta6 = _inInv_arguments; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _arg = MMC_CAR(tmpMeta6);
      tmpMeta7 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) -1)));
      omc_UnorderedMap_addUpdate(threadData, _arg, (modelica_fnptr) mmc_mk_box2(0,closure2_NFSimplifyExp_cancelTermsInMultary_inc,tmpMeta7), _counter);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta9 = omc_UnorderedMap_toList(threadData, _counter); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _tpl = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _tpl;
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
      tmp13 = mmc_unbox_integer(tmpMeta12);
      _arg = tmpMeta11;
      _count = tmp13  /* pattern as ty=Integer */;

      if((_count > ((modelica_integer) 0)))
      {
        tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = _count;
        if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp15, tmp17); _i += tmp16)
          {
            tmpMeta14 = mmc_mk_cons(_arg, _outArguments);
            _outArguments = tmpMeta14;
          }
        }
      }
      else
      {
        if((_count < ((modelica_integer) 0)))
        {
          tmp19 = ((modelica_integer) 1); tmp20 = 1; tmp21 = (-_count);
          if(!(((tmp20 > 0) && (tmp19 > tmp21)) || ((tmp20 < 0) && (tmp19 < tmp21))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp19, tmp21); _i += tmp20)
            {
              tmpMeta18 = mmc_mk_cons(_arg, _outInv_arguments);
              _outInv_arguments = tmpMeta18;
            }
          }
        }
      }
    }
  }

  _outArguments = listReverseInPlace(_outArguments);

  _outInv_arguments = listReverseInPlace(_outInv_arguments);
  _return: OMC_LABEL_UNUSED
  if (out_outInv_arguments) { *out_outInv_arguments = _outInv_arguments; }
  return _outArguments;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_NFSimplifyExp_getConstantValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_real _value;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
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
          _value = omc_NFExpression_realValue(threadData, omc_NFCeval_evalExp(threadData, _exp, _OMC_LIT38));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT39,omc_NFExpression_toString(threadData, _exp));
          omc_Error_addInternalError(threadData, tmpMeta5, _OMC_LIT41);
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
  return _value;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFSimplifyExp_getConstantValue(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_real _value;
  modelica_metatype out_value;
  _value = omc_NFSimplifyExp_getConstantValue(threadData, _exp);
  out_value = mmc_mk_rcon(_value);
  return out_value;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_combineConstantNumbers(threadData_t *threadData, modelica_metatype _const, modelica_metatype _inv_const, modelica_integer _mcl, modelica_metatype _ty)
{
  modelica_metatype _res = NULL;
  modelica_real _tmp;
  modelica_real _result;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _tmp has no default value.
  // _result has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_mcl;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _result = 0.0;

          {
            modelica_metatype _exp;
            for (tmpMeta5 = _const; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _exp = MMC_CAR(tmpMeta5);
              _tmp = omc_NFSimplifyExp_getConstantValue(threadData, _exp);

              _result = _result + _tmp;
            }
          }

          {
            modelica_metatype _exp;
            for (tmpMeta7 = _inv_const; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _exp = MMC_CAR(tmpMeta7);
              _tmp = omc_NFSimplifyExp_getConstantValue(threadData, _exp);

              _result = _result - _tmp;
            }
          }
          tmp11 = (modelica_boolean)omc_NFType_isInteger(threadData, _ty);
          if(tmp11)
          {
            tmpMeta9 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer)floor(_result))));
            tmpMeta12 = tmpMeta9;
          }
          else
          {
            tmpMeta10 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(_result));
            tmpMeta12 = tmpMeta10;
          }
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
          modelica_metatype tmpMeta21;
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _result = 1.0;

          {
            modelica_metatype _exp;
            for (tmpMeta13 = _const; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _exp = MMC_CAR(tmpMeta13);
              _tmp = omc_NFSimplifyExp_getConstantValue(threadData, _exp);

              _result = (_result) * (_tmp);
            }
          }

          if((_result == 0.0))
          {
            if(omc_List_any(threadData, _inv_const, boxvar_NFExpression_isZero))
            {
              _res = omc_NFExpression_makeNaN(threadData, _ty);
            }
            else
            {
              _res = omc_NFExpression_makeZero(threadData, _ty);
            }
          }
          else
          {
            {
              modelica_metatype _exp;
              for (tmpMeta15 = _inv_const; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
              {
                _exp = MMC_CAR(tmpMeta15);
                _tmp = omc_NFSimplifyExp_getConstantValue(threadData, _exp);

                tmp16 = _tmp;
                if (tmp16 == 0) {goto goto_2;}
                _result = (_result) / tmp16;
              }
            }

            tmp20 = (modelica_boolean)omc_NFType_isInteger(threadData, _ty);
            if(tmp20)
            {
              tmpMeta18 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(((modelica_integer)floor(_result))));
              tmpMeta21 = tmpMeta18;
            }
            else
            {
              tmpMeta19 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(_result));
              tmpMeta21 = tmpMeta19;
            }
            _res = tmpMeta21;
          }
          tmpMeta1 = _res;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta34;
          
          /* Pattern matching succeeded */
          tmpMeta22 = stringAppend(_OMC_LIT42,omc_NFOperator_mathSymbol(threadData, (modelica_integer)_mcl));
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT43);
          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp25;
            modelica_metatype tmpMeta26;
            modelica_string __omcQ_24tmpVar20;
            modelica_integer tmp27;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _const;
            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta26; /* defaultValue */
            tmp25 = &__omcQ_24tmpVar21;
            while(1) {
              tmp27 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp27--;
              }
              if (tmp27 == 0) {
                __omcQ_24tmpVar20 = omc_NFExpression_toString(threadData, _e);
                *tmp25 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp25 = &MMC_CDR(*tmp25);
              } else if (tmp27 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp25 = mmc_mk_nil();
            tmpMeta24 = __omcQ_24tmpVar21;
          }
          tmpMeta28 = stringAppend(tmpMeta23,stringDelimitList(tmpMeta24, _OMC_LIT44));
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT45);
          {
            modelica_metatype __omcQ_24tmpVar23;
            modelica_metatype* tmp31;
            modelica_metatype tmpMeta32;
            modelica_string __omcQ_24tmpVar22;
            modelica_integer tmp33;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _inv_const;
            tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar23 = tmpMeta32; /* defaultValue */
            tmp31 = &__omcQ_24tmpVar23;
            while(1) {
              tmp33 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp33--;
              }
              if (tmp33 == 0) {
                __omcQ_24tmpVar22 = omc_NFExpression_toString(threadData, _e);
                *tmp31 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                tmp31 = &MMC_CDR(*tmp31);
              } else if (tmp33 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp31 = mmc_mk_nil();
            tmpMeta30 = __omcQ_24tmpVar23;
          }
          tmpMeta34 = stringAppend(tmpMeta29,stringDelimitList(tmpMeta30, _OMC_LIT44));
          omc_Error_assertion(threadData, 0 /* false */, tmpMeta34, _OMC_LIT46);
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFSimplifyExp_combineConstantNumbers(threadData_t *threadData, modelica_metatype _const, modelica_metatype _inv_const, modelica_metatype _mcl, modelica_metatype _ty)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_mcl);
  _res = omc_NFSimplifyExp_combineConstantNumbers(threadData, _const, _inv_const, tmp1, _ty);
  /* skip box _res; NFExpression */
  return _res;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyRecordElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _e2 = NULL;
  modelica_integer _idx;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _e has no default value.
  // _e2 has no default value.
  // _idx has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _exp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,28,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _e = tmpMeta2;
  _idx = tmp4  /* pattern as ty=Integer */;
  _ty = tmpMeta5;

  _e2 = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);

  if((!referenceEq(_e, _e2)))
  {
    _exp = omc_NFExpression_nthRecordElement(threadData, _idx, _e2);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyTupleElement(threadData_t *threadData, modelica_metatype __omcQ_24in_5FtupleExp)
{
  modelica_metatype _tupleExp = NULL;
  modelica_metatype _e = NULL;
  modelica_integer _index;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tupleExp = __omcQ_24in_5FtupleExp;
  // _e has no default value.
  // _index has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tupleExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,27,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _e = tmpMeta2;
  _index = tmp4  /* pattern as ty=Integer */;
  _ty = tmpMeta5;

  _e = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);

  _tupleExp = omc_NFExpression_tupleElement(threadData, _e, _ty, _index);
  _return: OMC_LABEL_UNUSED
  return _tupleExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifySubscriptedExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsubscriptedExp)
{
  modelica_metatype _subscriptedExp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _subs = NULL;
  modelica_metatype _ty = NULL;
  modelica_boolean _split;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _subscriptedExp = __omcQ_24in_5FsubscriptedExp;
  // _e has no default value.
  // _subs has no default value.
  // _ty has no default value.
  // _split has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _subscriptedExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,26,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _e = tmpMeta2;
  _subs = tmpMeta3;
  _ty = tmpMeta4;
  _split = tmp6  /* pattern as ty=Boolean */;

  _subscriptedExp = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);

  _subs = omc_NFSubscript_simplifyList(threadData, _subs, omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, _e)), 0 /* false */);

  if((((!_split) && (!omc_List_all(threadData, _subs, boxvar_NFSubscript_isLiteral))) && omc_NFType_isScalar(threadData, _ty)))
  {
    while(1)
    {
      if(!((((!listEmpty(_subs)) && omc_NFExpression_isArray(threadData, _subscriptedExp)) && (!omc_NFExpression_isEmptyArray(threadData, _subscriptedExp))) && omc_Array_allEqual(threadData, omc_NFExpression_arrayElements(threadData, _subscriptedExp), boxvar_NFExpression_isEqual))) break;
      _subs = listRest(_subs);

      _subscriptedExp = arrayGet(omc_NFExpression_arrayElements(threadData, _subscriptedExp), ((modelica_integer) 1));
    }

    if(listEmpty(_subs))
    {
      goto _return;
    }
  }

  if(_split)
  {
    tmpMeta7 = mmc_mk_box5(29, &NFExpression_SUBSCRIPTED__EXP__desc, _subscriptedExp, _subs, _ty, mmc_mk_boolean(_split));
    _subscriptedExp = tmpMeta7;
  }
  else
  {
    _subscriptedExp = omc_NFExpression_applySubscripts(threadData, _subs, _subscriptedExp, 0 /* false */);
  }
  _return: OMC_LABEL_UNUSED
  return _subscriptedExp;
}

static modelica_metatype closure3_NFSimplifyExp_simplifyCast(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplifyCast(thData, exp, ty);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyCast(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty)
{
  modelica_metatype _castExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _castExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _ty;
    tmp4_2 = _exp;
    {
      modelica_metatype _ety = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ety has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(((modelica_real)mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _ety = omc_NFType_unliftArray(threadData, _ty);

          tmpMeta9 = mmc_mk_box1(0, _ety);
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure3_NFSimplifyExp_simplifyCast,tmpMeta9));
          _exp = tmpMeta8;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = omc_NFType_setArrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), omc_NFType_arrayElementType(threadData, _ty));
          _exp = tmpMeta10;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box3(26, &NFExpression_CAST__desc, _ty, _exp);
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
  _castExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _castExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyIf(threadData_t *threadData, modelica_metatype __omcQ_24in_5FifExp)
{
  modelica_metatype _ifExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _cond = NULL;
  modelica_metatype _tb = NULL;
  modelica_metatype _fb = NULL;
  modelica_boolean _tb_val;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _ifExp = __omcQ_24in_5FifExp;
  // _ty has no default value.
  // _cond has no default value.
  // _tb has no default value.
  // _fb has no default value.
  // _tb_val has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ifExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,22,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _ty = tmpMeta2;
  _cond = tmpMeta3;
  _tb = tmpMeta4;
  _fb = tmpMeta5;

  _cond = omc_NFSimplifyExp_simplify(threadData, _cond, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _cond;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,3,1) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = omc_NFSimplifyExp_simplify(threadData, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cond), 2))))?_tb:_fb), 0 /* false */);
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _tb = omc_NFSimplifyExp_simplify(threadData, _tb, 0 /* false */);

          _fb = omc_NFSimplifyExp_simplify(threadData, _fb, 0 /* false */);

          if(omc_NFExpression_isEqual(threadData, _tb, _fb))
          {
            _ifExp = _tb;
          }
          else
          {
            if((omc_NFExpression_isBoolean(threadData, _tb) && omc_NFExpression_isBoolean(threadData, _fb)))
            {
              /* Pattern-matching assignment */
              tmpMeta11 = _tb;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,1) == 0) goto goto_7;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
              tmp13 = mmc_unbox_integer(tmpMeta12);
              _tb_val = tmp13  /* pattern as ty=Boolean */;

              _ifExp = (_tb_val?_cond:omc_NFExpression_logicNegate(threadData, _cond));
            }
            else
            {
              tmpMeta14 = mmc_mk_box5(25, &NFExpression_IF__desc, _ty, _cond, _tb, _fb);
              _ifExp = tmpMeta14;
            }
          }
          tmpMeta6 = _ifExp;
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
  _ifExp = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _ifExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyRelation(threadData_t *threadData, modelica_metatype __omcQ_24in_5FrelationExp)
{
  modelica_metatype _relationExp = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _se1 = NULL;
  modelica_metatype _se2 = NULL;
  modelica_metatype _op = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _relationExp = __omcQ_24in_5FrelationExp;
  // _e1 has no default value.
  // _e2 has no default value.
  // _se1 has no default value.
  // _se2 has no default value.
  // _op has no default value.
  // _index has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _relationExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,20,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _e1 = tmpMeta2;
  _op = tmpMeta3;
  _e2 = tmpMeta4;
  _index = tmp6  /* pattern as ty=Integer */;

  _se1 = omc_NFSimplifyExp_simplify(threadData, _e1, 0 /* false */);

  _se2 = omc_NFSimplifyExp_simplify(threadData, _e2, 0 /* false */);

  if((omc_NFExpression_isLiteral(threadData, _se1) && omc_NFExpression_isLiteral(threadData, _se2)))
  {
    _relationExp = omc_NFCeval_evalRelationOp(threadData, _se1, _op, _se2);
  }
  else
  {
    if((!(referenceEq(_e1, _se1) && referenceEq(_e2, _se2))))
    {
      tmpMeta7 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _se1, _op, _se2, mmc_mk_integer(_index));
      _relationExp = tmpMeta7;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _relationExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyLogicUnary(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunaryExp)
{
  modelica_metatype _unaryExp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _se = NULL;
  modelica_metatype _newExp = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unaryExp = __omcQ_24in_5FunaryExp;
  // _e has no default value.
  // _se has no default value.
  // _newExp has no default value.
  // _op has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unaryExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,19,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _op = tmpMeta8;
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          _se = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);

          if(omc_NFExpression_isLiteral(threadData, _se))
          {
            _newExp = omc_NFCeval_evalLogicUnaryOp(threadData, _se, _op);
          }
          else
          {
            if((!referenceEq(_e, _se)))
            {
              tmpMeta10 = mmc_mk_box3(22, &NFExpression_LUNARY__desc, _op, _se);
              _newExp = tmpMeta10;
            }
            else
            {
              _newExp = _unaryExp;
            }
          }
          tmpMeta1 = _newExp;
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
  _unaryExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _unaryExp;
}

static modelica_metatype closure4_NFSimplifyExp_simplifyLogicBinaryOr(threadData_t *thData, modelica_metatype closure, modelica_metatype exp1, modelica_metatype exp2)
{
  modelica_metatype op = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplifyLogicBinaryOr(thData, exp1, op, exp2);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyLogicBinaryOr(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp1;
    tmp4_2 = _exp2;
    {
      modelica_metatype _o = NULL;
      modelica_metatype _arr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _o has no default value.
      // _arr has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 /* true */ != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 /* true */ != tmp9) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (0 /* false */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (0 /* false */ != tmp13) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _o = omc_NFOperator_unlift(threadData, _op);

          tmpMeta14 = mmc_mk_box1(0, _o);
          _arr = omc_Array_threadMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 3))), (modelica_fnptr) mmc_mk_box2(0,closure4_NFSimplifyExp_simplifyLogicBinaryOr,tmpMeta14));
          tmpMeta1 = omc_NFExpression_makeArray(threadData, omc_NFOperator_typeOf(threadData, _op), _arr, 0 /* false */);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, _exp1, _op, _exp2);
          tmpMeta1 = tmpMeta15;
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

static modelica_metatype closure5_NFSimplifyExp_simplifyLogicBinaryAnd(threadData_t *thData, modelica_metatype closure, modelica_metatype exp1, modelica_metatype exp2)
{
  modelica_metatype op = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplifyLogicBinaryAnd(thData, exp1, op, exp2);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyLogicBinaryAnd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp1;
    tmp4_2 = _exp2;
    {
      modelica_metatype _o = NULL;
      modelica_metatype _arr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _o has no default value.
      // _arr has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (0 /* false */ != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (0 /* false */ != tmp9) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 /* true */ != tmp13) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _o = omc_NFOperator_unlift(threadData, _op);

          tmpMeta14 = mmc_mk_box1(0, _o);
          _arr = omc_Array_threadMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp2), 3))), (modelica_fnptr) mmc_mk_box2(0,closure5_NFSimplifyExp_simplifyLogicBinaryAnd,tmpMeta14));
          tmpMeta1 = omc_NFExpression_makeArray(threadData, omc_NFOperator_typeOf(threadData, _op), _arr, 0 /* false */);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box4(21, &NFExpression_LBINARY__desc, _exp1, _op, _exp2);
          tmpMeta1 = tmpMeta15;
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
modelica_metatype omc_NFSimplifyExp_simplifyLogicBinary(threadData_t *threadData, modelica_metatype __omcQ_24in_5FbinaryExp)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _se1 = NULL;
  modelica_metatype _se2 = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binaryExp = __omcQ_24in_5FbinaryExp;
  // _e1 has no default value.
  // _e2 has no default value.
  // _se1 has no default value.
  // _se2 has no default value.
  // _op has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _binaryExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,18,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _e1 = tmpMeta2;
  _op = tmpMeta3;
  _e2 = tmpMeta4;

  _se1 = omc_NFSimplifyExp_simplify(threadData, _e1, 0 /* false */);

  _se2 = omc_NFSimplifyExp_simplify(threadData, _e2, 0 /* false */);

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_integer tmp10;
          tmp10 = mmc_unbox_integer(tmp8_1);
          if (27 != tmp10) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NFSimplifyExp_simplifyLogicBinaryAnd(threadData, _se1, _op, _se2);
          goto tmp7_done;
        }
        case 1: {
          modelica_integer tmp11;
          tmp11 = mmc_unbox_integer(tmp8_1);
          if (28 != tmp11) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NFSimplifyExp_simplifyLogicBinaryOr(threadData, _se1, _op, _se2);
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
  _binaryExp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _binaryExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyUnarySign(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunaryExp, modelica_boolean _isNegative)
{
  modelica_metatype _unaryExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unaryExp = __omcQ_24in_5FunaryExp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unaryExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          __omcQ_24in_5FunaryExp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_unaryExp), 3)));
          _isNegative = (!_isNegative);
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (_isNegative?omc_NFExpression_negate(threadData, _unaryExp):_unaryExp);
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
  _unaryExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _unaryExp;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyUnarySign(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunaryExp, modelica_metatype _isNegative)
{
  modelica_integer tmp1;
  modelica_metatype _unaryExp = NULL;
  tmp1 = mmc_unbox_integer(_isNegative);
  _unaryExp = omc_NFSimplifyExp_simplifyUnarySign(threadData, __omcQ_24in_5FunaryExp, tmp1);
  /* skip box _unaryExp; NFExpression */
  return _unaryExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyUnaryOp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _op)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_NFExpression_isLiteral(threadData, _exp))
  {
    _outExp = omc_NFCeval_evalUnaryOp(threadData, _exp, _op);
  }
  else
  {
    _outExp = omc_NFSimplifyExp_simplifyUnarySign(threadData, _exp, 1 /* true */);
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyUnary(threadData_t *threadData, modelica_metatype __omcQ_24in_5FunaryExp)
{
  modelica_metatype _unaryExp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _se = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _unaryExp = __omcQ_24in_5FunaryExp;
  // _e has no default value.
  // _se has no default value.
  // _op has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _unaryExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,17,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _op = tmpMeta8;
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          _se = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);
          tmpMeta1 = omc_NFSimplifyExp_simplifyUnaryOp(threadData, _se, _op);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT34, _OMC_LIT48);
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
  _unaryExp = tmpMeta1;

  if((omc_Flags_isSet(threadData, _OMC_LIT52) && (!omc_NFExpression_hasArrayCall(threadData, _unaryExp))))
  {
    _unaryExp = omc_NFExpandExp_expand(threadData, _unaryExp, 0 /* false */, NULL);
  }
  _return: OMC_LABEL_UNUSED
  return _unaryExp;
}

static modelica_metatype closure6_NFSimplifyExp_simplifyBinaryOp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp1, modelica_metatype exp2)
{
  modelica_metatype op = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplifyBinaryOp(thData, exp1, op, exp2);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryEW(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  tmpMeta1 = mmc_mk_box1(0, omc_NFOperator_unlift(threadData, _op));
  _outExp = omc_NFExpression_makeArray(threadData, omc_NFOperator_typeOf(threadData, _op), omc_Array_threadMap(threadData, omc_NFExpression_arrayElements(threadData, _exp1), omc_NFExpression_arrayElements(threadData, _exp2), (modelica_fnptr) mmc_mk_box2(0,closure6_NFSimplifyExp_simplifyBinaryOp,tmpMeta1)), 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryPow(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_NFExpression_isZero(threadData, _exp2))
  {
    _outExp = omc_NFExpression_makeOne(threadData, omc_NFOperator_typeOf(threadData, _op));
  }
  else
  {
    if(omc_NFExpression_isOne(threadData, _exp2))
    {
      _outExp = _exp1;
    }
    else
    {
      tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
      _outExp = tmpMeta1;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryDiv(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp10;
  modelica_metatype tmpMeta11;
  modelica_boolean tmp12;
  modelica_metatype tmpMeta13;
  modelica_boolean tmp14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  tmp14 = (modelica_boolean)omc_NFExpression_isOne(threadData, _exp2);
  if(tmp14)
  {
    tmpMeta15 = _exp1;
  }
  else
  {
    tmp12 = (modelica_boolean)omc_NFExpression_isMinusOne(threadData, _exp2);
    if(tmp12)
    {
      tmpMeta13 = omc_NFExpression_negate(threadData, _exp1);
    }
    else
    {
      tmp10 = (modelica_boolean)(omc_NFExpression_isZero(threadData, _exp1) && omc_NFExpression_isNonZero(threadData, _exp2));
      if(tmp10)
      {
        tmpMeta11 = _exp1;
      }
      else
      {
        { /* match expression */
          modelica_boolean tmp4_1;modelica_boolean tmp4_2;
          tmp4_1 = omc_NFExpression_isNegated(threadData, _exp1);
          tmp4_2 = omc_NFExpression_isNegated(threadData, _exp1);
          {
            volatile mmc_switch_type tmp4;
            int tmp5;
            tmp4 = 0;
            for (; tmp4 < 4; tmp4++) {
              switch (MMC_SWITCH_CAST(tmp4)) {
              case 0: {
                modelica_metatype tmpMeta6;
                if (1 /* true */ != tmp4_1) goto tmp3_end;
                if (1 /* true */ != tmp4_2) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta6 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFExpression_negate(threadData, _exp1), _op, omc_NFExpression_negate(threadData, _exp2));
                tmpMeta1 = tmpMeta6;
                goto tmp3_done;
              }
              case 1: {
                modelica_metatype tmpMeta7;
                if (0 /* false */ != tmp4_1) goto tmp3_end;
                if (1 /* true */ != tmp4_2) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta7 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, omc_NFExpression_negate(threadData, _exp2));
                tmpMeta1 = omc_NFExpression_negate(threadData, tmpMeta7);
                goto tmp3_done;
              }
              case 2: {
                modelica_metatype tmpMeta8;
                if (1 /* true */ != tmp4_1) goto tmp3_end;
                if (0 /* false */ != tmp4_2) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFExpression_negate(threadData, _exp1), _op, _exp2);
                tmpMeta1 = omc_NFExpression_negate(threadData, tmpMeta8);
                goto tmp3_done;
              }
              case 3: {
                modelica_metatype tmpMeta9;
                if (0 /* false */ != tmp4_1) goto tmp3_end;
                if (0 /* false */ != tmp4_2) goto tmp3_end;
                /* Pattern matching succeeded */
                tmpMeta9 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
                tmpMeta1 = tmpMeta9;
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
        tmpMeta11 = tmpMeta1;
      }
      tmpMeta13 = tmpMeta11;
    }
    tmpMeta15 = tmpMeta13;
  }
  _outExp = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_boolean _switched)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (0 != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_real tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_real(tmpMeta8);
          if (0.0 != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _exp1;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 != tmp11) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp13 = mmc_unbox_real(tmpMeta12);
          if (1.0 != tmp13) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _exp2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmp16 = (modelica_boolean)_switched;
          if(tmp16)
          {
            tmpMeta14 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp2, _op, _exp1);
            tmpMeta17 = tmpMeta14;
          }
          else
          {
            /* Tail recursive call */
            tmpMeta15 = _exp2;
            _exp2 = _exp1;
            _switched = 1 /* true */;
            _exp1 = tmpMeta15;
            goto _tailrecursive;
            /* TODO: Make sure any eventual dead code below is never generated */
          }
          tmpMeta1 = tmpMeta17;
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
modelica_metatype boxptr_NFSimplifyExp_simplifyBinaryMul(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_metatype _switched)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_switched);
  _outExp = omc_NFSimplifyExp_simplifyBinaryMul(threadData, _exp1, _op, _exp2, tmp1);
  /* skip box _outExp; NFExpression */
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinarySub(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_NFExpression_isZero(threadData, _exp1))
  {
    _outExp = omc_NFExpression_negate(threadData, _exp2);
  }
  else
  {
    if(omc_NFExpression_isZero(threadData, _exp2))
    {
      _outExp = _exp1;
    }
    else
    {
      if(omc_NFExpression_isEqual(threadData, _exp1, _exp2))
      {
        _outExp = omc_NFExpression_makeZero(threadData, omc_NFOperator_typeOf(threadData, _op));
      }
      else
      {
        if(omc_NFExpression_isNegated(threadData, _exp1))
        {
          if(omc_NFExpression_isNegated(threadData, _exp2))
          {
            tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFExpression_negate(threadData, _exp2), _op, omc_NFExpression_negate(threadData, _exp1));
            _outExp = tmpMeta1;
          }
          else
          {
            _outExp = omc_NFExpression_negate(threadData, omc_NFSimplifyExp_simplifyBinaryAdd(threadData, omc_NFExpression_negate(threadData, _exp1), omc_NFOperator_invert(threadData, _op), _exp2));
          }
        }
        else
        {
          if(omc_NFExpression_isNegated(threadData, _exp2))
          {
            _outExp = omc_NFSimplifyExp_simplifyBinaryAdd(threadData, _exp1, omc_NFOperator_invert(threadData, _op), omc_NFExpression_negate(threadData, _exp2));
          }
          else
          {
            tmpMeta2 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
            _outExp = tmpMeta2;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryAdd(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if(omc_NFExpression_isZero(threadData, _exp1))
  {
    _outExp = _exp2;
  }
  else
  {
    if(omc_NFExpression_isZero(threadData, _exp2))
    {
      _outExp = _exp1;
    }
    else
    {
      if(omc_NFExpression_isNegated(threadData, _exp1))
      {
        if(omc_NFExpression_isNegated(threadData, _exp2))
        {
          tmpMeta1 = mmc_mk_box4(19, &NFExpression_BINARY__desc, omc_NFExpression_negate(threadData, _exp1), _op, omc_NFExpression_negate(threadData, _exp2));
          _outExp = omc_NFExpression_negate(threadData, tmpMeta1);
        }
        else
        {
          _outExp = omc_NFSimplifyExp_simplifyBinarySub(threadData, _exp2, omc_NFOperator_invert(threadData, _op), omc_NFExpression_negate(threadData, _exp1));
        }
      }
      else
      {
        if(omc_NFExpression_isNegated(threadData, _exp2))
        {
          _outExp = omc_NFSimplifyExp_simplifyBinarySub(threadData, _exp1, omc_NFOperator_invert(threadData, _op), omc_NFExpression_negate(threadData, _exp2));
        }
        else
        {
          tmpMeta2 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
          _outExp = tmpMeta2;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  if((omc_NFExpression_isLiteral(threadData, _exp1) && omc_NFExpression_isLiteral(threadData, _exp2)))
  {
    _outExp = omc_NFCeval_evalBinaryOp(threadData, omc_NFExpandExp_expand(threadData, _exp1, 0 /* false */, NULL), _op, omc_NFExpandExp_expand(threadData, _exp2, 0 /* false */, NULL), _OMC_LIT38);
  }
  else
  {
    if((omc_NFExpression_isArray(threadData, _exp1) && omc_NFExpression_isArray(threadData, _exp2)))
    {
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
        {
          int tmp4;
          {
            switch (MMC_SWITCH_CAST(mmc_unbox_integer(tmp4_1))) {
            case 1: {
              modelica_integer tmp5;
              tmp5 = mmc_unbox_integer(tmp4_1);
              if (1 != tmp5) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 2: {
              modelica_integer tmp6;
              tmp6 = mmc_unbox_integer(tmp4_1);
              if (2 != tmp6) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 6: {
              modelica_integer tmp7;
              tmp7 = mmc_unbox_integer(tmp4_1);
              if (6 != tmp7) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 7: {
              modelica_integer tmp8;
              tmp8 = mmc_unbox_integer(tmp4_1);
              if (7 != tmp8) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 8: {
              modelica_integer tmp9;
              tmp9 = mmc_unbox_integer(tmp4_1);
              if (8 != tmp9) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 9: {
              modelica_integer tmp10;
              tmp10 = mmc_unbox_integer(tmp4_1);
              if (9 != tmp10) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            case 10: {
              modelica_integer tmp11;
              tmp11 = mmc_unbox_integer(tmp4_1);
              if (10 != tmp11) goto tmp3_end;
              /* Pattern matching succeeded */
              tmpMeta1 = omc_NFSimplifyExp_simplifyBinaryEW(threadData, _exp1, _op, _exp2);
              goto tmp3_done;
            }
            default:
            tmp3_default: OMC_LABEL_UNUSED; {
              modelica_metatype tmpMeta12;
              
              /* Pattern matching succeeded */
              tmpMeta12 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
              tmpMeta1 = tmpMeta12;
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
    }
    else
    {
      { /* match expression */
        modelica_metatype tmp16_1;
        tmp16_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)));
        {
          volatile mmc_switch_type tmp16;
          int tmp17;
          tmp16 = 0;
          for (; tmp16 < 7; tmp16++) {
            switch (MMC_SWITCH_CAST(tmp16)) {
            case 0: {
              modelica_integer tmp18;
              tmp18 = mmc_unbox_integer(tmp16_1);
              if (1 != tmp18) goto tmp15_end;
              /* Pattern matching succeeded */
              tmpMeta13 = omc_NFSimplifyExp_simplifyBinaryAdd(threadData, _exp1, _op, _exp2);
              goto tmp15_done;
            }
            case 1: {
              modelica_integer tmp19;
              tmp19 = mmc_unbox_integer(tmp16_1);
              if (2 != tmp19) goto tmp15_end;
              /* Pattern matching succeeded */
              tmpMeta13 = omc_NFSimplifyExp_simplifyBinarySub(threadData, _exp1, _op, _exp2);
              goto tmp15_done;
            }
            case 2: {
              modelica_integer tmp20;
              tmp20 = mmc_unbox_integer(tmp16_1);
              if (3 != tmp20) goto tmp15_end;
              /* Pattern matching succeeded */
              tmpMeta13 = omc_NFSimplifyExp_simplifyBinaryMul(threadData, _exp1, _op, _exp2, 0 /* false */);
              goto tmp15_done;
            }
            case 3: {
              modelica_integer tmp21;
              tmp21 = mmc_unbox_integer(tmp16_1);
              if (4 != tmp21) goto tmp15_end;
              /* Pattern matching succeeded */
              tmpMeta13 = omc_NFSimplifyExp_simplifyBinaryDiv(threadData, _exp1, _op, _exp2);
              goto tmp15_done;
            }
            case 4: {
              modelica_integer tmp22;
              tmp22 = mmc_unbox_integer(tmp16_1);
              if (5 != tmp22) goto tmp15_end;
              /* Pattern matching succeeded */
              tmpMeta13 = omc_NFSimplifyExp_simplifyBinaryPow(threadData, _exp1, _op, _exp2);
              goto tmp15_done;
            }
            case 5: {
              modelica_integer tmp23;
              tmp23 = mmc_unbox_integer(tmp16_1);
              if (19 != tmp23) goto tmp15_end;
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(omc_NFExpression_isZero(threadData, _exp1) || omc_NFExpression_isZero(threadData, _exp2))) goto tmp15_end;
              tmpMeta13 = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));
              goto tmp15_done;
            }
            case 6: {
              modelica_metatype tmpMeta24;
              
              /* Pattern matching succeeded */
              tmpMeta24 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp1, _op, _exp2);
              tmpMeta13 = tmpMeta24;
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
      _outExp = tmpMeta13;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBinary(threadData_t *threadData, modelica_metatype __omcQ_24in_5FbinaryExp)
{
  modelica_metatype _binaryExp = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _se1 = NULL;
  modelica_metatype _se2 = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _binaryExp = __omcQ_24in_5FbinaryExp;
  // _e1 has no default value.
  // _e2 has no default value.
  // _se1 has no default value.
  // _se2 has no default value.
  // _op has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _binaryExp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,16,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _e1 = tmpMeta2;
  _op = tmpMeta3;
  _e2 = tmpMeta4;

  _se1 = omc_NFSimplifyExp_simplify(threadData, _e1, 0 /* false */);

  _se2 = omc_NFSimplifyExp_simplify(threadData, _e2, 0 /* false */);

  _binaryExp = omc_NFSimplifyExp_simplifyBinaryOp(threadData, _se1, _op, _se2);

  if((omc_Flags_isSet(threadData, _OMC_LIT52) && (!omc_NFExpression_hasArrayCall(threadData, _binaryExp))))
  {
    _binaryExp = omc_NFExpandExp_expand(threadData, _binaryExp, 0 /* false */, NULL);
  }
  _return: OMC_LABEL_UNUSED
  return _binaryExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyMultarySigns(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_integer _mcl, modelica_metatype *out_new_inv_arguments, modelica_boolean *out_isNegative)
{
  modelica_metatype _new_arguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _new_inv_arguments = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _isNegative;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_arguments = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_inv_arguments = tmpMeta2;
  _isNegative = 0 /* false */;
  { /* match expression */
    modelica_integer tmp5_1;
    tmp5_1 = (modelica_integer)_mcl;
    {
      int tmp5;
      {
        switch (MMC_SWITCH_CAST(tmp5_1)) {
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (1 != tmp5_1) goto tmp4_end;
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta6 = listReverse(_arguments); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _arg = MMC_CAR(tmpMeta6);
              if(omc_NFExpression_isNegated(threadData, _arg))
              {
                tmpMeta7 = mmc_mk_cons(omc_NFExpression_negate(threadData, _arg), _new_inv_arguments);
                _new_inv_arguments = tmpMeta7;
              }
              else
              {
                tmpMeta8 = mmc_mk_cons(_arg, _new_arguments);
                _new_arguments = tmpMeta8;
              }
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta10 = listReverse(_inv_arguments); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _arg = MMC_CAR(tmpMeta10);
              if(omc_NFExpression_isNegated(threadData, _arg))
              {
                tmpMeta11 = mmc_mk_cons(omc_NFExpression_negate(threadData, _arg), _new_arguments);
                _new_arguments = tmpMeta11;
              }
              else
              {
                tmpMeta12 = mmc_mk_cons(_arg, _new_inv_arguments);
                _new_inv_arguments = tmpMeta12;
              }
            }
          }
          goto tmp4_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (3 != tmp5_1) goto tmp4_end;
          /* Pattern matching succeeded */
          {
            modelica_metatype _arg;
            for (tmpMeta14 = listReverse(_arguments); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _arg = MMC_CAR(tmpMeta14);
              if(omc_NFExpression_isNegated(threadData, _arg))
              {
                tmpMeta15 = mmc_mk_cons(omc_NFExpression_negate(threadData, _arg), _new_arguments);
                _new_arguments = tmpMeta15;

                _isNegative = (!_isNegative);
              }
              else
              {
                tmpMeta16 = mmc_mk_cons(_arg, _new_arguments);
                _new_arguments = tmpMeta16;
              }
            }
          }

          {
            modelica_metatype _arg;
            for (tmpMeta18 = listReverse(_inv_arguments); !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _arg = MMC_CAR(tmpMeta18);
              if(omc_NFExpression_isNegated(threadData, _arg))
              {
                tmpMeta19 = mmc_mk_cons(omc_NFExpression_negate(threadData, _arg), _new_inv_arguments);
                _new_inv_arguments = tmpMeta19;

                _isNegative = (!_isNegative);
              }
              else
              {
                tmpMeta20 = mmc_mk_cons(_arg, _new_inv_arguments);
                _new_inv_arguments = tmpMeta20;
              }
            }
          }
          goto tmp4_done;
        }
        default:
        tmp4_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT34, _OMC_LIT54);
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
  ;
  _return: OMC_LABEL_UNUSED
  if (out_new_inv_arguments) { *out_new_inv_arguments = _new_inv_arguments; }
  if (out_isNegative) { *out_isNegative = _isNegative; }
  return _new_arguments;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyMultarySigns(threadData_t *threadData, modelica_metatype _arguments, modelica_metatype _inv_arguments, modelica_metatype _mcl, modelica_metatype *out_new_inv_arguments, modelica_metatype *out_isNegative)
{
  modelica_integer tmp1;
  modelica_boolean _isNegative;
  modelica_metatype _new_arguments = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_mcl);
  _new_arguments = omc_NFSimplifyExp_simplifyMultarySigns(threadData, _arguments, _inv_arguments, tmp1, out_new_inv_arguments, &_isNegative);
  /* skip box _new_arguments; list<NFExpression> */
  /* skip box _new_inv_arguments; list<NFExpression> */
  if (out_isNegative) { *out_isNegative = mmc_mk_icon(_isNegative); }
  return _new_arguments;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyMultary(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_metatype _operator = NULL;
      modelica_metatype _arguments = NULL;
      modelica_metatype _inv_arguments = NULL;
      modelica_metatype _const_args = NULL;
      modelica_metatype _inv_const_args = NULL;
      modelica_metatype _new_const = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _result = NULL;
      modelica_integer _mcl;
      modelica_boolean _neutralConst;
      modelica_boolean _isNegative;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _operator has no default value.
      // _arguments has no default value.
      // _inv_arguments has no default value.
      // _const_args has no default value.
      // _inv_const_args has no default value.
      // _new_const has no default value.
      // _tmp has no default value.
      // _result has no default value.
      // _mcl has no default value.
      // _neutralConst has no default value.
      // _isNegative has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _operator = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFOperator_isDashClassification(threadData, omc_NFOperator_getMathClassification(threadData, _operator))) goto tmp3_end;
          tmpMeta1 = omc_NFExpression_makeZero(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _operator = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFExpression_makeOne(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_operator), 2))));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (!listEmpty(tmpMeta15)) goto tmp3_end;
          
          _tmp = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplify(threadData, _tmp, 0 /* false */);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _arguments = tmpMeta16;
          _inv_arguments = tmpMeta17;
          _operator = tmpMeta18;
          /* Pattern matching succeeded */
          _mcl = omc_NFOperator_getMathClassification(threadData, _operator);

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp22;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = _arguments;
            tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta21; /* defaultValue */
            tmp20 = &__omcQ_24tmpVar25;
            while(1) {
              tmp22 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp22--;
              }
              if (tmp22 == 0) {
                __omcQ_24tmpVar24 = omc_NFSimplifyExp_simplify(threadData, _arg, 0 /* false */);
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
          _arguments = tmpMeta19;

          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp26;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = _inv_arguments;
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta25; /* defaultValue */
            tmp24 = &__omcQ_24tmpVar27;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                __omcQ_24tmpVar26 = omc_NFSimplifyExp_simplify(threadData, _arg, 0 /* false */);
                *tmp24 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp24 = &MMC_CDR(*tmp24);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp24 = mmc_mk_nil();
            tmpMeta23 = __omcQ_24tmpVar27;
          }
          _inv_arguments = tmpMeta23;

          _arguments = omc_NFSimplifyExp_simplifyMultarySigns(threadData, _arguments, _inv_arguments, (modelica_integer)_mcl ,&_inv_arguments ,&_isNegative);

          _const_args = omc_List_splitOnTrue(threadData, _arguments, boxvar_NFExpression_isLiteral ,&_arguments);

          _inv_const_args = omc_List_splitOnTrue(threadData, _inv_arguments, boxvar_NFExpression_isLiteral ,&_inv_arguments);

          if(((modelica_integer)_mcl == 1))
          {
            _new_const = omc_NFCeval_evalMultaryAddSub(threadData, _const_args, _inv_const_args, omc_NFOperator_typeOf(threadData, _operator) ,&_neutralConst);
          }
          else
          {
            if(((modelica_integer)_mcl == 3))
            {
              _new_const = omc_NFCeval_evalMultaryMulDiv(threadData, _const_args, _inv_const_args, omc_NFOperator_typeOf(threadData, _operator) ,&_neutralConst);
            }
            else
            {
              tmpMeta27 = stringAppend(_OMC_LIT55,omc_NFOperator_mathSymbol(threadData, (modelica_integer)_mcl));
              tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT43);
              {
                modelica_metatype __omcQ_24tmpVar29;
                modelica_metatype* tmp30;
                modelica_metatype tmpMeta31;
                modelica_string __omcQ_24tmpVar28;
                modelica_integer tmp32;
                modelica_metatype _e_loopVar = 0;
                modelica_metatype _e;
                _e_loopVar = _const_args;
                tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar29 = tmpMeta31; /* defaultValue */
                tmp30 = &__omcQ_24tmpVar29;
                while(1) {
                  tmp32 = 1;
                  if (!listEmpty(_e_loopVar)) {
                    _e = MMC_CAR(_e_loopVar);
                    _e_loopVar = MMC_CDR(_e_loopVar);
                    tmp32--;
                  }
                  if (tmp32 == 0) {
                    __omcQ_24tmpVar28 = omc_NFExpression_toString(threadData, _e);
                    *tmp30 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                    tmp30 = &MMC_CDR(*tmp30);
                  } else if (tmp32 == 1) {
                    break;
                  } else {
                    goto goto_2;
                  }
                }
                *tmp30 = mmc_mk_nil();
                tmpMeta29 = __omcQ_24tmpVar29;
              }
              tmpMeta33 = stringAppend(tmpMeta28,stringDelimitList(tmpMeta29, _OMC_LIT44));
              tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT45);
              {
                modelica_metatype __omcQ_24tmpVar31;
                modelica_metatype* tmp36;
                modelica_metatype tmpMeta37;
                modelica_string __omcQ_24tmpVar30;
                modelica_integer tmp38;
                modelica_metatype _e_loopVar = 0;
                modelica_metatype _e;
                _e_loopVar = _inv_const_args;
                tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar31 = tmpMeta37; /* defaultValue */
                tmp36 = &__omcQ_24tmpVar31;
                while(1) {
                  tmp38 = 1;
                  if (!listEmpty(_e_loopVar)) {
                    _e = MMC_CAR(_e_loopVar);
                    _e_loopVar = MMC_CDR(_e_loopVar);
                    tmp38--;
                  }
                  if (tmp38 == 0) {
                    __omcQ_24tmpVar30 = omc_NFExpression_toString(threadData, _e);
                    *tmp36 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                    tmp36 = &MMC_CDR(*tmp36);
                  } else if (tmp38 == 1) {
                    break;
                  } else {
                    goto goto_2;
                  }
                }
                *tmp36 = mmc_mk_nil();
                tmpMeta35 = __omcQ_24tmpVar31;
              }
              tmpMeta39 = stringAppend(tmpMeta34,stringDelimitList(tmpMeta35, _OMC_LIT44));
              omc_Error_assertion(threadData, 0 /* false */, tmpMeta39, _OMC_LIT56);
            }
          }

          _arguments = omc_NFSimplifyExp_cancelTermsInMultary(threadData, _arguments, _inv_arguments ,&_inv_arguments);

          { /* match expression */
            modelica_integer tmp43_1;modelica_metatype tmp43_2;modelica_metatype tmp43_3;
            tmp43_1 = (modelica_integer)_mcl;
            tmp43_2 = _arguments;
            tmp43_3 = _inv_arguments;
            {
              volatile mmc_switch_type tmp43;
              int tmp44;
              tmp43 = 0;
              for (; tmp43 < 6; tmp43++) {
                switch (MMC_SWITCH_CAST(tmp43)) {
                case 0: {
                  if (1 != tmp43_1) goto tmp42_end;
                  if (!listEmpty(tmp43_2)) goto tmp42_end;
                  if (!listEmpty(tmp43_3)) goto tmp42_end;
                  /* Pattern matching succeeded */
                  tmpMeta40 = (omc_NFExpression_isEmpty(threadData, _new_const)?omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _new_const)):_new_const);
                  goto tmp42_done;
                }
                case 1: {
                  if (3 != tmp43_1) goto tmp42_end;
                  if (!listEmpty(tmp43_2)) goto tmp42_end;
                  if (!listEmpty(tmp43_3)) goto tmp42_end;
                  /* Pattern matching succeeded */
                  tmpMeta40 = (omc_NFExpression_isEmpty(threadData, _new_const)?omc_NFExpression_makeOne(threadData, omc_NFExpression_typeOf(threadData, _new_const)):_new_const);
                  goto tmp42_done;
                }
                case 2: {
                  modelica_metatype tmpMeta45;
                  modelica_metatype tmpMeta46;
                  if (!listEmpty(tmp43_3)) goto tmp42_end;
                  if (listEmpty(tmp43_2)) goto tmp42_end;
                  tmpMeta45 = MMC_CAR(tmp43_2);
                  tmpMeta46 = MMC_CDR(tmp43_2);
                  if (!listEmpty(tmpMeta46)) goto tmp42_end;
                  
                  _tmp = tmpMeta45;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!_neutralConst) goto tmp42_end;
                  tmpMeta40 = _tmp;
                  goto tmp42_done;
                }
                case 3: {
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  if (1 != tmp43_1) goto tmp42_end;
                  if (!listEmpty(tmp43_2)) goto tmp42_end;
                  if (listEmpty(tmp43_3)) goto tmp42_end;
                  tmpMeta47 = MMC_CAR(tmp43_3);
                  tmpMeta48 = MMC_CDR(tmp43_3);
                  if (!listEmpty(tmpMeta48)) goto tmp42_end;
                  _tmp = tmpMeta47;
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!_neutralConst) goto tmp42_end;
                  tmpMeta40 = omc_NFExpression_negate(threadData, _tmp);
                  goto tmp42_done;
                }
                case 4: {
                  if (3 != tmp43_1) goto tmp42_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_NFExpression_isZero(threadData, _new_const)) goto tmp42_end;
                  tmpMeta40 = _new_const;
                  goto tmp42_done;
                }
                case 5: {
                  modelica_metatype tmpMeta49;
                  modelica_boolean tmp50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  
                  /* Pattern matching succeeded */
                  tmp50 = (modelica_boolean)_neutralConst;
                  if(tmp50)
                  {
                    tmpMeta51 = _arguments;
                  }
                  else
                  {
                    tmpMeta49 = mmc_mk_cons(_new_const, _arguments);
                    tmpMeta51 = tmpMeta49;
                  }
                  tmpMeta52 = mmc_mk_box4(24, &NFExpression_MULTARY__desc, tmpMeta51, _inv_arguments, _operator);
                  tmpMeta40 = tmpMeta52;
                  goto tmp42_done;
                }
                }
                goto tmp42_end;
                tmp42_end: ;
              }
              goto goto_41;
              goto_41:;
              goto goto_2;
              goto tmp42_done;
              tmp42_done:;
            }
          }
          _result = tmpMeta40;
          tmpMeta1 = (_isNegative?omc_NFExpression_negate(threadData, _result):_result);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          
          /* Pattern matching succeeded */
          tmpMeta54 = stringAppend(_OMC_LIT57,omc_NFExpression_toString(threadData, _exp));
          tmpMeta53 = mmc_mk_cons(tmpMeta54, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT34, tmpMeta53);
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

static modelica_metatype closure7_NFDimension_isKnown(threadData_t *thData, modelica_metatype closure, modelica_metatype dim)
{
  modelica_metatype allowExp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFDimension_isKnown(thData, dim, allowExp);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifySize(threadData_t *threadData, modelica_metatype __omcQ_24in_5FsizeExp)
{
  modelica_metatype _sizeExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sizeExp = __omcQ_24in_5FsizeExp;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _sizeExp;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _index = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _dims = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _index has no default value.
      // _dim has no default value.
      // _dims has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _exp = tmpMeta6;
          _index = tmpMeta8;
          /* Pattern matching succeeded */
          _index = omc_NFSimplifyExp_simplify(threadData, _index, 0 /* false */);

          if(omc_NFExpression_isLiteral(threadData, _index))
          {
            _dim = listGet(omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, _exp)), omc_NFExpression_toInteger(threadData, _index));

            if(omc_NFDimension_isKnown(threadData, _dim, 0 /* false */))
            {
              tmpMeta9 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(omc_NFDimension_size(threadData, _dim, 0 /* false */)));
              _exp = tmpMeta9;
            }
            else
            {
              tmpMeta10 = mmc_mk_box3(17, &NFExpression_SIZE__desc, _exp, mmc_mk_some(_index));
              _exp = tmpMeta10;
            }
          }
          else
          {
            tmpMeta11 = mmc_mk_box3(17, &NFExpression_SIZE__desc, _exp, mmc_mk_some(_index));
            _exp = tmpMeta11;
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _dims = omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sizeExp), 2)))));

          tmpMeta12 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
          if(omc_List_all(threadData, _dims, (modelica_fnptr) mmc_mk_box2(0,closure7_NFDimension_isKnown,tmpMeta12)))
          {
            tmpMeta13 = mmc_mk_cons(omc_NFDimension_fromInteger(threadData, listLength(_dims), 1), MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta14 = mmc_mk_box3(10, &NFType_ARRAY__desc, _OMC_LIT58, tmpMeta13);
            {
              modelica_metatype __omcQ_24tmpVar33;
              modelica_metatype* tmp16;
              modelica_metatype tmpMeta17;
              modelica_metatype __omcQ_24tmpVar32;
              modelica_integer tmp18;
              modelica_metatype _d_loopVar = 0;
              modelica_metatype _d;
              _d_loopVar = _dims;
              tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar33 = tmpMeta17; /* defaultValue */
              tmp16 = &__omcQ_24tmpVar33;
              while(1) {
                tmp18 = 1;
                if (!listEmpty(_d_loopVar)) {
                  _d = MMC_CAR(_d_loopVar);
                  _d_loopVar = MMC_CDR(_d_loopVar);
                  tmp18--;
                }
                if (tmp18 == 0) {
                  __omcQ_24tmpVar32 = omc_NFDimension_sizeExp(threadData, _d);
                  *tmp16 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                  tmp16 = &MMC_CDR(*tmp16);
                } else if (tmp18 == 1) {
                  break;
                } else {
                  goto goto_2;
                }
              }
              *tmp16 = mmc_mk_nil();
              tmpMeta15 = __omcQ_24tmpVar33;
            }
            _exp = omc_NFExpression_makeArray(threadData, tmpMeta14, listArray(tmpMeta15), 0 /* false */);
          }
          else
          {
            _exp = _sizeExp;
          }
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
  _sizeExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sizeExp;
}

static modelica_metatype closure8_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}static modelica_metatype closure9_NFSimplifyExp_simplifyBinaryOp(threadData_t *thData, modelica_metatype closure, modelica_metatype exp1, modelica_metatype exp2)
{
  modelica_metatype op = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplifyBinaryOp(thData, exp1, op, exp2);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyReduction2(threadData_t *threadData, modelica_string _name, modelica_metatype _exp, modelica_metatype _iterators)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _default_exp = NULL;
  modelica_boolean _expanded;
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ty = NULL;
  modelica_metatype _op = NULL;
  modelica_boolean tmp2;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_boolean tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _iter has no default value.
  // _range has no default value.
  // _default_exp has no default value.
  _expanded = 1 /* true */;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iters = tmpMeta1;
  // _ty has no default value.
  // _op has no default value.
  _ty = omc_NFExpression_typeOf(threadData, _exp);

  /* Pattern-matching assignment */
  tmp2 = omc_NFType_isRecord(threadData, omc_NFType_arrayElementType(threadData, _ty));
  if (0 /* false */ != tmp2) MMC_THROW_INTERNAL();

  
  
  { /* match expression */
    modelica_string tmp6_1;
    tmp6_1 = _name;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 2; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          if (3 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFExpression_makeZero(threadData, _ty);
          tmpMeta[0+1] = omc_NFOperator_makeAdd(threadData, _ty);
          goto tmp5_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_NFExpression_makeOne(threadData, _ty);
          tmpMeta[0+1] = omc_NFOperator_makeMul(threadData, _ty);
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
  _default_exp = tmpMeta[0+0];
  _op = tmpMeta[0+1];

  {
    modelica_metatype _i;
    for (tmpMeta8 = _iterators; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
    {
      _i = MMC_CAR(tmpMeta8);
      /* Pattern-matching assignment */
      tmpMeta9 = _i;
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
      _iter = tmpMeta10;
      _range = tmpMeta11;

      /* Pattern-matching tuple assignment */
      tmpMeta13 = omc_NFExpandExp_expand(threadData, _range, 0 /* false */, &tmp12);
      _range = tmpMeta13;
      if (1 /* true */ != tmp12) MMC_THROW_INTERNAL();

      tmpMeta15 = mmc_mk_box2(0, _iter, _range);
      tmpMeta14 = mmc_mk_cons(tmpMeta15, _iters);
      _iters = tmpMeta14;
    }
  }

  tmpMeta17 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
  tmpMeta18 = mmc_mk_box1(0, _op);
  _outExp = omc_NFExpression_foldReduction(threadData, omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */), listReverseInPlace(_iters), _default_exp, (modelica_fnptr) mmc_mk_box2(0,closure8_NFSimplifyExp_simplify,tmpMeta17), (modelica_fnptr) mmc_mk_box2(0,closure9_NFSimplifyExp_simplifyBinaryOp,tmpMeta18));
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyReduction(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _call;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _iters = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _dim = NULL;
      modelica_integer _dim_size;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _e has no default value.
      // _iters has no default value.
      // _iter has no default value.
      // _dim has no default value.
      // _dim_size has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,8) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp10;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar35;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                tmpMeta9 = mmc_mk_box2(0, omc_Util_tuple21(threadData, _i), omc_NFSimplifyExp_simplify(threadData, omc_Util_tuple22(threadData, _i), 0 /* false */));
                __omcQ_24tmpVar34 = tmpMeta9;
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar35;
          }
          _iters = tmpMeta6;
          { /* matchcontinue expression */
            volatile modelica_metatype tmp14_1;
            tmp14_1 = _iters;
            {
              volatile mmc_switch_type tmp14;
              int tmp15;
              tmp14 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp13_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp14 < 4; tmp14++) {
                switch (MMC_SWITCH_CAST(tmp14)) {
                case 0: {
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
                  if (listEmpty(tmp14_1)) goto tmp13_end;
                  tmpMeta16 = MMC_CAR(tmp14_1);
                  tmpMeta17 = MMC_CDR(tmp14_1);
                  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
                  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
                  if (!listEmpty(tmpMeta17)) goto tmp13_end;
                  _iter = tmpMeta18;
                  _e = tmpMeta19;
                  /* Pattern matching succeeded */
                  /* Pattern-matching assignment */
                  tmpMeta20 = omc_NFExpression_typeOf(threadData, _e);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,7,2) == 0) goto goto_12;
                  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 3));
                  if (listEmpty(tmpMeta21)) goto goto_12;
                  tmpMeta22 = MMC_CAR(tmpMeta21);
                  tmpMeta23 = MMC_CDR(tmpMeta21);
                  if (!listEmpty(tmpMeta23)) goto goto_12;
                  _dim = tmpMeta22;

                  _dim_size = omc_NFDimension_size(threadData, _dim, 0 /* false */);

                  if((_dim_size == ((modelica_integer) 0)))
                  {
                    /* Pattern-matching assignment */
                    tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 8)));
                    if (optionNone(tmpMeta24)) goto goto_12;
                    tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
                    _outExp = tmpMeta25;
                  }
                  else
                  {
                    if((_dim_size == ((modelica_integer) 1)))
                    {
                      _e = omc_NFExpandExp_expand(threadData, _e, 0 /* false */, NULL);

                      _e = omc_NFExpression_arrayScalarElement(threadData, _e);

                      _outExp = omc_NFExpression_replaceIterator(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _iter, _e);

                      _outExp = omc_NFSimplifyExp_simplify(threadData, _outExp, 0 /* false */);
                    }
                    else
                    {
                      goto goto_12;
                    }
                  }
                  tmpMeta11 = _outExp;
                  goto tmp13_done;
                }
                case 1: {
                  modelica_metatype tmpMeta26;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))) <= 2)) goto tmp13_end;
                  tmpMeta26 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta11 = omc_NFCeval_tryEvalExp(threadData, tmpMeta26);
                  goto tmp13_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_Flags_isSet(threadData, _OMC_LIT64)) goto tmp13_end;
                  tmpMeta11 = omc_NFSimplifyExp_simplifyReduction2(threadData, omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT65, 1 /* true */, 0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _iters);
                  goto tmp13_done;
                }
                case 3: {
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  
                  /* Pattern matching succeeded */
                  tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(10));
                  memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_call), 10*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[6] = omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), 0 /* false */);
                  _call = tmpMeta27;

                  tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(10));
                  memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_call), 10*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[7] = _iters;
                  _call = tmpMeta28;
                  tmpMeta29 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta11 = tmpMeta29;
                  goto tmp13_done;
                }
                }
                goto tmp13_end;
                tmp13_end: ;
              }
              goto goto_12;
              tmp13_done:
              (void)tmp14;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp13_done2;
              goto_12:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp14 < 4) {
                goto tmp13_top;
              }
              goto goto_2;
              tmp13_done2:;
            }
          }tmpMeta1 = tmpMeta11;
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

static modelica_metatype closure10_NFSubscript_equalsIterator(threadData_t *thData, modelica_metatype closure, modelica_metatype sub)
{
  modelica_metatype iterator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSubscript_equalsIterator(thData, sub, iterator);
}
DLLDirection
modelica_boolean omc_NFSimplifyExp_isIteratorSubscriptedArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _iterator)
{
  modelica_boolean _res;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,26,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box1(0, _iterator);
          tmp1 = (omc_NFExpression_isArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))) && omc_List_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure10_NFSubscript_equalsIterator,tmpMeta6)));
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
modelica_metatype boxptr_NFSimplifyExp_isIteratorSubscriptedArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _iterator)
{
  modelica_boolean _res;
  modelica_metatype out_res;
  _res = omc_NFSimplifyExp_isIteratorSubscriptedArray(threadData, _exp, _iterator);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyArrayConstructor(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_integer _var;
  modelica_integer _pur;
  modelica_metatype _exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype _iter = NULL;
  modelica_metatype _dim = NULL;
  modelica_integer _dim_size;
  modelica_boolean _expanded;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _ty has no default value.
  // _var has no default value.
  // _pur has no default value.
  // _exp has no default value.
  // _e has no default value.
  // _iters has no default value.
  // _iter has no default value.
  // _dim has no default value.
  // _dim_size has no default value.
  // _expanded has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _call;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,4,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _ty = tmpMeta2;
  _var = tmp4  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
  _pur = tmp6  /* pattern as ty=enumeration(PURE, IMPURE) */;
  _exp = tmpMeta7;
  _iters = tmpMeta8;

  {
    modelica_metatype __omcQ_24tmpVar37;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype tmpMeta12;
    modelica_metatype __omcQ_24tmpVar36;
    modelica_integer tmp13;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _iters;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar37 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar37;
    while(1) {
      tmp13 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp13--;
      }
      if (tmp13 == 0) {
        tmpMeta12 = mmc_mk_box2(0, omc_Util_tuple21(threadData, _i), omc_NFSimplifyExp_simplify(threadData, omc_Util_tuple22(threadData, _i), 0 /* false */));
        __omcQ_24tmpVar36 = tmpMeta12;
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar36,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp13 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar37;
  }
  _iters = tmpMeta9;

  { /* matchcontinue expression */
    volatile modelica_metatype tmp17_1;
    tmp17_1 = _iters;
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
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (listEmpty(tmp17_1)) goto tmp16_end;
          tmpMeta19 = MMC_CAR(tmp17_1);
          tmpMeta20 = MMC_CDR(tmp17_1);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          if (!listEmpty(tmpMeta20)) goto tmp16_end;
          _iter = tmpMeta21;
          _e = tmpMeta22;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta23 = omc_NFExpression_typeOf(threadData, _e);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,7,2) == 0) goto goto_15;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          if (listEmpty(tmpMeta24)) goto goto_15;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (!listEmpty(tmpMeta26)) goto goto_15;
          _dim = tmpMeta25;

          _dim_size = omc_NFDimension_size(threadData, _dim, 0 /* false */);

          if((_dim_size == ((modelica_integer) 0)))
          {
            _outExp = omc_NFExpression_makeEmptyArray(threadData, _ty);
          }
          else
          {
            if((_dim_size == ((modelica_integer) 1)))
            {
              _e = omc_NFExpandExp_expand(threadData, _e, 0 /* false */, NULL);

              _e = omc_NFExpression_arrayScalarElement(threadData, _e);

              _exp = omc_NFExpression_replaceIterator(threadData, _exp, _iter, _e);

              tmpMeta27 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
              _exp = omc_NFExpression_makeArray(threadData, _ty, listArray(tmpMeta27), 0 /* false */);

              _outExp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);
            }
            else
            {
              if((omc_NFExpression_isLiteral(threadData, _e) && omc_NFSimplifyExp_isIteratorSubscriptedArray(threadData, _exp, _iter)))
              {
                _outExp = omc_NFExpandExp_expandArrayConstructor(threadData, _exp, _ty, _iters ,&_expanded);

                if(_expanded)
                {
                  _outExp = omc_NFSimplifyExp_simplify(threadData, _outExp, 0 /* false */);
                }
              }
              else
              {
                goto goto_15;
              }
            }
          }
          tmpMeta14 = _outExp;
          goto tmp16_done;
        }
        case 1: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          _exp = omc_NFSimplifyExp_simplify(threadData, _exp, 0 /* false */);

          _ty = omc_NFType_simplify(threadData, _ty);
          tmpMeta28 = mmc_mk_box6(7, &NFCall_TYPED__ARRAY__CONSTRUCTOR__desc, _ty, mmc_mk_integer((modelica_integer)_var), mmc_mk_integer((modelica_integer)_pur), _exp, _iters);
          tmpMeta29 = mmc_mk_box2(16, &NFExpression_CALL__desc, tmpMeta28);
          tmpMeta14 = tmpMeta29;
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
      MMC_THROW_INTERNAL();
      tmp16_done2:;
    }
  }
  _outExp = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyDer(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  if((omc_NFCall_variability(threadData, _call) < 5))
  {
    _exp = omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _arg));
  }
  else
  {
    tmpMeta1 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
    _exp = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyDelay(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call)
{
  modelica_metatype _callExp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _delayTime = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _callExp has no default value.
  // _exp has no default value.
  // _delayTime has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  _exp = tmpMeta2;
  _delayTime = tmpMeta4;

  if((omc_NFExpression_variability(threadData, _delayTime) <= 3))
  {
    _delayTime = omc_NFCeval_tryEvalExp(threadData, _delayTime);

    if(omc_NFExpression_isZero(threadData, _delayTime))
    {
      _callExp = _exp;

      goto _return;
    }
  }

  tmpMeta6 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
  _callExp = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _callExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyHomotopy(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_Flags_getConfigString(threadData, _OMC_LIT88);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (6 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listHead(_args);
          goto tmp3_done;
        }
        case 1: {
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT77), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listHead(listRest(_args));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta1 = tmpMeta6;
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
modelica_metatype omc_NFSimplifyExp_simplifyFill(threadData_t *threadData, modelica_metatype _fillArg, modelica_metatype _dimArgs, modelica_metatype _call, modelica_boolean _expand)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  if((omc_List_all(threadData, _dimArgs, boxvar_NFExpression_isLiteral) && _expand))
  {
    _exp = omc_NFExpression_fillArgs(threadData, _fillArg, _dimArgs);
  }
  else
  {
    tmpMeta1 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
    _exp = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyFill(threadData_t *threadData, modelica_metatype _fillArg, modelica_metatype _dimArgs, modelica_metatype _call, modelica_metatype _expand)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  _exp = omc_NFSimplifyExp_simplifyFill(threadData, _fillArg, _dimArgs, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyVector(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _expl = NULL;
  modelica_boolean _is_literal;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _expl has no default value.
  // _is_literal has no default value.
  // _ty has no default value.
  _expl = omc_NFExpression_arrayScalarElements(threadData, _arg);

  _is_literal = omc_NFExpression_isLiteral(threadData, _arg);

  if(_is_literal)
  {
    _expl = omc_NFExpandExp_expandList(threadData, _expl, 1 /* true */, NULL);
  }

  if((_is_literal || omc_List_all(threadData, _expl, boxvar_NFExpression_isScalar)))
  {
    _ty = omc_NFType_arrayElementType(threadData, omc_NFExpression_typeOf(threadData, _arg));

    _exp = omc_NFExpression_makeExpArray(threadData, listArray(_expl), _ty, 0 /* false */);
  }
  else
  {
    tmpMeta1 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
    _exp = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call, modelica_boolean _expand)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _e = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _e has no default value.
  _e = (((!_expand) || omc_NFExpression_hasArrayCall(threadData, _arg))?_arg:omc_NFExpandExp_expand(threadData, _arg, 0 /* false */, NULL));

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Array_all(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 3))), boxvar_NFExpression_isArray)) goto tmp3_end;
          tmpMeta1 = omc_NFExpression_transposeArray(threadData, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta1 = tmpMeta6;
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
modelica_metatype boxptr_NFSimplifyExp_simplifyTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call, modelica_metatype _expand)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  _exp = omc_NFSimplifyExp_simplifyTranspose(threadData, _arg, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyReducedArrayConstructor(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _arg;
    {
      modelica_metatype _arr_call = NULL;
      modelica_metatype _fn = NULL;
      modelica_metatype _ty = NULL;
      modelica_integer _var;
      modelica_integer _purity;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arr_call has no default value.
      // _fn has no default value.
      // _ty has no default value.
      // _var has no default value.
      // _purity has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,5) == 0) goto tmp3_end;
          
          _arr_call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_NFType_dimensionCount(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arr_call), 2)))) == ((modelica_integer) 1))) goto tmp3_end;
          /* Pattern-matching assignment */
          tmpMeta7 = _call;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,6) == 0) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _fn = tmpMeta8;
          _ty = tmpMeta9;
          _var = tmp11  /* pattern as ty=enumeration(CONSTANT, STRUCTURAL_PARAMETER, PARAMETER, NON_STRUCTURAL_PARAMETER, DISCRETE, IMPLICITLY_DISCRETE, CONTINUOUS) */;
          _purity = tmp13  /* pattern as ty=enumeration(PURE, IMPURE) */;
          tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedReduction(threadData, _fn, _ty, (modelica_integer)_var, (modelica_integer)_purity, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arr_call), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arr_call), 6))), _OMC_LIT11));
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta1 = tmpMeta15;
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
modelica_metatype omc_NFSimplifyExp_simplifySumProduct(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call, modelica_boolean _expand, modelica_boolean _isSum)
{
  modelica_metatype _exp = NULL;
  modelica_boolean _expanded;
  modelica_metatype _args = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _expanded has no default value.
  // _args has no default value.
  // _ty has no default value.
  // _op has no default value.
  if(_expand)
  {
    _exp = omc_NFExpandExp_expand(threadData, _arg, 0 /* false */ ,&_expanded);

    if(_expanded)
    {
      _args = omc_NFExpression_arrayScalarElements(threadData, _exp);

      _ty = omc_NFType_arrayElementType(threadData, omc_NFExpression_typeOf(threadData, _arg));

      if(listEmpty(_args))
      {
        _exp = (_isSum?omc_NFExpression_makeZero(threadData, _ty):omc_NFExpression_makeOne(threadData, _ty));
      }
      else
      {
        /* Pattern-matching assignment */
        tmpMeta1 = _args;
        if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
        tmpMeta2 = MMC_CAR(tmpMeta1);
        tmpMeta3 = MMC_CDR(tmpMeta1);
        _exp = tmpMeta2;
        _args = tmpMeta3;

        _op = (_isSum?omc_NFOperator_makeAdd(threadData, _ty):omc_NFOperator_makeMul(threadData, _ty));

        {
          modelica_metatype _e;
          for (tmpMeta4 = _args; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
          {
            _e = MMC_CAR(tmpMeta4);
            tmpMeta5 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _exp, _op, _e);
            _exp = tmpMeta5;
          }
        }
      }

      goto _return;
    }
  }

  _exp = omc_NFSimplifyExp_simplifyReducedArrayConstructor(threadData, _arg, _call);
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFSimplifyExp_simplifySumProduct(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _call, modelica_metatype _expand, modelica_metatype _isSum)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  tmp2 = mmc_unbox_integer(_isSum);
  _exp = omc_NFSimplifyExp_simplifySumProduct(threadData, _arg, _call, tmp1, tmp2);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_removePositiveMax(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_OMC_LIT89, omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))))))) goto tmp3_end;
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT91, _OMC_LIT2, _OMC_LIT98, _OMC_LIT97, tmpMeta7, tmpMeta8, _OMC_LIT93, _OMC_LIT99, tmpMeta9, tmpMeta10, listArray(tmpMeta11), _OMC_LIT21, _OMC_LIT22);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT91, _OMC_LIT2, _OMC_LIT98, _OMC_LIT97, tmpMeta13, tmpMeta14, _OMC_LIT93, _OMC_LIT99, tmpMeta15, tmpMeta16, listArray(tmpMeta17), _OMC_LIT21, _OMC_LIT22);
          tmpMeta19 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta12, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), omc_NFExpression_variability(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))))), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 8)))));
          tmpMeta1 = tmpMeta19;
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

DLLDirection
modelica_metatype omc_NFSimplifyExp_removeInStreamDiv(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
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
      modelica_metatype _call = NULL;
      modelica_metatype _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_OMC_LIT100, omc_AbsynUtil_pathFirstIdent(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))))))) goto tmp3_end;
          _res = omc_NFSimplifyExp_simplify(threadData, omc_NFExpression_map(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), boxvar_NFSimplifyExp_removePositiveMax), 1 /* true */);
          tmpMeta7 = mmc_mk_cons(_res, listRest((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))));
          tmpMeta1 = omc_NFSimplifyExp_simplifyInStreamDiv(threadData, tmpMeta7, _call, 1 /* true */);
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

DLLDirection
modelica_metatype omc_NFSimplifyExp_removeStream(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _exp = omc_NFExpression_mapReverse(threadData, _exp, boxvar_NFSimplifyExp_removeInStreamDiv);
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyInStreamDiv(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_boolean _removeStream)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _stream_exp = NULL;
  modelica_metatype _fallback = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _stream_exp has no default value.
  // _fallback has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (!listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  _stream_exp = tmpMeta2;
  _fallback = tmpMeta4;

  if(omc_NFExpression_isNaN(threadData, _stream_exp))
  {
    _exp = _fallback;
  }
  else
  {
    if(_removeStream)
    {
      _exp = _stream_exp;
    }
    else
    {
      tmpMeta6 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
      _exp = tmpMeta6;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyInStreamDiv(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_metatype _removeStream)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_removeStream);
  _exp = omc_NFSimplifyExp_simplifyInStreamDiv(threadData, _args, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyPositiveMax(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _flow_exp = NULL;
  modelica_metatype _eps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _flow_exp has no default value.
  // _eps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (!listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  _flow_exp = tmpMeta2;
  _eps = tmpMeta4;

  if(omc_NFExpression_isNonPositive(threadData, _flow_exp))
  {
    _exp = omc_NFExpression_makeZero(threadData, omc_NFExpression_typeOf(threadData, _flow_exp));
  }
  else
  {
    if(omc_NFExpression_isGreaterOrEqual(threadData, _flow_exp, _eps))
    {
      _exp = _flow_exp;
    }
    else
    {
      tmpMeta6 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
      _exp = tmpMeta6;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyMinMax(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_boolean _isMin)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _arg has no default value.
  // _ty has no default value.
  if((listLength(_args) == ((modelica_integer) 1)))
  {
    _arg = listHead(_args);

    _ty = omc_NFExpression_typeOf(threadData, _arg);

    if(omc_NFType_isEmptyArray(threadData, _ty))
    {
      _ty = omc_NFType_arrayElementType(threadData, _ty);

      _exp = (_isMin?omc_NFExpression_makeMaxValue(threadData, _ty):omc_NFExpression_makeMinValue(threadData, _ty));
    }
    else
    {
      _exp = omc_NFSimplifyExp_simplifyReducedArrayConstructor(threadData, _arg, _call);
    }
  }
  else
  {
    tmpMeta1 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
    _exp = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyMinMax(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_metatype _isMin)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_isMin);
  _exp = omc_NFSimplifyExp_simplifyMinMax(threadData, _args, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifySemiLinear(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _x = NULL;
  modelica_metatype _m1 = NULL;
  modelica_metatype _m2 = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _x has no default value.
  // _m1 has no default value.
  // _m2 has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _args;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
  tmpMeta6 = MMC_CAR(tmpMeta5);
  tmpMeta7 = MMC_CDR(tmpMeta5);
  if (!listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  _x = tmpMeta2;
  _m1 = tmpMeta4;
  _m2 = tmpMeta6;

  _ty = omc_NFExpression_typeOf(threadData, _x);

  if((omc_NFExpression_isZero(threadData, _x) || (omc_NFExpression_isZero(threadData, _m1) && omc_NFExpression_isZero(threadData, _m2))))
  {
    _exp = omc_NFExpression_makeZero(threadData, _ty);
  }
  else
  {
    if(omc_NFExpression_isEqual(threadData, _m1, _m2))
    {
      tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _x, omc_NFOperator_makeMul(threadData, _ty), _m1);
      _exp = tmpMeta8;
    }
    else
    {
      tmpMeta9 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
      _exp = tmpMeta9;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyCat(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _nonempty_args = NULL;
  modelica_metatype tmpMeta1;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp4;
    modelica_metatype _arg_loopVar = 0;
    modelica_metatype _arg;
    _arg_loopVar = _args;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar39;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_arg_loopVar)) {
        _arg = MMC_CAR(_arg_loopVar);
        _arg_loopVar = MMC_CDR(_arg_loopVar);
        if ((!omc_NFExpression_sizeZero(threadData, _arg))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar38 = _arg;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar39;
  }
  _nonempty_args = tmpMeta1;
  if((listLength(_nonempty_args) == ((modelica_integer) 2)))
  {
    /* Pattern-matching assignment */
    tmpMeta5 = _nonempty_args;
    if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_CAR(tmpMeta5);
    tmpMeta7 = MMC_CDR(tmpMeta5);
    if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
    tmpMeta8 = MMC_CAR(tmpMeta7);
    tmpMeta9 = MMC_CDR(tmpMeta7);
    if (!listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
    _exp = tmpMeta8;
  }
  else
  {
    if((listLength(_nonempty_args) == ((modelica_integer) 1)))
    {
      /* Pattern-matching assignment */
      tmpMeta10 = _args;
      if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
      tmpMeta11 = MMC_CAR(tmpMeta10);
      tmpMeta12 = MMC_CDR(tmpMeta10);
      if (listEmpty(tmpMeta12)) MMC_THROW_INTERNAL();
      tmpMeta13 = MMC_CAR(tmpMeta12);
      tmpMeta14 = MMC_CDR(tmpMeta12);
      _exp = tmpMeta13;
    }
    else
    {
      tmpMeta15 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_setArguments(threadData, _call, _nonempty_args));
      _exp = tmpMeta15;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyBuiltinCall(threadData_t *threadData, modelica_metatype _name, modelica_metatype _args, modelica_metatype _call, modelica_boolean _expand)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_AbsynUtil_pathFirstIdent(threadData, _name);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(stringHashDjb2Mod(tmp4_1,2048))) {
        case 1277 /* cat */: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT106), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          if(((!omc_Flags_getConfigBool(threadData, _OMC_LIT104)) || omc_List_all(threadData, _args, boxvar_NFExpression_isLiteral)))
          {
            _exp = omc_NFExpandExp_expandBuiltinCat(threadData, _args, _call, 0 /* false */, NULL);
          }
          else
          {
            _exp = omc_NFSimplifyExp_simplifyCat(threadData, _args, _call);
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1644 /* pre */: {
          modelica_metatype tmpMeta5;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp8_1;
            tmp8_1 = _args;
            {
              volatile mmc_switch_type tmp8;
              int tmp9;
              tmp8 = 0;
              for (; tmp8 < 2; tmp8++) {
                switch (MMC_SWITCH_CAST(tmp8)) {
                case 0: {
                  modelica_metatype tmpMeta10;
                  modelica_metatype tmpMeta11;
                  if (listEmpty(tmp8_1)) goto tmp7_end;
                  tmpMeta10 = MMC_CAR(tmp8_1);
                  tmpMeta11 = MMC_CDR(tmp8_1);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,1) == 0) goto tmp7_end;
                  if (!listEmpty(tmpMeta11)) goto tmp7_end;
                  _exp = tmpMeta10;
                  /* Pattern matching succeeded */
                  tmpMeta5 = _exp;
                  goto tmp7_done;
                }
                case 1: {
                  modelica_metatype tmpMeta12;
                  
                  /* Pattern matching succeeded */
                  tmpMeta12 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                  tmpMeta5 = tmpMeta12;
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
          }tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 1332 /* delay */: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT108), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyDelay(threadData, _args, _call);
          goto tmp3_done;
        }
        case 448 /* der */: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT109), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyDer(threadData, listHead(_args), _call);
          goto tmp3_done;
        }
        case 812 /* fill */: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT110), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyFill(threadData, listHead(_args), listRest(_args), _call, _expand);
          goto tmp3_done;
        }
        case 1188 /* homotopy */: {
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT111), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyHomotopy(threadData, _args, _call);
          goto tmp3_done;
        }
        case 1931 /* max */: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT90), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyMinMax(threadData, _args, _call, 0 /* false */);
          goto tmp3_done;
        }
        case 137 /* min */: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT112), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyMinMax(threadData, _args, _call, 1 /* true */);
          goto tmp3_done;
        }
        case 1786 /* ones */: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT113), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyFill(threadData, _OMC_LIT28, _args, _call, _expand);
          goto tmp3_done;
        }
        case 1606 /* product */: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifySumProduct(threadData, listHead(_args), _call, _expand, 0 /* false */);
          goto tmp3_done;
        }
        case 922 /* sum */: {
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifySumProduct(threadData, listHead(_args), _call, _expand, 1 /* true */);
          goto tmp3_done;
        }
        case 356 /* transpose */: {
          if (9 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT114), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyTranspose(threadData, listHead(_args), _call, _expand);
          goto tmp3_done;
        }
        case 1944 /* vector */: {
          if (6 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT115), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyVector(threadData, listHead(_args), _call);
          goto tmp3_done;
        }
        case 920 /* zeros */: {
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT116), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyFill(threadData, _OMC_LIT105, _args, _call, _expand);
          goto tmp3_done;
        }
        case 1646 /* semiLinear */: {
          if (10 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT117), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifySemiLinear(threadData, _args, _call);
          goto tmp3_done;
        }
        case 1573 /* $OMC$PositiveMax */: {
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT89), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyPositiveMax(threadData, _args, _call);
          goto tmp3_done;
        }
        case 1298 /* $OMC$inStreamDiv */: {
          if (16 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT100), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyInStreamDiv(threadData, _args, _call, 0 /* false */);
          goto tmp3_done;
        }
        case 776 /* OpenModelica_uriToFilename */: {
          if (26 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT118), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_default;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyURIToFilename(threadData, listHead(_args), _call);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta1 = tmpMeta13;
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
modelica_metatype boxptr_NFSimplifyExp_simplifyBuiltinCall(threadData_t *threadData, modelica_metatype _name, modelica_metatype _args, modelica_metatype _call, modelica_metatype _expand)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_expand);
  _exp = omc_NFSimplifyExp_simplifyBuiltinCall(threadData, _name, _args, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyCall2(threadData_t *threadData, modelica_metatype _call)
{
  modelica_metatype _outExp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT119);

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
          _outExp = omc_NFCeval_evalCall(threadData, _call, _OMC_LIT38);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT119);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT125))
          {
            omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT119);

            tmpMeta5 = stringAppend(_OMC_LIT120,omc_NFCall_toString(threadData, _call));
            tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT121);
            omc_Debug_traceln(threadData, tmpMeta6);
          }
          else
          {
            omc_ErrorExt_rollBack(threadData, _OMC_LIT119);
          }

          tmpMeta7 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          _outExp = tmpMeta7;
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
  return _outExp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyCall(threadData_t *threadData, modelica_metatype __omcQ_24in_5FcallExp)
{
  modelica_metatype _callExp = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _args = NULL;
  modelica_boolean _builtin;
  modelica_boolean _is_pure;
  modelica_boolean _scalarize;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _callExp = __omcQ_24in_5FcallExp;
  // _call has no default value.
  // _args has no default value.
  // _builtin has no default value.
  // _is_pure has no default value.
  // _scalarize has no default value.
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
      for (; tmp6 < 5; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
          
          _args = tmpMeta8;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFCall_isExternal(threadData, _call))) goto tmp5_end;
          if(omc_Flags_isSet(threadData, _OMC_LIT129))
          {
            {
              modelica_metatype __omcQ_24tmpVar41;
              modelica_metatype* tmp10;
              modelica_metatype tmpMeta11;
              modelica_metatype __omcQ_24tmpVar40;
              modelica_integer tmp12;
              modelica_metatype _arg_loopVar = 0;
              modelica_metatype _arg;
              _arg_loopVar = _args;
              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar41 = tmpMeta11; /* defaultValue */
              tmp10 = &__omcQ_24tmpVar41;
              while(1) {
                tmp12 = 1;
                if (!listEmpty(_arg_loopVar)) {
                  _arg = MMC_CAR(_arg_loopVar);
                  _arg_loopVar = MMC_CDR(_arg_loopVar);
                  tmp12--;
                }
                if (tmp12 == 0) {
                  __omcQ_24tmpVar40 = (omc_NFExpression_hasArrayCall(threadData, _arg)?_arg:omc_NFExpandExp_expand(threadData, _arg, 0 /* false */, NULL));
                  *tmp10 = mmc_mk_cons(__omcQ_24tmpVar40,0);
                  tmp10 = &MMC_CDR(*tmp10);
                } else if (tmp12 == 1) {
                  break;
                } else {
                  goto goto_4;
                }
              }
              *tmp10 = mmc_mk_nil();
              tmpMeta9 = __omcQ_24tmpVar41;
            }
            _args = tmpMeta9;
          }

          {
            modelica_metatype __omcQ_24tmpVar43;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar42;
            modelica_integer tmp16;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = _args;
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar43 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar43;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar42 = omc_NFSimplifyExp_simplify(threadData, _arg, 0 /* false */);
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar42,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar43;
          }
          _args = tmpMeta13;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[6] = _args;
          _call = tmpMeta17;

          _builtin = omc_NFFunction_Function_isBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));

          _is_pure = (!omc_NFFunction_Function_isImpure(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))));

          if(_builtin)
          {
            _scalarize = omc_Flags_isSet(threadData, _OMC_LIT64);

            if(((_is_pure && omc_List_all(threadData, _args, boxvar_NFExpression_isLiteral)) && (_scalarize || omc_NFType_isScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))))))
            {
              { /* matchcontinue expression */
                {
                  volatile mmc_switch_type tmp20;
                  int tmp21;
                  tmp20 = 0;
                  MMC_TRY_INTERNAL(mmc_jumper)
                  tmp19_top:
                  threadData->mmc_jumper = &new_mmc_jumper;
                  for (; tmp20 < 2; tmp20++) {
                    switch (MMC_SWITCH_CAST(tmp20)) {
                    case 0: {
                      /* Pattern matching succeeded */
                      _callExp = omc_NFCeval_evalCall(threadData, _call, _OMC_LIT38);
                      goto tmp19_done;
                    }
                    case 1: {
                      modelica_metatype tmpMeta22;
                      /* Pattern matching succeeded */
                      tmpMeta22 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
                      _callExp = tmpMeta22;
                      goto tmp19_done;
                    }
                    }
                    goto tmp19_end;
                    tmp19_end: ;
                  }
                  goto goto_18;
                  tmp19_done:
                  (void)tmp20;
                  MMC_RESTORE_INTERNAL(mmc_jumper);
                  goto tmp19_done2;
                  goto_18:;
                  MMC_CATCH_INTERNAL(mmc_jumper);
                  if (++tmp20 < 2) {
                    goto tmp19_top;
                  }
                  goto goto_4;
                  tmp19_done2:;
                }
              }
              ;
            }
            else
            {
              _callExp = omc_NFSimplifyExp_simplifyBuiltinCall(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _args, _call, _scalarize);
            }
          }
          else
          {
            if(((omc_Flags_isSet(threadData, _OMC_LIT133) && _is_pure) && omc_List_all(threadData, _args, boxvar_NFExpression_isLiteral)))
            {
              _callExp = omc_NFSimplifyExp_simplifyCall2(threadData, _call);
            }
            else
            {
              tmpMeta23 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
              _callExp = tmpMeta23;
            }
          }
          tmpMeta3 = _callExp;
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,6) == 0) goto tmp5_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
          
          _args = tmpMeta24;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar45;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype __omcQ_24tmpVar44;
            modelica_integer tmp28;
            modelica_metatype _arg_loopVar = 0;
            modelica_metatype _arg;
            _arg_loopVar = _args;
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar45 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar45;
            while(1) {
              tmp28 = 1;
              if (!listEmpty(_arg_loopVar)) {
                _arg = MMC_CAR(_arg_loopVar);
                _arg_loopVar = MMC_CDR(_arg_loopVar);
                tmp28--;
              }
              if (tmp28 == 0) {
                __omcQ_24tmpVar44 = omc_NFSimplifyExp_simplify(threadData, _arg, 0 /* false */);
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar44,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp28 == 1) {
                break;
              } else {
                goto goto_4;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar45;
          }
          _args = tmpMeta25;

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_call), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[6] = _args;
          _call = tmpMeta29;
          tmpMeta30 = mmc_mk_box2(16, &NFExpression_CALL__desc, _call);
          tmpMeta3 = tmpMeta30;
          goto tmp5_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,5) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta3 = omc_NFSimplifyExp_simplifyArrayConstructor(threadData, _call);
          goto tmp5_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,8) == 0) goto tmp5_end;
          
          /* Pattern matching succeeded */
          tmpMeta3 = omc_NFSimplifyExp_simplifyReduction(threadData, _call);
          goto tmp5_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta3 = _callExp;
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

static modelica_metatype closure11_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyRange(threadData_t *threadData, modelica_metatype _range)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _start_exp1 = NULL;
  modelica_metatype _stop_exp1 = NULL;
  modelica_metatype _start_exp2 = NULL;
  modelica_metatype _stop_exp2 = NULL;
  modelica_metatype _step_exp1 = NULL;
  modelica_metatype _step_exp2 = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _ty2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _start_exp1 has no default value.
  // _stop_exp1 has no default value.
  // _start_exp2 has no default value.
  // _stop_exp2 has no default value.
  // _step_exp1 has no default value.
  // _step_exp2 has no default value.
  // _ty has no default value.
  // _ty2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _range;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,10,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _ty = tmpMeta2;
  _start_exp1 = tmpMeta3;
  _step_exp1 = tmpMeta4;
  _stop_exp1 = tmpMeta5;

  _start_exp2 = omc_NFSimplifyExp_simplify(threadData, _start_exp1, 0 /* false */);

  tmpMeta6 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
  _step_exp2 = omc_Util_applyOption(threadData, _step_exp1, (modelica_fnptr) mmc_mk_box2(0,closure11_NFSimplifyExp_simplify,tmpMeta6));

  _stop_exp2 = omc_NFSimplifyExp_simplify(threadData, _stop_exp1, 0 /* false */);

  _ty2 = omc_NFType_simplify(threadData, _ty);

  if((((referenceEq(_start_exp1, _start_exp2) && referenceEq(_step_exp1, _step_exp2)) && referenceEq(_stop_exp1, _stop_exp2)) && referenceEq(_ty, _ty2)))
  {
    _exp = _range;
  }
  else
  {
    if((!omc_NFType_isResizable(threadData, _ty)))
    {
      _ty = omc_NFTypeCheck_getRangeType(threadData, _start_exp2, _step_exp2, _stop_exp2, omc_NFType_arrayElementType(threadData, _ty), _OMC_LIT11);
    }
    else
    {
      _ty = _ty2;
    }

    tmpMeta7 = mmc_mk_box5(13, &NFExpression_RANGE__desc, _ty, _start_exp2, _step_exp2, _stop_exp2);
    _exp = tmpMeta7;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

static modelica_metatype closure12_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}
DLLDirection
modelica_metatype omc_NFSimplifyExp_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_boolean _includeScope)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _old = NULL;
  modelica_metatype _new = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _old has no default value.
  // _new has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 22; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_NFComponentRef_simplifySubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 0 /* false */);
          _exp = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_exp), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NFComponentRef_getSubscriptedType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _includeScope);
          _exp = tmpMeta7;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)))))) goto tmp3_end;
          tmpMeta9 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = omc_Array_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), (modelica_fnptr) mmc_mk_box2(0,closure12_NFSimplifyExp_simplify,tmpMeta9));
          _exp = tmpMeta8;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyRange(threadData, _exp);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar47;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar46;
            modelica_integer tmp14;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar47 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar47;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar46 = omc_NFSimplifyExp_simplify(threadData, _e, 0 /* false */);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar46,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar47;
          }
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_exp), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[4] = tmpMeta11;
          _exp = tmpMeta10;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyCall(threadData, _exp);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifySize(threadData, _exp);
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyMultary(threadData, _exp);
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyBinary(threadData, _exp);
          goto tmp3_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyUnary(threadData, _exp);
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyLogicBinary(threadData, _exp);
          goto tmp3_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyLogicUnary(threadData, _exp);
          goto tmp3_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,20,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyRelation(threadData, _exp);
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyIf(threadData, _exp);
          goto tmp3_done;
        }
        case 13: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,23,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyCast(threadData, omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), 0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,25,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box3(28, &NFExpression_UNBOX__desc, omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 15: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,26,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifySubscriptedExp(threadData, _exp);
          goto tmp3_done;
        }
        case 16: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,27,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyTupleElement(threadData, _exp);
          goto tmp3_done;
        }
        case 17: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,28,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplifyRecordElement(threadData, _exp);
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,24,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box2(27, &NFExpression_BOX__desc, omc_NFSimplifyExp_simplify(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), 0 /* false */));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 19: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,29,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFSimplifyExp_simplify(threadData, omc_Mutable_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))), 0 /* false */);
          goto tmp3_done;
        }
        case 20: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,34,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFCeval_evalGetInstanceName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          goto tmp3_done;
        }
        case 21: {
          
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

  _old = omc_NFExpression_typeOf(threadData, _exp);

  _new = omc_NFType_simplify(threadData, _old);

  if((!referenceEq(_old, _new)))
  {
    _exp = omc_NFExpression_setType(threadData, _new, _exp);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NFSimplifyExp_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _includeScope)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_includeScope);
  _exp = omc_NFSimplifyExp_simplify(threadData, __omcQ_24in_5Fexp, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

DLLDirection
modelica_metatype omc_NFSimplifyExp_simplifyDump(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _includeScope, modelica_string _name, modelica_string _indent)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = omc_NFSimplifyExp_simplify(threadData, _exp, _includeScope);

  if((omc_Flags_isSet(threadData, _OMC_LIT142) && (!omc_NFExpression_isEqual(threadData, _exp, _res))))
  {
    tmpMeta1 = stringAppend(_indent,_OMC_LIT134);
    tmpMeta2 = stringAppend(tmpMeta1,_name);
    tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT135);
    fputs(MMC_STRINGDATA(tmpMeta3),stdout);

    tmpMeta4 = stringAppend(_indent,_OMC_LIT136);
    tmpMeta5 = stringAppend(tmpMeta4,omc_NFExpression_toString(threadData, _exp));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT121);
    fputs(MMC_STRINGDATA(tmpMeta6),stdout);

    tmpMeta7 = stringAppend(_indent,_OMC_LIT137);
    tmpMeta8 = stringAppend(tmpMeta7,omc_NFExpression_toString(threadData, _res));
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT138);
    fputs(MMC_STRINGDATA(tmpMeta9),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_NFSimplifyExp_simplifyDump(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _includeScope, modelica_metatype _name, modelica_metatype _indent)
{
  modelica_integer tmp1;
  modelica_metatype _res = NULL;
  tmp1 = mmc_unbox_integer(_includeScope);
  _res = omc_NFSimplifyExp_simplifyDump(threadData, _exp, tmp1, _name, _indent);
  /* skip box _res; NFExpression */
  return _res;
}

