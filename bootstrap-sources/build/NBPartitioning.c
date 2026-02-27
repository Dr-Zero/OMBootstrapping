#include "omc_simulation_settings.h"
#include "NBPartitioning.h"
#define _OMC_LIT0_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,8,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&NFType_REAL__desc,}};
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
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,7,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT17,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,1,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT24,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,1,1) {_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT23,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT26,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,1) {_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "b"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,6) {&NFType_BOOLEAN__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT30,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,1) {_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT32,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,1,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,7) {&NFType_CLOCK__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT2,_OMC_LIT36,_OMC_LIT5,_OMC_LIT5,_OMC_LIT7,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT11}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,1) {_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT35,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT38,_OMC_LIT2,_OMC_LIT14}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT39,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,17,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT41,_OMC_LIT42,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "NBPartitioning.replaceClockedFunctionExp failed. "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,49,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data " is of type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,12,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data ", only real, integer, boolean and clock are allowed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,52,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "NBPartitioning.replaceClockedFunctions.replaceSample failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,65,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,1,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "NBPartitioning.replaceClockedFunctions failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,51,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,6,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "subSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,9,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "superSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,11,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "shiftSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,11,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "backSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,10,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "hold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,4,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBPartitioning.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,94,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT59_6,1.772102377e9);
#define _OMC_LIT59_6 MMC_REFREALLIT(_OMC_LIT_STRUCT59_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1174)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1174)),MMC_IMMEDIATE(MMC_TAGFIXNUM(76)),_OMC_LIT59_6}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "NBPartitioning.collectPartitioningCrefs failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,52,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,8,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT62_6,1.772102377e9);
#define _OMC_LIT62_6 MMC_REFREALLIT(_OMC_LIT_STRUCT62_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1149)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1155)),MMC_IMMEDIATE(MMC_TAGFIXNUM(18)),_OMC_LIT62_6}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT63_6,1.772102377e9);
#define _OMC_LIT63_6 MMC_REFREALLIT(_OMC_LIT_STRUCT63_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1160)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1162)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),_OMC_LIT63_6}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT64_6,1.772102377e9);
#define _OMC_LIT64_6 MMC_REFREALLIT(_OMC_LIT_STRUCT64_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1147)),MMC_IMMEDIATE(MMC_TAGFIXNUM(12)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1147)),MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),_OMC_LIT64_6}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT65_6,1.772102377e9);
#define _OMC_LIT65_6 MMC_REFREALLIT(_OMC_LIT_STRUCT65_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1003)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1003)),MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT65_6}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,1,5) {&NBEquation_Iterator_EMPTY__desc,}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT67_6,1.772102377e9);
#define _OMC_LIT67_6 MMC_REFREALLIT(_OMC_LIT_STRUCT67_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1063)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1063)),MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT67_6}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "NBPartitioning.sortClockedPartitions failed for sub-partitions with cyclic dependency that could not be resolved:\nThere are contradicting sub-clocks: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,150,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,1,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,2,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,1,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data " in strong component:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,22,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,3,3) {&NBBackendUtil_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,4,4) {&NBPartitioning_BClock_SUB__CLOCK__desc,_OMC_LIT73,_OMC_LIT74,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT76_6,1.772102377e9);
#define _OMC_LIT76_6 MMC_REFREALLIT(_OMC_LIT_STRUCT76_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(959)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(959)),MMC_IMMEDIATE(MMC_TAGFIXNUM(84)),_OMC_LIT76_6}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "NBPartitioning.partitioningClocked ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,36,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data ") failed because the following variables could not be assigned to a partition:\n  {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,82,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,1,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "[dumpSynchronous] Partitioning result:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,38,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "dumpSynchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,15,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "Dumps information of the clock partitioning."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,44,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(104)),_OMC_LIT81,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT83}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT85_6,1.772102377e9);
#define _OMC_LIT85_6 MMC_REFREALLIT(_OMC_LIT_STRUCT85_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(696)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(696)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT85_6}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,1,13) {&NFBackendExtension_VariableKind_CLOCKED__desc,}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT87_6,1.772102377e9);
#define _OMC_LIT87_6 MMC_REFREALLIT(_OMC_LIT_STRUCT87_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(644)),MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),MMC_IMMEDIATE(MMC_TAGFIXNUM(644)),MMC_IMMEDIATE(MMC_TAGFIXNUM(44)),_OMC_LIT87_6}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "NBPartitioning.Cluster.addElement failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,45,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data " because of unknown cluster element type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,41,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "### Cluster Variables:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,23,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "\n### Cluster Equation Identifiers:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,35,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT92_6,1.772102377e9);
#define _OMC_LIT92_6 MMC_REFREALLIT(_OMC_LIT_STRUCT92_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(567)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(567)),MMC_IMMEDIATE(MMC_TAGFIXNUM(77)),_OMC_LIT92_6}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "NBPartitioning.categorize failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,33,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,2,1) {_OMC_LIT93,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "clocked"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,7,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,7,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,4,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "NBPartitioning.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,27,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,2,1) {_OMC_LIT98,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT100_6,1.772102377e9);
#define _OMC_LIT100_6 MMC_REFREALLIT(_OMC_LIT_STRUCT100_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(456)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(456)),MMC_IMMEDIATE(MMC_TAGFIXNUM(95)),_OMC_LIT100_6}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT101_6,1.772102377e9);
#define _OMC_LIT101_6 MMC_REFREALLIT(_OMC_LIT_STRUCT101_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(420)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(420)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),_OMC_LIT101_6}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT102_6,1.772102377e9);
#define _OMC_LIT102_6 MMC_REFREALLIT(_OMC_LIT_STRUCT102_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(432)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(432)),MMC_IMMEDIATE(MMC_TAGFIXNUM(86)),_OMC_LIT102_6}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT103_6,1.772102377e9);
#define _OMC_LIT103_6 MMC_REFREALLIT(_OMC_LIT_STRUCT103_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(437)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(437)),MMC_IMMEDIATE(MMC_TAGFIXNUM(82)),_OMC_LIT103_6}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT104_6,1.772102377e9);
#define _OMC_LIT104_6 MMC_REFREALLIT(_OMC_LIT_STRUCT104_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(438)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(438)),MMC_IMMEDIATE(MMC_TAGFIXNUM(80)),_OMC_LIT104_6}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT105_6,1.772102377e9);
#define _OMC_LIT105_6 MMC_REFREALLIT(_OMC_LIT_STRUCT105_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(406)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(406)),MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT105_6}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Clocked Info"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,12,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,11,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,2,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,10,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "Sub to Base Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,18,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Base to Sub Clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,18,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "NBPartitioning.BClock.updateSubClock failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,48,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data " and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,5,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data " because of incorrect clock types."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,34,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "NBPartitioning.BClock.fromExp failed for exp with unhandled call: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,66,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "NBPartitioning.BClock.fromExp failed for exp with unhandled expression kind: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,77,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT117_6,1.772102377e9);
#define _OMC_LIT117_6 MMC_REFREALLIT(_OMC_LIT_STRUCT117_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(221)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(221)),MMC_IMMEDIATE(MMC_TAGFIXNUM(71)),_OMC_LIT117_6}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "NBPartitioning.BClock.create failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,40,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "NBPartitioning.BClock.toExp failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,55,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "NBPartitioning.BClock.convertSub failed for non-sub clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,59,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "NBPartitioning.BClock.convertBase failed for non-base clock: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,61,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "SUB_CLOCK("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,10,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,1,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "UNKNOWN_CLOCK()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,15,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#include "util/modelica.h"

#include "NBPartitioning_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedWhen(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedWhen,2,0) {(void*) boxptr_NBPartitioning_replaceClockedWhen,0}};
#define boxvar_NBPartitioning_replaceClockedWhen MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedWhen)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctionExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctionExp,2,0) {(void*) boxptr_NBPartitioning_replaceClockedFunctionExp,0}};
#define boxvar_NBPartitioning_replaceClockedFunctionExp MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctionExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _held_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctions,2,0) {(void*) boxptr_NBPartitioning_replaceClockedFunctions,0}};
#define boxvar_NBPartitioning_replaceClockedFunctions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_replaceClockedFunctions)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_addCrefToSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_addCrefToSet,2,0) {(void*) boxptr_NBPartitioning_addCrefToSet,0}};
#define boxvar_NBPartitioning_addCrefToSet MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_addCrefToSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_collectPartitioningCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _var_crefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_collectPartitioningCrefs,2,0) {(void*) boxptr_NBPartitioning_collectPartitioningCrefs,0}};
#define boxvar_NBPartitioning_collectPartitioningCrefs MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_collectPartitioningCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortClockedPartitions(threadData_t *threadData, modelica_metatype _unsorted);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_sortClockedPartitions,2,0) {(void*) boxptr_NBPartitioning_sortClockedPartitions,0}};
#define boxvar_NBPartitioning_sortClockedPartitions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_sortClockedPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortAndMergeClockedPartitions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_sortAndMergeClockedPartitions,2,0) {(void*) boxptr_NBPartitioning_sortAndMergeClockedPartitions,0}};
#define boxvar_NBPartitioning_sortAndMergeClockedPartitions MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_sortAndMergeClockedPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked,2,0) {(void*) boxptr_NBPartitioning_partitioningClocked,0}};
#define boxvar_NBPartitioning_partitioningClocked MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningClocked)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone,2,0) {(void*) boxptr_NBPartitioning_partitioningNone,0}};
#define boxvar_NBPartitioning_partitioningNone MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_partitioningNone)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_addToClockMap_findClock,2,0) {(void*) boxptr_NBPartitioning_Cluster_addToClockMap_findClock,0}};
#define boxvar_NBPartitioning_Cluster_addToClockMap_findClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_Cluster_addToClockMap_findClock)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_ClockedInfo_addSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_addSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_addSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_addSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info, modelica_metatype _clock_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_resolveSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_resolveSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData_t *threadData, modelica_metatype _key, modelica_metatype _info, modelica_metatype _clock_map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveImplicitSubClock,2,0) {(void*) boxptr_NBPartitioning_ClockedInfo_resolveImplicitSubClock,0}};
#define boxvar_NBPartitioning_ClockedInfo_resolveImplicitSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_ClockedInfo_resolveImplicitSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_updateSubClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdest, modelica_metatype _src);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_updateSubClock,2,0) {(void*) boxptr_NBPartitioning_BClock_updateSubClock,0}};
#define boxvar_NBPartitioning_BClock_updateSubClock MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_updateSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_baseClock);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_fromExp,2,0) {(void*) boxptr_NBPartitioning_BClock_fromExp,0}};
#define boxvar_NBPartitioning_BClock_fromExp MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_fromExp)
PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_BClock_create(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _exp, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_create,2,0) {(void*) boxptr_NBPartitioning_BClock_create,0}};
#define boxvar_NBPartitioning_BClock_create MMC_REFSTRUCTLIT(boxvar_lit_NBPartitioning_BClock_create)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedWhen(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn)
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
      modelica_metatype _cond = NULL;
      modelica_metatype _stmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cond has no default value.
      // _stmt has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (!optionNone(tmpMeta11)) goto tmp3_end;
          
          _cond = tmpMeta7;
          _stmt = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _cond))) goto tmp3_end;
          tmpMeta1 = omc_NBEquation_WhenStatement_toEquation(threadData, _stmt, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqn), 5))), 0 /* false */);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctionExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _func has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFExpression_typeOf(threadData, _exp);
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT16, _OMC_LIT16, tmpMeta5, tmpMeta6, _OMC_LIT4, _OMC_LIT20, tmpMeta7, tmpMeta8, listArray(tmpMeta9), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT28, _OMC_LIT28, tmpMeta11, tmpMeta12, _OMC_LIT24, _OMC_LIT20, tmpMeta13, tmpMeta14, listArray(tmpMeta15), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta22 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT34, _OMC_LIT34, tmpMeta17, tmpMeta18, _OMC_LIT30, _OMC_LIT20, tmpMeta19, tmpMeta20, listArray(tmpMeta21), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          
          /* Pattern matching succeeded */
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = mmc_mk_box14(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT1, _OMC_LIT2, _OMC_LIT40, _OMC_LIT40, tmpMeta23, tmpMeta24, _OMC_LIT30, _OMC_LIT20, tmpMeta25, tmpMeta26, listArray(tmpMeta27), _OMC_LIT21, _OMC_LIT22);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          
          /* Pattern matching succeeded */
          tmpMeta30 = stringAppend(_OMC_LIT46,omc_NFExpression_toString(threadData, _exp));
          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT47);
          tmpMeta32 = stringAppend(tmpMeta31,omc_NFType_toString(threadData, omc_NFExpression_typeOf(threadData, _exp)));
          tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT48);
          tmpMeta29 = mmc_mk_cons(tmpMeta33, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta29);
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
  _func = tmpMeta1;

  tmpMeta34 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta35 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _func, tmpMeta34, omc_NFExpression_variability(threadData, _exp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 8)))));
  _exp = tmpMeta35;
  _return: OMC_LABEL_UNUSED
  return _exp;
}

DLLDirection
modelica_metatype omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _call, modelica_boolean _basic)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _arg1 = NULL;
  modelica_metatype _arg2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _arg has no default value.
  // _arg1 has no default value.
  // _arg2 has no default value.
  /* Pattern-matching assignment */
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_NFCall_arguments(threadData, _call);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
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
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          _arg1 = tmpMeta6;
          _arg2 = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (listEmpty(tmpMeta14)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          _arg1 = tmpMeta13;
          _arg2 = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!_basic) goto tmp3_end;
          tmpMeta17 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          if (listEmpty(tmpMeta19)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          if (listEmpty(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          _arg1 = tmpMeta18;
          _arg2 = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta24 = mmc_mk_cons(_arg1, mmc_mk_cons(_arg2, MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          tmpMeta26 = stringAppend(_OMC_LIT49,omc_NFExpression_toString(threadData, _exp));
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT50);
          tmpMeta25 = mmc_mk_cons(tmpMeta27, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta25);
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
  tmpMeta28 = tmpMeta1;
  if (listEmpty(tmpMeta28)) MMC_THROW_INTERNAL();
  tmpMeta29 = MMC_CAR(tmpMeta28);
  tmpMeta30 = MMC_CDR(tmpMeta28);
  if (listEmpty(tmpMeta30)) MMC_THROW_INTERNAL();
  tmpMeta31 = MMC_CAR(tmpMeta30);
  tmpMeta32 = MMC_CDR(tmpMeta30);
  if (!listEmpty(tmpMeta32)) MMC_THROW_INTERNAL();
  _arg1 = tmpMeta29;
  _arg2 = tmpMeta31;

  if(_basic)
  {
    _exp = (omc_NFType_isClock(threadData, omc_NFExpression_typeOf(threadData, _arg2))?omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg1):_exp);
  }
  else
  {
    _exp = omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg1);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
modelica_metatype boxptr_NBPartitioning_replaceClockedFunctions_replaceSample(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _call, modelica_metatype _basic)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_basic);
  _exp = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, __omcQ_24in_5Fexp, _call, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_replaceClockedFunctions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _held_crefs)
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
      modelica_metatype _arg = NULL;
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _arg has no default value.
      // _call has no default value.
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
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT50, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 7; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (6 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT52), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 1 /* true */);
                  goto tmp9_done;
                }
                case 1: {
                  if (9 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 2: {
                  if (11 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 3: {
                  if (11 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 4: {
                  if (10 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctions_replaceSample(threadData, _exp, _call, 0 /* false */);
                  goto tmp9_done;
                }
                case 5: {
                  modelica_metatype tmpMeta12;
                  if (4 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 2; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta17 = MMC_CAR(tmp15_1);
                          tmpMeta18 = MMC_CDR(tmp15_1);
                          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,6,2) == 0) goto tmp14_end;
                          if (!listEmpty(tmpMeta18)) goto tmp14_end;
                          _arg = tmpMeta17;
                          /* Pattern matching succeeded */
                          omc_UnorderedSet_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_arg), 3))), _held_crefs);
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta19;
                          modelica_metatype tmpMeta20;
                          modelica_metatype tmpMeta21;
                          
                          /* Pattern matching succeeded */
                          tmpMeta20 = stringAppend(_OMC_LIT51,omc_NFExpression_toString(threadData, _exp));
                          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT50);
                          tmpMeta19 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta19);
                          goto goto_13;
                          goto tmp14_done;
                        }
                        }
                        goto tmp14_end;
                        tmp14_end: ;
                      }
                      goto goto_13;
                      goto_13:;
                      goto goto_8;
                      goto tmp14_done;
                      tmp14_done:;
                    }
                  }
                  _arg = tmpMeta12;
                  tmpMeta7 = omc_NBPartitioning_replaceClockedFunctionExp(threadData, _arg);
                  goto tmp9_done;
                }
                case 6: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
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

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_addCrefToSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _set)
{
  modelica_metatype _var_ptr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var_ptr = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT59);
  if(omc_NBVariable_isState(threadData, _var_ptr))
  {
    omc_UnorderedSet_add(threadData, omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarDer, 0 /* false */), _set);
  }
  else
  {
    if(omc_NBVariable_isPrevious(threadData, _var_ptr))
    {
      omc_UnorderedSet_add(threadData, omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarPre, 0 /* false */), _set);
    }
    else
    {
      omc_UnorderedSet_add(threadData, _cref, _set);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

static modelica_metatype closure0_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure1_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure2_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_collectPartitioningCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _var_crefs)
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
      modelica_metatype _arg = NULL;
      modelica_metatype _children = NULL;
      modelica_metatype _stripped = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      // _arg has no default value.
      // _children has no default value.
      // _stripped has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_string tmp10_1;
            tmp10_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT50, 1 /* true */, 0 /* false */);
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 8; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  if (9 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 1: {
                  if (11 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 2: {
                  if (11 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 3: {
                  if (10 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 4: {
                  if (8 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 5: {
                  if (4 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  tmpMeta7 = _exp;
                  goto tmp9_done;
                }
                case 6: {
                  modelica_metatype tmpMeta12;
                  modelica_metatype tmpMeta30;
                  if (6 != MMC_STRLEN(tmp10_1) || strcmp(MMC_STRINGDATA(_OMC_LIT52), MMC_STRINGDATA(tmp10_1)) != 0) goto tmp9_end;
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFCall_arguments(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 3; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          modelica_metatype tmpMeta18;
                          modelica_metatype tmpMeta19;
                          modelica_metatype tmpMeta20;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta17 = MMC_CAR(tmp15_1);
                          tmpMeta18 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta18)) goto tmp14_end;
                          tmpMeta19 = MMC_CAR(tmpMeta18);
                          tmpMeta20 = MMC_CDR(tmpMeta18);
                          if (!listEmpty(tmpMeta20)) goto tmp14_end;
                          _arg = tmpMeta19;
                          /* Pattern matching succeeded */
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta21;
                          modelica_metatype tmpMeta22;
                          modelica_metatype tmpMeta23;
                          modelica_metatype tmpMeta24;
                          modelica_metatype tmpMeta25;
                          modelica_metatype tmpMeta26;
                          if (listEmpty(tmp15_1)) goto tmp14_end;
                          tmpMeta21 = MMC_CAR(tmp15_1);
                          tmpMeta22 = MMC_CDR(tmp15_1);
                          if (listEmpty(tmpMeta22)) goto tmp14_end;
                          tmpMeta23 = MMC_CAR(tmpMeta22);
                          tmpMeta24 = MMC_CDR(tmpMeta22);
                          if (listEmpty(tmpMeta24)) goto tmp14_end;
                          tmpMeta25 = MMC_CAR(tmpMeta24);
                          tmpMeta26 = MMC_CDR(tmpMeta24);
                          if (!listEmpty(tmpMeta26)) goto tmp14_end;
                          _arg = tmpMeta25;
                          /* Pattern matching succeeded */
                          tmpMeta12 = _arg;
                          goto tmp14_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta27;
                          modelica_metatype tmpMeta28;
                          modelica_metatype tmpMeta29;
                          
                          /* Pattern matching succeeded */
                          tmpMeta28 = stringAppend(_OMC_LIT60,omc_NFExpression_toString(threadData, _exp));
                          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT50);
                          tmpMeta27 = mmc_mk_cons(tmpMeta29, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta27);
                          goto goto_13;
                          goto tmp14_done;
                        }
                        }
                        goto tmp14_end;
                        tmp14_end: ;
                      }
                      goto goto_13;
                      goto_13:;
                      goto goto_8;
                      goto tmp14_done;
                      tmp14_done:;
                    }
                  }
                  _arg = tmpMeta12;
                  tmpMeta30 = mmc_mk_box1(0, _var_crefs);
                  tmpMeta7 = omc_NFExpression_mapShallow(threadData, _arg, (modelica_fnptr) mmc_mk_box2(0,closure0_NBPartitioning_collectPartitioningCrefs,tmpMeta30));
                  goto tmp9_done;
                }
                case 7: {
                  modelica_metatype tmpMeta31;
                  
                  /* Pattern matching succeeded */
                  tmpMeta31 = mmc_mk_box1(0, _var_crefs);
                  tmpMeta7 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure1_NBPartitioning_collectPartitioningCrefs,tmpMeta31));
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
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NBVariable_isClock(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT64)))) goto tmp3_end;
          { /* match expression */
            modelica_metatype tmp35_1;
            tmp35_1 = omc_NBVariable_getVar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT62);
            {
              modelica_metatype _children_vars = NULL;
              volatile mmc_switch_type tmp35;
              int tmp36;
              // _children_vars has no default value.
              tmp35 = 0;
              for (; tmp35 < 2; tmp35++) {
                switch (MMC_SWITCH_CAST(tmp35)) {
                case 0: {
                  modelica_metatype tmpMeta37;
                  modelica_metatype tmpMeta38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp35_1,0,10) == 0) goto tmp34_end;
                  tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp35_1), 11));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,0,7) == 0) goto tmp34_end;
                  tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta37), 2));
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,14,3) == 0) goto tmp34_end;
                  tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
                  
                  _children_vars = tmpMeta39;
                  /* Pattern matching succeeded */
                  {
                    modelica_metatype __omcQ_24tmpVar25;
                    modelica_metatype* tmp41;
                    modelica_metatype tmpMeta42;
                    modelica_metatype __omcQ_24tmpVar24;
                    modelica_integer tmp43;
                    modelica_metatype _var_loopVar = 0;
                    modelica_metatype _var;
                    _var_loopVar = _children_vars;
                    tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
                    __omcQ_24tmpVar25 = tmpMeta42; /* defaultValue */
                    tmp41 = &__omcQ_24tmpVar25;
                    while(1) {
                      tmp43 = 1;
                      if (!listEmpty(_var_loopVar)) {
                        _var = MMC_CAR(_var_loopVar);
                        _var_loopVar = MMC_CDR(_var_loopVar);
                        tmp43--;
                      }
                      if (tmp43 == 0) {
                        __omcQ_24tmpVar24 = omc_NBVariable_getVarName(threadData, _var);
                        *tmp41 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                        tmp41 = &MMC_CDR(*tmp41);
                      } else if (tmp43 == 1) {
                        break;
                      } else {
                        goto goto_33;
                      }
                    }
                    *tmp41 = mmc_mk_nil();
                    tmpMeta40 = __omcQ_24tmpVar25;
                  }
                  tmpMeta32 = tmpMeta40;
                  goto tmp34_done;
                }
                case 1: {
                  modelica_metatype tmpMeta44;
                  
                  /* Pattern matching succeeded */
                  tmpMeta44 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta32 = tmpMeta44;
                  goto tmp34_done;
                }
                }
                goto tmp34_end;
                tmp34_end: ;
              }
              goto goto_33;
              goto_33:;
              goto goto_2;
              goto tmp34_done;
              tmp34_done:;
            }
          }
          _children = tmpMeta32;

          {
            modelica_metatype _child;
            for (tmpMeta45 = _children; !listEmpty(tmpMeta45); tmpMeta45=MMC_CDR(tmpMeta45))
            {
              _child = MMC_CAR(tmpMeta45);
              _stripped = omc_NFComponentRef_stripSubscriptsAll(threadData, _child);

              if((!omc_NBVariable_checkCref(threadData, _stripped, boxvar_NBVariable_isParamOrConst, _OMC_LIT63)))
              {
                omc_NBPartitioning_addCrefToSet(threadData, _stripped, _var_crefs);
              }
            }
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta47;
          
          /* Pattern matching succeeded */
          tmpMeta47 = mmc_mk_box1(0, _var_crefs);
          tmpMeta1 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NBPartitioning_collectPartitioningCrefs,tmpMeta47));
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortClockedPartitions(threadData_t *threadData, modelica_metatype _unsorted)
{
  modelica_metatype _sorted = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _n;
  modelica_metatype _partitions = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _matching = NULL;
  modelica_metatype _index_map = NULL;
  modelica_metatype _partition_order = NULL;
  modelica_integer _j;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta67;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _sorted = tmpMeta1;
  _n = listLength(_unsorted);
  _partitions = listArray(listReverse(_unsorted));
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _m = arrayCreate(_n, tmpMeta2);
  _matching = omc_NBMatching_trivial(threadData, _n);
  _index_map = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  // _partition_order has no default value.
  // _j has no default value.
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _n;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      omc_UnorderedMap_add(threadData, omc_NBPartition_Partition_getClocks(threadData, arrayGet(_partitions,_i) /* DAE.ASUB */, NULL, NULL), mmc_mk_integer(_i), _index_map);
    }
  }

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = _n;
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp9, tmp11); _i += tmp10)
    {
      {
        modelica_metatype _clock;
        for (tmpMeta6 = omc_UnorderedSet_toList(threadData, omc_NBPartition_Partition_getClockDependencies(threadData, arrayGet(_partitions,_i) /* DAE.ASUB */)); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _clock = MMC_CAR(tmpMeta6);
          _j = mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _clock, _index_map, _OMC_LIT65));

          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_j), arrayGet(_m,_i) /* DAE.ASUB */);
          arrayUpdate(_m,_i,tmpMeta7);
        }
      }
    }
  }

  _partition_order = omc_NBSorting_tarjanScalar(threadData, _m, _matching);

  {
    modelica_metatype _comp;
    for (tmpMeta12 = listReverse(_partition_order); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _comp = MMC_CAR(tmpMeta12);
      { /* match expression */
        modelica_metatype tmp16_1;
        tmp16_1 = _comp;
        {
          modelica_metatype _var_clock_map = NULL;
          modelica_metatype _part = NULL;
          modelica_metatype _sub_comps = NULL;
          modelica_metatype _sub_comp_vars = NULL;
          modelica_metatype _sub_comp_eqns = NULL;
          modelica_metatype _collector = NULL;
          modelica_metatype _var_clocks = NULL;
          modelica_metatype _baseClock = NULL;
          modelica_metatype _vars = NULL;
          modelica_metatype _eqns = NULL;
          modelica_metatype _clock = NULL;
          modelica_metatype _new_clock = NULL;
          volatile mmc_switch_type tmp16;
          int tmp17;
          // _var_clock_map has no default value.
          // _part has no default value.
          // _sub_comps has no default value.
          // _sub_comp_vars has no default value.
          // _sub_comp_eqns has no default value.
          // _collector has no default value.
          // _var_clocks has no default value.
          // _baseClock has no default value.
          // _vars has no default value.
          // _eqns has no default value.
          // _clock has no default value.
          // _new_clock has no default value.
          tmp16 = 0;
          for (; tmp16 < 2; tmp16++) {
            switch (MMC_SWITCH_CAST(tmp16)) {
            case 0: {
              modelica_metatype tmpMeta18;
              modelica_metatype tmpMeta19;
              modelica_integer tmp20;
              modelica_metatype tmpMeta21;
              if (listEmpty(tmp16_1)) goto tmp15_end;
              tmpMeta18 = MMC_CAR(tmp16_1);
              tmpMeta19 = MMC_CDR(tmp16_1);
              tmp20 = mmc_unbox_integer(tmpMeta18);
              if (!listEmpty(tmpMeta19)) goto tmp15_end;
              _j = tmp20  /* pattern as ty=Integer */;
              /* Pattern matching succeeded */
              tmpMeta21 = mmc_mk_cons(arrayGet(_partitions,_j) /* DAE.ASUB */, _sorted);
              tmpMeta13 = tmpMeta21;
              goto tmp15_done;
            }
            case 1: {
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
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
              modelica_metatype tmpMeta58;
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_metatype tmpMeta61;
              modelica_metatype tmpMeta62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype tmpMeta65;
              modelica_metatype tmpMeta66;
              
              /* Pattern matching succeeded */
              _var_clock_map = omc_UnorderedMap_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 1));

              {
                modelica_metatype _i;
                for (tmpMeta22 = _comp; !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
                {
                  _i = MMC_CAR(tmpMeta22);
                  _part = arrayGet(_partitions,mmc_unbox_integer(_i)) /* DAE.ASUB */;

                  {
                    modelica_metatype _var;
                    for (tmpMeta23 = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)))); !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
                    {
                      _var = MMC_CAR(tmpMeta23);
                      omc_UnorderedMap_add(threadData, _var, omc_NBPartition_Partition_getClocks(threadData, _part, NULL, NULL), _var_clock_map);
                    }
                  }
                }
              }

              /* Pattern-matching assignment */
              tmpMeta26 = _comp;
              if (listEmpty(tmpMeta26)) goto goto_14;
              tmpMeta27 = MMC_CAR(tmpMeta26);
              tmpMeta28 = MMC_CDR(tmpMeta26);
              tmp29 = mmc_unbox_integer(tmpMeta27);
              _j = tmp29  /* pattern as ty=Integer */;
              _comp = tmpMeta28;

              _part = arrayGet(_partitions,_j) /* DAE.ASUB */;

              {
                modelica_metatype _i;
                for (tmpMeta30 = _comp; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
                {
                  _i = MMC_CAR(tmpMeta30);
                  _part = omc_NBPartition_Partition_merge(threadData, _part, arrayGet(_partitions,mmc_unbox_integer(_i)) /* DAE.ASUB */, 0 /* false */);
                }
              }

              omc_NBPartition_Partition_getClocks(threadData, _part ,&_baseClock ,NULL);

              omc_NBCausalize_simple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), omc_NBPartition_Partition_getKind(threadData, _part), 2, _OMC_LIT66 ,&_sub_comps);

              _collector = mmc_mk_none();

              {
                modelica_metatype _sub_comp;
                for (tmpMeta32 = listReverse(_sub_comps); !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
                {
                  _sub_comp = MMC_CAR(tmpMeta32);
                  _sub_comp_vars = omc_NBStrongComponent_getVariables(threadData, _sub_comp);

                  _sub_comp_eqns = omc_NBStrongComponent_getEquations(threadData, _sub_comp);

                  _var_clocks = omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13));

                  {
                    modelica_metatype _var;
                    for (tmpMeta33 = _sub_comp_vars; !listEmpty(tmpMeta33); tmpMeta33=MMC_CDR(tmpMeta33))
                    {
                      _var = MMC_CAR(tmpMeta33);
                      omc_UnorderedSet_add(threadData, omc_UnorderedMap_getSafe(threadData, _var, _var_clock_map, _OMC_LIT67), _var_clocks);
                    }
                  }

                  { /* match expression */
                    modelica_metatype tmp38_1;modelica_metatype tmp38_2;
                    tmp38_1 = _collector;
                    tmp38_2 = omc_UnorderedSet_toList(threadData, _var_clocks);
                    {
                      volatile mmc_switch_type tmp38;
                      int tmp39;
                      tmp38 = 0;
                      for (; tmp38 < 3; tmp38++) {
                        switch (MMC_SWITCH_CAST(tmp38)) {
                        case 0: {
                          modelica_metatype tmpMeta40;
                          modelica_metatype tmpMeta41;
                          modelica_metatype tmpMeta42;
                          if (!optionNone(tmp38_1)) goto tmp37_end;
                          if (listEmpty(tmp38_2)) goto tmp37_end;
                          tmpMeta40 = MMC_CAR(tmp38_2);
                          tmpMeta41 = MMC_CDR(tmp38_2);
                          if (!listEmpty(tmpMeta41)) goto tmp37_end;
                          _new_clock = tmpMeta40;
                          /* Pattern matching succeeded */
                          tmpMeta42 = mmc_mk_box3(0, _sub_comp_vars, _sub_comp_eqns, _new_clock);
                          tmpMeta35 = mmc_mk_some(tmpMeta42);
                          goto tmp37_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta43;
                          modelica_metatype tmpMeta44;
                          modelica_metatype tmpMeta45;
                          modelica_metatype tmpMeta46;
                          modelica_metatype tmpMeta47;
                          modelica_metatype tmpMeta48;
                          modelica_metatype tmpMeta49;
                          modelica_metatype tmpMeta50;
                          modelica_metatype tmpMeta51;
                          modelica_metatype tmpMeta52;
                          modelica_metatype tmpMeta53;
                          if (optionNone(tmp38_1)) goto tmp37_end;
                          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp38_1), 1));
                          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
                          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
                          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 3));
                          if (listEmpty(tmp38_2)) goto tmp37_end;
                          tmpMeta47 = MMC_CAR(tmp38_2);
                          tmpMeta48 = MMC_CDR(tmp38_2);
                          if (!listEmpty(tmpMeta48)) goto tmp37_end;
                          _vars = tmpMeta44;
                          _eqns = tmpMeta45;
                          _clock = tmpMeta46;
                          _new_clock = tmpMeta47;
                          /* Pattern matching succeeded */
                          if(omc_NBPartitioning_BClock_isEqual(threadData, _clock, _new_clock))
                          {
                            tmpMeta49 = mmc_mk_box3(0, listAppend(_sub_comp_vars, _vars), listAppend(_sub_comp_eqns, _eqns), _clock);
                            _collector = mmc_mk_some(tmpMeta49);
                          }
                          else
                          {
                            tmpMeta50 = mmc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, _baseClock, omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13)), mmc_mk_boolean(0 /* false */));
                            tmpMeta51 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(((modelica_integer) 0)), tmpMeta50, omc_NBVariable_VariablePointers_fromList(threadData, _vars, 0 /* false */), mmc_mk_none(), omc_NBEquation_EquationPointers_fromList(threadData, _eqns), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
                            _part = tmpMeta51;

                            tmpMeta52 = mmc_mk_cons(_part, _sorted);
                            _sorted = tmpMeta52;

                            tmpMeta53 = mmc_mk_box3(0, _sub_comp_vars, _sub_comp_eqns, _new_clock);
                            _collector = mmc_mk_some(tmpMeta53);
                          }
                          tmpMeta35 = _collector;
                          goto tmp37_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta54;
                          modelica_metatype tmpMeta55;
                          modelica_metatype tmpMeta56;
                          modelica_metatype tmpMeta57;
                          
                          /* Pattern matching succeeded */
                          tmpMeta55 = stringAppend(_OMC_LIT68,omc_List_toString(threadData, omc_UnorderedSet_toList(threadData, _var_clocks), boxvar_NBPartitioning_BClock_toString, _OMC_LIT9, _OMC_LIT69, _OMC_LIT70, _OMC_LIT71, 1 /* true */, ((modelica_integer) 0)));
                          tmpMeta56 = stringAppend(tmpMeta55,_OMC_LIT72);
                          tmpMeta57 = stringAppend(tmpMeta56,omc_NBStrongComponent_toString(threadData, _sub_comp, ((modelica_integer) -1)));
                          tmpMeta54 = mmc_mk_cons(tmpMeta57, MMC_REFSTRUCTLIT(mmc_nil));
                          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta54);
                          goto goto_36;
                          goto tmp37_done;
                        }
                        }
                        goto tmp37_end;
                        tmp37_end: ;
                      }
                      goto goto_36;
                      goto_36:;
                      goto goto_14;
                      goto tmp37_done;
                      tmp37_done:;
                    }
                  }
                  _collector = tmpMeta35;
                }
              }

              if(isSome(_collector))
              {
                /* Pattern-matching assignment */
                tmpMeta59 = _collector;
                if (optionNone(tmpMeta59)) goto goto_14;
                tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 1));
                tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 1));
                tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
                tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 3));
                _vars = tmpMeta61;
                _eqns = tmpMeta62;
                _clock = tmpMeta63;

                tmpMeta64 = mmc_mk_box5(4, &NBPartition_Association_CLOCKED__desc, _clock, _baseClock, omc_UnorderedSet_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 13)), mmc_mk_boolean(0 /* false */));
                tmpMeta65 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(((modelica_integer) 0)), tmpMeta64, omc_NBVariable_VariablePointers_fromList(threadData, _vars, 0 /* false */), mmc_mk_none(), omc_NBEquation_EquationPointers_fromList(threadData, _eqns), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
                _part = tmpMeta65;

                tmpMeta66 = mmc_mk_cons(_part, _sorted);
                _sorted = tmpMeta66;
              }
              tmpMeta13 = _sorted;
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
      _sorted = tmpMeta13;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sorted;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_sortAndMergeClockedPartitions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpartitions, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _clocked_partitions = NULL;
  modelica_metatype _new_clocked = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _clock_collector = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock_opt = NULL;
  modelica_metatype _subClockMap = NULL;
  modelica_metatype _new_part = NULL;
  modelica_metatype _index = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _partitions = __omcQ_24in_5Fpartitions;
  // _clocked_partitions has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _new_clocked = tmpMeta1;
  _clock_collector = omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1));
  // _clock has no default value.
  // _baseClock has no default value.
  // _subClock has no default value.
  // _baseClock_opt has no default value.
  // _subClockMap has no default value.
  // _new_part has no default value.
  _index = omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 1)));
  _clocked_partitions = omc_List_splitOnTrue(threadData, _partitions, boxvar_NBPartition_Partition_isClocked ,&_partitions);

  {
    modelica_metatype _baseClock;
    for (tmpMeta2 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _baseClock = MMC_CAR(tmpMeta2);
      omc_UnorderedMap_add(threadData, _baseClock, omc_UnorderedMap_new(threadData, boxvar_NBPartitioning_BClock_hash, boxvar_NBPartitioning_BClock_isEqual, ((modelica_integer) 1)), _clock_collector);
    }
  }

  {
    modelica_metatype _partition;
    for (tmpMeta4 = _clocked_partitions; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _partition = MMC_CAR(tmpMeta4);
      _clock = omc_NBPartition_Partition_getClocks(threadData, _partition ,&_baseClock_opt ,NULL);

      if(isSome(_baseClock_opt))
      {
        /* Pattern-matching assignment */
        tmpMeta5 = _baseClock_opt;
        if (optionNone(tmpMeta5)) MMC_THROW_INTERNAL();
        tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
        _baseClock = tmpMeta6;

        _subClock = _clock;
      }
      else
      {
        _baseClock = _clock;

        _subClock = _OMC_LIT75;
      }

      _subClockMap = omc_UnorderedMap_getSafe(threadData, _baseClock, _clock_collector, _OMC_LIT76);

      { /* match expression */
        modelica_metatype tmp10_1;
        tmp10_1 = omc_UnorderedMap_get(threadData, _subClock, _subClockMap);
        {
          volatile mmc_switch_type tmp10;
          int tmp11;
          tmp10 = 0;
          for (; tmp10 < 2; tmp10++) {
            switch (MMC_SWITCH_CAST(tmp10)) {
            case 0: {
              modelica_metatype tmpMeta12;
              if (optionNone(tmp10_1)) goto tmp9_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
              _new_part = tmpMeta12;
              /* Pattern matching succeeded */
              tmpMeta7 = omc_NBPartition_Partition_merge(threadData, _new_part, _partition, 1 /* true */);
              goto tmp9_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta7 = _partition;
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
      _new_part = tmpMeta7;

      omc_UnorderedMap_add(threadData, _subClock, _new_part, _subClockMap);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta14 = omc_UnorderedMap_toList(threadData, _clock_collector); !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
    {
      _tpl = MMC_CAR(tmpMeta14);
      /* Pattern-matching assignment */
      tmpMeta15 = _tpl;
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
      _baseClock = tmpMeta16;
      _subClockMap = tmpMeta17;

      tmpMeta18 = mmc_mk_cons(omc_NBPartitioning_sortClockedPartitions(threadData, omc_UnorderedMap_valueList(threadData, _subClockMap)), _new_clocked);
      _new_clocked = tmpMeta18;
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype tmpMeta21;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp22;
    modelica_metatype _partition_loopVar = 0;
    modelica_metatype tmpMeta23;
    modelica_metatype _partition;
    tmpMeta23 = mmc_mk_cons(_partitions, _new_clocked);
    _partition_loopVar = listReverse(tmpMeta23);
    tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta21; /* defaultValue */
    while(1) {
      tmp22 = 1;
      if (!listEmpty(_partition_loopVar)) {
        _partition = MMC_CAR(_partition_loopVar);
        _partition_loopVar = MMC_CDR(_partition_loopVar);
        tmp22--;
      }
      if (tmp22 == 0) {
        __omcQ_24tmpVar26 = _partition;
        __omcQ_24tmpVar27 = listAppend(__omcQ_24tmpVar26, __omcQ_24tmpVar27);
      } else if (tmp22 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmpMeta20 = __omcQ_24tmpVar27;
  }
  _partitions = tmpMeta20;

  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp25;
    modelica_metatype tmpMeta26;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp27;
    modelica_metatype _partition_loopVar = 0;
    modelica_metatype _partition;
    _partition_loopVar = _partitions;
    tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta26; /* defaultValue */
    tmp25 = &__omcQ_24tmpVar29;
    while(1) {
      tmp27 = 1;
      if (!listEmpty(_partition_loopVar)) {
        _partition = MMC_CAR(_partition_loopVar);
        _partition_loopVar = MMC_CDR(_partition_loopVar);
        tmp27--;
      }
      if (tmp27 == 0) {
        __omcQ_24tmpVar28 = omc_NBPartition_Partition_setIndex(threadData, _partition, _index);
        *tmp25 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp25 = &MMC_CDR(*tmp25);
      } else if (tmp27 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp25 = mmc_mk_nil();
    tmpMeta24 = __omcQ_24tmpVar29;
  }
  _partitions = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _partitions;
}

static modelica_metatype closure3_NBPartitioning_collectPartitioningCrefs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype var_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_collectPartitioningCrefs(thData, $in_exp, var_crefs);
}static modelica_metatype closure4_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure5_NBPartitioning_Cluster_addElement(threadData_t *thData, modelica_metatype closure, modelica_metatype cluster_opt)
{
  modelica_metatype cref = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addElement(thData, cluster_opt, cref, ty);
}static modelica_metatype closure6_NBPartition_Partition_toString(threadData_t *thData, modelica_metatype closure, modelica_metatype partition)
{
  modelica_metatype level = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartition_Partition_toString(thData, partition, level);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_metatype _eqn_dsf = NULL;
  modelica_metatype _var_map = NULL;
  modelica_metatype _eqn = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _var_crefs = NULL;
  modelica_metatype _var_indices = NULL;
  modelica_integer _part_idx;
  modelica_metatype _cluster_map = NULL;
  modelica_metatype _name_cref = NULL;
  modelica_metatype _marked_vars = NULL;
  modelica_metatype _single_vars = NULL;
  modelica_metatype _held_crefs = NULL;
  modelica_metatype _clock_map = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
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
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta54;
  modelica_metatype tmpMeta55;
  modelica_metatype tmpMeta56;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  _eqn_dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, omc_ExpandableArray_getLastUsedIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 3)))));
  _var_map = arrayCreate(omc_ExpandableArray_getLastUsedIndex(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 3)))), mmc_mk_integer(((modelica_integer) -1)));
  // _eqn has no default value.
  // _var has no default value.
  // _var_crefs has no default value.
  // _var_indices has no default value.
  // _part_idx has no default value.
  _cluster_map = omc_UnorderedMap_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 1));
  // _name_cref has no default value.
  // _marked_vars has no default value.
  // _single_vars has no default value.
  _held_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));
  _clock_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  {
    modelica_metatype _eq_idx;
    for (tmpMeta1 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clocked), 2)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq_idx = MMC_CAR(tmpMeta1);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _clocked, mmc_unbox_integer(_eq_idx));

        omc_NBPartitioning_BClock_add(threadData, omc_Pointer_access(threadData, _eqn), _info);
      }
    }
  }

  {
    modelica_metatype _eq_idx;
    for (tmpMeta3 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eq_idx = MMC_CAR(tmpMeta3);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, mmc_unbox_integer(_eq_idx));

        omc_NBPartitioning_BClock_add(threadData, omc_Pointer_access(threadData, _eqn), _info);

        _var_crefs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

        tmpMeta4 = mmc_mk_box1(0, _var_crefs);
        omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, _eqn), (modelica_fnptr) mmc_mk_box2(0,closure3_NBPartitioning_collectPartitioningCrefs,tmpMeta4), mmc_mk_none(), boxvar_NFExpression_fakeMap);

        {
          modelica_metatype __omcQ_24tmpVar31;
          modelica_metatype* tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype __omcQ_24tmpVar30;
          modelica_integer tmp8;
          modelica_metatype _cref_loopVar = 0;
          modelica_metatype _cref;
          _cref_loopVar = omc_UnorderedSet_toList(threadData, _var_crefs);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar31 = tmpMeta7; /* defaultValue */
          tmp6 = &__omcQ_24tmpVar31;
          while(1) {
            tmp8 = 1;
            if (!listEmpty(_cref_loopVar)) {
              _cref = MMC_CAR(_cref_loopVar);
              _cref_loopVar = MMC_CDR(_cref_loopVar);
              tmp8--;
            }
            if (tmp8 == 0) {
              __omcQ_24tmpVar30 = mmc_mk_integer(omc_NBVariable_VariablePointers_getVarIndex(threadData, _variables, _cref));
              *tmp6 = mmc_mk_cons(__omcQ_24tmpVar30,0);
              tmp6 = &MMC_CDR(*tmp6);
            } else if (tmp8 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp6 = mmc_mk_nil();
          tmpMeta5 = __omcQ_24tmpVar31;
        }
        _var_indices = tmpMeta5;

        {
          modelica_metatype __omcQ_24tmpVar33;
          modelica_metatype* tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype __omcQ_24tmpVar32;
          modelica_integer tmp12;
          modelica_metatype _i_loopVar = 0;
          modelica_metatype _i;
          _i_loopVar = _var_indices;
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar33 = tmpMeta11; /* defaultValue */
          tmp10 = &__omcQ_24tmpVar33;
          while(1) {
            tmp12 = 1;
            while (!listEmpty(_i_loopVar)) {
              _i = MMC_CAR(_i_loopVar);
              _i_loopVar = MMC_CDR(_i_loopVar);
              if ((mmc_unbox_integer(_i) > ((modelica_integer) 0))) {
                tmp12--;
                break;
              }
            }
            if (tmp12 == 0) {
              __omcQ_24tmpVar32 = _i;
              *tmp10 = mmc_mk_cons(__omcQ_24tmpVar32,0);
              tmp10 = &MMC_CDR(*tmp10);
            } else if (tmp12 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp10 = mmc_mk_nil();
          tmpMeta9 = __omcQ_24tmpVar33;
        }
        _var_indices = tmpMeta9;

        {
          modelica_metatype __omcQ_24tmpVar35;
          modelica_metatype* tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype __omcQ_24tmpVar34;
          modelica_integer tmp17;
          modelica_metatype _j_loopVar = 0;
          modelica_metatype _j;
          _j_loopVar = _var_indices;
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar35 = tmpMeta16; /* defaultValue */
          tmp15 = &__omcQ_24tmpVar35;
          while(1) {
            tmp17 = 1;
            while (!listEmpty(_j_loopVar)) {
              _j = MMC_CAR(_j_loopVar);
              _j_loopVar = MMC_CDR(_j_loopVar);
              if ((mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_j)) /* DAE.ASUB */) > ((modelica_integer) 0))) {
                tmp17--;
                break;
              }
            }
            if (tmp17 == 0) {
              __omcQ_24tmpVar34 = arrayGet(_var_map,mmc_unbox_integer(_j)) /* DAE.ASUB */;
              *tmp15 = mmc_mk_cons(__omcQ_24tmpVar34,0);
              tmp15 = &MMC_CDR(*tmp15);
            } else if (tmp17 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp15 = mmc_mk_nil();
          tmpMeta14 = __omcQ_24tmpVar35;
        }
        tmpMeta13 = mmc_mk_cons(_eq_idx, tmpMeta14);
        _part_idx = omc_NBPartitioning_DisjointSetForest_unite(threadData, _eqn_dsf, tmpMeta13);

        {
          modelica_metatype _i;
          for (tmpMeta18 = _var_indices; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
          {
            _i = MMC_CAR(tmpMeta18);
            arrayUpdate(_var_map,mmc_unbox_integer(_i),mmc_mk_integer(_part_idx));
          }
        }
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar37;
    modelica_metatype* tmp22;
    modelica_metatype tmpMeta23;
    modelica_metatype __omcQ_24tmpVar36;
    modelica_integer tmp24;
    modelica_metatype _var_idx_loopVar = 0;
    modelica_metatype _var_idx;
    _var_idx_loopVar = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2))));
    tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar37 = tmpMeta23; /* defaultValue */
    tmp22 = &__omcQ_24tmpVar37;
    while(1) {
      tmp24 = 1;
      if (!listEmpty(_var_idx_loopVar)) {
        _var_idx = MMC_CAR(_var_idx_loopVar);
        _var_idx_loopVar = MMC_CDR(_var_idx_loopVar);
        tmp24--;
      }
      if (tmp24 == 0) {
        __omcQ_24tmpVar36 = mmc_mk_boolean((mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_var_idx)) /* DAE.ASUB */) < ((modelica_integer) 0)));
        *tmp22 = mmc_mk_cons(__omcQ_24tmpVar36,0);
        tmp22 = &MMC_CDR(*tmp22);
      } else if (tmp24 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp22 = mmc_mk_nil();
    tmpMeta21 = __omcQ_24tmpVar37;
  }
  _marked_vars = listArray(tmpMeta21);

  {
    modelica_metatype __omcQ_24tmpVar39;
    modelica_metatype* tmp26;
    modelica_metatype tmpMeta27;
    modelica_metatype __omcQ_24tmpVar38;
    modelica_integer tmp28;
    modelica_metatype _var_ptr_loopVar = 0;
    modelica_metatype _var_ptr;
    _var_ptr_loopVar = omc_NBVariable_VariablePointers_getMarkedVars(threadData, _variables, _marked_vars);
    tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar39 = tmpMeta27; /* defaultValue */
    tmp26 = &__omcQ_24tmpVar39;
    while(1) {
      tmp28 = 1;
      if (!listEmpty(_var_ptr_loopVar)) {
        _var_ptr = MMC_CAR(_var_ptr_loopVar);
        _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
        tmp28--;
      }
      if (tmp28 == 0) {
        __omcQ_24tmpVar38 = _var_ptr;
        *tmp26 = mmc_mk_cons(__omcQ_24tmpVar38,0);
        tmp26 = &MMC_CDR(*tmp26);
      } else if (tmp28 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp26 = mmc_mk_nil();
    tmpMeta25 = __omcQ_24tmpVar39;
  }
  _single_vars = tmpMeta25;

  if((!listEmpty(_single_vars)))
  {
    tmpMeta30 = stringAppend(_OMC_LIT77,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
    tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT78);
    {
      modelica_metatype __omcQ_24tmpVar43;
      modelica_metatype* tmp33;
      modelica_metatype tmpMeta34;
      modelica_string __omcQ_24tmpVar42;
      modelica_integer tmp35;
      modelica_metatype _var_ptr_loopVar = 0;
      modelica_metatype _var_ptr;
      _var_ptr_loopVar = _single_vars;
      tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar43 = tmpMeta34; /* defaultValue */
      tmp33 = &__omcQ_24tmpVar43;
      while(1) {
        tmp35 = 1;
        if (!listEmpty(_var_ptr_loopVar)) {
          _var_ptr = MMC_CAR(_var_ptr_loopVar);
          _var_ptr_loopVar = MMC_CDR(_var_ptr_loopVar);
          tmp35--;
        }
        if (tmp35 == 0) {
          __omcQ_24tmpVar42 = omc_NBVariable_toString(threadData, omc_Pointer_access(threadData, _var_ptr), _OMC_LIT9);
          *tmp33 = mmc_mk_cons(__omcQ_24tmpVar42,0);
          tmp33 = &MMC_CDR(*tmp33);
        } else if (tmp35 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp33 = mmc_mk_nil();
      tmpMeta32 = __omcQ_24tmpVar43;
    }
    tmpMeta36 = stringAppend(tmpMeta31,stringDelimitList(tmpMeta32, _OMC_LIT79));
    tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT71);
    tmpMeta29 = mmc_mk_cons(tmpMeta37, MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta29);

    MMC_THROW_INTERNAL();
  }

  {
    modelica_metatype _eq_idx;
    for (tmpMeta38 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equations), 2)))); !listEmpty(tmpMeta38); tmpMeta38=MMC_CDR(tmpMeta38))
    {
      _eq_idx = MMC_CAR(tmpMeta38);
      if((mmc_unbox_integer(_eq_idx) > ((modelica_integer) 0)))
      {
        _eqn = omc_NBEquation_EquationPointers_getEqnAt(threadData, _equations, mmc_unbox_integer(_eq_idx));

        _name_cref = omc_NBEquation_Equation_getEqnName(threadData, _eqn);

        _part_idx = omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, mmc_unbox_integer(_eq_idx));

        tmpMeta39 = mmc_mk_box2(0, _name_cref, mmc_mk_integer(1));
        omc_UnorderedMap_addUpdate(threadData, mmc_mk_integer(_part_idx), (modelica_fnptr) mmc_mk_box2(0,closure4_NBPartitioning_Cluster_addElement,tmpMeta39), _cluster_map);
      }
    }
  }

  {
    modelica_metatype _var_idx;
    for (tmpMeta41 = omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_variables), 2)))); !listEmpty(tmpMeta41); tmpMeta41=MMC_CDR(tmpMeta41))
    {
      _var_idx = MMC_CAR(tmpMeta41);
      if((mmc_unbox_integer(_var_idx) > ((modelica_integer) 0)))
      {
        _var = omc_NBVariable_VariablePointers_getVarAt(threadData, _variables, mmc_unbox_integer(_var_idx));

        _name_cref = omc_NBVariable_getVarName(threadData, _var);

        _part_idx = omc_NBPartitioning_DisjointSetForest_find(threadData, _eqn_dsf, mmc_unbox_integer(arrayGet(_var_map,mmc_unbox_integer(_var_idx)) /* DAE.ASUB */));

        tmpMeta42 = mmc_mk_box2(0, _name_cref, mmc_mk_integer(2));
        omc_UnorderedMap_addUpdate(threadData, mmc_mk_integer(_part_idx), (modelica_fnptr) mmc_mk_box2(0,closure5_NBPartitioning_Cluster_addElement,tmpMeta42), _cluster_map);
      }
    }
  }

  {
    modelica_metatype _cluster;
    for (tmpMeta44 = omc_UnorderedMap_valueList(threadData, _cluster_map); !listEmpty(tmpMeta44); tmpMeta44=MMC_CDR(tmpMeta44))
    {
      _cluster = MMC_CAR(tmpMeta44);
      omc_NBPartitioning_Cluster_addToClockMap(threadData, _cluster, _equations, _info, _clock_map);
    }
  }

  omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData, _info, _clock_map);

  {
    modelica_metatype __omcQ_24tmpVar45;
    modelica_metatype* tmp47;
    modelica_metatype tmpMeta48;
    modelica_metatype __omcQ_24tmpVar44;
    modelica_integer tmp49;
    modelica_metatype _cl_loopVar = 0;
    modelica_metatype _cl;
    _cl_loopVar = omc_UnorderedMap_valueList(threadData, _cluster_map);
    tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar45 = tmpMeta48; /* defaultValue */
    tmp47 = &__omcQ_24tmpVar45;
    while(1) {
      tmp49 = 1;
      if (!listEmpty(_cl_loopVar)) {
        _cl = MMC_CAR(_cl_loopVar);
        _cl_loopVar = MMC_CDR(_cl_loopVar);
        tmp49--;
      }
      if (tmp49 == 0) {
        __omcQ_24tmpVar44 = omc_NBPartitioning_Cluster_toPartition(threadData, _cl, _variables, _equations, (modelica_integer)_kind, _info, _held_crefs);
        *tmp47 = mmc_mk_cons(__omcQ_24tmpVar44,0);
        tmp47 = &MMC_CDR(*tmp47);
      } else if (tmp49 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp47 = mmc_mk_nil();
    tmpMeta46 = __omcQ_24tmpVar45;
  }
  _partitions = tmpMeta46;

  {
    modelica_metatype __omcQ_24tmpVar47;
    modelica_metatype* tmp51;
    modelica_metatype tmpMeta52;
    modelica_metatype __omcQ_24tmpVar46;
    modelica_integer tmp53;
    modelica_metatype _part_loopVar = 0;
    modelica_metatype _part;
    _part_loopVar = _partitions;
    tmpMeta52 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar47 = tmpMeta52; /* defaultValue */
    tmp51 = &__omcQ_24tmpVar47;
    while(1) {
      tmp53 = 1;
      if (!listEmpty(_part_loopVar)) {
        _part = MMC_CAR(_part_loopVar);
        _part_loopVar = MMC_CDR(_part_loopVar);
        tmp53--;
      }
      if (tmp53 == 0) {
        __omcQ_24tmpVar46 = omc_NBPartition_Partition_updateHeldVars(threadData, _part, _held_crefs);
        *tmp51 = mmc_mk_cons(__omcQ_24tmpVar46,0);
        tmp51 = &MMC_CDR(*tmp51);
      } else if (tmp53 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp51 = mmc_mk_nil();
    tmpMeta50 = __omcQ_24tmpVar47;
  }
  _partitions = tmpMeta50;

  _partitions = omc_NBPartitioning_sortAndMergeClockedPartitions(threadData, _partitions, _info);

  if(omc_Flags_isSet(threadData, _OMC_LIT84))
  {
    tmpMeta54 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT80),_OMC_LIT79);
    tmpMeta55 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) 2)));
    tmpMeta56 = stringAppend(tmpMeta54,omc_List_toString(threadData, _partitions, (modelica_fnptr) mmc_mk_box2(0,closure6_NBPartition_Partition_toString,tmpMeta55), _OMC_LIT9, _OMC_LIT9, _OMC_LIT79, _OMC_LIT79, 1 /* true */, ((modelica_integer) 0)));
    fputs(MMC_STRINGDATA(tmpMeta56),stdout);

    fputs(MMC_STRINGDATA(omc_NBPartitioning_ClockedInfo_toString(threadData, _info)),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _partitions;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningClocked(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningClocked(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_integer _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_metatype _partitions = NULL;
  modelica_boolean _isInit;
  modelica_metatype _clone_vars = NULL;
  modelica_metatype _clone_eqns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitions has no default value.
  _isInit = ((modelica_integer)_kind == 5);
  // _clone_vars has no default value.
  // _clone_eqns has no default value.
  _clone_vars = omc_NBVariable_VariablePointers_clone(threadData, _variables, 1 /* true */);

  _clone_eqns = omc_NBEquation_EquationPointers_clone(threadData, _equations, 1 /* true */);

  tmpMeta2 = mmc_mk_box7(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  tmpMeta3 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(((modelica_integer) 1)), tmpMeta2, _clone_vars, mmc_mk_none(), _clone_eqns, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  tmpMeta1 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  _partitions = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _partitions;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBPartitioning_partitioningNone(threadData_t *threadData, modelica_metatype _kind, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _clocks, modelica_metatype _clocked, modelica_metatype _info)
{
  modelica_integer tmp1;
  modelica_metatype _partitions = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partitions = omc_NBPartitioning_partitioningNone(threadData, tmp1, _variables, _equations, _clocks, _clocked, _info);
  /* skip box _partitions; list<NBPartition.Partition> */
  return _partitions;
}

DLLDirection
modelica_integer omc_NBPartitioning_DisjointSetForest_unite(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype _indices)
{
  modelica_integer _root;
  modelica_metatype _roots = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _parent = NULL;
  modelica_metatype _rank = NULL;
  modelica_integer _maxRank;
  modelica_boolean _tied;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _root has no default value.
  {
    modelica_metatype __omcQ_24tmpVar49;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar48;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _indices;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar49 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar49;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar48 = mmc_mk_integer(omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, mmc_unbox_integer(_i)));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar48,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar49;
  }
  _roots = tmpMeta1;
  _parent = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))));
  _rank = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 3))));
  // _maxRank has no default value.
  _tied = 0 /* false */;
  _root = mmc_unbox_integer(listHead(_roots));

  _maxRank = mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

  {
    modelica_metatype _r;
    for (tmpMeta5 = listRest(_roots); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _r = MMC_CAR(tmpMeta5);
      if((mmc_unbox_integer(_r) != _root))
      {
        if((mmc_unbox_integer(arrayGet(_rank,mmc_unbox_integer(_r)) /* DAE.ASUB */) > _maxRank))
        {
          _root = mmc_unbox_integer(_r);

          _maxRank = mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */);

          _tied = 0 /* false */;
        }
        else
        {
          if((mmc_unbox_integer(arrayGet(_rank,mmc_unbox_integer(_r)) /* DAE.ASUB */) == _maxRank))
          {
            _tied = 1 /* true */;
          }
        }
      }
    }
  }

  {
    modelica_metatype _r;
    for (tmpMeta7 = _roots; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _r = MMC_CAR(tmpMeta7);
      arrayUpdate(_parent,omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, mmc_unbox_integer(_r)),mmc_mk_integer(_root));
    }
  }

  if(_tied)
  {
    arrayUpdate(_rank,_root,mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_rank,_root) /* DAE.ASUB */)));
  }

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))), _parent);

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 3))), _rank);
  _return: OMC_LABEL_UNUSED
  return _root;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_unite(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype _indices)
{
  modelica_integer _root;
  modelica_metatype out_root;
  _root = omc_NBPartitioning_DisjointSetForest_unite(threadData, _dsf, _indices);
  out_root = mmc_mk_icon(_root);
  return out_root;
}

DLLDirection
modelica_integer omc_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_integer __omcQ_24in_5Findex)
{
  modelica_integer _index;
  modelica_metatype _parent = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = __omcQ_24in_5Findex;
  _parent = omc_Pointer_access(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))));
  while(1)
  {
    if(!(_index != mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */))) break;
    arrayUpdate(_parent,_index,arrayGet(_parent,mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */)) /* DAE.ASUB */);

    _index = mmc_unbox_integer(arrayGet(_parent,_index) /* DAE.ASUB */);
  }

  omc_Pointer_update(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dsf), 2))), _parent);
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_find(threadData_t *threadData, modelica_metatype _dsf, modelica_metatype __omcQ_24in_5Findex)
{
  modelica_integer tmp1;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Findex);
  _index = omc_NBPartitioning_DisjointSetForest_find(threadData, _dsf, tmp1);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLDirection
modelica_metatype omc_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_integer _n)
{
  modelica_metatype _dsf = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dsf has no default value.
  {
    modelica_metatype __omcQ_24tmpVar51;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar50;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer tmp6;
    modelica_integer _i;
    tmp5 = 1 /* Range step-value */;
    tmp6 = _n /* Range stop-value */;
    _i = ((modelica_integer) 1) /* Range start-value */;
    _i = (((modelica_integer) 1) /* Range start-value */)-tmp5;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar51 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar51;
    while(1) {
      tmp4 = 1;
      if (tmp5 > 0 ? _i+tmp5 <= tmp6 : _i+tmp5 >= tmp6) {
        _i += tmp5;
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar50 = mmc_mk_integer(_i);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar50,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar51;
  }
  tmpMeta7 = mmc_mk_box3(3, &NBPartitioning_DisjointSetForest_FOREST__desc, omc_Pointer_create(threadData, listArray(tmpMeta1)), omc_Pointer_create(threadData, arrayCreate(_n, mmc_mk_integer(((modelica_integer) 0)))));
  _dsf = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _dsf;
}
modelica_metatype boxptr_NBPartitioning_DisjointSetForest_new(threadData_t *threadData, modelica_metatype _n)
{
  modelica_integer tmp1;
  modelica_metatype _dsf = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _dsf = omc_NBPartitioning_DisjointSetForest_new(threadData, tmp1);
  /* skip box _dsf; NBPartitioning.DisjointSetForest */
  return _dsf;
}

static modelica_metatype closure7_NBPartitioning_replaceClockedFunctions(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype held_crefs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBPartitioning_replaceClockedFunctions(thData, $in_exp, held_crefs);
}static void closure8_NBVariable_setVarKind(threadData_t *thData, modelica_metatype closure, modelica_metatype varPointer)
{
  modelica_metatype varKind = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_NBVariable_setVarKind(thData, varPointer, varKind);
}
DLLDirection
modelica_metatype omc_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_integer _kind, modelica_metatype _info, modelica_metatype _held_crefs)
{
  modelica_metatype _partition = NULL;
  modelica_metatype _cvars = NULL;
  modelica_metatype _cidnt = NULL;
  modelica_boolean _isInit;
  modelica_metatype _association = NULL;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _filtered_vars = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _partVariables = NULL;
  modelica_metatype _partEquations = NULL;
  modelica_integer _var_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partition has no default value.
  _cvars = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))));
  _cidnt = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))));
  _isInit = ((modelica_integer)_kind == 5);
  // _association has no default value.
  // _var_lst has no default value.
  // _filtered_vars has no default value.
  // _eqn_lst has no default value.
  // _partVariables has no default value.
  // _partEquations has no default value.
  // _var_idx has no default value.
  {
    modelica_metatype __omcQ_24tmpVar53;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar52;
    modelica_integer tmp4;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = _cvars;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar53 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar53;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar52 = omc_NBVariable_getVarPointer(threadData, _cref, _OMC_LIT85);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar52,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar53;
  }
  _var_lst = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar55;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar54;
    modelica_integer tmp8;
    modelica_metatype _var_loopVar = 0;
    modelica_metatype _var;
    _var_loopVar = _var_lst;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar55 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar55;
    while(1) {
      tmp8 = 1;
      while (!listEmpty(_var_loopVar)) {
        _var = MMC_CAR(_var_loopVar);
        _var_loopVar = MMC_CDR(_var_loopVar);
        if (omc_NBVariable_VariablePointers_contains(threadData, _var, _variables)) {
          tmp8--;
          break;
        }
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar54 = _var;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar54,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar55;
  }
  _filtered_vars = tmpMeta5;

  {
    modelica_metatype __omcQ_24tmpVar57;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar56;
    modelica_integer tmp12;
    modelica_metatype _name_loopVar = 0;
    modelica_metatype _name;
    _name_loopVar = _cidnt;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar57 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar57;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_name_loopVar)) {
        _name = MMC_CAR(_name_loopVar);
        _name_loopVar = MMC_CDR(_name_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar56 = omc_NBEquation_EquationPointers_getEqnByName(threadData, _equations, _name);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar56,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar57;
  }
  _eqn_lst = tmpMeta9;

  _partVariables = omc_NBVariable_VariablePointers_fromList(threadData, _filtered_vars, 0 /* false */);

  _partEquations = omc_NBEquation_EquationPointers_fromList(threadData, _eqn_lst);

  _association = omc_NBPartition_Association_create(threadData, _partEquations, (modelica_integer)_kind, _info);

  tmpMeta13 = mmc_mk_box1(0, _held_crefs);
  _partEquations = omc_NBEquation_EquationPointers_mapExp(threadData, _partEquations, (modelica_fnptr) mmc_mk_box2(0,closure7_NBPartitioning_replaceClockedFunctions,tmpMeta13), mmc_mk_none(), boxvar_NFExpression_map);

  if(omc_NBPartition_Association_isClocked(threadData, _association))
  {
    _partEquations = omc_NBEquation_EquationPointers_map(threadData, _partEquations, boxvar_NBPartitioning_replaceClockedWhen);

    tmpMeta14 = mmc_mk_box1(0, _OMC_LIT86);
    _partVariables = omc_NBVariable_VariablePointers_mapPtr(threadData, _partVariables, (modelica_fnptr) mmc_mk_box2(0,closure8_NBVariable_setVarKind,tmpMeta14));
  }

  tmpMeta15 = mmc_mk_box9(3, &NBPartition_Partition_PARTITION__desc, mmc_mk_integer(((modelica_integer) 0)), _association, _partVariables, mmc_mk_none(), _partEquations, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
  _partition = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _partition;
}
modelica_metatype boxptr_NBPartitioning_Cluster_toPartition(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _variables, modelica_metatype _equations, modelica_metatype _kind, modelica_metatype _info, modelica_metatype _held_crefs)
{
  modelica_integer tmp1;
  modelica_metatype _partition = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _partition = omc_NBPartitioning_Cluster_toPartition(threadData, _cluster, _variables, _equations, tmp1, _info, _held_crefs);
  /* skip box _partition; NBPartition.Partition */
  return _partition;
}

static modelica_metatype closure9_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype clock_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addToClockMap_findClock(thData, $in_exp, info, clock_ptr);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _info, modelica_metatype _clock_ptr)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _clock_opt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  _clock_opt = omc_Pointer_access(threadData, _clock_ptr);
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _exp;
    tmp4_2 = _clock_opt;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          
          /* Pattern matching succeeded */
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NBVariable_isClockOrClocked(threadData, omc_NBVariable_getVarPointer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _OMC_LIT87))) goto tmp3_end;
          omc_Pointer_update(threadData, _clock_ptr, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)))));
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp3_end;
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box2(0, _info, _clock_ptr);
          tmpMeta1 = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure9_NBPartitioning_Cluster_addToClockMap_findClock,tmpMeta7));
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

static modelica_metatype closure10_NBPartitioning_Cluster_addToClockMap_findClock(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype info = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype clock_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_NBPartitioning_Cluster_addToClockMap_findClock(thData, $in_exp, info, clock_ptr);
}
DLLDirection
void omc_NBPartitioning_Cluster_addToClockMap(threadData_t *threadData, modelica_metatype _cluster, modelica_metatype _equations, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _clock_ptr = NULL;
  modelica_metatype _clock_opt = NULL;
  modelica_metatype _clock = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _clock_ptr = omc_Pointer_create(threadData, mmc_mk_none());
  _clock_opt = mmc_mk_none();
  // _clock has no default value.
  {
    modelica_metatype _eqn_name;
    for (tmpMeta1 = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3)))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eqn_name = MMC_CAR(tmpMeta1);
      tmpMeta2 = mmc_mk_box2(0, _info, _clock_ptr);
      omc_NBEquation_Equation_map(threadData, omc_Pointer_access(threadData, omc_NBEquation_EquationPointers_getEqnByName(threadData, _equations, _eqn_name)), (modelica_fnptr) mmc_mk_box2(0,closure10_NBPartitioning_Cluster_addToClockMap_findClock,tmpMeta2), mmc_mk_none(), boxvar_NFExpression_fakeMap);

      _clock_opt = omc_Pointer_access(threadData, _clock_ptr);

      if(isSome(_clock_opt))
      {
        break;
      }
    }
  }

  if(isSome(_clock_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta4 = _clock_opt;
    if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
    _clock = tmpMeta5;

    {
      modelica_metatype _var_name;
      for (tmpMeta6 = omc_UnorderedSet_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2)))); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
      {
        _var_name = MMC_CAR(tmpMeta6);
        omc_UnorderedMap_add(threadData, _var_name, _clock, _clock_map);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_integer _ty)
{
  modelica_metatype _cluster = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cluster has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cluster_opt;
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
          _cluster = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _cluster;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(3, &NBPartitioning_Cluster_CLUSTER__desc, omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)), omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13)));
          tmpMeta1 = tmpMeta7;
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
  _cluster = tmpMeta1;

  { /* match expression */
    modelica_integer tmp11_1;
    tmp11_1 = (modelica_integer)_ty;
    {
      int tmp11;
      {
        switch (MMC_SWITCH_CAST(tmp11_1)) {
        case 2: {
          if (2 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        case 1: {
          if (1 != tmp11_1) goto tmp10_end;
          /* Pattern matching succeeded */
          omc_UnorderedSet_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))));
          tmpMeta8 = _cluster;
          goto tmp10_done;
        }
        default:
        tmp10_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_OMC_LIT88,omc_NFComponentRef_toString(threadData, _cref));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT89);
          tmpMeta12 = mmc_mk_cons(tmpMeta14, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta12);
          goto goto_9;
          goto tmp10_done;
        }
        }
        goto tmp10_end;
        tmp10_end: ;
      }
      goto goto_9;
      goto_9:;
      MMC_THROW_INTERNAL();
      goto tmp10_done;
      tmp10_done:;
    }
  }
  _cluster = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _cluster;
}
modelica_metatype boxptr_NBPartitioning_Cluster_addElement(threadData_t *threadData, modelica_metatype _cluster_opt, modelica_metatype _cref, modelica_metatype _ty)
{
  modelica_integer tmp1;
  modelica_metatype _cluster = NULL;
  tmp1 = mmc_unbox_integer(_ty);
  _cluster = omc_NBPartitioning_Cluster_addElement(threadData, _cluster_opt, _cref, tmp1);
  /* skip box _cluster; NBPartitioning.Cluster */
  return _cluster;
}

DLLDirection
modelica_string omc_NBPartitioning_Cluster_toString(threadData_t *threadData, modelica_metatype _cluster)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT90,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 2))), boxvar_NFComponentRef_toString, _OMC_LIT79));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT91);
  tmpMeta3 = stringAppend(tmpMeta2,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cluster), 3))), boxvar_NFComponentRef_toString, _OMC_LIT79));
  _str = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBPartitioning_extractClocks(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _collector, modelica_metatype _new_clocks, modelica_metatype _idx)
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
      modelica_metatype _clock = NULL;
      modelica_metatype _clock_var = NULL;
      modelica_metatype _clock_name = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _clock has no default value.
      // _clock_var has no default value.
      // _clock_name has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!omc_NFClockKind_isInferred(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))))) goto tmp3_end;
          tmpMeta6 = mmc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          _clock = tmpMeta6;

          if(omc_UnorderedMap_contains(threadData, _clock, _collector))
          {
            _clock_name = omc_UnorderedMap_getSafe(threadData, _clock, _collector, _OMC_LIT92);
          }
          else
          {
            _clock_var = omc_NBVariable_makeClockVar(threadData, mmc_unbox_integer(omc_Pointer_access(threadData, _idx)), omc_NFExpression_typeOf(threadData, _exp) ,&_clock_name);

            omc_UnorderedMap_add(threadData, _clock, _clock_name, _collector);

            tmpMeta7 = mmc_mk_cons(_clock_var, omc_Pointer_access(threadData, _new_clocks));
            omc_Pointer_update(threadData, _new_clocks, tmpMeta7);

            omc_Pointer_update(threadData, _idx, mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(omc_Pointer_access(threadData, _idx))));
          }
          tmpMeta1 = omc_NFExpression_fromCref(threadData, _clock_name, 0 /* false */);
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
modelica_metatype omc_NBPartitioning_categorize(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp9_1;
    tmp9_1 = _bdae;
    {
      modelica_metatype _ode = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _alg = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _ode_evt = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _alg_evt = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _clocked = NULL;
      modelica_metatype tmpMeta7;
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _ode = omc_DoubleEnded_fromList(threadData, tmpMeta3);
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _alg = omc_DoubleEnded_fromList(threadData, tmpMeta4);
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _ode_evt = omc_DoubleEnded_fromList(threadData, tmpMeta5);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _alg_evt = omc_DoubleEnded_fromList(threadData, tmpMeta6);
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _clocked = omc_DoubleEnded_fromList(threadData, tmpMeta7);
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
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,0,13) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _syst;
            for (tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2))); !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _syst = MMC_CAR(tmpMeta11);
              omc_NBPartition_Partition_categorize(threadData, _syst, _ode, _alg, _ode_evt, _alg_evt, _clocked);
            }
          }

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = omc_DoubleEnded_toListAndClear(threadData, _ode, tmpMeta14);
          _bdae = tmpMeta13;

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_DoubleEnded_toListAndClear(threadData, _alg, tmpMeta16);
          _bdae = tmpMeta15;

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[4] = omc_DoubleEnded_toListAndClear(threadData, _ode_evt, tmpMeta18);
          _bdae = tmpMeta17;

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[5] = omc_DoubleEnded_toListAndClear(threadData, _alg_evt, tmpMeta20);
          _bdae = tmpMeta19;

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[6] = omc_DoubleEnded_toListAndClear(threadData, _clocked, tmpMeta22);
          _bdae = tmpMeta21;
          tmpMeta1 = _bdae;
          goto tmp8_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT45, _OMC_LIT94);
          goto goto_2;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

DLLDirection
modelica_fnptr omc_NBPartitioning_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_string _flag = NULL;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _flag = _OMC_LIT95;
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = _flag;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT95), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningClocked;
          goto tmp3_done;
        }
        case 2: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT97), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBPartitioning_partitioningNone;
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
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _func = (modelica_fnptr) omc_NBPartitioning_getModule(threadData);

  { /* match expression */
    modelica_integer tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = (modelica_integer)_kind;
    tmp4_2 = _bdae;
    {
      modelica_metatype _variables = NULL;
      modelica_metatype _clocks = NULL;
      modelica_metatype _equations = NULL;
      modelica_metatype _clocked = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _variables has no default value.
      // _clocks has no default value.
      // _equations has no default value.
      // _clocked has no default value.
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
          if (1 != tmp4_1) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,13) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,23) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 15));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,9) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 6));
          
          _variables = tmpMeta7;
          _clocks = tmpMeta8;
          _equations = tmpMeta10;
          _clocked = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), mmc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, mmc_mk_integer((modelica_integer)_kind), _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13))));
          _bdae = tmpMeta12;

          {
            modelica_metatype __omcQ_24tmpVar59;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar58;
            modelica_integer tmp17;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar59 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar59;
            while(1) {
              tmp17 = 1;
              while (!listEmpty(_sys_loopVar)) {
                _sys = MMC_CAR(_sys_loopVar);
                _sys_loopVar = MMC_CDR(_sys_loopVar);
                if ((!omc_NBPartition_Partition_isEmpty(threadData, _sys))) {
                  tmp17--;
                  break;
                }
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar58 = _sys;
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar58,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar59;
          }
          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[2] = tmpMeta14;
          _bdae = tmpMeta13;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (5 != tmp4_1) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,13) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,23) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 5));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 15));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,9) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 6));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 8));
          
          _variables = tmpMeta19;
          _clocks = tmpMeta20;
          _clocked = tmpMeta22;
          _equations = tmpMeta23;
          /* Pattern matching succeeded */
          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[7] = omc_NBPartitioning_partitioningNone(threadData, (modelica_integer)_kind, _variables, _equations, _clocks, _clocked, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 13))));
          _bdae = tmpMeta24;

          {
            modelica_metatype __omcQ_24tmpVar61;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar60;
            modelica_integer tmp29;
            modelica_metatype _sys_loopVar = 0;
            modelica_metatype _sys;
            _sys_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 7)));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar61 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar61;
            while(1) {
              tmp29 = 1;
              while (!listEmpty(_sys_loopVar)) {
                _sys = MMC_CAR(_sys_loopVar);
                _sys_loopVar = MMC_CDR(_sys_loopVar);
                if ((!omc_NBPartition_Partition_isEmpty(threadData, _sys))) {
                  tmp29--;
                  break;
                }
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar60 = _sys;
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar60,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar61;
          }
          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[7] = tmpMeta26;
          _bdae = tmpMeta25;
          tmpMeta1 = _bdae;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT45, _OMC_LIT99);
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
modelica_metatype boxptr_NBPartitioning_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _bdae = omc_NBPartitioning_main(threadData, __omcQ_24in_5Fbdae, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_ClockedInfo_addSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info)
{
  modelica_metatype _base_clock = NULL;
  modelica_metatype _current_clocks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _base_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), _OMC_LIT100);
  // _current_clocks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _current_clocks = omc_UnorderedMap_getOrDefault(threadData, _base_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))), tmpMeta1);

  tmpMeta2 = mmc_mk_cons(_clock_name, _current_clocks);
  omc_UnorderedMap_add(threadData, _base_clock, tmpMeta2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _base_clock = NULL;
  modelica_metatype _implicit_clock = NULL;
  modelica_metatype _parent_clock = NULL;
  modelica_metatype _implicit_clock_opt = NULL;
  modelica_metatype _dest = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _base_clock has no default value.
  // _implicit_clock has no default value.
  _parent_clock = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), _OMC_LIT101);
  _implicit_clock_opt = mmc_mk_none();
  // _dest has no default value.
  // _src has no default value.
  if(omc_UnorderedMap_contains(threadData, _parent_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))))
  {
    _base_clock = _parent_clock;
  }
  else
  {
    if((!omc_UnorderedMap_contains(threadData, _parent_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))))))
    {
      _implicit_clock_opt = mmc_mk_some(_parent_clock);

      _parent_clock = omc_UnorderedMap_getSafe(threadData, _parent_clock, _clock_map, _OMC_LIT102);
    }

    _base_clock = omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _parent_clock, _info, _clock_map);

    _dest = omc_UnorderedMap_getSafe(threadData, _parent_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), _OMC_LIT103);

    _src = omc_UnorderedMap_getSafe(threadData, _clock_name, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), _OMC_LIT104);

    omc_UnorderedMap_add(threadData, _clock_name, omc_NBPartitioning_BClock_updateSubClock(threadData, _dest, _src), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));

    omc_UnorderedMap_add(threadData, _clock_name, _base_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))));

    if(isSome(_implicit_clock_opt))
    {
      /* Pattern-matching assignment */
      tmpMeta1 = _implicit_clock_opt;
      if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
      _implicit_clock = tmpMeta2;

      omc_UnorderedMap_add(threadData, _implicit_clock, _dest, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));

      omc_UnorderedMap_add(threadData, _implicit_clock, _base_clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _base_clock;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData_t *threadData, modelica_metatype _key, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype _clock = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _clock = _key;
  if(omc_UnorderedMap_contains(threadData, _key, _clock_map))
  {
    _clock = omc_UnorderedMap_getSafe(threadData, _key, _clock_map, _OMC_LIT105);

    if((!(omc_UnorderedMap_contains(threadData, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))) || omc_UnorderedMap_contains(threadData, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))))))
    {
      _clock = omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData, _clock, _info, _clock_map);

      omc_UnorderedMap_add(threadData, _key, _clock, _clock_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _clock;
}

DLLDirection
modelica_integer omc_NBPartitioning_ClockedInfo_subClockCount(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_UnorderedMap_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_subClockCount(threadData_t *threadData, modelica_metatype _info)
{
  modelica_integer _count;
  modelica_metatype out_count;
  _count = omc_NBPartitioning_ClockedInfo_subClockCount(threadData, _info);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
modelica_integer omc_NBPartitioning_ClockedInfo_baseClockCount(threadData_t *threadData, modelica_metatype _info, modelica_boolean _countInferred)
{
  modelica_integer _count;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _count = omc_UnorderedMap_size(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))));
  if((!_countInferred))
  {
    _count = _count - omc_List_count(threadData, omc_UnorderedMap_valueList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2)))), boxvar_NBPartitioning_BClock_isInferredClock);
  }
  _return: OMC_LABEL_UNUSED
  return _count;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_baseClockCount(threadData_t *threadData, modelica_metatype _info, modelica_metatype _countInferred)
{
  modelica_integer tmp1;
  modelica_integer _count;
  modelica_metatype out_count;
  tmp1 = mmc_unbox_integer(_countInferred);
  _count = omc_NBPartitioning_ClockedInfo_baseClockCount(threadData, _info, tmp1);
  out_count = mmc_mk_icon(_count);
  return out_count;
}

DLLDirection
void omc_NBPartitioning_ClockedInfo_resolveSubClocks(threadData_t *threadData, modelica_metatype _info, modelica_metatype _clock_map)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _cref;
    for (tmpMeta1 = omc_UnorderedMap_keyList(threadData, _clock_map); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      omc_NBPartitioning_ClockedInfo_resolveImplicitSubClock(threadData, _cref, _info, _clock_map);
    }
  }

  {
    modelica_metatype _sub_clock;
    for (tmpMeta3 = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _sub_clock = MMC_CAR(tmpMeta3);
      omc_NBPartitioning_ClockedInfo_resolveSubClock(threadData, _sub_clock, _info, _clock_map);
    }
  }

  {
    modelica_metatype _sub_clock;
    for (tmpMeta5 = omc_UnorderedMap_keyList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3)))); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _sub_clock = MMC_CAR(tmpMeta5);
      omc_NBPartitioning_ClockedInfo_addSubClock(threadData, _sub_clock, _info);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = omc_UnorderedMap_isEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_ClockedInfo_isEmpty(threadData_t *threadData, modelica_metatype _info)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_NBPartitioning_ClockedInfo_toString(threadData_t *threadData, modelica_metatype _info)
{
  modelica_string _str = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT9;
  if((!omc_NBPartitioning_ClockedInfo_isEmpty(threadData, _info)))
  {
    tmpMeta1 = stringAppend(omc_StringUtil_headline__2(threadData, _OMC_LIT106),_OMC_LIT79);
    _str = tmpMeta1;

    tmpMeta2 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT107));
    tmpMeta3 = stringAppend(tmpMeta2,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT79, _OMC_LIT70));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT108);
    _str = tmpMeta4;

    tmpMeta5 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT109));
    tmpMeta6 = stringAppend(tmpMeta5,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))), boxvar_NFComponentRef_toString, boxvar_NBPartitioning_BClock_toString, _OMC_LIT79, _OMC_LIT70));
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT108);
    _str = tmpMeta7;

    tmpMeta8 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT110));
    tmpMeta9 = stringAppend(tmpMeta8,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_toString, _OMC_LIT79, _OMC_LIT70));
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT108);
    _str = tmpMeta10;

    tmpMeta11 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT111));
    tmpMeta12 = stringAppend(tmpMeta11,omc_UnorderedMap_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5))), boxvar_NFComponentRef_toString, boxvar_NFComponentRef_listToString, _OMC_LIT79, _OMC_LIT70));
    tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT79);
    _str = tmpMeta13;
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBPartitioning_ClockedInfo_new(threadData_t *threadData)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box5(3, &NBPartitioning_ClockedInfo_CLOCKED__INFO__desc, omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)), omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1)));
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_updateSubClock(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdest, modelica_metatype _src)
{
  modelica_metatype _dest = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dest = __omcQ_24in_5Fdest;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _dest;
    tmp4_2 = _src;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_dest), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = omc_NBBackendUtil_Rational_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 3))), omc_NBBackendUtil_Rational_multiply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_src), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 2)))));
          _dest = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_dest), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_NBBackendUtil_Rational_multiply(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dest), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_src), 2))));
          _dest = tmpMeta7;
          tmpMeta1 = _dest;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT112,omc_NBPartitioning_BClock_toString(threadData, _dest));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT113);
          tmpMeta11 = stringAppend(tmpMeta10,omc_NBPartitioning_BClock_toString(threadData, _src));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT114);
          tmpMeta8 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta8);
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
  _dest = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dest;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBPartitioning_BClock_fromExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_baseClock)
{
  modelica_metatype _subClock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClock has no default value.
  // _baseClock has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _call = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _call has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(3, &NBPartitioning_BClock_BASE__CLOCK__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))));
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _OMC_LIT75;
          tmpMeta[0+1] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta7;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_string tmp11_1;modelica_metatype tmp11_2;
            tmp11_1 = omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_nameConsiderBuiltin(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT50, 1 /* true */, 0 /* false */);
            tmp11_2 = omc_NFCall_arguments(threadData, _call);
            {
              modelica_metatype _e = NULL;
              modelica_integer _i1;
              modelica_integer _i2;
              volatile mmc_switch_type tmp11;
              int tmp12;
              // _e has no default value.
              // _i1 has no default value.
              // _i2 has no default value.
              tmp11 = 0;
              for (; tmp11 < 8; tmp11++) {
                switch (MMC_SWITCH_CAST(tmp11)) {
                case 0: {
                  modelica_metatype tmpMeta13;
                  modelica_metatype tmpMeta14;
                  modelica_metatype tmpMeta15;
                  modelica_metatype tmpMeta16;
                  if (6 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT52), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta13 = MMC_CAR(tmp11_2);
                  tmpMeta14 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta14)) goto tmp10_end;
                  tmpMeta15 = MMC_CAR(tmpMeta14);
                  tmpMeta16 = MMC_CDR(tmpMeta14);
                  if (!listEmpty(tmpMeta16)) goto tmp10_end;
                  _e = tmpMeta15;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 1: {
                  modelica_metatype tmpMeta17;
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  modelica_metatype tmpMeta20;
                  modelica_metatype tmpMeta21;
                  modelica_integer tmp22;
                  modelica_metatype tmpMeta23;
                  modelica_metatype tmpMeta24;
                  if (9 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta17 = MMC_CAR(tmp11_2);
                  tmpMeta18 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta18)) goto tmp10_end;
                  tmpMeta19 = MMC_CAR(tmpMeta18);
                  tmpMeta20 = MMC_CDR(tmpMeta18);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,1) == 0) goto tmp10_end;
                  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
                  tmp22 = mmc_unbox_integer(tmpMeta21);
                  if (!listEmpty(tmpMeta20)) goto tmp10_end;
                  _e = tmpMeta17;
                  _i1 = tmp22  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta23 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta24 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta23, _OMC_LIT74, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta24);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 2: {
                  modelica_metatype tmpMeta25;
                  modelica_metatype tmpMeta26;
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_integer tmp30;
                  modelica_metatype tmpMeta31;
                  modelica_metatype tmpMeta32;
                  if (11 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta25 = MMC_CAR(tmp11_2);
                  tmpMeta26 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta26)) goto tmp10_end;
                  tmpMeta27 = MMC_CAR(tmpMeta26);
                  tmpMeta28 = MMC_CDR(tmpMeta26);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,0,1) == 0) goto tmp10_end;
                  tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
                  tmp30 = mmc_unbox_integer(tmpMeta29);
                  if (!listEmpty(tmpMeta28)) goto tmp10_end;
                  _e = tmpMeta25;
                  _i1 = tmp30  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta31 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_i1));
                  tmpMeta32 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, tmpMeta31, _OMC_LIT74, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta32);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 3: {
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  modelica_metatype tmpMeta35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  modelica_integer tmp38;
                  modelica_metatype tmpMeta39;
                  modelica_metatype tmpMeta40;
                  if (11 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta33 = MMC_CAR(tmp11_2);
                  tmpMeta34 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta34)) goto tmp10_end;
                  tmpMeta35 = MMC_CAR(tmpMeta34);
                  tmpMeta36 = MMC_CDR(tmpMeta34);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,0,1) == 0) goto tmp10_end;
                  tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
                  tmp38 = mmc_unbox_integer(tmpMeta37);
                  if (!listEmpty(tmpMeta36)) goto tmp10_end;
                  _e = tmpMeta33;
                  _i1 = tmp38  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta39 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta40 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT73, tmpMeta39, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta40);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 4: {
                  modelica_metatype tmpMeta41;
                  modelica_metatype tmpMeta42;
                  modelica_metatype tmpMeta43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype tmpMeta45;
                  modelica_integer tmp46;
                  modelica_metatype tmpMeta47;
                  modelica_metatype tmpMeta48;
                  modelica_metatype tmpMeta49;
                  modelica_integer tmp50;
                  modelica_metatype tmpMeta51;
                  modelica_metatype tmpMeta52;
                  if (11 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta41 = MMC_CAR(tmp11_2);
                  tmpMeta42 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta42)) goto tmp10_end;
                  tmpMeta43 = MMC_CAR(tmpMeta42);
                  tmpMeta44 = MMC_CDR(tmpMeta42);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,0,1) == 0) goto tmp10_end;
                  tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
                  tmp46 = mmc_unbox_integer(tmpMeta45);
                  if (listEmpty(tmpMeta44)) goto tmp10_end;
                  tmpMeta47 = MMC_CAR(tmpMeta44);
                  tmpMeta48 = MMC_CDR(tmpMeta44);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,1) == 0) goto tmp10_end;
                  tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
                  tmp50 = mmc_unbox_integer(tmpMeta49);
                  if (!listEmpty(tmpMeta48)) goto tmp10_end;
                  _e = tmpMeta41;
                  _i1 = tmp46  /* pattern as ty=Integer */;
                  _i2 = tmp50  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta51 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer(_i1), mmc_mk_integer(_i2));
                  tmpMeta52 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT73, tmpMeta51, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta52);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 5: {
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  modelica_integer tmp58;
                  modelica_metatype tmpMeta59;
                  modelica_metatype tmpMeta60;
                  if (10 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta53 = MMC_CAR(tmp11_2);
                  tmpMeta54 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta54)) goto tmp10_end;
                  tmpMeta55 = MMC_CAR(tmpMeta54);
                  tmpMeta56 = MMC_CDR(tmpMeta54);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,0,1) == 0) goto tmp10_end;
                  tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 2));
                  tmp58 = mmc_unbox_integer(tmpMeta57);
                  if (!listEmpty(tmpMeta56)) goto tmp10_end;
                  _e = tmpMeta53;
                  _i1 = tmp58  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta59 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer((-_i1)), mmc_mk_integer(((modelica_integer) 1)));
                  tmpMeta60 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT73, tmpMeta59, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta60);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 6: {
                  modelica_metatype tmpMeta61;
                  modelica_metatype tmpMeta62;
                  modelica_metatype tmpMeta63;
                  modelica_metatype tmpMeta64;
                  modelica_metatype tmpMeta65;
                  modelica_integer tmp66;
                  modelica_metatype tmpMeta67;
                  modelica_metatype tmpMeta68;
                  modelica_metatype tmpMeta69;
                  modelica_integer tmp70;
                  modelica_metatype tmpMeta71;
                  modelica_metatype tmpMeta72;
                  if (10 != MMC_STRLEN(tmp11_1) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmp11_1)) != 0) goto tmp10_end;
                  if (listEmpty(tmp11_2)) goto tmp10_end;
                  tmpMeta61 = MMC_CAR(tmp11_2);
                  tmpMeta62 = MMC_CDR(tmp11_2);
                  if (listEmpty(tmpMeta62)) goto tmp10_end;
                  tmpMeta63 = MMC_CAR(tmpMeta62);
                  tmpMeta64 = MMC_CDR(tmpMeta62);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta63,0,1) == 0) goto tmp10_end;
                  tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
                  tmp66 = mmc_unbox_integer(tmpMeta65);
                  if (listEmpty(tmpMeta64)) goto tmp10_end;
                  tmpMeta67 = MMC_CAR(tmpMeta64);
                  tmpMeta68 = MMC_CDR(tmpMeta64);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta67,0,1) == 0) goto tmp10_end;
                  tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta67), 2));
                  tmp70 = mmc_unbox_integer(tmpMeta69);
                  if (!listEmpty(tmpMeta68)) goto tmp10_end;
                  _e = tmpMeta61;
                  _i1 = tmp66  /* pattern as ty=Integer */;
                  _i2 = tmp70  /* pattern as ty=Integer */;
                  /* Pattern matching succeeded */
                  _subClock = omc_NBPartitioning_BClock_fromExp(threadData, _e ,&_baseClock);

                  tmpMeta71 = mmc_mk_box3(3, &NBBackendUtil_Rational_RATIONAL__desc, mmc_mk_integer((-_i1)), mmc_mk_integer(_i2));
                  tmpMeta72 = mmc_mk_box4(4, &NBPartitioning_BClock_SUB__CLOCK__desc, _OMC_LIT73, tmpMeta71, mmc_mk_none());
                  _subClock = omc_NBPartitioning_BClock_updateSubClock(threadData, _subClock, tmpMeta72);
                  tmpMeta[2+0] = _baseClock;
                  tmpMeta[2+1] = _subClock;
                  goto tmp10_done;
                }
                case 7: {
                  modelica_metatype tmpMeta73;
                  modelica_metatype tmpMeta74;
                  modelica_metatype tmpMeta75;
                  
                  /* Pattern matching succeeded */
                  tmpMeta74 = stringAppend(_OMC_LIT115,omc_NFExpression_toString(threadData, _exp));
                  tmpMeta75 = stringAppend(tmpMeta74,_OMC_LIT50);
                  tmpMeta73 = mmc_mk_cons(tmpMeta75, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta73);
                  goto goto_9;
                  goto tmp10_done;
                }
                }
                goto tmp10_end;
                tmp10_end: ;
              }
              goto goto_9;
              goto_9:;
              goto goto_2;
              goto tmp10_done;
              tmp10_done:;
            }
          }
          _baseClock = tmpMeta[2+0];
          _subClock = tmpMeta[2+1];
          tmpMeta[0+0] = _subClock;
          tmpMeta[0+1] = _baseClock;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          
          /* Pattern matching succeeded */
          tmpMeta77 = stringAppend(_OMC_LIT116,omc_NFExpression_toString(threadData, _exp));
          tmpMeta78 = stringAppend(tmpMeta77,_OMC_LIT50);
          tmpMeta76 = mmc_mk_cons(tmpMeta78, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta76);
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
  _subClock = tmpMeta[0+0];
  _baseClock = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_baseClock) { *out_baseClock = _baseClock; }
  return _subClock;
}

PROTECTED_FUNCTION_STATIC void omc_NBPartitioning_BClock_create(threadData_t *threadData, modelica_metatype _clock_name, modelica_metatype _exp, modelica_metatype _info)
{
  modelica_metatype _clock = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _clock_var = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clock has no default value.
  // _baseClock has no default value.
  // _clock_var has no default value.
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
          _clock = omc_NBPartitioning_BClock_fromExp(threadData, _exp ,&_baseClock);

          if(isSome(_baseClock))
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 3))));

            omc_UnorderedMap_add(threadData, _clock_name, omc_Util_getOption(threadData, _baseClock), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4))));
          }
          else
          {
            omc_UnorderedMap_add(threadData, _clock_name, _clock, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))));
          }

          _clock_var = omc_NBVariable_getVarPointer(threadData, _clock_name, _OMC_LIT117);

          if((!omc_NBVariable_isClockOrClocked(threadData, _clock_var)))
          {
            omc_NBVariable_setVarKind(threadData, _clock_var, _OMC_LIT86);
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT118,omc_NFComponentRef_toString(threadData, _clock_name));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT50);
          tmpMeta5 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta5);

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
modelica_metatype omc_NBPartitioning_BClock_toExp(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(8, &NFExpression_CLKCONST__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT119,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta7);
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
modelica_metatype omc_NBPartitioning_BClock_convertSub(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_NBBackendUtil_Rational_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2)))), omc_NBBackendUtil_Rational_convert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 3)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 4))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT120,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta7);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldClock;
}

DLLDirection
modelica_metatype omc_NBPartitioning_BClock_convertBase(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_metatype _oldClock = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFClockKind_toDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT121,omc_NBPartitioning_BClock_toString(threadData, _clock));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT45, tmpMeta6);
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
  _oldClock = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldClock;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,2) == 0) goto tmp3_end;
          
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
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isEventClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEventClock(threadData, _clock);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isInferredClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,0) == 0) goto tmp3_end;
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
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isInferredClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isInferredClock(threadData, _clock);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
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
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isBaseClock(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isBaseClock(threadData, _clock);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
void omc_NBPartitioning_BClock_add(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;modelica_metatype tmp3_2;
    tmp3_1 = omc_NBEquation_Equation_getLHS(threadData, _eqn);
    tmp3_2 = omc_NBEquation_Equation_getRHS(threadData, _eqn);
    {
      modelica_metatype _clock_name = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _clock_name has no default value.
      // _exp has no default value.
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp3_2)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 1));
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _exp = tmpMeta5;
          _clock_name = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp2_end;
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          if (optionNone(tmp3_2)) goto tmp2_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          _exp = tmpMeta8;
          _clock_name = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFExpression_isClockOrSampleFunction(threadData, _exp)) goto tmp2_end;
          omc_NBPartitioning_BClock_create(threadData, _clock_name, _exp, _info);
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
  return;
}

DLLDirection
modelica_boolean omc_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _clock1;
    tmp4_2 = _clock2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (omc_NFClockKind_compare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 2)))) == ((modelica_integer) 0));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_NBBackendUtil_Rational_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 2)))) && omc_NBBackendUtil_Rational_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 3))))) && omc_Util_optionEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock2), 4))), boxvar_stringEq));
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBPartitioning_BClock_isEqual(threadData_t *threadData, modelica_metatype _clock1, modelica_metatype _clock2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBPartitioning_BClock_isEqual(threadData, _clock1, _clock2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBPartitioning_BClock_toString(threadData, _clock));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBPartitioning_BClock_hash(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBPartitioning_BClock_hash(threadData, _clock);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_string omc_NBPartitioning_BClock_toString(threadData_t *threadData, modelica_metatype _clock)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clock;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_NFClockKind_toDebugString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2))));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT122,omc_NBBackendUtil_Rational_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 2)))));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT70);
          tmpMeta7 = stringAppend(tmpMeta6,omc_NBBackendUtil_Rational_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_clock), 3)))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT123);
          tmp1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT124;
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

