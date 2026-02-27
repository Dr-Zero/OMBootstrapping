#include "omc_simulation_settings.h"
#include "CommonSubExpression.h"
#define _OMC_LIT0_data "ASSIGN_CSE: eqs{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,16,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,2,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,1,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "   sharedVars{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,14,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "   aliasVars{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,13,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "SHORTCUT_CSE: eqs{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,18,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "   sharedVar{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,13,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,0,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT8,0.0);
#define _OMC_LIT8 MMC_REFREALLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT7,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT10,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT12,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,5) {&BackendDAE_IndexType_SOLVABLE__desc,}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,5) {&AvlSetInt_Tree_EMPTY__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "$cseb"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,5,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "  - cse binary expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,27,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data " (counter: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,11,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data ", id: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,6,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,2,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "dumpCSE_verbose"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,15,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Additional output for CSE module."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,33,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(119)),_OMC_LIT24,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "smooth"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,6,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "noEvent"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,7,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "semiLinear"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,10,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "homotopy"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,8,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "traverse "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,9,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,1,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "  - substitute cse binary: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,27,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,3) {&BackendDAE_EquationKind_BINDING__EQUATION__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT36,_OMC_LIT13}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "collect statistics\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,60,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "\nstart substitution\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,61,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "########### Updated Variable List ###########"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,45,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "########### Updated Equation List ###########"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,45,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "dumpCSE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,7,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),_OMC_LIT42,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT26}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "$cse"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,4,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "This should never appear\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,25,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,5) {&DAE_Type_T__STRING__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,6) {&DAE_Type_T__BOOL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,2,7) {&DAE_Type_T__CLOCK__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "  - createReturnExp failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,31,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/BackEnd/CommonSubExpression.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,83,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT53_6,1.770631566e9);
#define _OMC_LIT53_6 MMC_REFREALLIT(_OMC_LIT_STRUCT53_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT52,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1487)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1487)),MMC_IMMEDIATE(MMC_TAGFIXNUM(114)),_OMC_LIT53_6}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "acos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,4,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "asin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,4,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "atan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,4,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "atan2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,5,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "cos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,3,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "cosh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,4,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "exp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,3,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "log"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,3,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "log10"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,5,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "sin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,3,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "sinh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,4,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "tan"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,3,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "tanh"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,4,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "wfcAdvanced"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,11,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "wrapFunctionCalls ignores more then default cases, e.g. exp, sin, cos, log, (experimental flag)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,95,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT67,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT68,_OMC_LIT69,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "$_round"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,7,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "$getPart"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,8,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "abs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,3,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "actualStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,12,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "backSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,10,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "cardinality"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,11,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "ceil"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,4,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "change"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,6,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Clock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,5,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "delay"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,5,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "div"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,3,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "edge"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "firstTick"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,9,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "floor"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,5,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "getInstanceName"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,15,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "hold"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,7,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "inStream"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,8,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,7,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "Integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,7,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "interval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,8,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "mod"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,3,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "noClock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,7,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "pre"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,3,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "previous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,8,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "reinit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,6,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "rem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,3,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "sample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,6,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "shiftSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,11,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "sign"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,4,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "spatialDistribution"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,19,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "sqrt"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,4,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "String"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,6,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "subSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,9,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "sum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,3,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "superSample"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,11,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "terminal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,8,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "mergeCSETuples: This should never appear! (2)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,46,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "mergeCSETuples: This should never appear! (1)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,46,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT112,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT112 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT112)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT113,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT113 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "Failed to elaborate expression: %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,35,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT115,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT114}};
#define _OMC_LIT115 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT115)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT116,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(159)),_OMC_LIT112,_OMC_LIT113,_OMC_LIT115}};
#define _OMC_LIT116 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data " This should never happen, Error in wrapFunctionCalls_analysis3. Trying to recover."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,83,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,1,6) {&DAE_ComponentRef_WILD__desc,}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT120,3,9) {&DAE_Exp_CREF__desc,_OMC_LIT118,_OMC_LIT119}};
#define _OMC_LIT120 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "wrapFunctionCalls_analysis (COMPLEX_EQUATION)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,45,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "wrapFunctionCalls_analysis (EQUATION)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,37,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "addConstantCseVarsToGlobalKnownVarHT failed. Reached else case that should not be reachable while handling CSE expression:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,123,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT124_6,1.770631566e9);
#define _OMC_LIT124_6 MMC_REFREALLIT(_OMC_LIT_STRUCT124_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT124,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT52,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(697)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(697)),MMC_IMMEDIATE(MMC_TAGFIXNUM(215)),_OMC_LIT124_6}};
#define _OMC_LIT124 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "globalKnownVars:\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,58,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "\nTraverse expandable array\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,68,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "\n--> cse-equation: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,19,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,3,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT129,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT129 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT129)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT130,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT129,_OMC_LIT13}};
#define _OMC_LIT130 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "wrapFunctionCalls_substitution (COMPLEX_EQUATION)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,49,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "isEquationRedundant? yes"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,24,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "isEquationRedundant? no"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,23,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "wrapFunctionCalls_substitution (EQUATION)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,41,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "simulation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,10,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT136,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT8}};
#define _OMC_LIT136 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT136)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT137,4,3) {&CommonSubExpression_CSE__Equation_CSE__EQUATION__desc,_OMC_LIT136,_OMC_LIT136,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT137 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "Start optimization module wrapFunctionCalls for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,48,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data " DAE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,5,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "###############################################################"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,63,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,3,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "Phase 0: Set up data structure\n###############################################################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,95,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "globalKnownVars before WFC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,26,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "globalKnownVarHT before algorithm\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,75,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "\n\nHandle system (belongs to "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,28,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data " DAE):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,7,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "Variables"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,9,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,9,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "\nPhase 1: Analysis\n###############################################################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,83,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "Hastable after analysis\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,65,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "\nExpandable Array after analysis"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,32,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "\n###############################################################\nNo function calls found. Exiting the algorithm...\n\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,117,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "\n\nPhase 2: Dependencies\n###############################################################\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,89,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "Hashtable after dependencies\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,70,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "\nExpandable Array after dependencies"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,36,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "\n\nPhase3: Substitution\n###############################################################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,87,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "Hashtable after substitution\n========================================\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,70,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "\nExpandable Array after substitution"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,36,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data "\n\nPhase 4: Create CSE-Equations\n###############################################################\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,97,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "After manipulating the system with postOptModule wrapFunctionCalls the system is unbalanced. This indicates that the original system is singular. You can use -d=dumpCSE and -d=dumpCSE_verbose for more information."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,213,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT161,1,3) {&BackendDAE_Matching_NO__MATCHING__desc,}};
#define _OMC_LIT161 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "\n\n\n###############################################################\nFinal Results\n###############################################################\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,145,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "########### Updated Variable List ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,35,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,1,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "########### Updated Equation List ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,35,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data "########### Updated globalKnownVars ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,37,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "\n########### CSE Replacements"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,29,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "\n\n###############################################################"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,65,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "Final EqSystem"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,14,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data " - "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,3,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
#define _OMC_LIT171_data " - {"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT171,4,_OMC_LIT171_data);
#define _OMC_LIT171 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT171)
#include "util/modelica.h"

#include "CommonSubExpression_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_CommonSubExpression_printCSE(threadData_t *threadData, modelica_metatype _cse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_printCSE,2,0) {(void*) boxptr_CommonSubExpression_printCSE,0}};
#define boxvar_CommonSubExpression_printCSE MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_printCSE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getTopLevelFactors(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_getTopLevelFactors,2,0) {(void*) boxptr_CommonSubExpression_getTopLevelFactors,0}};
#define boxvar_CommonSubExpression_getTopLevelFactors MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_getTopLevelFactors)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_cancelExpressions(threadData_t *threadData, modelica_metatype _e1In, modelica_metatype _e2In, modelica_metatype *out_e1Out, modelica_metatype *out_e2Out);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_cancelExpressions(threadData_t *threadData, modelica_metatype _e1In, modelica_metatype _e2In, modelica_metatype *out_e1Out, modelica_metatype *out_e2Out);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_cancelExpressions,2,0) {(void*) boxptr_CommonSubExpression_cancelExpressions,0}};
#define boxvar_CommonSubExpression_cancelExpressions MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_cancelExpressions)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData_t *threadData, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_hasAlgebraicOperationsOnly(threadData_t *threadData, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_hasAlgebraicOperationsOnly,2,0) {(void*) boxptr_CommonSubExpression_hasAlgebraicOperationsOnly,0}};
#define boxvar_CommonSubExpression_hasAlgebraicOperationsOnly MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_hasAlgebraicOperationsOnly)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpressionUpdate(threadData_t *threadData, modelica_metatype _tplsIn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _sysIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpressionUpdate,2,0) {(void*) boxptr_CommonSubExpression_commonSubExpressionUpdate,0}};
#define boxvar_CommonSubExpression_commonSubExpressionUpdate MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpressionUpdate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getCSE3(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _vars, modelica_metatype _eqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_getCSE3,2,0) {(void*) boxptr_CommonSubExpression_getCSE3,0}};
#define boxvar_CommonSubExpression_getCSE3 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_getCSE3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getCSE2(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _vars, modelica_metatype _eqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_getCSE2,2,0) {(void*) boxptr_CommonSubExpression_getCSE2,0}};
#define boxvar_CommonSubExpression_getCSE2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_getCSE2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_shortenPaths(threadData_t *threadData, modelica_metatype _allPartitions, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn, modelica_boolean _isInitial);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_shortenPaths(threadData_t *threadData, modelica_metatype _allPartitions, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn, modelica_metatype _isInitial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_shortenPaths,2,0) {(void*) boxptr_CommonSubExpression_shortenPaths,0}};
#define boxvar_CommonSubExpression_shortenPaths MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_shortenPaths)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpressionFind(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _varsIn, modelica_metatype _eqsIn, modelica_boolean _isInitial);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_commonSubExpressionFind(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _varsIn, modelica_metatype _eqsIn, modelica_metatype _isInitial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpressionFind,2,0) {(void*) boxptr_CommonSubExpression_commonSubExpressionFind,0}};
#define boxvar_CommonSubExpression_commonSubExpressionFind MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpressionFind)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpression(threadData_t *threadData, modelica_metatype _sysIn, modelica_metatype _sharedIn, modelica_metatype *out_sharedOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpression,2,0) {(void*) boxptr_CommonSubExpression_commonSubExpression,0}};
#define boxvar_CommonSubExpression_commonSubExpression MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_commonSubExpression)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_checkOp(threadData_t *threadData, modelica_metatype _inOp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_checkOp(threadData_t *threadData, modelica_metatype _inOp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_checkOp,2,0) {(void*) boxptr_CommonSubExpression_checkOp,0}};
#define boxvar_CommonSubExpression_checkOp MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_checkOp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCommutative(threadData_t *threadData, modelica_metatype _inOp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCommutative(threadData_t *threadData, modelica_metatype _inOp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCommutative,2,0) {(void*) boxptr_CommonSubExpression_isCommutative,0}};
#define boxvar_CommonSubExpression_isCommutative MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCommutative)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createStatistics__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics__main,2,0) {(void*) boxptr_CommonSubExpression_createStatistics__main,0}};
#define boxvar_CommonSubExpression_createStatistics__main MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics__main)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics1,2,0) {(void*) boxptr_CommonSubExpression_createStatistics1,0}};
#define boxvar_CommonSubExpression_createStatistics1 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics,2,0) {(void*) boxptr_CommonSubExpression_createStatistics,0}};
#define boxvar_CommonSubExpression_createStatistics MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createStatistics)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_substituteCSE__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE__main,2,0) {(void*) boxptr_CommonSubExpression_substituteCSE__main,0}};
#define boxvar_CommonSubExpression_substituteCSE__main MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE__main)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE1,2,0) {(void*) boxptr_CommonSubExpression_substituteCSE1,0}};
#define boxvar_CommonSubExpression_substituteCSE1 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE,2,0) {(void*) boxptr_CommonSubExpression_substituteCSE,0}};
#define boxvar_CommonSubExpression_substituteCSE MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteCSE)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_CSE1(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_integer _inIndex, modelica_metatype *out_outShared, modelica_integer *out_outIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_CSE1(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inIndex, modelica_metatype *out_outShared, modelica_metatype *out_outIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_CSE1,2,0) {(void*) boxptr_CommonSubExpression_CSE1,0}};
#define boxvar_CommonSubExpression_CSE1 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_CSE1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createVarsForExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inAccumVarLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createVarsForExp,2,0) {(void*) boxptr_CommonSubExpression_createVarsForExp,0}};
#define boxvar_CommonSubExpression_createVarsForExp MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createVarsForExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createVarsForExp__onlyCSECrefs(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inAccumVarLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createVarsForExp__onlyCSECrefs,2,0) {(void*) boxptr_CommonSubExpression_createVarsForExp__onlyCSECrefs,0}};
#define boxvar_CommonSubExpression_createVarsForExp__onlyCSECrefs MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createVarsForExp__onlyCSECrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createReturnExp(threadData_t *threadData, modelica_metatype _inType, modelica_integer _inIndex, modelica_string _inPrefix, modelica_boolean _inComplex, modelica_integer *out_outIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createReturnExp(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _inIndex, modelica_metatype _inPrefix, modelica_metatype _inComplex, modelica_metatype *out_outIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createReturnExp,2,0) {(void*) boxptr_CommonSubExpression_createReturnExp,0}};
#define boxvar_CommonSubExpression_createReturnExp MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createReturnExp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallRecordConstructor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallRecordConstructor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallRecordConstructor,2,0) {(void*) boxptr_CommonSubExpression_isCallRecordConstructor,0}};
#define boxvar_CommonSubExpression_isCallRecordConstructor MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallRecordConstructor)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isSkipCase__advanced(threadData_t *threadData, modelica_metatype _inCall);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isSkipCase__advanced(threadData_t *threadData, modelica_metatype _inCall);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isSkipCase__advanced,2,0) {(void*) boxptr_CommonSubExpression_isSkipCase__advanced,0}};
#define boxvar_CommonSubExpression_isSkipCase__advanced MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isSkipCase__advanced)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isSkipCase(threadData_t *threadData, modelica_metatype _inCall, modelica_metatype _functionTree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isSkipCase(threadData_t *threadData, modelica_metatype _inCall, modelica_metatype _functionTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isSkipCase,2,0) {(void*) boxptr_CommonSubExpression_isSkipCase,0}};
#define boxvar_CommonSubExpression_isSkipCase MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isSkipCase)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isWildCref(threadData_t *threadData, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isWildCref(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isWildCref,2,0) {(void*) boxptr_CommonSubExpression_isWildCref,0}};
#define boxvar_CommonSubExpression_isWildCref MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isWildCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_mergeCSETuples2(threadData_t *threadData, modelica_metatype _inExpLst1, modelica_metatype _inExpLst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_mergeCSETuples2,2,0) {(void*) boxptr_CommonSubExpression_mergeCSETuples2,0}};
#define boxvar_CommonSubExpression_mergeCSETuples2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_mergeCSETuples2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_mergeCSETuples(threadData_t *threadData, modelica_metatype _inCref1, modelica_metatype _inCref2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_mergeCSETuples,2,0) {(void*) boxptr_CommonSubExpression_mergeCSETuples,0}};
#define boxvar_CommonSubExpression_mergeCSETuples MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_mergeCSETuples)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndRecord(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndRecord(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndRecord,2,0) {(void*) boxptr_CommonSubExpression_isCallAndRecord,0}};
#define boxvar_CommonSubExpression_isCallAndRecord MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndRecord)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndTuple(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndTuple(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndTuple,2,0) {(void*) boxptr_CommonSubExpression_isCallAndTuple,0}};
#define boxvar_CommonSubExpression_isCallAndTuple MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndTuple)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isConstAndCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isConstAndCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isConstAndCall,2,0) {(void*) boxptr_CommonSubExpression_isConstAndCall,0}};
#define boxvar_CommonSubExpression_isConstAndCall MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isConstAndCall)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isTsubAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isTsubAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isTsubAndCref,2,0) {(void*) boxptr_CommonSubExpression_isTsubAndCref,0}};
#define boxvar_CommonSubExpression_isTsubAndCref MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isTsubAndCref)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndCref,2,0) {(void*) boxptr_CommonSubExpression_isCallAndCref,0}};
#define boxvar_CommonSubExpression_isCallAndCref MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCallAndCref)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCall(threadData_t *threadData, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCall(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCall,2,0) {(void*) boxptr_CommonSubExpression_isCall,0}};
#define boxvar_CommonSubExpression_isCall MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_isEquationRedundant__flatten2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_boolean *out_result);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant__flatten2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_metatype *out_result);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant__flatten2,2,0) {(void*) boxptr_CommonSubExpression_isEquationRedundant__flatten2,0}};
#define boxvar_CommonSubExpression_isEquationRedundant__flatten2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant__flatten2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_isEquationRedundant__flatten(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_boolean *out_outB, modelica_boolean *out_isGlobalKnown);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant__flatten(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_metatype *out_outB, modelica_metatype *out_isGlobalKnown);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant__flatten,2,0) {(void*) boxptr_CommonSubExpression_isEquationRedundant__flatten,0}};
#define boxvar_CommonSubExpression_isEquationRedundant__flatten MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant__flatten)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isEquationRedundant2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant2,2,0) {(void*) boxptr_CommonSubExpression_isEquationRedundant2,0}};
#define boxvar_CommonSubExpression_isEquationRedundant2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isEquationRedundant(threadData_t *threadData, modelica_metatype _inEq);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant(threadData_t *threadData, modelica_metatype _inEq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant,2,0) {(void*) boxptr_CommonSubExpression_isEquationRedundant,0}};
#define boxvar_CommonSubExpression_isEquationRedundant MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_isEquationRedundant)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getTheRightPattern(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype *out_outExp2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_getTheRightPattern,2,0) {(void*) boxptr_CommonSubExpression_getTheRightPattern,0}};
#define boxvar_CommonSubExpression_getTheRightPattern MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_getTheRightPattern)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_wrapFunctionCalls__analysis3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis3,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__analysis3,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__analysis3 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis2,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__analysis2,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__analysis2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createCrefForTsub(threadData_t *threadData, modelica_integer _length, modelica_integer _ix, modelica_metatype _cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createCrefForTsub(threadData_t *threadData, modelica_metatype _length, modelica_metatype _ix, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createCrefForTsub,2,0) {(void*) boxptr_CommonSubExpression_createCrefForTsub,0}};
#define boxvar_CommonSubExpression_createCrefForTsub MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createCrefForTsub)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__analysis,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__analysis MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__analysis)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData_t *threadData, modelica_metatype _cse_crExp, modelica_metatype __omcQ_24in_5FglobalKnownVarHT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT,2,0) {(void*) boxptr_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT,0}};
#define boxvar_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _callArgs, modelica_metatype _globalKnownVarHT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_allArgsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _callArgs, modelica_metatype _globalKnownVarHT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_allArgsInGlobalKnownVars,2,0) {(void*) boxptr_CommonSubExpression_allArgsInGlobalKnownVars,0}};
#define boxvar_CommonSubExpression_allArgsInGlobalKnownVars MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_allArgsInGlobalKnownVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_determineDependencies2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_determineDependencies2,2,0) {(void*) boxptr_CommonSubExpression_determineDependencies2,0}};
#define boxvar_CommonSubExpression_determineDependencies2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_determineDependencies2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_determineDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype _HT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_determineDependencies,2,0) {(void*) boxptr_CommonSubExpression_determineDependencies,0}};
#define boxvar_CommonSubExpression_determineDependencies MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_determineDependencies)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createCseEquations(threadData_t *threadData, modelica_metatype _exarray, modelica_metatype __omcQ_24in_5ForderedEqs, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype *out_orderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_globalKnownVarHT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_createCseEquations,2,0) {(void*) boxptr_CommonSubExpression_createCseEquations,0}};
#define boxvar_CommonSubExpression_createCseEquations MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_createCseEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteExp2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_substituteExp2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteExp2,2,0) {(void*) boxptr_CommonSubExpression_substituteExp2,0}};
#define boxvar_CommonSubExpression_substituteExp2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteExp2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKey, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteExp,2,0) {(void*) boxptr_CommonSubExpression_substituteExp,0}};
#define boxvar_CommonSubExpression_substituteExp MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteDependencies(threadData_t *threadData, modelica_metatype _inDependencies, modelica_metatype __omcQ_24in_5Fht, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype _inCall, modelica_metatype _inCSE, modelica_metatype *out_exarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteDependencies,2,0) {(void*) boxptr_CommonSubExpression_substituteDependencies,0}};
#define boxvar_CommonSubExpression_substituteDependencies MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_substituteDependencies)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution3,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__substitution3,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__substitution3 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution2,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__substitution2,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__substitution2 MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution,2,0) {(void*) boxptr_CommonSubExpression_wrapFunctionCalls__substitution,0}};
#define boxvar_CommonSubExpression_wrapFunctionCalls__substitution MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_wrapFunctionCalls__substitution)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_findCallsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTuple, modelica_metatype *out_outTuple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_findCallsInGlobalKnownVars,2,0) {(void*) boxptr_CommonSubExpression_findCallsInGlobalKnownVars,0}};
#define boxvar_CommonSubExpression_findCallsInGlobalKnownVars MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_findCallsInGlobalKnownVars)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_VarToGlobalKnownVarHT(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inGlobalKnownVarHT, modelica_metatype *out_outGlobalKnownVarHT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_VarToGlobalKnownVarHT,2,0) {(void*) boxptr_CommonSubExpression_VarToGlobalKnownVarHT,0}};
#define boxvar_CommonSubExpression_VarToGlobalKnownVarHT MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_VarToGlobalKnownVarHT)
PROTECTED_FUNCTION_STATIC modelica_string omc_CommonSubExpression_printCSEEquation(threadData_t *threadData, modelica_metatype _cseEquation);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CommonSubExpression_printCSEEquation,2,0) {(void*) boxptr_CommonSubExpression_printCSEEquation,0}};
#define boxvar_CommonSubExpression_printCSEEquation MMC_REFSTRUCTLIT(boxvar_lit_CommonSubExpression_printCSEEquation)

PROTECTED_FUNCTION_STATIC modelica_string omc_CommonSubExpression_printCSE(threadData_t *threadData, modelica_metatype _cse)
{
  modelica_string _s = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cse;
    {
      modelica_integer _sharedVar;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _sharedVars = NULL;
      modelica_metatype _aliasVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sharedVar has no default value.
      // _eqIdcs has no default value.
      // _sharedVars has no default value.
      // _aliasVars has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _eqIdcs = tmpMeta6;
          _sharedVars = tmpMeta7;
          _aliasVars = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT0,stringDelimitList(omc_List_map(threadData, _eqIdcs, boxvar_intString), _OMC_LIT1));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT2);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT3);
          tmpMeta12 = stringAppend(tmpMeta11,stringDelimitList(omc_List_map(threadData, _sharedVars, boxvar_intString), _OMC_LIT1));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT2);
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT4);
          tmpMeta15 = stringAppend(tmpMeta14,stringDelimitList(omc_List_map(threadData, _aliasVars, boxvar_intString), _OMC_LIT1));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT2);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          _eqIdcs = tmpMeta17;
          _sharedVar = tmp19  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta20 = stringAppend(_OMC_LIT5,stringDelimitList(omc_List_map(threadData, _eqIdcs, boxvar_intString), _OMC_LIT1));
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT2);
          tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT6);
          tmpMeta23 = stringAppend(tmpMeta22,intString(_sharedVar));
          tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT2);
          tmp1 = tmpMeta24;
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
  _s = tmp1;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getTopLevelFactors(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lstIn)
{
  modelica_metatype _lstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _eLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1 has no default value.
      // _e2 has no default value.
      // _eLst has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta6;
          _e2 = tmpMeta8;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _eLst = omc_CommonSubExpression_getTopLevelFactors(threadData, _e1, _lstIn);
          tmpMeta1 = omc_CommonSubExpression_getTopLevelFactors(threadData, _e2, _eLst);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          
          _e1 = tmpMeta9;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta10 = mmc_mk_cons(_e1, _lstIn);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          _e1 = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(_e1, _lstIn);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lstIn;
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
  _lstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lstOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_cancelExpressions(threadData_t *threadData, modelica_metatype _e1In, modelica_metatype _e2In, modelica_metatype *out_e1Out, modelica_metatype *out_e2Out)
{
  modelica_boolean _canceled;
  modelica_metatype _e1Out = NULL;
  modelica_metatype _e2Out = NULL;
  modelica_metatype _topLevelFactors1 = NULL;
  modelica_metatype _topLevelFactors2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _canceled = 0 /* false */;
  _e1Out = _e1In;
  _e2Out = _e2In;
  // _topLevelFactors1 has no default value.
  // _topLevelFactors2 has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _topLevelFactors1 = omc_CommonSubExpression_getTopLevelFactors(threadData, _e1In, tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _topLevelFactors2 = omc_CommonSubExpression_getTopLevelFactors(threadData, _e2In, tmpMeta2);

  if((!listEmpty(_topLevelFactors1)))
  {
    _topLevelFactors1 = omc_List_intersectionOnTrue(threadData, _topLevelFactors1, _topLevelFactors2, boxvar_Expression_expEqual);

    if((listLength(_topLevelFactors1) == ((modelica_integer) 1)))
    {
      _e1Out = omc_Expression_expDiv(threadData, _e1In, listHead(_topLevelFactors1));

      _e1Out = omc_ExpressionSimplify_simplify(threadData, _e1Out, NULL);

      _e2Out = omc_Expression_expDiv(threadData, _e2In, listHead(_topLevelFactors2));

      _e2Out = omc_ExpressionSimplify_simplify(threadData, _e2Out, NULL);

      _canceled = 1 /* true */;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_e1Out) { *out_e1Out = _e1Out; }
  if (out_e2Out) { *out_e2Out = _e2Out; }
  return _canceled;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_cancelExpressions(threadData_t *threadData, modelica_metatype _e1In, modelica_metatype _e2In, modelica_metatype *out_e1Out, modelica_metatype *out_e2Out)
{
  modelica_boolean _canceled;
  modelica_metatype out_canceled;
  _canceled = omc_CommonSubExpression_cancelExpressions(threadData, _e1In, _e2In, out_e1Out, out_e2Out);
  out_canceled = mmc_mk_icon(_canceled);
  /* skip box _e1Out; DAE.Exp */
  /* skip box _e2Out; DAE.Exp */
  return out_canceled;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _isAlgOut;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAlgOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
    {
      modelica_boolean _b;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      int tmp4;
      // _b has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta5;
          _e2 = tmpMeta6;
          /* Pattern matching succeeded */
          _b = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _e1);
          tmp1 = (_b && omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _e2));
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e1 = tmpMeta7;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _exp = _e1;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _isAlgOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isAlgOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_hasAlgebraicOperationsOnly(threadData_t *threadData, modelica_metatype _exp)
{
  modelica_boolean _isAlgOut;
  modelica_metatype out_isAlgOut;
  _isAlgOut = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _exp);
  out_isAlgOut = mmc_mk_icon(_isAlgOut);
  return out_isAlgOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpressionUpdate(threadData_t *threadData, modelica_metatype _tplsIn, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _sysIn)
{
  modelica_metatype _sysOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sysOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _tplsIn;
    tmp4_2 = _sysIn;
    {
      modelica_integer _sharedVar;
      modelica_integer _eqIdx1;
      modelica_integer _eqIdx2;
      modelica_integer _varIdx1;
      modelica_integer _varIdx2;
      modelica_integer _varIdx_remain;
      modelica_integer _varIdxAlias;
      modelica_integer _eqIdxDel;
      modelica_integer _n;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs2 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _var1 = NULL;
      modelica_metatype _var2 = NULL;
      modelica_metatype _var_remain = NULL;
      modelica_metatype _var_alias = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _eq2 = NULL;
      modelica_metatype _eqNew = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _varExp_remain = NULL;
      modelica_metatype _varExp_alias = NULL;
      modelica_metatype _lhs1 = NULL;
      modelica_metatype _rhs1 = NULL;
      modelica_metatype _lhs2 = NULL;
      modelica_metatype _rhs2 = NULL;
      modelica_metatype _varExp = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _eqLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sharedVar has no default value.
      // _eqIdx1 has no default value.
      // _eqIdx2 has no default value.
      // _varIdx1 has no default value.
      // _varIdx2 has no default value.
      // _varIdx_remain has no default value.
      // _varIdxAlias has no default value.
      // _eqIdxDel has no default value.
      // _n has no default value.
      // _eqIdcs has no default value.
      // _eqs1 has no default value.
      // _eqs2 has no default value.
      // _rest has no default value.
      // _var1 has no default value.
      // _var2 has no default value.
      // _var_remain has no default value.
      // _var_alias has no default value.
      // _repl has no default value.
      // _vars has no default value.
      // _var has no default value.
      // _eq1 has no default value.
      // _eq2 has no default value.
      // _eqNew has no default value.
      // _eqs has no default value.
      // _syst has no default value.
      // _varExp_remain has no default value.
      // _varExp_alias has no default value.
      // _lhs1 has no default value.
      // _rhs1 has no default value.
      // _lhs2 has no default value.
      // _rhs2 has no default value.
      // _varExp has no default value.
      // _cref has no default value.
      // _eqLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          _syst = tmp4_2;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          if (listEmpty(tmpMeta10)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmpMeta10);
          tmpMeta13 = MMC_CDR(tmpMeta10);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          if (!listEmpty(tmpMeta13)) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          if (listEmpty(tmpMeta15)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmpMeta15);
          tmpMeta17 = MMC_CDR(tmpMeta15);
          tmp18 = mmc_unbox_integer(tmpMeta16);
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmpMeta17);
          tmpMeta20 = MMC_CDR(tmpMeta17);
          tmp21 = mmc_unbox_integer(tmpMeta19);
          if (!listEmpty(tmpMeta20)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _eqIdx1 = tmp11  /* pattern as ty=Integer */;
          _eqIdx2 = tmp14  /* pattern as ty=Integer */;
          _varIdx1 = tmp18  /* pattern as ty=Integer */;
          _varIdx2 = tmp21  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          _syst = tmp4_2;
          _vars = tmpMeta22;
          _eqs = tmpMeta23;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _eqs1 = arrayGet(_mT, _varIdx1);

          _eqs2 = arrayGet(_mT, _varIdx2);

          _var1 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx1);

          _var2 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx2);

          if(omc_BackendVariable_isStateVar(threadData, _var1))
          {
            _varIdxAlias = _varIdx2;

            _varIdx_remain = _varIdx1;
          }
          else
          {
            if(omc_BackendVariable_isStateVar(threadData, _var2))
            {
              _varIdx_remain = _varIdx2;

              _varIdxAlias = _varIdx1;
            }
            else
            {
              if((listLength(_eqs2) <= listLength(_eqs1)))
              {
                _varIdxAlias = _varIdx2;

                _varIdx_remain = _varIdx1;
              }
              else
              {
                _varIdxAlias = _varIdx1;

                _varIdx_remain = _varIdx2;
              }
            }
          }

          if((listLength(_eqs2) <= listLength(_eqs1)))
          {
            _eqIdxDel = _eqIdx2;
          }
          else
          {
            _eqIdxDel = _eqIdx1;
          }

          _var_remain = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx_remain);

          _var_alias = omc_BackendVariable_getVarAt(threadData, _vars, _varIdxAlias);

          _cref = omc_BackendVariable_varCref(threadData, _var_alias);

          _varExp_remain = omc_BackendVariable_varExp(threadData, _var_remain);

          _varExp_alias = omc_BackendVariable_varExp(threadData, _var_alias);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cref, _varExp_remain, mmc_mk_none());

          _eqIdcs = arrayGet(_mT, _varIdxAlias);

          _eqLst = omc_BackendEquation_getList(threadData, _eqIdcs, _eqs);

          _eqs = omc_List_threadFold(threadData, _eqIdcs, _eqLst, boxvar_BackendEquation_setAtIndexFirst, _eqs);

          tmpMeta24 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _varExp_remain, _varExp_alias, _OMC_LIT11, _OMC_LIT14);
          omc_BackendEquation_setAtIndex(threadData, _eqs, _eqIdxDel, tmpMeta24);
          /* Tail recursive call */
          _tplsIn = _rest;
          _sysIn = _syst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
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
          modelica_integer tmp33;
          modelica_metatype tmpMeta34;
          modelica_integer tmp35;
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
          modelica_boolean tmp50;
          modelica_boolean tmp51;
          modelica_boolean tmp52;
          modelica_boolean tmp53;
          modelica_metatype tmpMeta54;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,1,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          if (listEmpty(tmpMeta27)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmpMeta27);
          tmpMeta29 = MMC_CDR(tmpMeta27);
          tmp30 = mmc_unbox_integer(tmpMeta28);
          if (listEmpty(tmpMeta29)) goto tmp3_end;
          tmpMeta31 = MMC_CAR(tmpMeta29);
          tmpMeta32 = MMC_CDR(tmpMeta29);
          tmp33 = mmc_unbox_integer(tmpMeta31);
          if (!listEmpty(tmpMeta32)) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 3));
          tmp35 = mmc_unbox_integer(tmpMeta34);
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _eqIdx1 = tmp30  /* pattern as ty=Integer */;
          _eqIdx2 = tmp33  /* pattern as ty=Integer */;
          _sharedVar = tmp35  /* pattern as ty=Integer */;
          _rest = tmpMeta26;
          _syst = tmp4_2;
          _vars = tmpMeta36;
          _eqs = tmpMeta37;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta38 = mmc_mk_cons(mmc_mk_integer(_eqIdx1), mmc_mk_cons(mmc_mk_integer(_eqIdx2), MMC_REFSTRUCTLIT(mmc_nil)));
          tmpMeta39 = omc_BackendEquation_getList(threadData, tmpMeta38, _eqs);
          if (listEmpty(tmpMeta39)) goto goto_2;
          tmpMeta40 = MMC_CAR(tmpMeta39);
          tmpMeta41 = MMC_CDR(tmpMeta39);
          if (listEmpty(tmpMeta41)) goto goto_2;
          tmpMeta42 = MMC_CAR(tmpMeta41);
          tmpMeta43 = MMC_CDR(tmpMeta41);
          if (!listEmpty(tmpMeta43)) goto goto_2;
          _eq1 = tmpMeta40;
          _eq2 = tmpMeta42;

          _var = omc_BackendVariable_getVarAt(threadData, _vars, _sharedVar);

          _varExp = omc_BackendVariable_varExp(threadData, _var);

          omc_Expression_typeof(threadData, _varExp);

          /* Pattern-matching assignment */
          tmpMeta44 = _eq1;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,0,4) == 0) goto goto_2;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 3));
          _lhs1 = tmpMeta45;
          _rhs1 = tmpMeta46;

          /* Pattern-matching assignment */
          tmpMeta47 = _eq2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta47,0,4) == 0) goto goto_2;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 2));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta47), 3));
          _lhs2 = tmpMeta48;
          _rhs2 = tmpMeta49;

          /* Pattern-matching assignment */
          tmp50 = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _lhs1);
          if (1 /* true */ != tmp50) goto goto_2;

          /* Pattern-matching assignment */
          tmp51 = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _rhs1);
          if (1 /* true */ != tmp51) goto goto_2;

          /* Pattern-matching assignment */
          tmp52 = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _lhs2);
          if (1 /* true */ != tmp52) goto goto_2;

          /* Pattern-matching assignment */
          tmp53 = omc_CommonSubExpression_hasAlgebraicOperationsOnly(threadData, _rhs2);
          if (1 /* true */ != tmp53) goto goto_2;

          _rhs1 = omc_ExpressionSolve_solve(threadData, _lhs1, _rhs1, _varExp, mmc_mk_none(), NULL);

          _lhs1 = omc_ExpressionSolve_solve(threadData, _lhs2, _rhs2, _varExp, mmc_mk_none(), NULL);

          omc_CommonSubExpression_cancelExpressions(threadData, _lhs1, _rhs1 ,&_lhs1 ,&_rhs1);

          _n = listLength(omc_Expression_getAllCrefs(threadData, omc_Expression_expSub(threadData, _lhs1, _rhs1)));

          if((_n <= ((modelica_integer) 2)))
          {
            tmpMeta54 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs1, _rhs1, _OMC_LIT11, _OMC_LIT14);
            _eqNew = tmpMeta54;

            omc_BackendEquation_setAtIndex(threadData, _eqs, _eqIdx1, _eqNew);
          }
          /* Tail recursive call */
          _tplsIn = _rest;
          _sysIn = _syst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta55 = MMC_CAR(tmp4_1);
          tmpMeta56 = MMC_CDR(tmp4_1);
          
          _rest = tmpMeta56;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tplsIn = _rest;
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
  _sysOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sysOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getCSE3(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _vars, modelica_metatype _eqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn)
{
  modelica_metatype _cseOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cseOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _eqIdx1;
      modelica_integer _eqIdx2;
      modelica_integer _varIdx1;
      modelica_integer _varIdx2;
      modelica_metatype _varIdcs1 = NULL;
      modelica_metatype _varIdcs2 = NULL;
      modelica_metatype _sharedVarIdcs = NULL;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _loop1 = NULL;
      modelica_metatype _loops = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _eq2 = NULL;
      modelica_metatype _var1 = NULL;
      modelica_metatype _var2 = NULL;
      modelica_metatype _varExp1 = NULL;
      modelica_metatype _varExp2 = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs1 = NULL;
      modelica_metatype _rhs2 = NULL;
      modelica_metatype _varMapArr = NULL;
      modelica_metatype _eqMapArr = NULL;
      modelica_metatype _cseLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqIdx1 has no default value.
      // _eqIdx2 has no default value.
      // _varIdx1 has no default value.
      // _varIdx2 has no default value.
      // _varIdcs1 has no default value.
      // _varIdcs2 has no default value.
      // _sharedVarIdcs has no default value.
      // _eqIdcs has no default value.
      // _loop1 has no default value.
      // _loops has no default value.
      // _eq1 has no default value.
      // _eq2 has no default value.
      // _var1 has no default value.
      // _var2 has no default value.
      // _varExp1 has no default value.
      // _varExp2 has no default value.
      // _lhs has no default value.
      // _rhs1 has no default value.
      // _rhs2 has no default value.
      // _varMapArr has no default value.
      // _eqMapArr has no default value.
      // _cseLst has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
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
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_cons(_partition, MMC_REFSTRUCTLIT(mmc_nil));
          _loops = omc_ResolveLoops_resolveLoops__findLoops(threadData, tmpMeta6, _m, _mT, 0 /* false */, NULL, NULL, NULL);

          _cseLst = _cseIn;

          {
            modelica_metatype _loop1;
            for (tmpMeta7 = _loops; !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _loop1 = MMC_CAR(tmpMeta7);
              /* Pattern-matching assignment */
              tmpMeta8 = _loop1;
              if (listEmpty(tmpMeta8)) goto goto_2;
              tmpMeta9 = MMC_CAR(tmpMeta8);
              tmpMeta10 = MMC_CDR(tmpMeta8);
              tmp11 = mmc_unbox_integer(tmpMeta9);
              if (listEmpty(tmpMeta10)) goto goto_2;
              tmpMeta12 = MMC_CAR(tmpMeta10);
              tmpMeta13 = MMC_CDR(tmpMeta10);
              tmp14 = mmc_unbox_integer(tmpMeta12);
              if (!listEmpty(tmpMeta13)) goto goto_2;
              _eqIdx1 = tmp11  /* pattern as ty=Integer */;
              _eqIdx2 = tmp14  /* pattern as ty=Integer */;

              _varIdcs1 = arrayGet(_m, _eqIdx1);

              _varIdcs2 = arrayGet(_m, _eqIdx2);

              _sharedVarIdcs = omc_List_intersection1OnTrue(threadData, _varIdcs1, _varIdcs2, boxvar_intEq ,&_varIdcs1 ,&_varIdcs2);

              /* Pattern-matching assignment */
              tmpMeta15 = _varIdcs1;
              if (listEmpty(tmpMeta15)) goto goto_2;
              tmpMeta16 = MMC_CAR(tmpMeta15);
              tmpMeta17 = MMC_CDR(tmpMeta15);
              tmp18 = mmc_unbox_integer(tmpMeta16);
              if (!listEmpty(tmpMeta17)) goto goto_2;
              _varIdx1 = tmp18  /* pattern as ty=Integer */;

              /* Pattern-matching assignment */
              tmpMeta19 = _varIdcs2;
              if (listEmpty(tmpMeta19)) goto goto_2;
              tmpMeta20 = MMC_CAR(tmpMeta19);
              tmpMeta21 = MMC_CDR(tmpMeta19);
              tmp22 = mmc_unbox_integer(tmpMeta20);
              if (!listEmpty(tmpMeta21)) goto goto_2;
              _varIdx2 = tmp22  /* pattern as ty=Integer */;

              /* Pattern-matching assignment */
              tmpMeta23 = omc_BackendEquation_getList(threadData, _loop1, _eqs);
              if (listEmpty(tmpMeta23)) goto goto_2;
              tmpMeta24 = MMC_CAR(tmpMeta23);
              tmpMeta25 = MMC_CDR(tmpMeta23);
              if (listEmpty(tmpMeta25)) goto goto_2;
              tmpMeta26 = MMC_CAR(tmpMeta25);
              tmpMeta27 = MMC_CDR(tmpMeta25);
              if (!listEmpty(tmpMeta27)) goto goto_2;
              _eq1 = tmpMeta24;
              _eq2 = tmpMeta26;

              _var1 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx1);

              _var2 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx2);

              _varExp1 = omc_BackendVariable_varExp(threadData, _var1);

              _varExp2 = omc_BackendVariable_varExp(threadData, _var2);

              /* Pattern-matching assignment */
              tmpMeta28 = _eq1;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,0,4) == 0) goto goto_2;
              tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
              tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
              _lhs = tmpMeta29;
              _rhs1 = tmpMeta30;

              _rhs1 = omc_ExpressionSolve_solve(threadData, _lhs, _rhs1, _varExp1, mmc_mk_none(), NULL);

              /* Pattern-matching assignment */
              tmpMeta31 = _eq2;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,0,4) == 0) goto goto_2;
              tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
              tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 3));
              _lhs = tmpMeta32;
              _rhs2 = tmpMeta33;

              _rhs2 = omc_ExpressionSolve_solve(threadData, _lhs, _rhs2, _varExp2, mmc_mk_none(), NULL);

              if(omc_Expression_expEqual(threadData, _rhs1, _rhs2))
              {
                _eqMapArr = listArray(_eqMap);

                _varMapArr = listArray(_varMap);

                {
                  modelica_metatype __omcQ_24tmpVar3;
                  modelica_metatype* tmp35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype __omcQ_24tmpVar2;
                  modelica_integer tmp37;
                  modelica_metatype _i_loopVar = 0;
                  modelica_metatype _i;
                  _i_loopVar = _sharedVarIdcs;
                  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar3 = tmpMeta36; /* defaultValue */
                  tmp35 = &__omcQ_24tmpVar3;
                  while(1) {
                    tmp37 = 1;
                    if (!listEmpty(_i_loopVar)) {
                      _i = MMC_CAR(_i_loopVar);
                      _i_loopVar = MMC_CDR(_i_loopVar);
                      tmp37--;
                    }
                    if (tmp37 == 0) {
                      __omcQ_24tmpVar2 = arrayGet(_varMapArr, mmc_unbox_integer(_i));
                      *tmp35 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                      tmp35 = &MMC_CDR(*tmp35);
                    } else if (tmp37 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp35 = mmc_mk_nil();
                  tmpMeta34 = __omcQ_24tmpVar3;
                }
                _sharedVarIdcs = tmpMeta34;

                _varIdcs2 = listAppend(_varIdcs1, _varIdcs2);

                {
                  modelica_metatype __omcQ_24tmpVar5;
                  modelica_metatype* tmp39;
                  modelica_metatype tmpMeta40;
                  modelica_metatype __omcQ_24tmpVar4;
                  modelica_integer tmp41;
                  modelica_metatype _i_loopVar = 0;
                  modelica_metatype _i;
                  _i_loopVar = _varIdcs2;
                  tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar5 = tmpMeta40; /* defaultValue */
                  tmp39 = &__omcQ_24tmpVar5;
                  while(1) {
                    tmp41 = 1;
                    if (!listEmpty(_i_loopVar)) {
                      _i = MMC_CAR(_i_loopVar);
                      _i_loopVar = MMC_CDR(_i_loopVar);
                      tmp41--;
                    }
                    if (tmp41 == 0) {
                      __omcQ_24tmpVar4 = arrayGet(_varMapArr, mmc_unbox_integer(_i));
                      *tmp39 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                      tmp39 = &MMC_CDR(*tmp39);
                    } else if (tmp41 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp39 = mmc_mk_nil();
                  tmpMeta38 = __omcQ_24tmpVar5;
                }
                _varIdcs2 = tmpMeta38;

                {
                  modelica_metatype __omcQ_24tmpVar7;
                  modelica_metatype* tmp43;
                  modelica_metatype tmpMeta44;
                  modelica_metatype __omcQ_24tmpVar6;
                  modelica_integer tmp45;
                  modelica_metatype _i_loopVar = 0;
                  modelica_metatype _i;
                  _i_loopVar = _loop1;
                  tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar7 = tmpMeta44; /* defaultValue */
                  tmp43 = &__omcQ_24tmpVar7;
                  while(1) {
                    tmp45 = 1;
                    if (!listEmpty(_i_loopVar)) {
                      _i = MMC_CAR(_i_loopVar);
                      _i_loopVar = MMC_CDR(_i_loopVar);
                      tmp45--;
                    }
                    if (tmp45 == 0) {
                      __omcQ_24tmpVar6 = arrayGet(_eqMapArr, mmc_unbox_integer(_i));
                      *tmp43 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                      tmp43 = &MMC_CDR(*tmp43);
                    } else if (tmp45 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp43 = mmc_mk_nil();
                  tmpMeta42 = __omcQ_24tmpVar7;
                }
                _eqIdcs = tmpMeta42;

                omc_GCExt_free(threadData, _eqMapArr);

                omc_GCExt_free(threadData, _varMapArr);

                tmpMeta47 = mmc_mk_box4(3, &CommonSubExpression_CommonSubExp_ASSIGNMENT__CSE__desc, _eqIdcs, _sharedVarIdcs, _varIdcs2);
                tmpMeta46 = mmc_mk_cons(tmpMeta47, _cseLst);
                _cseLst = tmpMeta46;
              }
            }
          }
          tmpMeta1 = _cseLst;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _cseIn;
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
  _cseOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cseOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getCSE2(threadData_t *threadData, modelica_metatype _partition, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _vars, modelica_metatype _eqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn)
{
  modelica_metatype _cseOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cseOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _partition;
    {
      modelica_integer _sharedVarIdx;
      modelica_integer _eqIdx1;
      modelica_integer _eqIdx2;
      modelica_integer _varIdx1;
      modelica_integer _varIdx2;
      modelica_metatype _varIdcs1 = NULL;
      modelica_metatype _varIdcs2 = NULL;
      modelica_metatype _sharedVarIdcs = NULL;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _eq2 = NULL;
      modelica_metatype _var1 = NULL;
      modelica_metatype _var2 = NULL;
      modelica_metatype _varExp1 = NULL;
      modelica_metatype _varExp2 = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs1 = NULL;
      modelica_metatype _rhs2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sharedVarIdx has no default value.
      // _eqIdx1 has no default value.
      // _eqIdx2 has no default value.
      // _varIdx1 has no default value.
      // _varIdx2 has no default value.
      // _varIdcs1 has no default value.
      // _varIdcs2 has no default value.
      // _sharedVarIdcs has no default value.
      // _eqIdcs has no default value.
      // _eq1 has no default value.
      // _eq2 has no default value.
      // _var1 has no default value.
      // _var2 has no default value.
      // _varExp1 has no default value.
      // _varExp2 has no default value.
      // _lhs has no default value.
      // _rhs1 has no default value.
      // _rhs2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
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
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
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
          modelica_boolean tmp35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta7);
          tmpMeta10 = MMC_CDR(tmpMeta7);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          _eqIdx1 = tmp8  /* pattern as ty=Integer */;
          _eqIdx2 = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _varIdcs1 = arrayGet(_m, _eqIdx1);

          _varIdcs2 = arrayGet(_m, _eqIdx2);

          _sharedVarIdcs = omc_List_intersection1OnTrue(threadData, _varIdcs1, _varIdcs2, boxvar_intEq ,&_varIdcs1 ,&_varIdcs2);

          /* Pattern-matching assignment */
          tmpMeta12 = _varIdcs1;
          if (listEmpty(tmpMeta12)) goto goto_2;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          tmp15 = mmc_unbox_integer(tmpMeta13);
          if (!listEmpty(tmpMeta14)) goto goto_2;
          _varIdx1 = tmp15  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta16 = _varIdcs2;
          if (listEmpty(tmpMeta16)) goto goto_2;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          tmp19 = mmc_unbox_integer(tmpMeta17);
          if (!listEmpty(tmpMeta18)) goto goto_2;
          _varIdx2 = tmp19  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta20 = _sharedVarIdcs;
          if (listEmpty(tmpMeta20)) goto goto_2;
          tmpMeta21 = MMC_CAR(tmpMeta20);
          tmpMeta22 = MMC_CDR(tmpMeta20);
          tmp23 = mmc_unbox_integer(tmpMeta21);
          if (!listEmpty(tmpMeta22)) goto goto_2;
          _sharedVarIdx = tmp23  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta24 = omc_BackendEquation_getList(threadData, _partition, _eqs);
          if (listEmpty(tmpMeta24)) goto goto_2;
          tmpMeta25 = MMC_CAR(tmpMeta24);
          tmpMeta26 = MMC_CDR(tmpMeta24);
          if (listEmpty(tmpMeta26)) goto goto_2;
          tmpMeta27 = MMC_CAR(tmpMeta26);
          tmpMeta28 = MMC_CDR(tmpMeta26);
          if (!listEmpty(tmpMeta28)) goto goto_2;
          _eq1 = tmpMeta25;
          _eq2 = tmpMeta27;

          omc_BackendVariable_getVarAt(threadData, _vars, _sharedVarIdx);

          _var1 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx1);

          _var2 = omc_BackendVariable_getVarAt(threadData, _vars, _varIdx2);

          _varExp1 = omc_BackendVariable_varExp(threadData, _var1);

          _varExp2 = omc_BackendVariable_varExp(threadData, _var2);

          /* Pattern-matching assignment */
          tmpMeta29 = _eq1;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,0,4) == 0) goto goto_2;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 3));
          _lhs = tmpMeta30;
          _rhs1 = tmpMeta31;

          _rhs1 = omc_ExpressionSolve_solve(threadData, _lhs, _rhs1, _varExp1, mmc_mk_none(), NULL);

          /* Pattern-matching assignment */
          tmpMeta32 = _eq2;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,0,4) == 0) goto goto_2;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 3));
          _lhs = tmpMeta33;
          _rhs2 = tmpMeta34;

          _rhs2 = omc_ExpressionSolve_solve(threadData, _lhs, _rhs2, _varExp2, mmc_mk_none(), NULL);

          /* Pattern-matching assignment */
          tmp35 = omc_Expression_expEqual(threadData, _rhs1, _rhs2);
          if (1 /* true */ != tmp35) goto goto_2;

          _sharedVarIdcs = omc_List_map1(threadData, _sharedVarIdcs, boxvar_List_getIndexFirst, _varMap);

          _varIdcs2 = listAppend(_varIdcs1, _varIdcs2);

          _varIdcs2 = omc_List_map1(threadData, _varIdcs2, boxvar_List_getIndexFirst, _varMap);

          _eqIdcs = omc_List_map1(threadData, _partition, boxvar_List_getIndexFirst, _eqMap);
          tmpMeta37 = mmc_mk_box4(3, &CommonSubExpression_CommonSubExp_ASSIGNMENT__CSE__desc, _eqIdcs, _sharedVarIdcs, _varIdcs2);
          tmpMeta36 = mmc_mk_cons(tmpMeta37, _cseIn);
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _cseIn;
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
  _cseOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _cseOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_shortenPaths(threadData_t *threadData, modelica_metatype _allPartitions, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn, modelica_boolean _isInitial)
{
  modelica_metatype _cseOut = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _eqSys = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _pathVars = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _varAtts = NULL;
  modelica_metatype _eqAtts = NULL;
  modelica_integer _numVars;
  modelica_integer _varIdx;
  modelica_metatype _pathVarIdxMap = NULL;
  modelica_metatype _partition = NULL;
  modelica_metatype _varIdcs = NULL;
  modelica_metatype _adjEqs = NULL;
  modelica_metatype _pathVarIdcs = NULL;
  modelica_metatype _cses = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cseOut has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _eqSys has no default value.
  // _vars has no default value.
  // _pathVars has no default value.
  // _varLst has no default value.
  // _eqLst has no default value.
  // _eqs has no default value.
  // _varAtts has no default value.
  // _eqAtts has no default value.
  // _numVars has no default value.
  // _varIdx has no default value.
  // _pathVarIdxMap has no default value.
  // _partition has no default value.
  // _varIdcs has no default value.
  // _adjEqs has no default value.
  // _pathVarIdcs has no default value.
  // _cses has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_integer tmp18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          /* Pattern matching succeeded */
          _numVars = omc_BackendVariable_varsSize(threadData, _allVars);

          omc_List_filter1OnTrueSync(threadData, omc_List_mapArray(threadData, _mTIn, boxvar_listLength), boxvar_intEq, mmc_mk_integer(((modelica_integer) 2)), omc_List_intRange(threadData, _numVars) ,&_pathVarIdcs);

          _pathVars = omc_BackendVariable_listVar1(threadData, omc_List_map1(threadData, _pathVarIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _allVars));

          _pathVarIdxMap = listArray(omc_List_map1(threadData, _pathVarIdcs, boxvar_Array_getIndexFirst, _varMap));

          _cses = _cseIn;

          if((omc_BackendVariable_varsSize(threadData, _pathVars) > ((modelica_integer) 0)))
          {
            {
              modelica_metatype _partition;
              for (tmpMeta5 = _allPartitions; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
              {
                _partition = MMC_CAR(tmpMeta5);
                {
                  modelica_metatype __omcQ_24tmpVar9;
                  modelica_metatype* tmp7;
                  modelica_metatype tmpMeta8;
                  modelica_metatype __omcQ_24tmpVar8;
                  modelica_integer tmp9;
                  modelica_metatype _i_loopVar = 0;
                  modelica_metatype _i;
                  _i_loopVar = _partition;
                  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar9 = tmpMeta8; /* defaultValue */
                  tmp7 = &__omcQ_24tmpVar9;
                  while(1) {
                    tmp9 = 1;
                    if (!listEmpty(_i_loopVar)) {
                      _i = MMC_CAR(_i_loopVar);
                      _i_loopVar = MMC_CDR(_i_loopVar);
                      tmp9--;
                    }
                    if (tmp9 == 0) {
                      __omcQ_24tmpVar8 = omc_BackendEquation_get(threadData, _allEqs, mmc_unbox_integer(_i));
                      *tmp7 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                      tmp7 = &MMC_CDR(*tmp7);
                    } else if (tmp9 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp7 = mmc_mk_nil();
                  tmpMeta6 = __omcQ_24tmpVar9;
                }
                _eqLst = tmpMeta6;

                _eqs = omc_BackendEquation_listEquation(threadData, _eqLst);

                tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
                _eqSys = omc_BackendDAEUtil_createEqSystem(threadData, _pathVars, _eqs, tmpMeta10, _OMC_LIT15, omc_BackendEquation_emptyEqns(threadData));

                omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _eqSys, _OMC_LIT16, mmc_mk_none(), _isInitial ,&_m ,&_mT);

                tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = arrayLength(_mT);
                if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
                {
                  modelica_integer _idx;
                  for(_idx = ((modelica_integer) 1); in_range_integer(_idx, tmp17, tmp19); _idx += tmp18)
                  {
                    _adjEqs = arrayGetNoBoundsChecking(_mT, _idx);

                    if((listLength(_adjEqs) == ((modelica_integer) 2)))
                    {
                      {
                        modelica_metatype __omcQ_24tmpVar11;
                        modelica_metatype* tmp12;
                        modelica_metatype tmpMeta13;
                        modelica_metatype __omcQ_24tmpVar10;
                        modelica_integer tmp14;
                        modelica_metatype _eq_loopVar = 0;
                        modelica_metatype _eq;
                        _eq_loopVar = _adjEqs;
                        tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                        __omcQ_24tmpVar11 = tmpMeta13; /* defaultValue */
                        tmp12 = &__omcQ_24tmpVar11;
                        while(1) {
                          tmp14 = 1;
                          if (!listEmpty(_eq_loopVar)) {
                            _eq = MMC_CAR(_eq_loopVar);
                            _eq_loopVar = MMC_CDR(_eq_loopVar);
                            tmp14--;
                          }
                          if (tmp14 == 0) {
                            __omcQ_24tmpVar10 = arrayGet(_eqMap, mmc_unbox_integer(listGet(_partition, mmc_unbox_integer(_eq))));
                            *tmp12 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                            tmp12 = &MMC_CDR(*tmp12);
                          } else if (tmp14 == 1) {
                            break;
                          } else {
                            goto goto_1;
                          }
                        }
                        *tmp12 = mmc_mk_nil();
                        tmpMeta11 = __omcQ_24tmpVar11;
                      }
                      _adjEqs = tmpMeta11;

                      _varIdx = mmc_unbox_integer(arrayGet(_pathVarIdxMap, _idx));

                      tmpMeta16 = mmc_mk_box3(4, &CommonSubExpression_CommonSubExp_SHORTCUT__CSE__desc, _adjEqs, mmc_mk_integer(_varIdx));
                      tmpMeta15 = mmc_mk_cons(tmpMeta16, _cses);
                      _cses = tmpMeta15;
                    }
                  }
                }

                omc_GCExt_free(threadData, _m);

                omc_GCExt_free(threadData, _mT);
              }
            }
          }

          _cseOut = _cses;
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _cseOut = _cseIn;
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
  return _cseOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_shortenPaths(threadData_t *threadData, modelica_metatype _allPartitions, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _allVars, modelica_metatype _allEqs, modelica_metatype _eqMap, modelica_metatype _varMap, modelica_metatype _cseIn, modelica_metatype _isInitial)
{
  modelica_integer tmp1;
  modelica_metatype _cseOut = NULL;
  tmp1 = mmc_unbox_integer(_isInitial);
  _cseOut = omc_CommonSubExpression_shortenPaths(threadData, _allPartitions, _mIn, _mTIn, _allVars, _allEqs, _eqMap, _varMap, _cseIn, tmp1);
  /* skip box _cseOut; list<CommonSubExpression.CommonSubExp> */
  return _cseOut;
}

static modelica_metatype closure0_CommonSubExpression_getCSE2(threadData_t *thData, modelica_metatype closure, modelica_metatype partition, modelica_metatype cseIn)
{
  modelica_metatype m = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype mT = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype vars = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype eqs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype eqMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype varMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_CommonSubExpression_getCSE2(thData, partition, m, mT, vars, eqs, eqMap, varMap, cseIn);
}static modelica_metatype closure1_CommonSubExpression_getCSE3(threadData_t *thData, modelica_metatype closure, modelica_metatype partition, modelica_metatype cseIn)
{
  modelica_metatype m = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype mT = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype vars = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype eqs = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype eqMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype varMap = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_CommonSubExpression_getCSE3(thData, partition, m, mT, vars, eqs, eqMap, varMap, cseIn);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpressionFind(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _varsIn, modelica_metatype _eqsIn, modelica_boolean _isInitial)
{
  modelica_metatype _cseOut = NULL;
  modelica_integer _numVars;
  modelica_metatype _eqIdcs = NULL;
  modelica_metatype _varIdcs = NULL;
  modelica_metatype _lengthLst = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _partitions = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _linPathVars = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _eqSys = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _cseLst2 = NULL;
  modelica_metatype _cseLst3 = NULL;
  modelica_metatype _shortenPathsCSE = NULL;
  modelica_metatype _varAtts = NULL;
  modelica_metatype _eqAtts = NULL;
  modelica_metatype _varIdcsSet = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cseOut has no default value.
  // _numVars has no default value.
  // _eqIdcs has no default value.
  // _varIdcs has no default value.
  // _lengthLst has no default value.
  // _range has no default value.
  // _partitions has no default value.
  // _vars has no default value.
  // _linPathVars has no default value.
  // _eqs has no default value.
  // _eqSys has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _eqLst has no default value.
  // _varLst has no default value.
  // _cseLst2 has no default value.
  // _cseLst3 has no default value.
  // _shortenPathsCSE has no default value.
  // _varAtts has no default value.
  // _eqAtts has no default value.
  // _varIdcsSet has no default value.
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          /* Pattern matching succeeded */
          _range = omc_List_intRange(threadData, arrayLength(_mIn));

          _lengthLst = omc_List_mapArray(threadData, _mIn, boxvar_listLength);

          omc_List_filter1OnTrueSync(threadData, _lengthLst, boxvar_intEq, mmc_mk_integer(((modelica_integer) 2)), _range ,&_eqIdcs);

          _eqLst = omc_List_filterOnTrueSync(threadData, omc_BackendEquation_getList(threadData, _eqIdcs, _eqsIn), boxvar_BackendEquation_isNotAlgorithm, _eqIdcs ,&_eqIdcs);

          _eqs = omc_BackendEquation_listEquation(threadData, _eqLst);

          _varIdcs = omc_UnorderedSet_unique__list(threadData, omc_List_flatten(threadData, omc_List_map1(threadData, _eqIdcs, boxvar_Array_getIndexFirst, _mIn)), boxvar_Util_id, boxvar_intEq);

          _varLst = omc_List_map1(threadData, _varIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _varsIn);

          _vars = omc_BackendVariable_listVar1(threadData, _varLst);

          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqSys = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqs, tmpMeta5, _OMC_LIT15, omc_BackendEquation_emptyEqns(threadData));

          omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _eqSys, _OMC_LIT17, mmc_mk_none(), _isInitial ,&_m ,&_mT);

          _partitions = omc_ResolveLoops_partitionBipartiteGraph(threadData, _m, _mT);

          _partitions = omc_List_filterOnFalse(threadData, _partitions, boxvar_listEmpty);

          tmpMeta6 = mmc_mk_box6(0, _m, _mT, _vars, _eqs, _eqIdcs, _varIdcs);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _cseLst2 = omc_List_fold(threadData, _partitions, (modelica_fnptr) mmc_mk_box2(0,closure0_CommonSubExpression_getCSE2,tmpMeta6), tmpMeta7);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _shortenPathsCSE = omc_CommonSubExpression_shortenPaths(threadData, _partitions, _m, _mT, _vars, _eqs, listArray(_eqIdcs), listArray(_varIdcs), tmpMeta8, _isInitial);

          omc_List_filter1OnTrueSync(threadData, _lengthLst, boxvar_intEq, mmc_mk_integer(((modelica_integer) 3)), _range ,&_eqIdcs);

          _eqLst = omc_List_filterOnTrueSync(threadData, omc_BackendEquation_getList(threadData, _eqIdcs, _eqsIn), boxvar_BackendEquation_isNotAlgorithm, _eqIdcs ,&_eqIdcs);

          _eqs = omc_BackendEquation_listEquation(threadData, _eqLst);

          _varIdcsSet = _OMC_LIT18;

          {
            modelica_metatype _eq;
            for (tmpMeta9 = _eqIdcs; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _eq = MMC_CAR(tmpMeta9);
              _varIdcsSet = omc_AvlSetInt_addList(threadData, _varIdcsSet, arrayGet(_mIn, mmc_unbox_integer(_eq)));
            }
          }

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _varIdcs = omc_AvlSetInt_listKeysReverse(threadData, _varIdcsSet, tmpMeta11);

          _varLst = omc_List_map1(threadData, _varIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _varsIn);

          _vars = omc_BackendVariable_listVar1(threadData, _varLst);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqSys = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqs, tmpMeta12, _OMC_LIT15, omc_BackendEquation_emptyEqns(threadData));

          omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _eqSys, _OMC_LIT17, mmc_mk_none(), _isInitial ,&_m ,&_mT);

          _partitions = omc_ResolveLoops_partitionBipartiteGraph(threadData, _m, _mT);

          tmpMeta13 = mmc_mk_box6(0, _m, _mT, _vars, _eqs, _eqIdcs, _varIdcs);
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          _cseLst3 = omc_List_fold(threadData, _partitions, (modelica_fnptr) mmc_mk_box2(0,closure1_CommonSubExpression_getCSE3,tmpMeta13), tmpMeta14);

          _cseOut = listAppend(_cseLst2, listAppend(_cseLst3, _shortenPathsCSE));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _cseOut = tmpMeta15;
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
  return _cseOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_commonSubExpressionFind(threadData_t *threadData, modelica_metatype _mIn, modelica_metatype _mTIn, modelica_metatype _varsIn, modelica_metatype _eqsIn, modelica_metatype _isInitial)
{
  modelica_integer tmp1;
  modelica_metatype _cseOut = NULL;
  tmp1 = mmc_unbox_integer(_isInitial);
  _cseOut = omc_CommonSubExpression_commonSubExpressionFind(threadData, _mIn, _mTIn, _varsIn, _eqsIn, tmp1);
  /* skip box _cseOut; list<CommonSubExpression.CommonSubExp> */
  return _cseOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_commonSubExpression(threadData_t *threadData, modelica_metatype _sysIn, modelica_metatype _sharedIn, modelica_metatype *out_sharedOut)
{
  modelica_metatype _sysOut = NULL;
  modelica_metatype _sharedOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sysOut has no default value.
  // _sharedOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _sysIn;
    tmp4_2 = _sharedIn;
    {
      modelica_metatype _functionTree = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _mT = NULL;
      modelica_metatype _cseLst = NULL;
      modelica_boolean _isInitial;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _functionTree has no default value.
      // _vars has no default value.
      // _eqs has no default value.
      // _syst has no default value.
      // _m has no default value.
      // _mT has no default value.
      // _cseLst has no default value.
      // _isInitial has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 12));
          
          _vars = tmpMeta6;
          _eqs = tmpMeta7;
          _functionTree = tmpMeta8;
          /* Pattern matching succeeded */
          _isInitial = omc_BackendDAEUtil_isInitializationDAE(threadData, _sharedIn);

          omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _sysIn, _OMC_LIT17, mmc_mk_some(_functionTree), _isInitial ,&_m ,&_mT);

          _cseLst = omc_CommonSubExpression_commonSubExpressionFind(threadData, _m, _mT, _vars, _eqs, _isInitial);

          _syst = omc_CommonSubExpression_commonSubExpressionUpdate(threadData, _cseLst, _m, _mT, _sysIn);

          omc_GCExt_free(threadData, _m);

          omc_GCExt_free(threadData, _mT);

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _eqs;
          _syst = tmpMeta9;
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _sharedIn;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _sysIn;
          tmpMeta[0+1] = _sharedIn;
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
  _sysOut = tmpMeta[0+0];
  _sharedOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_sharedOut) { *out_sharedOut = _sharedOut; }
  return _sysOut;
}

DLLDirection
modelica_metatype omc_CommonSubExpression_commonSubExpressionReplacement(threadData_t *threadData, modelica_metatype _daeIn)
{
  modelica_metatype _daeOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOut has no default value.
  _daeOut = omc_BackendDAEUtil_mapEqSystem(threadData, _daeIn, boxvar_CommonSubExpression_commonSubExpression);
  _return: OMC_LABEL_UNUSED
  return _daeOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_checkOp(threadData_t *threadData, modelica_metatype _inOp)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_checkOp(threadData_t *threadData, modelica_metatype _inOp)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_CommonSubExpression_checkOp(threadData, _inOp);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCommutative(threadData_t *threadData, modelica_metatype _inOp)
{
  modelica_boolean _outCommutative;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCommutative has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inOp;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
  _outCommutative = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outCommutative;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCommutative(threadData_t *threadData, modelica_metatype _inOp)
{
  modelica_boolean _outCommutative;
  modelica_metatype out_outCommutative;
  _outCommutative = omc_CommonSubExpression_isCommutative(threadData, _inOp);
  out_outCommutative = mmc_mk_icon(_outCommutative);
  return out_outCommutative;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTuple = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outTuple has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _HT = NULL;
      modelica_metatype _HT2 = NULL;
      modelica_integer _i;
      modelica_integer _counter;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _value has no default value.
      // _op has no default value.
      // _HT has no default value.
      // _HT2 has no default value.
      // _i has no default value.
      // _counter has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
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
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _exp1 = tmpMeta6;
          _op = tmpMeta7;
          _exp2 = tmpMeta8;
          _HT = tmpMeta9;
          _HT2 = tmpMeta10;
          _i = tmp12  /* pattern as ty=Integer */;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_CommonSubExpression_checkOp(threadData, _op))
          {
            if(omc_BaseHashTable_hasKey(threadData, _inExp, _HT))
            {
              _value = omc_BaseHashTable_get(threadData, _inExp, _HT);

              _counter = ((modelica_integer) 1) + mmc_unbox_integer(omc_BaseHashTable_get(threadData, _value, _HT2));

              tmpMeta13 = mmc_mk_box2(0, _value, mmc_mk_integer(_counter));
              omc_BaseHashTable_update(threadData, tmpMeta13, _HT2);

              if(omc_CommonSubExpression_isCommutative(threadData, _op))
              {
                tmpMeta14 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp2, _op, _exp1);
                _value = omc_BaseHashTable_get(threadData, tmpMeta14, _HT);

                tmpMeta15 = mmc_mk_box2(0, _value, mmc_mk_integer(_counter));
                omc_BaseHashTable_update(threadData, tmpMeta15, _HT2);
              }
            }
            else
            {
              _value = omc_CommonSubExpression_createReturnExp(threadData, omc_Expression_typeof(threadData, _inExp), _i, _OMC_LIT19, 1 /* true */ ,&_i);

              _counter = ((modelica_integer) 1);

              tmpMeta16 = mmc_mk_box2(0, _inExp, _value);
              _HT = omc_BaseHashTable_add(threadData, tmpMeta16, _HT);

              tmpMeta17 = mmc_mk_box2(0, _value, mmc_mk_integer(_counter));
              _HT2 = omc_BaseHashTable_add(threadData, tmpMeta17, _HT2);

              if(omc_CommonSubExpression_isCommutative(threadData, _op))
              {
                tmpMeta18 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _exp2, _op, _exp1);
                tmpMeta19 = mmc_mk_box2(0, tmpMeta18, _value);
                _HT = omc_BaseHashTable_add(threadData, tmpMeta19, _HT);
              }
            }

            if(omc_Flags_isSet(threadData, _OMC_LIT27))
            {
              tmpMeta20 = stringAppend(_OMC_LIT20,omc_ExpressionDump_printExpStr(threadData, _inExp));
              tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT21);
              tmpMeta22 = stringAppend(tmpMeta21,intString(_counter));
              tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT22);
              tmpMeta24 = stringAppend(tmpMeta23,omc_ExpressionDump_printExpStr(threadData, _value));
              tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT23);
              fputs(MMC_STRINGDATA(tmpMeta25),stdout);
            }
          }
          tmpMeta26 = mmc_mk_box3(0, _HT, _HT2, mmc_mk_integer(_i));
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta26;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,1,1) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          if (3 != MMC_STRLEN(tmpMeta28) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta28)) != 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta29,1,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          if (6 != MMC_STRLEN(tmpMeta30) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta30)) != 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,1,1) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (7 != MMC_STRLEN(tmpMeta32) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta32)) != 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta33,1,1) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta33), 2));
          if (10 != MMC_STRLEN(tmpMeta34) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta34)) != 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,1) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          if (8 != MMC_STRLEN(tmpMeta36) || strcmp(MMC_STRINGDATA(_OMC_LIT32), MMC_STRINGDATA(tmpMeta36)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTuple;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _inTuple;
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
      if (++tmp4 < 8) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outExp = tmpMeta[0+0];
  _cont = tmp1_c1;
  _outTuple = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createStatistics__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_CommonSubExpression_createStatistics__main(threadData, _inExp, _inTuple, &_cont, out_outTuple);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTuple; tuple<tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, DAE.Exp>>>>, #Integer, tuple<.HashTableExpToExp.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToExp.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToExp.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToExp.FuncExpStr<function>(DAE.Exp exp) => String>>, tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, #Integer>>>>, #Integer, tuple<.HashTableExpToIndex.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToIndex.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToIndex.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToIndex.FuncExpStr<function>(#Integer exp) => String>>, #Integer> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_CommonSubExpression_createStatistics__main, _inTuple ,&_outTuple);
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createStatistics(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEq has no default value.
  // _outTuple has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEq;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta5 = stringAppend(_OMC_LIT33,omc_BackendDump_equationString(threadData, _inEq));
            tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT34);
            fputs(MMC_STRINGDATA(tmpMeta6),stdout);
          }
          tmpMeta[0+0] = omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_createStatistics1, _inTuple, &tmpMeta[0+1]);
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
  _outEq = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTuple = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outTuple has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTuple;
    {
      modelica_metatype _value = NULL;
      modelica_metatype _HT = NULL;
      modelica_metatype _HT2 = NULL;
      modelica_metatype _HT3 = NULL;
      modelica_metatype _eqLst = NULL;
      modelica_metatype _varLst = NULL;
      modelica_integer _counter;
      modelica_metatype _eq = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _value has no default value.
      // _HT has no default value.
      // _HT2 has no default value.
      // _HT3 has no default value.
      // _eqLst has no default value.
      // _varLst has no default value.
      // _counter has no default value.
      // _eq has no default value.
      // _source has no default value.
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
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _HT = tmpMeta7;
          _HT2 = tmpMeta8;
          _HT3 = tmpMeta9;
          _eqLst = tmpMeta10;
          _varLst = tmpMeta11;
          _source = tmpMeta12;
          /* Pattern matching succeeded */
          _value = omc_BaseHashTable_get(threadData, _inExp, _HT);

          _counter = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _value, _HT2));

          /* Pattern-matching assignment */
          tmp13 = (_counter > ((modelica_integer) 1));
          if (1 /* true */ != tmp13) goto goto_2;

          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta14 = stringAppend(_OMC_LIT35,omc_ExpressionDump_printExpStr(threadData, _inExp));
            tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT21);
            tmpMeta16 = stringAppend(tmpMeta15,intString(_counter));
            tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT22);
            tmpMeta18 = stringAppend(tmpMeta17,omc_ExpressionDump_printExpStr(threadData, _value));
            tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT23);
            fputs(MMC_STRINGDATA(tmpMeta19),stdout);
          }

          if((!omc_BaseHashTable_hasKey(threadData, _value, _HT3)))
          {
            tmpMeta20 = mmc_mk_box2(0, _value, mmc_mk_integer(((modelica_integer) 1)));
            _HT3 = omc_BaseHashTable_add(threadData, tmpMeta20, _HT3);

            _varLst = omc_CommonSubExpression_createVarsForExp__onlyCSECrefs(threadData, _value, _varLst);

            _eq = omc_BackendEquation_generateEquation(threadData, _value, _inExp, _source, _OMC_LIT37);

            tmpMeta21 = mmc_mk_cons(_eq, _eqLst);
            _eqLst = tmpMeta21;
          }
          tmpMeta22 = mmc_mk_box5(0, _HT, _HT2, _HT3, _eqLst, _varLst);
          tmpMeta23 = mmc_mk_box2(0, tmpMeta22, _source);
          tmpMeta[0+0] = _value;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta23;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _inTuple;
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
  _cont = tmp1_c1;
  _outTuple = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_substituteCSE__main(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_CommonSubExpression_substituteCSE__main(threadData, _inExp, _inTuple, &_cont, out_outTuple);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTuple; tuple<tuple<tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, DAE.Exp>>>>, #Integer, tuple<.HashTableExpToExp.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToExp.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToExp.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToExp.FuncExpStr<function>(DAE.Exp exp) => String>>, tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, #Integer>>>>, #Integer, tuple<.HashTableExpToIndex.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToIndex.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToIndex.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToIndex.FuncExpStr<function>(#Integer exp) => String>>, tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, #Integer>>>>, #Integer, tuple<.HashTableExpToIndex.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToIndex.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToIndex.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToIndex.FuncExpStr<function>(#Integer exp) => String>>, list<BackendDAE.Equation>, list<BackendDAE.Var>>, DAE.ElementSource> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE1(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_CommonSubExpression_substituteCSE__main, _inTuple ,&_outTuple);
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteCSE(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEq has no default value.
  // _outTuple has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEq;
    {
      modelica_metatype _eq = NULL;
      modelica_metatype _tpl = NULL;
      int tmp4;
      // _eq has no default value.
      // _tpl has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inEq;
          tmpMeta[0+1] = _inTuple;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta5 = stringAppend(_OMC_LIT33,omc_BackendDump_equationString(threadData, _inEq));
            tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT34);
            fputs(MMC_STRINGDATA(tmpMeta6),stdout);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta9 = mmc_mk_box2(0, _inTuple, omc_BackendEquation_equationSource(threadData, _inEq));
          tmpMeta10 = omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_substituteCSE1, tmpMeta9, &tmpMeta7);
          _eq = tmpMeta10;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _tpl = tmpMeta8;
          tmpMeta[0+0] = _eq;
          tmpMeta[0+1] = _tpl;
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
  _outEq = tmpMeta[0+0];
  _outTuple = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_CSE1(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_integer _inIndex, modelica_metatype *out_outShared, modelica_integer *out_outIndex)
{
  modelica_metatype _outSystem = NULL;
  modelica_metatype _outShared = NULL;
  modelica_integer _outIndex;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSystem has no default value.
  _outShared = _inShared;
  // _outIndex has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSystem;
    {
      modelica_metatype _orderedVars = NULL;
      modelica_metatype _orderedEqs = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _varList = NULL;
      modelica_metatype _eqList = NULL;
      modelica_metatype _HT = NULL;
      modelica_metatype _HT2 = NULL;
      modelica_metatype _HT3 = NULL;
      modelica_integer _index;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _orderedVars has no default value.
      // _orderedEqs has no default value.
      // _syst has no default value.
      // _varList has no default value.
      // _eqList has no default value.
      // _HT has no default value.
      // _HT2 has no default value.
      // _HT3 has no default value.
      _index = _inIndex;
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
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _syst = tmp4_1;
          _orderedVars = tmpMeta6;
          _orderedEqs = tmpMeta7;
          /* Pattern matching succeeded */
          _HT = omc_HashTableExpToExp_emptyHashTableSized(threadData, ((modelica_integer) 49999));

          _HT2 = omc_HashTableExpToIndex_emptyHashTableSized(threadData, ((modelica_integer) 49999));

          _HT3 = omc_HashTableExpToIndex_emptyHashTableSized(threadData, ((modelica_integer) 49999));

          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT38),stdout);
          }

          /* Pattern-matching assignment */
          tmpMeta8 = mmc_mk_box3(0, _HT, _HT2, mmc_mk_integer(_index));
          tmpMeta9 = omc_BackendEquation_traverseEquationArray(threadData, _orderedEqs, boxvar_CommonSubExpression_createStatistics, tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _HT = tmpMeta10;
          _HT2 = tmpMeta11;
          _index = tmp13  /* pattern as ty=Integer */;

          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT39),stdout);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = mmc_mk_box5(0, _HT, _HT2, _HT3, tmpMeta19, tmpMeta20);
          tmpMeta22 = omc_BackendEquation_traverseEquationArray__WithUpdate(threadData, _orderedEqs, boxvar_CommonSubExpression_substituteCSE, tmpMeta21, &tmpMeta14);
          _orderedEqs = tmpMeta22;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 4));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 5));
          _HT = tmpMeta15;
          _HT2 = tmpMeta16;
          _eqList = tmpMeta17;
          _varList = tmpMeta18;

          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT34),stdout);
          }

          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[3] = omc_BackendEquation_addList(threadData, _eqList, _orderedEqs);
          _syst = tmpMeta23;

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[2] = omc_BackendVariable_addVars(threadData, _varList, _orderedVars);
          _syst = tmpMeta24;

          if(omc_Flags_isSet(threadData, _OMC_LIT43))
          {
            omc_BackendDump_dumpVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), _OMC_LIT40);

            omc_BackendDump_dumpEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), _OMC_LIT41);
          }
          tmpMeta[0+0] = omc_BackendDAEUtil_clearEqSyst(threadData, _syst);
          tmp1_c1 = _index;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inSystem;
          tmp1_c1 = _inIndex;
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
  _outSystem = tmpMeta[0+0];
  _outIndex = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outShared) { *out_outShared = _outShared; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  return _outSystem;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_CSE1(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _inIndex, modelica_metatype *out_outShared, modelica_metatype *out_outIndex)
{
  modelica_integer tmp1;
  modelica_integer _outIndex;
  modelica_metatype _outSystem = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  _outSystem = omc_CommonSubExpression_CSE1(threadData, _inSystem, _inShared, tmp1, out_outShared, &_outIndex);
  /* skip box _outSystem; BackendDAE.EqSystem */
  /* skip box _outShared; BackendDAE.Shared */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  return _outSystem;
}

DLLDirection
modelica_metatype omc_CommonSubExpression_cseBinary(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  _outDAE = omc_BackendDAEUtil_mapEqSystemAndFold(threadData, _inDAE, boxvar_CommonSubExpression_CSE1, mmc_mk_integer(((modelica_integer) 1)), NULL);
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

DLLDirection
modelica_boolean omc_CommonSubExpression_isCSEExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = omc_CommonSubExpression_isCSECref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp), 2))));
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
modelica_metatype boxptr_CommonSubExpression_isCSEExp(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_CommonSubExpression_isCSEExp(threadData, _inExp);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_CommonSubExpression_isCSECref(threadData_t *threadData, modelica_metatype _cr)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cr;
    {
      modelica_string _s = NULL;
      int tmp4;
      // _s has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _s = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = omc_StringUtil_startsWith(threadData, _s, _OMC_LIT44);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _s = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_StringUtil_startsWith(threadData, _s, _OMC_LIT44);
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
modelica_metatype boxptr_CommonSubExpression_isCSECref(threadData_t *threadData, modelica_metatype _cr)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_CommonSubExpression_isCSECref(threadData, _cr);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createVarsForExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inAccumVarLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _cr_ = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _arrayDim = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _cr_ has no default value.
      // _crefs has no default value.
      // _expLst has no default value.
      // _var has no default value.
      // _ty has no default value.
      // _arrayDim has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAccumVarLst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,9,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,1) == 0) goto tmp3_end;
          
          _cr = tmpMeta7;
          /* Pattern matching succeeded */
          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _outVarLst = _inAccumVarLst;

          {
            modelica_metatype _cr_;
            for (tmpMeta10 = _crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _cr_ = MMC_CAR(tmpMeta10);
              _arrayDim = omc_ComponentReference_crefDims(threadData, _cr_);

              tmpMeta11 = mmc_mk_cons(omc_BackendVariable_createCSEArrayVar(threadData, _cr_, omc_ComponentReference_crefTypeFull(threadData, _cr_), _arrayDim), _outVarLst);
              _outVarLst = tmpMeta11;
            }
          }
          tmpMeta1 = _outVarLst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isArrayType(threadData, omc_Expression_typeof(threadData, _inExp))) goto tmp3_end;
          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _outVarLst = _inAccumVarLst;

          _ty = omc_DAEUtil_expTypeElementType(threadData, omc_Expression_typeof(threadData, _inExp));

          {
            modelica_metatype _cr_;
            for (tmpMeta14 = _crefs; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _cr_ = MMC_CAR(tmpMeta14);
              _arrayDim = omc_ComponentReference_crefDims(threadData, _cr_);

              tmpMeta15 = mmc_mk_cons(omc_BackendVariable_createCSEArrayVar(threadData, _cr_, _ty, _arrayDim), _outVarLst);
              _outVarLst = tmpMeta15;
            }
          }
          tmpMeta1 = _outVarLst;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta17;
          /* Pattern matching succeeded */
          _var = omc_BackendVariable_createCSEVar(threadData, _cr, omc_Expression_typeof(threadData, _inExp));
          tmpMeta18 = mmc_mk_cons(_var, _inAccumVarLst);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _expLst = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp, _inAccumVarLst);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _expLst = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp, _inAccumVarLst);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,4) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expLst = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp, _inAccumVarLst);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expLst = tmpMeta22;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp, _inAccumVarLst);
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAccumVarLst;
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createVarsForExp__onlyCSECrefs(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inAccumVarLst)
{
  modelica_metatype _outVarLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVarLst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cr = NULL;
      modelica_metatype _cr_ = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _arrayDim = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cr has no default value.
      // _cr_ has no default value.
      // _crefs has no default value.
      // _expLst has no default value.
      // _var has no default value.
      // _ty has no default value.
      // _arrayDim has no default value.
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAccumVarLst;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,9,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,1) == 0) goto tmp3_end;
          
          _cr = tmpMeta7;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_CommonSubExpression_isCSECref(threadData, _cr)) goto tmp3_end;
          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _outVarLst = _inAccumVarLst;

          {
            modelica_metatype _cr_;
            for (tmpMeta10 = _crefs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _cr_ = MMC_CAR(tmpMeta10);
              _arrayDim = omc_ComponentReference_crefDims(threadData, _cr_);

              tmpMeta11 = mmc_mk_cons(omc_BackendVariable_createCSEArrayVar(threadData, _cr_, omc_ComponentReference_crefTypeFull(threadData, _cr_), _arrayDim), _outVarLst);
              _outVarLst = tmpMeta11;
            }
          }
          tmpMeta1 = _outVarLst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta13;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_CommonSubExpression_isCSECref(threadData, _cr) && omc_Expression_isArrayType(threadData, omc_Expression_typeof(threadData, _inExp)))) goto tmp3_end;
          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          _outVarLst = _inAccumVarLst;

          _ty = omc_DAEUtil_expTypeElementType(threadData, omc_Expression_typeof(threadData, _inExp));

          {
            modelica_metatype _cr_;
            for (tmpMeta14 = _crefs; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
            {
              _cr_ = MMC_CAR(tmpMeta14);
              _arrayDim = omc_ComponentReference_crefDims(threadData, _cr_);

              tmpMeta15 = mmc_mk_cons(omc_BackendVariable_createCSEArrayVar(threadData, _cr_, _ty, _arrayDim), _outVarLst);
              _outVarLst = tmpMeta15;
            }
          }
          tmpMeta1 = _outVarLst;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cr = tmpMeta17;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_CommonSubExpression_isCSECref(threadData, _cr)) goto tmp3_end;
          _var = omc_BackendVariable_createCSEVar(threadData, _cr, omc_Expression_typeof(threadData, _inExp));
          tmpMeta18 = mmc_mk_cons(_var, _inAccumVarLst);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _expLst = tmpMeta19;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp__onlyCSECrefs, _inAccumVarLst);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _expLst = tmpMeta20;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp__onlyCSECrefs, _inAccumVarLst);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,4) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expLst = tmpMeta21;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);
          tmpMeta1 = omc_List_fold(threadData, _expLst, boxvar_CommonSubExpression_createVarsForExp__onlyCSECrefs, _inAccumVarLst);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inAccumVarLst;
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
  _outVarLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outVarLst;
}

static modelica_metatype closure2_CommonSubExpression_createReturnExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inType, modelica_metatype inIndex, modelica_metatype tmp33)
{
  modelica_string inPrefix = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inComplex = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_CommonSubExpression_createReturnExp(thData, inType, inIndex, inPrefix, inComplex, tmp33);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createReturnExp(threadData_t *threadData, modelica_metatype _inType, modelica_integer _inIndex, modelica_string _inPrefix, modelica_boolean _inComplex, modelica_integer *out_outIndex)
{
  modelica_metatype _outExp = NULL;
  modelica_integer _outIndex;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outIndex has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inType;
    {
      modelica_integer _i;
      modelica_string _str = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _typeLst = NULL;
      modelica_metatype _expLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i has no default value.
      // _str has no default value.
      // _value has no default value.
      // _cr has no default value.
      // _ty has no default value.
      // _typeLst has no default value.
      // _expLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 10; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta6;

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _OMC_LIT46, tmpMeta7);
          _cr = tmpMeta8;

          tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT46);
          _value = tmpMeta9;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta10;

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _OMC_LIT47, tmpMeta11);
          _cr = tmpMeta12;

          tmpMeta13 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT47);
          _value = tmpMeta13;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta14;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _OMC_LIT48, tmpMeta15);
          _cr = tmpMeta16;

          tmpMeta17 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT48);
          _value = tmpMeta17;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta18;

          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _OMC_LIT49, tmpMeta19);
          _cr = tmpMeta20;

          tmpMeta21 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT49);
          _value = tmpMeta21;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta22 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta22;

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _inType, tmpMeta23);
          _cr = tmpMeta24;

          tmpMeta25 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _inType);
          _value = tmpMeta25;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta26 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta26;

          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _OMC_LIT50, tmpMeta27);
          _cr = tmpMeta28;

          tmpMeta29 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _OMC_LIT50);
          _value = tmpMeta29;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _typeLst = tmpMeta30;
          /* Pattern matching succeeded */
          if(_inComplex)
          {
            /* Pattern-matching tuple assignment */
            tmpMeta34 = mmc_mk_box2(0, _inPrefix, mmc_mk_boolean(_inComplex));
            tmpMeta35 = omc_List_mapFold(threadData, _typeLst, (modelica_fnptr) mmc_mk_box2(0,closure2_CommonSubExpression_createReturnExp,tmpMeta34), mmc_mk_integer(_inIndex), &tmpMeta31);
            _expLst = tmpMeta35;
            tmp32 = mmc_unbox_integer(tmpMeta31);
            _i = tmp32  /* pattern as ty=Integer */;

            tmpMeta36 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst);
            _value = tmpMeta36;
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta37 = _typeLst;
            if (listEmpty(tmpMeta37)) goto goto_2;
            tmpMeta38 = MMC_CAR(tmpMeta37);
            tmpMeta39 = MMC_CDR(tmpMeta37);
            _ty = tmpMeta38;

            _value = omc_CommonSubExpression_createReturnExp(threadData, _ty, _inIndex, _inPrefix, 0 /* false */ ,&_i);
          }
          tmpMeta[0+0] = _value;
          tmp1_c1 = _i;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta40 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta40;

          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta42 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _inType, tmpMeta41);
          _cr = tmpMeta42;

          tmpMeta43 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _inType);
          _value = tmpMeta43;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,4) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta45 = stringAppend(_inPrefix,intString(_inIndex));
          _str = tmpMeta45;

          tmpMeta46 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta47 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _str, _inType, tmpMeta46);
          _cr = tmpMeta47;

          tmpMeta48 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _inType);
          _value = tmpMeta48;
          tmpMeta[0+0] = _value;
          tmp1_c1 = ((modelica_integer) 1) + _inIndex;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          
          /* Pattern matching succeeded */
          tmpMeta49 = stringAppend(_OMC_LIT51,omc_Types_printTypeStr(threadData, _inType));
          tmpMeta50 = stringAppend(tmpMeta49,_OMC_LIT34);
          omc_Error_addInternalError(threadData, tmpMeta50, _OMC_LIT53);
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
  _outExp = tmpMeta[0+0];
  _outIndex = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_outIndex) { *out_outIndex = _outIndex; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createReturnExp(threadData_t *threadData, modelica_metatype _inType, modelica_metatype _inIndex, modelica_metatype _inPrefix, modelica_metatype _inComplex, modelica_metatype *out_outIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  tmp2 = mmc_unbox_integer(_inComplex);
  _outExp = omc_CommonSubExpression_createReturnExp(threadData, _inType, tmp1, _inPrefix, tmp2, &_outIndex);
  /* skip box _outExp; DAE.Exp */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallRecordConstructor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn)
{
  modelica_boolean _outIsCall;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsCall has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _func = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _func has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _path = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = omc_DAE_AvlTreePathFunction_get(threadData, _funcsIn, _path);
          if (optionNone(tmpMeta7)) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          _func = tmpMeta8;
          tmp1 = listEmpty(omc_DAEUtil_getFunctionElements(threadData, _func));
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
  _outIsCall = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outIsCall;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallRecordConstructor(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _funcsIn)
{
  modelica_boolean _outIsCall;
  modelica_metatype out_outIsCall;
  _outIsCall = omc_CommonSubExpression_isCallRecordConstructor(threadData, _inExp, _funcsIn);
  out_outIsCall = mmc_mk_icon(_outIsCall);
  return out_outIsCall;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isSkipCase__advanced(threadData_t *threadData, modelica_metatype _inCall)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCall;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 14; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (4 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (4 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT55), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (4 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT56), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (5 != MMC_STRLEN(tmpMeta13) || strcmp(MMC_STRINGDATA(_OMC_LIT57), MMC_STRINGDATA(tmpMeta13)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (3 != MMC_STRLEN(tmpMeta15) || strcmp(MMC_STRINGDATA(_OMC_LIT58), MMC_STRINGDATA(tmpMeta15)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (4 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT59), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (3 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT60), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (3 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT61), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,1,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          if (5 != MMC_STRLEN(tmpMeta23) || strcmp(MMC_STRINGDATA(_OMC_LIT62), MMC_STRINGDATA(tmpMeta23)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (3 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT63), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,1,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          if (4 != MMC_STRLEN(tmpMeta27) || strcmp(MMC_STRINGDATA(_OMC_LIT64), MMC_STRINGDATA(tmpMeta27)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,1,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          if (3 != MMC_STRLEN(tmpMeta29) || strcmp(MMC_STRINGDATA(_OMC_LIT65), MMC_STRINGDATA(tmpMeta29)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,1,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          if (4 != MMC_STRLEN(tmpMeta31) || strcmp(MMC_STRINGDATA(_OMC_LIT66), MMC_STRINGDATA(tmpMeta31)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isSkipCase__advanced(threadData_t *threadData, modelica_metatype _inCall)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_CommonSubExpression_isSkipCase__advanced(threadData, _inCall);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isSkipCase(threadData_t *threadData, modelica_metatype _inCall, modelica_metatype _functionTree)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inCall;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 45; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (7 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (8 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT74), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          if (3 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT75), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,1,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          if (12 != MMC_STRLEN(tmpMeta13) || strcmp(MMC_STRINGDATA(_OMC_LIT76), MMC_STRINGDATA(tmpMeta13)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          if (10 != MMC_STRLEN(tmpMeta15) || strcmp(MMC_STRINGDATA(_OMC_LIT77), MMC_STRINGDATA(tmpMeta15)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (11 != MMC_STRLEN(tmpMeta17) || strcmp(MMC_STRINGDATA(_OMC_LIT78), MMC_STRINGDATA(tmpMeta17)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (4 != MMC_STRLEN(tmpMeta19) || strcmp(MMC_STRINGDATA(_OMC_LIT79), MMC_STRINGDATA(tmpMeta19)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,1,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (6 != MMC_STRLEN(tmpMeta21) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmpMeta21)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,1,1) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
          if (5 != MMC_STRLEN(tmpMeta23) || strcmp(MMC_STRINGDATA(_OMC_LIT81), MMC_STRINGDATA(tmpMeta23)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,1,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          if (5 != MMC_STRLEN(tmpMeta25) || strcmp(MMC_STRINGDATA(_OMC_LIT82), MMC_STRINGDATA(tmpMeta25)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,1,1) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          if (3 != MMC_STRLEN(tmpMeta27) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmpMeta27)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta28,1,1) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          if (3 != MMC_STRLEN(tmpMeta29) || strcmp(MMC_STRINGDATA(_OMC_LIT83), MMC_STRINGDATA(tmpMeta29)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,1,1) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          if (4 != MMC_STRLEN(tmpMeta31) || strcmp(MMC_STRINGDATA(_OMC_LIT84), MMC_STRINGDATA(tmpMeta31)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,1,1) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          if (9 != MMC_STRLEN(tmpMeta33) || strcmp(MMC_STRINGDATA(_OMC_LIT85), MMC_STRINGDATA(tmpMeta33)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,1,1) == 0) goto tmp3_end;
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          if (5 != MMC_STRLEN(tmpMeta35) || strcmp(MMC_STRINGDATA(_OMC_LIT86), MMC_STRINGDATA(tmpMeta35)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta36,1,1) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
          if (15 != MMC_STRLEN(tmpMeta37) || strcmp(MMC_STRINGDATA(_OMC_LIT87), MMC_STRINGDATA(tmpMeta37)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,1,1) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          if (4 != MMC_STRLEN(tmpMeta39) || strcmp(MMC_STRINGDATA(_OMC_LIT88), MMC_STRINGDATA(tmpMeta39)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,1) == 0) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          if (8 != MMC_STRLEN(tmpMeta41) || strcmp(MMC_STRINGDATA(_OMC_LIT32), MMC_STRINGDATA(tmpMeta41)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,1,1) == 0) goto tmp3_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
          if (7 != MMC_STRLEN(tmpMeta43) || strcmp(MMC_STRINGDATA(_OMC_LIT89), MMC_STRINGDATA(tmpMeta43)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta44,1,1) == 0) goto tmp3_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 2));
          if (8 != MMC_STRLEN(tmpMeta45) || strcmp(MMC_STRINGDATA(_OMC_LIT90), MMC_STRINGDATA(tmpMeta45)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta46,1,1) == 0) goto tmp3_end;
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
          if (7 != MMC_STRLEN(tmpMeta47) || strcmp(MMC_STRINGDATA(_OMC_LIT91), MMC_STRINGDATA(tmpMeta47)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta48,1,1) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
          if (7 != MMC_STRLEN(tmpMeta49) || strcmp(MMC_STRINGDATA(_OMC_LIT92), MMC_STRINGDATA(tmpMeta49)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta50,1,1) == 0) goto tmp3_end;
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 2));
          if (8 != MMC_STRLEN(tmpMeta51) || strcmp(MMC_STRINGDATA(_OMC_LIT93), MMC_STRINGDATA(tmpMeta51)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,1,1) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 2));
          if (3 != MMC_STRLEN(tmpMeta53) || strcmp(MMC_STRINGDATA(_OMC_LIT94), MMC_STRINGDATA(tmpMeta53)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta54,1,1) == 0) goto tmp3_end;
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta54), 2));
          if (7 != MMC_STRLEN(tmpMeta55) || strcmp(MMC_STRINGDATA(_OMC_LIT95), MMC_STRINGDATA(tmpMeta55)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,1,1) == 0) goto tmp3_end;
          tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 2));
          if (3 != MMC_STRLEN(tmpMeta57) || strcmp(MMC_STRINGDATA(_OMC_LIT96), MMC_STRINGDATA(tmpMeta57)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,1,1) == 0) goto tmp3_end;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 2));
          if (8 != MMC_STRLEN(tmpMeta59) || strcmp(MMC_STRINGDATA(_OMC_LIT97), MMC_STRINGDATA(tmpMeta59)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta60,1,1) == 0) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta60), 2));
          if (6 != MMC_STRLEN(tmpMeta61) || strcmp(MMC_STRINGDATA(_OMC_LIT98), MMC_STRINGDATA(tmpMeta61)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta62,1,1) == 0) goto tmp3_end;
          tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 2));
          if (3 != MMC_STRLEN(tmpMeta63) || strcmp(MMC_STRINGDATA(_OMC_LIT99), MMC_STRINGDATA(tmpMeta63)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 30: {
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta64,1,1) == 0) goto tmp3_end;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 2));
          if (6 != MMC_STRLEN(tmpMeta65) || strcmp(MMC_STRINGDATA(_OMC_LIT100), MMC_STRINGDATA(tmpMeta65)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta66,1,1) == 0) goto tmp3_end;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 2));
          if (10 != MMC_STRLEN(tmpMeta67) || strcmp(MMC_STRINGDATA(_OMC_LIT31), MMC_STRINGDATA(tmpMeta67)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,1,1) == 0) goto tmp3_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 2));
          if (11 != MMC_STRLEN(tmpMeta69) || strcmp(MMC_STRINGDATA(_OMC_LIT101), MMC_STRINGDATA(tmpMeta69)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 33: {
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta70,1,1) == 0) goto tmp3_end;
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 2));
          if (4 != MMC_STRLEN(tmpMeta71) || strcmp(MMC_STRINGDATA(_OMC_LIT102), MMC_STRINGDATA(tmpMeta71)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta72,1,1) == 0) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta72), 2));
          if (6 != MMC_STRLEN(tmpMeta73) || strcmp(MMC_STRINGDATA(_OMC_LIT29), MMC_STRINGDATA(tmpMeta73)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 35: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta74,1,1) == 0) goto tmp3_end;
          tmpMeta75 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta74), 2));
          if (19 != MMC_STRLEN(tmpMeta75) || strcmp(MMC_STRINGDATA(_OMC_LIT103), MMC_STRINGDATA(tmpMeta75)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 36: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta76,1,1) == 0) goto tmp3_end;
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta76), 2));
          if (4 != MMC_STRLEN(tmpMeta77) || strcmp(MMC_STRINGDATA(_OMC_LIT104), MMC_STRINGDATA(tmpMeta77)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 37: {
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta78,1,1) == 0) goto tmp3_end;
          tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta78), 2));
          if (6 != MMC_STRLEN(tmpMeta79) || strcmp(MMC_STRINGDATA(_OMC_LIT105), MMC_STRINGDATA(tmpMeta79)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 38: {
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta80,1,1) == 0) goto tmp3_end;
          tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta80), 2));
          if (9 != MMC_STRLEN(tmpMeta81) || strcmp(MMC_STRINGDATA(_OMC_LIT106), MMC_STRINGDATA(tmpMeta81)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 39: {
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta82,1,1) == 0) goto tmp3_end;
          tmpMeta83 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta82), 2));
          if (3 != MMC_STRLEN(tmpMeta83) || strcmp(MMC_STRINGDATA(_OMC_LIT107), MMC_STRINGDATA(tmpMeta83)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 40: {
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta84,1,1) == 0) goto tmp3_end;
          tmpMeta85 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta84), 2));
          if (11 != MMC_STRLEN(tmpMeta85) || strcmp(MMC_STRINGDATA(_OMC_LIT108), MMC_STRINGDATA(tmpMeta85)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 41: {
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta86,1,1) == 0) goto tmp3_end;
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta86), 2));
          if (8 != MMC_STRLEN(tmpMeta87) || strcmp(MMC_STRINGDATA(_OMC_LIT109), MMC_STRINGDATA(tmpMeta87)) != 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 42: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(omc_Expression_isImpureCall(threadData, _inCall) || omc_CommonSubExpression_isCallRecordConstructor(threadData, _inCall, _functionTree))) goto tmp3_end;
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 43: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Flags_getConfigBool(threadData, _OMC_LIT72)) goto tmp3_end;
          tmp1 = omc_CommonSubExpression_isSkipCase__advanced(threadData, _inCall);
          goto tmp3_done;
        }
        case 44: {
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isSkipCase(threadData_t *threadData, modelica_metatype _inCall, modelica_metatype _functionTree)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_CommonSubExpression_isSkipCase(threadData, _inCall, _functionTree);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isWildCref(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,0) == 0) goto tmp3_end;
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isWildCref(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_CommonSubExpression_isWildCref(threadData, _inExp);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_mergeCSETuples2(threadData_t *threadData, modelica_metatype _inExpLst1, modelica_metatype _inExpLst2)
{
  modelica_metatype _outExpLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outExpLst = tmpMeta1;
  { /* match expression */
    modelica_metatype tmp5_1;modelica_metatype tmp5_2;
    tmp5_1 = _inExpLst1;
    tmp5_2 = _inExpLst2;
    {
      modelica_metatype _expLst1 = NULL;
      modelica_metatype _expLst2 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _expLst1 has no default value.
      // _expLst2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          if (!listEmpty(tmp5_1)) goto tmp4_end;
          if (!listEmpty(tmp5_2)) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta2 = _outExpLst;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_CAR(tmp5_1);
          tmpMeta8 = MMC_CDR(tmp5_1);
          if (listEmpty(tmp5_2)) goto tmp4_end;
          tmpMeta9 = MMC_CAR(tmp5_2);
          tmpMeta10 = MMC_CDR(tmp5_2);
          _e1 = tmpMeta7;
          _expLst1 = tmpMeta8;
          _e2 = tmpMeta9;
          _expLst2 = tmpMeta10;
          /* Pattern matching succeeded */
          _outExpLst = omc_CommonSubExpression_mergeCSETuples2(threadData, _expLst1, _expLst2);

          if(((!omc_CommonSubExpression_isWildCref(threadData, _e1)) && (!omc_CommonSubExpression_isWildCref(threadData, _e2))))
          {
            if((omc_CommonSubExpression_isCSEExp(threadData, _e1) && (!omc_CommonSubExpression_isCSEExp(threadData, _e2))))
            {
              tmpMeta11 = mmc_mk_cons(_e2, _outExpLst);
              _outExpLst = tmpMeta11;
            }
            else
            {
              tmpMeta12 = mmc_mk_cons(_e1, _outExpLst);
              _outExpLst = tmpMeta12;
            }
          }
          else
          {
            if((omc_CommonSubExpression_isWildCref(threadData, _e1) && (!omc_CommonSubExpression_isWildCref(threadData, _e2))))
            {
              tmpMeta13 = mmc_mk_cons(_e2, _outExpLst);
              _outExpLst = tmpMeta13;
            }
            else
            {
              if(((!omc_CommonSubExpression_isWildCref(threadData, _e1)) && omc_CommonSubExpression_isWildCref(threadData, _e2)))
              {
                tmpMeta14 = mmc_mk_cons(_e1, _outExpLst);
                _outExpLst = tmpMeta14;
              }
              else
              {
                if((omc_CommonSubExpression_isWildCref(threadData, _e1) && omc_CommonSubExpression_isWildCref(threadData, _e2)))
                {
                  tmpMeta15 = mmc_mk_cons(_e1, _outExpLst);
                  _outExpLst = tmpMeta15;
                }
              }
            }
          }
          tmpMeta2 = _outExpLst;
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
  _outExpLst = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outExpLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_mergeCSETuples(threadData_t *threadData, modelica_metatype _inCref1, modelica_metatype _inCref2)
{
  modelica_metatype _outCref = NULL;
  modelica_metatype _expLst1 = NULL;
  modelica_metatype _expLst2 = NULL;
  modelica_metatype _expLst3 = NULL;
  modelica_metatype _e = NULL;
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
  // _outCref has no default value.
  // _expLst1 has no default value.
  // _expLst2 has no default value.
  // _expLst3 has no default value.
  // _e has no default value.
  if((omc_Expression_isTuple(threadData, _inCref1) && omc_Expression_isTuple(threadData, _inCref2)))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _inCref1;
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,19,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
    _expLst1 = tmpMeta2;

    /* Pattern-matching assignment */
    tmpMeta3 = _inCref2;
    if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,19,1) == 0) MMC_THROW_INTERNAL();
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
    _expLst2 = tmpMeta4;

    _expLst1 = omc_CommonSubExpression_mergeCSETuples2(threadData, _expLst1, _expLst2);

    tmpMeta5 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst1);
    _outCref = tmpMeta5;
  }
  else
  {
    if(((!omc_Expression_isTuple(threadData, _inCref1)) && omc_Expression_isTuple(threadData, _inCref2)))
    {
      fputs(MMC_STRINGDATA(_OMC_LIT111),stdout);

      /* Pattern-matching assignment */
      tmpMeta6 = _inCref2;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,19,1) == 0) MMC_THROW_INTERNAL();
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      _expLst2 = tmpMeta7;

      /* Pattern-matching assignment */
      tmpMeta8 = _expLst2;
      if (listEmpty(tmpMeta8)) MMC_THROW_INTERNAL();
      tmpMeta9 = MMC_CAR(tmpMeta8);
      tmpMeta10 = MMC_CDR(tmpMeta8);
      _e = tmpMeta9;
      _expLst3 = tmpMeta10;

      if(omc_CommonSubExpression_isWildCref(threadData, _e))
      {
        tmpMeta11 = mmc_mk_cons(_inCref1, _expLst3);
        _expLst2 = tmpMeta11;
      }

      tmpMeta12 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst2);
      _outCref = tmpMeta12;
    }
    else
    {
      if((omc_Expression_isTuple(threadData, _inCref1) && (!omc_Expression_isTuple(threadData, _inCref2))))
      {
        fputs(MMC_STRINGDATA(_OMC_LIT110),stdout);

        /* Pattern-matching assignment */
        tmpMeta13 = _inCref1;
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,19,1) == 0) MMC_THROW_INTERNAL();
        tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
        _expLst1 = tmpMeta14;

        /* Pattern-matching assignment */
        tmpMeta15 = _expLst1;
        if (listEmpty(tmpMeta15)) MMC_THROW_INTERNAL();
        tmpMeta16 = MMC_CAR(tmpMeta15);
        tmpMeta17 = MMC_CDR(tmpMeta15);
        _e = tmpMeta16;
        _expLst3 = tmpMeta17;

        if(omc_CommonSubExpression_isWildCref(threadData, _e))
        {
          tmpMeta18 = mmc_mk_cons(_inCref2, _expLst3);
          _expLst1 = tmpMeta18;
        }

        tmpMeta19 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst1);
        _outCref = tmpMeta19;
      }
      else
      {
        _outCref = _inCref1;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outCref;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndRecord(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,9,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndRecord(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isCallAndRecord(threadData, _inExp, _inExp2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndTuple(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndTuple(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isCallAndTuple(threadData, _inExp, _inExp2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isConstAndCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isConstAndCall(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isConstAndCall(threadData, _inExp, _inExp2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isTsubAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,22,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isTsubAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isTsubAndCref(threadData, _inExp, _inExp2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCallAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCallAndCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inExp2)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isCallAndCref(threadData, _inExp, _inExp2);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isCall(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBoolean has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          
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
  _outBoolean = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBoolean;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isCall(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_boolean _outBoolean;
  modelica_metatype out_outBoolean;
  _outBoolean = omc_CommonSubExpression_isCall(threadData, _inExp);
  out_outBoolean = mmc_mk_icon(_outBoolean);
  return out_outBoolean;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_isEquationRedundant__flatten2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_boolean *out_result)
{
  modelica_metatype _globalKnownVarHT = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_boolean _result;
  modelica_metatype _l = NULL;
  modelica_metatype _r = NULL;
  modelica_metatype _ll = NULL;
  modelica_metatype _rr = NULL;
  modelica_metatype _var = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVarHT = __omcQ_24in_5FglobalKnownVarHT;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _orderedVars = __omcQ_24in_5ForderedVars;
  _result = 1 /* true */;
  // _l has no default value.
  // _r has no default value.
  // _ll has no default value.
  // _rr has no default value.
  // _var has no default value.
  if(listEmpty(_lhs))
  {
    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = _lhs;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _l = tmpMeta2;
  _ll = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _rhs;
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  _r = tmpMeta5;
  _rr = tmpMeta6;

  if(((!omc_CommonSubExpression_isWildCref(threadData, _l)) && (!omc_CommonSubExpression_isWildCref(threadData, _r))))
  {
    if((!omc_Expression_expEqual(threadData, _l, _r)))
    {
      if(omc_BaseHashSet_has(threadData, omc_Expression_expCref(threadData, _r), _globalKnownVarHT))
      {
        /* Pattern-matching assignment */
        tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta8 = omc_CommonSubExpression_createVarsForExp(threadData, _l, tmpMeta7);
        if (listEmpty(tmpMeta8)) MMC_THROW_INTERNAL();
        tmpMeta9 = MMC_CAR(tmpMeta8);
        tmpMeta10 = MMC_CDR(tmpMeta8);
        if (!listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
        _var = tmpMeta9;

        _var = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_r));

        _globalKnownVars = omc_BackendVariable_addVar(threadData, _var, _globalKnownVars);

        _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _l, _globalKnownVarHT);

        if((!omc_CommonSubExpression_isCSECref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))))))
        {
          omc_BackendVariable_deleteVarIfExistsAndReturn(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _orderedVars ,&_orderedVars);
        }
      }
      else
      {
        _result = 0 /* false */;

        goto _return;
      }
    }
  }

  /* Tail recursive call */
  _lhs = _ll;
  _rhs = _rr;
  __omcQ_24in_5FglobalKnownVarHT = _globalKnownVarHT;
  __omcQ_24in_5FglobalKnownVars = _globalKnownVars;
  __omcQ_24in_5ForderedVars = _orderedVars;
  goto _tailrecursive;
  /* TODO: Make sure any eventual dead code below is never generated */
  ;
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_orderedVars) { *out_orderedVars = _orderedVars; }
  if (out_result) { *out_result = _result; }
  return _globalKnownVarHT;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant__flatten2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_metatype *out_result)
{
  modelica_boolean _result;
  modelica_metatype _globalKnownVarHT = NULL;
  _globalKnownVarHT = omc_CommonSubExpression_isEquationRedundant__flatten2(threadData, _lhs, _rhs, __omcQ_24in_5FglobalKnownVarHT, __omcQ_24in_5FglobalKnownVars, __omcQ_24in_5ForderedVars, out_globalKnownVars, out_orderedVars, &_result);
  /* skip box _globalKnownVarHT; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.ComponentRef>>>, #Integer, #Integer, tuple<.HashSet.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashSet.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashSet.FuncCrefStr<function>(DAE.ComponentRef cr) => String>> */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _orderedVars; BackendDAE.Variables */
  if (out_result) { *out_result = mmc_mk_icon(_result); }
  return _globalKnownVarHT;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_isEquationRedundant__flatten(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_boolean *out_outB, modelica_boolean *out_isGlobalKnown)
{
  modelica_metatype _globalKnownVarHT = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_boolean _outB;
  modelica_boolean _isGlobalKnown;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVarHT = __omcQ_24in_5FglobalKnownVarHT;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _orderedVars = __omcQ_24in_5ForderedVars;
  // _outB has no default value.
  _isGlobalKnown = 0 /* false */;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEq;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _varList = NULL;
      modelica_boolean _isRedundant;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _varList has no default value.
      // _isRedundant has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp1 = tmpMeta6;
          _exp2 = tmpMeta7;
          /* Pattern matching succeeded */
          _isRedundant = omc_Expression_expEqual(threadData, _exp1, _exp2);

          if((!_isRedundant))
          {
            tmpMeta8 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
            _isGlobalKnown = omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData, tmpMeta8, _globalKnownVarHT);

            if(_isGlobalKnown)
            {
              _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _exp1, _globalKnownVarHT);
            }
          }
          tmp1 = _isRedundant;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,19,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,19,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          
          _lhs = tmpMeta10;
          _rhs = tmpMeta12;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_lhs) == listLength(_rhs))) goto tmp3_end;
          _globalKnownVarHT = omc_CommonSubExpression_isEquationRedundant__flatten2(threadData, _lhs, _rhs, _globalKnownVarHT, _globalKnownVars, _orderedVars ,&_globalKnownVars ,&_orderedVars ,&_isRedundant);
          tmp1 = _isRedundant;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,19,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _exp1 = tmpMeta13;
          _lhs = tmpMeta14;
          _exp2 = tmpMeta15;
          /* Pattern matching succeeded */
          _isRedundant = omc_Expression_expEqual(threadData, _exp1, _exp2);

          if((!_isRedundant))
          {
            tmpMeta16 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
            _isGlobalKnown = omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData, tmpMeta16, _globalKnownVarHT);

            if(_isGlobalKnown)
            {
              {
                modelica_metatype _expMem;
                for (tmpMeta17 = _lhs; !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
                {
                  _expMem = MMC_CAR(tmpMeta17);
                  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                  _varList = omc_CommonSubExpression_createVarsForExp(threadData, _expMem, tmpMeta18);

                  {
                    modelica_metatype _var;
                    for (tmpMeta19 = _varList; !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
                    {
                      _var = MMC_CAR(tmpMeta19);
                      _var = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_exp2));

                      _globalKnownVars = omc_BackendVariable_addVar(threadData, _var, _globalKnownVars);

                      _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _expMem, _globalKnownVarHT);
                    }
                  }
                }
              }
            }
          }
          tmp1 = _isRedundant;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _exp1 = tmpMeta22;
          _exp2 = tmpMeta23;
          /* Pattern matching succeeded */
          _isRedundant = omc_Expression_expEqual(threadData, _exp1, _exp2);

          if((!_isRedundant))
          {
            tmpMeta24 = mmc_mk_cons(_exp2, MMC_REFSTRUCTLIT(mmc_nil));
            _isGlobalKnown = omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData, tmpMeta24, _globalKnownVarHT);

            if(_isGlobalKnown)
            {
              _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _exp1, _globalKnownVarHT);
            }
          }
          tmp1 = _isRedundant;
          goto tmp3_done;
        }
        case 4: {
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_orderedVars) { *out_orderedVars = _orderedVars; }
  if (out_outB) { *out_outB = _outB; }
  if (out_isGlobalKnown) { *out_isGlobalKnown = _isGlobalKnown; }
  return _globalKnownVarHT;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant__flatten(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_orderedVars, modelica_metatype *out_outB, modelica_metatype *out_isGlobalKnown)
{
  modelica_boolean _outB;
  modelica_boolean _isGlobalKnown;
  modelica_metatype _globalKnownVarHT = NULL;
  _globalKnownVarHT = omc_CommonSubExpression_isEquationRedundant__flatten(threadData, _inEq, __omcQ_24in_5FglobalKnownVarHT, __omcQ_24in_5FglobalKnownVars, __omcQ_24in_5ForderedVars, out_globalKnownVars, out_orderedVars, &_outB, &_isGlobalKnown);
  /* skip box _globalKnownVarHT; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<DAE.ComponentRef>>>, #Integer, #Integer, tuple<.HashSet.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashSet.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashSet.FuncCrefStr<function>(DAE.ComponentRef cr) => String>> */
  /* skip box _globalKnownVars; BackendDAE.Variables */
  /* skip box _orderedVars; BackendDAE.Variables */
  if (out_outB) { *out_outB = mmc_mk_icon(_outB); }
  if (out_isGlobalKnown) { *out_isGlobalKnown = mmc_mk_icon(_isGlobalKnown); }
  return _globalKnownVarHT;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isEquationRedundant2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_boolean _result;
  modelica_metatype _l = NULL;
  modelica_metatype _r = NULL;
  modelica_metatype _ll = NULL;
  modelica_metatype _rr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _result = 1 /* true */;
  // _l has no default value.
  // _r has no default value.
  // _ll has no default value.
  // _rr has no default value.
  if(listEmpty(_lhs))
  {
    goto _return;
  }

  /* Pattern-matching assignment */
  tmpMeta1 = _lhs;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _l = tmpMeta2;
  _ll = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _rhs;
  if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_CAR(tmpMeta4);
  tmpMeta6 = MMC_CDR(tmpMeta4);
  _r = tmpMeta5;
  _rr = tmpMeta6;

  if(((!omc_CommonSubExpression_isWildCref(threadData, _l)) && (!omc_CommonSubExpression_isWildCref(threadData, _r))))
  {
    if((!omc_Expression_expEqual(threadData, _l, _r)))
    {
      _result = 0 /* false */;

      goto _return;
    }
  }

  /* Tail recursive call */
  _lhs = _ll;
  _rhs = _rr;
  goto _tailrecursive;
  /* TODO: Make sure any eventual dead code below is never generated */
  ;
  _return: OMC_LABEL_UNUSED
  return _result;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant2(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_boolean _result;
  modelica_metatype out_result;
  _result = omc_CommonSubExpression_isEquationRedundant2(threadData, _lhs, _rhs);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_isEquationRedundant(threadData_t *threadData, modelica_metatype _inEq)
{
  modelica_boolean _outB;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outB has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEq;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp1 = tmpMeta6;
          _exp2 = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_expEqual(threadData, _exp1, _exp2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,19,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,19,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          
          _lhs = tmpMeta9;
          _rhs = tmpMeta11;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_lhs) == listLength(_rhs))) goto tmp3_end;
          fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);
          tmp1 = omc_CommonSubExpression_isEquationRedundant2(threadData, _lhs, _rhs);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,19,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,19,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          
          _lhs = tmpMeta13;
          _rhs = tmpMeta15;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(listLength(_lhs) == listLength(_rhs))) goto tmp3_end;
          tmp1 = omc_CommonSubExpression_isEquationRedundant2(threadData, _lhs, _rhs);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,6,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,9,4) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,3,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,6,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,9,4) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,3,1) == 0) goto tmp3_end;
          
          _exp1 = tmpMeta16;
          _exp2 = tmpMeta19;
          /* Pattern matching succeeded */
          tmp1 = omc_Expression_expEqual(threadData, _exp1, _exp2);
          goto tmp3_done;
        }
        case 4: {
          
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
  _outB = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outB;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_isEquationRedundant(threadData_t *threadData, modelica_metatype _inEq)
{
  modelica_boolean _outB;
  modelica_metatype out_outB;
  _outB = omc_CommonSubExpression_isEquationRedundant(threadData, _inEq);
  out_outB = mmc_mk_icon(_outB);
  return out_outB;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_getTheRightPattern(threadData_t *threadData, modelica_metatype _inExp1, modelica_metatype _inExp2, modelica_metatype *out_outExp2)
{
  modelica_metatype _outExp1 = NULL;
  modelica_metatype _outExp2 = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp1 has no default value.
  // _outExp2 has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp1;
    tmp4_2 = _inExp2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 8; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = _inExp1;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,19,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = _inExp1;
          goto tmp3_done;
        }
        case 4: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,13,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = _inExp1;
          goto tmp3_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,22,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp1;
          tmpMeta[0+1] = _inExp2;
          goto tmp3_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,22,3) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp2;
          tmpMeta[0+1] = _inExp1;
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
  _outExp1 = tmpMeta[0+0];
  _outExp2 = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outExp2) { *out_outExp2 = _outExp2; }
  return _outExp1;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _functionTree = NULL;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_integer _cseIndex;
  modelica_integer _index;
  modelica_metatype _crefList = NULL;
  modelica_metatype _tsub = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_boolean tmp9 = 0;
  modelica_metatype tmpMeta43;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _cont has no default value.
  // _outTuple has no default value.
  // _functionTree has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  // _cseIndex has no default value.
  // _index has no default value.
  // _crefList has no default value.
  // _tsub has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _HT = tmpMeta2;
  _exarray = tmpMeta3;
  _cseIndex = tmp5  /* pattern as ty=Integer */;
  _index = tmp7  /* pattern as ty=Integer */;
  _functionTree = tmpMeta8;

  { /* match expression */
    modelica_metatype tmp13_1;
    tmp13_1 = _inExp;
    {
      modelica_metatype _cse_var = NULL;
      modelica_metatype _cse_var2 = NULL;
      modelica_metatype _call = NULL;
      modelica_metatype _e = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _types = NULL;
      modelica_integer _ix;
      modelica_integer _id;
      modelica_metatype _expList = NULL;
      modelica_metatype tmpMeta11;
      modelica_metatype _cseEquation = NULL;
      volatile mmc_switch_type tmp13;
      int tmp14;
      // _cse_var has no default value.
      // _cse_var2 has no default value.
      // _call has no default value.
      // _e has no default value.
      // _e2 has no default value.
      // _ty has no default value.
      // _types has no default value.
      // _ix has no default value.
      // _id has no default value.
      tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
      _expList = tmpMeta11;
      // _cseEquation has no default value.
      tmp13 = 0;
      for (; tmp13 < 6; tmp13++) {
        switch (MMC_SWITCH_CAST(tmp13)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,12,3) == 0) goto tmp12_end;
          
          /* Pattern matching succeeded */
          omc_Expression_traverseExpTopDown(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inExp), 2))), boxvar_CommonSubExpression_wrapFunctionCalls__analysis3, _inTuple ,&_outTuple);

          _cont = 0 /* false */;

          goto _return;
          goto goto_10;
          goto tmp12_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_CommonSubExpression_isSkipCase(threadData, _inExp, _functionTree)) goto tmp12_end;
          tmp9 = 0 /* false */;
          goto tmp12_done;
        }
        case 2: {
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
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,22,3) == 0) goto tmp12_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,13,3) == 0) goto tmp12_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 4));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,14,2) == 0) goto tmp12_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 3));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 4));
          _tsub = tmp13_1;
          _call = tmpMeta15;
          _types = tmpMeta18;
          _ix = tmp20  /* pattern as ty=Integer */;
          _ty = tmpMeta21;
          /* Pattern matching succeeded */
          if((!omc_BaseHashTable_hasKey(threadData, _call, _HT)))
          {
            _index = ((modelica_integer) 1) + _index;

            tmpMeta22 = mmc_mk_box2(0, _call, mmc_mk_integer(_index));
            _HT = omc_BaseHashTable_add(threadData, tmpMeta22, _HT);

            _cse_var = omc_CommonSubExpression_createReturnExp(threadData, _ty, _cseIndex, _OMC_LIT44, 0 /* false */ ,&_cseIndex);

            _cse_var2 = omc_CommonSubExpression_createCrefForTsub(threadData, listLength(_types), _ix, _cse_var);

            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta24 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse_var2, _call, tmpMeta23);
            _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta24, _exarray);
          }
          else
          {
            _id = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _HT));

            _cseEquation = omc_ExpandableArray_get(threadData, _id, _exarray);

            if(omc_Expression_isTuple(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 2)))))
            {
              /* Pattern-matching assignment */
              tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 2)));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,19,1) == 0) goto goto_10;
              tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
              _expList = tmpMeta26;

              _e = listGet(_expList, _ix);

              if(omc_CommonSubExpression_isWildCref(threadData, _e))
              {
                _cse_var = omc_CommonSubExpression_createReturnExp(threadData, _ty, _cseIndex, _OMC_LIT44, 0 /* false */ ,&_cseIndex);

                _expList = omc_List_set(threadData, _expList, _ix, _cse_var);

                tmpMeta28 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expList);
                tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_cseEquation), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[2] = tmpMeta28;
                _cseEquation = tmpMeta27;

                _exarray = omc_ExpandableArray_update(threadData, _id, _cseEquation, _exarray);
              }
            }
            else
            {
              tmpMeta30 = stringAppend(omc_ExpressionDump_dumpExpStr(threadData, _inExp, ((modelica_integer) 0)),_OMC_LIT117);
              tmpMeta29 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
              omc_Error_addMessage(threadData, _OMC_LIT116, tmpMeta29);
            }
          }
          tmp9 = 1 /* true */;
          goto tmp12_done;
        }
        case 3: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,13,3) == 0) goto tmp12_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,1,1) == 0) goto tmp12_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (7 != MMC_STRLEN(tmpMeta32) || strcmp(MMC_STRINGDATA(_OMC_LIT30), MMC_STRINGDATA(tmpMeta32)) != 0) goto tmp12_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 3));
          if (listEmpty(tmpMeta33)) goto tmp12_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,11,5) == 0) goto tmp12_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
          if (!listEmpty(tmpMeta35)) goto tmp12_end;
          
          _e = tmpMeta36;
          _e2 = tmpMeta37;
          /* Pattern matching succeeded */
          omc_Expression_traverseExpTopDown(threadData, _e, boxvar_CommonSubExpression_wrapFunctionCalls__analysis3, _inTuple ,&_outTuple);

          omc_Expression_traverseExpTopDown(threadData, _e2, boxvar_CommonSubExpression_wrapFunctionCalls__analysis3, _outTuple ,&_outTuple);

          _cont = 0 /* false */;

          goto _return;
          tmp9 = 1 /* true */;
          goto tmp12_done;
        }
        case 4: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,13,3) == 0) goto tmp12_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp13_1), 4));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 2));
          
          _ty = tmpMeta39;
          /* Pattern matching succeeded */
          if((!omc_BaseHashTable_hasKey(threadData, _inExp, _HT)))
          {
            _index = ((modelica_integer) 1) + _index;

            tmpMeta40 = mmc_mk_box2(0, _inExp, mmc_mk_integer(_index));
            _HT = omc_BaseHashTable_add(threadData, tmpMeta40, _HT);

            _cse_var = omc_CommonSubExpression_createReturnExp(threadData, _ty, _cseIndex, _OMC_LIT44, 0 /* false */ ,&_cseIndex);

            tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta42 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse_var, _inExp, tmpMeta41);
            _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta42, _exarray);
          }
          tmp9 = 1 /* true */;
          goto tmp12_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp9 = 1 /* true */;
          goto tmp12_done;
        }
        }
        goto tmp12_end;
        tmp12_end: ;
      }
      goto goto_10;
      goto_10:;
      MMC_THROW_INTERNAL();
      goto tmp12_done;
      tmp12_done:;
    }
  }
  _cont = tmp9;

  tmpMeta43 = mmc_mk_box5(0, _HT, _exarray, mmc_mk_integer(_cseIndex), mmc_mk_integer(_index), _functionTree);
  _outTuple = tmpMeta43;
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_wrapFunctionCalls__analysis3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_CommonSubExpression_wrapFunctionCalls__analysis3(threadData, _inExp, _inTuple, &_cont, out_outTuple);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTuple; tuple<tuple<array<list<tuple<DAE.Exp, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.Exp, #Integer>>>>, #Integer, tuple<.HashTableExpToIndex.FuncHashCref<function>(DAE.Exp cr) => #Integer, .HashTableExpToIndex.FuncCrefEqual<function>(DAE.Exp cr1, DAE.Exp cr2) => #Boolean, .HashTableExpToIndex.FuncCrefStr<function>(DAE.Exp cr) => String, .HashTableExpToIndex.FuncExpStr<function>(#Integer exp) => String>>, ExpandableArray<CommonSubExpression.CSE_Equation>, #Integer, #Integer, DAE.AvlTreePathFunction.Tree> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _outTuple has no default value.
  omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_CommonSubExpression_wrapFunctionCalls__analysis3, _inTuple ,&_outTuple);
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createCrefForTsub(threadData_t *threadData, modelica_integer _length, modelica_integer _ix, modelica_metatype _cref)
{
  modelica_metatype _outCref = NULL;
  modelica_metatype _expList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outCref has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _expList = tmpMeta1;
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) -1) + _ix;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      tmpMeta2 = mmc_mk_cons(_OMC_LIT120, _expList);
      _expList = tmpMeta2;
    }
  }

  tmpMeta6 = mmc_mk_cons(_cref, _expList);
  _expList = tmpMeta6;

  tmp8 = ((modelica_integer) 1) + _ix; tmp9 = 1; tmp10 = _length;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1) + _ix; in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      tmpMeta7 = mmc_mk_cons(_OMC_LIT120, _expList);
      _expList = tmpMeta7;
    }
  }

  tmpMeta11 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, listReverse(_expList));
  _outCref = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _outCref;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_createCrefForTsub(threadData_t *threadData, modelica_metatype _length, modelica_metatype _ix, modelica_metatype _cref)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outCref = NULL;
  tmp1 = mmc_unbox_integer(_length);
  tmp2 = mmc_unbox_integer(_ix);
  _outCref = omc_CommonSubExpression_createCrefForTsub(threadData, tmp1, tmp2, _cref);
  /* skip box _outCref; DAE.Exp */
  return _outCref;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__analysis(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _functionTree = NULL;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_integer _cseIndex;
  modelica_integer _exIndex;
  modelica_integer _index;
  modelica_integer _ix;
  modelica_metatype _lhs = NULL;
  modelica_metatype _rhs = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _types = NULL;
  modelica_metatype _cseEquation = NULL;
  modelica_boolean _allCrefsAreGlobal;
  modelica_metatype _crefList = NULL;
  modelica_metatype _varList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta60;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEq = _inEq;
  // _outTuple has no default value.
  // _functionTree has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  // _cseIndex has no default value.
  // _exIndex has no default value.
  // _index has no default value.
  // _ix has no default value.
  // _lhs has no default value.
  // _rhs has no default value.
  // _cref has no default value.
  // _call has no default value.
  // _exp has no default value.
  // _expLst has no default value.
  // _ty has no default value.
  // _types has no default value.
  // _cseEquation has no default value.
  _allCrefsAreGlobal = 1 /* true */;
  // _crefList has no default value.
  // _varList has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _HT = tmpMeta2;
  _exarray = tmpMeta3;
  _cseIndex = tmp5  /* pattern as ty=Integer */;
  _index = tmp7  /* pattern as ty=Integer */;
  _functionTree = tmpMeta8;

  { /* match expression */
    modelica_metatype tmp11_1;
    tmp11_1 = _inEq;
    {
      int tmp11;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp11_1))) {
        case 9: {
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
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_integer tmp29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,6,5) == 0) goto tmp10_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 4));
          
          _lhs = tmpMeta12;
          _rhs = tmpMeta13;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta14 = mmc_mk_cons(_inEq, MMC_REFSTRUCTLIT(mmc_nil));
            omc_BackendDump_dumpEquationList(threadData, tmpMeta14, _OMC_LIT121);
          }

          if(omc_CommonSubExpression_isCallAndTuple(threadData, _lhs, _rhs))
          {
            _cref = omc_CommonSubExpression_getTheRightPattern(threadData, _lhs, _rhs ,&_call);

            if(omc_BaseHashTable_hasKey(threadData, _call, _HT))
            {
              _exIndex = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _HT));

              _cseEquation = omc_ExpandableArray_get(threadData, _exIndex, _exarray);

              tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_cseEquation), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = omc_CommonSubExpression_mergeCSETuples(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 2))), _cref);
              _cseEquation = tmpMeta15;

              _exarray = omc_ExpandableArray_update(threadData, _exIndex, _cseEquation, _exarray);
            }
            else
            {
              if((!omc_CommonSubExpression_isSkipCase(threadData, _call, _functionTree)))
              {
                _index = ((modelica_integer) 1) + _index;

                tmpMeta16 = mmc_mk_box2(0, _call, mmc_mk_integer(_index));
                _HT = omc_BaseHashTable_add(threadData, tmpMeta16, _HT);

                tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta18 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cref, _call, tmpMeta17);
                _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta18, _exarray);
              }
            }
          }
          else
          {
            if(omc_CommonSubExpression_isCallAndRecord(threadData, _lhs, _rhs))
            {
              _cref = omc_CommonSubExpression_getTheRightPattern(threadData, _lhs, _rhs ,&_call);

              if(omc_BaseHashTable_hasKey(threadData, _call, _HT))
              {
                _exIndex = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _HT));

                _cseEquation = omc_ExpandableArray_get(threadData, _exIndex, _exarray);

                tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_cseEquation), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = _cref;
                _cseEquation = tmpMeta19;

                _exarray = omc_ExpandableArray_update(threadData, _exIndex, _cseEquation, _exarray);
              }
              else
              {
                if((!omc_CommonSubExpression_isSkipCase(threadData, _call, _functionTree)))
                {
                  _index = ((modelica_integer) 1) + _index;

                  tmpMeta20 = mmc_mk_box2(0, _call, mmc_mk_integer(_index));
                  _HT = omc_BaseHashTable_add(threadData, tmpMeta20, _HT);

                  tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta22 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cref, _call, tmpMeta21);
                  _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta22, _exarray);
                }
              }
            }
          }

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta31 = mmc_mk_box5(0, _HT, _exarray, mmc_mk_integer(_cseIndex), mmc_mk_integer(_index), _functionTree);
          omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_wrapFunctionCalls__analysis2, tmpMeta31, &tmpMeta23);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 3));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 4));
          tmp29 = mmc_unbox_integer(tmpMeta28);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 5));
          _HT = tmpMeta24;
          _exarray = tmpMeta25;
          _cseIndex = tmp27  /* pattern as ty=Integer */;
          _index = tmp29  /* pattern as ty=Integer */;
          _functionTree = tmpMeta30;
          goto tmp10_done;
        }
        case 3: {
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
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_integer tmp55;
          modelica_metatype tmpMeta56;
          modelica_integer tmp57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          if (mmc__uniontype__metarecord__typedef__equal(tmp11_1,0,4) == 0) goto tmp10_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp11_1), 3));
          
          _lhs = tmpMeta32;
          _rhs = tmpMeta33;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta34 = mmc_mk_cons(_inEq, MMC_REFSTRUCTLIT(mmc_nil));
            omc_BackendDump_dumpEquationList(threadData, tmpMeta34, _OMC_LIT122);
          }

          if((omc_CommonSubExpression_isCallAndCref(threadData, _lhs, _rhs) || omc_CommonSubExpression_isConstAndCall(threadData, _lhs, _rhs)))
          {
            _cref = omc_CommonSubExpression_getTheRightPattern(threadData, _lhs, _rhs ,&_call);

            if(omc_BaseHashTable_hasKey(threadData, _call, _HT))
            {
              _exIndex = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _HT));

              _cseEquation = omc_ExpandableArray_get(threadData, _exIndex, _exarray);

              tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(5));
              memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_cseEquation), 5*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[2] = _cref;
              _cseEquation = tmpMeta35;

              _exarray = omc_ExpandableArray_update(threadData, _exIndex, _cseEquation, _exarray);
            }
            else
            {
              if((!omc_CommonSubExpression_isSkipCase(threadData, _call, _functionTree)))
              {
                _index = ((modelica_integer) 1) + _index;

                tmpMeta36 = mmc_mk_box2(0, _call, mmc_mk_integer(_index));
                _HT = omc_BaseHashTable_add(threadData, tmpMeta36, _HT);

                tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
                tmpMeta38 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cref, _call, tmpMeta37);
                _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta38, _exarray);
              }
            }
          }
          else
          {
            if(omc_CommonSubExpression_isTsubAndCref(threadData, _lhs, _rhs))
            {
              /* Pattern-matching tuple assignment */
              tmpMeta46 = omc_CommonSubExpression_getTheRightPattern(threadData, _lhs, _rhs, &tmpMeta39);
              _cref = tmpMeta46;
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta39,22,3) == 0) goto goto_9;
              tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,13,3) == 0) goto goto_9;
              tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 4));
              tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta42,14,2) == 0) goto goto_9;
              tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta42), 2));
              tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 3));
              tmp45 = mmc_unbox_integer(tmpMeta44);
              _call = tmpMeta40;
              _types = tmpMeta43;
              _ix = tmp45  /* pattern as ty=Integer */;

              if(omc_BaseHashTable_hasKey(threadData, _call, _HT))
              {
                _exIndex = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _HT));

                _cseEquation = omc_ExpandableArray_get(threadData, _exIndex, _exarray);

                _cref = omc_CommonSubExpression_createCrefForTsub(threadData, listLength(_types), _ix, _cref);

                tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(5));
                memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_cseEquation), 5*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[2] = omc_CommonSubExpression_mergeCSETuples(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 2))), _cref);
                _cseEquation = tmpMeta47;

                _exarray = omc_ExpandableArray_update(threadData, _exIndex, _cseEquation, _exarray);
              }
              else
              {
                if((!omc_CommonSubExpression_isSkipCase(threadData, _call, _functionTree)))
                {
                  _index = ((modelica_integer) 1) + _index;

                  tmpMeta48 = mmc_mk_box2(0, _call, mmc_mk_integer(_index));
                  _HT = omc_BaseHashTable_add(threadData, tmpMeta48, _HT);

                  _cref = omc_CommonSubExpression_createCrefForTsub(threadData, listLength(_types), _ix, _cref);

                  tmpMeta49 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta50 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cref, _call, tmpMeta49);
                  _exarray = omc_ExpandableArray_set(threadData, _index, tmpMeta50, _exarray);
                }
              }
            }
          }

          /* Pattern-matching tuple assignment, wild first pattern */
          tmpMeta59 = mmc_mk_box5(0, _HT, _exarray, mmc_mk_integer(_cseIndex), mmc_mk_integer(_index), _functionTree);
          omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_wrapFunctionCalls__analysis2, tmpMeta59, &tmpMeta51);
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 1));
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 3));
          tmp55 = mmc_unbox_integer(tmpMeta54);
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 4));
          tmp57 = mmc_unbox_integer(tmpMeta56);
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 5));
          _HT = tmpMeta52;
          _exarray = tmpMeta53;
          _cseIndex = tmp55  /* pattern as ty=Integer */;
          _index = tmp57  /* pattern as ty=Integer */;
          _functionTree = tmpMeta58;
          goto tmp10_done;
        }
        default:
        tmp10_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
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
  ;

  tmpMeta60 = mmc_mk_box5(0, _HT, _exarray, mmc_mk_integer(_cseIndex), mmc_mk_integer(_index), _functionTree);
  _outTuple = tmpMeta60;
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData_t *threadData, modelica_metatype _cse_crExp, modelica_metatype __omcQ_24in_5FglobalKnownVarHT)
{
  modelica_metatype _globalKnownVarHT = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _globalKnownVarHT = __omcQ_24in_5FglobalKnownVarHT;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cse_crExp;
    {
      modelica_metatype _expLst = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _crefs = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _expLst has no default value.
      // _cr has no default value.
      // _crefs has no default value.
      tmp3 = 0;
      for (; tmp3 < 7; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,19,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _expLst = tmpMeta5;
          /* Pattern matching succeeded */
          {
            modelica_metatype _exp;
            for (tmpMeta6 = _expLst; !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _exp = MMC_CAR(tmpMeta6);
              if(omc_Expression_isNotWild(threadData, _exp))
              {
                _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _exp, _globalKnownVarHT);
              }
            }
          }
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,13,3) == 0) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _expLst = tmpMeta8;
          /* Pattern matching succeeded */
          {
            modelica_metatype _exp;
            for (tmpMeta9 = _expLst; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _exp = MMC_CAR(tmpMeta9);
              if(omc_Expression_isNotWild(threadData, _exp))
              {
                _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _exp, _globalKnownVarHT);
              }
            }
          }
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,14,4) == 0) goto tmp2_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          
          _expLst = tmpMeta11;
          /* Pattern matching succeeded */
          {
            modelica_metatype _exp;
            for (tmpMeta12 = _expLst; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _exp = MMC_CAR(tmpMeta12);
              if(omc_Expression_isNotWild(threadData, _exp))
              {
                _globalKnownVarHT = omc_CommonSubExpression_addConstantCseVarsToGlobalKnownVarHT(threadData, _exp, _globalKnownVarHT);
              }
            }
          }
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,9,4) == 0) goto tmp2_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,3,1) == 0) goto tmp2_end;
          
          _cr = tmpMeta14;
          /* Pattern matching succeeded */
          _globalKnownVarHT = omc_BaseHashSet_add(threadData, _cr, _globalKnownVarHT);

          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          {
            modelica_metatype _cr_;
            for (tmpMeta17 = _crefs; !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
            {
              _cr_ = MMC_CAR(tmpMeta17);
              _globalKnownVarHT = omc_BaseHashSet_add(threadData, _cr_, _globalKnownVarHT);
            }
          }
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _cr = tmpMeta19;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_Expression_isArrayType(threadData, omc_Expression_typeof(threadData, _cse_crExp))) goto tmp2_end;
          _globalKnownVarHT = omc_BaseHashSet_add(threadData, _cr, _globalKnownVarHT);

          _crefs = omc_ComponentReference_expandCref(threadData, _cr, 1 /* true */);

          {
            modelica_metatype _cr_;
            for (tmpMeta20 = _crefs; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _cr_ = MMC_CAR(tmpMeta20);
              _globalKnownVarHT = omc_BaseHashSet_add(threadData, _cr_, _globalKnownVarHT);
            }
          }
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,2) == 0) goto tmp2_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          
          _cr = tmpMeta22;
          /* Pattern matching succeeded */
          _globalKnownVarHT = omc_BaseHashSet_add(threadData, _cr, _globalKnownVarHT);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          tmpMeta23 = stringAppend(_OMC_LIT123,omc_ExpressionDump_dumpExpStr(threadData, _cse_crExp, ((modelica_integer) 0)));
          omc_Error_addInternalError(threadData, tmpMeta23, _OMC_LIT124);

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
  return _globalKnownVarHT;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _callArgs, modelica_metatype _globalKnownVarHT)
{
  modelica_boolean _allCrefsAreGlobal;
  modelica_metatype _crefList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _allCrefsAreGlobal = 1 /* true */;
  // _crefList has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  omc_Expression_traverseExpList(threadData, _callArgs, boxvar_Expression_traversingComponentRefFinder, tmpMeta1 ,&_crefList);

  {
    modelica_metatype _cr;
    for (tmpMeta2 = _crefList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _cr = MMC_CAR(tmpMeta2);
      if(_allCrefsAreGlobal)
      {
        _allCrefsAreGlobal = omc_BaseHashSet_has(threadData, _cr, _globalKnownVarHT);
      }
      else
      {
        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _allCrefsAreGlobal;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_allArgsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _callArgs, modelica_metatype _globalKnownVarHT)
{
  modelica_boolean _allCrefsAreGlobal;
  modelica_metatype out_allCrefsAreGlobal;
  _allCrefsAreGlobal = omc_CommonSubExpression_allArgsInGlobalKnownVars(threadData, _callArgs, _globalKnownVarHT);
  out_allCrefsAreGlobal = mmc_mk_icon(_allCrefsAreGlobal);
  return out_allCrefsAreGlobal;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_determineDependencies2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_integer _id;
  modelica_integer _index;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_metatype _cse = NULL;
  modelica_metatype _call = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outExp = _inExp;
  // _outTuple has no default value.
  // _id has no default value.
  // _index has no default value.
  // _dependencies has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  // _cse has no default value.
  // _call has no default value.
  if(omc_Expression_isCall(threadData, _inExp))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _inTuple;
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
    tmp5 = mmc_unbox_integer(tmpMeta4);
    _HT = tmpMeta2;
    _exarray = tmpMeta3;
    _index = tmp5  /* pattern as ty=Integer */;

    if(omc_BaseHashTable_hasKey(threadData, _inExp, _HT))
    {
      _id = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _inExp, _HT));

      /* Pattern-matching assignment */
      tmpMeta6 = omc_ExpandableArray_get(threadData, _id, _exarray);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
      tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
      _cse = tmpMeta7;
      _call = tmpMeta8;
      _dependencies = tmpMeta9;

      if((!listMember(mmc_mk_integer(_index), _dependencies)))
      {
        tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_index), _dependencies);
        _dependencies = tmpMeta10;

        tmpMeta11 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse, _call, _dependencies);
        omc_ExpandableArray_update(threadData, _id, tmpMeta11, _exarray);
      }
    }

    tmpMeta12 = mmc_mk_box3(0, _HT, _exarray, mmc_mk_integer(_index));
    _outTuple = tmpMeta12;
  }
  else
  {
    _outTuple = _inTuple;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_determineDependencies(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype _HT)
{
  modelica_metatype _exarray = NULL;
  modelica_metatype _callArguments = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exarray = __omcQ_24in_5Fexarray;
  // _callArguments has no default value.
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = omc_ExpandableArray_getNumberOfElements(threadData, _exarray);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {
      /* Pattern-matching assignment */
      tmpMeta1 = omc_ExpandableArray_get(threadData, _i, _exarray);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,13,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      _callArguments = tmpMeta3;

      /* Pattern-matching tuple assignment, wild first pattern */
      tmpMeta6 = mmc_mk_box3(0, _HT, _exarray, mmc_mk_integer(_i));
      omc_Expression_traverseExpList(threadData, _callArguments, boxvar_CommonSubExpression_determineDependencies2, tmpMeta6, &tmpMeta4);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      _exarray = tmpMeta5;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _exarray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_createCseEquations(threadData_t *threadData, modelica_metatype _exarray, modelica_metatype __omcQ_24in_5ForderedEqs, modelica_metatype __omcQ_24in_5ForderedVars, modelica_metatype __omcQ_24in_5FglobalKnownVars, modelica_metatype __omcQ_24in_5FglobalKnownVarHT, modelica_metatype *out_orderedVars, modelica_metatype *out_globalKnownVars, modelica_metatype *out_globalKnownVarHT)
{
  modelica_metatype _orderedEqs = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _globalKnownVarHT = NULL;
  modelica_metatype _cse = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _callArg = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _crefList = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _var = NULL;
  modelica_metatype _varList = NULL;
  modelica_metatype _delVars = NULL;
  modelica_boolean _isGlobalKnown;
  modelica_boolean _eqRedundant;
  modelica_boolean _add;
  modelica_metatype _var_indexes = NULL;
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
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _orderedEqs = __omcQ_24in_5ForderedEqs;
  _orderedVars = __omcQ_24in_5ForderedVars;
  _globalKnownVars = __omcQ_24in_5FglobalKnownVars;
  _globalKnownVarHT = __omcQ_24in_5FglobalKnownVarHT;
  // _cse has no default value.
  // _call has no default value.
  // _callArg has no default value.
  // _eq has no default value.
  // _crefList has no default value.
  // _cr has no default value.
  // _var has no default value.
  // _varList has no default value.
  // _delVars has no default value.
  // _isGlobalKnown has no default value.
  // _eqRedundant has no default value.
  // _add has no default value.
  // _var_indexes has no default value.
  if(omc_Flags_isSet(threadData, _OMC_LIT27))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT125),stdout);

    omc_BaseHashSet_dumpHashSet(threadData, _globalKnownVarHT);

    fputs(MMC_STRINGDATA(_OMC_LIT126),stdout);
  }

  tmp12 = omc_ExpandableArray_getNumberOfElements(threadData, _exarray); tmp13 = ((modelica_integer) -1); tmp14 = ((modelica_integer) 1);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = omc_ExpandableArray_getNumberOfElements(threadData, _exarray); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      _add = 1 /* true */;

      /* Pattern-matching assignment */
      tmpMeta1 = omc_ExpandableArray_get(threadData, _i, _exarray);
      tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
      _cse = tmpMeta2;
      _call = tmpMeta3;

      if(omc_Flags_isSet(threadData, _OMC_LIT27))
      {
        tmpMeta4 = stringAppend(_OMC_LIT127,omc_ExpressionDump_printExpStr(threadData, _cse));
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT128);
        tmpMeta6 = stringAppend(tmpMeta5,omc_ExpressionDump_printExpStr(threadData, _call));
        tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT34);
        fputs(MMC_STRINGDATA(tmpMeta7),stdout);
      }

      _eq = omc_BackendEquation_generateEquation(threadData, _cse, _call, _OMC_LIT11, _OMC_LIT130);

      _globalKnownVarHT = omc_CommonSubExpression_isEquationRedundant__flatten(threadData, _eq, _globalKnownVarHT, _globalKnownVars, _orderedVars ,&_globalKnownVars ,&_orderedVars ,&_eqRedundant ,&_isGlobalKnown);

      if((!_eqRedundant))
      {
        tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
        _varList = omc_CommonSubExpression_createVarsForExp(threadData, _cse, tmpMeta8);

        if(listEmpty(_varList))
        {
          _orderedEqs = omc_BackendEquation_add(threadData, _eq, _orderedEqs);
        }
        else
        {
          {
            modelica_metatype _var;
            for (tmpMeta9 = _varList; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _var = MMC_CAR(tmpMeta9);
              _cr = omc_BackendVariable_varCref(threadData, _var);

              if((!_isGlobalKnown))
              {
                if(_add)
                {
                  _orderedEqs = omc_BackendEquation_add(threadData, _eq, _orderedEqs);

                  _add = 0 /* false */;
                }

                if(omc_CommonSubExpression_isCSECref(threadData, _cr))
                {
                  _orderedVars = omc_BackendVariable_addVar(threadData, _var, _orderedVars);
                }
              }
              else
              {
                if((!omc_CommonSubExpression_isCSECref(threadData, _cr)))
                {
                  _delVars = omc_BackendVariable_deleteVarIfExistsAndReturn(threadData, _cr, _orderedVars ,&_orderedVars);

                  if(listEmpty(_delVars))
                  {
                    _delVars = omc_BackendVariable_getVar(threadData, _cr, _globalKnownVars, NULL);
                  }

                  _var = listGet(_delVars, ((modelica_integer) 1));
                }

                _var = omc_BackendVariable_setBindExp(threadData, _var, mmc_mk_some(_call));

                _var = omc_BackendVariable_makeParam(threadData, _var);

                _var = omc_BackendVariable_setVarFinal(threadData, _var, 1 /* true */);

                if(((listLength(_varList) > ((modelica_integer) 1)) || omc_Expression_isTuple(threadData, _cse)))
                {
                  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(20));
                  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_var), 20*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[8] = mmc_mk_some(_cse);
                  _var = tmpMeta10;
                }

                _globalKnownVars = omc_BackendVariable_addVar(threadData, _var, _globalKnownVars);
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_orderedVars) { *out_orderedVars = _orderedVars; }
  if (out_globalKnownVars) { *out_globalKnownVars = _globalKnownVars; }
  if (out_globalKnownVarHT) { *out_globalKnownVarHT = _globalKnownVarHT; }
  return _orderedEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteExp2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_boolean *out_cont, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _expList = NULL;
  modelica_integer _ix;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  _outTuple = _inTuple;
  // _key has no default value.
  // _value has no default value.
  // _tmp has no default value.
  // _expList has no default value.
  // _ix has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _key = tmpMeta2;
  _value = tmpMeta3;

  if(omc_Expression_expEqual(threadData, _inExp, _key))
  {
    _outExp = _value;

    _cont = 0 /* false */;
  }
  else
  {
    if(omc_Expression_isTSUB(threadData, _inExp))
    {
      /* Pattern-matching assignment */
      tmpMeta4 = _inExp;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,22,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
      tmp7 = mmc_unbox_integer(tmpMeta6);
      _tmp = tmpMeta5;
      _ix = tmp7  /* pattern as ty=Integer */;

      if(omc_Expression_expEqual(threadData, _tmp, _key))
      {
        /* Pattern-matching assignment */
        tmpMeta8 = _value;
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,19,1) == 0) MMC_THROW_INTERNAL();
        tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
        _expList = tmpMeta9;

        _outExp = listGet(_expList, _ix);

        _cont = 0 /* false */;
      }
      else
      {
        _outExp = _inExp;

        _cont = 1 /* true */;
      }
    }
    else
    {
      _outExp = _inExp;

      _cont = 1 /* true */;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_CommonSubExpression_substituteExp2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_cont, modelica_metatype *out_outTuple)
{
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  _outExp = omc_CommonSubExpression_substituteExp2(threadData, _inExp, _inTuple, &_cont, out_outTuple);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTuple; tuple<DAE.Exp, DAE.Exp> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inKey, modelica_metatype _inValue)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  tmpMeta1 = mmc_mk_box2(0, _inKey, _inValue);
  _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_CommonSubExpression_substituteExp2, tmpMeta1, NULL);
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_substituteDependencies(threadData_t *threadData, modelica_metatype _inDependencies, modelica_metatype __omcQ_24in_5Fht, modelica_metatype __omcQ_24in_5Fexarray, modelica_metatype _inCall, modelica_metatype _inCSE, modelica_metatype *out_exarray)
{
  modelica_metatype _ht = NULL;
  modelica_metatype _exarray = NULL;
  modelica_metatype _cse = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _cse2 = NULL;
  modelica_metatype _call2 = NULL;
  modelica_metatype _dependencies2 = NULL;
  modelica_integer _id2;
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
  _ht = __omcQ_24in_5Fht;
  _exarray = __omcQ_24in_5Fexarray;
  // _cse has no default value.
  // _call has no default value.
  // _dependencies has no default value.
  // _cse2 has no default value.
  // _call2 has no default value.
  // _dependencies2 has no default value.
  // _id2 has no default value.
  {
    modelica_metatype _id;
    for (tmpMeta1 = _inDependencies; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _id = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = omc_ExpandableArray_get(threadData, mmc_unbox_integer(_id), _exarray);
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
      _cse = tmpMeta3;
      _call = tmpMeta4;
      _dependencies = tmpMeta5;

      _call = omc_CommonSubExpression_substituteExp(threadData, _call, _inCall, _inCSE);

      if((!omc_BaseHashTable_hasKey(threadData, _call, _ht)))
      {
        tmpMeta6 = mmc_mk_box2(0, _call, _id);
        _ht = omc_BaseHashTable_add(threadData, tmpMeta6, _ht);

        tmpMeta7 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse, _call, _dependencies);
        omc_ExpandableArray_update(threadData, mmc_unbox_integer(_id), tmpMeta7, _exarray);
      }
      else
      {
        _id2 = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _call, _ht));

        /* Pattern-matching assignment */
        tmpMeta8 = omc_ExpandableArray_get(threadData, _id2, _exarray);
        tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
        tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
        tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
        _cse2 = tmpMeta9;
        _call2 = tmpMeta10;
        _dependencies2 = tmpMeta11;

        _cse2 = omc_CommonSubExpression_mergeCSETuples(threadData, _cse, _cse2);

        tmpMeta12 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse2, _call, omc_UnorderedSet_unique__list(threadData, listAppend(_dependencies, _dependencies2), boxvar_Util_id, boxvar_intEq));
        omc_ExpandableArray_update(threadData, _id2, tmpMeta12, _exarray);

        tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
        tmpMeta14 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse, _cse2, tmpMeta13);
        omc_ExpandableArray_update(threadData, mmc_unbox_integer(_id), tmpMeta14, _exarray);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_exarray) { *out_exarray = _exarray; }
  return _ht;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution3(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_metatype _orderedEqs_new = NULL;
  modelica_integer _id;
  modelica_integer _ix;
  modelica_metatype _cse = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _PR = NULL;
  modelica_metatype _dependencies = NULL;
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
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  // _orderedEqs_new has no default value.
  // _id has no default value.
  // _ix has no default value.
  // _cse has no default value.
  // _call has no default value.
  // _tmp has no default value.
  // _PR has no default value.
  // _dependencies has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _HT = tmpMeta2;
  _exarray = tmpMeta3;
  _orderedEqs_new = tmpMeta4;

  if((omc_Expression_isCall(threadData, _inExp) && omc_BaseHashTable_hasKey(threadData, _inExp, _HT)))
  {
    _id = mmc_unbox_integer(omc_BaseHashTable_get(threadData, _inExp, _HT));

    /* Pattern-matching assignment */
    tmpMeta5 = omc_ExpandableArray_get(threadData, _id, _exarray);
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
    tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
    tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 4));
    _cse = tmpMeta6;
    _call = tmpMeta7;
    _dependencies = tmpMeta8;

    _HT = omc_CommonSubExpression_substituteDependencies(threadData, _dependencies, _HT, _exarray, _call, _cse ,&_exarray);

    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta10 = mmc_mk_box4(3, &CommonSubExpression_CSE__Equation_CSE__EQUATION__desc, _cse, _call, tmpMeta9);
    omc_ExpandableArray_update(threadData, _id, tmpMeta10, _exarray);

    _outExp = _cse;
  }
  else
  {
    if(omc_Expression_isTSUB(threadData, _inExp))
    {
      /* Pattern-matching assignment */
      tmpMeta11 = _inExp;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,22,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
      tmp14 = mmc_unbox_integer(tmpMeta13);
      _tmp = tmpMeta12;
      _ix = tmp14  /* pattern as ty=Integer */;

      if(omc_Expression_isTuple(threadData, _tmp))
      {
        /* Pattern-matching assignment */
        tmpMeta15 = _tmp;
        if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,19,1) == 0) MMC_THROW_INTERNAL();
        tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
        _PR = tmpMeta16;

        _outExp = listGet(_PR, _ix);
      }
      else
      {
        _outExp = _inExp;
      }
    }
    else
    {
      _outExp = _inExp;
    }
  }

  tmpMeta17 = mmc_mk_box3(0, _HT, _exarray, _orderedEqs_new);
  _outTuple = tmpMeta17;
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution2(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTuple = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTuple has no default value.
  _outExp = omc_Expression_traverseExpBottomUp(threadData, _inExp, boxvar_CommonSubExpression_wrapFunctionCalls__substitution3, _inTuple ,&_outTuple);
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_wrapFunctionCalls__substitution(threadData_t *threadData, modelica_metatype _inEq, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outEq = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_metatype _orderedEqs_new = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outEq = _inEq;
  // _outTuple has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  // _orderedEqs_new has no default value.
  // _eq has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTuple;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _HT = tmpMeta2;
  _exarray = tmpMeta3;
  _orderedEqs_new = tmpMeta4;

  { /* match expression */
    modelica_metatype tmp7_1;
    tmp7_1 = _inEq;
    {
      int tmp7;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
        case 9: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta8 = mmc_mk_cons(_inEq, MMC_REFSTRUCTLIT(mmc_nil));
            omc_BackendDump_dumpEquationList(threadData, tmpMeta8, _OMC_LIT131);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta13 = mmc_mk_box3(0, _HT, _exarray, _orderedEqs_new);
          tmpMeta14 = omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_wrapFunctionCalls__substitution2, tmpMeta13, &tmpMeta9);
          _eq = tmpMeta14;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          _HT = tmpMeta10;
          _exarray = tmpMeta11;
          _orderedEqs_new = tmpMeta12;

          if((!omc_CommonSubExpression_isEquationRedundant(threadData, _eq)))
          {
            _orderedEqs_new = omc_BackendEquation_add(threadData, _eq, _orderedEqs_new);

            if(omc_Flags_isSet(threadData, _OMC_LIT27))
            {
              tmpMeta15 = mmc_mk_cons(_eq, MMC_REFSTRUCTLIT(mmc_nil));
              omc_BackendDump_dumpEquationList(threadData, tmpMeta15, _OMC_LIT133);
            }
          }
          else
          {
            if(omc_Flags_isSet(threadData, _OMC_LIT27))
            {
              tmpMeta16 = mmc_mk_cons(_eq, MMC_REFSTRUCTLIT(mmc_nil));
              omc_BackendDump_dumpEquationList(threadData, tmpMeta16, _OMC_LIT132);
            }
          }
          goto tmp6_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT27))
          {
            tmpMeta17 = mmc_mk_cons(_inEq, MMC_REFSTRUCTLIT(mmc_nil));
            omc_BackendDump_dumpEquationList(threadData, tmpMeta17, _OMC_LIT134);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta22 = mmc_mk_box3(0, _HT, _exarray, _orderedEqs_new);
          tmpMeta23 = omc_BackendEquation_traverseExpsOfEquation(threadData, _inEq, boxvar_CommonSubExpression_wrapFunctionCalls__substitution2, tmpMeta22, &tmpMeta18);
          _eq = tmpMeta23;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          _HT = tmpMeta19;
          _exarray = tmpMeta20;
          _orderedEqs_new = tmpMeta21;

          if((!omc_CommonSubExpression_isEquationRedundant(threadData, _eq)))
          {
            _orderedEqs_new = omc_BackendEquation_add(threadData, _eq, _orderedEqs_new);
          }
          goto tmp6_done;
        }
        default:
        tmp6_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          _orderedEqs_new = omc_BackendEquation_add(threadData, _inEq, _orderedEqs_new);
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
  ;

  tmpMeta24 = mmc_mk_box3(0, _HT, _exarray, _orderedEqs_new);
  _outTuple = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outEq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_findCallsInGlobalKnownVars(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inTuple, modelica_metatype *out_outTuple)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outTuple = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  _outTuple = _inTuple;
  // _exp has no default value.
  // _eq has no default value.
  if((((!omc_BackendVariable_isInput(threadData, _inVar)) && (!(omc_BackendVariable_isParam(threadData, _inVar) && (!omc_BackendVariable_varFixed(threadData, _inVar))))) && isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 7))))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 7)));
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _exp = tmpMeta2;

    if(omc_CommonSubExpression_isCall(threadData, _exp))
    {
      tmpMeta3 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 6))));
      _eq = omc_BackendEquation_generateEquation(threadData, tmpMeta3, _exp, _OMC_LIT11, _OMC_LIT130);

      omc_CommonSubExpression_wrapFunctionCalls__analysis(threadData, _eq, _inTuple ,&_outTuple);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_outTuple) { *out_outTuple = _outTuple; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_CommonSubExpression_VarToGlobalKnownVarHT(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inGlobalKnownVarHT, modelica_metatype *out_outGlobalKnownVarHT)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outGlobalKnownVarHT = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outVar = _inVar;
  _outGlobalKnownVarHT = _inGlobalKnownVarHT;
  if((((!omc_BackendVariable_isInput(threadData, _inVar)) && (!(omc_BackendVariable_isParam(threadData, _inVar) && (!omc_BackendVariable_varFixed(threadData, _inVar))))) && isSome((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 7))))))
  {
    _outGlobalKnownVarHT = omc_BaseHashSet_add(threadData, omc_BackendVariable_varCref(threadData, _inVar), _inGlobalKnownVarHT);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outGlobalKnownVarHT) { *out_outGlobalKnownVarHT = _outGlobalKnownVarHT; }
  return _outVar;
}

DLLDirection
modelica_metatype omc_CommonSubExpression_wrapFunctionCalls(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_integer _size;
  modelica_metatype _HT = NULL;
  modelica_metatype _exarray = NULL;
  modelica_integer _cseIndex;
  modelica_integer _index;
  modelica_metatype _shared = NULL;
  modelica_metatype _functionTree = NULL;
  modelica_metatype _orderedEqs = NULL;
  modelica_metatype _orderedEqs_new = NULL;
  modelica_metatype _orderedVars = NULL;
  modelica_metatype _globalKnownVars = NULL;
  modelica_metatype _eqSystems = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _varList = NULL;
  modelica_string _daeTypeStr = NULL;
  modelica_boolean _isSimulationDAE;
  modelica_metatype _globalKnownVarHT = NULL;
  modelica_metatype _cse = NULL;
  modelica_metatype _call = NULL;
  modelica_metatype _dependencies = NULL;
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
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _size has no default value.
  // _HT has no default value.
  // _exarray has no default value.
  _cseIndex = omc_System_tmpTickIndex(threadData, ((modelica_integer) 23));
  // _index has no default value.
  // _shared has no default value.
  // _functionTree has no default value.
  // _orderedEqs has no default value.
  // _orderedEqs_new has no default value.
  // _orderedVars has no default value.
  // _globalKnownVars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqSystems = tmpMeta1;
  // _varList has no default value.
  _daeTypeStr = omc_BackendDump_printBackendDAEType2String(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)))), 15))));
  _isSimulationDAE = (stringEqual(_daeTypeStr, _OMC_LIT135));
  // _globalKnownVarHT has no default value.
  // _cse has no default value.
  // _call has no default value.
  // _dependencies has no default value.
  _size = ((modelica_integer) 42) + omc_BackendDAEUtil_maxSizeOfEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 2))));

  _exarray = omc_ExpandableArray_new(threadData, _size, _OMC_LIT137);

  _size = omc_Util_nextPrime(threadData, ((modelica_integer)floor((2.4) * (((modelica_real)_size)))));

  _HT = omc_HashTableExpToIndex_emptyHashTableSized(threadData, _size);

  _shared = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)));

  /* Pattern-matching assignment */
  tmpMeta2 = _shared;
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 12));
  _globalKnownVars = tmpMeta3;
  _functionTree = tmpMeta4;

  _globalKnownVarHT = omc_HashSet_emptyHashSetSized(threadData, omc_Util_nextPrime(threadData, ((modelica_integer)floor((2.4) * (((modelica_real)((modelica_integer) 42) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_globalKnownVars), 5))))))))));

  if(_isSimulationDAE)
  {
    _globalKnownVarHT = omc_BackendVariable_traverseBackendDAEVars(threadData, _globalKnownVars, boxvar_CommonSubExpression_VarToGlobalKnownVarHT, _globalKnownVarHT);
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT27))
  {
    tmpMeta5 = stringAppend(_OMC_LIT138,_daeTypeStr);
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT139);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT140);
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT140);
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT141);
    fputs(MMC_STRINGDATA(tmpMeta9),stdout);

    fputs(MMC_STRINGDATA(_OMC_LIT142),stdout);

    omc_BackendDump_dumpVariables(threadData, _globalKnownVars, _OMC_LIT143);

    fputs(MMC_STRINGDATA(_OMC_LIT144),stdout);

    omc_BaseHashSet_dumpHashSet(threadData, _globalKnownVarHT);
  }

  {
    modelica_metatype _syst;
    for (tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 2))); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _syst = MMC_CAR(tmpMeta10);
      if(omc_Flags_isSet(threadData, _OMC_LIT27))
      {
        tmpMeta11 = stringAppend(_OMC_LIT145,_daeTypeStr);
        tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT146);
        tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT140);
        tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT34);
        fputs(MMC_STRINGDATA(tmpMeta14),stdout);

        omc_BackendDump_dumpVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), _OMC_LIT147);

        omc_BackendDump_dumpEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), _OMC_LIT148);

        fputs(MMC_STRINGDATA(_OMC_LIT149),stdout);
      }

      _HT = omc_BaseHashTable_clear(threadData, _HT);

      _exarray = omc_ExpandableArray_clear(threadData, _exarray);

      _index = ((modelica_integer) 0);

      _orderedEqs = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3)));

      _orderedVars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2)));

      /* Pattern-matching assignment */
      tmpMeta15 = mmc_mk_box5(0, _HT, _exarray, mmc_mk_integer(_cseIndex), mmc_mk_integer(_index), _functionTree);
      tmpMeta16 = omc_BackendEquation_traverseEquationArray(threadData, _orderedEqs, boxvar_CommonSubExpression_wrapFunctionCalls__analysis, tmpMeta15);
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
      tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
      tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
      tmp20 = mmc_unbox_integer(tmpMeta19);
      tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
      tmp22 = mmc_unbox_integer(tmpMeta21);
      _HT = tmpMeta17;
      _exarray = tmpMeta18;
      _cseIndex = tmp20  /* pattern as ty=Integer */;
      _index = tmp22  /* pattern as ty=Integer */;

      if(omc_Flags_isSet(threadData, _OMC_LIT27))
      {
        fputs(MMC_STRINGDATA(_OMC_LIT150),stdout);

        omc_BaseHashTable_dumpHashTable(threadData, _HT);

        fputs(MMC_STRINGDATA(omc_ExpandableArray_toString(threadData, _exarray, _OMC_LIT151, boxvar_CommonSubExpression_printCSEEquation, 1 /* true */)),stdout);
      }

      if((_index > ((modelica_integer) 0)))
      {
        _exarray = omc_CommonSubExpression_determineDependencies(threadData, _exarray, _HT);

        if(omc_Flags_isSet(threadData, _OMC_LIT27))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT153),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT154),stdout);

          omc_BaseHashTable_dumpHashTable(threadData, _HT);

          fputs(MMC_STRINGDATA(omc_ExpandableArray_toString(threadData, _exarray, _OMC_LIT155, boxvar_CommonSubExpression_printCSEEquation, 1 /* true */)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT156),stdout);
        }

        _orderedEqs_new = omc_BackendEquation_emptyEqnsSized(threadData, omc_ExpandableArray_getNumberOfElements(threadData, _orderedEqs) + omc_ExpandableArray_getNumberOfElements(threadData, _exarray));

        /* Pattern-matching assignment */
        tmpMeta23 = mmc_mk_box3(0, _HT, _exarray, _orderedEqs_new);
        tmpMeta24 = omc_BackendEquation_traverseEquationArray(threadData, _orderedEqs, boxvar_CommonSubExpression_wrapFunctionCalls__substitution, tmpMeta23);
        tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
        tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
        tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
        _HT = tmpMeta25;
        _exarray = tmpMeta26;
        _orderedEqs_new = tmpMeta27;

        if(omc_Flags_isSet(threadData, _OMC_LIT27))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT157),stdout);

          omc_BaseHashTable_dumpHashTable(threadData, _HT);

          fputs(MMC_STRINGDATA(omc_ExpandableArray_toString(threadData, _exarray, _OMC_LIT158, boxvar_CommonSubExpression_printCSEEquation, 1 /* true */)),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT159),stdout);
        }

        _orderedEqs_new = omc_CommonSubExpression_createCseEquations(threadData, _exarray, _orderedEqs_new, _orderedVars, _globalKnownVars, _globalKnownVarHT ,&_orderedVars ,&_globalKnownVars, NULL);

        tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[3] = _orderedEqs_new;
        _syst = tmpMeta28;

        tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[2] = _orderedVars;
        _syst = tmpMeta29;

        if((!(omc_BackendEquation_equationArraySize(threadData, _orderedEqs_new) == mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orderedVars), 5)))))))
        {
          omc_Error_addCompilerWarning(threadData, _OMC_LIT160);
        }

        tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[4] = mmc_mk_none();
        _syst = tmpMeta30;

        tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[5] = mmc_mk_none();
        _syst = tmpMeta31;

        tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(11));
        memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
        ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[7] = _OMC_LIT161;
        _syst = tmpMeta32;

        if((omc_Flags_isSet(threadData, _OMC_LIT43) || omc_Flags_isSet(threadData, _OMC_LIT27)))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT162),stdout);

          tmpMeta33 = stringAppend(_OMC_LIT163,omc_BackendDump_printBackendDAEType2String(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 15)))));
          tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT164);
          omc_BackendDump_dumpVariables(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), tmpMeta34);

          tmpMeta35 = stringAppend(_OMC_LIT165,omc_BackendDump_printBackendDAEType2String(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 15)))));
          tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT164);
          omc_BackendDump_dumpEquationArray(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), tmpMeta36);

          tmpMeta37 = stringAppend(_OMC_LIT166,omc_BackendDump_printBackendDAEType2String(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_shared), 15)))));
          tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT164);
          omc_BackendDump_dumpVariables(threadData, _globalKnownVars, tmpMeta38);

          fputs(MMC_STRINGDATA(omc_ExpandableArray_toString(threadData, _exarray, _OMC_LIT167, boxvar_CommonSubExpression_printCSEEquation, 1 /* true */)),stdout);
        }

        if(omc_Flags_isSet(threadData, _OMC_LIT27))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT168),stdout);

          omc_BackendDump_dumpEqSystem(threadData, _syst, _OMC_LIT169);
        }
      }
      else
      {
        if(omc_Flags_isSet(threadData, _OMC_LIT27))
        {
          fputs(MMC_STRINGDATA(_OMC_LIT152),stdout);
        }
      }

      tmpMeta39 = mmc_mk_cons(_syst, _eqSystems);
      _eqSystems = tmpMeta39;
    }
  }

  tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(22));
  memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_shared), 22*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[2] = _globalKnownVars;
  _shared = tmpMeta41;

  omc_System_tmpTickSetIndex(threadData, _cseIndex, ((modelica_integer) 23));

  _eqSystems = listReverseInPlace(_eqSystems);

  tmpMeta42 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqSystems, _shared);
  _outDAE = tmpMeta42;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_CommonSubExpression_printCSEEquation(threadData_t *threadData, modelica_metatype _cseEquation)
{
  modelica_string _str = NULL;
  modelica_boolean _first;
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
  // _str has no default value.
  _first = 1 /* true */;
  tmpMeta1 = stringAppend(omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 2)))),_OMC_LIT170);
  tmpMeta2 = stringAppend(tmpMeta1,omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 3)))));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT171);
  _str = tmpMeta3;

  {
    modelica_metatype _i;
    for (tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cseEquation), 4))); !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _i = MMC_CAR(tmpMeta4);
      if(_first)
      {
        tmpMeta5 = stringAppend(_str,intString(mmc_unbox_integer(_i)));
        _str = tmpMeta5;

        _first = 0 /* false */;
      }
      else
      {
        tmpMeta6 = stringAppend(_str,_OMC_LIT1);
        tmpMeta7 = stringAppend(tmpMeta6,intString(mmc_unbox_integer(_i)));
        _str = tmpMeta7;
      }
    }
  }

  tmpMeta9 = stringAppend(_str,_OMC_LIT2);
  _str = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _str;
}

