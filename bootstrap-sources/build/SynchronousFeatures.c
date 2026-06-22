#include "omc_simulation_settings.h"
#include "SynchronousFeatures.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ": ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "]:  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,4,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "An independent subset of the model has imbalanced number of equations (%s) and variables (%s).\nvariables:\n%s\nequations:\n%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,122,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(199)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8,0.0);
#define _OMC_LIT8 MMC_REFREALLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "SynchronousFeatures.setVarPartition failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,42,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Too many equations, over-determined system. The model has %s equation(s) and %s variable(s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,92,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(33)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Too few equations, under-determined system. The model has %s equation(s) and %s variable(s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,92,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(32)),_OMC_LIT4,_OMC_LIT5,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "check eq "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,9,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Variable %s belongs to clocked and continuous partitions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,57,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(561)),_OMC_LIT17,_OMC_LIT5,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Equation belongs to clocked and continuous partitions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,54,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(567)),_OMC_LIT17,_OMC_LIT5,_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "SynchronousFeatures.detectEqPartitionCall1 failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,51,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/SynchronousFeatures.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,82,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT24_6,1.782113391e9);
#define _OMC_LIT24_6 MMC_REFREALLIT(_OMC_LIT_STRUCT24_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2737)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2737)),MMC_IMMEDIATE(MMC_TAGFIXNUM(79)),_OMC_LIT24_6}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "hold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,4,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,6,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "subSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,9,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "superSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,11,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "shiftSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,11,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "backSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,10,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "noClock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "CONT_PARTITION"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,14,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "CLOCKED_PARTITION"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,17,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "UNSPECIFIED_PARTITION"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,21,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Invalid form of clock equation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,30,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(569)),_OMC_LIT17,_OMC_LIT5,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "SynchronousFeatures.isClockEquation failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,44,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT39_6,1.782113391e9);
#define _OMC_LIT39_6 MMC_REFREALLIT(_OMC_LIT_STRUCT39_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2605)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(2605)),MMC_IMMEDIATE(MMC_TAGFIXNUM(79)),_OMC_LIT39_6}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,6) {&BackendDAE_IndexType_BASECLOCK__IDX__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,1,5) {&BackendDAE_BaseClockPartitionKind_CONTINUOUS__TIME__PARTITION__desc,}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,1,6) {&BackendDAE_BaseClockPartitionKind_UNSPECIFIED__PARTITION__desc,}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "$var"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,4,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT44,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT46,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,5) {&BackendDAE_TearingSelect_DEFAULT__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,1) {_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "$whenclk"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,8,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,7) {&DAE_Type_T__CLOCK__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,1,3) {&DAE_ClockKind_INFERRED__CLOCK__desc,}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,7) {&DAE_Exp_CLKCONST__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "$subclk"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,7,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,1,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,1,7) {&DAE_InlineType_NO__INLINE__desc,}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,1,3) {&DAE_TailCall_NO__TAIL__desc,}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,8,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,3,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "delay"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,5,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "spatialDistribution"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,19,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,7,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "terminal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,8,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "smooth"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,6,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,3,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "edge"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,4,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "change"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,6,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "reinit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,6,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,8,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "firstTick"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,9,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "interval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,8,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "Partition has different sub-clock %ss (%s) and (%s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,52,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(570)),_OMC_LIT17,_OMC_LIT5,_OMC_LIT79}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "shift"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,5,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "factor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,6,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,1,7) {&BackendDAE_IndexType_SUBCLOCK__IDX__desc,}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,3,3) {&MMath_Rational_RATIONAL__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,4,3) {&BackendDAE_SubClock_SUBCLOCK__desc,_OMC_LIT85,_OMC_LIT86,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,1,4) {&BackendDAE_SubClock_INFERED__SUBCLOCK__desc,}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Infered sub clock partitions have different solvers:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,52,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data " <->"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,4,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data ".\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,2,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "SynchronousFeatures.computeAbsoluteSubClock failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,52,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT93_6,1.782113391e9);
#define _OMC_LIT93_6 MMC_REFREALLIT(_OMC_LIT_STRUCT93_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(908)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(908)),MMC_IMMEDIATE(MMC_TAGFIXNUM(79)),_OMC_LIT93_6}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "SynchronousFeatures.getSubClockForClkConstructor failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,57,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT95_6,1.782113391e9);
#define _OMC_LIT95_6 MMC_REFREALLIT(_OMC_LIT_STRUCT95_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT23,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(793)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(793)),MMC_IMMEDIATE(MMC_TAGFIXNUM(79)),_OMC_LIT95_6}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,3,3) {&BackendDAE_BasePartition_BASE__PARTITION__desc,_OMC_LIT58,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,4,3) {&BackendDAE_SubPartition_SUB__PARTITION__desc,_OMC_LIT87,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,11,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,38,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT98,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT99}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT76}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,2,4) {&DAE_Operator_SUB__desc,_OMC_LIT102}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,2,6) {&DAE_Operator_DIV__desc,_OMC_LIT102}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT78}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT106,9,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT102,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT62,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT106 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,4,16) {&DAE_Exp_CALL__desc,_OMC_LIT105,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT106}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT66}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "Applying clock solverMethod %s instead of specified %s. Supported are: ImplicitEuler, SemiImplicitEuler, ExplicitEuler and ImplicitTrapezoid."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,141,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(568)),_OMC_LIT17,_OMC_LIT109,_OMC_LIT110}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "ImplicitEuler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,13,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "SemiImplicitEuler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,17,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "ImplicitTrapezoid"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,17,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "ExplicitEuler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,13,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "Explicit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,8,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "i"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,1,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,4,4) {&DAE_ComponentRef_CREF__IDENT__desc,_OMC_LIT117,_OMC_LIT118,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT119,_OMC_LIT118}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT121,2,5) {&DAE_Subscript_INDEX__desc,_OMC_LIT120}};
#define _OMC_LIT121 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,2,1) {_OMC_LIT121,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT123,2,3) {&DAE_Operator_ADD__desc,_OMC_LIT102}};
#define _OMC_LIT123 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT124,0.5);
#define _OMC_LIT124 MMC_REFREALLIT(_OMC_LIT_STRUCT124)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT125,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT124}};
#define _OMC_LIT125 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,2,5) {&DAE_Operator_MUL__desc,_OMC_LIT102}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT127,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT77}};
#define _OMC_LIT127 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT127)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT128,2,6) {&DAE_Type_T__BOOL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT128 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,9,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT128,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT62,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,4,16) {&DAE_Exp_CALL__desc,_OMC_LIT127,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT129}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT8}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "$_clkfire"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,9,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT134,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT133}};
#define _OMC_LIT134 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT134)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT135,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT135 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,9,3) {&DAE_CallAttributes_CALL__ATTR__desc,_OMC_LIT135,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT62,_OMC_LIT63,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "synchronous features pre-phase: synchronousFeatures\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,53,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "clock partitioning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,18,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "Base clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,11,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "Sub clocks"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,10,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "dumpSynchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,15,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "Dumps information of the clock partitioning."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,44,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT143,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(104)),_OMC_LIT141,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT142}};
#define _OMC_LIT143 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "Get clocked system in SynchronousFeatures.addContVarsEqs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,56,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "synchronous features post-phase: synchronousFeatures\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,54,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#include "util/modelica.h"

#include "SynchronousFeatures_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_SynchronousFeatures_subClockTreeString(threadData_t *threadData, modelica_metatype _treeIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockTreeString,2,0) {(void*) boxptr_SynchronousFeatures_subClockTreeString,0}};
#define boxvar_SynchronousFeatures_subClockTreeString MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockTreeString)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_subClkEqual(threadData_t *threadData, modelica_metatype _sc1, modelica_metatype _sc2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_subClkEqual(threadData_t *threadData, modelica_metatype _sc1, modelica_metatype _sc2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClkEqual,2,0) {(void*) boxptr_SynchronousFeatures_subClkEqual,0}};
#define boxvar_SynchronousFeatures_subClkEqual MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClkEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_partitionEquations(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _ixs, modelica_metatype _ea);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionEquations,2,0) {(void*) boxptr_SynchronousFeatures_partitionEquations,0}};
#define boxvar_SynchronousFeatures_partitionEquations MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createEqSystem(threadData_t *threadData, modelica_metatype _el, modelica_metatype _vl, modelica_metatype _rel, modelica_metatype _iTpl, modelica_metatype *out_oTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createEqSystem,2,0) {(void*) boxptr_SynchronousFeatures_createEqSystem,0}};
#define boxvar_SynchronousFeatures_createEqSystem MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createEqSystem)
PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_setVarPartition(threadData_t *threadData, modelica_metatype _varsPartition, modelica_integer _i, modelica_metatype _eqsIxs, modelica_metatype _eqsPartitions);
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_setVarPartition(threadData_t *threadData, modelica_metatype _varsPartition, modelica_metatype _i, modelica_metatype _eqsIxs, modelica_metatype _eqsPartitions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setVarPartition,2,0) {(void*) boxptr_SynchronousFeatures_setVarPartition,0}};
#define boxvar_SynchronousFeatures_setVarPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setVarPartition)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData_t *threadData, modelica_integer _idx, modelica_boolean _isRemovedIdx, modelica_integer _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocksWork(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _isRemovedIdx, modelica_metatype _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocksWork,2,0) {(void*) boxptr_SynchronousFeatures_partitionIndependentBlocksWork,0}};
#define boxvar_SynchronousFeatures_partitionIndependentBlocksWork MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocksWork)
PROTECTED_FUNCTION_STATIC modelica_integer omc_SynchronousFeatures_partitionIndependentBlocksMasked(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _mask, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _vars, modelica_metatype _rvars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocksMasked(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _mask, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _vars, modelica_metatype _rvars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocksMasked,2,0) {(void*) boxptr_SynchronousFeatures_partitionIndependentBlocksMasked,0}};
#define boxvar_SynchronousFeatures_partitionIndependentBlocksMasked MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocksMasked)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_partitionIndependentBlocks2(threadData_t *threadData, modelica_integer _eqIdx, modelica_integer _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocks2(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocks2,2,0) {(void*) boxptr_SynchronousFeatures_partitionIndependentBlocks2,0}};
#define boxvar_SynchronousFeatures_partitionIndependentBlocks2 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocks2)
PROTECTED_FUNCTION_STATIC modelica_integer omc_SynchronousFeatures_partitionIndependentBlocks(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocks(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocks,2,0) {(void*) boxptr_SynchronousFeatures_partitionIndependentBlocks,0}};
#define boxvar_SynchronousFeatures_partitionIndependentBlocks MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_partitionIndependentBlocks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setClockedPartition(threadData_t *threadData, modelica_metatype _inNewPartitionType, modelica_metatype _inOldPartitionType, modelica_metatype _inComp, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setClockedPartition,2,0) {(void*) boxptr_SynchronousFeatures_setClockedPartition,0}};
#define boxvar_SynchronousFeatures_setClockedPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setClockedPartition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getPartitionConflictError(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype *out_tokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getPartitionConflictError,2,0) {(void*) boxptr_SynchronousFeatures_getPartitionConflictError,0}};
#define boxvar_SynchronousFeatures_getPartitionConflictError MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getPartitionConflictError)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSystPartition(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inPartitionKind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSystPartition,2,0) {(void*) boxptr_SynchronousFeatures_setSystPartition,0}};
#define boxvar_SynchronousFeatures_setSystPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSystPartition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionCall1(threadData_t *threadData, modelica_boolean _expClocked, modelica_boolean _refClocked, modelica_metatype _inPartition, modelica_metatype _inExp, modelica_metatype _inRefs, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_boolean *out_cont);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionCall1(threadData_t *threadData, modelica_metatype _expClocked, modelica_metatype _refClocked, modelica_metatype _inPartition, modelica_metatype _inExp, modelica_metatype _inRefs, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_metatype *out_cont);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionCall1,2,0) {(void*) boxptr_SynchronousFeatures_detectEqPartitionCall1,0}};
#define boxvar_SynchronousFeatures_detectEqPartitionCall1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionCall1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inRefs, modelica_metatype _inPartition, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_boolean *out_cont);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inRefs, modelica_metatype _inPartition, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_metatype *out_cont);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionCall,2,0) {(void*) boxptr_SynchronousFeatures_detectEqPartitionCall,0}};
#define boxvar_SynchronousFeatures_detectEqPartitionCall MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionExp1,2,0) {(void*) boxptr_SynchronousFeatures_detectEqPartitionExp1,0}};
#define boxvar_SynchronousFeatures_detectEqPartitionExp1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionExp1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionExp,2,0) {(void*) boxptr_SynchronousFeatures_detectEqPartitionExp,0}};
#define boxvar_SynchronousFeatures_detectEqPartitionExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartitionExp)
PROTECTED_FUNCTION_STATIC modelica_string omc_SynchronousFeatures_printPartitionType(threadData_t *threadData, modelica_metatype _isClockedPartition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_printPartitionType,2,0) {(void*) boxptr_SynchronousFeatures_printPartitionType,0}};
#define boxvar_SynchronousFeatures_printPartitionType MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_printPartitionType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartition(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype *out_refsInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartition,2,0) {(void*) boxptr_SynchronousFeatures_detectEqPartition,0}};
#define boxvar_SynchronousFeatures_detectEqPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_detectEqPartition)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isClockEquation(threadData_t *threadData, modelica_metatype _inEq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isClockEquation(threadData_t *threadData, modelica_metatype _inEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isClockEquation,2,0) {(void*) boxptr_SynchronousFeatures_isClockEquation,0}};
#define boxvar_SynchronousFeatures_isClockEquation MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isClockEquation)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isClockExp(threadData_t *threadData, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isClockExp(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isClockExp,2,0) {(void*) boxptr_SynchronousFeatures_isClockExp,0}};
#define boxvar_SynchronousFeatures_isClockExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isClockExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_baseClockPartitioning(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared, modelica_metatype *out_outClockedSysts, modelica_metatype *out_outUnpartRemEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_baseClockPartitioning,2,0) {(void*) boxptr_SynchronousFeatures_baseClockPartitioning,0}};
#define boxvar_SynchronousFeatures_baseClockPartitioning MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_baseClockPartitioning)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getVarIxs(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inVariables);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getVarIxs,2,0) {(void*) boxptr_SynchronousFeatures_getVarIxs,0}};
#define boxvar_SynchronousFeatures_getVarIxs MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getVarIxs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substExp(threadData_t *threadData, modelica_metatype _inExps, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_integer _inCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substExp(threadData_t *threadData, modelica_metatype _inExps, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _inCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substExp,2,0) {(void*) boxptr_SynchronousFeatures_substExp,0}};
#define boxvar_SynchronousFeatures_substExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createEqVarPair(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inType, modelica_metatype _inExp, modelica_metatype *out_outEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createEqVarPair,2,0) {(void*) boxptr_SynchronousFeatures_createEqVarPair,0}};
#define boxvar_SynchronousFeatures_createEqVarPair MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createEqVarPair)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createVar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createVar,2,0) {(void*) boxptr_SynchronousFeatures_createVar,0}};
#define boxvar_SynchronousFeatures_createVar MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteExpsCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inAttr, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substituteExpsCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inAttr, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteExpsCall,2,0) {(void*) boxptr_SynchronousFeatures_substituteExpsCall,0}};
#define boxvar_SynchronousFeatures_substituteExpsCall MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteExpsCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substClockExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substClockExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substClockExp,2,0) {(void*) boxptr_SynchronousFeatures_substClockExp,0}};
#define boxvar_SynchronousFeatures_substClockExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substClockExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_isKnownOrConstantExp__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_outContinue, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isKnownOrConstantExp__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outContinue, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isKnownOrConstantExp__traverser,2,0) {(void*) boxptr_SynchronousFeatures_isKnownOrConstantExp__traverser,0}};
#define boxvar_SynchronousFeatures_isKnownOrConstantExp__traverser MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isKnownOrConstantExp__traverser)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isKnownOrConstantExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKnownVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isKnownOrConstantExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKnownVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isKnownOrConstantExp,2,0) {(void*) boxptr_SynchronousFeatures_isKnownOrConstantExp,0}};
#define boxvar_SynchronousFeatures_isKnownOrConstantExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isKnownOrConstantExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substClock(threadData_t *threadData, modelica_metatype _inClk, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substClock(threadData_t *threadData, modelica_metatype _inClk, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substClock,2,0) {(void*) boxptr_SynchronousFeatures_substClock,0}};
#define boxvar_SynchronousFeatures_substClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExp1,2,0) {(void*) boxptr_SynchronousFeatures_substitutePartitionOpExp1,0}};
#define boxvar_SynchronousFeatures_substitutePartitionOpExp1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExp1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExp,2,0) {(void*) boxptr_SynchronousFeatures_substitutePartitionOpExp,0}};
#define boxvar_SynchronousFeatures_substitutePartitionOpExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExps(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExps,2,0) {(void*) boxptr_SynchronousFeatures_substitutePartitionOpExps,0}};
#define boxvar_SynchronousFeatures_substitutePartitionOpExps MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substitutePartitionOpExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_splitClockVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype *out_outClockVarsMask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_splitClockVars,2,0) {(void*) boxptr_SynchronousFeatures_splitClockVars,0}};
#define boxvar_SynchronousFeatures_splitClockVars MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_splitClockVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_splitClockEqs(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype *out_outClockEqsMask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_splitClockEqs,2,0) {(void*) boxptr_SynchronousFeatures_splitClockEqs,0}};
#define boxvar_SynchronousFeatures_splitClockEqs MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_splitClockEqs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoExp1,2,0) {(void*) boxptr_SynchronousFeatures_collectSubclkInfoExp1,0}};
#define boxvar_SynchronousFeatures_collectSubclkInfoExp1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoExp1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectEquationArrayClocks(threadData_t *threadData, modelica_metatype _eqs, modelica_integer _partitionsCnt, modelica_metatype _partitions, modelica_metatype _partitionsWhenClocks, modelica_metatype _clksCnt, modelica_metatype _contPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewVars);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectEquationArrayClocks(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _partitionsCnt, modelica_metatype _partitions, modelica_metatype _partitionsWhenClocks, modelica_metatype _clksCnt, modelica_metatype _contPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectEquationArrayClocks,2,0) {(void*) boxptr_SynchronousFeatures_collectEquationArrayClocks,0}};
#define boxvar_SynchronousFeatures_collectEquationArrayClocks MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectEquationArrayClocks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfo(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inRemovedEqs, modelica_integer _inPartitionCnt, modelica_metatype _inPartitions, modelica_metatype _inReqsPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outNewVars, modelica_metatype *out_outContPartitions, modelica_metatype *out_oClksCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectSubclkInfo(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inRemovedEqs, modelica_metatype _inPartitionCnt, modelica_metatype _inPartitions, modelica_metatype _inReqsPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outNewVars, modelica_metatype *out_outContPartitions, modelica_metatype *out_oClksCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfo,2,0) {(void*) boxptr_SynchronousFeatures_collectSubclkInfo,0}};
#define boxvar_SynchronousFeatures_collectSubclkInfo MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClock(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inCnt, modelica_metatype _inExp, modelica_metatype *out_outEq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClock(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inCnt, modelica_metatype _inExp, modelica_metatype *out_outEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClock,2,0) {(void*) boxptr_SynchronousFeatures_createSubClock,0}};
#define boxvar_SynchronousFeatures_createSubClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClkName(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkIdx, modelica_metatype _inTy);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getSubClkName(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkIdx, modelica_metatype _inTy);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClkName,2,0) {(void*) boxptr_SynchronousFeatures_getSubClkName,0}};
#define boxvar_SynchronousFeatures_getSubClkName MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClkName)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substGetPartition(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substGetPartition,2,0) {(void*) boxptr_SynchronousFeatures_substGetPartition,0}};
#define boxvar_SynchronousFeatures_substGetPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substGetPartition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClockVarFactor(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outClkCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClockVarFactor(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outClkCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClockVarFactor,2,0) {(void*) boxptr_SynchronousFeatures_createSubClockVarFactor,0}};
#define boxvar_SynchronousFeatures_createSubClockVarFactor MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClockVarFactor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inContPartitions, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _source, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outClkCnt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectSubclkInfoCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inContPartitions, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _source, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outClkCnt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoCall,2,0) {(void*) boxptr_SynchronousFeatures_collectSubclkInfoCall,0}};
#define boxvar_SynchronousFeatures_collectSubclkInfoCall MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoCall)
PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_setContClockedPartition(threadData_t *threadData, modelica_boolean _inIsContClockedPartition, modelica_integer _inPartitionIdx, modelica_metatype _inContPartitions, modelica_metatype _source);
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_setContClockedPartition(threadData_t *threadData, modelica_metatype _inIsContClockedPartition, modelica_metatype _inPartitionIdx, modelica_metatype _inContPartitions, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setContClockedPartition,2,0) {(void*) boxptr_SynchronousFeatures_setContClockedPartition,0}};
#define boxvar_SynchronousFeatures_setContClockedPartition MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setContClockedPartition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClockVar(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outEq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClockVar(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClockVar,2,0) {(void*) boxptr_SynchronousFeatures_createSubClockVar,0}};
#define boxvar_SynchronousFeatures_createSubClockVar MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createSubClockVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoExp,2,0) {(void*) boxptr_SynchronousFeatures_collectSubclkInfoExp,0}};
#define boxvar_SynchronousFeatures_collectSubclkInfoExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectSubclkInfoExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setShift(threadData_t *threadData, modelica_metatype _oldVal, modelica_metatype _newVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setShift,2,0) {(void*) boxptr_SynchronousFeatures_setShift,0}};
#define boxvar_SynchronousFeatures_setShift MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setShift)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setFactor(threadData_t *threadData, modelica_metatype _oldVal, modelica_metatype _newVal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setFactor,2,0) {(void*) boxptr_SynchronousFeatures_setFactor,0}};
#define boxvar_SynchronousFeatures_setFactor MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setFactor)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isInferedBaseClock(threadData_t *threadData, modelica_metatype _subClk);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isInferedBaseClock(threadData_t *threadData, modelica_metatype _subClk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isInferedBaseClock,2,0) {(void*) boxptr_SynchronousFeatures_isInferedBaseClock,0}};
#define boxvar_SynchronousFeatures_isInferedBaseClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isInferedBaseClock)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isInferedSubClock(threadData_t *threadData, modelica_metatype _subClk);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isInferedSubClock(threadData_t *threadData, modelica_metatype _subClk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isInferedSubClock,2,0) {(void*) boxptr_SynchronousFeatures_isInferedSubClock,0}};
#define boxvar_SynchronousFeatures_isInferedSubClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isInferedSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_orderSubPartitions(threadData_t *threadData, modelica_integer _numParts, modelica_metatype _subclocks, modelica_metatype _order, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _remEqs, modelica_metatype _shared, modelica_integer _partitionOffset, modelica_metatype *out_subClksOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_orderSubPartitions(threadData_t *threadData, modelica_metatype _numParts, modelica_metatype _subclocks, modelica_metatype _order, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _remEqs, modelica_metatype _shared, modelica_metatype _partitionOffset, modelica_metatype *out_subClksOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_orderSubPartitions,2,0) {(void*) boxptr_SynchronousFeatures_orderSubPartitions,0}};
#define boxvar_SynchronousFeatures_orderSubPartitions MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_orderSubPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_subClockPartitioning(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_integer _off, modelica_metatype *out_outBaseClock, modelica_metatype *out_outSubClocks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_subClockPartitioning(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_metatype _off, modelica_metatype *out_outBaseClock, modelica_metatype *out_outSubClocks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockPartitioning,2,0) {(void*) boxptr_SynchronousFeatures_subClockPartitioning,0}};
#define boxvar_SynchronousFeatures_subClockPartitioning MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockPartitioning)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_boolean *out_cont, modelica_metatype *out_tplOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_replaceSampledClocks2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_metatype *out_cont, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks2,2,0) {(void*) boxptr_SynchronousFeatures_replaceSampledClocks2,0}};
#define boxvar_SynchronousFeatures_replaceSampledClocks2 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks1(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks1,2,0) {(void*) boxptr_SynchronousFeatures_replaceSampledClocks1,0}};
#define boxvar_SynchronousFeatures_replaceSampledClocks1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype *out_varsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks,2,0) {(void*) boxptr_SynchronousFeatures_replaceSampledClocks,0}};
#define boxvar_SynchronousFeatures_replaceSampledClocks MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_replaceSampledClocks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findHighestWhenPrefixIdx(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _idxIn, modelica_integer *out_idxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findHighestWhenPrefixIdx(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _idxIn, modelica_metatype *out_idxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findHighestWhenPrefixIdx,2,0) {(void*) boxptr_SynchronousFeatures_findHighestWhenPrefixIdx,0}};
#define boxvar_SynchronousFeatures_findHighestWhenPrefixIdx MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findHighestWhenPrefixIdx)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findBaseClockInterfaces1(threadData_t *threadData, modelica_metatype _eq, modelica_integer _eqIdx, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _clockEqsIn, modelica_metatype _subClockInterfaceEqIdxsIn, modelica_metatype _subClockInterfaceEqsIn, modelica_metatype *out_subClockInterfaceEqIdxsOut, modelica_metatype *out_subClockInterfaceEqsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findBaseClockInterfaces1(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _eqIdx, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _clockEqsIn, modelica_metatype _subClockInterfaceEqIdxsIn, modelica_metatype _subClockInterfaceEqsIn, modelica_metatype *out_subClockInterfaceEqIdxsOut, modelica_metatype *out_subClockInterfaceEqsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findBaseClockInterfaces1,2,0) {(void*) boxptr_SynchronousFeatures_findBaseClockInterfaces1,0}};
#define boxvar_SynchronousFeatures_findBaseClockInterfaces1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findBaseClockInterfaces1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findBaseClockInterfaces(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype *out_subClockInterfaceEqIdxs, modelica_metatype *out_subClockInterfaceEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findBaseClockInterfaces,2,0) {(void*) boxptr_SynchronousFeatures_findBaseClockInterfaces,0}};
#define boxvar_SynchronousFeatures_findBaseClockInterfaces MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findBaseClockInterfaces)
PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_removeEdge(threadData_t *threadData, modelica_integer _eq, modelica_integer _var, modelica_metatype _m, modelica_metatype _mT);
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_removeEdge(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _var, modelica_metatype _m, modelica_metatype _mT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeEdge,2,0) {(void*) boxptr_SynchronousFeatures_removeEdge,0}};
#define boxvar_SynchronousFeatures_removeEdge MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeEdge)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getBaseClock(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getBaseClock,2,0) {(void*) boxptr_SynchronousFeatures_getBaseClock,0}};
#define boxvar_SynchronousFeatures_getBaseClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getBaseClock)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isBaseClockEq(threadData_t *threadData, modelica_metatype _eq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isBaseClockEq(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isBaseClockEq,2,0) {(void*) boxptr_SynchronousFeatures_isBaseClockEq,0}};
#define boxvar_SynchronousFeatures_isBaseClockEq MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_isBaseClockEq)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_chooseBaseClock(threadData_t *threadData, modelica_metatype _clockEqs, modelica_integer _numPartitions, modelica_metatype _eqPartMap, modelica_metatype _eqs, modelica_integer *out_baseClockEqIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_chooseBaseClock(threadData_t *threadData, modelica_metatype _clockEqs, modelica_metatype _numPartitions, modelica_metatype _eqPartMap, modelica_metatype _eqs, modelica_metatype *out_baseClockEqIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_chooseBaseClock,2,0) {(void*) boxptr_SynchronousFeatures_chooseBaseClock,0}};
#define boxvar_SynchronousFeatures_chooseBaseClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_chooseBaseClock)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_getConnectedSubPartitions(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varPartMap, modelica_metatype _vars, modelica_integer *out_part1, modelica_integer *out_var1, modelica_metatype *out_sub1, modelica_integer *out_part2, modelica_integer *out_var2, modelica_metatype *out_sub2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getConnectedSubPartitions(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varPartMap, modelica_metatype _vars, modelica_metatype *out_part1, modelica_metatype *out_var1, modelica_metatype *out_sub1, modelica_metatype *out_part2, modelica_metatype *out_var2, modelica_metatype *out_sub2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getConnectedSubPartitions,2,0) {(void*) boxptr_SynchronousFeatures_getConnectedSubPartitions,0}};
#define boxvar_SynchronousFeatures_getConnectedSubPartitions MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getConnectedSubPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockSolver(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _solver);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockSolver,2,0) {(void*) boxptr_SynchronousFeatures_setSubClockSolver,0}};
#define boxvar_SynchronousFeatures_setSubClockSolver MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockSolver)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockShift(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _shift);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockShift,2,0) {(void*) boxptr_SynchronousFeatures_setSubClockShift,0}};
#define boxvar_SynchronousFeatures_setSubClockShift MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockShift)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockSolverOpt(threadData_t *threadData, modelica_metatype _subClk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockSolverOpt,2,0) {(void*) boxptr_SynchronousFeatures_getSubClockSolverOpt,0}};
#define boxvar_SynchronousFeatures_getSubClockSolverOpt MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockSolverOpt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockShift(threadData_t *threadData, modelica_metatype _subClk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockShift,2,0) {(void*) boxptr_SynchronousFeatures_getSubClockShift,0}};
#define boxvar_SynchronousFeatures_getSubClockShift MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockShift)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockFactor(threadData_t *threadData, modelica_metatype _subClk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockFactor,2,0) {(void*) boxptr_SynchronousFeatures_getSubClockFactor,0}};
#define boxvar_SynchronousFeatures_getSubClockFactor MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockFactor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockFactor(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _factor);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockFactor,2,0) {(void*) boxptr_SynchronousFeatures_setSubClockFactor,0}};
#define boxvar_SynchronousFeatures_setSubClockFactor MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSubClockFactor)
PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_addPartAdjacencyEdge(threadData_t *threadData, modelica_integer _part1, modelica_metatype _sub1, modelica_integer _part2, modelica_metatype _sub2, modelica_metatype _partAdjacency);
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_addPartAdjacencyEdge(threadData_t *threadData, modelica_metatype _part1, modelica_metatype _sub1, modelica_metatype _part2, modelica_metatype _sub2, modelica_metatype _partAdjacency);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_addPartAdjacencyEdge,2,0) {(void*) boxptr_SynchronousFeatures_addPartAdjacencyEdge,0}};
#define boxvar_SynchronousFeatures_addPartAdjacencyEdge MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_addPartAdjacencyEdge)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_mergeSolver(threadData_t *threadData, modelica_metatype _solver1, modelica_metatype _solver2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_mergeSolver,2,0) {(void*) boxptr_SynchronousFeatures_mergeSolver,0}};
#define boxvar_SynchronousFeatures_mergeSolver MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_mergeSolver)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_computeAbsoluteSubClock(threadData_t *threadData, modelica_metatype _preClock, modelica_metatype _subSeqClock);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_computeAbsoluteSubClock,2,0) {(void*) boxptr_SynchronousFeatures_computeAbsoluteSubClock,0}};
#define boxvar_SynchronousFeatures_computeAbsoluteSubClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_computeAbsoluteSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findSubClocks(threadData_t *threadData, modelica_integer _numPartitions, modelica_integer _baseClockEq, modelica_metatype _baseClk, modelica_metatype _baseClockConstructors, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _eqs, modelica_metatype _partAdjacency, modelica_metatype *out_outSubClocks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findSubClocks(threadData_t *threadData, modelica_metatype _numPartitions, modelica_metatype _baseClockEq, modelica_metatype _baseClk, modelica_metatype _baseClockConstructors, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _eqs, modelica_metatype _partAdjacency, modelica_metatype *out_outSubClocks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findSubClocks,2,0) {(void*) boxptr_SynchronousFeatures_findSubClocks,0}};
#define boxvar_SynchronousFeatures_findSubClocks MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_findSubClocks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSolverSubClock(threadData_t *threadData, modelica_metatype _baseClkIn, modelica_metatype _inSubClock, modelica_metatype *out_outSubClock);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSolverSubClock,2,0) {(void*) boxptr_SynchronousFeatures_setSolverSubClock,0}};
#define boxvar_SynchronousFeatures_setSolverSubClock MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_setSolverSubClock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockForClkConstructor(threadData_t *threadData, modelica_metatype _refClock, modelica_metatype _clk);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockForClkConstructor,2,0) {(void*) boxptr_SynchronousFeatures_getSubClockForClkConstructor,0}};
#define boxvar_SynchronousFeatures_getSubClockForClkConstructor MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubClockForClkConstructor)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubPartitionAdjacency(threadData_t *threadData, modelica_integer _numPartitions, modelica_integer _baseClockEq, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _clockedVarsMask, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype *out_order);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getSubPartitionAdjacency(threadData_t *threadData, modelica_metatype _numPartitions, modelica_metatype _baseClockEq, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _clockedVarsMask, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype *out_order);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubPartitionAdjacency,2,0) {(void*) boxptr_SynchronousFeatures_getSubPartitionAdjacency,0}};
#define boxvar_SynchronousFeatures_getSubPartitionAdjacency MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getSubPartitionAdjacency)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inComps, modelica_metatype *out_outComps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExp,2,0) {(void*) boxptr_SynchronousFeatures_removeHoldExp,0}};
#define boxvar_SynchronousFeatures_removeHoldExp MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inComps, modelica_metatype *out_outComps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExp1,2,0) {(void*) boxptr_SynchronousFeatures_removeHoldExp1,0}};
#define boxvar_SynchronousFeatures_removeHoldExp1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExp1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExpsSyst(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype *out_outHoldComps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExpsSyst,2,0) {(void*) boxptr_SynchronousFeatures_removeHoldExpsSyst,0}};
#define boxvar_SynchronousFeatures_removeHoldExpsSyst MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_removeHoldExpsSyst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_subClockPartitioning1(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype _inShared, modelica_metatype _inHoldComps, modelica_metatype *out_outShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockPartitioning1,2,0) {(void*) boxptr_SynchronousFeatures_subClockPartitioning1,0}};
#define boxvar_SynchronousFeatures_subClockPartitioning1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_subClockPartitioning1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectPrevVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inPrevVars, modelica_metatype *out_outPrevVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectPrevVars1,2,0) {(void*) boxptr_SynchronousFeatures_collectPrevVars1,0}};
#define boxvar_SynchronousFeatures_collectPrevVars1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectPrevVars1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectPrevVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inPrevVars, modelica_metatype *out_outPrevVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectPrevVars,2,0) {(void*) boxptr_SynchronousFeatures_collectPrevVars,0}};
#define boxvar_SynchronousFeatures_collectPrevVars MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_collectPrevVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_markClockedStates(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared, modelica_metatype _derVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_markClockedStates,2,0) {(void*) boxptr_SynchronousFeatures_markClockedStates,0}};
#define boxvar_SynchronousFeatures_markClockedStates MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_markClockedStates)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteFiniteDifference(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteFiniteDifference,2,0) {(void*) boxptr_SynchronousFeatures_substituteFiniteDifference,0}};
#define boxvar_SynchronousFeatures_substituteFiniteDifference MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteFiniteDifference)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteFiniteDifference1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteFiniteDifference1,2,0) {(void*) boxptr_SynchronousFeatures_substituteFiniteDifference1,0}};
#define boxvar_SynchronousFeatures_substituteFiniteDifference1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_substituteFiniteDifference1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_shiftDerVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_shiftDerVars,2,0) {(void*) boxptr_SynchronousFeatures_shiftDerVars,0}};
#define boxvar_SynchronousFeatures_shiftDerVars MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_shiftDerVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_shiftDerVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_shiftDerVars1,2,0) {(void*) boxptr_SynchronousFeatures_shiftDerVars1,0}};
#define boxvar_SynchronousFeatures_shiftDerVars1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_shiftDerVars1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getDerVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getDerVars,2,0) {(void*) boxptr_SynchronousFeatures_getDerVars,0}};
#define boxvar_SynchronousFeatures_getDerVars MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getDerVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getDerVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getDerVars1,2,0) {(void*) boxptr_SynchronousFeatures_getDerVars1,0}};
#define boxvar_SynchronousFeatures_getDerVars1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_getDerVars1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_treatClockedStates(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype _inShared, modelica_metatype *out_shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_treatClockedStates,2,0) {(void*) boxptr_SynchronousFeatures_treatClockedStates,0}};
#define boxvar_SynchronousFeatures_treatClockedStates MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_treatClockedStates)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_hasBoolClockWhenClause(threadData_t *threadData, modelica_metatype _eqn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_hasBoolClockWhenClause(threadData_t *threadData, modelica_metatype _eqn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_hasBoolClockWhenClause,2,0) {(void*) boxptr_SynchronousFeatures_hasBoolClockWhenClause,0}};
#define boxvar_SynchronousFeatures_hasBoolClockWhenClause MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_hasBoolClockWhenClause)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createBoolClockWhenClauses(threadData_t *threadData, modelica_metatype _inShared, modelica_metatype _inRemovedEqs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createBoolClockWhenClauses,2,0) {(void*) boxptr_SynchronousFeatures_createBoolClockWhenClauses,0}};
#define boxvar_SynchronousFeatures_createBoolClockWhenClauses MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_createBoolClockWhenClauses)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_clockPartitioning1(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SynchronousFeatures_clockPartitioning1,2,0) {(void*) boxptr_SynchronousFeatures_clockPartitioning1,0}};
#define boxvar_SynchronousFeatures_clockPartitioning1 MMC_REFSTRUCTLIT(boxvar_lit_SynchronousFeatures_clockPartitioning1)

PROTECTED_FUNCTION_STATIC modelica_string omc_SynchronousFeatures_subClockTreeString(threadData_t *threadData, modelica_metatype _treeIn)
{
  modelica_string _sOut = NULL;
  modelica_metatype _tpl = NULL;
  modelica_metatype _subClock = NULL;
  modelica_integer _i;
  modelica_integer _idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sOut = _OMC_LIT0;
  // _tpl has no default value.
  // _subClock has no default value.
  // _i has no default value.
  _idx = ((modelica_integer) 1);
  {
    modelica_metatype _tpl;
    for (tmpMeta1 = _treeIn, tmp14 = arrayLength(tmpMeta1), tmp13 = 1; tmp13 <= tmp14; tmp13++)
    {
      _tpl = arrayGet(tmpMeta1,tmp13);
      /* Pattern-matching assignment */
      tmpMeta2 = _tpl;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      _subClock = tmpMeta3;
      _i = tmp5  /* pattern as ty=Integer */;

      tmpMeta6 = stringAppend(intString(_idx),_OMC_LIT1);
      tmpMeta7 = stringAppend(tmpMeta6,intString(_i));
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT2);
      tmpMeta9 = stringAppend(tmpMeta8,omc_BackendDump_subClockString(threadData, _subClock));
      tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT3);
      tmpMeta11 = stringAppend(tmpMeta10,_sOut);
      _sOut = tmpMeta11;

      _idx = ((modelica_integer) 1) + _idx;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_subClkEqual(threadData_t *threadData, modelica_metatype _sc1, modelica_metatype _sc2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _sc1;
    tmp4_2 = _sc2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = ((omc_MMath_equals(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc2), 2)))) && omc_MMath_equals(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc2), 3))))) && omc_Util_optionEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc1), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sc2), 4))), boxvar_stringEqual));
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_subClkEqual(threadData_t *threadData, modelica_metatype _sc1, modelica_metatype _sc2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_SynchronousFeatures_subClkEqual(threadData, _sc1, _sc2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_partitionEquations(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _ixs, modelica_metatype _ea)
{
  modelica_metatype _restEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _ix;
  modelica_metatype _lst = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _restEqs = tmpMeta1;
  // _ix has no default value.
  // _lst has no default value.
  // _eq has no default value.
  tmp4 = omc_BackendEquation_getNumberOfEquations(threadData, _arr); tmp5 = ((modelica_integer) -1); tmp6 = ((modelica_integer) 1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = omc_BackendEquation_getNumberOfEquations(threadData, _arr); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      _ix = mmc_unbox_integer(arrayGet(_ixs,_i) /* DAE.ASUB */);

      _eq = omc_BackendEquation_get(threadData, _arr, _i);

      if((_ix == ((modelica_integer) 0)))
      {
        tmpMeta2 = mmc_mk_cons(_eq, _restEqs);
        _restEqs = tmpMeta2;
      }
      else
      {
        _lst = arrayGet(_ea,_ix) /* DAE.ASUB */;

        tmpMeta3 = mmc_mk_cons(_eq, _lst);
        _lst = tmpMeta3;

        arrayUpdate(_ea, _ix, _lst);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _restEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createEqSystem(threadData_t *threadData, modelica_metatype _el, modelica_metatype _vl, modelica_metatype _rel, modelica_metatype _iTpl, modelica_metatype *out_oTpl)
{
  modelica_metatype _syst = NULL;
  modelica_metatype _oTpl = NULL;
  modelica_metatype _arr = NULL;
  modelica_metatype _remArr = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _i1;
  modelica_integer _i2;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_string _s3 = NULL;
  modelica_string _s4 = NULL;
  modelica_metatype _crs = NULL;
  modelica_boolean _success;
  modelica_boolean _throwNoError;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _syst has no default value.
  // _oTpl has no default value.
  // _arr has no default value.
  // _remArr has no default value.
  // _vars has no default value.
  // _i1 has no default value.
  // _i2 has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  // _s3 has no default value.
  // _s4 has no default value.
  // _crs has no default value.
  // _success has no default value.
  // _throwNoError has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _success = tmp3  /* pattern as ty=Boolean */;
  _throwNoError = tmp5  /* pattern as ty=Boolean */;

  _vars = omc_BackendVariable_listVar1(threadData, _vl);

  _arr = omc_BackendEquation_listEquation(threadData, _el);

  _remArr = omc_BackendEquation_listEquation(threadData, _rel);

  _i1 = omc_BackendEquation_equationArraySize(threadData, _arr);

  _i2 = omc_BackendVariable_varsSize(threadData, _vars);

  if(((_i1 != _i2) && (!_throwNoError)))
  {
    _s1 = intString(_i1);

    _s2 = intString(_i2);

    _crs = omc_List_mapMap(threadData, _vl, boxvar_BackendVariable_varCref, boxvar_ComponentReferenceBasics_printComponentRefStr);

    _s3 = stringDelimitList(_crs, _OMC_LIT3);

    _s4 = omc_BackendDump_dumpEqnsStr(threadData, _el);

    tmpMeta6 = mmc_mk_cons(_s1, mmc_mk_cons(_s2, mmc_mk_cons(_s3, mmc_mk_cons(_s4, MMC_REFSTRUCTLIT(mmc_nil)))));
    omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta6, _OMC_LIT9);

    MMC_THROW_INTERNAL();
  }

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _syst = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _arr, tmpMeta7, _OMC_LIT10, _remArr);

  _success = (_success && (_i1 == _i2));

  tmpMeta8 = mmc_mk_box2(0, mmc_mk_boolean(_success), mmc_mk_boolean(_throwNoError));
  _oTpl = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  if (out_oTpl) { *out_oTpl = _oTpl; }
  return _syst;
}

PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_setVarPartition(threadData_t *threadData, modelica_metatype _varsPartition, modelica_integer _i, modelica_metatype _eqsIxs, modelica_metatype _eqsPartitions)
{
  modelica_integer _partitionIdx;
  modelica_metatype tmpMeta1;
  static int tmp2 = 0;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partitionIdx has no default value.
  {
    modelica_metatype _eq;
    for (tmpMeta1 = _eqsIxs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _eq = MMC_CAR(tmpMeta1);
      _partitionIdx = mmc_unbox_integer(arrayGet(_eqsPartitions,mmc_unbox_integer(_eq)) /* DAE.ASUB */);

      if((_partitionIdx != ((modelica_integer) 0)))
      {
        {
          if(!((mmc_unbox_integer(arrayGet(_varsPartition,_i) /* DAE.ASUB */) == ((modelica_integer) 0)) || (mmc_unbox_integer(arrayGet(_varsPartition,_i) /* DAE.ASUB */) == _partitionIdx)))
          {
            {
              FILE_INFO info = {"/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/SynchronousFeatures.mo",3025,7,3025,118,0};
              omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT11));
            }
          }
        }

        arrayUpdate(_varsPartition, _i, mmc_mk_integer(_partitionIdx));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_setVarPartition(threadData_t *threadData, modelica_metatype _varsPartition, modelica_metatype _i, modelica_metatype _eqsIxs, modelica_metatype _eqsPartitions)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_i);
  omc_SynchronousFeatures_setVarPartition(threadData, _varsPartition, tmp1, _eqsIxs, _eqsPartitions);
  return;
}

DLLDirection
modelica_metatype omc_SynchronousFeatures_partitionIndependentBlocksSplitBlocks(threadData_t *threadData, modelica_integer _n, modelica_metatype _inSyst, modelica_metatype _ixs, modelica_metatype _rixs, modelica_metatype _mT, modelica_metatype _rmT, modelica_boolean _throwNoError, modelica_metatype _funcs, modelica_boolean _isInitial, modelica_metatype *out_unpartRemovedEqs, modelica_metatype *out_varPartMap)
{
  modelica_metatype _systs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unpartRemovedEqs = NULL;
  modelica_metatype _varPartMap = NULL;
  modelica_metatype _ea = NULL;
  modelica_metatype _rea = NULL;
  modelica_metatype _va = NULL;
  modelica_integer _i1;
  modelica_integer _i2;
  modelica_boolean _b;
  modelica_boolean _b1;
  modelica_metatype _syst = NULL;
  modelica_metatype _varsPartition = NULL;
  modelica_metatype _lstVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_string tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  modelica_boolean tmp24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _systs = tmpMeta1;
  // _unpartRemovedEqs has no default value.
  // _varPartMap has no default value.
  // _ea has no default value.
  // _rea has no default value.
  // _va has no default value.
  // _i1 has no default value.
  // _i2 has no default value.
  // _b has no default value.
  _b1 = 1 /* true */;
  // _syst has no default value.
  // _varsPartition has no default value.
  // _lstVars has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _ea = arrayCreate(_n, tmpMeta2);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _rea = arrayCreate(_n, tmpMeta3);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _va = arrayCreate(_n, tmpMeta4);

  _varPartMap = arrayCreate(_n, mmc_mk_integer(((modelica_integer) -1)));

  _i1 = omc_BackendEquation_equationArraySize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 3))));

  _i2 = omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))));

  if(((_i1 != _i2) && (!_throwNoError)))
  {
    tmp6 = modelica_integer_to_modelica_string(_i1, ((modelica_integer) 0), 1 /* true */);
    tmp7 = modelica_integer_to_modelica_string(_i2, ((modelica_integer) 0), 1 /* true */);
    tmpMeta5 = mmc_mk_cons(tmp6, mmc_mk_cons(tmp7, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessage(threadData, ((_i1 > _i2)?_OMC_LIT13:_OMC_LIT15), tmpMeta5, _OMC_LIT9);

    omc_BackendDAEUtil_checkAdjacencyMatrixSolvability(threadData, _inSyst, _funcs, _isInitial);

    MMC_THROW_INTERNAL();
  }

  omc_SynchronousFeatures_partitionEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 3))), _ixs, _ea);

  _unpartRemovedEqs = omc_SynchronousFeatures_partitionEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 10))), _rixs, _rea);

  _varsPartition = arrayCreate(omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2)))), mmc_mk_integer(((modelica_integer) 0)));

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))));
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      omc_SynchronousFeatures_setVarPartition(threadData, _varsPartition, _i, arrayGet(_mT,_i) /* DAE.ASUB */, _ixs);

      omc_SynchronousFeatures_setVarPartition(threadData, _varsPartition, _i, arrayGet(_rmT,_i) /* DAE.ASUB */, _rixs);
    }
  }

  tmp12 = arrayLength(_varsPartition); tmp13 = ((modelica_integer) -1); tmp14 = ((modelica_integer) 1);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_varsPartition); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      if((mmc_unbox_integer(arrayGet(_varsPartition,_i) /* DAE.ASUB */) != ((modelica_integer) 0)))
      {
        _lstVars = arrayGet(_va,mmc_unbox_integer(arrayGet(_varsPartition,_i) /* DAE.ASUB */)) /* DAE.ASUB */;

        tmpMeta11 = mmc_mk_cons(omc_BackendVariable_getVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))), _i), _lstVars);
        arrayUpdate(_va, mmc_unbox_integer(arrayGet(_varsPartition,_i) /* DAE.ASUB */), tmpMeta11);
      }
    }
  }

  tmp21 = ((modelica_integer) 1); tmp22 = 1; tmp23 = _n;
  if(!(((tmp22 > 0) && (tmp21 > tmp23)) || ((tmp22 < 0) && (tmp21 < tmp23))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp21, tmp23); _i += tmp22)
    {
      /* Pattern-matching tuple assignment */
      tmpMeta18 = mmc_mk_box2(0, mmc_mk_boolean(1 /* true */), mmc_mk_boolean(_throwNoError));
      tmpMeta19 = omc_SynchronousFeatures_createEqSystem(threadData, arrayGet(_ea,_i) /* DAE.ASUB */, arrayGet(_va,_i) /* DAE.ASUB */, arrayGet(_rea,_i) /* DAE.ASUB */, tmpMeta18, &tmpMeta15);
      _syst = tmpMeta19;
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
      tmp17 = mmc_unbox_integer(tmpMeta16);
      _b = tmp17  /* pattern as ty=Boolean */;

      tmpMeta20 = mmc_mk_cons(_syst, _systs);
      _systs = tmpMeta20;

      _b1 = (_b1 && _b);
    }
  }

  /* Pattern-matching assignment */
  tmp24 = (_throwNoError || _b1);
  if (1 /* true */ != tmp24) MMC_THROW_INTERNAL();

  _systs = listReverse(_systs);
  _return: OMC_LABEL_UNUSED
  if (out_unpartRemovedEqs) { *out_unpartRemovedEqs = _unpartRemovedEqs; }
  if (out_varPartMap) { *out_varPartMap = _varPartMap; }
  return _systs;
}
modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocksSplitBlocks(threadData_t *threadData, modelica_metatype _n, modelica_metatype _inSyst, modelica_metatype _ixs, modelica_metatype _rixs, modelica_metatype _mT, modelica_metatype _rmT, modelica_metatype _throwNoError, modelica_metatype _funcs, modelica_metatype _isInitial, modelica_metatype *out_unpartRemovedEqs, modelica_metatype *out_varPartMap)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _systs = NULL;
  modelica_metatype tmpMeta4;
  tmp1 = mmc_unbox_integer(_n);
  tmp2 = mmc_unbox_integer(_throwNoError);
  tmp3 = mmc_unbox_integer(_isInitial);
  _systs = omc_SynchronousFeatures_partitionIndependentBlocksSplitBlocks(threadData, tmp1, _inSyst, _ixs, _rixs, _mT, _rmT, tmp2, _funcs, tmp3, out_unpartRemovedEqs, out_varPartMap);
  /* skip box _systs; list<BackendDAE.EqSystem> */
  /* skip box _unpartRemovedEqs; list<BackendDAE.Equation> */
  /* skip box _varPartMap; array<#Integer> */
  return _systs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData_t *threadData, modelica_integer _idx, modelica_boolean _isRemovedIdx, modelica_integer _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_boolean _ochange;
  modelica_integer _eqIdx;
  modelica_integer _rmIdx;
  modelica_metatype _workListEq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _workListRm = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
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
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ochange has no default value.
  // _eqIdx has no default value.
  // _rmIdx has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _workListEq = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _workListRm = tmpMeta2;
  _ochange = 0 /* false */;

  if(_isRemovedIdx)
  {
    if((mmc_unbox_integer(arrayGet(_rixs, _idx)) == ((modelica_integer) 0)))
    {
      arrayUpdate(_rixs, _idx, mmc_mk_integer(_partIdx));

      tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_idx), MMC_REFSTRUCTLIT(mmc_nil));
      _workListRm = tmpMeta3;

      _ochange = 1 /* true */;
    }
  }
  else
  {
    if((mmc_unbox_integer(arrayGet(_eqPartMap, _idx)) == ((modelica_integer) 0)))
    {
      arrayUpdate(_eqPartMap, _idx, mmc_mk_integer(_partIdx));

      tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_idx), MMC_REFSTRUCTLIT(mmc_nil));
      _workListEq = tmpMeta4;

      _ochange = 1 /* true */;
    }
  }

  if((!_ochange))
  {
    goto _return;
  }

  while(1)
  {
    if(!(!(listEmpty(_workListEq) && listEmpty(_workListRm)))) break;
    if((!listEmpty(_workListEq)))
    {
      /* Pattern-matching assignment */
      tmpMeta5 = _workListEq;
      if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
      tmpMeta6 = MMC_CAR(tmpMeta5);
      tmpMeta7 = MMC_CDR(tmpMeta5);
      tmp8 = mmc_unbox_integer(tmpMeta6);
      _eqIdx = tmp8  /* pattern as ty=Integer */;
      _workListEq = tmpMeta7;

      {
        modelica_metatype _varIdx;
        for (tmpMeta9 = arrayGet(_m, _eqIdx); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
        {
          _varIdx = MMC_CAR(tmpMeta9);
          if((!mmc_unbox_boolean(arrayGet(_vars, labs(mmc_unbox_integer(_varIdx))))))
          {
            arrayUpdate(_vars, labs(mmc_unbox_integer(_varIdx)), mmc_mk_boolean(1 /* true */));

            arrayUpdate(_varPartMap, labs(mmc_unbox_integer(_varIdx)), mmc_mk_integer(_partIdx));

            {
              modelica_metatype _nextEqIdx;
              for (tmpMeta10 = arrayGet(_mT, labs(mmc_unbox_integer(_varIdx))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
              {
                _nextEqIdx = MMC_CAR(tmpMeta10);
                if((mmc_unbox_integer(arrayGet(_eqPartMap, labs(mmc_unbox_integer(_nextEqIdx)))) == ((modelica_integer) 0)))
                {
                  tmpMeta11 = mmc_mk_cons(mmc_mk_integer(labs(mmc_unbox_integer(_nextEqIdx))), _workListEq);
                  _workListEq = tmpMeta11;

                  arrayUpdate(_eqPartMap, labs(mmc_unbox_integer(_nextEqIdx)), mmc_mk_integer(_partIdx));
                }
              }
            }

            {
              modelica_metatype _nextEqIdx;
              for (tmpMeta13 = arrayGet(_rmT, labs(mmc_unbox_integer(_varIdx))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
              {
                _nextEqIdx = MMC_CAR(tmpMeta13);
                if((mmc_unbox_integer(arrayGet(_rixs, labs(mmc_unbox_integer(_nextEqIdx)))) == ((modelica_integer) 0)))
                {
                  tmpMeta14 = mmc_mk_cons(mmc_mk_integer(labs(mmc_unbox_integer(_nextEqIdx))), _workListRm);
                  _workListRm = tmpMeta14;

                  arrayUpdate(_rixs, labs(mmc_unbox_integer(_nextEqIdx)), mmc_mk_integer(_partIdx));
                }
              }
            }
          }
        }
      }
    }
    else
    {
      /* Pattern-matching assignment */
      tmpMeta17 = _workListRm;
      if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
      tmpMeta18 = MMC_CAR(tmpMeta17);
      tmpMeta19 = MMC_CDR(tmpMeta17);
      tmp20 = mmc_unbox_integer(tmpMeta18);
      _rmIdx = tmp20  /* pattern as ty=Integer */;
      _workListRm = tmpMeta19;

      {
        modelica_metatype _varIdx;
        for (tmpMeta21 = arrayGet(_rm, _rmIdx); !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
        {
          _varIdx = MMC_CAR(tmpMeta21);
          if((!mmc_unbox_boolean(arrayGet(_rvars, labs(mmc_unbox_integer(_varIdx))))))
          {
            arrayUpdate(_rvars, labs(mmc_unbox_integer(_varIdx)), mmc_mk_boolean(1 /* true */));

            {
              modelica_metatype _nextEqIdx;
              for (tmpMeta22 = arrayGet(_mT, labs(mmc_unbox_integer(_varIdx))); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
              {
                _nextEqIdx = MMC_CAR(tmpMeta22);
                if((mmc_unbox_integer(arrayGet(_eqPartMap, labs(mmc_unbox_integer(_nextEqIdx)))) == ((modelica_integer) 0)))
                {
                  tmpMeta23 = mmc_mk_cons(mmc_mk_integer(labs(mmc_unbox_integer(_nextEqIdx))), _workListEq);
                  _workListEq = tmpMeta23;

                  arrayUpdate(_eqPartMap, labs(mmc_unbox_integer(_nextEqIdx)), mmc_mk_integer(_partIdx));
                }
              }
            }

            {
              modelica_metatype _nextEqIdx;
              for (tmpMeta25 = arrayGet(_rmT, labs(mmc_unbox_integer(_varIdx))); !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
              {
                _nextEqIdx = MMC_CAR(tmpMeta25);
                if((mmc_unbox_integer(arrayGet(_rixs, labs(mmc_unbox_integer(_nextEqIdx)))) == ((modelica_integer) 0)))
                {
                  tmpMeta26 = mmc_mk_cons(mmc_mk_integer(labs(mmc_unbox_integer(_nextEqIdx))), _workListRm);
                  _workListRm = tmpMeta26;

                  arrayUpdate(_rixs, labs(mmc_unbox_integer(_nextEqIdx)), mmc_mk_integer(_partIdx));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ochange;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocksWork(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _isRemovedIdx, modelica_metatype _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_boolean _ochange;
  modelica_metatype out_ochange;
  tmp1 = mmc_unbox_integer(_idx);
  tmp2 = mmc_unbox_integer(_isRemovedIdx);
  tmp3 = mmc_unbox_integer(_partIdx);
  _ochange = omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData, tmp1, tmp2, tmp3, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _rixs, _vars, _rvars);
  out_ochange = mmc_mk_icon(_ochange);
  return out_ochange;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SynchronousFeatures_partitionIndependentBlocksMasked(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _mask, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_integer _on;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _on has no default value.
  _on = ((modelica_integer) 0);

  tmp1 = arrayLength(_m); tmp2 = ((modelica_integer) -1); tmp3 = ((modelica_integer) 1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_m); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if(mmc_unbox_boolean(arrayGet(_mask,_i) /* DAE.ASUB */))
      {
        if(omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData, _i, 0 /* false */, ((modelica_integer) 1) + _on, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _remEqPartMap, _vars, _rvars))
        {
          _on = ((modelica_integer) 1) + _on;
        }
      }
    }
  }

  tmp4 = arrayLength(_rm); tmp5 = ((modelica_integer) -1); tmp6 = ((modelica_integer) 1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_rm); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      if(omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData, _i, 1 /* true */, ((modelica_integer) 1) + _on, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _remEqPartMap, _vars, _rvars))
      {
        _on = ((modelica_integer) 1) + _on;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _on;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocksMasked(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _mask, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_integer _on;
  modelica_metatype out_on;
  _on = omc_SynchronousFeatures_partitionIndependentBlocksMasked(threadData, _m, _mT, _rm, _rmT, _mask, _eqPartMap, _varPartMap, _remEqPartMap, _vars, _rvars);
  out_on = mmc_mk_icon(_on);
  return out_on;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_partitionIndependentBlocks2(threadData_t *threadData, modelica_integer _eqIdx, modelica_integer _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap)
{
  modelica_boolean _ochange;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ochange has no default value.
  _ochange = (mmc_unbox_integer(arrayGet(_eqPartMap, _eqIdx)) == ((modelica_integer) -1));

  if(_ochange)
  {
    arrayUpdate(_eqPartMap, _eqIdx, mmc_mk_integer(_partIdx));

    {
      modelica_metatype _var;
      for (tmpMeta1 = arrayGet(_m, _eqIdx); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _var = MMC_CAR(tmpMeta1);
        if((!(mmc_unbox_integer(arrayGet(_varPartMap, labs(mmc_unbox_integer(_var)))) > ((modelica_integer) 0))))
        {
          arrayUpdate(_varPartMap, labs(mmc_unbox_integer(_var)), mmc_mk_integer(_partIdx));

          {
            modelica_metatype _newEq;
            for (tmpMeta2 = arrayGet(_mT, labs(mmc_unbox_integer(_var))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
            {
              _newEq = MMC_CAR(tmpMeta2);
              omc_SynchronousFeatures_partitionIndependentBlocks2(threadData, labs(mmc_unbox_integer(_newEq)), _partIdx, _m, _mT, _eqPartMap, _varPartMap);
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ochange;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocks2(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _partIdx, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _ochange;
  modelica_metatype out_ochange;
  tmp1 = mmc_unbox_integer(_eqIdx);
  tmp2 = mmc_unbox_integer(_partIdx);
  _ochange = omc_SynchronousFeatures_partitionIndependentBlocks2(threadData, tmp1, tmp2, _m, _mT, _eqPartMap, _varPartMap);
  out_ochange = mmc_mk_icon(_ochange);
  return out_ochange;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SynchronousFeatures_partitionIndependentBlocks(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap)
{
  modelica_integer _on;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _on = ((modelica_integer) 0);
  tmp3 = arrayLength(_m); tmp4 = ((modelica_integer) -1); tmp5 = ((modelica_integer) 1);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _eq;
    for(_eq = arrayLength(_m); in_range_integer(_eq, tmp3, tmp5); _eq += tmp4)
    {
      tmpMeta1 = stringAppend(_OMC_LIT16,intString(_eq));
      tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT3);
      fputs(MMC_STRINGDATA(tmpMeta2),stdout);

      if((!(mmc_unbox_integer(arrayGet(_eqPartMap, _eq)) == ((modelica_integer) -2))))
      {
        _on = (omc_SynchronousFeatures_partitionIndependentBlocks2(threadData, _eq, ((modelica_integer) 1) + _on, _m, _mT, _eqPartMap, _varPartMap)?((modelica_integer) 1) + _on:_on);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _on;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocks(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap)
{
  modelica_integer _on;
  modelica_metatype out_on;
  _on = omc_SynchronousFeatures_partitionIndependentBlocks(threadData, _m, _mT, _eqPartMap, _varPartMap);
  out_on = mmc_mk_icon(_on);
  return out_on;
}

DLLDirection
modelica_integer omc_SynchronousFeatures_partitionIndependentBlocks0(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_integer _on;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _on = ((modelica_integer) 0);
  tmp1 = arrayLength(_m); tmp2 = ((modelica_integer) -1); tmp3 = ((modelica_integer) 1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_m); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _on = (omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData, _i, 0 /* false */, ((modelica_integer) 1) + _on, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _rixs, _vars, _rvars)?((modelica_integer) 1) + _on:_on);
    }
  }

  tmp4 = arrayLength(_rm); tmp5 = ((modelica_integer) -1); tmp6 = ((modelica_integer) 1);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_rm); in_range_integer(_i, tmp4, tmp6); _i += tmp5)
    {
      _on = (omc_SynchronousFeatures_partitionIndependentBlocksWork(threadData, _i, 1 /* true */, ((modelica_integer) 1) + _on, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _rixs, _vars, _rvars)?((modelica_integer) 1) + _on:_on);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _on;
}
modelica_metatype boxptr_SynchronousFeatures_partitionIndependentBlocks0(threadData_t *threadData, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _rm, modelica_metatype _rmT, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _rixs, modelica_metatype _vars, modelica_metatype _rvars)
{
  modelica_integer _on;
  modelica_metatype out_on;
  _on = omc_SynchronousFeatures_partitionIndependentBlocks0(threadData, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _rixs, _vars, _rvars);
  out_on = mmc_mk_icon(_on);
  return out_on;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setClockedPartition(threadData_t *threadData, modelica_metatype _inNewPartitionType, modelica_metatype _inOldPartitionType, modelica_metatype _inComp, modelica_metatype _info)
{
  modelica_metatype _outPartitionType = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPartitionType has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inOldPartitionType;
    tmp4_2 = _inNewPartitionType;
    {
      modelica_boolean _newVal;
      modelica_boolean _oldVal;
      modelica_metatype _msg = NULL;
      modelica_metatype _tokens = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _newVal has no default value.
      // _oldVal has no default value.
      // _msg has no default value.
      // _tokens has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNewPartitionType;
          goto tmp3_done;
        }
        case 1: {
          if (!optionNone(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inOldPartitionType;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _oldVal = tmp7  /* pattern as ty=Boolean */;
          _newVal = tmp9  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(!_oldVal == !_newVal)) goto tmp3_end;
          tmpMeta1 = _inNewPartitionType;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _msg = omc_SynchronousFeatures_getPartitionConflictError(threadData, _inComp ,&_tokens);

          omc_Error_addSourceMessage(threadData, _msg, _tokens, _info);
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
  _outPartitionType = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPartitionType;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getPartitionConflictError(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype *out_tokens)
{
  modelica_metatype _msg = NULL;
  modelica_metatype _tokens = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _msg has no default value.
  // _tokens has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComp;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(omc_ComponentReferenceBasics_printComponentRefStr(threadData, _cr), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _OMC_LIT19;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _OMC_LIT21;
          tmpMeta[0+1] = tmpMeta8;
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
  _msg = tmpMeta[0+0];
  _tokens = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tokens) { *out_tokens = _tokens; }
  return _msg;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSystPartition(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inPartitionKind)
{
  modelica_metatype _outSyst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSyst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inSyst;
    {
      modelica_metatype _syst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          _syst = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[9] = _inPartitionKind;
          _syst = tmpMeta6;
          tmpMeta1 = _syst;
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
  _outSyst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outSyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionCall1(threadData_t *threadData, modelica_boolean _expClocked, modelica_boolean _refClocked, modelica_metatype _inPartition, modelica_metatype _inExp, modelica_metatype _inRefs, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_boolean *out_cont)
{
  modelica_metatype _outPartition = NULL;
  modelica_metatype _outRefs = NULL;
  modelica_boolean _cont;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPartition has no default value.
  // _outRefs has no default value.
  _cont = 0 /* false */;
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(0, _cr, mmc_mk_boolean(_refClocked));
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _inRefs);
          tmpMeta[0+0] = omc_SynchronousFeatures_setClockedPartition(threadData, mmc_mk_some(mmc_mk_boolean(_expClocked)), _inPartition, mmc_mk_none(), _info);
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT22, _OMC_LIT24);
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
  _outPartition = tmpMeta[0+0];
  _outRefs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outRefs) { *out_outRefs = _outRefs; }
  if (out_cont) { *out_cont = _cont; }
  return _outPartition;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionCall1(threadData_t *threadData, modelica_metatype _expClocked, modelica_metatype _refClocked, modelica_metatype _inPartition, modelica_metatype _inExp, modelica_metatype _inRefs, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_metatype *out_cont)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _cont;
  modelica_metatype _outPartition = NULL;
  tmp1 = mmc_unbox_integer(_expClocked);
  tmp2 = mmc_unbox_integer(_refClocked);
  _outPartition = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, tmp1, tmp2, _inPartition, _inExp, _inRefs, _info, out_outRefs, &_cont);
  /* skip box _outPartition; Option<#Boolean> */
  /* skip box _outRefs; list<tuple<DAE.ComponentRef, #Boolean>> */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  return _outPartition;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inRefs, modelica_metatype _inPartition, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_boolean *out_cont)
{
  modelica_metatype _outPartition = NULL;
  modelica_metatype _outRefs = NULL;
  modelica_boolean _cont;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPartition has no default value.
  // _outRefs has no default value.
  // _cont has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inPath;
    tmp4_2 = _inExps;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (4 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_2);
          tmpMeta8 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 0 /* false */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          _e = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 0 /* false */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (9 != MMC_STRLEN(tmpMeta14) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmpMeta14)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_2);
          tmpMeta16 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          if (!listEmpty(tmpMeta18)) goto tmp3_end;
          _e = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmp4_2);
          tmpMeta21 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          _e = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta24) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta24)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_2);
          tmpMeta26 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta26)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          if (listEmpty(tmpMeta28)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmpMeta28);
          tmpMeta30 = MMC_CDR(tmpMeta28);
          if (!listEmpty(tmpMeta30)) goto tmp3_end;
          _e = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (10 != MMC_STRLEN(tmpMeta31) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta31)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta32 = MMC_CAR(tmp4_2);
          tmpMeta33 = MMC_CDR(tmp4_2);
          if (listEmpty(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          if (listEmpty(tmpMeta35)) goto tmp3_end;
          tmpMeta36 = MMC_CAR(tmpMeta35);
          tmpMeta37 = MMC_CDR(tmpMeta35);
          if (!listEmpty(tmpMeta37)) goto tmp3_end;
          _e = tmpMeta32;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta38) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta38)) != 0) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta39 = MMC_CAR(tmp4_2);
          tmpMeta40 = MMC_CDR(tmp4_2);
          if (!listEmpty(tmpMeta40)) goto tmp3_end;
          _e = tmpMeta39;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall1(threadData, 1 /* true */, 1 /* true */, _inPartition, _e, _inRefs, _info, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inPartition;
          tmpMeta[0+1] = _inRefs;
          tmp1_c2 = 1 /* true */;
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
  _outPartition = tmpMeta[0+0];
  _outRefs = tmpMeta[0+1];
  _cont = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outRefs) { *out_outRefs = _outRefs; }
  if (out_cont) { *out_cont = _cont; }
  return _outPartition;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inRefs, modelica_metatype _inPartition, modelica_metatype _info, modelica_metatype *out_outRefs, modelica_metatype *out_cont)
{
  modelica_boolean _cont;
  modelica_metatype _outPartition = NULL;
  _outPartition = omc_SynchronousFeatures_detectEqPartitionCall(threadData, _inPath, _inExps, _inRefs, _inPartition, _info, out_outRefs, &_cont);
  /* skip box _outPartition; Option<#Boolean> */
  /* skip box _outRefs; list<tuple<DAE.ComponentRef, #Boolean>> */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  return _outPartition;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _refs = NULL;
  modelica_metatype _partition = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _cont has no default value.
  // _outTpl has no default value.
  // _refs has no default value.
  // _partition has no default value.
  // _info has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _partition = tmpMeta2;
  _refs = tmpMeta3;
  _info = tmpMeta4;

  
  
  
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _inExp;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _path has no default value.
      // _exps has no default value.
      // _e has no default value.
      // _cr has no default value.
      tmp8 = 0;
      for (; tmp8 < 3; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,4,1) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,2) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _e = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta12 = _e;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto goto_6;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          _cr = tmpMeta13;
          tmpMeta15 = mmc_mk_box2(0, _cr, mmc_mk_boolean(0 /* false */));
          tmpMeta14 = mmc_mk_cons(tmpMeta15, _refs);
          tmpMeta[0+0] = _partition;
          tmpMeta[0+1] = tmpMeta14;
          tmp5_c2 = 0 /* false */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,13,3) == 0) goto tmp7_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 3));
          
          _path = tmpMeta16;
          _exps = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_detectEqPartitionCall(threadData, _path, _exps, _refs, _partition, _info, &tmpMeta[0+1], &tmp5_c2);
          goto tmp7_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _partition;
          tmpMeta[0+1] = _refs;
          tmp5_c2 = 1 /* true */;
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
  _partition = tmpMeta[0+0];
  _refs = tmpMeta[0+1];
  _cont = tmp5_c2;

  tmpMeta18 = mmc_mk_box3(0, _partition, _refs, _info);
  _outTpl = tmpMeta18;
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_detectEqPartitionExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_SynchronousFeatures_detectEqPartitionExp1(threadData, _inExp, _inTpl, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; tuple<Option<#Boolean>, list<tuple<DAE.ComponentRef, #Boolean>>, SourceInfo> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartitionExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_SynchronousFeatures_detectEqPartitionExp1, _inTpl ,&_outTpl);
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_SynchronousFeatures_printPartitionType(threadData_t *threadData, modelica_metatype _isClockedPartition)
{
  modelica_string _out = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _isClockedPartition;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (0 /* false */ != tmp7) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 /* true */ != tmp9) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT33;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT34;
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_detectEqPartition(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype *out_refsInfo)
{
  modelica_metatype _outPartitionType = NULL;
  modelica_metatype _refsInfo = NULL;
  modelica_metatype _partitionType = NULL;
  modelica_boolean _isClockEq;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outPartitionType has no default value.
  // _refsInfo has no default value.
  // _partitionType has no default value.
  // _isClockEq has no default value.
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = omc_BackendEquation_getEquationAttributes(threadData, _inEq);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT35;
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
  _partitionType = tmpMeta1;

  _info = omc_BackendEquation_equationInfo(threadData, _inEq);

  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = mmc_mk_box3(0, _partitionType, tmpMeta10, _info);
  omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_SynchronousFeatures_detectEqPartitionExp, tmpMeta11, &tmpMeta7);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  _partitionType = tmpMeta8;
  _refsInfo = tmpMeta9;

  _isClockEq = omc_SynchronousFeatures_isClockEquation(threadData, _inEq);

  _outPartitionType = (_isClockEq?omc_SynchronousFeatures_setClockedPartition(threadData, _OMC_LIT35, _partitionType, mmc_mk_none(), _info):_partitionType);
  _return: OMC_LABEL_UNUSED
  if (out_refsInfo) { *out_refsInfo = _refsInfo; }
  return _outPartitionType;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isClockEquation(threadData_t *threadData, modelica_metatype _inEq)
{
  modelica_boolean _out;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEq;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _trueEqs = NULL;
      modelica_metatype _falseEqs = NULL;
      modelica_metatype _listEqs = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _info = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _trueEqs has no default value.
      // _falseEqs has no default value.
      // _listEqs has no default value.
      // _eq has no default value.
      // _info has no default value.
      tmp4 = 0;
      for (; tmp4 < 11; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_SynchronousFeatures_isClockExp(threadData, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_SynchronousFeatures_isClockExp(threadData, _e);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _eq = tmpMeta8;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inEq = _eq;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          tmp1 = omc_SynchronousFeatures_isClockExp(threadData, _e);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _e = tmpMeta10;
          /* Pattern matching succeeded */
          tmp1 = omc_SynchronousFeatures_isClockExp(threadData, _e);
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          if (listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,3) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          
          _e = tmpMeta15;
          /* Pattern matching succeeded */
          if(omc_SynchronousFeatures_isClockExp(threadData, _e))
          {
            /* Pattern-matching assignment */
            tmpMeta16 = omc_BackendEquation_equationSource(threadData, _inEq);
            tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
            _info = tmpMeta17;

            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT37, tmpMeta18, _info);
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          if (listEmpty(tmpMeta20)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          if (!listEmpty(tmpMeta22)) goto tmp3_end;
          
          _e = tmpMeta23;
          /* Pattern matching succeeded */
          if(omc_SynchronousFeatures_isClockExp(threadData, _e))
          {
            /* Pattern-matching assignment */
            tmpMeta24 = omc_BackendEquation_equationSource(threadData, _inEq);
            tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
            _info = tmpMeta25;

            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
            omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT37, tmpMeta26, _info);
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _e = tmpMeta27;
          /* Pattern matching succeeded */
          tmp1 = omc_SynchronousFeatures_isClockExp(threadData, _e);
          goto tmp3_done;
        }
        case 9: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _trueEqs = tmpMeta28;
          _falseEqs = tmpMeta29;
          /* Pattern matching succeeded */
          {
            modelica_metatype _listEqs;
            for (tmpMeta30 = _trueEqs; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
            {
              _listEqs = MMC_CAR(tmpMeta30);
              {
                modelica_metatype _eq;
                for (tmpMeta31 = _listEqs; !listEmpty(tmpMeta31); tmpMeta31=MMC_CDR(tmpMeta31))
                {
                  _eq = MMC_CAR(tmpMeta31);
                  if(omc_SynchronousFeatures_isClockEquation(threadData, _eq))
                  {
                    /* Pattern-matching assignment */
                    tmpMeta32 = omc_BackendEquation_equationSource(threadData, _eq);
                    tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
                    _info = tmpMeta33;

                    tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
                    omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT37, tmpMeta34, _info);
                  }
                }
              }
            }
          }

          {
            modelica_metatype _eq;
            for (tmpMeta37 = _falseEqs; !listEmpty(tmpMeta37); tmpMeta37=MMC_CDR(tmpMeta37))
            {
              _eq = MMC_CAR(tmpMeta37);
              if(omc_SynchronousFeatures_isClockEquation(threadData, _eq))
              {
                /* Pattern-matching assignment */
                tmpMeta38 = omc_BackendEquation_equationSource(threadData, _eq);
                tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
                _info = tmpMeta39;

                tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                omc_Error_addSourceMessageAndFail(threadData, _OMC_LIT37, tmpMeta40, _info);
              }
            }
          }
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT38, _OMC_LIT39);
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
  _out = tmp1;
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isClockEquation(threadData_t *threadData, modelica_metatype _inEq)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_SynchronousFeatures_isClockEquation(threadData, _inEq);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isClockExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _out;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _out = omc_Types_isClockOrSubTypeClock(threadData, omc_Expression_typeof(threadData, _inExp));
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isClockExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _out;
  modelica_metatype out_out;
  _out = omc_SynchronousFeatures_isClockExp(threadData, _inExp);
  out_out = mmc_mk_icon(_out);
  return out_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_baseClockPartitioning(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared, modelica_metatype *out_outClockedSysts, modelica_metatype *out_outUnpartRemEqs)
{
  modelica_metatype _outContSysts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outClockedSysts = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _outUnpartRemEqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _rm = NULL;
  modelica_metatype _rmT = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _systs = NULL;
  modelica_integer _partitionCnt;
  modelica_integer _i;
  modelica_integer _j;
  modelica_metatype _cr = NULL;
  modelica_metatype _varIxs = NULL;
  modelica_metatype _eqPartMap = NULL;
  modelica_metatype _varPartMap = NULL;
  modelica_metatype _reqsPartition = NULL;
  modelica_metatype _varsPartition = NULL;
  modelica_metatype _rvarsPartition = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _refsInfo = NULL;
  modelica_metatype _refInfo = NULL;
  modelica_metatype _partitionType = NULL;
  modelica_boolean _isClocked;
  modelica_boolean _isInitial;
  modelica_metatype _clockedEqs = NULL;
  modelica_metatype _clockedVars = NULL;
  modelica_metatype _clockedPartitions = NULL;
  modelica_metatype _info = NULL;
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
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  modelica_integer tmp27;
  modelica_integer tmp28;
  modelica_integer tmp29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outContSysts = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outClockedSysts = tmpMeta2;
  // _outUnpartRemEqs has no default value.
  // _vars has no default value.
  // _eqs has no default value.
  // _funcs has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _rm has no default value.
  // _rmT has no default value.
  // _syst has no default value.
  // _systs has no default value.
  // _partitionCnt has no default value.
  // _i has no default value.
  // _j has no default value.
  // _cr has no default value.
  // _varIxs has no default value.
  // _eqPartMap has no default value.
  // _varPartMap has no default value.
  // _reqsPartition has no default value.
  // _varsPartition has no default value.
  // _rvarsPartition has no default value.
  // _eq has no default value.
  // _refsInfo has no default value.
  // _refInfo has no default value.
  // _partitionType has no default value.
  // _isClocked has no default value.
  // _isInitial has no default value.
  // _clockedEqs has no default value.
  // _clockedVars has no default value.
  // _clockedPartitions has no default value.
  // _info has no default value.
  _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

  _isInitial = omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared);

  _syst = omc_BackendDAEUtil_getAdjacencyMatrixfromOption(threadData, _inSyst, _OMC_LIT40, mmc_mk_some(_funcs), _isInitial ,&_m ,&_mT);

  _rm = omc_BackendDAEUtil_removedAdjacencyMatrix(threadData, _inSyst, _OMC_LIT40, mmc_mk_some(_funcs), _isInitial ,&_rmT);

  /* Pattern-matching assignment */
  tmpMeta3 = _syst;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _vars = tmpMeta4;
  _eqs = tmpMeta5;

  _eqPartMap = arrayCreate(arrayLength(_m), mmc_mk_integer(((modelica_integer) 0)));

  _varPartMap = arrayCreate(arrayLength(_mT), mmc_mk_integer(((modelica_integer) 0)));

  _reqsPartition = arrayCreate(arrayLength(_rm), mmc_mk_integer(((modelica_integer) 0)));

  _varsPartition = arrayCreate(arrayLength(_mT), mmc_mk_boolean(0 /* false */));

  _rvarsPartition = arrayCreate(arrayLength(_rmT), mmc_mk_boolean(0 /* false */));

  _partitionCnt = omc_SynchronousFeatures_partitionIndependentBlocks0(threadData, _m, _mT, _rm, _rmT, _eqPartMap, _varPartMap, _reqsPartition, _varsPartition, _rvarsPartition);

  if((_partitionCnt > ((modelica_integer) 1)))
  {
    _systs = omc_SynchronousFeatures_partitionIndependentBlocksSplitBlocks(threadData, _partitionCnt, _syst, _eqPartMap, _reqsPartition, _mT, _rmT, 0 /* false */, _funcs, omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_outUnpartRemEqs, NULL);
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta6 = mmc_mk_cons(_syst, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta8 = mmc_mk_box2(0, tmpMeta6, tmpMeta7);
    tmpMeta9 = tmpMeta8;
    tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
    tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
    _systs = tmpMeta10;
    _outUnpartRemEqs = tmpMeta11;
  }

  _clockedEqs = arrayCreate(omc_BackendEquation_getNumberOfEquations(threadData, _eqs), mmc_mk_none());

  _clockedVars = arrayCreate(omc_BackendVariable_varsSize(threadData, _vars), mmc_mk_none());

  _clockedPartitions = arrayCreate(((_partitionCnt > ((modelica_integer) 0))?_partitionCnt:((modelica_integer) 1)), mmc_mk_none());

  _j = ((modelica_integer) 0);

  {
    modelica_metatype _eq;
    for (tmpMeta12 = omc_BackendEquation_equationList(threadData, _eqs); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
    {
      _eq = MMC_CAR(tmpMeta12);
      _j = ((modelica_integer) 1) + _j;

      _partitionType = omc_SynchronousFeatures_detectEqPartition(threadData, _eq ,&_refsInfo);

      _info = omc_BackendEquation_equationInfo(threadData, _eq);

      arrayUpdate(_clockedEqs, _j, omc_SynchronousFeatures_setClockedPartition(threadData, _partitionType, arrayGet(_clockedEqs, _j), mmc_mk_none(), _info));

      {
        modelica_metatype _refInfo;
        for (tmpMeta13 = _refsInfo; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
        {
          _refInfo = MMC_CAR(tmpMeta13);
          /* Pattern-matching assignment */
          tmpMeta14 = _refInfo;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          _cr = tmpMeta15;
          _isClocked = tmp17  /* pattern as ty=Boolean */;

          _varIxs = omc_SynchronousFeatures_getVarIxs(threadData, _cr, _vars);

          {
            modelica_metatype _i;
            for (tmpMeta18 = _varIxs; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _i = MMC_CAR(tmpMeta18);
              arrayUpdate(_clockedVars, mmc_unbox_integer(_i), omc_SynchronousFeatures_setClockedPartition(threadData, mmc_mk_some(mmc_mk_boolean(_isClocked)), arrayGet(_clockedVars, mmc_unbox_integer(_i)), mmc_mk_some(_cr), _info));
            }
          }
        }
      }
    }
  }

  tmp24 = ((modelica_integer) 1); tmp25 = 1; tmp26 = arrayLength(_clockedVars);
  if(!(((tmp25 > 0) && (tmp24 > tmp26)) || ((tmp25 < 0) && (tmp24 < tmp26))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp24, tmp26); _i += tmp25)
    {
      _partitionType = arrayGet(_clockedVars, _i);

      _cr = omc_BackendVariable_varCref(threadData, omc_BackendVariable_getVarAt(threadData, _vars, _i));

      {
        modelica_metatype _j;
        for (tmpMeta22 = arrayGet(_mT, _i); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
        {
          _j = MMC_CAR(tmpMeta22);
          _info = omc_BackendEquation_equationInfo(threadData, omc_BackendEquation_get(threadData, _eqs, mmc_unbox_integer(_j)));

          arrayUpdate(_clockedEqs, mmc_unbox_integer(_j), omc_SynchronousFeatures_setClockedPartition(threadData, _partitionType, arrayGet(_clockedEqs, mmc_unbox_integer(_j)), mmc_mk_some(_cr), _info));
        }
      }
    }
  }

  tmp27 = ((modelica_integer) 1); tmp28 = 1; tmp29 = arrayLength(_clockedEqs);
  if(!(((tmp28 > 0) && (tmp27 > tmp29)) || ((tmp28 < 0) && (tmp27 < tmp29))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp27, tmp29); _i += tmp28)
    {
      _partitionType = arrayGet(_clockedEqs, _i);

      _info = omc_BackendEquation_equationInfo(threadData, omc_BackendEquation_get(threadData, _eqs, _i));

      _j = mmc_unbox_integer(arrayGet(_eqPartMap, _i));

      arrayUpdate(_clockedPartitions, _j, omc_SynchronousFeatures_setClockedPartition(threadData, _partitionType, arrayGet(_clockedPartitions, _j), mmc_mk_none(), _info));
    }
  }

  _i = ((modelica_integer) 1);

  {
    modelica_metatype _syst;
    for (tmpMeta30 = _systs; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
    {
      _syst = MMC_CAR(tmpMeta30);
      
      
      { /* match expression */
        modelica_metatype tmp34_1;
        tmp34_1 = arrayGet(_clockedPartitions, _i);
        {
          volatile mmc_switch_type tmp34;
          int tmp35;
          tmp34 = 0;
          for (; tmp34 < 3; tmp34++) {
            switch (MMC_SWITCH_CAST(tmp34)) {
            case 0: {
              modelica_metatype tmpMeta36;
              modelica_integer tmp37;
              modelica_metatype tmpMeta38;
              if (optionNone(tmp34_1)) goto tmp33_end;
              tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp34_1), 1));
              tmp37 = mmc_unbox_integer(tmpMeta36);
              if (0 /* false */ != tmp37) goto tmp33_end;
              /* Pattern matching succeeded */
              tmpMeta38 = mmc_mk_cons(omc_SynchronousFeatures_setSystPartition(threadData, _syst, _OMC_LIT41), _outContSysts);
              tmpMeta[0+0] = tmpMeta38;
              tmpMeta[0+1] = _outClockedSysts;
              goto tmp33_done;
            }
            case 1: {
              modelica_metatype tmpMeta39;
              if (!optionNone(tmp34_1)) goto tmp33_end;
              /* Pattern matching succeeded */
              tmpMeta39 = mmc_mk_cons(omc_SynchronousFeatures_setSystPartition(threadData, _syst, _OMC_LIT42), _outContSysts);
              tmpMeta[0+0] = tmpMeta39;
              tmpMeta[0+1] = _outClockedSysts;
              goto tmp33_done;
            }
            case 2: {
              modelica_metatype tmpMeta40;
              modelica_integer tmp41;
              modelica_metatype tmpMeta42;
              if (optionNone(tmp34_1)) goto tmp33_end;
              tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp34_1), 1));
              tmp41 = mmc_unbox_integer(tmpMeta40);
              if (1 /* true */ != tmp41) goto tmp33_end;
              /* Pattern matching succeeded */
              tmpMeta42 = mmc_mk_cons(_syst, _outClockedSysts);
              tmpMeta[0+0] = _outContSysts;
              tmpMeta[0+1] = tmpMeta42;
              goto tmp33_done;
            }
            }
            goto tmp33_end;
            tmp33_end: ;
          }
          goto goto_32;
          goto_32:;
          MMC_THROW_INTERNAL();
          goto tmp33_done;
          tmp33_done:;
        }
      }
      _outContSysts = tmpMeta[0+0];
      _outClockedSysts = tmpMeta[0+1];

      _i = ((modelica_integer) 1) + _i;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outClockedSysts) { *out_outClockedSysts = _outClockedSysts; }
  if (out_outUnpartRemEqs) { *out_outUnpartRemEqs = _outUnpartRemEqs; }
  return _outContSysts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getVarIxs(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inVariables)
{
  modelica_metatype _outIntegerLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIntegerLst has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _ixs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ixs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          omc_BackendVariable_getVar(threadData, _inComp, _inVariables ,&_ixs);
          tmpMeta1 = _ixs;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
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
  _outIntegerLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outIntegerLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substExp(threadData_t *threadData, modelica_metatype _inExps, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_integer _inCnt)
{
  modelica_metatype _outTpl = NULL;
  modelica_boolean _create;
  modelica_metatype _e = NULL;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outTpl has no default value.
  // _create has no default value.
  // _e has no default value.
  _e = listHead(_inExps);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _create = tmp1;

  { /* match expression */
    modelica_boolean tmp8_1;
    tmp8_1 = _create;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _var = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _cr has no default value.
      // _ty has no default value.
      // _eq has no default value.
      // _var has no default value.
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (1 /* true */ != tmp8_1) goto tmp7_end;
          /* Pattern matching succeeded */
          _ty = omc_Expression_typeof(threadData, _e);

          tmpMeta10 = stringAppend(_OMC_LIT43,intString(_inCnt));
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, tmpMeta10, _ty, tmpMeta11);
          _cr = tmpMeta12;

          _var = omc_SynchronousFeatures_createEqVarPair(threadData, _cr, _ty, _e ,&_eq);
          tmpMeta14 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _ty);
          tmpMeta13 = mmc_mk_cons(tmpMeta14, listRest(_inExps));
          tmpMeta15 = mmc_mk_cons(_eq, _inEqs);
          tmpMeta16 = mmc_mk_cons(_var, _inVars);
          tmpMeta17 = mmc_mk_box4(0, tmpMeta13, tmpMeta15, tmpMeta16, mmc_mk_integer(((modelica_integer) 1) + _inCnt));
          tmpMeta5 = tmpMeta17;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          if (0 /* false */ != tmp8_1) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box4(0, _inExps, _inEqs, _inVars, mmc_mk_integer(_inCnt));
          tmpMeta5 = tmpMeta18;
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
  _outTpl = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outTpl;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substExp(threadData_t *threadData, modelica_metatype _inExps, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _inCnt)
{
  modelica_integer tmp1;
  modelica_metatype _outTpl = NULL;
  tmp1 = mmc_unbox_integer(_inCnt);
  _outTpl = omc_SynchronousFeatures_substExp(threadData, _inExps, _inEqs, _inVars, tmp1);
  /* skip box _outTpl; tuple<list<DAE.Exp>, list<BackendDAE.Equation>, list<BackendDAE.Var>, #Integer> */
  return _outTpl;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createEqVarPair(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inType, modelica_metatype _inExp, modelica_metatype *out_outEq)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outEq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outEq has no default value.
  _outVar = omc_SynchronousFeatures_createVar(threadData, _inComp, _inType);

  tmpMeta1 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _inComp, _inType);
  tmpMeta2 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, tmpMeta1, _inExp, _OMC_LIT45, _OMC_LIT48);
  _outEq = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_outEq) { *out_outEq = _outEq; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createVar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inType)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _inComp, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _inType, mmc_mk_none(), mmc_mk_none(), tmpMeta1, _OMC_LIT45, omc_DAEUtil_setProtectedAttr(threadData, omc_DAEUtil_getEmptyVarAttr(threadData, _inType), 1 /* true */), _OMC_LIT53, mmc_mk_none(), mmc_mk_none(), _OMC_LIT54, _OMC_LIT55, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _outVar = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteExpsCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inAttr, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_boolean _replace;
  modelica_metatype _exps = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _cnt;
  modelica_boolean tmp1 = 0;
  modelica_metatype tmpMeta13;
  modelica_boolean tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  // _replace has no default value.
  // _exps has no default value.
  // _eqs has no default value.
  // _vars has no default value.
  // _cnt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _inPath;
    tmp4_2 = listLength(_inExps);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (4 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (9 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (3 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          if (3 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (10 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
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
  _replace = tmp1;

  /* Pattern-matching assignment */
  tmp14 = (modelica_boolean)_replace;
  if(tmp14)
  {
    tmpMeta15 = omc_SynchronousFeatures_substExp(threadData, _inExps, _inEqs, _inVars, _inCnt);
  }
  else
  {
    tmpMeta13 = mmc_mk_box4(0, _inExps, _inEqs, _inVars, mmc_mk_integer(_inCnt));
    tmpMeta15 = tmpMeta13;
  }
  tmpMeta16 = tmpMeta15;
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
  tmp21 = mmc_unbox_integer(tmpMeta20);
  _exps = tmpMeta17;
  _eqs = tmpMeta18;
  _vars = tmpMeta19;
  _cnt = tmp21  /* pattern as ty=Integer */;

  tmpMeta22 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _exps, _inAttr);
  _outExp = tmpMeta22;

  tmpMeta23 = mmc_mk_box4(0, _eqs, _vars, mmc_mk_integer(_cnt), _inShared);
  _outTpl = tmpMeta23;
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substituteExpsCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExps, modelica_metatype _inAttr, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outTpl)
{
  modelica_integer tmp1;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inCnt);
  _outExp = omc_SynchronousFeatures_substituteExpsCall(threadData, _inPath, _inExps, _inAttr, _inEqs, _inVars, tmp1, _inShared, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outTpl; tuple<list<BackendDAE.Equation>, list<BackendDAE.Var>, #Integer, BackendDAE.Shared> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substClockExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outCnt)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_integer _outCnt;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outNewEqs has no default value.
  // _outNewVars has no default value.
  // _outCnt has no default value.
  if(omc_SynchronousFeatures_isKnownOrConstantExp(threadData, _inExp, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 2)))))
  {
    _outExp = _inExp;

    _outNewEqs = _inNewEqs;

    _outNewVars = _inNewVars;

    _outCnt = _inCnt;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta1 = mmc_mk_cons(_inExp, MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta2 = omc_SynchronousFeatures_substExp(threadData, tmpMeta1, _inNewEqs, _inNewVars, _inCnt);
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_CAR(tmpMeta3);
    tmpMeta5 = MMC_CDR(tmpMeta3);
    if (!listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
    tmp9 = mmc_unbox_integer(tmpMeta8);
    _outExp = tmpMeta4;
    _outNewEqs = tmpMeta6;
    _outNewVars = tmpMeta7;
    _outCnt = tmp9  /* pattern as ty=Integer */;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outNewEqs) { *out_outNewEqs = _outNewEqs; }
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  if (out_outCnt) { *out_outCnt = _outCnt; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substClockExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outCnt)
{
  modelica_integer tmp1;
  modelica_integer _outCnt;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inCnt);
  _outExp = omc_SynchronousFeatures_substClockExp(threadData, _inExp, _inNewEqs, _inNewVars, tmp1, _inShared, out_outNewEqs, out_outNewVars, &_outCnt);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  if (out_outCnt) { *out_outCnt = mmc_mk_icon(_outCnt); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_isKnownOrConstantExp__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_boolean *out_outContinue, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _outContinue;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_boolean _isKnown;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5 = 0;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _outContinue has no default value.
  // _outTpl has no default value.
  // _globalKnownVars has no default value.
  // _isKnown has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _isKnown = tmp3  /* pattern as ty=Boolean */;
  _globalKnownVars = tmpMeta4;

  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _inExp;
    {
      modelica_metatype _componentRef = NULL;
      int tmp8;
      // _componentRef has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp8_1))) {
        case 16: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        case 9: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,6,2) == 0) goto tmp7_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 2));
          
          _componentRef = tmpMeta9;
          /* Pattern matching succeeded */
          tmp5 = omc_BackendVariable_containsCref(threadData, _componentRef, _globalKnownVars);
          goto tmp7_done;
        }
        default:
        tmp7_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp5 = _isKnown;
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
  _isKnown = tmp5;

  tmpMeta10 = mmc_mk_box2(0, mmc_mk_boolean(_isKnown), _globalKnownVars);
  _outTpl = tmpMeta10;

  _outContinue = _isKnown;
  _return: OMC_LABEL_UNUSED
  if (out_outContinue) { *out_outContinue = _outContinue; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isKnownOrConstantExp__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outContinue, modelica_metatype *out_outTpl)
{
  modelica_boolean _outContinue;
  modelica_metatype _outExp = NULL;
  _outExp = omc_SynchronousFeatures_isKnownOrConstantExp__traverser(threadData, _inExp, _inTpl, &_outContinue, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_outContinue) { *out_outContinue = mmc_mk_icon(_outContinue); }
  /* skip box _outTpl; tuple<#Boolean, BackendDAE.Variables> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isKnownOrConstantExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKnownVars)
{
  modelica_boolean _outKnown;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outKnown has no default value.
  /* Pattern-matching tuple assignment, wild first pattern */
  tmpMeta4 = mmc_mk_box2(0, mmc_mk_boolean(1 /* true */), _inKnownVars);
  omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_SynchronousFeatures_isKnownOrConstantExp__traverser, tmpMeta4, &tmpMeta1);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _outKnown = tmp3  /* pattern as ty=Boolean */;
  _return: OMC_LABEL_UNUSED
  return _outKnown;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isKnownOrConstantExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKnownVars)
{
  modelica_boolean _outKnown;
  modelica_metatype out_outKnown;
  _outKnown = omc_SynchronousFeatures_isKnownOrConstantExp(threadData, _inExp, _inKnownVars);
  out_outKnown = mmc_mk_icon(_outKnown);
  return out_outKnown;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substClock(threadData_t *threadData, modelica_metatype _inClk, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_integer _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outCnt)
{
  modelica_metatype _outClk = NULL;
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_integer _outCnt;
  modelica_metatype _e = NULL;
  modelica_metatype _i = NULL;
  modelica_metatype _f = NULL;
  modelica_integer _cnt;
  modelica_metatype _eqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClk has no default value.
  // _outNewEqs has no default value.
  // _outNewVars has no default value.
  // _outCnt has no default value.
  // _e has no default value.
  // _i has no default value.
  // _f has no default value.
  // _cnt has no default value.
  // _eqs has no default value.
  // _vars has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inClk;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 6: {
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
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmpMeta5;
          _f = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = omc_SynchronousFeatures_substExp(threadData, tmpMeta7, _inNewEqs, _inNewVars, _inCnt);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          if (listEmpty(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_CAR(tmpMeta9);
          tmpMeta11 = MMC_CDR(tmpMeta9);
          if (!listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          _e = tmpMeta10;
          _eqs = tmpMeta12;
          _vars = tmpMeta13;
          _cnt = tmp15  /* pattern as ty=Integer */;
          tmpMeta16 = mmc_mk_box3(6, &DAE_ClockKind_EVENT__CLOCK__desc, _e, _f);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _eqs;
          tmpMeta[0+2] = _vars;
          tmp1_c3 = _cnt;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e = tmpMeta17;
          /* Pattern matching succeeded */
          _e = omc_SynchronousFeatures_substClockExp(threadData, _e, _inNewEqs, _inNewVars, _inCnt, _inShared ,&_eqs ,&_vars ,&_cnt);
          tmpMeta18 = mmc_mk_box2(5, &DAE_ClockKind_REAL__CLOCK__desc, _e);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _eqs;
          tmpMeta[0+2] = _vars;
          tmp1_c3 = _cnt;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmpMeta19;
          _i = tmpMeta20;
          /* Pattern matching succeeded */
          _e = omc_SynchronousFeatures_substClockExp(threadData, _e, _inNewEqs, _inNewVars, _inCnt, _inShared ,&_eqs ,&_vars ,&_cnt);
          tmpMeta21 = mmc_mk_box3(4, &DAE_ClockKind_RATIONAL__CLOCK__desc, _e, _i);
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _eqs;
          tmpMeta[0+2] = _vars;
          tmp1_c3 = _cnt;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inClk;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inCnt;
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
  _outClk = tmpMeta[0+0];
  _outNewEqs = tmpMeta[0+1];
  _outNewVars = tmpMeta[0+2];
  _outCnt = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_outNewEqs) { *out_outNewEqs = _outNewEqs; }
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  if (out_outCnt) { *out_outCnt = _outCnt; }
  return _outClk;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_substClock(threadData_t *threadData, modelica_metatype _inClk, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inCnt, modelica_metatype _inShared, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outCnt)
{
  modelica_integer tmp1;
  modelica_integer _outCnt;
  modelica_metatype _outClk = NULL;
  tmp1 = mmc_unbox_integer(_inCnt);
  _outClk = omc_SynchronousFeatures_substClock(threadData, _inClk, _inNewEqs, _inNewVars, tmp1, _inShared, out_outNewEqs, out_outNewVars, &_outCnt);
  /* skip box _outClk; DAE.ClockKind */
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  if (out_outCnt) { *out_outCnt = mmc_mk_icon(_outCnt); }
  return _outClk;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _clk = NULL;
  modelica_integer _cnt;
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newVars = NULL;
  modelica_metatype _exps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  // _path has no default value.
  // _shared has no default value.
  // _attr has no default value.
  // _clk has no default value.
  // _cnt has no default value.
  // _newEqs has no default value.
  // _newVars has no default value.
  // _exps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _newEqs = tmpMeta2;
  _newVars = tmpMeta3;
  _cnt = tmp5  /* pattern as ty=Integer */;
  _shared = tmpMeta6;

  
  
  { /* match expression */
    modelica_metatype tmp10_1;
    tmp10_1 = _inExp;
    {
      int tmp10;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp10_1))) {
        case 7: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,4,1) == 0) goto tmp9_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
          _clk = tmpMeta11;
          /* Pattern matching succeeded */
          _clk = omc_SynchronousFeatures_substClock(threadData, _clk, _newEqs, _newVars, _cnt, _shared ,&_newEqs ,&_newVars ,&_cnt);
          tmpMeta12 = mmc_mk_box2(7, &DAE_Exp_CLKCONST__desc, _clk);
          tmpMeta13 = mmc_mk_box4(0, _newEqs, _newVars, mmc_mk_integer(_cnt), _shared);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = tmpMeta13;
          goto tmp9_done;
        }
        case 16: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp10_1,13,3) == 0) goto tmp9_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 3));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 4));
          _path = tmpMeta14;
          _exps = tmpMeta15;
          _attr = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substituteExpsCall(threadData, _path, _exps, _attr, _newEqs, _newVars, _cnt, _shared, &tmpMeta[0+1]);
          goto tmp9_done;
        }
        default:
        tmp9_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inTpl;
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
  _outExp = tmpMeta[0+0];
  _outTpl = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_substitutePartitionOpExp1, _inTpl ,&_outTpl);
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substitutePartitionOpExps(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _outSyst = NULL;
  modelica_metatype _newEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _newVars = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _cnt;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _outSyst = _inSyst;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _newEqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _newVars = tmpMeta2;
  _cnt = ((modelica_integer) 1);
  {
    modelica_metatype _eq;
    for (tmpMeta3 = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 3)))); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _eq = MMC_CAR(tmpMeta3);
      /* Pattern-matching tuple assignment */
      tmpMeta9 = mmc_mk_box4(0, _newEqs, _newVars, mmc_mk_integer(_cnt), _inShared);
      tmpMeta10 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_substitutePartitionOpExp, tmpMeta9, &tmpMeta4);
      _eq = tmpMeta10;
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      _newEqs = tmpMeta5;
      _newVars = tmpMeta6;
      _cnt = tmp8  /* pattern as ty=Integer */;

      tmpMeta11 = mmc_mk_cons(_eq, _newEqs);
      _newEqs = tmpMeta11;
    }
  }

  __omcQ_24mrfa_5F0 = omc_BackendEquation_listEquation(threadData, listReverse(_newEqs));

  __omcQ_24mrfa_5F1 = omc_BackendVariable_addVars(threadData, _newVars, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))));

  tmpMeta13 = mmc_mk_box10(3, &BackendDAE_EqSystem_EQSYSTEM__desc, __omcQ_24mrfa_5F1, __omcQ_24mrfa_5F0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outSyst), 10))));
  _outSyst = tmpMeta13;

  _outSyst = omc_BackendDAEUtil_clearEqSyst(threadData, _outSyst);
  _return: OMC_LABEL_UNUSED
  return _outSyst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_splitClockVars(threadData_t *threadData, modelica_metatype _inVars, modelica_metatype *out_outClockVarsMask)
{
  modelica_metatype _outClockVars = NULL;
  modelica_metatype _outClockVarsMask = NULL;
  modelica_metatype _clockVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _var = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClockVars has no default value.
  // _outClockVarsMask has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _clockVars = tmpMeta1;
  // _var has no default value.
  _outClockVarsMask = arrayCreate(omc_BackendVariable_varsSize(threadData, _inVars), mmc_mk_boolean(1 /* true */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = omc_BackendVariable_varsSize(threadData, _inVars);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      _var = omc_BackendVariable_getVarAt(threadData, _inVars, _i);

      if(omc_Types_isClockOrSubTypeClock(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)))))
      {
        tmpMeta2 = mmc_mk_cons(_var, _clockVars);
        _clockVars = tmpMeta2;

        arrayUpdate(_outClockVarsMask, _i, mmc_mk_boolean(0 /* false */));
      }
    }
  }

  _outClockVars = omc_BackendVariable_listVar(threadData, _clockVars);
  _return: OMC_LABEL_UNUSED
  if (out_outClockVarsMask) { *out_outClockVarsMask = _outClockVarsMask; }
  return _outClockVars;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_splitClockEqs(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype *out_outClockEqsMask)
{
  modelica_metatype _outClockEqs = NULL;
  modelica_metatype _outClockEqsMask = NULL;
  modelica_metatype _clockEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _eq = NULL;
  modelica_integer _i;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outClockEqs has no default value.
  // _outClockEqsMask has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _clockEqs = tmpMeta1;
  // _eq has no default value.
  // _i has no default value.
  _outClockEqsMask = arrayCreate(omc_BackendEquation_getNumberOfEquations(threadData, _inEqs), mmc_mk_boolean(1 /* true */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = omc_BackendEquation_getNumberOfEquations(threadData, _inEqs);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      _eq = omc_BackendEquation_get(threadData, _inEqs, _i);

      if(omc_SynchronousFeatures_isClockEquation(threadData, _eq))
      {
        tmpMeta2 = mmc_mk_cons(_eq, _clockEqs);
        _clockEqs = tmpMeta2;

        arrayUpdate(_outClockEqsMask, _i, mmc_mk_boolean(0 /* false */));
      }
    }
  }

  _outClockEqs = omc_BackendEquation_listEquation(threadData, _clockEqs);
  _return: OMC_LABEL_UNUSED
  if (out_outClockEqsMask) { *out_outClockEqsMask = _outClockEqsMask; }
  return _outClockEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_collectSubclkInfoExp, _inTpl ,&_outTpl);
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectEquationArrayClocks(threadData_t *threadData, modelica_metatype _eqs, modelica_integer _partitionsCnt, modelica_metatype _partitions, modelica_metatype _partitionsWhenClocks, modelica_metatype _clksCnt, modelica_metatype _contPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewVars)
{
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _eqAttr = NULL;
  modelica_integer _partitionIdx;
  modelica_metatype _source = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNewEqs = _inNewEqs;
  _outNewVars = _inNewVars;
  // _eq has no default value.
  // _eqAttr has no default value.
  // _partitionIdx has no default value.
  // _source has no default value.
  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = omc_BackendEquation_getNumberOfEquations(threadData, _eqs);
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      _eq = omc_BackendEquation_get(threadData, _eqs, _i);

      _partitionIdx = mmc_unbox_integer(arrayGet(_partitions, _i));

      /* Pattern-matching assignment */
      tmpMeta1 = omc_BackendEquation_equationSource(threadData, _eq);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      _source = tmpMeta2;

      if((_partitionIdx != ((modelica_integer) 0)))
      {
        _eqAttr = omc_BackendEquation_getEquationAttributes(threadData, _eq);

        { /* match expression */
          modelica_metatype tmp6_1;
          tmp6_1 = _eqAttr;
          {
            modelica_integer _whenIdx;
            modelica_metatype _partitionsWhenClocksLst = NULL;
            volatile mmc_switch_type tmp6;
            int tmp7;
            // _whenIdx has no default value.
            // _partitionsWhenClocksLst has no default value.
            tmp6 = 0;
            for (; tmp6 < 2; tmp6++) {
              switch (MMC_SWITCH_CAST(tmp6)) {
              case 0: {
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                modelica_integer tmp10;
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp5_end;
                tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
                tmp10 = mmc_unbox_integer(tmpMeta9);
                
                _whenIdx = tmp10  /* pattern as ty=Integer */;
                /* Pattern matching succeeded */
                _partitionsWhenClocksLst = arrayGet(_partitionsWhenClocks,_partitionIdx) /* DAE.ASUB */;

                if(((_whenIdx != ((modelica_integer) 0)) && omc_List_notMember(threadData, mmc_mk_integer(_whenIdx), _partitionsWhenClocksLst)))
                {
                  tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_whenIdx), _partitionsWhenClocksLst);
                  arrayUpdate(_partitionsWhenClocks, _partitionIdx, tmpMeta11);
                }

                tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_eqAttr), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = _OMC_LIT46;
                _eqAttr = tmpMeta12;
                tmpMeta3 = _eqAttr;
                goto tmp5_done;
              }
              case 1: {
                
                /* Pattern matching succeeded */
                tmpMeta3 = _eqAttr;
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
        _eqAttr = tmpMeta3;

        _eq = omc_BackendEquation_setEquationAttributes(threadData, _eq, _eqAttr);

        /* Pattern-matching tuple assignment */
        tmpMeta16 = mmc_mk_box9(0, _outNewEqs, _outNewVars, _contPartitions, _source, _clksCnt, mmc_mk_integer(_partitionIdx), _partitions, _inVars, _mT);
        tmpMeta17 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_collectSubclkInfoExp1, tmpMeta16, &tmpMeta13);
        _eq = tmpMeta17;
        tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
        tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
        _outNewEqs = tmpMeta14;
        _outNewVars = tmpMeta15;

        omc_BackendEquation_setAtIndex(threadData, _eqs, _i, _eq);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  return _outNewEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectEquationArrayClocks(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _partitionsCnt, modelica_metatype _partitions, modelica_metatype _partitionsWhenClocks, modelica_metatype _clksCnt, modelica_metatype _contPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewVars)
{
  modelica_integer tmp1;
  modelica_metatype _outNewEqs = NULL;
  tmp1 = mmc_unbox_integer(_partitionsCnt);
  _outNewEqs = omc_SynchronousFeatures_collectEquationArrayClocks(threadData, _eqs, tmp1, _partitions, _partitionsWhenClocks, _clksCnt, _contPartitions, _inVars, _mT, _inNewEqs, _inNewVars, out_outNewVars);
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  return _outNewEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfo(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inRemovedEqs, modelica_integer _inPartitionCnt, modelica_metatype _inPartitions, modelica_metatype _inReqsPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outNewVars, modelica_metatype *out_outContPartitions, modelica_metatype *out_oClksCnt)
{
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_metatype _outContPartitions = NULL;
  modelica_metatype _oClksCnt = NULL;
  modelica_metatype _eq = NULL;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _cnt;
  modelica_metatype _cr = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _partitionsWhenClocks = NULL;
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
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outNewEqs has no default value.
  // _outNewVars has no default value.
  // _outContPartitions has no default value.
  // _oClksCnt has no default value.
  // _eq has no default value.
  // _i has no default value.
  // _j has no default value.
  // _cnt has no default value.
  // _cr has no default value.
  // _var has no default value.
  // _partitionsWhenClocks has no default value.
  _outContPartitions = arrayCreate(_inPartitionCnt, mmc_mk_none());

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _partitionsWhenClocks = arrayCreate(_inPartitionCnt, tmpMeta1);

  _oClksCnt = arrayCreate(_inPartitionCnt, mmc_mk_integer(((modelica_integer) 1)));

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _outNewEqs = omc_SynchronousFeatures_collectEquationArrayClocks(threadData, _inEqs, _inPartitionCnt, _inPartitions, _partitionsWhenClocks, _oClksCnt, _outContPartitions, _inVars, _mT, tmpMeta2, tmpMeta3 ,&_outNewVars);

  _outNewEqs = omc_SynchronousFeatures_collectEquationArrayClocks(threadData, _inRemovedEqs, _inPartitionCnt, _inReqsPartitions, _partitionsWhenClocks, _oClksCnt, _outContPartitions, _inVars, _mT, _outNewEqs, _outNewVars ,&_outNewVars);

  tmp14 = ((modelica_integer) 1); tmp15 = 1; tmp16 = _inPartitionCnt;
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
    {
      {
        modelica_metatype _j;
        for (tmpMeta4 = arrayGet(_partitionsWhenClocks, _i); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
        {
          _j = MMC_CAR(tmpMeta4);
          _cnt = mmc_unbox_integer(arrayGet(_oClksCnt, _i));

          tmpMeta5 = stringAppend(_OMC_LIT56,intString(mmc_unbox_integer(_j)));
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, tmpMeta5, _OMC_LIT57, tmpMeta6);
          _cr = tmpMeta7;

          tmpMeta8 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT57);
          _var = omc_SynchronousFeatures_createSubClock(threadData, _i, _cnt, tmpMeta8 ,&_eq);

          tmpMeta9 = mmc_mk_cons(_eq, _outNewEqs);
          _outNewEqs = tmpMeta9;

          tmpMeta10 = mmc_mk_cons(_var, _outNewVars);
          _outNewVars = tmpMeta10;

          arrayUpdate(_oClksCnt, _i, mmc_mk_integer(((modelica_integer) 1) + _cnt));
        }
      }

      if((mmc_unbox_integer(arrayGet(_oClksCnt, _i)) == ((modelica_integer) 1)))
      {
        _var = omc_SynchronousFeatures_createSubClock(threadData, _i, ((modelica_integer) 1), _OMC_LIT59 ,&_eq);

        tmpMeta12 = mmc_mk_cons(_eq, _outNewEqs);
        _outNewEqs = tmpMeta12;

        tmpMeta13 = mmc_mk_cons(_var, _outNewVars);
        _outNewVars = tmpMeta13;

        arrayUpdate(_oClksCnt, _i, mmc_mk_integer(((modelica_integer) 2)));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  if (out_outContPartitions) { *out_outContPartitions = _outContPartitions; }
  if (out_oClksCnt) { *out_oClksCnt = _oClksCnt; }
  return _outNewEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectSubclkInfo(threadData_t *threadData, modelica_metatype _inEqs, modelica_metatype _inRemovedEqs, modelica_metatype _inPartitionCnt, modelica_metatype _inPartitions, modelica_metatype _inReqsPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outNewVars, modelica_metatype *out_outContPartitions, modelica_metatype *out_oClksCnt)
{
  modelica_integer tmp1;
  modelica_metatype _outNewEqs = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionCnt);
  _outNewEqs = omc_SynchronousFeatures_collectSubclkInfo(threadData, _inEqs, _inRemovedEqs, tmp1, _inPartitions, _inReqsPartitions, _inVars, _mT, out_outNewVars, out_outContPartitions, out_oClksCnt);
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  /* skip box _outContPartitions; array<Option<#Boolean>> */
  /* skip box _oClksCnt; array<#Integer> */
  return _outNewEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClock(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inCnt, modelica_metatype _inExp, modelica_metatype *out_outEq)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outEq = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _cr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outEq has no default value.
  // _ty has no default value.
  // _cr has no default value.
  _ty = _OMC_LIT57;

  _cr = omc_SynchronousFeatures_getSubClkName(threadData, _inPartitionIdx, _inCnt, _ty);

  _outVar = omc_SynchronousFeatures_createEqVarPair(threadData, _cr, _ty, _inExp ,&_outEq);
  _return: OMC_LABEL_UNUSED
  if (out_outEq) { *out_outEq = _outEq; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClock(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inCnt, modelica_metatype _inExp, modelica_metatype *out_outEq)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionIdx);
  tmp2 = mmc_unbox_integer(_inCnt);
  _outVar = omc_SynchronousFeatures_createSubClock(threadData, tmp1, tmp2, _inExp, out_outEq);
  /* skip box _outVar; BackendDAE.Var */
  /* skip box _outEq; BackendDAE.Equation */
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClkName(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkIdx, modelica_metatype _inTy)
{
  modelica_metatype _outRef = NULL;
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outRef has no default value.
  // _name has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT60,intString(_inPartitionIdx));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT61);
  tmpMeta3 = stringAppend(tmpMeta2,intString(_inClkIdx));
  _name = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _name, _inTy, tmpMeta4);
  _outRef = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outRef;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getSubClkName(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkIdx, modelica_metatype _inTy)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outRef = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionIdx);
  tmp2 = mmc_unbox_integer(_inClkIdx);
  _outRef = omc_SynchronousFeatures_getSubClkName(threadData, tmp1, tmp2, _inTy);
  /* skip box _outRef; DAE.ComponentRef */
  return _outRef;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substGetPartition(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _attrs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _attrs has no default value.
  tmpMeta1 = mmc_mk_box9(3, &DAE_CallAttributes_CALL__ATTR__desc, omc_Expression_typeof(threadData, _inExp), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(1 /* true */), mmc_mk_boolean(0 /* false */), _OMC_LIT62, _OMC_LIT63, mmc_mk_integer(1));
  _attrs = tmpMeta1;

  tmpMeta2 = mmc_mk_cons(_inExp, MMC_REFSTRUCTLIT(mmc_nil));
  tmpMeta3 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT65, tmpMeta2, _attrs);
  _outExp = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClockVarFactor(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outClkCnt)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_integer _outClkCnt;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outNewEqs = _inNewEqs;
  _outNewVars = _inNewVars;
  _outClkCnt = _inClkCnt;
  _outExp = omc_SynchronousFeatures_substGetPartition(threadData, listHead(_inExpLst));
  _return: OMC_LABEL_UNUSED
  if (out_outNewEqs) { *out_outNewEqs = _outNewEqs; }
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  if (out_outClkCnt) { *out_outClkCnt = _outClkCnt; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClockVarFactor(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outClkCnt)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outClkCnt;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionIdx);
  tmp2 = mmc_unbox_integer(_inClkCnt);
  _outExp = omc_SynchronousFeatures_createSubClockVarFactor(threadData, tmp1, tmp2, _inPath, _inExpLst, _inAttr, _inPartitions, _inVars, _mT, _inNewEqs, _inNewVars, out_outNewEqs, out_outNewVars, &_outClkCnt);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  if (out_outClkCnt) { *out_outClkCnt = mmc_mk_icon(_outClkCnt); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inContPartitions, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _source, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_integer *out_outClkCnt)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outNewEqs = NULL;
  modelica_metatype _outNewVars = NULL;
  modelica_integer _outClkCnt;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outNewEqs has no default value.
  // _outNewVars has no default value.
  // _outClkCnt has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_integer tmp4_2;
    tmp4_1 = _inPath;
    tmp4_2 = listLength(_inExpLst);
    {
      modelica_metatype _var = NULL;
      modelica_metatype _eq = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _var has no default value.
      // _eq has no default value.
      tmp4 = 0;
      for (; tmp4 < 21; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta7 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta7;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (5 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT67), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta9 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (19 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT68), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta11 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta12) || strcmp(MMC_STRINGDATA(_OMC_LIT69), MMC_STRINGDATA(tmpMeta12)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta13 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta13;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (8 != MMC_STRLEN(tmpMeta14) || strcmp(MMC_STRINGDATA(_OMC_LIT70), MMC_STRINGDATA(tmpMeta14)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta15 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta15;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta16) || strcmp(MMC_STRINGDATA(_OMC_LIT71), MMC_STRINGDATA(tmpMeta16)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta17 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (3 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta18) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta18)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta19 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta19;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (3 != MMC_STRLEN(tmpMeta20) || strcmp(MMC_STRINGDATA(_OMC_LIT72), MMC_STRINGDATA(tmpMeta20)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta21 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (4 != MMC_STRLEN(tmpMeta22) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmpMeta22)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta23 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta23;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta24) || strcmp(MMC_STRINGDATA(_OMC_LIT74), MMC_STRINGDATA(tmpMeta24)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta25 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta26) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmpMeta26)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 1 /* true */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta27 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta27;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (8 != MMC_STRLEN(tmpMeta28) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta28)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 0 /* false */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta29 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta29;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (9 != MMC_STRLEN(tmpMeta30) || strcmp(MMC_STRINGDATA(_OMC_LIT77), MMC_STRINGDATA(tmpMeta30)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 0 /* false */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta32 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, tmpMeta31, _inAttr);
          tmpMeta[0+0] = tmpMeta32;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (8 != MMC_STRLEN(tmpMeta33) || strcmp(MMC_STRINGDATA(_OMC_LIT78), MMC_STRINGDATA(tmpMeta33)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          omc_SynchronousFeatures_setContClockedPartition(threadData, 0 /* false */, _inPartitionIdx, _inContPartitions, _source);
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, tmpMeta34, _inAttr);
          tmpMeta[0+0] = tmpMeta35;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (6 != MMC_STRLEN(tmpMeta36) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta36)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          _var = omc_SynchronousFeatures_createSubClock(threadData, _inPartitionIdx, _inClkCnt, listGet(_inExpLst, ((modelica_integer) 2)) ,&_eq);
          tmpMeta37 = mmc_mk_cons(_eq, _inNewEqs);
          tmpMeta38 = mmc_mk_cons(_var, _inNewVars);
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = tmpMeta37;
          tmpMeta[0+2] = tmpMeta38;
          tmp1_c3 = ((modelica_integer) 1) + _inClkCnt;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta39;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (9 != MMC_STRLEN(tmpMeta39) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmpMeta39)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = ((modelica_integer) 1) + _inClkCnt;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta40;
          if (2 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta40) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta40)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = ((modelica_integer) 1) + _inClkCnt;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta41;
          if (3 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta41) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta41)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = ((modelica_integer) 1) + _inClkCnt;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta42;
          if (3 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (10 != MMC_STRLEN(tmpMeta42) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta42)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = ((modelica_integer) 1) + _inClkCnt;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta43;
          if (1 != tmp4_2) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta43) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta43)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, listGet(_inExpLst, ((modelica_integer) 1)));
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta44;
          
          /* Pattern matching succeeded */
          tmpMeta44 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, _inExpLst, _inAttr);
          tmpMeta[0+0] = tmpMeta44;
          tmpMeta[0+1] = _inNewEqs;
          tmpMeta[0+2] = _inNewVars;
          tmp1_c3 = _inClkCnt;
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
  _outNewEqs = tmpMeta[0+1];
  _outNewVars = tmpMeta[0+2];
  _outClkCnt = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_outNewEqs) { *out_outNewEqs = _outNewEqs; }
  if (out_outNewVars) { *out_outNewVars = _outNewVars; }
  if (out_outClkCnt) { *out_outClkCnt = _outClkCnt; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_collectSubclkInfoCall(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inNewEqs, modelica_metatype _inNewVars, modelica_metatype _inContPartitions, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype _source, modelica_metatype *out_outNewEqs, modelica_metatype *out_outNewVars, modelica_metatype *out_outClkCnt)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outClkCnt;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionIdx);
  tmp2 = mmc_unbox_integer(_inClkCnt);
  _outExp = omc_SynchronousFeatures_collectSubclkInfoCall(threadData, _inPath, _inExpLst, _inAttr, _inNewEqs, _inNewVars, _inContPartitions, tmp1, tmp2, _inPartitions, _inVars, _mT, _source, out_outNewEqs, out_outNewVars, &_outClkCnt);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outNewEqs; list<BackendDAE.Equation> */
  /* skip box _outNewVars; list<BackendDAE.Var> */
  if (out_outClkCnt) { *out_outClkCnt = mmc_mk_icon(_outClkCnt); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_setContClockedPartition(threadData_t *threadData, modelica_boolean _inIsContClockedPartition, modelica_integer _inPartitionIdx, modelica_metatype _inContPartitions, modelica_metatype _source)
{
  modelica_metatype _isContClockedPartition = NULL;
  modelica_boolean _isContClockedPrevPartition;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isContClockedPartition has no default value.
  // _isContClockedPrevPartition has no default value.
  _isContClockedPartition = arrayGet(_inContPartitions, _inPartitionIdx);

  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _isContClockedPartition;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(mmc_mk_boolean(_inIsContClockedPartition));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          _isContClockedPrevPartition = tmp7  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(mmc_mk_boolean((_inIsContClockedPartition || _isContClockedPrevPartition)));
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
  _isContClockedPartition = tmpMeta1;

  arrayUpdate(_inContPartitions, _inPartitionIdx, _isContClockedPartition);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_setContClockedPartition(threadData_t *threadData, modelica_metatype _inIsContClockedPartition, modelica_metatype _inPartitionIdx, modelica_metatype _inContPartitions, modelica_metatype _source)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_inIsContClockedPartition);
  tmp2 = mmc_unbox_integer(_inPartitionIdx);
  omc_SynchronousFeatures_setContClockedPartition(threadData, tmp1, tmp2, _inContPartitions, _source);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createSubClockVar(threadData_t *threadData, modelica_integer _inPartitionIdx, modelica_integer _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outEq)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outEq = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _varIxs = NULL;
  modelica_integer _i;
  modelica_metatype _e = NULL;
  modelica_metatype _subclk = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outEq has no default value.
  // _cr has no default value.
  // _varIxs has no default value.
  // _i has no default value.
  // _e has no default value.
  // _subclk has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = listHead(_inExpLst);
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _cr = tmpMeta2;

  omc_BackendVariable_getVar(threadData, _cr, _inVars ,&_varIxs);

  _i = mmc_unbox_integer(listHead(_varIxs));

  _i = mmc_unbox_integer(listHead(arrayGet(_mT, _i)));

  _i = mmc_unbox_integer(arrayGet(_inPartitions, _i));

  tmpMeta3 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, omc_SynchronousFeatures_getSubClkName(threadData, _i, ((modelica_integer) 1), _OMC_LIT57), _OMC_LIT57);
  _subclk = tmpMeta3;

  tmpMeta4 = mmc_mk_cons(_subclk, listRest(_inExpLst));
  tmpMeta5 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _inPath, tmpMeta4, _inAttr);
  _e = tmpMeta5;

  _outVar = omc_SynchronousFeatures_createSubClock(threadData, _inPartitionIdx, _inClkCnt, _e ,&_outEq);
  _return: OMC_LABEL_UNUSED
  if (out_outEq) { *out_outEq = _outEq; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_createSubClockVar(threadData_t *threadData, modelica_metatype _inPartitionIdx, modelica_metatype _inClkCnt, modelica_metatype _inPath, modelica_metatype _inExpLst, modelica_metatype _inAttr, modelica_metatype _inPartitions, modelica_metatype _inVars, modelica_metatype _mT, modelica_metatype *out_outEq)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_inPartitionIdx);
  tmp2 = mmc_unbox_integer(_inClkCnt);
  _outVar = omc_SynchronousFeatures_createSubClockVar(threadData, tmp1, tmp2, _inPath, _inExpLst, _inAttr, _inPartitions, _inVars, _mT, out_outEq);
  /* skip box _outVar; BackendDAE.Var */
  /* skip box _outEq; BackendDAE.Equation */
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectSubclkInfoExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newVars = NULL;
  modelica_metatype _contPartitions = NULL;
  modelica_integer _partitionIdx;
  modelica_metatype _partitions = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _attr = NULL;
  modelica_metatype _clksCnt = NULL;
  modelica_integer _clkCnt;
  modelica_metatype _source = NULL;
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
  modelica_metatype tmpMeta11;
  modelica_integer tmp12_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  // _newEqs has no default value.
  // _newVars has no default value.
  // _contPartitions has no default value.
  // _partitionIdx has no default value.
  // _partitions has no default value.
  // _vars has no default value.
  // _mT has no default value.
  // _path has no default value.
  // _expLst has no default value.
  // _attr has no default value.
  // _clksCnt has no default value.
  // _clkCnt has no default value.
  // _source has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _newEqs = tmpMeta2;
  _newVars = tmpMeta3;
  _contPartitions = tmpMeta4;
  _source = tmpMeta5;
  _clksCnt = tmpMeta6;
  _partitionIdx = tmp8  /* pattern as ty=Integer */;
  _partitions = tmpMeta9;
  _vars = tmpMeta10;
  _mT = tmpMeta11;

  _clkCnt = mmc_unbox_integer(arrayGet(_clksCnt, _partitionIdx));

  
  
  
  
  { /* match expression */
    modelica_metatype tmp15_1;
    tmp15_1 = _inExp;
    {
      volatile mmc_switch_type tmp15;
      int tmp16;
      tmp15 = 0;
      for (; tmp15 < 2; tmp15++) {
        switch (MMC_SWITCH_CAST(tmp15)) {
        case 0: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp15_1,13,3) == 0) goto tmp14_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp15_1), 4));
          _path = tmpMeta17;
          _expLst = tmpMeta18;
          _attr = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_SynchronousFeatures_collectSubclkInfoCall(threadData, _path, _expLst, _attr, _newEqs, _newVars, _contPartitions, _partitionIdx, _clkCnt, _partitions, _vars, _mT, _source, &tmpMeta[0+1], &tmpMeta[0+2], &tmp12_c3);
          goto tmp14_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _newEqs;
          tmpMeta[0+2] = _newVars;
          tmp12_c3 = _clkCnt;
          goto tmp14_done;
        }
        }
        goto tmp14_end;
        tmp14_end: ;
      }
      goto goto_13;
      goto_13:;
      MMC_THROW_INTERNAL();
      goto tmp14_done;
      tmp14_done:;
    }
  }
  _outExp = tmpMeta[0+0];
  _newEqs = tmpMeta[0+1];
  _newVars = tmpMeta[0+2];
  _clkCnt = tmp12_c3;

  arrayUpdate(_clksCnt, _partitionIdx, mmc_mk_integer(_clkCnt));

  tmpMeta20 = mmc_mk_box9(0, _newEqs, _newVars, _contPartitions, _source, _clksCnt, mmc_mk_integer(_partitionIdx), _partitions, _vars, _mT);
  _outTpl = tmpMeta20;
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setShift(threadData_t *threadData, modelica_metatype _oldVal, modelica_metatype _newVal)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _oldVal;
    tmp4_2 = _newVal;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (0 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _newVal;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (0 != tmp9) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _oldVal;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          if((!omc_MMath_equals(threadData, _oldVal, _newVal)))
          {
            tmpMeta10 = mmc_mk_cons(_OMC_LIT81, mmc_mk_cons(omc_MMath_rationalString(threadData, _oldVal), mmc_mk_cons(omc_MMath_rationalString(threadData, _newVal), MMC_REFSTRUCTLIT(mmc_nil))));
            omc_Error_addMessage(threadData, _OMC_LIT80, tmpMeta10);

            goto goto_2;
          }
          tmpMeta1 = _newVal;
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
  _outVal = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVal;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setFactor(threadData_t *threadData, modelica_metatype _oldVal, modelica_metatype _newVal)
{
  modelica_metatype _outVal = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVal has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _oldVal;
    tmp4_2 = _newVal;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (1 != tmp7) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (1 != tmp9) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _newVal;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 != tmp11) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          if (1 != tmp13) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _oldVal;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          if((!omc_MMath_equals(threadData, _oldVal, _newVal)))
          {
            tmpMeta14 = mmc_mk_cons(_OMC_LIT82, mmc_mk_cons(omc_MMath_rationalString(threadData, _oldVal), mmc_mk_cons(omc_MMath_rationalString(threadData, _newVal), MMC_REFSTRUCTLIT(mmc_nil))));
            omc_Error_addMessage(threadData, _OMC_LIT80, tmpMeta14);

            goto goto_2;
          }
          tmpMeta1 = _newVal;
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
  _outVal = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVal;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isInferedBaseClock(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_boolean _isInfered;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isInfered has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
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
  _isInfered = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isInfered;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isInferedBaseClock(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_boolean _isInfered;
  modelica_metatype out_isInfered;
  _isInfered = omc_SynchronousFeatures_isInferedBaseClock(threadData, _subClk);
  out_isInfered = mmc_mk_icon(_isInfered);
  return out_isInfered;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isInferedSubClock(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_boolean _isInfered;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isInfered has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
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
  _isInfered = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isInfered;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isInferedSubClock(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_boolean _isInfered;
  modelica_metatype out_isInfered;
  _isInfered = omc_SynchronousFeatures_isInferedSubClock(threadData, _subClk);
  out_isInfered = mmc_mk_icon(_isInfered);
  return out_isInfered;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_orderSubPartitions(threadData_t *threadData, modelica_integer _numParts, modelica_metatype _subclocks, modelica_metatype _order, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _remEqs, modelica_metatype _shared, modelica_integer _partitionOffset, modelica_metatype *out_subClksOut)
{
  modelica_metatype _systs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _subClksOut = NULL;
  modelica_metatype tmpMeta2;
  modelica_boolean _considerRemovedEqs;
  modelica_integer _part;
  modelica_metatype _mergedParts = NULL;
  modelica_metatype _partVarMap = NULL;
  modelica_metatype _partEqMap = NULL;
  modelica_metatype _partRemEqMap = NULL;
  modelica_metatype _sys = NULL;
  modelica_metatype _clk = NULL;
  modelica_metatype _clk2 = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype _remEqLst = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _mergedOrder = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_integer tmp25;
  modelica_integer tmp26;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _systs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _subClksOut = tmpMeta2;
  // _considerRemovedEqs has no default value.
  // _part has no default value.
  // _mergedParts has no default value.
  // _partVarMap has no default value.
  // _partEqMap has no default value.
  // _partRemEqMap has no default value.
  // _sys has no default value.
  // _clk has no default value.
  // _clk2 has no default value.
  // _eqLst has no default value.
  // _remEqLst has no default value.
  // _varLst has no default value.
  // _mergedOrder has no default value.
  _considerRemovedEqs = (arrayLength(_remEqPartMap) >= ((modelica_integer) 1));

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _partVarMap = arrayCreate(_numParts, tmpMeta3);

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = arrayLength(_varPartMap);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _varIdx;
    for(_varIdx = ((modelica_integer) 1); in_range_integer(_varIdx, tmp5, tmp7); _varIdx += tmp6)
    {
      _part = mmc_unbox_integer(arrayGet(_varPartMap, _varIdx));

      if((_part > ((modelica_integer) 0)))
      {
        tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_varIdx), MMC_REFSTRUCTLIT(mmc_nil));
        arrayUpdate(_partVarMap, _part, listAppend(arrayGet(_partVarMap,_part) /* DAE.ASUB */, tmpMeta4));
      }
    }
  }

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _partEqMap = arrayCreate(_numParts, tmpMeta8);

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = arrayLength(_eqPartMap);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _eqIdx;
    for(_eqIdx = ((modelica_integer) 1); in_range_integer(_eqIdx, tmp10, tmp12); _eqIdx += tmp11)
    {
      _part = mmc_unbox_integer(arrayGet(_eqPartMap, _eqIdx));

      if((_part > ((modelica_integer) 0)))
      {
        tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_eqIdx), MMC_REFSTRUCTLIT(mmc_nil));
        arrayUpdate(_partEqMap, _part, listAppend(arrayGet(_partEqMap,_part) /* DAE.ASUB */, tmpMeta9));
      }
    }
  }

  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  _partRemEqMap = arrayCreate(_numParts, tmpMeta13);

  if(_considerRemovedEqs)
  {
    tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = arrayLength(_partRemEqMap);
    if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
    {
      modelica_integer _reqIdx;
      for(_reqIdx = ((modelica_integer) 1); in_range_integer(_reqIdx, tmp15, tmp17); _reqIdx += tmp16)
      {
        _part = mmc_unbox_integer(arrayGet(_remEqPartMap, _reqIdx));

        if((_part > ((modelica_integer) 0)))
        {
          tmpMeta14 = mmc_mk_cons(mmc_mk_integer(_reqIdx), MMC_REFSTRUCTLIT(mmc_nil));
          arrayUpdate(_partRemEqMap, _part, listAppend(arrayGet(_partRemEqMap,_part) /* DAE.ASUB */, tmpMeta14));
        }
      }
    }
  }

  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
  _mergedOrder = tmpMeta18;

  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
  _mergedParts = tmpMeta19;

  _clk = arrayGet(_subclocks, mmc_unbox_integer(arrayGet(_order,((modelica_integer) 1)) /* DAE.ASUB */));

  {
    modelica_metatype _part;
    for (tmpMeta20 = _order, tmp26 = arrayLength(tmpMeta20), tmp25 = 1; tmp25 <= tmp26; tmp25++)
    {
      _part = arrayGet(tmpMeta20,tmp25);
      _clk2 = arrayGet(_subclocks, mmc_unbox_integer(_part));

      if(omc_SynchronousFeatures_subClkEqual(threadData, _clk, _clk2))
      {
        tmpMeta21 = mmc_mk_cons(_part, _mergedParts);
        _mergedParts = tmpMeta21;
      }
      else
      {
        tmpMeta22 = mmc_mk_cons(listReverse(_mergedParts), _mergedOrder);
        _mergedOrder = tmpMeta22;

        tmpMeta23 = mmc_mk_cons(_part, MMC_REFSTRUCTLIT(mmc_nil));
        _mergedParts = tmpMeta23;

        _clk = arrayGet(_subclocks, mmc_unbox_integer(_part));
      }
    }
  }

  tmpMeta27 = mmc_mk_cons(listReverse(_mergedParts), _mergedOrder);
  _mergedOrder = tmpMeta27;

  _mergedOrder = listReverse(_mergedOrder);

  _part = ((modelica_integer) 1);

  {
    modelica_metatype _mergedParts;
    for (tmpMeta28 = _mergedOrder; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
    {
      _mergedParts = MMC_CAR(tmpMeta28);
      tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
      _eqLst = tmpMeta29;

      tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
      _varLst = tmpMeta30;

      tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
      _remEqLst = tmpMeta31;

      {
        modelica_metatype _partIdx;
        for (tmpMeta32 = _mergedParts; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
        {
          _partIdx = MMC_CAR(tmpMeta32);
          {
            modelica_metatype _e;
            for (tmpMeta33 = arrayGet(_partEqMap, mmc_unbox_integer(_partIdx)); !listEmpty(tmpMeta33); tmpMeta33=MMC_CDR(tmpMeta33))
            {
              _e = MMC_CAR(tmpMeta33);
              tmpMeta34 = mmc_mk_cons(omc_BackendEquation_get(threadData, _eqs, mmc_unbox_integer(_e)), _eqLst);
              _eqLst = tmpMeta34;
            }
          }

          {
            modelica_metatype _v;
            for (tmpMeta36 = arrayGet(_partVarMap, mmc_unbox_integer(_partIdx)); !listEmpty(tmpMeta36); tmpMeta36=MMC_CDR(tmpMeta36))
            {
              _v = MMC_CAR(tmpMeta36);
              tmpMeta37 = mmc_mk_cons(omc_BackendVariable_getVarAt(threadData, _vars, mmc_unbox_integer(_v)), _varLst);
              _varLst = tmpMeta37;
            }
          }

          {
            modelica_metatype _r;
            for (tmpMeta39 = arrayGet(_partRemEqMap, mmc_unbox_integer(_partIdx)); !listEmpty(tmpMeta39); tmpMeta39=MMC_CDR(tmpMeta39))
            {
              _r = MMC_CAR(tmpMeta39);
              tmpMeta40 = mmc_mk_cons(omc_BackendEquation_get(threadData, _remEqs, mmc_unbox_integer(_r)), _remEqLst);
              _remEqLst = tmpMeta40;
            }
          }

          _clk = arrayGet(_subclocks, mmc_unbox_integer(_partIdx));
        }
      }

      if(((!listEmpty(_eqLst)) || (!listEmpty(_remEqLst))))
      {
        _sys = omc_SynchronousFeatures_createEqSystem(threadData, listReverse(_eqLst), listReverse(_varLst), _remEqLst, _OMC_LIT83, NULL);

        tmpMeta44 = mmc_mk_box2(4, &BackendDAE_BaseClockPartitionKind_CLOCKED__PARTITION__desc, mmc_mk_integer(_partitionOffset + _part));
        tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_sys), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[9] = tmpMeta44;
        _sys = tmpMeta43;

        tmpMeta45 = mmc_mk_cons(_clk, _subClksOut);
        _subClksOut = tmpMeta45;

        tmpMeta46 = mmc_mk_cons(_sys, _systs);
        _systs = tmpMeta46;

        _part = ((modelica_integer) 1) + _part;
      }
    }
  }

  _systs = listReverse(_systs);

  _subClksOut = listReverse(_subClksOut);
  _return: OMC_LABEL_UNUSED
  if (out_subClksOut) { *out_subClksOut = _subClksOut; }
  return _systs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_orderSubPartitions(threadData_t *threadData, modelica_metatype _numParts, modelica_metatype _subclocks, modelica_metatype _order, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _remEqPartMap, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _remEqs, modelica_metatype _shared, modelica_metatype _partitionOffset, modelica_metatype *out_subClksOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _systs = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_numParts);
  tmp2 = mmc_unbox_integer(_partitionOffset);
  _systs = omc_SynchronousFeatures_orderSubPartitions(threadData, tmp1, _subclocks, _order, _eqPartMap, _varPartMap, _remEqPartMap, _eqs, _vars, _remEqs, _shared, tmp2, out_subClksOut);
  /* skip box _systs; list<BackendDAE.EqSystem> */
  /* skip box _subClksOut; list<BackendDAE.SubClock> */
  return _systs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_subClockPartitioning(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_integer _off, modelica_metatype *out_outBaseClock, modelica_metatype *out_outSubClocks)
{
  modelica_metatype _outSysts = NULL;
  modelica_metatype _outBaseClock = NULL;
  modelica_metatype _outSubClocks = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _remEqs = NULL;
  modelica_metatype _clockEqs = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _clockVars = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _rm = NULL;
  modelica_metatype _rmT = NULL;
  modelica_integer _partitionsCnt;
  modelica_metatype _remEqPartMap = NULL;
  modelica_metatype _newClockEqs = NULL;
  modelica_metatype _newClockVars = NULL;
  modelica_metatype _contPartitions = NULL;
  modelica_metatype _subclksCnt = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _subclocks = NULL;
  modelica_metatype _clockedEqsMask = NULL;
  modelica_metatype _clockedVarsMask = NULL;
  modelica_metatype _usedVars = NULL;
  modelica_metatype _usedRemovedVars = NULL;
  modelica_integer _baseClockEqIdx;
  modelica_integer _eqIdx;
  modelica_integer _varIdx;
  modelica_metatype _baseClockEquations = NULL;
  modelica_metatype _subClockInterfaceEqIdxs = NULL;
  modelica_metatype _subClockInterfaceEqs = NULL;
  modelica_metatype _varPartMap = NULL;
  modelica_metatype _eqPartMap = NULL;
  modelica_metatype _partAdjacency = NULL;
  modelica_metatype _sys = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSysts has no default value.
  // _outBaseClock has no default value.
  // _outSubClocks has no default value.
  // _funcs has no default value.
  // _eqs has no default value.
  // _remEqs has no default value.
  // _clockEqs has no default value.
  // _vars has no default value.
  // _clockVars has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _rm has no default value.
  // _rmT has no default value.
  // _partitionsCnt has no default value.
  // _remEqPartMap has no default value.
  // _newClockEqs has no default value.
  // _newClockVars has no default value.
  // _contPartitions has no default value.
  // _subclksCnt has no default value.
  // _order has no default value.
  // _subclocks has no default value.
  // _clockedEqsMask has no default value.
  // _clockedVarsMask has no default value.
  // _usedVars has no default value.
  // _usedRemovedVars has no default value.
  // _baseClockEqIdx has no default value.
  // _eqIdx has no default value.
  // _varIdx has no default value.
  // _baseClockEquations has no default value.
  // _subClockInterfaceEqIdxs has no default value.
  // _subClockInterfaceEqs has no default value.
  // _varPartMap has no default value.
  // _eqPartMap has no default value.
  // _partAdjacency has no default value.
  // _sys has no default value.
  _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

  /* Pattern-matching assignment */
  tmpMeta1 = _inEqSystem;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 10));
  _vars = tmpMeta2;
  _eqs = tmpMeta3;
  _remEqs = tmpMeta4;

  _eqs = omc_SynchronousFeatures_replaceSampledClocks(threadData, _eqs, _vars ,&_vars);

  _sys = omc_BackendDAEUtil_setEqSystVars(threadData, _inEqSystem, _vars);

  _sys = omc_BackendDAEUtil_setEqSystEqs(threadData, _sys, _eqs);

  _sys = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _sys, _OMC_LIT84, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_m ,&_mT);

  _baseClockEquations = omc_SynchronousFeatures_findBaseClockInterfaces(threadData, _eqs, _vars, _m, _mT ,&_subClockInterfaceEqIdxs ,&_subClockInterfaceEqs);

  _clockEqs = omc_SynchronousFeatures_splitClockEqs(threadData, _eqs ,&_clockedEqsMask);

  _clockVars = omc_SynchronousFeatures_splitClockVars(threadData, _vars ,&_clockedVarsMask);

  _rm = omc_BackendDAEUtil_removedAdjacencyMatrix(threadData, _sys, _OMC_LIT84, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_rmT);

  _remEqPartMap = arrayCreate(arrayLength(_rm), mmc_mk_integer(((modelica_integer) 0)));

  _eqPartMap = arrayCreate(arrayLength(_m), mmc_mk_integer(((modelica_integer) 0)));

  _varPartMap = arrayCreate(arrayLength(_mT), mmc_mk_integer(((modelica_integer) 0)));

  _usedRemovedVars = arrayCreate(arrayLength(_rmT), mmc_mk_boolean(0 /* false */));

  _usedVars = arrayCreate(arrayLength(_mT), mmc_mk_boolean(0 /* false */));

  _partitionsCnt = omc_SynchronousFeatures_partitionIndependentBlocksMasked(threadData, _m, _mT, _rm, _rmT, arrayCreate(omc_BackendEquation_getNumberOfEquations(threadData, _eqs), mmc_mk_boolean(1 /* true */)), _eqPartMap, _varPartMap, _remEqPartMap, _usedVars, _usedRemovedVars);

  _outBaseClock = omc_SynchronousFeatures_chooseBaseClock(threadData, _baseClockEquations, _partitionsCnt, _eqPartMap, _eqs ,&_baseClockEqIdx);

  _partAdjacency = omc_SynchronousFeatures_getSubPartitionAdjacency(threadData, _partitionsCnt, _baseClockEqIdx, _subClockInterfaceEqIdxs, _eqPartMap, _varPartMap, _clockedVarsMask, _eqs, _vars ,&_order);

  _m = omc_BackendDAEUtil_adjacencyMatrixMasked(threadData, _inEqSystem, _OMC_LIT84, _clockedEqsMask, mmc_mk_some(_funcs), omc_BackendDAEUtil_isInitializationDAE(threadData, _inShared) ,&_mT);

  _newClockEqs = omc_SynchronousFeatures_collectSubclkInfo(threadData, _eqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inEqSystem), 10))), _partitionsCnt, _eqPartMap, _remEqPartMap, _vars, _mT ,&_newClockVars ,&_contPartitions ,&_subclksCnt);

  _outBaseClock = omc_SynchronousFeatures_findSubClocks(threadData, _partitionsCnt, _baseClockEqIdx, _outBaseClock, _baseClockEquations, _subClockInterfaceEqIdxs, _eqPartMap, _varPartMap, _eqs, _partAdjacency ,&_subclocks);

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = arrayLength(_clockedEqsMask);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _eqIdx;
    for(_eqIdx = ((modelica_integer) 1); in_range_integer(_eqIdx, tmp5, tmp7); _eqIdx += tmp6)
    {
      if((!mmc_unbox_boolean(arrayGet(_clockedEqsMask, _eqIdx))))
      {
        arrayUpdate(_eqPartMap, _eqIdx, mmc_mk_integer(((modelica_integer) 0)));
      }
    }
  }

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength(_clockedVarsMask);
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _varIdx;
    for(_varIdx = ((modelica_integer) 1); in_range_integer(_varIdx, tmp8, tmp10); _varIdx += tmp9)
    {
      if((!mmc_unbox_boolean(arrayGet(_clockedVarsMask, _varIdx))))
      {
        arrayUpdate(_varPartMap, _varIdx, mmc_mk_integer(((modelica_integer) 0)));
      }
    }
  }

  _outSysts = omc_SynchronousFeatures_orderSubPartitions(threadData, _partitionsCnt, _subclocks, _order, _eqPartMap, _varPartMap, _remEqPartMap, _eqs, _vars, _remEqs, _inShared, _off ,&_outSubClocks);
  _return: OMC_LABEL_UNUSED
  if (out_outBaseClock) { *out_outBaseClock = _outBaseClock; }
  if (out_outSubClocks) { *out_outSubClocks = _outSubClocks; }
  return _outSysts;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_subClockPartitioning(threadData_t *threadData, modelica_metatype _inEqSystem, modelica_metatype _inShared, modelica_metatype _off, modelica_metatype *out_outBaseClock, modelica_metatype *out_outSubClocks)
{
  modelica_integer tmp1;
  modelica_metatype _outSysts = NULL;
  tmp1 = mmc_unbox_integer(_off);
  _outSysts = omc_SynchronousFeatures_subClockPartitioning(threadData, _inEqSystem, _inShared, tmp1, out_outBaseClock, out_outSubClocks);
  /* skip box _outSysts; list<BackendDAE.EqSystem> */
  /* skip box _outBaseClock; DAE.ClockKind */
  /* skip box _outSubClocks; list<BackendDAE.SubClock> */
  return _outSysts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_boolean *out_cont, modelica_metatype *out_tplOut)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _tplOut = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _tplOut has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _tplIn;
    {
      modelica_integer _suffixIdx;
      modelica_metatype _cr = NULL;
      modelica_metatype _varExp = NULL;
      modelica_metatype _clk = NULL;
      modelica_metatype _addEq = NULL;
      modelica_metatype _addVar = NULL;
      modelica_metatype _newEqs = NULL;
      modelica_metatype _newVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _suffixIdx has no default value.
      // _cr has no default value.
      // _varExp has no default value.
      // _clk has no default value.
      // _addEq has no default value.
      // _addVar has no default value.
      // _newEqs has no default value.
      // _newVars has no default value.
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
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (6 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,4,1) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _varExp = tmpMeta9;
          _clk = tmpMeta11;
          _newEqs = tmpMeta13;
          _newVars = tmpMeta14;
          _suffixIdx = tmp16  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta17 = stringAppend(_OMC_LIT56,intString(_suffixIdx));
          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta19 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, tmpMeta17, _OMC_LIT57, tmpMeta18);
          _cr = tmpMeta19;

          _addVar = omc_BackendVariable_makeVar(threadData, _cr);

          tmpMeta20 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, omc_Expression_crefToExp(threadData, _cr), _clk, _OMC_LIT45, _OMC_LIT48);
          _addEq = tmpMeta20;
          tmpMeta21 = mmc_mk_cons(_addEq, _newEqs);
          tmpMeta22 = mmc_mk_cons(_addVar, _newVars);
          tmpMeta23 = mmc_mk_box3(0, tmpMeta21, tmpMeta22, mmc_mk_integer(((modelica_integer) 1) + _suffixIdx));
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, _varExp);
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = tmpMeta23;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _tplIn;
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
  _cont = tmp1_c1;
  _tplOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_replaceSampledClocks2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _tplIn, modelica_metatype *out_cont, modelica_metatype *out_tplOut)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_SynchronousFeatures_replaceSampledClocks2(threadData, _inExp, _tplIn, &_cont, out_tplOut);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _tplOut; tuple<list<BackendDAE.Equation>, list<BackendDAE.Var>, #Integer> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks1(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _eqOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqOut has no default value.
  // _tplOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _eqIn;
    tmp4_2 = _tplIn;
    {
      modelica_integer _suffixIdx;
      modelica_integer _suffixIdx0;
      modelica_metatype _attr = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _newEqs = NULL;
      modelica_metatype _newVars = NULL;
      modelica_metatype _dimSize = NULL;
      modelica_metatype _recordSize = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _suffixIdx has no default value.
      // _suffixIdx0 has no default value.
      // _attr has no default value.
      // _vars has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _source has no default value.
      // _newEqs has no default value.
      // _newVars has no default value.
      // _dimSize has no default value.
      // _recordSize has no default value.
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
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,0) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _source = tmpMeta8;
          _vars = tmpMeta11;
          _suffixIdx0 = tmp13  /* pattern as ty=Integer */;
          _newEqs = tmpMeta14;
          _newVars = tmpMeta15;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta21 = mmc_mk_box3(0, _newEqs, _newVars, mmc_mk_integer(_suffixIdx0));
          tmpMeta22 = omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_SynchronousFeatures_replaceSampledClocks2, tmpMeta21, &tmpMeta16);
          _e1 = tmpMeta22;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          _newEqs = tmpMeta17;
          _newVars = tmpMeta18;
          _suffixIdx = tmp20  /* pattern as ty=Integer */;

          /* Pattern-matching tuple assignment */
          tmpMeta28 = mmc_mk_box3(0, _newEqs, _newVars, mmc_mk_integer(_suffixIdx));
          tmpMeta29 = omc_Expression_traverseExpTopDown(threadData, _e2, boxvar_SynchronousFeatures_replaceSampledClocks2, tmpMeta28, &tmpMeta23);
          _e2 = tmpMeta29;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          _newEqs = tmpMeta24;
          _newVars = tmpMeta25;
          _suffixIdx = tmp27  /* pattern as ty=Integer */;

          if((_suffixIdx - _suffixIdx0 == ((modelica_integer) 1)))
          {
            _attr = omc_BackendEquation_defaultClockedEqAttr(threadData, _suffixIdx0);
          }
          else
          {
            _attr = _OMC_LIT48;
          }
          tmpMeta30 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e1, _e2, _source, _attr);
          tmpMeta31 = mmc_mk_box4(0, _vars, mmc_mk_integer(_suffixIdx), _newEqs, _newVars);
          tmpMeta[0+0] = tmpMeta30;
          tmpMeta[0+1] = tmpMeta31;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_integer tmp41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_integer tmp48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,1,0) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _dimSize = tmpMeta32;
          _e1 = tmpMeta33;
          _e2 = tmpMeta34;
          _source = tmpMeta35;
          _recordSize = tmpMeta38;
          _vars = tmpMeta39;
          _suffixIdx0 = tmp41  /* pattern as ty=Integer */;
          _newEqs = tmpMeta42;
          _newVars = tmpMeta43;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta49 = mmc_mk_box3(0, _newEqs, _newVars, mmc_mk_integer(_suffixIdx0));
          tmpMeta50 = omc_Expression_traverseExpTopDown(threadData, _e1, boxvar_SynchronousFeatures_replaceSampledClocks2, tmpMeta49, &tmpMeta44);
          _e1 = tmpMeta50;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 1));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          tmp48 = mmc_unbox_integer(tmpMeta47);
          _newEqs = tmpMeta45;
          _newVars = tmpMeta46;
          _suffixIdx = tmp48  /* pattern as ty=Integer */;

          /* Pattern-matching tuple assignment */
          tmpMeta56 = mmc_mk_box3(0, _newEqs, _newVars, mmc_mk_integer(_suffixIdx));
          tmpMeta57 = omc_Expression_traverseExpTopDown(threadData, _e2, boxvar_SynchronousFeatures_replaceSampledClocks2, tmpMeta56, &tmpMeta51);
          _e2 = tmpMeta57;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 1));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 3));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          _newEqs = tmpMeta52;
          _newVars = tmpMeta53;
          _suffixIdx = tmp55  /* pattern as ty=Integer */;

          if((_suffixIdx - _suffixIdx0 == ((modelica_integer) 1)))
          {
            _attr = omc_BackendEquation_defaultClockedEqAttr(threadData, _suffixIdx0);
          }
          else
          {
            _attr = _OMC_LIT48;
          }
          tmpMeta58 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, _dimSize, _e1, _e2, _source, _attr, _recordSize);
          tmpMeta59 = mmc_mk_box4(0, _vars, mmc_mk_integer(_suffixIdx), _newEqs, _newVars);
          tmpMeta[0+0] = tmpMeta58;
          tmpMeta[0+1] = tmpMeta59;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _eqIn;
          tmpMeta[0+1] = _tplIn;
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
  _eqOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _eqOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_replaceSampledClocks(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype *out_varsOut)
{
  modelica_metatype _eqsOut = NULL;
  modelica_metatype _varsOut = NULL;
  modelica_integer _prefIdx;
  modelica_metatype _eqs = NULL;
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqsOut has no default value.
  // _varsOut has no default value.
  // _prefIdx has no default value.
  // _eqs has no default value.
  // _newEqs has no default value.
  // _newVars has no default value.
  _prefIdx = mmc_unbox_integer(omc_BackendVariable_traverseBackendDAEVars(threadData, _varsIn, boxvar_SynchronousFeatures_findHighestWhenPrefixIdx, mmc_mk_integer(((modelica_integer) 1))));

  /* Pattern-matching tuple assignment */
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box4(0, _varsIn, mmc_mk_integer(((modelica_integer) 1) + _prefIdx), tmpMeta4, tmpMeta5);
  tmpMeta7 = omc_BackendEquation_traverseEquationArray__WithUpdate(threadData, _eqsIn, boxvar_SynchronousFeatures_replaceSampledClocks1, tmpMeta6, &tmpMeta1);
  _eqs = tmpMeta7;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _newEqs = tmpMeta2;
  _newVars = tmpMeta3;

  _eqsOut = omc_BackendEquation_addList(threadData, _newEqs, _eqs);

  _varsOut = omc_BackendVariable_addVars(threadData, _newVars, _varsIn);
  _return: OMC_LABEL_UNUSED
  if (out_varsOut) { *out_varsOut = _varsOut; }
  return _eqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findHighestWhenPrefixIdx(threadData_t *threadData, modelica_metatype _inVar, modelica_integer _idxIn, modelica_integer *out_idxOut)
{
  modelica_metatype _outVar = NULL;
  modelica_integer _idxOut;
  modelica_metatype _name = NULL;
  modelica_metatype _chars = NULL;
  modelica_metatype _chars1 = NULL;
  modelica_metatype _chars2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  _idxOut = _idxIn;
  // _name has no default value.
  // _chars has no default value.
  // _chars1 has no default value.
  // _chars2 has no default value.
  _name = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2)));

  _chars = stringListStringChar(omc_ComponentReference_crefStr(threadData, _name));

  if((listLength(_chars) > ((modelica_integer) 9)))
  {
    _chars1 = omc_List_split(threadData, _chars, ((modelica_integer) 8) ,&_chars2);

    if((stringEqual(stringDelimitList(_chars1, _OMC_LIT0), _OMC_LIT56)))
    {
      _idxOut = modelica_integer_max((modelica_integer)(_idxIn),(modelica_integer)(stringInt(stringDelimitList(_chars2, _OMC_LIT0))));
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_idxOut) { *out_idxOut = _idxOut; }
  return _outVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findHighestWhenPrefixIdx(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _idxIn, modelica_metatype *out_idxOut)
{
  modelica_integer tmp1;
  modelica_integer _idxOut;
  modelica_metatype _outVar = NULL;
  tmp1 = mmc_unbox_integer(_idxIn);
  _outVar = omc_SynchronousFeatures_findHighestWhenPrefixIdx(threadData, _inVar, tmp1, &_idxOut);
  /* skip box _outVar; BackendDAE.Var */
  if (out_idxOut) { *out_idxOut = mmc_mk_icon(_idxOut); }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findBaseClockInterfaces1(threadData_t *threadData, modelica_metatype _eq, modelica_integer _eqIdx, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _clockEqsIn, modelica_metatype _subClockInterfaceEqIdxsIn, modelica_metatype _subClockInterfaceEqsIn, modelica_metatype *out_subClockInterfaceEqIdxsOut, modelica_metatype *out_subClockInterfaceEqsOut)
{
  modelica_metatype _clockEqsOut = NULL;
  modelica_metatype _subClockInterfaceEqIdxsOut = NULL;
  modelica_metatype _subClockInterfaceEqsOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clockEqsOut has no default value.
  // _subClockInterfaceEqIdxsOut has no default value.
  // _subClockInterfaceEqsOut has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _cref1 = NULL;
      modelica_integer _varIdx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref1 has no default value.
      // _varIdx has no default value.
      tmp4 = 0;
      for (; tmp4 < 14; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _clockEqsIn);
          tmpMeta[0+0] = tmpMeta8;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _clockEqsIn);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _clockEqsIn);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,4,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _clockEqsIn);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,4,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,4,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta21 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta22 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta21;
          tmpMeta[0+2] = tmpMeta22;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,4,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,4,2) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _clockEqsIn);
          tmpMeta[0+0] = tmpMeta26;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 6: {
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
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,13,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,1,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          if (11 != MMC_STRLEN(tmpMeta29) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta29)) != 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 3));
          if (listEmpty(tmpMeta30)) goto tmp3_end;
          tmpMeta31 = MMC_CAR(tmpMeta30);
          tmpMeta32 = MMC_CDR(tmpMeta30);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,6,2) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (listEmpty(tmpMeta32)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmpMeta32);
          tmpMeta35 = MMC_CDR(tmpMeta32);
          if (!listEmpty(tmpMeta35)) goto tmp3_end;
          
          _cref1 = tmpMeta33;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta36);
          if (listEmpty(tmpMeta36)) goto goto_2;
          tmpMeta37 = MMC_CAR(tmpMeta36);
          tmpMeta38 = MMC_CDR(tmpMeta36);
          tmp39 = mmc_unbox_integer(tmpMeta37);
          if (!listEmpty(tmpMeta38)) goto goto_2;
          _varIdx = tmp39  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta40 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta41 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta40;
          tmpMeta[0+2] = tmpMeta41;
          goto tmp3_done;
        }
        case 7: {
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
          modelica_integer tmp54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,13,3) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,1,1) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
          if (9 != MMC_STRLEN(tmpMeta44) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmpMeta44)) != 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 3));
          if (listEmpty(tmpMeta45)) goto tmp3_end;
          tmpMeta46 = MMC_CAR(tmpMeta45);
          tmpMeta47 = MMC_CDR(tmpMeta45);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta46,6,2) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
          if (listEmpty(tmpMeta47)) goto tmp3_end;
          tmpMeta49 = MMC_CAR(tmpMeta47);
          tmpMeta50 = MMC_CDR(tmpMeta47);
          if (!listEmpty(tmpMeta50)) goto tmp3_end;
          
          _cref1 = tmpMeta48;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta51);
          if (listEmpty(tmpMeta51)) goto goto_2;
          tmpMeta52 = MMC_CAR(tmpMeta51);
          tmpMeta53 = MMC_CDR(tmpMeta51);
          tmp54 = mmc_unbox_integer(tmpMeta52);
          if (!listEmpty(tmpMeta53)) goto goto_2;
          _varIdx = tmp54  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta55 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta56 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta55;
          tmpMeta[0+2] = tmpMeta56;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_integer tmp71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta57,13,3) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,1,1) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          if (11 != MMC_STRLEN(tmpMeta59) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta59)) != 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 3));
          if (listEmpty(tmpMeta60)) goto tmp3_end;
          tmpMeta61 = MMC_CAR(tmpMeta60);
          tmpMeta62 = MMC_CDR(tmpMeta60);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,6,2) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          if (listEmpty(tmpMeta62)) goto tmp3_end;
          tmpMeta64 = MMC_CAR(tmpMeta62);
          tmpMeta65 = MMC_CDR(tmpMeta62);
          if (listEmpty(tmpMeta65)) goto tmp3_end;
          tmpMeta66 = MMC_CAR(tmpMeta65);
          tmpMeta67 = MMC_CDR(tmpMeta65);
          if (!listEmpty(tmpMeta67)) goto tmp3_end;
          
          _cref1 = tmpMeta63;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta68);
          if (listEmpty(tmpMeta68)) goto goto_2;
          tmpMeta69 = MMC_CAR(tmpMeta68);
          tmpMeta70 = MMC_CDR(tmpMeta68);
          tmp71 = mmc_unbox_integer(tmpMeta69);
          if (!listEmpty(tmpMeta70)) goto goto_2;
          _varIdx = tmp71  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta72 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta73 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta72;
          tmpMeta[0+2] = tmpMeta73;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_integer tmp86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,13,3) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta75,1,1) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          if (11 != MMC_STRLEN(tmpMeta76) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta76)) != 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 3));
          if (listEmpty(tmpMeta77)) goto tmp3_end;
          tmpMeta78 = MMC_CAR(tmpMeta77);
          tmpMeta79 = MMC_CDR(tmpMeta77);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta78,6,2) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta78), 2));
          if (listEmpty(tmpMeta79)) goto tmp3_end;
          tmpMeta81 = MMC_CAR(tmpMeta79);
          tmpMeta82 = MMC_CDR(tmpMeta79);
          if (!listEmpty(tmpMeta82)) goto tmp3_end;
          
          _cref1 = tmpMeta80;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta83);
          if (listEmpty(tmpMeta83)) goto goto_2;
          tmpMeta84 = MMC_CAR(tmpMeta83);
          tmpMeta85 = MMC_CDR(tmpMeta83);
          tmp86 = mmc_unbox_integer(tmpMeta84);
          if (!listEmpty(tmpMeta85)) goto goto_2;
          _varIdx = tmp86  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta87 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta88 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta87;
          tmpMeta[0+2] = tmpMeta88;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_integer tmp103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta89,13,3) == 0) goto tmp3_end;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta90,1,1) == 0) goto tmp3_end;
          tmpMeta91 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta90), 2));
          if (10 != MMC_STRLEN(tmpMeta91) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta91)) != 0) goto tmp3_end;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta89), 3));
          if (listEmpty(tmpMeta92)) goto tmp3_end;
          tmpMeta93 = MMC_CAR(tmpMeta92);
          tmpMeta94 = MMC_CDR(tmpMeta92);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta93,6,2) == 0) goto tmp3_end;
          tmpMeta95 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta93), 2));
          if (listEmpty(tmpMeta94)) goto tmp3_end;
          tmpMeta96 = MMC_CAR(tmpMeta94);
          tmpMeta97 = MMC_CDR(tmpMeta94);
          if (listEmpty(tmpMeta97)) goto tmp3_end;
          tmpMeta98 = MMC_CAR(tmpMeta97);
          tmpMeta99 = MMC_CDR(tmpMeta97);
          if (!listEmpty(tmpMeta99)) goto tmp3_end;
          
          _cref1 = tmpMeta95;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta100);
          if (listEmpty(tmpMeta100)) goto goto_2;
          tmpMeta101 = MMC_CAR(tmpMeta100);
          tmpMeta102 = MMC_CDR(tmpMeta100);
          tmp103 = mmc_unbox_integer(tmpMeta101);
          if (!listEmpty(tmpMeta102)) goto goto_2;
          _varIdx = tmp103  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta104 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta105 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta104;
          tmpMeta[0+2] = tmpMeta105;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_integer tmp118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta106,13,3) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta107,1,1) == 0) goto tmp3_end;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta107), 2));
          if (10 != MMC_STRLEN(tmpMeta108) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta108)) != 0) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 3));
          if (listEmpty(tmpMeta109)) goto tmp3_end;
          tmpMeta110 = MMC_CAR(tmpMeta109);
          tmpMeta111 = MMC_CDR(tmpMeta109);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta110,6,2) == 0) goto tmp3_end;
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta110), 2));
          if (listEmpty(tmpMeta111)) goto tmp3_end;
          tmpMeta113 = MMC_CAR(tmpMeta111);
          tmpMeta114 = MMC_CDR(tmpMeta111);
          if (!listEmpty(tmpMeta114)) goto tmp3_end;
          
          _cref1 = tmpMeta112;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta115);
          if (listEmpty(tmpMeta115)) goto goto_2;
          tmpMeta116 = MMC_CAR(tmpMeta115);
          tmpMeta117 = MMC_CDR(tmpMeta115);
          tmp118 = mmc_unbox_integer(tmpMeta116);
          if (!listEmpty(tmpMeta117)) goto goto_2;
          _varIdx = tmp118  /* pattern as ty=Integer */;

          omc_SynchronousFeatures_removeEdge(threadData, _eqIdx, _varIdx, _m, _mT);
          tmpMeta119 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _subClockInterfaceEqIdxsIn);
          tmpMeta120 = mmc_mk_cons(_eq, _subClockInterfaceEqsIn);
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = tmpMeta119;
          tmpMeta[0+2] = tmpMeta120;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _clockEqsIn;
          tmpMeta[0+1] = _subClockInterfaceEqIdxsIn;
          tmpMeta[0+2] = _subClockInterfaceEqsIn;
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
  _clockEqsOut = tmpMeta[0+0];
  _subClockInterfaceEqIdxsOut = tmpMeta[0+1];
  _subClockInterfaceEqsOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_subClockInterfaceEqIdxsOut) { *out_subClockInterfaceEqIdxsOut = _subClockInterfaceEqIdxsOut; }
  if (out_subClockInterfaceEqsOut) { *out_subClockInterfaceEqsOut = _subClockInterfaceEqsOut; }
  return _clockEqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findBaseClockInterfaces1(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _eqIdx, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _clockEqsIn, modelica_metatype _subClockInterfaceEqIdxsIn, modelica_metatype _subClockInterfaceEqsIn, modelica_metatype *out_subClockInterfaceEqIdxsOut, modelica_metatype *out_subClockInterfaceEqsOut)
{
  modelica_integer tmp1;
  modelica_metatype _clockEqsOut = NULL;
  tmp1 = mmc_unbox_integer(_eqIdx);
  _clockEqsOut = omc_SynchronousFeatures_findBaseClockInterfaces1(threadData, _eq, tmp1, _eqs, _vars, _m, _mT, _clockEqsIn, _subClockInterfaceEqIdxsIn, _subClockInterfaceEqsIn, out_subClockInterfaceEqIdxsOut, out_subClockInterfaceEqsOut);
  /* skip box _clockEqsOut; list<#Integer> */
  /* skip box _subClockInterfaceEqIdxsOut; list<#Integer> */
  /* skip box _subClockInterfaceEqsOut; list<BackendDAE.Equation> */
  return _clockEqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findBaseClockInterfaces(threadData_t *threadData, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype _m, modelica_metatype _mT, modelica_metatype *out_subClockInterfaceEqIdxs, modelica_metatype *out_subClockInterfaceEqs)
{
  modelica_metatype _clockEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _subClockInterfaceEqIdxs = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _subClockInterfaceEqs = NULL;
  modelica_metatype tmpMeta3;
  modelica_integer _eqIdx;
  modelica_metatype _eq = NULL;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _clockEqs = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _subClockInterfaceEqIdxs = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _subClockInterfaceEqs = tmpMeta3;
  // _eqIdx has no default value.
  // _eq has no default value.
  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = omc_BackendEquation_getNumberOfEquations(threadData, _eqs);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _eqIdx;
    for(_eqIdx = ((modelica_integer) 1); in_range_integer(_eqIdx, tmp4, tmp6); _eqIdx += tmp5)
    {
      _eq = omc_BackendEquation_get(threadData, _eqs, _eqIdx);

      _clockEqs = omc_SynchronousFeatures_findBaseClockInterfaces1(threadData, _eq, _eqIdx, _eqs, _vars, _m, _mT, _clockEqs, _subClockInterfaceEqIdxs, _subClockInterfaceEqs ,&_subClockInterfaceEqIdxs ,&_subClockInterfaceEqs);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_subClockInterfaceEqIdxs) { *out_subClockInterfaceEqIdxs = _subClockInterfaceEqIdxs; }
  if (out_subClockInterfaceEqs) { *out_subClockInterfaceEqs = _subClockInterfaceEqs; }
  return _clockEqs;
}

PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_removeEdge(threadData_t *threadData, modelica_integer _eq, modelica_integer _var, modelica_metatype _m, modelica_metatype _mT)
{
  modelica_metatype _row = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _row has no default value.
  _row = arrayGet(_m, _eq);

  _row = omc_List_deleteMemberOnTrue(threadData, mmc_mk_integer(_var), _row, boxvar_intEq, NULL);

  arrayUpdate(_m, _eq, _row);

  _row = arrayGet(_mT, _var);

  _row = omc_List_deleteMemberOnTrue(threadData, mmc_mk_integer(_eq), _row, boxvar_intEq, NULL);

  arrayUpdate(_mT, _var, _row);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_removeEdge(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _var, modelica_metatype _m, modelica_metatype _mT)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_eq);
  tmp2 = mmc_unbox_integer(_var);
  omc_SynchronousFeatures_removeEdge(threadData, tmp1, tmp2, _m, _mT);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getBaseClock(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _baseClk = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _baseClk has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _clk = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _clk has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT58;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,4,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _clk = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta1 = _clk;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT58;
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
  _baseClk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _baseClk;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_isBaseClockEq(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _isBaseClock;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isBaseClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _isBaseClock = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isBaseClock;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_isBaseClockEq(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_boolean _isBaseClock;
  modelica_metatype out_isBaseClock;
  _isBaseClock = omc_SynchronousFeatures_isBaseClockEq(threadData, _eq);
  out_isBaseClock = mmc_mk_icon(_isBaseClock);
  return out_isBaseClock;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_chooseBaseClock(threadData_t *threadData, modelica_metatype _clockEqs, modelica_integer _numPartitions, modelica_metatype _eqPartMap, modelica_metatype _eqs, modelica_integer *out_baseClockEqIdx)
{
  modelica_metatype _outBaseClock = NULL;
  modelica_integer _baseClockEqIdx;
  modelica_metatype _subClkPartMap = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outBaseClock = _OMC_LIT58;
  _baseClockEqIdx = ((modelica_integer) -1);
  // _subClkPartMap has no default value.
  // _eq has no default value.
  _subClkPartMap = arrayCreate(_numPartitions, _OMC_LIT87);

  {
    modelica_metatype _clockEq;
    for (tmpMeta1 = _clockEqs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _clockEq = MMC_CAR(tmpMeta1);
      _eq = omc_BackendEquation_get(threadData, _eqs, mmc_unbox_integer(_clockEq));

      if(omc_SynchronousFeatures_isBaseClockEq(threadData, _eq))
      {
        _outBaseClock = omc_SynchronousFeatures_getBaseClock(threadData, _eq);

        _baseClockEqIdx = mmc_unbox_integer(_clockEq);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_baseClockEqIdx) { *out_baseClockEqIdx = _baseClockEqIdx; }
  return _outBaseClock;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_chooseBaseClock(threadData_t *threadData, modelica_metatype _clockEqs, modelica_metatype _numPartitions, modelica_metatype _eqPartMap, modelica_metatype _eqs, modelica_metatype *out_baseClockEqIdx)
{
  modelica_integer tmp1;
  modelica_integer _baseClockEqIdx;
  modelica_metatype _outBaseClock = NULL;
  tmp1 = mmc_unbox_integer(_numPartitions);
  _outBaseClock = omc_SynchronousFeatures_chooseBaseClock(threadData, _clockEqs, tmp1, _eqPartMap, _eqs, &_baseClockEqIdx);
  /* skip box _outBaseClock; DAE.ClockKind */
  if (out_baseClockEqIdx) { *out_baseClockEqIdx = mmc_mk_icon(_baseClockEqIdx); }
  return _outBaseClock;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_getConnectedSubPartitions(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varPartMap, modelica_metatype _vars, modelica_integer *out_part1, modelica_integer *out_var1, modelica_metatype *out_sub1, modelica_integer *out_part2, modelica_integer *out_var2, modelica_metatype *out_sub2)
{
  modelica_boolean _infered;
  modelica_integer _part1;
  modelica_integer _var1;
  modelica_metatype _sub1 = NULL;
  modelica_integer _part2;
  modelica_integer _var2;
  modelica_metatype _sub2 = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _infered = 0 /* false */;
  // _part1 has no default value.
  _var1 = ((modelica_integer) -1);
  // _sub1 has no default value.
  // _part2 has no default value.
  _var2 = ((modelica_integer) -1);
  // _sub2 has no default value.
  _sub1 = _OMC_LIT87;

  _sub2 = _OMC_LIT87;

  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_integer _v1;
      modelica_integer _v2;
      modelica_integer _p1;
      modelica_integer _p2;
      modelica_integer _factor;
      modelica_integer _counter;
      modelica_integer _resolution;
      modelica_string _solver = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _cref2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v1 has no default value.
      // _v2 has no default value.
      // _p1 has no default value.
      // _p2 has no default value.
      // _factor has no default value.
      // _counter has no default value.
      // _resolution has no default value.
      // _solver has no default value.
      // _cref1 has no default value.
      // _cref2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
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
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,13,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (11 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmpMeta13);
          tmpMeta16 = MMC_CDR(tmpMeta13);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (!listEmpty(tmpMeta16)) goto tmp3_end;
          
          _cref1 = tmpMeta7;
          _cref2 = tmpMeta14;
          _factor = tmp18  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _infered = (_factor == ((modelica_integer) 0));

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta19);
          if (listEmpty(tmpMeta19)) goto goto_2;
          tmpMeta20 = MMC_CAR(tmpMeta19);
          tmpMeta21 = MMC_CDR(tmpMeta19);
          tmp22 = mmc_unbox_integer(tmpMeta20);
          if (!listEmpty(tmpMeta21)) goto goto_2;
          _v1 = tmp22  /* pattern as ty=Integer */;

          _p1 = mmc_unbox_integer(arrayGet(_varPartMap,_v1) /* DAE.ASUB */);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref2, _vars, &tmpMeta23);
          if (listEmpty(tmpMeta23)) goto goto_2;
          tmpMeta24 = MMC_CAR(tmpMeta23);
          tmpMeta25 = MMC_CDR(tmpMeta23);
          tmp26 = mmc_unbox_integer(tmpMeta24);
          if (!listEmpty(tmpMeta25)) goto goto_2;
          _v2 = tmp26  /* pattern as ty=Integer */;

          _p2 = mmc_unbox_integer(arrayGet(_varPartMap,_v2) /* DAE.ASUB */);

          if(_infered)
          {
            _sub1 = _OMC_LIT88;

            _sub2 = _OMC_LIT88;
          }
          else
          {
            tmpMeta27 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_factor), mmc_mk_integer(((modelica_integer) 1)));
            _sub1 = omc_SynchronousFeatures_setSubClockFactor(threadData, _sub1, omc_MMath_divRational(threadData, _OMC_LIT85, tmpMeta27));

            tmpMeta28 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_factor), mmc_mk_integer(((modelica_integer) 1)));
            _sub2 = omc_SynchronousFeatures_setSubClockFactor(threadData, _sub2, tmpMeta28);
          }
          tmp1_c0 = _p1;
          tmp1_c1 = _v1;
          tmp1_c2 = _p2;
          tmp1_c3 = _v2;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_integer tmp41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_integer tmp49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,6,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,13,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          if (9 != MMC_STRLEN(tmpMeta33) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmpMeta33)) != 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 3));
          if (listEmpty(tmpMeta34)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmpMeta34);
          tmpMeta36 = MMC_CDR(tmpMeta34);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,6,2) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          if (listEmpty(tmpMeta36)) goto tmp3_end;
          tmpMeta38 = MMC_CAR(tmpMeta36);
          tmpMeta39 = MMC_CDR(tmpMeta36);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,0,1) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          if (!listEmpty(tmpMeta39)) goto tmp3_end;
          
          _cref1 = tmpMeta30;
          _cref2 = tmpMeta37;
          _factor = tmp41  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _infered = (_factor == ((modelica_integer) 0));

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta42);
          if (listEmpty(tmpMeta42)) goto goto_2;
          tmpMeta43 = MMC_CAR(tmpMeta42);
          tmpMeta44 = MMC_CDR(tmpMeta42);
          tmp45 = mmc_unbox_integer(tmpMeta43);
          if (!listEmpty(tmpMeta44)) goto goto_2;
          _v1 = tmp45  /* pattern as ty=Integer */;

          _p1 = mmc_unbox_integer(arrayGet(_varPartMap,_v1) /* DAE.ASUB */);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref2, _vars, &tmpMeta46);
          if (listEmpty(tmpMeta46)) goto goto_2;
          tmpMeta47 = MMC_CAR(tmpMeta46);
          tmpMeta48 = MMC_CDR(tmpMeta46);
          tmp49 = mmc_unbox_integer(tmpMeta47);
          if (!listEmpty(tmpMeta48)) goto goto_2;
          _v2 = tmp49  /* pattern as ty=Integer */;

          _p2 = mmc_unbox_integer(arrayGet(_varPartMap,_v2) /* DAE.ASUB */);

          if(_infered)
          {
            _sub1 = _OMC_LIT88;

            _sub2 = _OMC_LIT88;
          }
          else
          {
            tmpMeta50 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_factor), mmc_mk_integer(((modelica_integer) 1)));
            _sub1 = omc_SynchronousFeatures_setSubClockFactor(threadData, _sub1, tmpMeta50);

            tmpMeta51 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_factor), mmc_mk_integer(((modelica_integer) 1)));
            _sub2 = omc_SynchronousFeatures_setSubClockFactor(threadData, _sub2, omc_MMath_divRational(threadData, _OMC_LIT85, tmpMeta51));
          }
          tmp1_c0 = _p1;
          tmp1_c1 = _v1;
          tmp1_c2 = _p2;
          tmp1_c3 = _v2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_integer tmp64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_integer tmp68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_integer tmp72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_integer tmp76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,6,2) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,13,3) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta55,1,1) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 2));
          if (11 != MMC_STRLEN(tmpMeta56) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta56)) != 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 3));
          if (listEmpty(tmpMeta57)) goto tmp3_end;
          tmpMeta58 = MMC_CAR(tmpMeta57);
          tmpMeta59 = MMC_CDR(tmpMeta57);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,6,2) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          if (listEmpty(tmpMeta59)) goto tmp3_end;
          tmpMeta61 = MMC_CAR(tmpMeta59);
          tmpMeta62 = MMC_CDR(tmpMeta59);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta61,0,1) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta61), 2));
          tmp64 = mmc_unbox_integer(tmpMeta63);
          if (listEmpty(tmpMeta62)) goto tmp3_end;
          tmpMeta65 = MMC_CAR(tmpMeta62);
          tmpMeta66 = MMC_CDR(tmpMeta62);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta65,0,1) == 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta65), 2));
          tmp68 = mmc_unbox_integer(tmpMeta67);
          if (!listEmpty(tmpMeta66)) goto tmp3_end;
          
          _cref1 = tmpMeta53;
          _cref2 = tmpMeta60;
          _counter = tmp64  /* pattern as ty=Integer */;
          _resolution = tmp68  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta69);
          if (listEmpty(tmpMeta69)) goto goto_2;
          tmpMeta70 = MMC_CAR(tmpMeta69);
          tmpMeta71 = MMC_CDR(tmpMeta69);
          tmp72 = mmc_unbox_integer(tmpMeta70);
          if (!listEmpty(tmpMeta71)) goto goto_2;
          _v1 = tmp72  /* pattern as ty=Integer */;

          _p1 = mmc_unbox_integer(arrayGet(_varPartMap,_v1) /* DAE.ASUB */);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref2, _vars, &tmpMeta73);
          if (listEmpty(tmpMeta73)) goto goto_2;
          tmpMeta74 = MMC_CAR(tmpMeta73);
          tmpMeta75 = MMC_CDR(tmpMeta73);
          tmp76 = mmc_unbox_integer(tmpMeta74);
          if (!listEmpty(tmpMeta75)) goto goto_2;
          _v2 = tmp76  /* pattern as ty=Integer */;

          _p2 = mmc_unbox_integer(arrayGet(_varPartMap,_v2) /* DAE.ASUB */);

          tmpMeta77 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_counter), mmc_mk_integer(_resolution));
          _sub1 = omc_SynchronousFeatures_setSubClockShift(threadData, _sub1, omc_MMath_subRational(threadData, _OMC_LIT86, tmpMeta77));

          tmpMeta78 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_counter), mmc_mk_integer(_resolution));
          _sub2 = omc_SynchronousFeatures_setSubClockShift(threadData, _sub2, tmpMeta78);
          tmp1_c0 = _p1;
          tmp1_c1 = _v1;
          tmp1_c2 = _p2;
          tmp1_c3 = _v2;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_integer tmp91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_integer tmp95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          modelica_integer tmp99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_integer tmp103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta79,6,2) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta79), 2));
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta81,13,3) == 0) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta82,1,1) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 2));
          if (10 != MMC_STRLEN(tmpMeta83) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta83)) != 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta81), 3));
          if (listEmpty(tmpMeta84)) goto tmp3_end;
          tmpMeta85 = MMC_CAR(tmpMeta84);
          tmpMeta86 = MMC_CDR(tmpMeta84);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta85,6,2) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta85), 2));
          if (listEmpty(tmpMeta86)) goto tmp3_end;
          tmpMeta88 = MMC_CAR(tmpMeta86);
          tmpMeta89 = MMC_CDR(tmpMeta86);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta88,0,1) == 0) goto tmp3_end;
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta88), 2));
          tmp91 = mmc_unbox_integer(tmpMeta90);
          if (listEmpty(tmpMeta89)) goto tmp3_end;
          tmpMeta92 = MMC_CAR(tmpMeta89);
          tmpMeta93 = MMC_CDR(tmpMeta89);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta92,0,1) == 0) goto tmp3_end;
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta92), 2));
          tmp95 = mmc_unbox_integer(tmpMeta94);
          if (!listEmpty(tmpMeta93)) goto tmp3_end;
          
          _cref1 = tmpMeta80;
          _cref2 = tmpMeta87;
          _counter = tmp91  /* pattern as ty=Integer */;
          _resolution = tmp95  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta96);
          if (listEmpty(tmpMeta96)) goto goto_2;
          tmpMeta97 = MMC_CAR(tmpMeta96);
          tmpMeta98 = MMC_CDR(tmpMeta96);
          tmp99 = mmc_unbox_integer(tmpMeta97);
          if (!listEmpty(tmpMeta98)) goto goto_2;
          _v1 = tmp99  /* pattern as ty=Integer */;

          _p1 = mmc_unbox_integer(arrayGet(_varPartMap,_v1) /* DAE.ASUB */);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref2, _vars, &tmpMeta100);
          if (listEmpty(tmpMeta100)) goto goto_2;
          tmpMeta101 = MMC_CAR(tmpMeta100);
          tmpMeta102 = MMC_CDR(tmpMeta100);
          tmp103 = mmc_unbox_integer(tmpMeta101);
          if (!listEmpty(tmpMeta102)) goto goto_2;
          _v2 = tmp103  /* pattern as ty=Integer */;

          _p2 = mmc_unbox_integer(arrayGet(_varPartMap,_v2) /* DAE.ASUB */);

          tmpMeta104 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_counter), mmc_mk_integer(_resolution));
          _sub1 = omc_SynchronousFeatures_setSubClockShift(threadData, _sub1, tmpMeta104);

          tmpMeta105 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_counter), mmc_mk_integer(_resolution));
          _sub2 = omc_SynchronousFeatures_setSubClockShift(threadData, _sub2, omc_MMath_subRational(threadData, _OMC_LIT86, tmpMeta105));
          tmp1_c0 = _p1;
          tmp1_c1 = _v1;
          tmp1_c2 = _p2;
          tmp1_c3 = _v2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_integer tmp117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_integer tmp121;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta106,6,2) == 0) goto tmp3_end;
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 2));
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta108,4,1) == 0) goto tmp3_end;
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta108), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta109,4,2) == 0) goto tmp3_end;
          tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta110,6,2) == 0) goto tmp3_end;
          tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta110), 2));
          tmpMeta112 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta112,2,1) == 0) goto tmp3_end;
          tmpMeta113 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta112), 2));
          
          _cref1 = tmpMeta107;
          _cref2 = tmpMeta111;
          _solver = tmpMeta113;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref1, _vars, &tmpMeta114);
          if (listEmpty(tmpMeta114)) goto goto_2;
          tmpMeta115 = MMC_CAR(tmpMeta114);
          tmpMeta116 = MMC_CDR(tmpMeta114);
          tmp117 = mmc_unbox_integer(tmpMeta115);
          if (!listEmpty(tmpMeta116)) goto goto_2;
          _v1 = tmp117  /* pattern as ty=Integer */;

          _p1 = mmc_unbox_integer(arrayGet(_varPartMap,_v1) /* DAE.ASUB */);

          /* Pattern-matching tuple assignment, wild first pattern */
          omc_BackendVariable_getVar(threadData, _cref2, _vars, &tmpMeta118);
          if (listEmpty(tmpMeta118)) goto goto_2;
          tmpMeta119 = MMC_CAR(tmpMeta118);
          tmpMeta120 = MMC_CDR(tmpMeta118);
          tmp121 = mmc_unbox_integer(tmpMeta119);
          if (!listEmpty(tmpMeta120)) goto goto_2;
          _v2 = tmp121  /* pattern as ty=Integer */;

          _p2 = mmc_unbox_integer(arrayGet(_varPartMap,_v2) /* DAE.ASUB */);

          _sub1 = omc_SynchronousFeatures_setSubClockSolver(threadData, _sub1, mmc_mk_some(_solver));

          _sub2 = omc_SynchronousFeatures_setSubClockSolver(threadData, _sub2, mmc_mk_some(_solver));
          tmp1_c0 = _p1;
          tmp1_c1 = _v1;
          tmp1_c2 = _p2;
          tmp1_c3 = _v2;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1_c0 = ((modelica_integer) -1);
          tmp1_c1 = ((modelica_integer) -1);
          tmp1_c2 = ((modelica_integer) -1);
          tmp1_c3 = ((modelica_integer) -1);
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
  _part1 = tmp1_c0;
  _var1 = tmp1_c1;
  _part2 = tmp1_c2;
  _var2 = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_part1) { *out_part1 = _part1; }
  if (out_var1) { *out_var1 = _var1; }
  if (out_sub1) { *out_sub1 = _sub1; }
  if (out_part2) { *out_part2 = _part2; }
  if (out_var2) { *out_var2 = _var2; }
  if (out_sub2) { *out_sub2 = _sub2; }
  return _infered;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getConnectedSubPartitions(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _varPartMap, modelica_metatype _vars, modelica_metatype *out_part1, modelica_metatype *out_var1, modelica_metatype *out_sub1, modelica_metatype *out_part2, modelica_metatype *out_var2, modelica_metatype *out_sub2)
{
  modelica_integer _part1;
  modelica_integer _var1;
  modelica_integer _part2;
  modelica_integer _var2;
  modelica_boolean _infered;
  modelica_metatype out_infered;
  _infered = omc_SynchronousFeatures_getConnectedSubPartitions(threadData, _eq, _varPartMap, _vars, &_part1, &_var1, out_sub1, &_part2, &_var2, out_sub2);
  out_infered = mmc_mk_icon(_infered);
  if (out_part1) { *out_part1 = mmc_mk_icon(_part1); }
  if (out_var1) { *out_var1 = mmc_mk_icon(_var1); }
  /* skip box _sub1; BackendDAE.SubClock */
  if (out_part2) { *out_part2 = mmc_mk_icon(_part2); }
  if (out_var2) { *out_var2 = mmc_mk_icon(_var2); }
  /* skip box _sub2; BackendDAE.SubClock */
  return out_infered;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockSolver(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _solver)
{
  modelica_metatype _subClkOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClkOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      modelica_metatype _factor = NULL;
      modelica_metatype _shift = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _factor has no default value.
      // _shift has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _factor = tmpMeta6;
          _shift = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, _factor, _shift, _solver);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _subClk;
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
  _subClkOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subClkOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockShift(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _shift)
{
  modelica_metatype _subClkOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClkOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      modelica_metatype _factor = NULL;
      modelica_metatype _solver = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _factor has no default value.
      // _solver has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _factor = tmpMeta6;
          _solver = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, _factor, _shift, _solver);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _subClk;
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
  _subClkOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subClkOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockSolverOpt(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_metatype _solver = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _solver has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _solver = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _solver;
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
  _solver = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _solver;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockShift(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_metatype _shift = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _shift has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _shift = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _shift;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT86;
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
  _shift = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _shift;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockFactor(threadData_t *threadData, modelica_metatype _subClk)
{
  modelica_metatype _factor = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _factor has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _factor = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _factor;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT85;
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
  _factor = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _factor;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSubClockFactor(threadData_t *threadData, modelica_metatype _subClk, modelica_metatype _factor)
{
  modelica_metatype _subClkOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClkOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _subClk;
    {
      modelica_metatype _shift = NULL;
      modelica_metatype _solver = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _shift has no default value.
      // _solver has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _shift = tmpMeta6;
          _solver = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, _factor, _shift, _solver);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _subClk;
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
  _subClkOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subClkOut;
}

PROTECTED_FUNCTION_STATIC void omc_SynchronousFeatures_addPartAdjacencyEdge(threadData_t *threadData, modelica_integer _part1, modelica_metatype _sub1, modelica_integer _part2, modelica_metatype _sub2, modelica_metatype _partAdjacency)
{
  modelica_metatype _partEdges = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partEdges has no default value.
  if(((_part1 > ((modelica_integer) 0)) && (_part2 > ((modelica_integer) 0))))
  {
    _partEdges = arrayGet(_partAdjacency, _part1);

    {
      modelica_metatype _edge;
      for (tmpMeta1 = _partEdges; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _edge = MMC_CAR(tmpMeta1);
        if((mmc_unbox_integer(omc_Util_tuple21(threadData, _edge)) == _part2))
        {
        }
      }
    }

    tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(_part2), _sub1);
    tmpMeta3 = mmc_mk_cons(tmpMeta4, _partEdges);
    arrayUpdate(_partAdjacency, _part1, tmpMeta3);

    _partEdges = arrayGet(_partAdjacency, _part2);

    tmpMeta6 = mmc_mk_box2(0, mmc_mk_integer(_part1), _sub2);
    tmpMeta5 = mmc_mk_cons(tmpMeta6, _partEdges);
    arrayUpdate(_partAdjacency, _part2, tmpMeta5);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SynchronousFeatures_addPartAdjacencyEdge(threadData_t *threadData, modelica_metatype _part1, modelica_metatype _sub1, modelica_metatype _part2, modelica_metatype _sub2, modelica_metatype _partAdjacency)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_part1);
  tmp2 = mmc_unbox_integer(_part2);
  omc_SynchronousFeatures_addPartAdjacencyEdge(threadData, tmp1, _sub1, tmp2, _sub2, _partAdjacency);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_mergeSolver(threadData_t *threadData, modelica_metatype _solver1, modelica_metatype _solver2)
{
  modelica_metatype _sOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _solver1;
    tmp4_2 = _solver2;
    {
      modelica_string _s1 = NULL;
      modelica_string _s2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s1 has no default value.
      // _s2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _s2 = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_s2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _s1 = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta1 = mmc_mk_some(_s1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _s1 = tmpMeta8;
          _s2 = tmpMeta9;
          /* Pattern matching succeeded */
          if((!(stringEqual(_s1, _s2))))
          {
            tmpMeta10 = stringAppend(_OMC_LIT89,_s1);
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT90);
            tmpMeta12 = stringAppend(tmpMeta11,_s2);
            tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT91);
            omc_Error_addCompilerNotification(threadData, tmpMeta13);
          }
          tmpMeta1 = mmc_mk_some(_s1);
          goto tmp3_done;
        }
        case 3: {
          
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
  _sOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_computeAbsoluteSubClock(threadData_t *threadData, modelica_metatype _preClock, modelica_metatype _subSeqClock)
{
  modelica_metatype _subClk = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _subClk = _OMC_LIT87;
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _preClock;
    tmp4_2 = _subSeqClock;
    {
      modelica_metatype _f1 = NULL;
      modelica_metatype _f2 = NULL;
      modelica_metatype _s1 = NULL;
      modelica_metatype _s2 = NULL;
      modelica_metatype _solver1 = NULL;
      modelica_metatype _solver2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _f1 has no default value.
      // _f2 has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _solver1 has no default value.
      // _solver2 has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _f1 = tmpMeta6;
          _s1 = tmpMeta7;
          _solver1 = tmpMeta8;
          _f2 = tmpMeta9;
          _s2 = tmpMeta10;
          _solver2 = tmpMeta11;
          /* Pattern matching succeeded */
          _solver1 = omc_SynchronousFeatures_mergeSolver(threadData, _solver1, _solver2);
          tmpMeta12 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_MMath_divRational(threadData, _f1, _f2), omc_MMath_addRational(threadData, omc_MMath_multRational(threadData, _s1, _f2), _s2), _solver1);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _subSeqClock;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT92, _OMC_LIT93);
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
  _subClk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subClk;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_findSubClocks(threadData_t *threadData, modelica_integer _numPartitions, modelica_integer _baseClockEq, modelica_metatype _baseClk, modelica_metatype _baseClockConstructors, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _eqs, modelica_metatype _partAdjacency, modelica_metatype *out_outSubClocks)
{
  modelica_metatype _baseClkOut = NULL;
  modelica_metatype _outSubClocks = NULL;
  modelica_integer _part1;
  modelica_integer _part2;
  modelica_metatype _partLst = NULL;
  modelica_metatype _subClk1 = NULL;
  modelica_metatype _subClk2 = NULL;
  modelica_metatype _clk = NULL;
  modelica_metatype _partIsAssigned = NULL;
  modelica_metatype _adjParts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _baseClkOut has no default value.
  // _outSubClocks has no default value.
  // _part1 has no default value.
  // _part2 has no default value.
  // _partLst has no default value.
  // _subClk1 has no default value.
  // _subClk2 has no default value.
  // _clk has no default value.
  // _partIsAssigned has no default value.
  // _adjParts has no default value.
  _outSubClocks = arrayCreate(_numPartitions, _OMC_LIT87);

  _partIsAssigned = arrayCreate(_numPartitions, mmc_mk_boolean(0 /* false */));

  {
    modelica_metatype _clockEq;
    for (tmpMeta1 = _baseClockConstructors; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _clockEq = MMC_CAR(tmpMeta1);
      if(((!(_baseClockEq == mmc_unbox_integer(_clockEq))) && (!(_baseClockEq == ((modelica_integer) -1)))))
      {
        _part1 = mmc_unbox_integer(arrayGet(_eqPartMap, mmc_unbox_integer(_clockEq)));

        _clk = omc_SynchronousFeatures_getBaseClock(threadData, omc_BackendEquation_get(threadData, _eqs, mmc_unbox_integer(_clockEq)));

        if((!omc_SynchronousFeatures_isInferedBaseClock(threadData, _clk)))
        {
          _subClk1 = omc_SynchronousFeatures_getSubClockForClkConstructor(threadData, _baseClk, _clk);

          arrayUpdate(_outSubClocks, _part1, _subClk1);

          arrayUpdate(_partIsAssigned, _part1, mmc_mk_boolean(1 /* true */));
        }
      }
    }
  }

  if(omc_SynchronousFeatures_isInferedBaseClock(threadData, _baseClk))
  {
    _baseClkOut = _baseClk;

    _partLst = omc_List_intRange(threadData, _numPartitions);
  }
  else
  {
    _part1 = mmc_unbox_integer(arrayGet(_eqPartMap, _baseClockEq));

    tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_part1), omc_List_intRange(threadData, _numPartitions));
    _partLst = tmpMeta3;

    _baseClkOut = omc_SynchronousFeatures_setSolverSubClock(threadData, _baseClk, arrayGet(_outSubClocks,_part1) /* DAE.ASUB */ ,&_subClk1);

    arrayUpdate(_outSubClocks, _part1, _subClk1);

    arrayUpdate(_partIsAssigned, _part1, mmc_mk_boolean(1 /* true */));
  }

  while(1)
  {
    if(!(!listEmpty(_partLst))) break;
    /* Pattern-matching assignment */
    tmpMeta4 = _partLst;
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    tmp7 = mmc_unbox_integer(tmpMeta5);
    _part1 = tmp7  /* pattern as ty=Integer */;
    _partLst = tmpMeta6;

    _adjParts = arrayGet(_partAdjacency, _part1);

    {
      modelica_metatype _adjPart;
      for (tmpMeta8 = _adjParts; !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
      {
        _adjPart = MMC_CAR(tmpMeta8);
        _part2 = mmc_unbox_integer(omc_Util_tuple21(threadData, _adjPart));

        if((!mmc_unbox_boolean(arrayGet(_partIsAssigned, _part2))))
        {
          _subClk1 = arrayGet(_outSubClocks, _part1);

          _subClk2 = omc_Util_tuple22(threadData, _adjPart);

          _subClk2 = omc_SynchronousFeatures_computeAbsoluteSubClock(threadData, _subClk1, _subClk2);

          if((!omc_SynchronousFeatures_isInferedSubClock(threadData, _subClk2)))
          {
            arrayUpdate(_outSubClocks, _part2, _subClk2);

            arrayUpdate(_partIsAssigned, _part2, mmc_mk_boolean(1 /* true */));

            tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_part2), _partLst);
            _partLst = tmpMeta9;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outSubClocks) { *out_outSubClocks = _outSubClocks; }
  return _baseClkOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_findSubClocks(threadData_t *threadData, modelica_metatype _numPartitions, modelica_metatype _baseClockEq, modelica_metatype _baseClk, modelica_metatype _baseClockConstructors, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _eqs, modelica_metatype _partAdjacency, modelica_metatype *out_outSubClocks)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _baseClkOut = NULL;
  tmp1 = mmc_unbox_integer(_numPartitions);
  tmp2 = mmc_unbox_integer(_baseClockEq);
  _baseClkOut = omc_SynchronousFeatures_findSubClocks(threadData, tmp1, tmp2, _baseClk, _baseClockConstructors, _subPartitionInterfaceEqs, _eqPartMap, _varPartMap, _eqs, _partAdjacency, out_outSubClocks);
  /* skip box _baseClkOut; DAE.ClockKind */
  /* skip box _outSubClocks; array<BackendDAE.SubClock> */
  return _baseClkOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_setSolverSubClock(threadData_t *threadData, modelica_metatype _baseClkIn, modelica_metatype _inSubClock, modelica_metatype *out_outSubClock)
{
  modelica_metatype _baseClkOut = NULL;
  modelica_metatype _outSubClock = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _baseClkOut has no default value.
  // _outSubClock has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _baseClkIn;
    {
      modelica_string _solver = NULL;
      modelica_metatype _clk = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _solver has no default value.
      // _clk has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          _clk = tmpMeta7;
          _solver = tmpMeta9;
          /* Pattern matching succeeded */
          _outSubClock = omc_SynchronousFeatures_setSubClockSolver(threadData, _inSubClock, ((stringEqual(_solver, _OMC_LIT0))?mmc_mk_none():mmc_mk_some(_solver)));
          tmpMeta[0+0] = _clk;
          tmpMeta[0+1] = _outSubClock;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _baseClkIn;
          tmpMeta[0+1] = _inSubClock;
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
  _baseClkOut = tmpMeta[0+0];
  _outSubClock = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outSubClock) { *out_outSubClock = _outSubClock; }
  return _baseClkOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubClockForClkConstructor(threadData_t *threadData, modelica_metatype _refClock, modelica_metatype _clk)
{
  modelica_metatype _subClk = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subClk has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _refClock;
    tmp4_2 = _clk;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      modelica_integer _i4;
      modelica_real _r1;
      modelica_real _r2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      // _i4 has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _i1 = tmp8  /* pattern as ty=Integer */;
          _i2 = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_i2), mmc_mk_integer(_i1));
          tmpMeta13 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, tmpMeta12, _OMC_LIT86, mmc_mk_none());
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,0,1) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          _i1 = tmp16  /* pattern as ty=Integer */;
          _i2 = tmp19  /* pattern as ty=Integer */;
          _i3 = tmp22  /* pattern as ty=Integer */;
          _i4 = tmp25  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_i2), mmc_mk_integer(_i1));
          tmpMeta27 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(_i4), mmc_mk_integer(_i3));
          tmpMeta28 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_MMath_divRational(threadData, tmpMeta26, tmpMeta27), _OMC_LIT86, mmc_mk_none());
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_real tmp31;
          modelica_real tmp32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,1,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmp31 = mmc_unbox_real(tmpMeta30);
          _r1 = tmp31  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp32 = _r1;
          if (tmp32 == 0) {goto goto_2;}
          tmpMeta33 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer)floor((1.0) / tmp32))));
          tmpMeta34 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, tmpMeta33, _OMC_LIT86, mmc_mk_none());
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_real tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_real tmp40;
          modelica_real tmp41;
          modelica_metatype tmpMeta42;
          modelica_real tmp43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,1) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmp37 = mmc_unbox_real(tmpMeta36);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,1,1) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          tmp40 = mmc_unbox_real(tmpMeta39);
          _r1 = tmp37  /* pattern as ty=Real */;
          _r2 = tmp40  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp41 = _r1;
          if (tmp41 == 0) {goto goto_2;}
          tmpMeta42 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer)floor((1.0) / tmp41))));
          tmp43 = _r2;
          if (tmp43 == 0) {goto goto_2;}
          tmpMeta44 = mmc_mk_box3(3, &MMath_Rational_RATIONAL__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer)floor((1.0) / tmp43))));
          tmpMeta45 = mmc_mk_box4(3, &BackendDAE_SubClock_SUBCLOCK__desc, omc_MMath_divRational(threadData, tmpMeta42, tmpMeta44), _OMC_LIT86, mmc_mk_none());
          tmpMeta1 = tmpMeta45;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT94, _OMC_LIT95);
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
  _subClk = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subClk;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getSubPartitionAdjacency(threadData_t *threadData, modelica_integer _numPartitions, modelica_integer _baseClockEq, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _clockedVarsMask, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype *out_order)
{
  modelica_metatype _partAdjacency = NULL;
  modelica_metatype _order = NULL;
  modelica_boolean _infered;
  modelica_integer _part;
  modelica_integer _part1;
  modelica_integer _part2;
  modelica_integer _var1;
  modelica_integer _var2;
  modelica_metatype _partLst = NULL;
  modelica_metatype _orderLst = NULL;
  modelica_metatype _subClk1 = NULL;
  modelica_metatype _subClk2 = NULL;
  modelica_metatype _partitionParents = NULL;
  modelica_metatype _partitionParentsVisited = NULL;
  modelica_metatype _partitionInterfacesClockVars = NULL;
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
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _partAdjacency has no default value.
  // _order has no default value.
  // _infered has no default value.
  // _part has no default value.
  // _part1 has no default value.
  // _part2 has no default value.
  // _var1 has no default value.
  // _var2 has no default value.
  // _partLst has no default value.
  // _orderLst has no default value.
  // _subClk1 has no default value.
  // _subClk2 has no default value.
  // _partitionParents has no default value.
  // _partitionParentsVisited has no default value.
  // _partitionInterfacesClockVars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _partAdjacency = arrayCreate(_numPartitions, tmpMeta1);

  _partitionParents = arrayCreate(_numPartitions, mmc_mk_integer(((modelica_integer) -1)));

  _partitionInterfacesClockVars = arrayCreate(_numPartitions, mmc_mk_boolean(0 /* false */));

  {
    modelica_metatype _subPartEq;
    for (tmpMeta2 = _subPartitionInterfaceEqs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _subPartEq = MMC_CAR(tmpMeta2);
      _infered = omc_SynchronousFeatures_getConnectedSubPartitions(threadData, omc_BackendEquation_get(threadData, _eqs, mmc_unbox_integer(_subPartEq)), _varPartMap, _vars ,&_part1 ,&_var1 ,&_subClk1 ,&_part2 ,&_var2 ,&_subClk2);

      if(((_part1 != ((modelica_integer) 0)) && (_part2 != ((modelica_integer) 0))))
      {
        omc_SynchronousFeatures_addPartAdjacencyEdge(threadData, _part1, _subClk1, _part2, _subClk2, _partAdjacency);
      }

      if(((mmc_unbox_integer(arrayGet(_partitionParents,_part2) /* DAE.ASUB */) == _part1) && mmc_unbox_boolean(arrayGet(_partitionInterfacesClockVars,_part2) /* DAE.ASUB */)))
      {
        arrayUpdate(_partitionParents,_part2,mmc_mk_integer(((modelica_integer) -1)));
      }

      arrayUpdate(_partitionInterfacesClockVars,_part1,mmc_mk_boolean((!(mmc_unbox_boolean(arrayGet(_clockedVarsMask,_var1) /* DAE.ASUB */) && mmc_unbox_boolean(arrayGet(_clockedVarsMask,_var2) /* DAE.ASUB */)))));

      if((mmc_unbox_integer(arrayGet(_partitionParents,_part2) /* DAE.ASUB */) != _part1))
      {
        arrayUpdate(_partitionParents,_part1,mmc_mk_integer(_part2));
      }
    }
  }

  _partLst = omc_List_intRange(threadData, _numPartitions);

  _partitionParentsVisited = arrayCreate(_numPartitions, mmc_mk_boolean(0 /* false */));

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _orderLst = tmpMeta4;

  while(1)
  {
    if(!(!listEmpty(_partLst))) break;
    /* Pattern-matching assignment */
    tmpMeta5 = _partLst;
    if (listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_CAR(tmpMeta5);
    tmpMeta7 = MMC_CDR(tmpMeta5);
    tmp8 = mmc_unbox_integer(tmpMeta6);
    _part = tmp8  /* pattern as ty=Integer */;
    _partLst = tmpMeta7;

    if((!mmc_unbox_boolean(arrayGet(_partitionParentsVisited,_part) /* DAE.ASUB */)))
    {
      if(((mmc_unbox_integer(arrayGet(_partitionParents,_part) /* DAE.ASUB */) == ((modelica_integer) -1)) || (mmc_unbox_integer(arrayGet(_partitionParents,_part) /* DAE.ASUB */) == _part)))
      {
        tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_part), _orderLst);
        _orderLst = tmpMeta9;

        arrayUpdate(_partitionParentsVisited,_part,mmc_mk_boolean(1 /* true */));
      }
      else
      {
        if(mmc_unbox_boolean(arrayGet(_partitionParentsVisited,mmc_unbox_integer(arrayGet(_partitionParents,_part) /* DAE.ASUB */)) /* DAE.ASUB */))
        {
          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_part), _orderLst);
          _orderLst = tmpMeta10;

          arrayUpdate(_partitionParentsVisited,_part,mmc_mk_boolean(1 /* true */));
        }
        else
        {
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_part), _partLst);
          _partLst = tmpMeta11;

          tmpMeta12 = mmc_mk_cons(arrayGet(_partitionParents,_part) /* DAE.ASUB */, _partLst);
          _partLst = tmpMeta12;
        }
      }
    }
  }

  _order = listArray(listReverse(_orderLst));
  _return: OMC_LABEL_UNUSED
  if (out_order) { *out_order = _order; }
  return _partAdjacency;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_getSubPartitionAdjacency(threadData_t *threadData, modelica_metatype _numPartitions, modelica_metatype _baseClockEq, modelica_metatype _subPartitionInterfaceEqs, modelica_metatype _eqPartMap, modelica_metatype _varPartMap, modelica_metatype _clockedVarsMask, modelica_metatype _eqs, modelica_metatype _vars, modelica_metatype *out_order)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _partAdjacency = NULL;
  tmp1 = mmc_unbox_integer(_numPartitions);
  tmp2 = mmc_unbox_integer(_baseClockEq);
  _partAdjacency = omc_SynchronousFeatures_getSubPartitionAdjacency(threadData, tmp1, tmp2, _subPartitionInterfaceEqs, _eqPartMap, _varPartMap, _clockedVarsMask, _eqs, _vars, out_order);
  /* skip box _partAdjacency; array<list<tuple<#Integer, BackendDAE.SubClock>>> */
  /* skip box _order; array<#Integer> */
  return _partAdjacency;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inComps, modelica_metatype *out_outComps)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outComps = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outComps has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _e = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _cr has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (4 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _e = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _e;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,6,2) == 0) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          _cr = tmpMeta12;
          tmpMeta13 = mmc_mk_cons(_cr, _inComps);
          tmpMeta[0+0] = omc_SynchronousFeatures_substGetPartition(threadData, _e);
          tmpMeta[0+1] = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inComps;
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
  _outComps = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outComps) { *out_outComps = _outComps; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExp1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inComps, modelica_metatype *out_outComps)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outComps = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outComps has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_removeHoldExp, _inComps ,&_outComps);
  _return: OMC_LABEL_UNUSED
  if (out_outComps) { *out_outComps = _outComps; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_removeHoldExpsSyst(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype *out_outHoldComps)
{
  modelica_metatype _outSysts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outHoldComps = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSysts = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _outHoldComps = tmpMeta2;
  {
    modelica_metatype _syst1;
    for (tmpMeta3 = _inSysts; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _syst1 = MMC_CAR(tmpMeta3);
      { /* match expression */
        modelica_metatype tmp7_1;
        tmp7_1 = _syst1;
        {
          modelica_metatype _eqs = NULL;
          modelica_metatype _syst = NULL;
          modelica_metatype _lstEqs = NULL;
          modelica_integer _i;
          modelica_metatype _eq = NULL;
          volatile mmc_switch_type tmp7;
          int tmp8;
          // _eqs has no default value.
          // _syst has no default value.
          // _lstEqs has no default value.
          // _i has no default value.
          // _eq has no default value.
          tmp7 = 0;
          for (; tmp7 < 1; tmp7++) {
            switch (MMC_SWITCH_CAST(tmp7)) {
            case 0: {
              modelica_metatype tmpMeta9;
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_integer tmp12;
              modelica_integer tmp13;
              modelica_integer tmp14;
              modelica_metatype tmpMeta15;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
              
              _syst = tmp7_1;
              _eqs = tmpMeta9;
              /* Pattern matching succeeded */
              tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
              _lstEqs = tmpMeta10;

              tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = omc_BackendEquation_getNumberOfEquations(threadData, _eqs);
              if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
              {
                modelica_integer _i;
                for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
                {
                  _eq = omc_BackendEquation_get(threadData, _eqs, _i);

                  _eq = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_removeHoldExp1, _outHoldComps ,&_outHoldComps);

                  tmpMeta11 = mmc_mk_cons(_eq, _lstEqs);
                  _lstEqs = tmpMeta11;
                }
              }

              tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(11));
              memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[3] = omc_BackendEquation_listEquation(threadData, listReverse(_lstEqs));
              _syst = tmpMeta15;
              tmpMeta4 = _syst;
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
      _syst1 = tmpMeta4;

      tmpMeta16 = mmc_mk_cons(omc_BackendDAEUtil_clearEqSyst(threadData, _syst1), _outSysts);
      _outSysts = tmpMeta16;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outHoldComps) { *out_outHoldComps = _outHoldComps; }
  return _outSysts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_subClockPartitioning1(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype _inShared, modelica_metatype _inHoldComps, modelica_metatype *out_outShared)
{
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype _outSysts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outShared = NULL;
  modelica_metatype _baseClock = NULL;
  modelica_metatype _varsPartition = NULL;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer _n;
  modelica_integer _nBaseClocks;
  modelica_metatype _cr = NULL;
  modelica_metatype _hasHoldOperator = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _lstSubClocks1 = NULL;
  modelica_metatype _lstSubClocks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _partitionsInfo = NULL;
  modelica_metatype _basePartitions = NULL;
  modelica_metatype _subPartitions = NULL;
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
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSysts = tmpMeta1;
  _outShared = _inShared;
  // _baseClock has no default value.
  // _varsPartition has no default value.
  // _i has no default value.
  // _j has no default value.
  // _n has no default value.
  // _nBaseClocks has no default value.
  // _cr has no default value.
  // _hasHoldOperator has no default value.
  // _systs has no default value.
  // _lstSubClocks1 has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _lstSubClocks = tmpMeta2;
  // _partitionsInfo has no default value.
  // _basePartitions has no default value.
  // _subPartitions has no default value.
  _nBaseClocks = listLength(_inSysts);

  _basePartitions = arrayCreate(_nBaseClocks, _OMC_LIT96);

  _varsPartition = omc_HashTable_emptyHashTable(threadData);

  _i = ((modelica_integer) 0);

  _j = ((modelica_integer) 1);

  {
    modelica_metatype _syst;
    for (tmpMeta3 = _inSysts; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _syst = MMC_CAR(tmpMeta3);
      _systs = omc_SynchronousFeatures_subClockPartitioning(threadData, _syst, _outShared, _i ,&_baseClock ,&_lstSubClocks1);

      _n = listLength(_systs);

      tmpMeta4 = mmc_mk_box3(3, &BackendDAE_BasePartition_BASE__PARTITION__desc, _baseClock, mmc_mk_integer(_n));
      arrayUpdate(_basePartitions, _j, tmpMeta4);

      _outSysts = omc_List_append__reverse(threadData, _systs, _outSysts);

      _lstSubClocks = omc_List_append__reverse(threadData, _lstSubClocks1, _lstSubClocks);

      _i = _i + _n;

      _j = ((modelica_integer) 1) + _j;
    }
  }

  _outSysts = listReverseInPlace(_outSysts);

  _lstSubClocks = listReverseInPlace(_lstSubClocks);

  _hasHoldOperator = arrayCreate(listLength(_lstSubClocks), mmc_mk_boolean(0 /* false */));

  _i = ((modelica_integer) 1);

  {
    modelica_metatype _syst;
    for (tmpMeta6 = _outSysts; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
    {
      _syst = MMC_CAR(tmpMeta6);
      tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));
      if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp10, tmp12); _j += tmp11)
        {
          /* Pattern-matching assignment */
          tmpMeta7 = omc_BackendVariable_getVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), _j);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _cr = tmpMeta8;

          tmpMeta9 = mmc_mk_box2(0, _cr, mmc_mk_integer(_i));
          _varsPartition = omc_BaseHashTable_add(threadData, tmpMeta9, _varsPartition);
        }
      }

      _i = ((modelica_integer) 1) + _i;
    }
  }

  {
    modelica_metatype _cr;
    for (tmpMeta14 = _inHoldComps; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
    {
      _cr = MMC_CAR(tmpMeta14);
      _i = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _cr, _varsPartition));

      arrayUpdate(_hasHoldOperator, _i, mmc_mk_boolean(1 /* true */));
    }
  }

  _i = ((modelica_integer) 1);

  _subPartitions = arrayCreate(listLength(_lstSubClocks), _OMC_LIT97);

  {
    modelica_metatype _subclock;
    for (tmpMeta16 = _lstSubClocks; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
    {
      _subclock = MMC_CAR(tmpMeta16);
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta18 = mmc_mk_box4(3, &BackendDAE_SubPartition_SUB__PARTITION__desc, _subclock, arrayGet(_hasHoldOperator,_i) /* DAE.ASUB */, tmpMeta17);
      arrayUpdate(_subPartitions, _i, tmpMeta18);

      _i = ((modelica_integer) 1) + _i;
    }
  }

  _partitionsInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 18)));

  __omcQ_24mrfa_5F2 = _basePartitions;

  __omcQ_24mrfa_5F3 = _subPartitions;

  tmpMeta20 = mmc_mk_box3(3, &BackendDAE_PartitionsInfo_PARTITIONS__INFO__desc, __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3);
  _partitionsInfo = tmpMeta20;

  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_outShared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[18] = _partitionsInfo;
  _outShared = tmpMeta21;
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  return _outSysts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectPrevVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inPrevVars, modelica_metatype *out_outPrevVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outPrevVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _outPrevVars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _inPrevCompRefs = NULL;
      modelica_metatype _inForIter = NULL;
      modelica_string _forIter = NULL;
      modelica_metatype _cr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _inPrevCompRefs has no default value.
      // _inForIter has no default value.
      // _forIter has no default value.
      // _cr has no default value.
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
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (8 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _cr = tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta12 = _inPrevVars;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          _inPrevCompRefs = tmpMeta13;
          _inForIter = tmpMeta14;

          { /* match expression */
            modelica_metatype tmp17_1;
            tmp17_1 = _inForIter;
            {
              volatile mmc_switch_type tmp17;
              int tmp18;
              tmp17 = 0;
              for (; tmp17 < 2; tmp17++) {
                switch (MMC_SWITCH_CAST(tmp17)) {
                case 0: {
                  modelica_metatype tmpMeta19;
                  if (optionNone(tmp17_1)) goto tmp16_end;
                  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp17_1), 1));
                  _forIter = tmpMeta19;
                  /* Pattern matching succeeded */
                  _cr = omc_ComponentReference_crefStripIterSub(threadData, _cr, _forIter);
                  goto tmp16_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp16_done;
                }
                }
                goto tmp16_end;
                tmp16_end: ;
              }
              goto goto_15;
              goto_15:;
              goto goto_2;
              goto tmp16_done;
              tmp16_done:;
            }
          }
          ;
          tmpMeta20 = mmc_mk_cons(_cr, _inPrevCompRefs);
          tmpMeta21 = mmc_mk_box2(0, tmpMeta20, _inForIter);
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inPrevVars;
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
  _outPrevVars = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outPrevVars) { *out_outPrevVars = _outPrevVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_collectPrevVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inPrevVars, modelica_metatype *out_outPrevVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outPrevVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outPrevVars has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_collectPrevVars1, _inPrevVars ,&_outPrevVars);
  _return: OMC_LABEL_UNUSED
  if (out_outPrevVars) { *out_outPrevVars = _outPrevVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_markClockedStates(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared, modelica_metatype _derVars)
{
  modelica_metatype _outShared = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _prevVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _isPrevVarArr = NULL;
  modelica_metatype _isDerVarArr = NULL;
  modelica_metatype _varIxs = NULL;
  modelica_metatype _var = NULL;
  modelica_integer _idx;
  modelica_metatype _subPartition = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp32;
  modelica_integer tmp33;
  modelica_integer tmp34;
  modelica_metatype tmpMeta35;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outShared = _inShared;
  // _eq has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _prevVars = tmpMeta1;
  // _isPrevVarArr has no default value.
  // _isDerVarArr has no default value.
  // _varIxs has no default value.
  // _var has no default value.
  // _idx has no default value.
  // _subPartition has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 9)));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _idx = tmp4  /* pattern as ty=Integer */;

  _subPartition = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 18)))), 3))),_idx) /* DAE.ASUB */;

  _isPrevVarArr = arrayCreate(omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2)))), mmc_mk_boolean(0 /* false */));

  _isDerVarArr = arrayCreate(omc_BackendVariable_varsSize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2)))), mmc_mk_boolean(0 /* false */));

  {
    modelica_metatype _cr;
    for (tmpMeta5 = _derVars; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _cr = MMC_CAR(tmpMeta5);
      _varIxs = omc_SynchronousFeatures_getVarIxs(threadData, _cr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))));

      {
        modelica_metatype _idx;
        for (tmpMeta6 = _varIxs; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
        {
          _idx = MMC_CAR(tmpMeta6);
          arrayUpdate(_isDerVarArr, mmc_unbox_integer(_idx), mmc_mk_boolean(1 /* true */));
        }
      }
    }
  }

  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = omc_BackendEquation_getNumberOfEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 3))));
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      _eq = omc_BackendEquation_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 3))), _i);

      /* Pattern-matching tuple assignment, wild first pattern */
      tmpMeta11 = mmc_mk_box2(0, _prevVars, omc_BackendEquation_getForEquationIterIdent(threadData, _eq));
      omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_collectPrevVars, tmpMeta11, &tmpMeta9);
      tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
      _prevVars = tmpMeta10;
    }
  }

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = omc_BackendEquation_getNumberOfEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 10))));
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      _eq = omc_BackendEquation_get(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 10))), _i);

      /* Pattern-matching tuple assignment, wild first pattern */
      tmpMeta17 = mmc_mk_box2(0, _prevVars, omc_BackendEquation_getForEquationIterIdent(threadData, _eq));
      omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_collectPrevVars, tmpMeta17, &tmpMeta15);
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
      _prevVars = tmpMeta16;
    }
  }

  if((!omc_Flags_isSet(threadData, _OMC_LIT100)))
  {
    {
      modelica_metatype __omcQ_24tmpVar1;
      modelica_metatype* tmp22;
      modelica_metatype tmpMeta23;
      modelica_metatype __omcQ_24tmpVar0;
      modelica_integer tmp24;
      modelica_metatype _cr_loopVar = 0;
      modelica_metatype _cr;
      _cr_loopVar = _prevVars;
      tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar1 = tmpMeta23; /* defaultValue */
      tmp22 = &__omcQ_24tmpVar1;
      while(1) {
        tmp24 = 1;
        if (!listEmpty(_cr_loopVar)) {
          _cr = MMC_CAR(_cr_loopVar);
          _cr_loopVar = MMC_CDR(_cr_loopVar);
          tmp24--;
        }
        if (tmp24 == 0) {
          __omcQ_24tmpVar0 = omc_ComponentReferenceBasics_crefStripLastSubs(threadData, _cr);
          *tmp22 = mmc_mk_cons(__omcQ_24tmpVar0,0);
          tmp22 = &MMC_CDR(*tmp22);
        } else if (tmp24 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp22 = mmc_mk_nil();
      tmpMeta21 = __omcQ_24tmpVar1;
    }
    _prevVars = tmpMeta21;
  }

  {
    modelica_metatype _cr;
    for (tmpMeta25 = _prevVars; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
    {
      _cr = MMC_CAR(tmpMeta25);
      _varIxs = omc_SynchronousFeatures_getVarIxs(threadData, _cr, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))));

      {
        modelica_metatype _idx;
        for (tmpMeta26 = _varIxs; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
        {
          _idx = MMC_CAR(tmpMeta26);
          arrayUpdate(_isPrevVarArr, mmc_unbox_integer(_idx), mmc_mk_boolean(1 /* true */));
        }
      }
    }
  }

  tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
  _prevVars = tmpMeta29;

  tmp32 = ((modelica_integer) 1); tmp33 = 1; tmp34 = arrayLength(_isPrevVarArr);
  if(!(((tmp33 > 0) && (tmp32 > tmp34)) || ((tmp33 < 0) && (tmp32 < tmp34))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp32, tmp34); _i += tmp33)
    {
      if(mmc_unbox_boolean(arrayGet(_isPrevVarArr,_i) /* DAE.ASUB */))
      {
        _var = omc_BackendVariable_getVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))), _i);

        tmpMeta30 = mmc_mk_box3(8, &BackendDAE_VarKind_CLOCKED__STATE__desc, omc_ComponentReference_crefPrefixPrevious(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2)))), arrayGet(_isDerVarArr,_i) /* DAE.ASUB */);
        _var = omc_BackendVariable_setVarKind(threadData, _var, tmpMeta30);

        _var = omc_BackendVariable_setVarFixed(threadData, _var, 1 /* true */);

        omc_BackendVariable_setVarAt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSyst), 2))), _i, _var);

        tmpMeta31 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _prevVars);
        _prevVars = tmpMeta31;
      }
    }
  }

  tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(5));
  memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_subPartition), 5*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[4] = _prevVars;
  _subPartition = tmpMeta35;

  arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outShared), 18)))), 3))), _idx, _subPartition);
  _return: OMC_LABEL_UNUSED
  return _outShared;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteFiniteDifference(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outDerVars has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _expLst = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _x = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _exp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expLst has no default value.
      // _attr has no default value.
      // _x has no default value.
      // _ty has no default value.
      // _exp has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          
          _expLst = tmpMeta8;
          _x = tmpMeta11;
          _attr = tmpMeta12;
          _ty = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT101, _expLst, _attr);
          _exp = tmpMeta14;

          tmpMeta15 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _x, _ty);
          tmpMeta16 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta15, _OMC_LIT103, _exp);
          _exp = tmpMeta16;

          tmpMeta17 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp, _OMC_LIT104, _OMC_LIT107);
          _exp = tmpMeta17;
          tmpMeta18 = mmc_mk_cons(_x, _inDerVars);
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inDerVars;
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
  _outDerVars = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_substituteFiniteDifference1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outDerVars has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_substituteFiniteDifference, _inDerVars ,&_outDerVars);
  _return: OMC_LABEL_UNUSED
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_shiftDerVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outDerVars = _inDerVars;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _expLst = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _x = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expLst has no default value.
      // _attr has no default value.
      // _x has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _x = tmpMeta6;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_ComponentReferenceBasics_crefInLst(threadData, _x, _inDerVars)) goto tmp3_end;
          tmpMeta7 = mmc_mk_cons(_inExp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT101, tmpMeta7, _OMC_LIT106);
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
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (3 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta11)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,13,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (8 != MMC_STRLEN(tmpMeta15) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta15)) != 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _expLst = tmpMeta16;
          _attr = tmpMeta17;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT108, _expLst, _attr);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 2: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,1,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          if (8 != MMC_STRLEN(tmpMeta20) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta20)) != 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta21)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmpMeta21);
          tmpMeta23 = MMC_CDR(tmpMeta21);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (8 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
          if (!listEmpty(tmpMeta23)) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _expLst = tmpMeta26;
          _attr = tmpMeta27;
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT101, _expLst, _attr);
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inExp;
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
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_shiftDerVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outDerVars has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_shiftDerVars, _inDerVars ,&_outDerVars);
  _return: OMC_LABEL_UNUSED
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getDerVars(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  _outDerVars = _inDerVars;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _derVars = NULL;
      modelica_metatype _optForIter = NULL;
      modelica_string _forIter = NULL;
      modelica_metatype _x = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _der_x = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _derVars has no default value.
      // _optForIter has no default value.
      // _forIter has no default value.
      // _x has no default value.
      // _ty has no default value.
      // _der_x has no default value.
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
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _x = tmpMeta11;
          _ty = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, omc_ComponentReference_crefPrefixDer(threadData, _x), _ty);
          _der_x = tmpMeta13;

          /* Pattern-matching assignment */
          tmpMeta14 = _inDerVars;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _derVars = tmpMeta15;
          _optForIter = tmpMeta16;

          { /* match expression */
            modelica_metatype tmp19_1;
            tmp19_1 = _optForIter;
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 2; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  modelica_metatype tmpMeta21;
                  if (optionNone(tmp19_1)) goto tmp18_end;
                  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp19_1), 1));
                  _forIter = tmpMeta21;
                  /* Pattern matching succeeded */
                  _x = omc_ComponentReference_crefStripIterSub(threadData, _x, _forIter);
                  goto tmp18_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              goto goto_2;
              goto tmp18_done;
              tmp18_done:;
            }
          }
          ;

          if((!omc_ComponentReferenceBasics_crefInLst(threadData, _x, _derVars)))
          {
            tmpMeta22 = mmc_mk_cons(_x, _derVars);
            _derVars = tmpMeta22;
          }

          tmpMeta23 = mmc_mk_box2(0, _derVars, _optForIter);
          _outDerVars = tmpMeta23;
          tmpMeta1 = _der_x;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inExp;
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
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_getDerVars1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inDerVars, modelica_metatype *out_outDerVars)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outDerVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outDerVars has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_SynchronousFeatures_getDerVars, _inDerVars ,&_outDerVars);
  _return: OMC_LABEL_UNUSED
  if (out_outDerVars) { *out_outDerVars = _outDerVars; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_treatClockedStates(threadData_t *threadData, modelica_metatype _inSysts, modelica_metatype _inShared, modelica_metatype *out_shared)
{
  modelica_metatype _outSysts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSysts = tmpMeta1;
  _shared = _inShared;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp66;
    modelica_metatype _syst_loopVar = 0;
    modelica_metatype _syst;
    _syst_loopVar = _inSysts;
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp66 = 1;
      if (!listEmpty(_syst_loopVar)) {
        _syst = MMC_CAR(_syst_loopVar);
        _syst_loopVar = MMC_CDR(_syst_loopVar);
        tmp66--;
      }
      if (tmp66 == 0) {
        { /* match expression */
          modelica_metatype tmp10_1;
          tmp10_1 = _syst;
          {
            modelica_metatype _eqs = NULL;
            modelica_integer _idx;
            modelica_metatype _subPartition = NULL;
            modelica_string _solverMethod = NULL;
            modelica_metatype _lstEqs = NULL;
            modelica_metatype tmpMeta7;
            modelica_metatype _eq = NULL;
            modelica_metatype _derVars = NULL;
            modelica_metatype tmpMeta8;
            modelica_metatype _var = NULL;
            modelica_metatype _exp = NULL;
            modelica_metatype _exp2 = NULL;
            modelica_metatype _ty = NULL;
            volatile mmc_switch_type tmp10;
            int tmp11;
            // _eqs has no default value.
            // _idx has no default value.
            // _subPartition has no default value.
            // _solverMethod has no default value.
            tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
            _lstEqs = tmpMeta7;
            // _eq has no default value.
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            _derVars = tmpMeta8;
            // _var has no default value.
            // _exp has no default value.
            // _exp2 has no default value.
            // _ty has no default value.
            tmp10 = 0;
            for (; tmp10 < 1; tmp10++) {
              switch (MMC_SWITCH_CAST(tmp10)) {
              case 0: {
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                modelica_metatype tmpMeta14;
                modelica_integer tmp15;
                modelica_metatype tmpMeta16;
                modelica_metatype tmpMeta17;
                modelica_metatype tmpMeta18;
                modelica_metatype tmpMeta19;
                modelica_metatype tmpMeta20;
                modelica_metatype tmpMeta21;
                modelica_metatype tmpMeta22;
                modelica_integer tmp23;
                modelica_integer tmp24;
                modelica_integer tmp25;
                modelica_metatype tmpMeta26;
                modelica_metatype tmpMeta27;
                modelica_metatype tmpMeta28;
                modelica_metatype tmpMeta29;
                modelica_metatype tmpMeta30;
                modelica_metatype tmpMeta31;
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
                modelica_metatype tmpMeta60;
                modelica_metatype tmpMeta61;
                modelica_metatype tmpMeta62;
                modelica_integer tmp63;
                modelica_integer tmp64;
                modelica_integer tmp65;
                tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 3));
                
                _eqs = tmpMeta12;
                /* Pattern matching succeeded */
                /* Pattern-matching assignment */
                tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 9)));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,1,1) == 0) goto goto_6;
                tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
                tmp15 = mmc_unbox_integer(tmpMeta14);
                _idx = tmp15  /* pattern as ty=Integer */;

                _subPartition = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18)))), 3))),_idx) /* DAE.ASUB */;

                _solverMethod = omc_BackendDump_optionString(threadData, omc_SynchronousFeatures_getSubClockSolverOpt(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_subPartition), 2)))));

                if(omc_StringUtil_startsWith(threadData, _solverMethod, _OMC_LIT116))
                {
                  if((!stringEqual(_solverMethod, _OMC_LIT115)))
                  {
                    tmpMeta16 = mmc_mk_cons(_OMC_LIT115, mmc_mk_cons(_solverMethod, MMC_REFSTRUCTLIT(mmc_nil)));
                    omc_Error_addMessage(threadData, _OMC_LIT111, tmpMeta16);

                    _solverMethod = _OMC_LIT115;
                  }
                }
                else
                {
                  if(((((stringLength(_solverMethod) > ((modelica_integer) 0)) && (!stringEqual(_solverMethod, _OMC_LIT112))) && (!stringEqual(_solverMethod, _OMC_LIT113))) && (!stringEqual(_solverMethod, _OMC_LIT114))))
                  {
                    tmpMeta17 = mmc_mk_cons(_OMC_LIT112, mmc_mk_cons(_solverMethod, MMC_REFSTRUCTLIT(mmc_nil)));
                    omc_Error_addMessage(threadData, _OMC_LIT111, tmpMeta17);

                    _solverMethod = _OMC_LIT112;
                  }
                }

                tmp23 = ((modelica_integer) 1); tmp24 = 1; tmp25 = omc_BackendEquation_getNumberOfEquations(threadData, _eqs);
                if(!(((tmp24 > 0) && (tmp23 > tmp25)) || ((tmp24 < 0) && (tmp23 < tmp25))))
                {
                  modelica_integer _i;
                  for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp23, tmp25); _i += tmp24)
                  {
                    _eq = omc_BackendEquation_get(threadData, _eqs, _i);

                    /* Pattern-matching tuple assignment */
                    tmpMeta20 = mmc_mk_box2(0, _derVars, omc_BackendEquation_getForEquationIterIdent(threadData, _eq));
                    tmpMeta21 = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_getDerVars1, tmpMeta20, &tmpMeta18);
                    _eq = tmpMeta21;
                    tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
                    _derVars = tmpMeta19;

                    tmpMeta22 = mmc_mk_cons(_eq, _lstEqs);
                    _lstEqs = tmpMeta22;
                  }
                }

                {
                  modelica_metatype _derVar;
                  for (tmpMeta26 = _derVars; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
                  {
                    _derVar = MMC_CAR(tmpMeta26);
                    _var = listGet(omc_BackendVariable_getVar(threadData, _derVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), NULL), ((modelica_integer) 1));

                    tmpMeta27 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, omc_ComponentReference_crefPrefixDer(threadData, _derVar), _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), mmc_mk_none(), mmc_mk_none(), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 9))), _OMC_LIT45, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT54, _OMC_LIT55, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
                    _var = tmpMeta27;

                    tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(11));
                    memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
                    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[2] = omc_BackendVariable_addVar(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));
                    _syst = tmpMeta28;
                  }
                }

                {
                  modelica_metatype _derVar;
                  for (tmpMeta30 = _derVars; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
                  {
                    _derVar = MMC_CAR(tmpMeta30);
                    _var = listGet(omc_BackendVariable_getVar(threadData, _derVar, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), NULL), ((modelica_integer) 1));

                    _ty = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)));

                    { /* match expression */
                      modelica_metatype tmp34_1;
                      tmp34_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)));
                      {
                        volatile mmc_switch_type tmp34;
                        int tmp35;
                        tmp34 = 0;
                        for (; tmp34 < 2; tmp34++) {
                          switch (MMC_SWITCH_CAST(tmp34)) {
                          case 0: {
                            modelica_metatype tmpMeta36;
                            if (mmc__uniontype__metarecord__typedef__equal(tmp34_1,6,2) == 0) goto tmp33_end;
                            tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp34_1), 2));
                            
                            _ty = tmpMeta36;
                            /* Pattern matching succeeded */
                            tmpMeta31 = omc_ComponentReference_crefApplySubs(threadData, _derVar, _OMC_LIT122);
                            goto tmp33_done;
                          }
                          case 1: {
                            
                            /* Pattern matching succeeded */
                            tmpMeta31 = _derVar;
                            goto tmp33_done;
                          }
                          }
                          goto tmp33_end;
                          tmp33_end: ;
                        }
                        goto goto_32;
                        goto_32:;
                        goto goto_6;
                        goto tmp33_done;
                        tmp33_done:;
                      }
                    }
                    _derVar = tmpMeta31;

                    tmpMeta38 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _derVar, _ty);
                    tmpMeta37 = mmc_mk_cons(tmpMeta38, MMC_REFSTRUCTLIT(mmc_nil));
                    tmpMeta39 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT108, tmpMeta37, _OMC_LIT106);
                    _exp = tmpMeta39;

                    tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                    _exp = omc_SynchronousFeatures_substituteFiniteDifference(threadData, _exp, tmpMeta40, NULL);

                    tmpMeta41 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, omc_ComponentReference_crefPrefixDer(threadData, _derVar), _ty);
                    _exp2 = tmpMeta41;

                    if((stringEqual(_solverMethod, _OMC_LIT115)))
                    {
                      tmpMeta42 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
                      tmpMeta43 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT101, tmpMeta42, _OMC_LIT106);
                      _exp2 = tmpMeta43;
                    }
                    else
                    {
                      if((stringEqual(_solverMethod, _OMC_LIT114)))
                      {
                        tmpMeta44 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
                        tmpMeta45 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT101, tmpMeta44, _OMC_LIT106);
                        tmpMeta46 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp2, _OMC_LIT123, tmpMeta45);
                        _exp2 = tmpMeta46;

                        tmpMeta47 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _OMC_LIT125, _OMC_LIT126, _exp2);
                        _exp2 = tmpMeta47;
                      }
                    }

                    tmpMeta48 = mmc_mk_box4(15, &DAE_Exp_IFEXP__desc, _OMC_LIT130, _OMC_LIT131, _exp2);
                    _exp2 = tmpMeta48;

                    { /* match expression */
                      modelica_metatype tmp52_1;
                      tmp52_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6)));
                      {
                        modelica_metatype _dim = NULL;
                        volatile mmc_switch_type tmp52;
                        int tmp53;
                        // _dim has no default value.
                        tmp52 = 0;
                        for (; tmp52 < 2; tmp52++) {
                          switch (MMC_SWITCH_CAST(tmp52)) {
                          case 0: {
                            modelica_metatype tmpMeta54;
                            modelica_metatype tmpMeta55;
                            modelica_metatype tmpMeta56;
                            modelica_metatype tmpMeta57;
                            modelica_metatype tmpMeta58;
                            if (mmc__uniontype__metarecord__typedef__equal(tmp52_1,6,2) == 0) goto tmp51_end;
                            tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp52_1), 3));
                            if (listEmpty(tmpMeta54)) goto tmp51_end;
                            tmpMeta55 = MMC_CAR(tmpMeta54);
                            tmpMeta56 = MMC_CDR(tmpMeta54);
                            if (!listEmpty(tmpMeta56)) goto tmp51_end;
                            _dim = tmpMeta55;
                            /* Pattern matching succeeded */
                            tmpMeta57 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _exp, _exp2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), _OMC_LIT48);
                            tmpMeta58 = mmc_mk_box7(11, &BackendDAE_Equation_FOR__EQUATION__desc, _OMC_LIT120, _OMC_LIT132, omc_DAEUtil_dimExp(threadData, _dim), tmpMeta57, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), _OMC_LIT48);
                            tmpMeta49 = tmpMeta58;
                            goto tmp51_done;
                          }
                          case 1: {
                            modelica_metatype tmpMeta59;
                            
                            /* Pattern matching succeeded */
                            tmpMeta59 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _exp, _exp2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 10))), _OMC_LIT48);
                            tmpMeta49 = tmpMeta59;
                            goto tmp51_done;
                          }
                          }
                          goto tmp51_end;
                          tmp51_end: ;
                        }
                        goto goto_50;
                        goto_50:;
                        goto goto_6;
                        goto tmp51_done;
                        tmp51_done:;
                      }
                    }
                    _eq = tmpMeta49;

                    tmpMeta60 = mmc_mk_cons(_eq, _lstEqs);
                    _lstEqs = tmpMeta60;
                  }
                }

                tmpMeta62 = MMC_TAGPTR(mmc_alloc_words(11));
                memcpy(MMC_UNTAGPTR(tmpMeta62), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta62))[3] = omc_BackendEquation_listEquation(threadData, listReverse(_lstEqs));
                _syst = tmpMeta62;

                if((stringEqual(_solverMethod, _OMC_LIT113)))
                {
                  tmp63 = ((modelica_integer) 1); tmp64 = 1; tmp65 = omc_BackendEquation_getNumberOfEquations(threadData, _eqs);
                  if(!(((tmp64 > 0) && (tmp63 > tmp65)) || ((tmp64 < 0) && (tmp63 < tmp65))))
                  {
                    modelica_integer _i;
                    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp63, tmp65); _i += tmp64)
                    {
                      _eq = omc_BackendEquation_get(threadData, _eqs, _i);

                      _eq = omc_BackendEquation_traverseExpsOfEquation(threadData, _eq, boxvar_SynchronousFeatures_shiftDerVars1, _derVars, NULL);

                      _eqs = omc_BackendEquation_setAtIndex(threadData, _eqs, _i, _eq);
                    }
                  }
                }

                _shared = omc_SynchronousFeatures_markClockedStates(threadData, _syst, _shared, _derVars);
                tmpMeta5 = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
                goto tmp9_done;
              }
              }
              goto tmp9_end;
              tmp9_end: ;
            }
            goto goto_6;
            goto_6:;
            MMC_THROW_INTERNAL();
            goto tmp9_done;
            tmp9_done:;
          }
        }__omcQ_24tmpVar2 = tmpMeta5;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp66 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  _outSysts = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_shared) { *out_shared = _shared; }
  return _outSysts;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SynchronousFeatures_hasBoolClockWhenClause(threadData_t *threadData, modelica_metatype _eqn)
{
  modelica_boolean _hasBool;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _hasBool = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqn;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,4) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          if (0 != tmp6) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          if (listEmpty(tmpMeta8)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,2) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,13,3) == 0) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp2_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (9 != MMC_STRLEN(tmpMeta13) || strcmp(MMC_STRINGDATA(_OMC_LIT133), MMC_STRINGDATA(tmpMeta13)) != 0) goto tmp2_end;
          if (!listEmpty(tmpMeta10)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _hasBool = 1 /* true */;
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
  return _hasBool;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SynchronousFeatures_hasBoolClockWhenClause(threadData_t *threadData, modelica_metatype _eqn)
{
  modelica_boolean _hasBool;
  modelica_metatype out_hasBool;
  _hasBool = omc_SynchronousFeatures_hasBoolClockWhenClause(threadData, _eqn);
  out_hasBool = mmc_mk_icon(_hasBool);
  return out_hasBool;
}

DLLDirection
modelica_metatype omc_SynchronousFeatures_getBoolClockWhenClauses(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq, modelica_metatype __omcQ_24in_5FeqLst, modelica_metatype *out_eqLst)
{
  modelica_metatype _eq = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eq = __omcQ_24in_5Feq;
  _eqLst = __omcQ_24in_5FeqLst;
  if(omc_SynchronousFeatures_hasBoolClockWhenClause(threadData, _eq))
  {
    tmpMeta1 = mmc_mk_cons(_eq, _eqLst);
    _eqLst = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  if (out_eqLst) { *out_eqLst = _eqLst; }
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_createBoolClockWhenClauses(threadData_t *threadData, modelica_metatype _inShared, modelica_metatype _inRemovedEqs)
{
  modelica_metatype _outRemovedEqs = NULL;
  modelica_metatype _basePartition = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outRemovedEqs = _inRemovedEqs;
  // _basePartition has no default value.
  tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 18)))), 2))));
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp15, tmp17); _i += tmp16)
    {
      _basePartition = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inShared), 18)))), 2))),_i) /* DAE.ASUB */;

      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_basePartition), 2)));
        {
          modelica_metatype _c = NULL;
          modelica_metatype _e = NULL;
          modelica_metatype _whenEq = NULL;
          modelica_metatype _eq = NULL;
          volatile mmc_switch_type tmp4;
          int tmp5;
          // _c has no default value.
          // _e has no default value.
          // _whenEq has no default value.
          // _eq has no default value.
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
              tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
              
              _c = tmpMeta6;
              /* Pattern matching succeeded */
              tmpMeta8 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_i));
              tmpMeta7 = mmc_mk_cons(tmpMeta8, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta9 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _OMC_LIT134, tmpMeta7, _OMC_LIT136);
              _e = tmpMeta9;

              tmpMeta11 = mmc_mk_box3(7, &BackendDAE_WhenOperator_NORETCALL__desc, _e, _OMC_LIT45);
              tmpMeta10 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
              tmpMeta12 = mmc_mk_box4(3, &BackendDAE_WhenEquation_WHEN__STMTS__desc, _c, tmpMeta10, mmc_mk_none());
              _whenEq = tmpMeta12;

              tmpMeta13 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(((modelica_integer) 0)), _whenEq, _OMC_LIT45, _OMC_LIT48);
              _eq = tmpMeta13;
              tmpMeta14 = mmc_mk_cons(_eq, _outRemovedEqs);
              tmpMeta1 = tmpMeta14;
              goto tmp3_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta1 = _outRemovedEqs;
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
      _outRemovedEqs = tmpMeta1;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outRemovedEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SynchronousFeatures_clockPartitioning1(threadData_t *threadData, modelica_metatype _inSyst, modelica_metatype _inShared)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _contSysts = NULL;
  modelica_metatype _clockedSysts = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _holdComps = NULL;
  modelica_metatype _unpartRemEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _syst has no default value.
  // _contSysts has no default value.
  // _clockedSysts has no default value.
  _shared = _inShared;
  // _systs has no default value.
  // _holdComps has no default value.
  // _unpartRemEqs has no default value.
  _syst = omc_SynchronousFeatures_substitutePartitionOpExps(threadData, _inSyst, _inShared);

  _contSysts = omc_SynchronousFeatures_baseClockPartitioning(threadData, _syst, _shared ,&_clockedSysts ,&_unpartRemEqs);

  _contSysts = omc_SynchronousFeatures_removeHoldExpsSyst(threadData, _contSysts ,&_holdComps);

  _clockedSysts = omc_SynchronousFeatures_subClockPartitioning1(threadData, _clockedSysts, _shared, _holdComps ,&_shared);

  _unpartRemEqs = omc_SynchronousFeatures_createBoolClockWhenClauses(threadData, _shared, _unpartRemEqs);

  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[7] = omc_BackendEquation_addList(threadData, _unpartRemEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))));
  _shared = tmpMeta1;

  _systs = listAppend(_contSysts, _clockedSysts);

  tmpMeta2 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta2;

  if((!listEmpty(_clockedSysts)))
  {
    if(omc_Flags_isSet(threadData, _OMC_LIT143))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT137),stdout);

      omc_BackendDump_dumpEqSystems(threadData, _systs, _OMC_LIT138);

      omc_BackendDump_dumpBasePartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18)))), 2))), _OMC_LIT139);

      omc_BackendDump_dumpSubPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18)))), 3))), _OMC_LIT140);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_SynchronousFeatures_contPartitioning(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _clockedSysts = NULL;
  modelica_metatype _clockedSysts1 = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _syst = NULL;
  modelica_metatype _unpartRemEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _systs has no default value.
  // _clockedSysts has no default value.
  // _clockedSysts1 has no default value.
  // _shared has no default value.
  // _syst has no default value.
  // _unpartRemEqs has no default value.
  _clockedSysts = omc_List_splitOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 2))), boxvar_BackendDAEUtil_isClockedSyst ,&_systs);

  _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)));

  if((!listEmpty(_systs)))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
    tmpMeta2 = omc_BackendDAEOptimize_collapseIndependentBlocks(threadData, tmpMeta1);
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_CAR(tmpMeta3);
    tmpMeta5 = MMC_CDR(tmpMeta3);
    if (!listEmpty(tmpMeta5)) MMC_THROW_INTERNAL();
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
    _syst = tmpMeta4;
    _shared = tmpMeta6;

    _systs = omc_SynchronousFeatures_baseClockPartitioning(threadData, _syst, _shared ,&_clockedSysts1 ,&_unpartRemEqs);

    {
      if(!listEmpty(_clockedSysts1))
      {
        {
          FILE_INFO info = {"/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/SynchronousFeatures.mo",140,5,140,97,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT144));
        }
      }
    }

    tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(22));
    memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[7] = omc_BackendEquation_addList(threadData, _unpartRemEqs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 7))));
    _shared = tmpMeta8;
  }

  tmpMeta9 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, listAppend(_systs, _clockedSysts), _shared);
  _outDAE = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_SynchronousFeatures_synchronousFeatures(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _contSysts = NULL;
  modelica_metatype _clockedSysts = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _systs has no default value.
  // _contSysts has no default value.
  // _clockedSysts has no default value.
  // _shared has no default value.
  _clockedSysts = omc_List_splitOnTrue(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 2))), boxvar_BackendDAEUtil_isClockedSyst ,&_contSysts);

  if((!listEmpty(_clockedSysts)))
  {
    _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)));

    _clockedSysts = omc_SynchronousFeatures_treatClockedStates(threadData, _clockedSysts, _shared ,&_shared);

    _systs = listAppend(_contSysts, _clockedSysts);

    tmpMeta1 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
    _outDAE = tmpMeta1;

    if(omc_Flags_isSet(threadData, _OMC_LIT143))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT145),stdout);

      omc_BackendDump_dumpEqSystems(threadData, _systs, _OMC_LIT138);

      omc_BackendDump_dumpBasePartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18)))), 2))), _OMC_LIT139);

      omc_BackendDump_dumpSubPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 18)))), 3))), _OMC_LIT140);
    }
  }
  else
  {
    _outDAE = _inDAE;
  }
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_metatype omc_SynchronousFeatures_clockPartitioning(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inDAE;
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _shared has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _syst = tmpMeta7;
          _shared = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SynchronousFeatures_clockPartitioning1(threadData, _syst, _shared);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta10 = omc_BackendDAEOptimize_collapseIndependentBlocks(threadData, _inDAE);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (listEmpty(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_CAR(tmpMeta11);
          tmpMeta13 = MMC_CDR(tmpMeta11);
          if (!listEmpty(tmpMeta13)) goto goto_2;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
          _syst = tmpMeta12;
          _shared = tmpMeta14;
          tmpMeta1 = omc_SynchronousFeatures_clockPartitioning1(threadData, _syst, _shared);
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
  _outDAE = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

