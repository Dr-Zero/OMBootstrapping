#include "omc_simulation_settings.h"
#include "NFConnectEquations.h"
#define _OMC_LIT0_data "NFConnectEquations.lookupVar could not find the variable "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,57,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NFFrontEnd/NFConnectEquations.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,84,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3_6,1.782113391e9);
#define _OMC_LIT3_6 MMC_REFREALLIT(_OMC_LIT_STRUCT3_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1341)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1342)),MMC_IMMEDIATE(MMC_TAGFIXNUM(59)),_OMC_LIT3_6}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "smooth"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,6,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,11) {&NFInstNode_InstNode_EMPTY__NODE__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,3,4) {&DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,3) {&DAE_FunctionParallelism_FP__NON__PARALLEL__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc,_OMC_LIT8,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT9,_OMC_LIT10,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,3,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,3,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,4) {&NFType_REAL__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT17,0.0);
#define _OMC_LIT17 MMC_REFREALLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,4) {&NFExpression_REAL__desc,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,0,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT17}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,4,3) {&NFCeval_EvalTarget_EVAL__TARGET__desc,_OMC_LIT20,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT20,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT22,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "flowThreshold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,13,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT26,1e-7);
#define _OMC_LIT26 MMC_REFREALLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,2,7) {&Flags_FlagData_REAL__FLAG__desc,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Sets the minium threshold for stream flow rates"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,47,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(66)),_OMC_LIT24,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT25,_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "NFConnectEquations.evaluateOperatorArrayConstructorExp failed to expand call containing stream operator: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,105,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT31_6,1.782113391e9);
#define _OMC_LIT31_6 MMC_REFREALLIT(_OMC_LIT_STRUCT31_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(980)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(982)),MMC_IMMEDIATE(MMC_TAGFIXNUM(46)),_OMC_LIT31_6}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Iteration range in reduction containing connector operator calls must be a parameter expression."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,96,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "inStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,8,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "actualStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,12,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "$OMC$inStreamDiv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,16,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,1,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,3) {&NFBinding_UNBOUND__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,4) {&NFPrefixes_Replaceable_NOT__REPLACEABLE__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,10,3) {&NFAttributes_ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT39,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,3,3) {&SCode_Comment_COMMENT__desc,MMC_REFSTRUCTLIT(mmc_none),MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,9,4) {&NFComponent_COMPONENT__desc,_OMC_LIT6,_OMC_LIT16,_OMC_LIT38,_OMC_LIT38,_OMC_LIT40,_OMC_LIT41,MMC_IMMEDIATE(MMC_TAGFIXNUM(4)),_OMC_LIT20}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,1,1) {_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,9) {&NFInstNode_InstNodeType_NORMAL__COMP__desc,}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,7,4) {&NFInstNode_InstNode_COMPONENT__NODE__desc,_OMC_LIT37,MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT43,_OMC_LIT6,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT45,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "baseModelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,12,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,1,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,1) {_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "Outputs experimental Base Modelica."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,35,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT48,_OMC_LIT50,_OMC_LIT25,_OMC_LIT51,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,7,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "$OMC$PositiveMax"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,16,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT33}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data " equation generated from stream connection"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,42,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "abs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,3,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "Connected constants/parameters must be equal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,44,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,5) {&NFExpression_STRING__desc,_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "AssertionLevel"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,14,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "warning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,7,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,5,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,1) {_OMC_LIT68,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,1) {_OMC_LIT67,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,3,8) {&NFType_ENUMERATION__desc,_OMC_LIT66,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,4,7) {&NFExpression_ENUM__LITERAL__desc,_OMC_LIT71,_OMC_LIT68,MMC_IMMEDIATE(MMC_TAGFIXNUM(2))}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "exposeLocalIOs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,14,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "Introduces top-level inputs/outputs for unconnected input/output connectors at requested levels, provided they are public, 0 meaning top-level (standard Modelica), 1 inputs/outputs of top-level components, >1 going deeper. This flag is particularly useful for FMI export."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,271,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(152)),_OMC_LIT73,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT25,_OMC_LIT74,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "cardinality"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,11,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "flowAliasElimination"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,20,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "Enables simple alias elimination of flow variables in stream connectors."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,72,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(198)),_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT79}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "NFConnectEquations.generateEquations got connection set with invalid type '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,75,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "': "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,3,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,1,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,2,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,1,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT86_6,1.782113391e9);
#define _OMC_LIT86_6 MMC_REFREALLIT(_OMC_LIT_STRUCT86_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT2,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(129)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(131)),MMC_IMMEDIATE(MMC_TAGFIXNUM(88)),_OMC_LIT86_6}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
#include "util/modelica.h"

#include "NFConnectEquations_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_expFlowName(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_negated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_expFlowName(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_negated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_expFlowName,2,0) {(void*) boxptr_NFConnectEquations_expFlowName,0}};
#define boxvar_NFConnectEquations_expFlowName MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_expFlowName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupFlowVarInConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_negated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_lookupFlowVarInConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_negated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupFlowVarInConnector,2,0) {(void*) boxptr_NFConnectEquations_lookupFlowVarInConnector,0}};
#define boxvar_NFConnectEquations_lookupFlowVarInConnector MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupFlowVarInConnector)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupAttrInVar(threadData_t *threadData, modelica_string _attrName, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupAttrInVar,2,0) {(void*) boxptr_NFConnectEquations_lookupAttrInVar,0}};
#define boxvar_NFConnectEquations_lookupAttrInVar MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupAttrInVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupVarAttr(threadData_t *threadData, modelica_metatype _varName, modelica_string _attrName, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupVarAttr,2,0) {(void*) boxptr_NFConnectEquations_lookupVarAttr,0}};
#define boxvar_NFConnectEquations_lookupVarAttr MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupVarAttr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupVar(threadData_t *threadData, modelica_metatype _varName, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupVar,2,0) {(void*) boxptr_NFConnectEquations_lookupVar,0}};
#define boxvar_NFConnectEquations_lookupVar MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_lookupVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_associatedFlowCref(threadData_t *threadData, modelica_metatype _streamCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_associatedFlowCref,2,0) {(void*) boxptr_NFConnectEquations_associatedFlowCref,0}};
#define boxvar_NFConnectEquations_associatedFlowCref MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_associatedFlowCref)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_compareCrefStreamSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _element);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_compareCrefStreamSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _element);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_compareCrefStreamSet,2,0) {(void*) boxptr_NFConnectEquations_compareCrefStreamSet,0}};
#define boxvar_NFConnectEquations_compareCrefStreamSet MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_compareCrefStreamSet)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_removeStreamSetElement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype __omcQ_24in_5Felements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_removeStreamSetElement,2,0) {(void*) boxptr_NFConnectEquations_removeStreamSetElement,0}};
#define boxvar_NFConnectEquations_removeStreamSetElement MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_removeStreamSetElement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeSmoothCall(threadData_t *threadData, modelica_metatype _arg, modelica_integer _order);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_makeSmoothCall(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _order);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeSmoothCall,2,0) {(void*) boxptr_NFConnectEquations_makeSmoothCall,0}};
#define boxvar_NFConnectEquations_makeSmoothCall MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeSmoothCall)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectEquations_evaluateFlowDirection(threadData_t *threadData, modelica_metatype _flowCref, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_evaluateFlowDirection(threadData_t *threadData, modelica_metatype _flowCref, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateFlowDirection,2,0) {(void*) boxptr_NFConnectEquations_evaluateFlowDirection,0}};
#define boxvar_NFConnectEquations_evaluateFlowDirection MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateFlowDirection)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateActualStreamMul(threadData_t *threadData, modelica_metatype _crefExp, modelica_metatype _actualStreamArg, modelica_metatype _op, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateActualStreamMul,2,0) {(void*) boxptr_NFConnectEquations_evaluateActualStreamMul,0}};
#define boxvar_NFConnectEquations_evaluateActualStreamMul MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateActualStreamMul)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateActualStream(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_metatype *out_flowCref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateActualStream,2,0) {(void*) boxptr_NFConnectEquations_evaluateActualStream,0}};
#define boxvar_NFConnectEquations_evaluateActualStream MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateActualStream)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateAttribute,2,0) {(void*) boxptr_NFConnectEquations_evaluateAttribute,0}};
#define boxvar_NFConnectEquations_evaluateAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateAttribute)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlow(threadData_t *threadData, modelica_metatype _element, modelica_boolean _isInside, modelica_metatype _variables, modelica_metatype _replacements);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlow(threadData_t *threadData, modelica_metatype _element, modelica_metatype _isInside, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlow,2,0) {(void*) boxptr_NFConnectEquations_isNoFlow,0}};
#define boxvar_NFConnectEquations_isNoFlow MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlow)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowInside,2,0) {(void*) boxptr_NFConnectEquations_isNoFlowInside,0}};
#define boxvar_NFConnectEquations_isNoFlowInside MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowInside)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowOutside,2,0) {(void*) boxptr_NFConnectEquations_isNoFlowOutside,0}};
#define boxvar_NFConnectEquations_isNoFlowOutside MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowOutside)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowMinMax(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _streamCref, modelica_metatype _variables, modelica_metatype _replacements);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowMinMax(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _streamCref, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowMinMax,2,0) {(void*) boxptr_NFConnectEquations_isNoFlowMinMax,0}};
#define boxvar_NFConnectEquations_isNoFlowMinMax MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_isNoFlowMinMax)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateInStreamExp(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _streams, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_real _flowThreshold);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_generateInStreamExp(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _streams, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_metatype _flowThreshold);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateInStreamExp,2,0) {(void*) boxptr_NFConnectEquations_generateInStreamExp,0}};
#define boxvar_NFConnectEquations_generateInStreamExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateInStreamExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateInStream(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateInStream,2,0) {(void*) boxptr_NFConnectEquations_evaluateInStream,0}};
#define boxvar_NFConnectEquations_evaluateInStream MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateInStream)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorArrayConstructorExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorArrayConstructorExp,2,0) {(void*) boxptr_NFConnectEquations_evaluateOperatorArrayConstructorExp,0}};
#define boxvar_NFConnectEquations_evaluateOperatorArrayConstructorExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorArrayConstructorExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorReductionExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorReductionExp,2,0) {(void*) boxptr_NFConnectEquations_evaluateOperatorReductionExp,0}};
#define boxvar_NFConnectEquations_evaluateOperatorReductionExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorReductionExp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isStreamCall(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isStreamCall(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_isStreamCall,2,0) {(void*) boxptr_NFConnectEquations_isStreamCall,0}};
#define boxvar_NFConnectEquations_isStreamCall MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_isStreamCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeInStreamDivCall(threadData_t *threadData, modelica_metatype _sum_exp, modelica_metatype _fallback);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeInStreamDivCall,2,0) {(void*) boxptr_NFConnectEquations_makeInStreamDivCall,0}};
#define boxvar_NFConnectEquations_makeInStreamDivCall MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeInStreamDivCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makePositiveMaxCall(threadData_t *threadData, modelica_metatype _flowExp, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makePositiveMaxCall,2,0) {(void*) boxptr_NFConnectEquations_makePositiveMaxCall,0}};
#define boxvar_NFConnectEquations_makePositiveMaxCall MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makePositiveMaxCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeInStreamCall(threadData_t *threadData, modelica_metatype _streamExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeInStreamCall,2,0) {(void*) boxptr_NFConnectEquations_makeInStreamCall,0}};
#define boxvar_NFConnectEquations_makeInStreamCall MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeInStreamCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumInside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumInside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumInside2,2,0) {(void*) boxptr_NFConnectEquations_sumInside2,0}};
#define boxvar_NFConnectEquations_sumInside2 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumInside2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumOutside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumOutside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumOutside2,2,0) {(void*) boxptr_NFConnectEquations_sumOutside2,0}};
#define boxvar_NFConnectEquations_sumOutside2 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumOutside2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumInside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumInside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumInside1,2,0) {(void*) boxptr_NFConnectEquations_sumInside1,0}};
#define boxvar_NFConnectEquations_sumInside1 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumInside1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumOutside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumOutside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumOutside1,2,0) {(void*) boxptr_NFConnectEquations_sumOutside1,0}};
#define boxvar_NFConnectEquations_sumOutside1 MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumOutside1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_flowExp(threadData_t *threadData, modelica_metatype _element);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_flowExp,2,0) {(void*) boxptr_NFConnectEquations_flowExp,0}};
#define boxvar_NFConnectEquations_flowExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_flowExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamFlowExp(threadData_t *threadData, modelica_metatype _element, modelica_metatype *out_flowExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamFlowExp,2,0) {(void*) boxptr_NFConnectEquations_streamFlowExp,0}};
#define boxvar_NFConnectEquations_streamFlowExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamFlowExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumMap(threadData_t *threadData, modelica_metatype _elements, modelica_fnptr _func, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumMap,2,0) {(void*) boxptr_NFConnectEquations_sumMap,0}};
#define boxvar_NFConnectEquations_sumMap MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_sumMap)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlow(threadData_t *threadData, modelica_metatype _conn, modelica_boolean _isInside, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlow(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _isInside, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlow,2,0) {(void*) boxptr_NFConnectEquations_hasFlow,0}};
#define boxvar_NFConnectEquations_hasFlow MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlow)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlowInside,2,0) {(void*) boxptr_NFConnectEquations_hasFlowInside,0}};
#define boxvar_NFConnectEquations_hasFlowInside MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlowInside)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlowOutside,2,0) {(void*) boxptr_NFConnectEquations_hasFlowOutside,0}};
#define boxvar_NFConnectEquations_hasFlowOutside MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_hasFlowOutside)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_setRequiresPositiveMax(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_insidePositiveMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_setRequiresPositiveMax,2,0) {(void*) boxptr_NFConnectEquations_setRequiresPositiveMax,0}};
#define boxvar_NFConnectEquations_setRequiresPositiveMax MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_setRequiresPositiveMax)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamSumEquationExp(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _flowThreshold, modelica_metatype _fallback, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamSumEquationExp,2,0) {(void*) boxptr_NFConnectEquations_streamSumEquationExp,0}};
#define boxvar_NFConnectEquations_streamSumEquationExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamSumEquationExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamEquationGeneral(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _flowThreshold, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamEquationGeneral,2,0) {(void*) boxptr_NFConnectEquations_streamEquationGeneral,0}};
#define boxvar_NFConnectEquations_streamEquationGeneral MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_streamEquationGeneral)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateStreamEquations(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _flowThreshold, modelica_metatype _variables, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateStreamEquations,2,0) {(void*) boxptr_NFConnectEquations_generateStreamEquations,0}};
#define boxvar_NFConnectEquations_generateStreamEquations MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateStreamEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeFlowExp(threadData_t *threadData, modelica_metatype _element);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeFlowExp,2,0) {(void*) boxptr_NFConnectEquations_makeFlowExp,0}};
#define boxvar_NFConnectEquations_makeFlowExp MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeFlowExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateFlowEquations(threadData_t *threadData, modelica_metatype _elements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateFlowEquations,2,0) {(void*) boxptr_NFConnectEquations_generateFlowEquations,0}};
#define boxvar_NFConnectEquations_generateFlowEquations MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_generateFlowEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeEqualityAssert(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsSource, modelica_metatype _rhsCref, modelica_metatype _rhsSource);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeEqualityAssert,2,0) {(void*) boxptr_NFConnectEquations_makeEqualityAssert,0}};
#define boxvar_NFConnectEquations_makeEqualityAssert MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeEqualityAssert)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeEqualityEquation(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsSource, modelica_metatype _rhsCref, modelica_metatype _rhsSource);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeEqualityEquation,2,0) {(void*) boxptr_NFConnectEquations_makeEqualityEquation,0}};
#define boxvar_NFConnectEquations_makeEqualityEquation MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_makeEqualityEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generatePotentialEquations(threadData_t *threadData, modelica_metatype _elements, modelica_metatype __omcQ_24in_5FconnectedLocalIOs, modelica_metatype *out_connectedLocalIOs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_generatePotentialEquations,2,0) {(void*) boxptr_NFConnectEquations_generatePotentialEquations,0}};
#define boxvar_NFConnectEquations_generatePotentialEquations MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_generatePotentialEquations)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectEquations_getSetType(threadData_t *threadData, modelica_metatype _set);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_getSetType(threadData_t *threadData, modelica_metatype _set);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_getSetType,2,0) {(void*) boxptr_NFConnectEquations_getSetType,0}};
#define boxvar_NFConnectEquations_getSetType MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_getSetType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorsShallow(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorsShallow,2,0) {(void*) boxptr_NFConnectEquations_evaluateOperatorsShallow,0}};
#define boxvar_NFConnectEquations_evaluateOperatorsShallow MMC_REFSTRUCTLIT(boxvar_lit_NFConnectEquations_evaluateOperatorsShallow)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_expFlowName(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_negated)
{
  modelica_metatype _name = NULL;
  modelica_boolean _negated;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _name has no default value.
  // _negated has no default value.
  
  
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3)));
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _name = omc_NFConnectEquations_expFlowName(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))) ,&_negated);
          tmpMeta[0+0] = _name;
          tmp1_c1 = (!_negated);
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
  _name = tmpMeta[0+0];
  _negated = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_negated) { *out_negated = _negated; }
  return _name;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_expFlowName(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_negated)
{
  modelica_boolean _negated;
  modelica_metatype _name = NULL;
  _name = omc_NFConnectEquations_expFlowName(threadData, _exp, &_negated);
  /* skip box _name; NFComponentRef */
  if (out_negated) { *out_negated = mmc_mk_icon(_negated); }
  return _name;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupFlowVarInConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_negated)
{
  modelica_metatype _var = NULL;
  modelica_boolean _negated;
  modelica_metatype _flow_exp = NULL;
  modelica_metatype _flow_name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  // _negated has no default value.
  // _flow_exp has no default value.
  // _flow_name has no default value.
  _flow_exp = omc_NFConnectEquations_flowExp(threadData, _conn);

  if(isSome(_replacements))
  {
    _flow_exp = omc_NFStreamFlowAlias_applyReplacementsInExp(threadData, omc_Util_getOption(threadData, _replacements), _flow_exp);
  }

  _flow_name = omc_NFConnectEquations_expFlowName(threadData, _flow_exp ,&_negated);

  _var = omc_NFConnectEquations_lookupVar(threadData, _flow_name, _variables);
  _return: OMC_LABEL_UNUSED
  if (out_negated) { *out_negated = _negated; }
  return _var;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_lookupFlowVarInConnector(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_negated)
{
  modelica_boolean _negated;
  modelica_metatype _var = NULL;
  _var = omc_NFConnectEquations_lookupFlowVarInConnector(threadData, _conn, _variables, _replacements, &_negated);
  /* skip box _var; NFVariable */
  if (out_negated) { *out_negated = mmc_mk_icon(_negated); }
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupAttrInVar(threadData_t *threadData, modelica_string _attrName, modelica_metatype _var)
{
  modelica_metatype _attrValue = NULL;
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _attrValue has no default value.
  // _binding has no default value.
  _binding = omc_NFVariable_lookupTypeAttribute(threadData, _attrName, _var);

  _attrValue = omc_NFBinding_typedExp(threadData, _binding);
  _return: OMC_LABEL_UNUSED
  return _attrValue;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupVarAttr(threadData_t *threadData, modelica_metatype _varName, modelica_string _attrName, modelica_metatype _variables)
{
  modelica_metatype _attrValue = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _binding = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _attrValue has no default value.
  // _var has no default value.
  // _binding has no default value.
  _var = omc_NFConnectEquations_lookupVar(threadData, _varName, _variables);

  _binding = omc_NFVariable_lookupTypeAttribute(threadData, _attrName, _var);

  _attrValue = omc_NFBinding_typedExp(threadData, _binding);
  _return: OMC_LABEL_UNUSED
  return _attrValue;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_lookupVar(threadData_t *threadData, modelica_metatype _varName, modelica_metatype _variables)
{
  modelica_metatype _var = NULL;
  modelica_metatype _ovar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  // _ovar has no default value.
  _ovar = omc_UnorderedMap_get(threadData, _varName, _variables);

  if(isNone(_ovar))
  {
    _ovar = omc_UnorderedMap_get(threadData, omc_NFComponentRef_stripSubscriptsAll(threadData, _varName), _variables);
  }

  if(isNone(_ovar))
  {
    tmpMeta1 = stringAppend(_OMC_LIT0,omc_NFComponentRef_toString(threadData, _varName));
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT1);
    omc_Error_addInternalError(threadData, tmpMeta2, _OMC_LIT3);
  }

  /* Pattern-matching assignment */
  tmpMeta3 = _ovar;
  if (optionNone(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _var = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_associatedFlowCref(threadData_t *threadData, modelica_metatype _streamCref)
{
  modelica_metatype _flowCref = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _rest_cr = NULL;
  modelica_metatype _flow_node = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flowCref has no default value.
  // _ty has no default value.
  // _rest_cr has no default value.
  // _flow_node has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _streamCref;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  _ty = tmpMeta2;
  _rest_cr = tmpMeta3;

  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = omc_NFType_arrayElementType(threadData, _ty);
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,11,2) == 0) goto tmp6_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,3) == 0) goto tmp6_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (listEmpty(tmpMeta10)) goto tmp6_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (!listEmpty(tmpMeta12)) goto tmp6_end;
          
          _flow_node = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta4 = omc_NFComponentRef_prefixCref(threadData, _flow_node, omc_NFInstNode_InstNode_getType(threadData, _flow_node), tmpMeta13, _streamCref);
          goto tmp6_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _streamCref = _rest_cr;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      goto_5:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _flowCref = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _flowCref;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_compareCrefStreamSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _element)
{
  modelica_boolean _matches;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matches has no default value.
  _matches = omc_NFComponentRef_isEqual(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))));
  _return: OMC_LABEL_UNUSED
  return _matches;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_compareCrefStreamSet(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _element)
{
  modelica_boolean _matches;
  modelica_metatype out_matches;
  _matches = omc_NFConnectEquations_compareCrefStreamSet(threadData, _cref, _element);
  out_matches = mmc_mk_icon(_matches);
  return out_matches;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_removeStreamSetElement(threadData_t *threadData, modelica_metatype _cref, modelica_metatype __omcQ_24in_5Felements)
{
  modelica_metatype _elements = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _elements = __omcQ_24in_5Felements;
  _elements = omc_List_deleteMemberOnTrue(threadData, _cref, _elements, boxvar_NFConnectEquations_compareCrefStreamSet, NULL);
  _return: OMC_LABEL_UNUSED
  return _elements;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeSmoothCall(threadData_t *threadData, modelica_metatype _arg, modelica_integer _order)
{
  modelica_metatype _callExp = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _callExp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT5, _OMC_LIT6, tmpMeta1, tmpMeta2, tmpMeta3, mmc_mk_none(), tmpMeta4, _OMC_LIT7, _OMC_LIT11, tmpMeta5, tmpMeta6, listArray(tmpMeta7), _OMC_LIT12, _OMC_LIT13);
  tmpMeta10 = mmc_mk_box2(3, &NFExpression_INTEGER__desc, mmc_mk_integer(_order));
  tmpMeta9 = mmc_mk_cons(tmpMeta10, mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil)));
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta18 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT5, _OMC_LIT6, tmpMeta11, tmpMeta12, tmpMeta13, mmc_mk_none(), tmpMeta14, _OMC_LIT7, _OMC_LIT11, tmpMeta15, tmpMeta16, listArray(tmpMeta17), _OMC_LIT12, _OMC_LIT13);
  tmpMeta19 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta8, tmpMeta9, omc_NFExpression_variability(threadData, _arg), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 9)))));
  _callExp = tmpMeta19;
  _return: OMC_LABEL_UNUSED
  return _callExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_makeSmoothCall(threadData_t *threadData, modelica_metatype _arg, modelica_metatype _order)
{
  modelica_integer tmp1;
  modelica_metatype _callExp = NULL;
  tmp1 = mmc_unbox_integer(_order);
  _callExp = omc_NFConnectEquations_makeSmoothCall(threadData, _arg, tmp1);
  /* skip box _callExp; NFExpression */
  return _callExp;
}

static modelica_metatype closure0_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}static modelica_metatype closure1_NFSimplifyExp_simplify(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_exp)
{
  modelica_metatype includeScope = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFSimplifyExp_simplify(thData, $in_exp, includeScope);
}
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectEquations_evaluateFlowDirection(threadData_t *threadData, modelica_metatype _flowCref, modelica_metatype _variables)
{
  modelica_integer _direction;
  modelica_metatype _omin = NULL;
  modelica_metatype _omax = NULL;
  modelica_real _min_val;
  modelica_real _max_val;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _direction = ((modelica_integer) 0);
  // _omin has no default value.
  // _omax has no default value.
  // _min_val has no default value.
  // _max_val has no default value.
  _omin = omc_NFConnectEquations_lookupVarAttr(threadData, _flowCref, _OMC_LIT14, _variables);

  tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
  _omin = omc_Util_applyOption(threadData, _omin, (modelica_fnptr) mmc_mk_box2(0,closure0_NFSimplifyExp_simplify,tmpMeta1));

  _omax = omc_NFConnectEquations_lookupVarAttr(threadData, _flowCref, _OMC_LIT15, _variables);

  tmpMeta2 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
  _omax = omc_Util_applyOption(threadData, _omax, (modelica_fnptr) mmc_mk_box2(0,closure1_NFSimplifyExp_simplify,tmpMeta2));

  { /* match expression */
    modelica_metatype tmp6_1;modelica_metatype tmp6_2;
    tmp6_1 = _omin;
    tmp6_2 = _omax;
    {
      volatile mmc_switch_type tmp6;
      int tmp7;
      tmp6 = 0;
      for (; tmp6 < 5; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          if (!optionNone(tmp6_1)) goto tmp5_end;
          if (!optionNone(tmp6_2)) goto tmp5_end;
          /* Pattern matching succeeded */
          tmp3 = ((modelica_integer) 0);
          goto tmp5_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          if (!optionNone(tmp6_2)) goto tmp5_end;
          if (optionNone(tmp6_1)) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp5_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmp10 = mmc_unbox_real(tmpMeta9);
          _min_val = tmp10  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp3 = ((_min_val >= 0.0)?((modelica_integer) 1):((modelica_integer) 0));
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          if (!optionNone(tmp6_1)) goto tmp5_end;
          if (optionNone(tmp6_2)) goto tmp5_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,1) == 0) goto tmp5_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmp13 = mmc_unbox_real(tmpMeta12);
          _max_val = tmp13  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp3 = ((_max_val <= 0.0)?((modelica_integer) -1):((modelica_integer) 0));
          goto tmp5_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_real tmp19;
          if (optionNone(tmp6_1)) goto tmp5_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp5_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmp16 = mmc_unbox_real(tmpMeta15);
          if (optionNone(tmp6_2)) goto tmp5_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,1) == 0) goto tmp5_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp19 = mmc_unbox_real(tmpMeta18);
          _min_val = tmp16  /* pattern as ty=Real */;
          _max_val = tmp19  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp3 = (((_min_val >= 0.0) && (_max_val >= _min_val))?((modelica_integer) 1):(((_max_val <= 0.0) && (_min_val <= _max_val))?((modelica_integer) -1):((modelica_integer) 0)));
          goto tmp5_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp3 = ((modelica_integer) 0);
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
  _direction = tmp3;
  _return: OMC_LABEL_UNUSED
  return _direction;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_evaluateFlowDirection(threadData_t *threadData, modelica_metatype _flowCref, modelica_metatype _variables)
{
  modelica_integer _direction;
  modelica_metatype out_direction;
  _direction = omc_NFConnectEquations_evaluateFlowDirection(threadData, _flowCref, _variables);
  out_direction = mmc_mk_icon(_direction);
  return out_direction;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateActualStreamMul(threadData_t *threadData, modelica_metatype _crefExp, modelica_metatype _actualStreamArg, modelica_metatype _op, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _flow_cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _cr has no default value.
  // _flow_cr has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_NFConnectEquations_evaluateOperators(threadData, _crefExp, _sets, _setsArray, _variables, _ctable, _replacements);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _e1 = tmpMeta1;
  _cr = tmpMeta2;

  _e2 = omc_NFConnectEquations_evaluateActualStream(threadData, omc_NFExpression_toCref(threadData, _actualStreamArg), _sets, _setsArray, _variables, _ctable, _replacements ,&_flow_cr);

  tmpMeta3 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _e1, _op, _e2);
  _outExp = tmpMeta3;

  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _e2;
    {
      volatile mmc_switch_type tmp7;
      int tmp8;
      tmp7 = 0;
      for (; tmp7 < 2; tmp7++) {
        switch (MMC_SWITCH_CAST(tmp7)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,22,4) == 0) goto tmp6_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_NFComponentRef_isEqual(threadData, _cr, _flow_cr)) goto tmp6_end;
          tmpMeta4 = omc_NFConnectEquations_makeSmoothCall(threadData, _outExp, ((modelica_integer) 0));
          goto tmp6_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta4 = _outExp;
          goto tmp6_done;
        }
        }
        goto tmp6_end;
        tmp6_end: ;
      }
      goto goto_5;
      goto_5:;
      MMC_THROW_INTERNAL();
      goto tmp6_done;
      tmp6_done:;
    }
  }
  _outExp = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateActualStream(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_metatype *out_flowCref)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _flowCref = NULL;
  modelica_metatype _stream_cref = NULL;
  modelica_integer _flow_dir;
  modelica_metatype _flow_exp = NULL;
  modelica_metatype _stream_exp = NULL;
  modelica_metatype _instream_exp = NULL;
  modelica_metatype _op = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _flowCref has no default value.
  // _stream_cref has no default value.
  // _flow_dir has no default value.
  // _flow_exp has no default value.
  // _stream_exp has no default value.
  // _instream_exp has no default value.
  // _op has no default value.
  _stream_cref = omc_NFComponentRef_evaluateSubscripts(threadData, _streamCref);

  _flowCref = omc_NFConnectEquations_associatedFlowCref(threadData, _stream_cref);

  _flow_dir = omc_NFConnectEquations_evaluateFlowDirection(threadData, _flowCref, _variables);

  if((_flow_dir == ((modelica_integer) 1)))
  {
    _exp = omc_NFConnectEquations_evaluateInStream(threadData, _stream_cref, _sets, _setsArray, _variables, _ctable, _replacements);
  }
  else
  {
    if((_flow_dir == ((modelica_integer) -1)))
    {
      _exp = omc_NFExpression_fromCref(threadData, _stream_cref, 0 /* false */);
    }
    else
    {
      _flow_exp = omc_NFExpression_fromCref(threadData, _flowCref, 0 /* false */);

      _stream_exp = omc_NFExpression_fromCref(threadData, _stream_cref, 0 /* false */);

      _instream_exp = omc_NFConnectEquations_evaluateInStream(threadData, _stream_cref, _sets, _setsArray, _variables, _ctable, _replacements);

      _op = omc_NFOperator_makeGreater(threadData, omc_NFComponentRef_nodeType(threadData, _flowCref));

      tmpMeta1 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _flow_exp, _op, _OMC_LIT18, mmc_mk_integer(((modelica_integer) -1)));
      tmpMeta2 = mmc_mk_box5(25, &NFExpression_IF__desc, _OMC_LIT16, tmpMeta1, _instream_exp, _stream_exp);
      _exp = tmpMeta2;
    }
  }

  if(isSome(_replacements))
  {
    _exp = omc_NFStreamFlowAlias_applyReplacementsInExp(threadData, omc_Util_getOption(threadData, _replacements), _exp);
  }
  _return: OMC_LABEL_UNUSED
  if (out_flowCref) { *out_flowCref = _flowCref; }
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp)
{
  modelica_metatype _exp = NULL;
  modelica_integer _var;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _var has no default value.
  _var = omc_NFExpression_variability(threadData, _exp);

  if((((modelica_integer)_var == 3) && (!omc_NFStructural_isExpressionNotFixed(threadData, _exp, 0 /* false */, ((modelica_integer) 4)))))
  {
    omc_NFStructural_markExp(threadData, _exp);

    _var = 2;
  }

  if(((modelica_integer)_var <= 2))
  {
    _exp = omc_NFCeval_evalExp(threadData, _exp, _OMC_LIT21);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlow(threadData_t *threadData, modelica_metatype _element, modelica_boolean _isInside, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  modelica_metatype _attr_oexp = NULL;
  modelica_metatype _attr_exp = NULL;
  modelica_metatype _v = NULL;
  modelica_boolean _is_inside;
  modelica_boolean _negated;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noFlow has no default value.
  // _attr_oexp has no default value.
  // _attr_exp has no default value.
  // _v has no default value.
  _is_inside = _isInside;
  // _negated has no default value.
  _v = omc_NFConnectEquations_lookupFlowVarInConnector(threadData, _element, _variables, _replacements ,&_negated);

  if(_negated)
  {
    _is_inside = (!_is_inside);
  }

  _attr_oexp = omc_NFConnectEquations_lookupAttrInVar(threadData, (_is_inside?_OMC_LIT14:_OMC_LIT15), _v);

  if(isSome(_attr_oexp))
  {
    _attr_exp = omc_NFConnectEquations_evaluateAttribute(threadData, omc_Util_getOption(threadData, _attr_oexp));

    _noFlow = (_is_inside?omc_NFExpression_isNonNegative(threadData, _attr_exp):omc_NFExpression_isNonPositive(threadData, _attr_exp));
  }
  else
  {
    _noFlow = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, omc_NFBinding_getExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 4)))), boxvar_NFExpression_isZero, mmc_mk_boolean(0 /* false */)));
  }
  _return: OMC_LABEL_UNUSED
  return _noFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlow(threadData_t *threadData, modelica_metatype _element, modelica_metatype _isInside, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_integer tmp1;
  modelica_boolean _noFlow;
  modelica_metatype out_noFlow;
  tmp1 = mmc_unbox_integer(_isInside);
  _noFlow = omc_NFConnectEquations_isNoFlow(threadData, _element, tmp1, _variables, _replacements);
  out_noFlow = mmc_mk_icon(_noFlow);
  return out_noFlow;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noFlow has no default value.
  _noFlow = omc_NFConnectEquations_isNoFlow(threadData, _conn, 1 /* true */, _variables, _replacements);
  _return: OMC_LABEL_UNUSED
  return _noFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  modelica_metatype out_noFlow;
  _noFlow = omc_NFConnectEquations_isNoFlowInside(threadData, _conn, _variables, _replacements);
  out_noFlow = mmc_mk_icon(_noFlow);
  return out_noFlow;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noFlow has no default value.
  _noFlow = omc_NFConnectEquations_isNoFlow(threadData, _conn, 0 /* false */, _variables, _replacements);
  _return: OMC_LABEL_UNUSED
  return _noFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  modelica_metatype out_noFlow;
  _noFlow = omc_NFConnectEquations_isNoFlowOutside(threadData, _conn, _variables, _replacements);
  out_noFlow = mmc_mk_icon(_noFlow);
  return out_noFlow;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isNoFlowMinMax(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _streamCref, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _noFlow has no default value.
  if(omc_NFComponentRef_isEqual(threadData, _streamCref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conn), 2)))))
  {
    _noFlow = 0 /* false */;
  }
  else
  {
    if(omc_NFConnector_isOutside(threadData, _conn))
    {
      _noFlow = omc_NFConnectEquations_isNoFlowOutside(threadData, _conn, _variables, _replacements);
    }
    else
    {
      _noFlow = omc_NFConnectEquations_isNoFlowInside(threadData, _conn, _variables, _replacements);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _noFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isNoFlowMinMax(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _streamCref, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_boolean _noFlow;
  modelica_metatype out_noFlow;
  _noFlow = omc_NFConnectEquations_isNoFlowMinMax(threadData, _conn, _streamCref, _variables, _replacements);
  out_noFlow = mmc_mk_icon(_noFlow);
  return out_noFlow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateInStreamExp(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _streams, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_real _flowThreshold)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _reducedStreams = NULL;
  modelica_metatype _inside = NULL;
  modelica_metatype _outside = NULL;
  modelica_metatype _cr = NULL;
  modelica_integer _f1;
  modelica_integer _f2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _reducedStreams has no default value.
  // _inside has no default value.
  // _outside has no default value.
  // _cr has no default value.
  // _f1 has no default value.
  // _f2 has no default value.
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _streams;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        if ((!omc_NFConnectEquations_isNoFlowMinMax(threadData, _s, _streamCref, _variables, _replacements))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar0 = _s;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar1;
  }
  _reducedStreams = tmpMeta1;

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _reducedStreams;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_CAR(tmp8_1);
          tmpMeta11 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,5) == 0) goto tmp7_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 != tmp13) goto tmp7_end;
          if (!listEmpty(tmpMeta11)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NFExpression_fromCref(threadData, _streamCref, 0 /* false */);
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta14 = MMC_CAR(tmp8_1);
          tmpMeta15 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,5) == 0) goto tmp7_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 4));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          if (1 != tmp17) goto tmp7_end;
          if (listEmpty(tmpMeta15)) goto tmp7_end;
          tmpMeta18 = MMC_CAR(tmpMeta15);
          tmpMeta19 = MMC_CDR(tmpMeta15);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,5) == 0) goto tmp7_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 4));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          if (1 != tmp21) goto tmp7_end;
          if (!listEmpty(tmpMeta19)) goto tmp7_end;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta22 = omc_NFConnectEquations_removeStreamSetElement(threadData, _streamCref, _reducedStreams);
          if (listEmpty(tmpMeta22)) goto goto_6;
          tmpMeta23 = MMC_CAR(tmpMeta22);
          tmpMeta24 = MMC_CDR(tmpMeta22);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,5) == 0) goto goto_6;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (!listEmpty(tmpMeta24)) goto goto_6;
          _cr = tmpMeta25;
          tmpMeta5 = omc_NFExpression_fromCref(threadData, _cr, 0 /* false */);
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_integer tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta26 = MMC_CAR(tmp8_1);
          tmpMeta27 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,5) == 0) goto tmp7_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 4));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          if (listEmpty(tmpMeta27)) goto tmp7_end;
          tmpMeta30 = MMC_CAR(tmpMeta27);
          tmpMeta31 = MMC_CDR(tmpMeta27);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,0,5) == 0) goto tmp7_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 4));
          tmp33 = mmc_unbox_integer(tmpMeta32);
          if (!listEmpty(tmpMeta31)) goto tmp7_end;
          _f1 = tmp29  /* pattern as ty=enumeration(INSIDE, OUTSIDE) */;
          _f2 = tmp33  /* pattern as ty=enumeration(INSIDE, OUTSIDE) */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((modelica_integer)_f1 != (modelica_integer)_f2)) goto tmp7_end;
          /* Pattern-matching assignment */
          tmpMeta34 = omc_NFConnectEquations_removeStreamSetElement(threadData, _streamCref, _reducedStreams);
          if (listEmpty(tmpMeta34)) goto goto_6;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,0,5) == 0) goto goto_6;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          if (!listEmpty(tmpMeta36)) goto goto_6;
          _cr = tmpMeta37;
          tmpMeta5 = omc_NFConnectEquations_evaluateInStream(threadData, _cr, _sets, _setsArray, _variables, _ctable, _replacements);
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          _outside = omc_List_splitOnTrue(threadData, _reducedStreams, boxvar_NFConnector_isOutside ,&_inside);

          _inside = omc_NFConnectEquations_removeStreamSetElement(threadData, _streamCref, _inside);

          tmpMeta38 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(_flowThreshold));
          _exp = omc_NFConnectEquations_streamSumEquationExp(threadData, _outside, _inside, tmpMeta38, omc_NFExpression_fromCref(threadData, _streamCref, 0 /* false */), _variables, _replacements);
          tmpMeta5 = omc_NFConnectEquations_evaluateOperators(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
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
  _exp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_generateInStreamExp(threadData_t *threadData, modelica_metatype _streamCref, modelica_metatype _streams, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements, modelica_metatype _flowThreshold)
{
  modelica_real tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_real(_flowThreshold);
  _exp = omc_NFConnectEquations_generateInStreamExp(threadData, _streamCref, _streams, _sets, _setsArray, _variables, _ctable, _replacements, tmp1);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateInStream(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _sl = NULL;
  modelica_integer _set;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _c has no default value.
  // _sl has no default value.
  // _set has no default value.
  // _cr has no default value.
  _cr = omc_NFComponentRef_evaluateSubscripts(threadData, _cref);

  tmpMeta1 = mmc_mk_box6(3, &NFConnector_CONNECTOR__desc, _cr, _OMC_LIT7, mmc_mk_integer(1), mmc_mk_integer(((modelica_integer) 4)), _OMC_LIT23);
  _c = tmpMeta1;

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _set = omc_NFConnectionSets_ConnectionSets_findSetArrayIndex(threadData, _c, _sets);

          _sl = arrayGet(_setsArray, _set);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_c, MMC_REFSTRUCTLIT(mmc_nil));
          _sl = tmpMeta6;
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
  ;

  _exp = omc_NFConnectEquations_generateInStreamExp(threadData, _cr, _sl, _sets, _setsArray, _variables, _ctable, _replacements, omc_Flags_getConfigReal(threadData, _OMC_LIT29));

  if(isSome(_replacements))
  {
    _exp = omc_NFStreamFlowAlias_applyReplacementsInExp(threadData, omc_Util_getOption(threadData, _replacements), _exp);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorArrayConstructorExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _evalExp = NULL;
  modelica_boolean _expanded;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _evalExp has no default value.
  // _expanded has no default value.
  _evalExp = omc_NFExpandExp_expand(threadData, _exp, 0 /* false */, 0 /* false */ ,&_expanded);

  if((!_expanded))
  {
    tmpMeta1 = stringAppend(_OMC_LIT30,omc_NFExpression_toString(threadData, _exp));
    omc_Error_addInternalError(threadData, tmpMeta1, _OMC_LIT31);
  }

  _evalExp = omc_NFConnectEquations_evaluateOperators(threadData, _evalExp, _sets, _setsArray, _variables, _ctable, _replacements);
  _return: OMC_LABEL_UNUSED
  return _evalExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorReductionExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _evalExp = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _fn = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _arg = NULL;
  modelica_metatype _iter_exp = NULL;
  modelica_metatype _iters = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _iter_node = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _evalExp has no default value.
  // _call has no default value.
  // _fn has no default value.
  // _ty has no default value.
  // _arg has no default value.
  // _iter_exp has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iters = tmpMeta1;
  // _iter_node has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _exp;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      for (; tmp5 < 1; tmp5++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,1) == 0) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,6,8) == 0) goto tmp4_end;
          
          _call = tmpMeta7;
          /* Pattern matching succeeded */
          _ty = omc_NFExpression_typeOf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))));

          {
            modelica_metatype _iter;
            for (tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 7))); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
            {
              _iter = MMC_CAR(tmpMeta8);
              /* Pattern-matching assignment */
              tmpMeta9 = _iter;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
              _iter_node = tmpMeta10;
              _iter_exp = tmpMeta11;

              if((omc_NFComponent_variability(threadData, omc_NFInstNode_InstNode_component(threadData, _iter_node)) > 3))
              {
                fputs(MMC_STRINGDATA(_OMC_LIT32),stdout);

                goto goto_3;
              }

              _iter_exp = omc_NFCeval_evalExp(threadData, _iter_exp, _OMC_LIT21);

              _ty = omc_NFType_liftArrayLeftList(threadData, _ty, omc_NFType_arrayDims(threadData, omc_NFExpression_typeOf(threadData, _iter_exp)));

              tmpMeta13 = mmc_mk_box2(0, _iter_node, _iter_exp);
              tmpMeta12 = mmc_mk_cons(tmpMeta13, _iters);
              _iters = tmpMeta12;
            }
          }

          _iters = listReverseInPlace(_iters);

          _arg = omc_NFExpandExp_expandArrayConstructor(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), _ty, _iters, NULL);
          tmpMeta15 = mmc_mk_cons(_arg, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta16 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))), tmpMeta15, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 4)))), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 3)))));
          tmpMeta2 = tmpMeta16;
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
  _evalExp = tmpMeta2;

  _evalExp = omc_NFConnectEquations_evaluateOperators(threadData, _evalExp, _sets, _setsArray, _variables, _ctable, _replacements);
  _return: OMC_LABEL_UNUSED
  return _evalExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_isStreamCall(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _streamCall;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _streamCall has no default value.
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
          modelica_boolean tmp6 = 0;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp9_1;
            tmp9_1 = omc_NFFunction_Function_name(threadData, omc_NFCall_typedFunction(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2)))));
            {
              volatile mmc_switch_type tmp9;
              int tmp10;
              tmp9 = 0;
              for (; tmp9 < 3; tmp9++) {
                switch (MMC_SWITCH_CAST(tmp9)) {
                case 0: {
                  modelica_metatype tmpMeta11;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,1,1) == 0) goto tmp8_end;
                  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 2));
                  if (8 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT33), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmp6 = 1 /* true */;
                  goto tmp8_done;
                }
                case 1: {
                  modelica_metatype tmpMeta12;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp9_1,1,1) == 0) goto tmp8_end;
                  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp9_1), 2));
                  if (12 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT34), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp8_end;
                  /* Pattern matching succeeded */
                  tmp6 = 1 /* true */;
                  goto tmp8_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  tmp6 = 0 /* false */;
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
  _streamCall = tmp1;
  _return: OMC_LABEL_UNUSED
  return _streamCall;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_isStreamCall(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _streamCall;
  modelica_metatype out_streamCall;
  _streamCall = omc_NFConnectEquations_isStreamCall(threadData, _exp);
  out_streamCall = mmc_mk_icon(_streamCall);
  return out_streamCall;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeInStreamDivCall(threadData_t *threadData, modelica_metatype _sum_exp, modelica_metatype _fallback)
{
  modelica_metatype _inStreamDivCall = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inStreamDivCall has no default value.
  if(omc_Flags_getConfigBool(threadData, _OMC_LIT53))
  {
    _inStreamDivCall = _sum_exp;
  }
  else
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta6 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT36, _OMC_LIT6, _OMC_LIT47, _OMC_LIT46, tmpMeta1, mmc_mk_none(), tmpMeta2, _OMC_LIT16, _OMC_LIT11, tmpMeta3, tmpMeta4, listArray(tmpMeta5), _OMC_LIT12, _OMC_LIT13);
    tmpMeta7 = mmc_mk_cons(_sum_exp, mmc_mk_cons(_fallback, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta13 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT36, _OMC_LIT6, _OMC_LIT47, _OMC_LIT46, tmpMeta8, mmc_mk_none(), tmpMeta9, _OMC_LIT16, _OMC_LIT11, tmpMeta10, tmpMeta11, listArray(tmpMeta12), _OMC_LIT12, _OMC_LIT13);
    tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta6, tmpMeta7, omc_NFExpression_variability(threadData, _fallback), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 9)))));
    _inStreamDivCall = tmpMeta14;
  }
  _return: OMC_LABEL_UNUSED
  return _inStreamDivCall;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makePositiveMaxCall(threadData_t *threadData, modelica_metatype _flowExp, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _variables)
{
  modelica_metatype _positiveMaxCall = NULL;
  modelica_metatype _flow_name = NULL;
  modelica_metatype _nominal_oexp = NULL;
  modelica_metatype _nominal_exp = NULL;
  modelica_metatype _flow_threshold = NULL;
  modelica_metatype _fn_node = NULL;
  modelica_metatype _fn = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveMaxCall has no default value.
  // _flow_name has no default value.
  // _nominal_oexp has no default value.
  // _nominal_exp has no default value.
  // _flow_threshold has no default value.
  // _fn_node has no default value.
  // _fn has no default value.
  _flow_name = omc_NFConnectEquations_associatedFlowCref(threadData, omc_NFConnector_name(threadData, _element));

  _nominal_oexp = omc_NFConnectEquations_lookupVarAttr(threadData, _flow_name, _OMC_LIT54, _variables);

  if(isSome(_nominal_oexp))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _nominal_oexp;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _nominal_exp = tmpMeta2;

    tmpMeta3 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _flowThreshold, omc_NFOperator_makeMul(threadData, _OMC_LIT16), _nominal_exp);
    _flow_threshold = tmpMeta3;
  }
  else
  {
    _flow_threshold = _flowThreshold;
  }

  if(omc_Flags_getConfigBool(threadData, _OMC_LIT53))
  {
    _fn_node = omc_NFClass_lookupElement(threadData, _OMC_LIT55, omc_NFInstNode_InstNode_getClass(threadData, omc_NFInstNode_InstNode_topScope(threadData, omc_NFComponentRef_node(threadData, _flow_name))), NULL);

    _fn_node = omc_NFFunction_Function_instFunctionNode(threadData, _fn_node, ((modelica_integer) 0), _OMC_LIT20);

    /* Pattern-matching assignment */
    tmpMeta4 = omc_NFFunction_Function_typeNodeCache(threadData, _fn_node, ((modelica_integer) 16));
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    if (!listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
    _fn = tmpMeta5;

    tmpMeta7 = mmc_mk_cons(_flowExp, mmc_mk_cons(_flow_threshold, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta8 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, _fn, tmpMeta7, omc_NFConnector_variability(threadData, _element), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 9)))));
    _positiveMaxCall = tmpMeta8;
  }
  else
  {
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta14 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT56, _OMC_LIT6, _OMC_LIT47, _OMC_LIT46, tmpMeta9, mmc_mk_none(), tmpMeta10, _OMC_LIT16, _OMC_LIT11, tmpMeta11, tmpMeta12, listArray(tmpMeta13), _OMC_LIT12, _OMC_LIT13);
    tmpMeta15 = mmc_mk_cons(_flowExp, mmc_mk_cons(_flow_threshold, MMC_REFSTRUCTLIT(mmc_nil)));
    tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta21 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT56, _OMC_LIT6, _OMC_LIT47, _OMC_LIT46, tmpMeta16, mmc_mk_none(), tmpMeta17, _OMC_LIT16, _OMC_LIT11, tmpMeta18, tmpMeta19, listArray(tmpMeta20), _OMC_LIT12, _OMC_LIT13);
    tmpMeta22 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta14, tmpMeta15, omc_NFConnector_variability(threadData, _element), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 9)))));
    _positiveMaxCall = tmpMeta22;
  }

  setGlobalRoot(((modelica_integer) 27), _OMC_LIT57);
  _return: OMC_LABEL_UNUSED
  return _positiveMaxCall;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeInStreamCall(threadData_t *threadData, modelica_metatype _streamExp)
{
  modelica_metatype _inStreamCall = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _inStreamCall has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta1, mmc_mk_none(), tmpMeta2, _OMC_LIT16, _OMC_LIT11, tmpMeta3, tmpMeta4, listArray(tmpMeta5), _OMC_LIT12, _OMC_LIT13);
  tmpMeta7 = mmc_mk_cons(_streamExp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta13 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta8, mmc_mk_none(), tmpMeta9, _OMC_LIT16, _OMC_LIT11, tmpMeta10, tmpMeta11, listArray(tmpMeta12), _OMC_LIT12, _OMC_LIT13);
  tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta6, tmpMeta7, omc_NFExpression_variability(threadData, _streamExp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 9)))));
  _inStreamCall = tmpMeta14;
  _return: OMC_LABEL_UNUSED
  return _inStreamCall;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumInside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  _exp = omc_NFConnectEquations_flowExp(threadData, _element);

  tmpMeta1 = mmc_mk_box3(20, &NFExpression_UNARY__desc, omc_NFOperator_makeUMinus(threadData, _OMC_LIT16), _exp);
  _exp = tmpMeta1;

  if(_needsPositiveMax)
  {
    _exp = omc_NFConnectEquations_makePositiveMaxCall(threadData, _exp, _element, _flowThreshold, _variables);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumInside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_needsPositiveMax);
  _exp = omc_NFConnectEquations_sumInside2(threadData, _element, _flowThreshold, tmp1, _variables);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumOutside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  _exp = omc_NFConnectEquations_flowExp(threadData, _element);

  if(_needsPositiveMax)
  {
    _exp = omc_NFConnectEquations_makePositiveMaxCall(threadData, _exp, _element, _flowThreshold, _variables);
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumOutside2(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_needsPositiveMax);
  _exp = omc_NFConnectEquations_sumOutside2(threadData, _element, _flowThreshold, tmp1, _variables);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumInside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _stream_exp = NULL;
  modelica_metatype _flow_exp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _stream_exp has no default value.
  // _flow_exp has no default value.
  _stream_exp = omc_NFConnectEquations_streamFlowExp(threadData, _element ,&_flow_exp);

  tmpMeta1 = mmc_mk_box3(20, &NFExpression_UNARY__desc, omc_NFOperator_makeUMinus(threadData, _OMC_LIT16), _flow_exp);
  _flow_exp = tmpMeta1;

  if(_needsPositiveMax)
  {
    _flow_exp = omc_NFConnectEquations_makePositiveMaxCall(threadData, _flow_exp, _element, _flowThreshold, _variables);
  }

  tmpMeta2 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _flow_exp, omc_NFOperator_makeMul(threadData, _OMC_LIT16), _stream_exp);
  _exp = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumInside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_needsPositiveMax);
  _exp = omc_NFConnectEquations_sumInside1(threadData, _element, _flowThreshold, tmp1, _variables);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumOutside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_boolean _needsPositiveMax, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _stream_exp = NULL;
  modelica_metatype _flow_exp = NULL;
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
  // _exp has no default value.
  // _stream_exp has no default value.
  // _flow_exp has no default value.
  _stream_exp = omc_NFConnectEquations_streamFlowExp(threadData, _element ,&_flow_exp);

  if(_needsPositiveMax)
  {
    _flow_exp = omc_NFConnectEquations_makePositiveMaxCall(threadData, _flow_exp, _element, _flowThreshold, _variables);
  }

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta1, mmc_mk_none(), tmpMeta2, _OMC_LIT16, _OMC_LIT11, tmpMeta3, tmpMeta4, listArray(tmpMeta5), _OMC_LIT12, _OMC_LIT13);
  tmpMeta7 = mmc_mk_cons(_stream_exp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta13 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta8, mmc_mk_none(), tmpMeta9, _OMC_LIT16, _OMC_LIT11, tmpMeta10, tmpMeta11, listArray(tmpMeta12), _OMC_LIT12, _OMC_LIT13);
  tmpMeta14 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta6, tmpMeta7, omc_NFExpression_variability(threadData, _stream_exp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 9)))));
  tmpMeta15 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _flow_exp, omc_NFOperator_makeMul(threadData, _OMC_LIT16), tmpMeta14);
  _exp = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _exp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_sumOutside1(threadData_t *threadData, modelica_metatype _element, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables)
{
  modelica_integer tmp1;
  modelica_metatype _exp = NULL;
  tmp1 = mmc_unbox_integer(_needsPositiveMax);
  _exp = omc_NFConnectEquations_sumOutside1(threadData, _element, _flowThreshold, tmp1, _variables);
  /* skip box _exp; NFExpression */
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_flowExp(threadData_t *threadData, modelica_metatype _element)
{
  modelica_metatype _flowExp = NULL;
  modelica_metatype _flow_cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _flowExp has no default value.
  // _flow_cr has no default value.
  _flow_cr = omc_NFConnectEquations_associatedFlowCref(threadData, omc_NFConnector_name(threadData, _element));

  _flowExp = omc_NFExpression_fromCref(threadData, _flow_cr, 0 /* false */);
  _return: OMC_LABEL_UNUSED
  return _flowExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamFlowExp(threadData_t *threadData, modelica_metatype _element, modelica_metatype *out_flowExp)
{
  modelica_metatype _streamExp = NULL;
  modelica_metatype _flowExp = NULL;
  modelica_metatype _stream_cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _streamExp has no default value.
  // _flowExp has no default value.
  // _stream_cr has no default value.
  _stream_cr = omc_NFConnector_name(threadData, _element);

  _streamExp = omc_NFExpression_fromCref(threadData, _stream_cr, 0 /* false */);

  _flowExp = omc_NFExpression_fromCref(threadData, omc_NFConnectEquations_associatedFlowCref(threadData, _stream_cr), 0 /* false */);
  _return: OMC_LABEL_UNUSED
  if (out_flowExp) { *out_flowExp = _flowExp; }
  return _streamExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_sumMap(threadData_t *threadData, modelica_metatype _elements, modelica_fnptr _func, modelica_metatype _flowThreshold, modelica_metatype _needsPositiveMax, modelica_metatype _variables)
{
  modelica_metatype _exp = NULL;
  modelica_boolean _needs_positive_max;
  modelica_metatype _needs_positive_max_rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _needs_positive_max has no default value.
  // _needs_positive_max_rest has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _needsPositiveMax;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  tmp4 = mmc_unbox_integer(tmpMeta2);
  _needs_positive_max = tmp4  /* pattern as ty=Boolean */;
  _needs_positive_max_rest = tmpMeta3;

  _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), listHead(_elements), _flowThreshold, mmc_mk_boolean(_needs_positive_max), _variables) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, listHead(_elements), _flowThreshold, mmc_mk_boolean(_needs_positive_max), _variables);

  {
    modelica_metatype _e;
    for (tmpMeta5 = listRest(_elements); !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _e = MMC_CAR(tmpMeta5);
      /* Pattern-matching assignment */
      tmpMeta6 = _needs_positive_max_rest;
      if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_CAR(tmpMeta6);
      tmpMeta8 = MMC_CDR(tmpMeta6);
      tmp9 = mmc_unbox_integer(tmpMeta7);
      _needs_positive_max = tmp9  /* pattern as ty=Boolean */;
      _needs_positive_max_rest = tmpMeta8;

      tmpMeta10 = mmc_mk_box4(19, &NFExpression_BINARY__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e, _flowThreshold, mmc_mk_boolean(_needs_positive_max), _variables) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e, _flowThreshold, mmc_mk_boolean(_needs_positive_max), _variables), omc_NFOperator_makeAdd(threadData, _OMC_LIT16), _exp);
      _exp = tmpMeta10;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlow(threadData_t *threadData, modelica_metatype _conn, modelica_boolean _isInside, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow)
{
  modelica_boolean _positiveFlow;
  modelica_boolean _nonNegativeFlow;
  modelica_metatype _oexp = NULL;
  modelica_metatype _exp = NULL;
  modelica_integer _var;
  modelica_metatype _v = NULL;
  modelica_boolean _is_inside;
  modelica_boolean _negated;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _positiveFlow = 0 /* false */;
  _nonNegativeFlow = 0 /* false */;
  // _oexp has no default value.
  // _exp has no default value.
  // _var has no default value.
  // _v has no default value.
  _is_inside = _isInside;
  // _negated has no default value.
  _v = omc_NFConnectEquations_lookupFlowVarInConnector(threadData, _conn, _variables, _replacements ,&_negated);

  if(_negated)
  {
    _is_inside = (!_is_inside);
  }

  _oexp = omc_NFConnectEquations_lookupAttrInVar(threadData, (_is_inside?_OMC_LIT15:_OMC_LIT14), _v);

  if(isSome(_oexp))
  {
    _exp = omc_NFConnectEquations_evaluateAttribute(threadData, omc_Util_getOption(threadData, _oexp));

    if(_is_inside)
    {
      _positiveFlow = omc_NFExpression_isNegative(threadData, _exp);

      _nonNegativeFlow = omc_NFExpression_isNonPositive(threadData, _exp);
    }
    else
    {
      _positiveFlow = omc_NFExpression_isPositive(threadData, _exp);

      _nonNegativeFlow = omc_NFExpression_isNonNegative(threadData, _exp);
    }
  }

  if((!_positiveFlow))
  {
    _oexp = omc_NFBinding_getExpOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 4))));

    _positiveFlow = mmc_unbox_boolean(omc_Util_applyOptionOrDefault(threadData, _oexp, (_is_inside?boxvar_NFExpression_isNegative:boxvar_NFExpression_isPositive), mmc_mk_boolean(0 /* false */)));

    _nonNegativeFlow = (_nonNegativeFlow || _positiveFlow);
  }
  _return: OMC_LABEL_UNUSED
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = _nonNegativeFlow; }
  return _positiveFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlow(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _isInside, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow)
{
  modelica_integer tmp1;
  modelica_boolean _nonNegativeFlow;
  modelica_boolean _positiveFlow;
  modelica_metatype out_positiveFlow;
  tmp1 = mmc_unbox_integer(_isInside);
  _positiveFlow = omc_NFConnectEquations_hasFlow(threadData, _conn, tmp1, _variables, _replacements, &_nonNegativeFlow);
  out_positiveFlow = mmc_mk_icon(_positiveFlow);
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = mmc_mk_icon(_nonNegativeFlow); }
  return out_positiveFlow;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow)
{
  modelica_boolean _positiveFlow;
  modelica_boolean _nonNegativeFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveFlow has no default value.
  // _nonNegativeFlow has no default value.
  _positiveFlow = omc_NFConnectEquations_hasFlow(threadData, _conn, 1 /* true */, _variables, _replacements ,&_nonNegativeFlow);
  _return: OMC_LABEL_UNUSED
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = _nonNegativeFlow; }
  return _positiveFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlowInside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow)
{
  modelica_boolean _nonNegativeFlow;
  modelica_boolean _positiveFlow;
  modelica_metatype out_positiveFlow;
  _positiveFlow = omc_NFConnectEquations_hasFlowInside(threadData, _conn, _variables, _replacements, &_nonNegativeFlow);
  out_positiveFlow = mmc_mk_icon(_positiveFlow);
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = mmc_mk_icon(_nonNegativeFlow); }
  return out_positiveFlow;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_NFConnectEquations_hasFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_boolean *out_nonNegativeFlow)
{
  modelica_boolean _positiveFlow;
  modelica_boolean _nonNegativeFlow;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _positiveFlow has no default value.
  // _nonNegativeFlow has no default value.
  _positiveFlow = omc_NFConnectEquations_hasFlow(threadData, _conn, 1 /* true */, _variables, _replacements ,&_nonNegativeFlow);
  _return: OMC_LABEL_UNUSED
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = _nonNegativeFlow; }
  return _positiveFlow;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_hasFlowOutside(threadData_t *threadData, modelica_metatype _conn, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_nonNegativeFlow)
{
  modelica_boolean _nonNegativeFlow;
  modelica_boolean _positiveFlow;
  modelica_metatype out_positiveFlow;
  _positiveFlow = omc_NFConnectEquations_hasFlowOutside(threadData, _conn, _variables, _replacements, &_nonNegativeFlow);
  out_positiveFlow = mmc_mk_icon(_positiveFlow);
  if (out_nonNegativeFlow) { *out_nonNegativeFlow = mmc_mk_icon(_nonNegativeFlow); }
  return out_positiveFlow;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_setRequiresPositiveMax(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _variables, modelica_metatype _replacements, modelica_metatype *out_insidePositiveMax)
{
  modelica_metatype _outsidePositiveMax = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _insidePositiveMax = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _positive_flow;
  modelica_boolean _non_negative_flow;
  modelica_boolean _any_positive_flow;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outsidePositiveMax = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _insidePositiveMax = tmpMeta2;
  // _positive_flow has no default value.
  // _non_negative_flow has no default value.
  _any_positive_flow = 0 /* false */;
  {
    modelica_metatype _c;
    for (tmpMeta3 = _outsideElements; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _c = MMC_CAR(tmpMeta3);
      _positive_flow = omc_NFConnectEquations_hasFlowOutside(threadData, _c, _variables, _replacements ,&_non_negative_flow);

      _any_positive_flow = (_any_positive_flow || _positive_flow);

      tmpMeta4 = mmc_mk_cons(mmc_mk_boolean((!_non_negative_flow)), _outsidePositiveMax);
      _outsidePositiveMax = tmpMeta4;
    }
  }

  {
    modelica_metatype _c;
    for (tmpMeta6 = _insideElements; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _c = MMC_CAR(tmpMeta6);
      _positive_flow = omc_NFConnectEquations_hasFlowInside(threadData, _c, _variables, _replacements ,&_non_negative_flow);

      _any_positive_flow = (_any_positive_flow || _positive_flow);

      tmpMeta7 = mmc_mk_cons(mmc_mk_boolean((!_non_negative_flow)), _insidePositiveMax);
      _insidePositiveMax = tmpMeta7;
    }
  }

  if(_any_positive_flow)
  {
    _outsidePositiveMax = listReverseInPlace(_outsidePositiveMax);

    _insidePositiveMax = listReverseInPlace(_insidePositiveMax);
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp10;
      modelica_metatype tmpMeta11;
      modelica_metatype __omcQ_24tmpVar2;
      modelica_integer tmp12;
      modelica_metatype _c_loopVar = 0;
      modelica_metatype _c;
      _c_loopVar = _outsideElements;
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta11; /* defaultValue */
      tmp10 = &__omcQ_24tmpVar3;
      while(1) {
        tmp12 = 1;
        if (!listEmpty(_c_loopVar)) {
          _c = MMC_CAR(_c_loopVar);
          _c_loopVar = MMC_CDR(_c_loopVar);
          tmp12--;
        }
        if (tmp12 == 0) {
          __omcQ_24tmpVar2 = mmc_mk_boolean(1 /* true */);
          *tmp10 = mmc_mk_cons(__omcQ_24tmpVar2,0);
          tmp10 = &MMC_CDR(*tmp10);
        } else if (tmp12 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp10 = mmc_mk_nil();
      tmpMeta9 = __omcQ_24tmpVar3;
    }
    _outsidePositiveMax = tmpMeta9;

    {
      modelica_metatype __omcQ_24tmpVar5;
      modelica_metatype* tmp14;
      modelica_metatype tmpMeta15;
      modelica_metatype __omcQ_24tmpVar4;
      modelica_integer tmp16;
      modelica_metatype _c_loopVar = 0;
      modelica_metatype _c;
      _c_loopVar = _insideElements;
      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar5 = tmpMeta15; /* defaultValue */
      tmp14 = &__omcQ_24tmpVar5;
      while(1) {
        tmp16 = 1;
        if (!listEmpty(_c_loopVar)) {
          _c = MMC_CAR(_c_loopVar);
          _c_loopVar = MMC_CDR(_c_loopVar);
          tmp16--;
        }
        if (tmp16 == 0) {
          __omcQ_24tmpVar4 = mmc_mk_boolean(1 /* true */);
          *tmp14 = mmc_mk_cons(__omcQ_24tmpVar4,0);
          tmp14 = &MMC_CDR(*tmp14);
        } else if (tmp16 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp14 = mmc_mk_nil();
      tmpMeta13 = __omcQ_24tmpVar5;
    }
    _insidePositiveMax = tmpMeta13;
  }
  _return: OMC_LABEL_UNUSED
  if (out_insidePositiveMax) { *out_insidePositiveMax = _insidePositiveMax; }
  return _outsidePositiveMax;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamSumEquationExp(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _flowThreshold, modelica_metatype _fallback, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_metatype _sumExp = NULL;
  modelica_metatype _outside_sum1 = NULL;
  modelica_metatype _outside_sum2 = NULL;
  modelica_metatype _inside_sum1 = NULL;
  modelica_metatype _inside_sum2 = NULL;
  modelica_metatype _outside_non_negative = NULL;
  modelica_metatype _inside_non_negative = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sumExp has no default value.
  // _outside_sum1 has no default value.
  // _outside_sum2 has no default value.
  // _inside_sum1 has no default value.
  // _inside_sum2 has no default value.
  // _outside_non_negative has no default value.
  // _inside_non_negative has no default value.
  _outside_non_negative = omc_NFConnectEquations_setRequiresPositiveMax(threadData, _outsideElements, _insideElements, _variables, _replacements ,&_inside_non_negative);

  { /* match expression */
    modelica_boolean tmp4_1;modelica_boolean tmp4_2;
    tmp4_1 = listEmpty(_outsideElements);
    tmp4_2 = listEmpty(_insideElements);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _fallback;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _inside_sum1 = omc_NFConnectEquations_sumMap(threadData, _insideElements, boxvar_NFConnectEquations_sumInside1, _flowThreshold, _inside_non_negative, _variables);

          _inside_sum2 = omc_NFConnectEquations_sumMap(threadData, _insideElements, boxvar_NFConnectEquations_sumInside2, _flowThreshold, _inside_non_negative, _variables);

          tmpMeta6 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _inside_sum1, omc_NFOperator_makeDiv(threadData, _OMC_LIT16), _inside_sum2);
          _sumExp = tmpMeta6;
          tmpMeta1 = omc_NFConnectEquations_makeInStreamDivCall(threadData, _sumExp, _fallback);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (1 /* true */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _outside_sum1 = omc_NFConnectEquations_sumMap(threadData, _outsideElements, boxvar_NFConnectEquations_sumOutside1, _flowThreshold, _outside_non_negative, _variables);

          _outside_sum2 = omc_NFConnectEquations_sumMap(threadData, _outsideElements, boxvar_NFConnectEquations_sumOutside2, _flowThreshold, _outside_non_negative, _variables);

          tmpMeta7 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _outside_sum1, omc_NFOperator_makeDiv(threadData, _OMC_LIT16), _outside_sum2);
          _sumExp = tmpMeta7;
          tmpMeta1 = omc_NFConnectEquations_makeInStreamDivCall(threadData, _sumExp, _fallback);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (0 /* false */ != tmp4_1) goto tmp3_end;
          if (0 /* false */ != tmp4_2) goto tmp3_end;
          /* Pattern matching succeeded */
          _outside_sum1 = omc_NFConnectEquations_sumMap(threadData, _outsideElements, boxvar_NFConnectEquations_sumOutside1, _flowThreshold, _outside_non_negative, _variables);

          _outside_sum2 = omc_NFConnectEquations_sumMap(threadData, _outsideElements, boxvar_NFConnectEquations_sumOutside2, _flowThreshold, _outside_non_negative, _variables);

          _inside_sum1 = omc_NFConnectEquations_sumMap(threadData, _insideElements, boxvar_NFConnectEquations_sumInside1, _flowThreshold, _inside_non_negative, _variables);

          _inside_sum2 = omc_NFConnectEquations_sumMap(threadData, _insideElements, boxvar_NFConnectEquations_sumInside2, _flowThreshold, _inside_non_negative, _variables);

          tmpMeta8 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _outside_sum1, omc_NFOperator_makeAdd(threadData, _OMC_LIT16), _inside_sum1);
          tmpMeta9 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _outside_sum2, omc_NFOperator_makeAdd(threadData, _OMC_LIT16), _inside_sum2);
          tmpMeta10 = mmc_mk_box4(19, &NFExpression_BINARY__desc, tmpMeta8, omc_NFOperator_makeDiv(threadData, _OMC_LIT16), tmpMeta9);
          _sumExp = tmpMeta10;
          tmpMeta1 = omc_NFConnectEquations_makeInStreamDivCall(threadData, _sumExp, _fallback);
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
  _sumExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sumExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_streamEquationGeneral(threadData_t *threadData, modelica_metatype _outsideElements, modelica_metatype _insideElements, modelica_metatype _flowThreshold, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _reduced_outside = NULL;
  modelica_metatype _outside = NULL;
  modelica_metatype _cref_exp = NULL;
  modelica_metatype _res = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _equations = tmpMeta1;
  // _reduced_outside has no default value.
  // _outside has no default value.
  // _cref_exp has no default value.
  // _res has no default value.
  // _src has no default value.
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp5;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _outsideElements;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar7;
    while(1) {
      tmp5 = 1;
      while (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        if ((!omc_NFConnectEquations_isNoFlowOutside(threadData, _s, _variables, mmc_mk_none()))) {
          tmp5--;
          break;
        }
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar6 = _s;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar7;
  }
  _reduced_outside = tmpMeta2;

  {
    modelica_metatype _e;
    for (tmpMeta6 = _outsideElements; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _e = MMC_CAR(tmpMeta6);
      _cref_exp = omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), 0 /* false */);

      _outside = omc_NFConnectEquations_removeStreamSetElement(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), _reduced_outside);

      _res = omc_NFConnectEquations_streamSumEquationExp(threadData, _outside, _insideElements, _flowThreshold, _OMC_LIT59, _variables, _replacements);

      _src = omc_ElementSource_addAdditionalComment(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 6))), _OMC_LIT60);

      tmpMeta7 = mmc_mk_cons(omc_NFEquation_makeEquality(threadData, _cref_exp, _res, _OMC_LIT16, _src, _OMC_LIT6, 3), _equations);
      _equations = tmpMeta7;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _equations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateStreamEquations(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _flowThreshold, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _cr1 = NULL;
  modelica_metatype _cr2 = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype _src1 = NULL;
  modelica_metatype _src2 = NULL;
  modelica_metatype _cref1 = NULL;
  modelica_metatype _cref2 = NULL;
  modelica_metatype _e1 = NULL;
  modelica_metatype _e2 = NULL;
  modelica_metatype _inside = NULL;
  modelica_metatype _outside = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equations has no default value.
  // _cr1 has no default value.
  // _cr2 has no default value.
  // _src has no default value.
  // _src1 has no default value.
  // _src2 has no default value.
  // _cref1 has no default value.
  // _cref2 has no default value.
  // _e1 has no default value.
  // _e2 has no default value.
  // _inside has no default value.
  // _outside has no default value.
  _outside = omc_List_splitOnTrue(threadData, _elements, boxvar_NFConnector_isOutside ,&_inside);

  {
    modelica_metatype __omcQ_24tmpVar9;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar8;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _inside;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar9 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar9;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        if ((!omc_NFConnectEquations_isNoFlowInside(threadData, _s, _variables, mmc_mk_none()))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar8 = _s;
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
  _inside = tmpMeta1;

  { /* match expression */
    modelica_metatype tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _inside;
    tmp8_2 = _outside;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (!listEmpty(tmp8_2)) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_CAR(tmp8_1);
          tmpMeta11 = MMC_CDR(tmp8_1);
          if (!listEmpty(tmpMeta11)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta5 = tmpMeta12;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (!listEmpty(tmp8_2)) goto tmp7_end;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta13 = MMC_CAR(tmp8_1);
          tmpMeta14 = MMC_CDR(tmp8_1);
          if (listEmpty(tmpMeta14)) goto tmp7_end;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          if (!listEmpty(tmpMeta16)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta5 = tmpMeta17;
          goto tmp7_done;
        }
        case 2: {
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
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (!listEmpty(tmp8_1)) goto tmp7_end;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta18 = MMC_CAR(tmp8_2);
          tmpMeta19 = MMC_CDR(tmp8_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,5) == 0) goto tmp7_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 6));
          if (listEmpty(tmpMeta19)) goto tmp7_end;
          tmpMeta22 = MMC_CAR(tmpMeta19);
          tmpMeta23 = MMC_CDR(tmpMeta19);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,5) == 0) goto tmp7_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 6));
          if (!listEmpty(tmpMeta23)) goto tmp7_end;
          _cr1 = tmpMeta20;
          _src1 = tmpMeta21;
          _cr2 = tmpMeta24;
          _src2 = tmpMeta25;
          /* Pattern matching succeeded */
          _cref1 = omc_NFExpression_fromCref(threadData, _cr1, 0 /* false */);

          _cref2 = omc_NFExpression_fromCref(threadData, _cr2, 0 /* false */);

          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta26, mmc_mk_none(), tmpMeta27, _OMC_LIT16, _OMC_LIT11, tmpMeta28, tmpMeta29, listArray(tmpMeta30), _OMC_LIT12, _OMC_LIT13);
          tmpMeta32 = mmc_mk_cons(_cref2, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta38 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta33, mmc_mk_none(), tmpMeta34, _OMC_LIT16, _OMC_LIT11, tmpMeta35, tmpMeta36, listArray(tmpMeta37), _OMC_LIT12, _OMC_LIT13);
          tmpMeta39 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta31, tmpMeta32, omc_NFExpression_variability(threadData, _cref2), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 9)))));
          _e1 = tmpMeta39;

          tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta45 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta40, mmc_mk_none(), tmpMeta41, _OMC_LIT16, _OMC_LIT11, tmpMeta42, tmpMeta43, listArray(tmpMeta44), _OMC_LIT12, _OMC_LIT13);
          tmpMeta46 = mmc_mk_cons(_cref1, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta52 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT58, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta47, mmc_mk_none(), tmpMeta48, _OMC_LIT16, _OMC_LIT11, tmpMeta49, tmpMeta50, listArray(tmpMeta51), _OMC_LIT12, _OMC_LIT13);
          tmpMeta53 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta45, tmpMeta46, omc_NFExpression_variability(threadData, _cref1), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 9)))));
          _e2 = tmpMeta53;

          _src = omc_ElementSource_mergeSources(threadData, _src1, _src2);
          tmpMeta54 = mmc_mk_cons(omc_NFEquation_makeEquality(threadData, _cref1, _e1, _OMC_LIT16, _src, _OMC_LIT6, 3), mmc_mk_cons(omc_NFEquation_makeEquality(threadData, _cref2, _e2, _OMC_LIT16, _src, _OMC_LIT6, 3), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta5 = tmpMeta54;
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta55 = MMC_CAR(tmp8_1);
          tmpMeta56 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,0,5) == 0) goto tmp7_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 2));
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 6));
          if (!listEmpty(tmpMeta56)) goto tmp7_end;
          if (listEmpty(tmp8_2)) goto tmp7_end;
          tmpMeta59 = MMC_CAR(tmp8_2);
          tmpMeta60 = MMC_CDR(tmp8_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta59,0,5) == 0) goto tmp7_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 2));
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 6));
          if (!listEmpty(tmpMeta60)) goto tmp7_end;
          _cr1 = tmpMeta57;
          _src1 = tmpMeta58;
          _cr2 = tmpMeta61;
          _src2 = tmpMeta62;
          /* Pattern matching succeeded */
          _src = omc_ElementSource_mergeSources(threadData, _src1, _src2);
          tmpMeta63 = mmc_mk_cons(omc_NFEquation_makeCrefEquality(threadData, _cr1, _cr2, _OMC_LIT6, _src), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta5 = tmpMeta63;
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NFConnectEquations_streamEquationGeneral(threadData, _outside, _inside, _flowThreshold, _variables, _replacements);
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
  _equations = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _equations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeFlowExp(threadData_t *threadData, modelica_metatype _element)
{
  modelica_metatype _exp = NULL;
  modelica_integer _face;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _face has no default value.
  _exp = omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 2))), 0 /* false */);

  _face = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_element), 4))));

  if(((modelica_integer)_face == 2))
  {
    tmpMeta1 = mmc_mk_box3(20, &NFExpression_UNARY__desc, omc_NFOperator_makeUMinus(threadData, _OMC_LIT16), _exp);
    _exp = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generateFlowEquations(threadData_t *threadData, modelica_metatype _elements)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _c = NULL;
  modelica_metatype _c_rest = NULL;
  modelica_metatype _src = NULL;
  modelica_metatype _sum = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ranges = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _subs = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
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
  // _equations has no default value.
  // _c has no default value.
  // _c_rest has no default value.
  // _src has no default value.
  // _sum has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iterators = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ranges = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _subs = tmpMeta3;
  /* Pattern-matching assignment */
  tmpMeta4 = _elements;
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  _c = tmpMeta5;
  _c_rest = tmpMeta6;

  _src = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 6)));

  if(omc_NFConnector_isArray(threadData, _c))
  {
    _iterators = omc_NFFlatten_makeIterators(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2))), omc_NFType_arrayDims(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)))) ,&_ranges ,&_subs);

    _subs = listReverseInPlace(_subs);

    /* Pattern-matching assignment */
    {
      modelica_metatype __omcQ_24tmpVar11;
      modelica_metatype* tmp8;
      modelica_metatype tmpMeta9;
      modelica_metatype __omcQ_24tmpVar10;
      modelica_integer tmp10;
      modelica_metatype _e_loopVar = 0;
      modelica_metatype _e;
      _e_loopVar = _elements;
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar11 = tmpMeta9; /* defaultValue */
      tmp8 = &__omcQ_24tmpVar11;
      while(1) {
        tmp10 = 1;
        if (!listEmpty(_e_loopVar)) {
          _e = MMC_CAR(_e_loopVar);
          _e_loopVar = MMC_CDR(_e_loopVar);
          tmp10--;
        }
        if (tmp10 == 0) {
          __omcQ_24tmpVar10 = omc_NFConnector_addSubscripts(threadData, _subs, _e);
          *tmp8 = mmc_mk_cons(__omcQ_24tmpVar10,0);
          tmp8 = &MMC_CDR(*tmp8);
        } else if (tmp10 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp8 = mmc_mk_nil();
      tmpMeta7 = __omcQ_24tmpVar11;
    }
    tmpMeta11 = tmpMeta7;
    if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
    tmpMeta12 = MMC_CAR(tmpMeta11);
    tmpMeta13 = MMC_CDR(tmpMeta11);
    _c = tmpMeta12;
    _c_rest = tmpMeta13;
  }

  if(listEmpty(_c_rest))
  {
    _sum = omc_NFExpression_fromCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2))), 0 /* false */);
  }
  else
  {
    _sum = omc_NFConnectEquations_makeFlowExp(threadData, _c);

    {
      modelica_metatype _e;
      for (tmpMeta14 = _c_rest; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
      {
        _e = MMC_CAR(tmpMeta14);
        tmpMeta15 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _sum, omc_NFOperator_makeAdd(threadData, _OMC_LIT16), omc_NFConnectEquations_makeFlowExp(threadData, _e));
        _sum = tmpMeta15;

        _src = omc_ElementSource_mergeSources(threadData, _src, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 6))));
      }
    }
  }

  tmpMeta17 = mmc_mk_cons(omc_NFEquation_makeEquality(threadData, _sum, _OMC_LIT18, omc_NFType_arrayElementType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 3)))), _src, _OMC_LIT6, 3), MMC_REFSTRUCTLIT(mmc_nil));
  _equations = tmpMeta17;

  while(1)
  {
    if(!(!listEmpty(_iterators))) break;
    tmpMeta19 = mmc_mk_box6(5, &NFEquation_FOR__desc, listHead(_iterators), mmc_mk_some(listHead(_ranges)), _equations, _OMC_LIT6, _src);
    tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
    _equations = tmpMeta18;

    _iterators = listRest(_iterators);

    _ranges = listRest(_ranges);
  }
  _return: OMC_LABEL_UNUSED
  return _equations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeEqualityAssert(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsSource, modelica_metatype _rhsCref, modelica_metatype _rhsSource)
{
  modelica_metatype _equalityAssert = NULL;
  modelica_metatype _source = NULL;
  modelica_metatype _lhs_exp = NULL;
  modelica_metatype _rhs_exp = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _elem_ty = NULL;
  modelica_metatype _iterators = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _ranges = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _subs = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equalityAssert has no default value.
  // _source has no default value.
  // _lhs_exp has no default value.
  // _rhs_exp has no default value.
  // _exp has no default value.
  // _ty has no default value.
  // _elem_ty has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _iterators = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ranges = tmpMeta2;
  // _subs has no default value.
  _source = omc_ElementSource_mergeSources(threadData, _lhsSource, _rhsSource);

  _ty = omc_NFComponentRef_getSubscriptedType(threadData, _lhsCref, 0 /* false */);

  if(omc_NFType_isArray(threadData, _ty))
  {
    _iterators = omc_NFFlatten_makeIterators(threadData, _lhsCref, omc_NFType_arrayDims(threadData, _ty) ,&_ranges ,&_subs);

    _subs = listReverseInPlace(_subs);

    _lhs_exp = omc_NFExpression_fromCref(threadData, omc_NFComponentRef_mergeSubscripts(threadData, _subs, _lhsCref, 0 /* false */, 0 /* false */, 0 /* false */), 0 /* false */);

    _rhs_exp = omc_NFExpression_fromCref(threadData, omc_NFComponentRef_mergeSubscripts(threadData, _subs, _rhsCref, 0 /* false */, 0 /* false */, 0 /* false */), 0 /* false */);
  }
  else
  {
    _lhs_exp = omc_NFExpression_fromCref(threadData, _lhsCref, 0 /* false */);

    _rhs_exp = omc_NFExpression_fromCref(threadData, _rhsCref, 0 /* false */);
  }

  _elem_ty = omc_NFType_arrayElementType(threadData, _ty);

  if(omc_NFType_isReal(threadData, _elem_ty))
  {
    tmpMeta3 = mmc_mk_box4(19, &NFExpression_BINARY__desc, _lhs_exp, omc_NFOperator_makeSub(threadData, _elem_ty), _rhs_exp);
    _exp = tmpMeta3;

    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta9 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT62, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta4, mmc_mk_none(), tmpMeta5, _OMC_LIT16, _OMC_LIT11, tmpMeta6, tmpMeta7, listArray(tmpMeta8), _OMC_LIT12, _OMC_LIT13);
    tmpMeta10 = mmc_mk_cons(_exp, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta16 = mmc_mk_box15(3, &NFFunction_Function_FUNCTION__desc, _OMC_LIT62, _OMC_LIT6, _OMC_LIT46, _OMC_LIT46, tmpMeta11, mmc_mk_none(), tmpMeta12, _OMC_LIT16, _OMC_LIT11, tmpMeta13, tmpMeta14, listArray(tmpMeta15), _OMC_LIT12, _OMC_LIT13);
    tmpMeta17 = mmc_mk_box2(16, &NFExpression_CALL__desc, omc_NFCall_makeTypedCall(threadData, tmpMeta9, tmpMeta10, omc_NFExpression_variability(threadData, _exp), 1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 9)))));
    _exp = tmpMeta17;

    tmpMeta18 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _exp, omc_NFOperator_makeLessEq(threadData, _elem_ty), _OMC_LIT18, mmc_mk_integer(((modelica_integer) -1)));
    _exp = tmpMeta18;
  }
  else
  {
    tmpMeta19 = mmc_mk_box5(23, &NFExpression_RELATION__desc, _lhs_exp, omc_NFOperator_makeEqual(threadData, _elem_ty), _rhs_exp, mmc_mk_integer(((modelica_integer) -1)));
    _exp = tmpMeta19;
  }

  tmpMeta20 = mmc_mk_box6(8, &NFEquation_ASSERT__desc, _exp, _OMC_LIT64, _OMC_LIT72, _OMC_LIT6, _source);
  _equalityAssert = tmpMeta20;

  while(1)
  {
    if(!(!listEmpty(_iterators))) break;
    tmpMeta21 = mmc_mk_cons(_equalityAssert, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta22 = mmc_mk_box6(5, &NFEquation_FOR__desc, listHead(_iterators), mmc_mk_some(listHead(_ranges)), tmpMeta21, _OMC_LIT6, _source);
    _equalityAssert = tmpMeta22;

    _iterators = listRest(_iterators);

    _ranges = listRest(_ranges);
  }
  _return: OMC_LABEL_UNUSED
  return _equalityAssert;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_makeEqualityEquation(threadData_t *threadData, modelica_metatype _lhsCref, modelica_metatype _lhsSource, modelica_metatype _rhsCref, modelica_metatype _rhsSource)
{
  modelica_metatype _equalityEq = NULL;
  modelica_metatype _source = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equalityEq has no default value.
  // _source has no default value.
  _source = omc_ElementSource_mergeSources(threadData, _lhsSource, _rhsSource);

  _equalityEq = omc_NFEquation_makeCrefEquality(threadData, _lhsCref, _rhsCref, _OMC_LIT6, _source);
  _return: OMC_LABEL_UNUSED
  return _equalityEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_generatePotentialEquations(threadData_t *threadData, modelica_metatype _elements, modelica_metatype __omcQ_24in_5FconnectedLocalIOs, modelica_metatype *out_connectedLocalIOs)
{
  modelica_metatype _equations = NULL;
  modelica_metatype _connectedLocalIOs = NULL;
  modelica_metatype _c1 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _equations has no default value.
  _connectedLocalIOs = __omcQ_24in_5FconnectedLocalIOs;
  // _c1 has no default value.
  _c1 = listHead(_elements);

  if((omc_NFConnector_variability(threadData, _c1) > 3))
  {
    {
      modelica_metatype __omcQ_24tmpVar13;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_metatype __omcQ_24tmpVar12;
      modelica_integer tmp4;
      modelica_metatype _c2_loopVar = 0;
      modelica_metatype _c2;
      _c2_loopVar = listRest(_elements);
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar13 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar13;
      while(1) {
        tmp4 = 1;
        if (!listEmpty(_c2_loopVar)) {
          _c2 = MMC_CAR(_c2_loopVar);
          _c2_loopVar = MMC_CDR(_c2_loopVar);
          tmp4--;
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar12 = omc_NFConnectEquations_makeEqualityEquation(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 6))));
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
    _equations = tmpMeta1;

    if((omc_Flags_getConfigInt(threadData, _OMC_LIT76) > ((modelica_integer) 0)))
    {
      {
        modelica_metatype _c;
        for (tmpMeta5 = _elements; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
        {
          _c = MMC_CAR(tmpMeta5);
          if((omc_NFConnector_isInside(threadData, _c) && (omc_NFComponentRef_isInput(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)))) || omc_NFComponentRef_isOutput(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2)))))))
          {
            omc_UnorderedSet_add(threadData, omc_NFComponentRef_stripSubscripts(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c), 2))), NULL), _connectedLocalIOs);
          }
        }
      }
    }
  }
  else
  {
    if(omc_NFType_isEmptyArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 3)))))
    {
      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _equations = tmpMeta7;
    }
    else
    {
      {
        modelica_metatype __omcQ_24tmpVar15;
        modelica_metatype* tmp9;
        modelica_metatype tmpMeta10;
        modelica_metatype __omcQ_24tmpVar14;
        modelica_integer tmp11;
        modelica_metatype _c2_loopVar = 0;
        modelica_metatype _c2;
        _c2_loopVar = listRest(_elements);
        tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar15 = tmpMeta10; /* defaultValue */
        tmp9 = &__omcQ_24tmpVar15;
        while(1) {
          tmp11 = 1;
          if (!listEmpty(_c2_loopVar)) {
            _c2 = MMC_CAR(_c2_loopVar);
            _c2_loopVar = MMC_CDR(_c2_loopVar);
            tmp11--;
          }
          if (tmp11 == 0) {
            __omcQ_24tmpVar14 = omc_NFConnectEquations_makeEqualityAssert(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c1), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_c2), 6))));
            *tmp9 = mmc_mk_cons(__omcQ_24tmpVar14,0);
            tmp9 = &MMC_CDR(*tmp9);
          } else if (tmp11 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp9 = mmc_mk_nil();
        tmpMeta8 = __omcQ_24tmpVar15;
      }
      _equations = tmpMeta8;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_connectedLocalIOs) { *out_connectedLocalIOs = _connectedLocalIOs; }
  return _equations;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFConnectEquations_getSetType(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _cty;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _set;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,0,5) == 0) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _cty = tmp5  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  return _cty;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFConnectEquations_getSetType(threadData_t *threadData, modelica_metatype _set)
{
  modelica_integer _cty;
  modelica_metatype out_cty;
  _cty = omc_NFConnectEquations_getSetType(threadData, _set);
  out_cty = mmc_mk_icon(_cty);
  return out_cty;
}

static modelica_metatype closure2_NFConnectEquations_evaluateOperators(threadData_t *thData, modelica_metatype closure, modelica_metatype exp)
{
  modelica_metatype sets = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype setsArray = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype variables = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype ctable = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype replacements = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_NFConnectEquations_evaluateOperators(thData, exp, sets, setsArray, variables, ctable, replacements);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFConnectEquations_evaluateOperatorsShallow(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _evalExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _evalExp has no default value.
  tmpMeta1 = mmc_mk_box5(0, _sets, _setsArray, _variables, _ctable, _replacements);
  _evalExp = omc_NFExpression_mapShallow(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure2_NFConnectEquations_evaluateOperators,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return _evalExp;
}

DLLDirection
modelica_metatype omc_NFConnectEquations_evaluateOperators(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _sets, modelica_metatype _setsArray, modelica_metatype _variables, modelica_metatype _ctable, modelica_metatype _replacements)
{
  modelica_metatype _evalExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _evalExp has no default value.
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
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _call = tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp10_1;
            tmp10_1 = _call;
            {
              volatile mmc_switch_type tmp10;
              int tmp11;
              tmp10 = 0;
              for (; tmp10 < 4; tmp10++) {
                switch (MMC_SWITCH_CAST(tmp10)) {
                case 0: {
                  modelica_metatype tmpMeta12;
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,2,6) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  { /* match expression */
                    modelica_metatype tmp15_1;
                    tmp15_1 = omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2))));
                    {
                      volatile mmc_switch_type tmp15;
                      int tmp16;
                      tmp15 = 0;
                      for (; tmp15 < 4; tmp15++) {
                        switch (MMC_SWITCH_CAST(tmp15)) {
                        case 0: {
                          modelica_metatype tmpMeta17;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,1) == 0) goto tmp14_end;
                          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 2));
                          if (8 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT33), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp14_end;
                          /* Pattern matching succeeded */
                          tmpMeta12 = omc_NFConnectEquations_evaluateInStream(threadData, omc_NFExpression_toCref(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))))), _sets, _setsArray, _variables, _ctable, _replacements);
                          goto tmp14_done;
                        }
                        case 1: {
                          modelica_metatype tmpMeta18;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,1) == 0) goto tmp14_end;
                          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 2));
                          if (12 != MMC_STRLEN(tmpMeta18) || strcmp(MMC_STRINGDATA(_OMC_LIT34), MMC_STRINGDATA(tmpMeta18)) != 0) goto tmp14_end;
                          /* Pattern matching succeeded */
                          tmpMeta12 = omc_NFConnectEquations_evaluateActualStream(threadData, omc_NFExpression_toCref(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))))), _sets, _setsArray, _variables, _ctable, _replacements, NULL);
                          goto tmp14_done;
                        }
                        case 2: {
                          modelica_metatype tmpMeta19;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,1,1) == 0) goto tmp14_end;
                          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 2));
                          if (11 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT77), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp14_end;
                          /* Pattern matching succeeded */
                          tmpMeta12 = omc_NFCardinalityTable_evaluateCardinality(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), _ctable);
                          goto tmp14_done;
                        }
                        case 3: {
                          
                          /* Pattern matching succeeded */
                          tmpMeta12 = omc_NFConnectEquations_evaluateOperatorsShallow(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
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
                  }tmpMeta7 = tmpMeta12;
                  goto tmp9_done;
                }
                case 1: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,6,8) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6))), boxvar_NFConnectEquations_isStreamCall)) goto tmp9_end;
                  tmpMeta7 = omc_NFConnectEquations_evaluateOperatorReductionExp(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
                  goto tmp9_done;
                }
                case 2: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,4,5) == 0) goto tmp9_end;
                  
                  /* Pattern matching succeeded */
                  /* Check guard condition after assignments */
                  if (!omc_NFExpression_contains(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 5))), boxvar_NFConnectEquations_isStreamCall)) goto tmp9_end;
                  tmpMeta7 = omc_NFConnectEquations_evaluateOperatorArrayConstructorExp(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
                  goto tmp9_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta7 = omc_NFConnectEquations_evaluateOperatorsShallow(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
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
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          if (3 != tmp23) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,13,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,2,6) == 0) goto tmp3_end;
          
          _call = tmpMeta25;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_isNamedPathIdent(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT34)) goto tmp3_end;
          tmpMeta1 = omc_NFConnectEquations_evaluateActualStreamMul(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 2))), listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _sets, _setsArray, _variables, _ctable, _replacements);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,13,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,2,6) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,0,2) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          if (3 != tmp30) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,6,2) == 0) goto tmp3_end;
          
          _call = tmpMeta27;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_AbsynUtil_isNamedPathIdent(threadData, omc_NFFunction_Function_name(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 2)))), _OMC_LIT34)) goto tmp3_end;
          tmpMeta1 = omc_NFConnectEquations_evaluateActualStreamMul(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 4))), listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_call), 6)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_exp), 3))), _sets, _setsArray, _variables, _ctable, _replacements);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_NFConnectEquations_evaluateOperatorsShallow(threadData, _exp, _sets, _setsArray, _variables, _ctable, _replacements);
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
  _evalExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _evalExp;
}

DLLDirection
modelica_metatype omc_NFConnectEquations_generateStreamEquationsList(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _variables, modelica_metatype _replacements)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _set_eql = NULL;
  modelica_metatype _flow_threshold = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _equations = tmpMeta1;
  // _set_eql has no default value.
  // _flow_threshold has no default value.
  tmpMeta2 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(omc_Flags_getConfigReal(threadData, _OMC_LIT29)));
  _flow_threshold = tmpMeta2;

  {
    modelica_metatype _set;
    for (tmpMeta3 = _sets; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _set = MMC_CAR(tmpMeta3);
      _set_eql = omc_NFConnectEquations_generateStreamEquations(threadData, _set, _flow_threshold, _variables, mmc_mk_some(_replacements));

      _equations = listAppend(_set_eql, _equations);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _equations;
}

DLLDirection
modelica_metatype omc_NFConnectEquations_generateEquations(threadData_t *threadData, modelica_metatype _sets, modelica_metatype _variables, modelica_metatype *out_connectedLocalIOs, modelica_metatype *out_unhandledStreamSets)
{
  modelica_metatype _equations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _connectedLocalIOs = NULL;
  modelica_metatype _unhandledStreamSets = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _set_eql = NULL;
  modelica_fnptr _potfunc;
  modelica_metatype _flowThreshold = NULL;
  modelica_integer _cty;
  modelica_boolean _flow_alias_elim;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _equations = tmpMeta1;
  // _connectedLocalIOs has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unhandledStreamSets = tmpMeta2;
  // _set_eql has no default value.
  // _flowThreshold has no default value.
  // _cty has no default value.
  _flow_alias_elim = omc_Flags_isSet(threadData, _OMC_LIT80);
  setGlobalRoot(((modelica_integer) 27), mmc_mk_none());

  _connectedLocalIOs = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 13));

  _potfunc = (modelica_fnptr) boxvar_NFConnectEquations_generatePotentialEquations;

  tmpMeta3 = mmc_mk_box2(4, &NFExpression_REAL__desc, mmc_mk_real(omc_Flags_getConfigReal(threadData, _OMC_LIT29)));
  _flowThreshold = tmpMeta3;

  {
    modelica_metatype _set;
    for (tmpMeta4 = _sets, tmp12 = arrayLength(tmpMeta4), tmp11 = 1; tmp11 <= tmp12; tmp11++)
    {
      _set = arrayGet(tmpMeta4,tmp11);
      _cty = omc_NFConnectEquations_getSetType(threadData, _set);

      if(omc_NFPrefixes_ConnectorType_isPotential(threadData, _cty))
      {
        _set_eql = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_potfunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_potfunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_potfunc), 2))), _set, _connectedLocalIOs ,&_connectedLocalIOs) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_potfunc), 1)))) (threadData, _set, _connectedLocalIOs ,&_connectedLocalIOs);
      }
      else
      {
        if(omc_NFPrefixes_ConnectorType_isFlow(threadData, _cty))
        {
          _set_eql = omc_NFConnectEquations_generateFlowEquations(threadData, _set);
        }
        else
        {
          if(omc_NFPrefixes_ConnectorType_isStream(threadData, _cty))
          {
            if(_flow_alias_elim)
            {
              tmpMeta5 = mmc_mk_cons(_set, _unhandledStreamSets);
              _unhandledStreamSets = tmpMeta5;

              tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
              _set_eql = tmpMeta6;
            }
            else
            {
              _set_eql = omc_NFConnectEquations_generateStreamEquations(threadData, _set, _flowThreshold, _variables, mmc_mk_none());
            }
          }
          else
          {
            tmpMeta7 = stringAppend(_OMC_LIT81,omc_NFPrefixes_ConnectorType_toDebugString(threadData, _cty));
            tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT82);
            tmpMeta9 = stringAppend(tmpMeta8,omc_List_toString(threadData, _set, boxvar_NFConnector_toString, _OMC_LIT19, _OMC_LIT83, _OMC_LIT84, _OMC_LIT85, 1 /* true */, ((modelica_integer) 0)));
            omc_Error_addInternalError(threadData, tmpMeta9, _OMC_LIT86);

            MMC_THROW_INTERNAL();
          }
        }
      }

      _equations = listAppend(_set_eql, _equations);
    }
  }

  _unhandledStreamSets = listReverseInPlace(_unhandledStreamSets);
  _return: OMC_LABEL_UNUSED
  if (out_connectedLocalIOs) { *out_connectedLocalIOs = _connectedLocalIOs; }
  if (out_unhandledStreamSets) { *out_unhandledStreamSets = _unhandledStreamSets; }
  return _equations;
}

