#include "omc_simulation_settings.h"
#include "SerializeModelInfo.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,4,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,3,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,1,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,1,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "%d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,2,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,1,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data " \f\n\r	\v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,6,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,8,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,5,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,10,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "dummy derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,16,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "dummy state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,11,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "clocked state"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "discrete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,8,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "parameter"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,9,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "constant"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,8,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "external object"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,15,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "jacobian variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,17,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "jacobian differentiated variable"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,32,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,10,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "final constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,16,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "use derivation of input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,23,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "derivation of input"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,19,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "time grid for optimization"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,26,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "variable for transform loop in constraint"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,41,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "helper variable transform ode for symSolver"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,43,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "iteration variable for solving an algebraic loop"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,48,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "residual variable for dae mode"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,30,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,17,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT31,_OMC_LIT32,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "SerializeModelInfo.varKindString failed for "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,44,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "{\"row\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,7,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data ",\"column\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,10,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data ",\"exp\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,8,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "\",\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,11,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,1,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "SerializeModelInfo.serializeLinearCell failed. Expected only SES_RESIDUAL as input."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,83,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,1) {_OMC_LIT42,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,12,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data ",\"parent\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,10,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data ",\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,12,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "\",\"tag\":\"residual\",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,27,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "],\"equation\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,15,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "\"],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,12,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\",\"tag\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,9,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,14,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\"],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,11,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data ",\n{\"eqIndex\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,13,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\",\"tag\":\"system\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,16,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\",\"tag\":\"tornsystem\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,20,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data ",\"display\":\"linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,31,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data ",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,12,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "],\"equation\":[{\"size\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,22,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data ",\"density\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,11,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "%.2f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,4,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data ",\"A\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,6,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "],\"b\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,7,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "]}]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,4,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "]}]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,5,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "\",\"tag\":\"algorithm\",\"defines\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,32,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "],\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,14,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "],\"source\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,11,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "\",\"tag\":\"algorithm\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,32,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data ",\"display\":\"non-linear\",\"unknowns\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,35,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "],\"equation\":[["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,15,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "],["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,3,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "]]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,3,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "]]},"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,4,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "\",\"tag\":\"if-equation\",\"display\":\"if-equation\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,58,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,2,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "\",\"tag\":\"container\",\"display\":\"mixed\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,49,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "\",\"tag\":\"when\",\"defines\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,26,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "],\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,10,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "\",\"tag\":\"when\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,14,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data ",\"uses\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,9,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data ",\"tag\":\"alias\",\"equation\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,27,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "],\"section\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,13,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,2,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "serializeEquation failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,26,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/SimCode/SerializeModelInfo.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,82,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT87_6,1.770631566e9);
#define _OMC_LIT87_6 MMC_REFREALLIT(_OMC_LIT_STRUCT87_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT86,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1081)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1081)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT87_6}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "assign"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,6,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "torn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,4,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "jacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,8,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "{\"op\":\"before-after\",\"display\":\"flattening\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,53,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "\",\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,3,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "\"]}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,3,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "{\"op\":\"info\",\"display\":\"scode\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,40,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "{\"op\":\"before-after\",\"display\":\"simplify\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,51,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "{\"op\":\"before-after\",\"display\":\"inline\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,49,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "{\"op\":\"before-after\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,49,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "{\"op\":\"before-after-assert\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,56,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "{\"op\":\"before-after\",\"display\":\"residual\",\"data\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,50,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data ",\"0 = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,6,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "{\"op\":\"chain\",\"display\":\"substitution\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,48,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "{\"op\":\"info\",\"display\":\"solved\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,41,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "{\"op\":\"before-after\",\"display\":\"differentiate d/d"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,49,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,11,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "{\"op\":\"before-after\",\"display\":\"scalarize ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,43,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "]\",\"data\":[\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,12,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "{\"op\":\"dummy-der\",\"display\":\"dummy derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,45,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "serializeOperation failed: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,27,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT110_6,1.770631566e9);
#define _OMC_LIT110_6 MMC_REFREALLIT(_OMC_LIT_STRUCT110_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT86,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(397)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(397)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT110_6}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "\"info\":{\"file\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,16,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "\",\"lineStart\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,14,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data ",\"lineEnd\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,11,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data ",\"colStart\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,12,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data ",\"colEnd\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,10,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,1,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data ",\"within\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,11,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data ",\"instance\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,13,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data ",\"typeLst\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,12,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data ",\"operations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,15,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data ",\"type\":\"Real\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,14,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data ",\"type\":\"Integer\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,17,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data ",\"type\":\"Boolean\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,17,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data ",\"type\":\"String\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,16,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data ",\"type\":\"Enumeration\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,21,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "\":{\"comment\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,14,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "\",\"kind\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,10,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data ",\"unit\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,9,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "\",\"displayUnit\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,17,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data ",\"index\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,9,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data ",\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,2,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "_info.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,10,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,1,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "omsic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,5,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "{\"format\":\"Transformational debugger info\",\"version\":1,\n\"info\":{\"name\":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,71,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data ",\"description\":\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,16,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "\"},\n\"variables\":{\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,18,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "\n},\n\"equations\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,17,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "{\"eqIndex\":0,\"tag\":\"dummy\"}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,27,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,7,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "initial-lambda0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,15,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "removed-initial"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,15,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "regular"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,7,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "synchronous"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,11,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "start"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,5,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "nominal"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,7,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "min"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,3,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "max"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,3,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "assertions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,10,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "inline"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,6,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "residuals"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,9,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "\n],\n\"functions\":["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,17,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "\n]\n}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,4,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
#define _OMC_LIT154_data "SerializeModelInfo.serialize failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT154,35,_OMC_LIT154_data);
#define _OMC_LIT154 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT154)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT155_6,1.770631566e9);
#define _OMC_LIT155_6 MMC_REFREALLIT(_OMC_LIT_STRUCT155_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT155,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT86,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(126)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(126)),MMC_IMMEDIATE(MMC_TAGFIXNUM(84)),_OMC_LIT155_6}};
#define _OMC_LIT155 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,0,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
#include "util/modelica.h"

#include "SerializeModelInfo_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeFunction,2,0) {(void*) boxptr_SerializeModelInfo_serializeFunction,0}};
#define boxvar_SerializeModelInfo_serializeFunction MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeFunction)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_writeEqExpStr,2,0) {(void*) boxptr_SerializeModelInfo_writeEqExpStr,0}};
#define boxvar_SerializeModelInfo_writeEqExpStr MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_writeEqExpStr)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeIfBranch,2,0) {(void*) boxptr_SerializeModelInfo_serializeIfBranch,0}};
#define boxvar_SerializeModelInfo_serializeIfBranch MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeIfBranch)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquationIndex,2,0) {(void*) boxptr_SerializeModelInfo_serializeEquationIndex,0}};
#define boxvar_SerializeModelInfo_serializeEquationIndex MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquationIndex)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializePath,2,0) {(void*) boxptr_SerializeModelInfo_serializePath,0}};
#define boxvar_SerializeModelInfo_serializePath MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializePath)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeString,2,0) {(void*) boxptr_SerializeModelInfo_serializeString,0}};
#define boxvar_SerializeModelInfo_serializeString MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeString)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeCref,2,0) {(void*) boxptr_SerializeModelInfo_serializeCref,0}};
#define boxvar_SerializeModelInfo_serializeCref MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeCref)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeExp,2,0) {(void*) boxptr_SerializeModelInfo_serializeExp,0}};
#define boxvar_SerializeModelInfo_serializeExp MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeExp)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func, modelica_boolean _append, modelica_string _sep);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func, modelica_metatype _append, modelica_metatype _sep);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList,2,0) {(void*) boxptr_SerializeModelInfo_serializeList,0}};
#define boxvar_SerializeModelInfo_serializeList MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeList)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeStatement,2,0) {(void*) boxptr_SerializeModelInfo_serializeStatement,0}};
#define boxvar_SerializeModelInfo_serializeStatement MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SerializeModelInfo_getWhenUses(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _value);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_getWhenUses,2,0) {(void*) boxptr_SerializeModelInfo_getWhenUses,0}};
#define boxvar_SerializeModelInfo_getWhenUses MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_getWhenUses)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeModelInfo_varKindString(threadData_t *threadData, modelica_metatype _varKind, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_varKindString,2,0) {(void*) boxptr_SerializeModelInfo_varKindString,0}};
#define boxvar_SerializeModelInfo_varKindString MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_varKindString)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeLinearCell,2,0) {(void*) boxptr_SerializeModelInfo_serializeLinearCell,0}};
#define boxvar_SerializeModelInfo_serializeLinearCell MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeLinearCell)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquation,2,0) {(void*) boxptr_SerializeModelInfo_serializeEquation,0}};
#define boxvar_SerializeModelInfo_serializeEquation MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeEquation)
PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeModelInfo_tagFromAssignType(threadData_t *threadData, modelica_integer _assignType);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_tagFromAssignType(threadData_t *threadData, modelica_metatype _assignType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_tagFromAssignType,2,0) {(void*) boxptr_SerializeModelInfo_tagFromAssignType,0}};
#define boxvar_SerializeModelInfo_tagFromAssignType MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_tagFromAssignType)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_complex _file, modelica_metatype _op);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _op);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeOperation,2,0) {(void*) boxptr_SerializeModelInfo_serializeOperation,0}};
#define boxvar_SerializeModelInfo_serializeOperation MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeOperation)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_complex _file, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_metatype _file, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeInfo,2,0) {(void*) boxptr_SerializeModelInfo_serializeInfo,0}};
#define boxvar_SerializeModelInfo_serializeInfo MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeInfo)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeSource,2,0) {(void*) boxptr_SerializeModelInfo_serializeSource,0}};
#define boxvar_SerializeModelInfo_serializeSource MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeSource)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_complex _file, modelica_metatype _ty);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_metatype _file, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeTypeName,2,0) {(void*) boxptr_SerializeModelInfo_serializeTypeName,0}};
#define boxvar_SerializeModelInfo_serializeTypeName MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeTypeName)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVar,2,0) {(void*) boxptr_SerializeModelInfo_serializeVar,0}};
#define boxvar_SerializeModelInfo_serializeVar MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVar)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations, modelica_boolean _inFirst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations, modelica_metatype _inFirst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarsHelp,2,0) {(void*) boxptr_SerializeModelInfo_serializeVarsHelp,0}};
#define boxvar_SerializeModelInfo_serializeVarsHelp MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVarsHelp)
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations);
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVars,2,0) {(void*) boxptr_SerializeModelInfo_serializeVars,0}};
#define boxvar_SerializeModelInfo_serializeVars MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeVars)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeWork,2,0) {(void*) boxptr_SerializeModelInfo_serializeWork,0}};
#define boxvar_SerializeModelInfo_serializeWork MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serializeWork)

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_complex _file, modelica_metatype _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT0);

  omc_SerializeModelInfo_serializePath(threadData, _file, omc_SimCodeUtil_functionPath(threadData, _func));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeFunction(threadData_t *threadData, modelica_metatype _file, modelica_metatype _func)
{
  omc_SerializeModelInfo_serializeFunction(threadData, _file, _func);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_complex _file, modelica_metatype _eqExp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eqExp;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT1);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 2)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqExp), 3)))), 3);
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_writeEqExpStr(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eqExp)
{
  omc_SerializeModelInfo_writeEqExpStr(threadData, _file, _eqExp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_complex _file, modelica_metatype _branch)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  // _eqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _branch;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _exp = tmpMeta2;
  _eqs = tmpMeta3;

  omc_File_write(threadData, _file, _OMC_LIT3);

  omc_SerializeModelInfo_serializeExp(threadData, _file, _exp);

  omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex, 1 /* true */, _OMC_LIT4);

  omc_File_write(threadData, _file, _OMC_LIT5);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeIfBranch(threadData_t *threadData, modelica_metatype _file, modelica_metatype _branch)
{
  omc_SerializeModelInfo_serializeIfBranch(threadData, _file, _branch);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_writeInt(threadData, _file, omc_SimCodeUtil_simEqSystemIndex(threadData, _eq), _OMC_LIT6);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquationIndex(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq)
{
  omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, _eq);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_complex _file, modelica_metatype _path)
{
  modelica_metatype _p = NULL;
  modelica_boolean _b;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _p = _path;
  _b = 1 /* true */;
  omc_File_write(threadData, _file, _OMC_LIT7);

  while(1)
  {
    if(!_b) break;
    
    
    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = _p;
      {
        int tmp4;
        {
          switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
          case 4: {
            
            /* Pattern matching succeeded */
            omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2))), 3);
            tmpMeta[0+0] = _p;
            tmp1_c1 = 0 /* false */;
            goto tmp3_done;
          }
          case 3: {
            
            /* Pattern matching succeeded */
            omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2))), 3);

            omc_File_write(threadData, _file, _OMC_LIT8);
            tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
            tmp1_c1 = 1 /* true */;
            goto tmp3_done;
          }
          case 5: {
            
            /* Pattern matching succeeded */
            tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
            tmp1_c1 = 1 /* true */;
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
    _p = tmpMeta[0+0];
    _b = tmp1_c1;
  }

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializePath(threadData_t *threadData, modelica_metatype _file, modelica_metatype _path)
{
  omc_SerializeModelInfo_serializePath(threadData, _file, _path);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_complex _file, modelica_string _string)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, _string, 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeString(threadData_t *threadData, modelica_metatype _file, modelica_metatype _string)
{
  omc_SerializeModelInfo_serializeString(threadData, _file, _string);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_complex _file, modelica_metatype _cr)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_ComponentReference_writeCref(threadData, _file, _cr, 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeCref(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cr)
{
  omc_SerializeModelInfo_serializeCref(threadData, _file, _cr);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_complex _file, modelica_metatype _exp)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, _exp), 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeExp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _exp)
{
  omc_SerializeModelInfo_serializeExp(threadData, _file, _exp);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_complex _file, modelica_metatype _lst, modelica_fnptr _func, modelica_boolean _append, modelica_string _sep)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!listEmpty(_lst)))
  {
    if(_append)
    {
      omc_File_write(threadData, _file, _sep);
    }

    (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, listHead(_lst)) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, listHead(_lst));

    {
      modelica_metatype _a;
      for (tmpMeta1 = listRest(_lst); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
      {
        _a = MMC_CAR(tmpMeta1);
        omc_File_write(threadData, _file, _sep);

        (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _file, _a) : ((void(*)(threadData_t*, modelica_complex, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _file, _a);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeList(threadData_t *threadData, modelica_metatype _file, modelica_metatype _lst, modelica_fnptr _func, modelica_metatype _append, modelica_metatype _sep)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_append);
  omc_SerializeModelInfo_serializeList(threadData, _file, _lst, _func, tmp1, _sep);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_complex _file, modelica_metatype _stmt)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_DAEDump_ppStatementStr(threadData, _stmt), _OMC_LIT9), 3);

  omc_File_write(threadData, _file, _OMC_LIT7);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeStatement(threadData_t *threadData, modelica_metatype _file, modelica_metatype _stmt)
{
  omc_SerializeModelInfo_serializeStatement(threadData, _file, _stmt);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SerializeModelInfo_getWhenUses(threadData_t *threadData, modelica_metatype _conditions, modelica_metatype _value)
{
  modelica_metatype _uses = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _uses has no default value.
  _uses = listAppend(_conditions, omc_Expression_extractCrefsFromExpDerPreStart(threadData, _value, 1 /* true */));

  _uses = omc_UnorderedSet_unique__list(threadData, _uses, boxvar_ComponentReference_hashComponentRef, boxvar_ComponentReference_crefEqual);
  _return: OMC_LABEL_UNUSED
  return _uses;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeModelInfo_varKindString(threadData_t *threadData, modelica_metatype _varKind, modelica_metatype _var)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _varKind;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT10;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT12;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT13;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT22;
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT23;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT25;
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
          goto tmp3_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT27;
          goto tmp3_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT28;
          goto tmp3_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT28;
          goto tmp3_done;
        }
        case 26: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT29;
          goto tmp3_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT30;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT36,omc_SimCodeUtil_simVarString(threadData, _var));
          tmpMeta5 = mmc_mk_cons(tmpMeta6, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT35, tmpMeta5);
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_complex _file, modelica_metatype _cell, modelica_boolean _withOperations)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cell;
    {
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _eq = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _i has no default value.
      // _j has no default value.
      // _eq has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,5) == 0) goto tmp2_end;
          
          _i = tmp6  /* pattern as ty=Integer */;
          _j = tmp8  /* pattern as ty=Integer */;
          _eq = tmpMeta9;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT37);

          omc_File_write(threadData, _file, intString(_i));

          omc_File_write(threadData, _file, _OMC_LIT38);

          omc_File_write(threadData, _file, intString(_j));

          omc_File_write(threadData, _file, _OMC_LIT39);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT40);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT35, _OMC_LIT43);
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
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeLinearCell(threadData_t *threadData, modelica_metatype _file, modelica_metatype _cell, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeLinearCell(threadData, _file, _cell, tmp1);
  return;
}

static void closure0_SerializeModelInfo_serializeLinearCell(threadData_t *thData, modelica_metatype closure, modelica_complex file, modelica_metatype cell)
{
  modelica_metatype withOperations = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_SerializeModelInfo_serializeLinearCell(thData, file, cell, withOperations);
}static void closure1_SerializeModelInfo_serializeLinearCell(threadData_t *thData, modelica_metatype closure, modelica_complex file, modelica_metatype cell)
{
  modelica_metatype withOperations = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_SerializeModelInfo_serializeLinearCell(thData, file, cell, withOperations);
}static void closure2_SerializeModelInfo_serializeLinearCell(threadData_t *thData, modelica_metatype closure, modelica_complex file, modelica_metatype cell)
{
  modelica_metatype withOperations = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_SerializeModelInfo_serializeLinearCell(thData, file, cell, withOperations);
}
PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_complex _file, modelica_metatype _eq, modelica_string _section, modelica_boolean _withOperations, modelica_integer _parent, modelica_boolean _first, modelica_integer _assign_type)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!_first))
  {
    omc_File_write(threadData, _file, _OMC_LIT4);
  }

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _eq;
    {
      modelica_integer _i;
      modelica_integer _j;
      modelica_metatype _stmt = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _jeqs = NULL;
      modelica_metatype _constantEqns = NULL;
      modelica_metatype _lSystem = NULL;
      modelica_metatype _atL = NULL;
      modelica_metatype _nlSystem = NULL;
      modelica_metatype _atNL = NULL;
      modelica_metatype _whenOp = NULL;
      modelica_metatype _crefs = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _i has no default value.
      // _j has no default value.
      // _stmt has no default value.
      // _eqs has no default value.
      // _jeqs has no default value.
      // _constantEqns has no default value.
      // _lSystem has no default value.
      // _atL has no default value.
      // _nlSystem has no default value.
      // _atNL has no default value.
      // _whenOp has no default value.
      // _crefs has no default value.
      tmp3 = 0;
      for (; tmp3 < 22; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,7) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT47);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta5 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta6);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT52);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta7 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta8);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta9 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta10);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 6: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,8,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta11 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta12);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 7: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta13 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta14);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT52);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 8: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta15 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta16);

          omc_ComponentReference_writeCref(threadData, _file, omc_Expression_expCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT52);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 9: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_real tmp41;
          modelica_metatype tmpMeta42;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,12,3) == 0) goto tmp2_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (!optionNone(tmpMeta18)) goto tmp2_end;
          
          _lSystem = tmpMeta17;
          /* Pattern matching succeeded */
          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?2:1));

            {
              modelica_metatype _e;
              for (tmpMeta19 = listRest(_eqs); !listEmpty(tmpMeta19); tmpMeta19=MMC_CDR(tmpMeta19))
              {
                _e = MMC_CAR(tmpMeta19);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?2:1));
              }
            }
          }

          { /* match expression */
            modelica_metatype tmp24_1;
            tmp24_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 9)));
            {
              volatile mmc_switch_type tmp24;
              int tmp25;
              tmp24 = 0;
              for (; tmp24 < 2; tmp24++) {
                switch (MMC_SWITCH_CAST(tmp24)) {
                case 0: {
                  modelica_metatype tmpMeta26;
                  modelica_metatype tmpMeta27;
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_metatype tmpMeta30;
                  modelica_metatype tmpMeta31;
                  if (optionNone(tmp24_1)) goto tmp23_end;
                  tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp24_1), 1));
                  tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
                  if (listEmpty(tmpMeta27)) goto tmp23_end;
                  tmpMeta28 = MMC_CAR(tmpMeta27);
                  tmpMeta29 = MMC_CDR(tmpMeta27);
                  tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
                  tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 5));
                  if (!listEmpty(tmpMeta29)) goto tmp23_end;
                  
                  _jeqs = tmpMeta30;
                  _constantEqns = tmpMeta31;
                  /* Pattern matching succeeded */
                  tmpMeta21 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp23_done;
                }
                case 1: {
                  modelica_metatype tmpMeta32;
                  
                  /* Pattern matching succeeded */
                  tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta21 = tmpMeta32;
                  goto tmp23_done;
                }
                }
                goto tmp23_end;
                tmp23_end: ;
              }
              goto goto_22;
              goto_22:;
              goto goto_1;
              goto tmp23_done;
              tmp23_done:;
            }
          }
          _jeqs = tmpMeta21;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta33 = listRest(_jeqs); !listEmpty(tmpMeta33); tmpMeta33=MMC_CDR(tmpMeta33))
              {
                _e = MMC_CAR(tmpMeta33);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, 3);
              }
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT44);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta35 = stringAppend(_OMC_LIT56,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta36);

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp38;
            modelica_metatype tmpMeta39;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp40;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5)));
            tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta39; /* defaultValue */
            tmp38 = &__omcQ_24tmpVar3;
            while(1) {
              tmp40 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp40--;
              }
              if (tmp40 == 0) {
                __omcQ_24tmpVar2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                *tmp38 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp38 = &MMC_CDR(*tmp38);
              } else if (tmp40 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp38 = mmc_mk_nil();
            tmpMeta37 = __omcQ_24tmpVar3;
          }
          omc_SerializeModelInfo_serializeList(threadData, _file, tmpMeta37, boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT59);

            tmp41 = ((modelica_real)(_i) * (_i));
            if (tmp41 == 0) {goto goto_1;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp41, _OMC_LIT60);
          }

          omc_File_write(threadData, _file, _OMC_LIT61);

          tmpMeta42 = mmc_mk_box1(0, mmc_mk_boolean(_withOperations));
          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), (modelica_fnptr) mmc_mk_box2(0,closure0_SerializeModelInfo_serializeLinearCell,tmpMeta42), 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT62);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeModelInfo_serializeExp, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT63);
          goto tmp2_done;
        }
        case 10: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_real tmp68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_real tmp92;
          modelica_metatype tmpMeta93;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,12,3) == 0) goto tmp2_end;
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (optionNone(tmpMeta44)) goto tmp2_end;
          tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta44), 1));
          
          _lSystem = tmpMeta43;
          _atL = tmpMeta45;
          /* Pattern matching succeeded */
          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?2:1));

            {
              modelica_metatype _e;
              for (tmpMeta46 = listRest(_eqs); !listEmpty(tmpMeta46); tmpMeta46=MMC_CDR(tmpMeta46))
              {
                _e = MMC_CAR(tmpMeta46);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4))))?2:1));
              }
            }
          }

          { /* match expression */
            modelica_metatype tmp51_1;
            tmp51_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 9)));
            {
              volatile mmc_switch_type tmp51;
              int tmp52;
              tmp51 = 0;
              for (; tmp51 < 2; tmp51++) {
                switch (MMC_SWITCH_CAST(tmp51)) {
                case 0: {
                  modelica_metatype tmpMeta53;
                  modelica_metatype tmpMeta54;
                  modelica_metatype tmpMeta55;
                  modelica_metatype tmpMeta56;
                  modelica_metatype tmpMeta57;
                  modelica_metatype tmpMeta58;
                  if (optionNone(tmp51_1)) goto tmp50_end;
                  tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp51_1), 1));
                  tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta53), 2));
                  if (listEmpty(tmpMeta54)) goto tmp50_end;
                  tmpMeta55 = MMC_CAR(tmpMeta54);
                  tmpMeta56 = MMC_CDR(tmpMeta54);
                  tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 2));
                  tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta55), 5));
                  if (!listEmpty(tmpMeta56)) goto tmp50_end;
                  
                  _jeqs = tmpMeta57;
                  _constantEqns = tmpMeta58;
                  /* Pattern matching succeeded */
                  tmpMeta48 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp50_done;
                }
                case 1: {
                  modelica_metatype tmpMeta59;
                  
                  /* Pattern matching succeeded */
                  tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta48 = tmpMeta59;
                  goto tmp50_done;
                }
                }
                goto tmp50_end;
                tmp50_end: ;
              }
              goto goto_49;
              goto_49:;
              goto goto_1;
              goto tmp50_done;
              tmp50_done:;
            }
          }
          _jeqs = tmpMeta48;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta60 = listRest(_jeqs); !listEmpty(tmpMeta60); tmpMeta60=MMC_CDR(tmpMeta60))
              {
                _e = MMC_CAR(tmpMeta60);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), 0 /* false */, 3);
              }
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT44);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta62 = stringAppend(_OMC_LIT56,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 12))))));
          tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta63);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp65;
            modelica_metatype tmpMeta66;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp67;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5)));
            tmpMeta66 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta66; /* defaultValue */
            tmp65 = &__omcQ_24tmpVar5;
            while(1) {
              tmp67 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp67--;
              }
              if (tmp67 == 0) {
                __omcQ_24tmpVar4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                *tmp65 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp65 = &MMC_CDR(*tmp65);
              } else if (tmp67 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp65 = mmc_mk_nil();
            tmpMeta64 = __omcQ_24tmpVar5;
          }
          omc_SerializeModelInfo_serializeList(threadData, _file, tmpMeta64, boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT59);

            tmp68 = ((modelica_real)(_i) * (_i));
            if (tmp68 == 0) {goto goto_1;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp68, _OMC_LIT60);
          }

          omc_File_write(threadData, _file, _OMC_LIT61);

          tmpMeta69 = mmc_mk_box1(0, mmc_mk_boolean(_withOperations));
          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), (modelica_fnptr) mmc_mk_box2(0,closure1_SerializeModelInfo_serializeLinearCell,tmpMeta69), 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT62);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), boxvar_SerializeModelInfo_serializeExp, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT64);

          _i = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))));

          _j = listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))));

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 8))));

          if((!listEmpty(_eqs)))
          {
            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?2:1));

            {
              modelica_metatype _e;
              for (tmpMeta70 = listRest(_eqs); !listEmpty(tmpMeta70); tmpMeta70=MMC_CDR(tmpMeta70))
              {
                _e = MMC_CAR(tmpMeta70);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4))))?2:1));
              }
            }
          }

          { /* match expression */
            modelica_metatype tmp75_1;
            tmp75_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 9)));
            {
              volatile mmc_switch_type tmp75;
              int tmp76;
              tmp75 = 0;
              for (; tmp75 < 2; tmp75++) {
                switch (MMC_SWITCH_CAST(tmp75)) {
                case 0: {
                  modelica_metatype tmpMeta77;
                  modelica_metatype tmpMeta78;
                  modelica_metatype tmpMeta79;
                  modelica_metatype tmpMeta80;
                  modelica_metatype tmpMeta81;
                  modelica_metatype tmpMeta82;
                  if (optionNone(tmp75_1)) goto tmp74_end;
                  tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp75_1), 1));
                  tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta77), 2));
                  if (listEmpty(tmpMeta78)) goto tmp74_end;
                  tmpMeta79 = MMC_CAR(tmpMeta78);
                  tmpMeta80 = MMC_CDR(tmpMeta78);
                  tmpMeta81 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta79), 2));
                  tmpMeta82 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta79), 5));
                  if (!listEmpty(tmpMeta80)) goto tmp74_end;
                  
                  _jeqs = tmpMeta81;
                  _constantEqns = tmpMeta82;
                  /* Pattern matching succeeded */
                  tmpMeta72 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp74_done;
                }
                case 1: {
                  modelica_metatype tmpMeta83;
                  
                  /* Pattern matching succeeded */
                  tmpMeta83 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta72 = tmpMeta83;
                  goto tmp74_done;
                }
                }
                goto tmp74_end;
                tmp74_end: ;
              }
              goto goto_73;
              goto_73:;
              goto goto_1;
              goto tmp74_done;
              tmp74_done:;
            }
          }
          _jeqs = tmpMeta72;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta84 = listRest(_jeqs); !listEmpty(tmpMeta84); tmpMeta84=MMC_CDR(tmpMeta84))
              {
                _e = MMC_CAR(tmpMeta84);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), 0 /* false */, 3);
              }
            }
          }

          if((listEmpty(_eqs) && listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT44);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT53);
          }

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 4)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta86 = stringAppend(_OMC_LIT56,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 12))))));
          tmpMeta87 = stringAppend(tmpMeta86,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta87);

          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp89;
            modelica_metatype tmpMeta90;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp91;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 5)));
            tmpMeta90 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta90; /* defaultValue */
            tmp89 = &__omcQ_24tmpVar7;
            while(1) {
              tmp91 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp91--;
              }
              if (tmp91 == 0) {
                __omcQ_24tmpVar6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                *tmp89 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp89 = &MMC_CDR(*tmp89);
              } else if (tmp91 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp89 = mmc_mk_nil();
            tmpMeta88 = __omcQ_24tmpVar7;
          }
          omc_SerializeModelInfo_serializeList(threadData, _file, tmpMeta88, boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT58);

          omc_File_write(threadData, _file, intString(_i));

          if((_i != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT59);

            tmp92 = ((modelica_real)(_i) * (_i));
            if (tmp92 == 0) {goto goto_1;}
            omc_File_writeReal(threadData, _file, (((modelica_real)_j)) / tmp92, _OMC_LIT60);
          }

          omc_File_write(threadData, _file, _OMC_LIT61);

          tmpMeta93 = mmc_mk_box1(0, mmc_mk_boolean(_withOperations));
          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 7))), (modelica_fnptr) mmc_mk_box2(0,closure2_SerializeModelInfo_serializeLinearCell,tmpMeta93), 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT62);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atL), 6))), boxvar_SerializeModelInfo_serializeExp, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT63);
          goto tmp2_done;
        }
        case 11: {
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,3) == 0) goto tmp2_end;
          tmpMeta94 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (listEmpty(tmpMeta94)) goto tmp2_end;
          tmpMeta95 = MMC_CAR(tmpMeta94);
          tmpMeta96 = MMC_CDR(tmpMeta94);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta95,0,4) == 0) goto tmp2_end;
          if (!listEmpty(tmpMeta96)) goto tmp2_end;
          
          _stmt = tmpMeta95;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          tmpMeta97 = stringAppend(_section,_OMC_LIT65);
          omc_File_write(threadData, _file, tmpMeta97);

          omc_ComponentReference_writeCref(threadData, _file, omc_Expression_expCref(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT52);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_stmt), 4))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT66);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta98;
          modelica_metatype tmpMeta99;
          modelica_metatype tmpMeta100;
          modelica_metatype tmpMeta101;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,3) == 0) goto tmp2_end;
          tmpMeta98 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (listEmpty(tmpMeta98)) goto tmp2_end;
          tmpMeta99 = MMC_CAR(tmpMeta98);
          tmpMeta100 = MMC_CDR(tmpMeta98);
          
          _stmt = tmpMeta99;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          tmpMeta101 = stringAppend(_section,_OMC_LIT68);
          omc_File_write(threadData, _file, tmpMeta101);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 13: {
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,11,5) == 0) goto tmp2_end;
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (listEmpty(tmpMeta102)) goto tmp2_end;
          tmpMeta103 = MMC_CAR(tmpMeta102);
          tmpMeta104 = MMC_CDR(tmpMeta102);
          
          _stmt = tmpMeta103;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          tmpMeta105 = stringAppend(_section,_OMC_LIT68);
          omc_File_write(threadData, _file, tmpMeta105);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeStatement, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT67);

          omc_SerializeModelInfo_serializeSource(threadData, _file, omc_Algorithm_getStatementSource(threadData, _stmt), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 14: {
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          modelica_metatype tmpMeta124;
          modelica_metatype tmpMeta125;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,13,3) == 0) goto tmp2_end;
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (!optionNone(tmpMeta107)) goto tmp2_end;
          
          _nlSystem = tmpMeta106;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?2:1));

          {
            modelica_metatype _e;
            for (tmpMeta108 = listRest(_eqs); !listEmpty(tmpMeta108); tmpMeta108=MMC_CDR(tmpMeta108))
            {
              _e = MMC_CAR(tmpMeta108);
              omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?2:1));
            }
          }

          { /* match expression */
            modelica_metatype tmp113_1;
            tmp113_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 7)));
            {
              volatile mmc_switch_type tmp113;
              int tmp114;
              tmp113 = 0;
              for (; tmp113 < 2; tmp113++) {
                switch (MMC_SWITCH_CAST(tmp113)) {
                case 0: {
                  modelica_metatype tmpMeta115;
                  modelica_metatype tmpMeta116;
                  modelica_metatype tmpMeta117;
                  modelica_metatype tmpMeta118;
                  modelica_metatype tmpMeta119;
                  modelica_metatype tmpMeta120;
                  if (optionNone(tmp113_1)) goto tmp112_end;
                  tmpMeta115 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp113_1), 1));
                  tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta115), 2));
                  if (listEmpty(tmpMeta116)) goto tmp112_end;
                  tmpMeta117 = MMC_CAR(tmpMeta116);
                  tmpMeta118 = MMC_CDR(tmpMeta116);
                  tmpMeta119 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta117), 2));
                  tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta117), 5));
                  if (!listEmpty(tmpMeta118)) goto tmp112_end;
                  
                  _jeqs = tmpMeta119;
                  _constantEqns = tmpMeta120;
                  /* Pattern matching succeeded */
                  tmpMeta110 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp112_done;
                }
                case 1: {
                  modelica_metatype tmpMeta121;
                  
                  /* Pattern matching succeeded */
                  tmpMeta121 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta110 = tmpMeta121;
                  goto tmp112_done;
                }
                }
                goto tmp112_end;
                tmp112_end: ;
              }
              goto goto_111;
              goto_111:;
              goto goto_1;
              goto tmp112_done;
              tmp112_done:;
            }
          }
          _jeqs = tmpMeta110;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta122 = listRest(_jeqs); !listEmpty(tmpMeta122); tmpMeta122=MMC_CDR(tmpMeta122))
              {
                _e = MMC_CAR(tmpMeta122);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, 3);
              }
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT53);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta124 = stringAppend(_OMC_LIT69,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta125 = stringAppend(tmpMeta124,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta125);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT70);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT72);
          goto tmp2_done;
        }
        case 15: {
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta161;
          modelica_metatype tmpMeta162;
          modelica_metatype tmpMeta163;
          modelica_metatype tmpMeta164;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,13,3) == 0) goto tmp2_end;
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (optionNone(tmpMeta127)) goto tmp2_end;
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta127), 1));
          
          _nlSystem = tmpMeta126;
          _atNL = tmpMeta128;
          /* Pattern matching succeeded */
          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?2:1));

          {
            modelica_metatype _e;
            for (tmpMeta129 = listRest(_eqs); !listEmpty(tmpMeta129); tmpMeta129=MMC_CDR(tmpMeta129))
            {
              _e = MMC_CAR(tmpMeta129);
              omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10))))?2:1));
            }
          }

          { /* match expression */
            modelica_metatype tmp134_1;
            tmp134_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 7)));
            {
              volatile mmc_switch_type tmp134;
              int tmp135;
              tmp134 = 0;
              for (; tmp134 < 2; tmp134++) {
                switch (MMC_SWITCH_CAST(tmp134)) {
                case 0: {
                  modelica_metatype tmpMeta136;
                  modelica_metatype tmpMeta137;
                  modelica_metatype tmpMeta138;
                  modelica_metatype tmpMeta139;
                  modelica_metatype tmpMeta140;
                  modelica_metatype tmpMeta141;
                  if (optionNone(tmp134_1)) goto tmp133_end;
                  tmpMeta136 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp134_1), 1));
                  tmpMeta137 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta136), 2));
                  if (listEmpty(tmpMeta137)) goto tmp133_end;
                  tmpMeta138 = MMC_CAR(tmpMeta137);
                  tmpMeta139 = MMC_CDR(tmpMeta137);
                  tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 2));
                  tmpMeta141 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 5));
                  if (!listEmpty(tmpMeta139)) goto tmp133_end;
                  
                  _jeqs = tmpMeta140;
                  _constantEqns = tmpMeta141;
                  /* Pattern matching succeeded */
                  tmpMeta131 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp133_done;
                }
                case 1: {
                  modelica_metatype tmpMeta142;
                  
                  /* Pattern matching succeeded */
                  tmpMeta142 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta131 = tmpMeta142;
                  goto tmp133_done;
                }
                }
                goto tmp133_end;
                tmp133_end: ;
              }
              goto goto_132;
              goto_132:;
              goto goto_1;
              goto tmp133_done;
              tmp133_done:;
            }
          }
          _jeqs = tmpMeta131;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta143 = listRest(_jeqs); !listEmpty(tmpMeta143); tmpMeta143=MMC_CDR(tmpMeta143))
              {
                _e = MMC_CAR(tmpMeta143);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), 0 /* false */, 3);
              }
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT53);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta145 = stringAppend(_OMC_LIT69,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 6))))));
          tmpMeta146 = stringAppend(tmpMeta145,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta146);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT70);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT73);

          _eqs = omc_SimCodeUtil_sortEqSystems(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 3))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?2:1));

          {
            modelica_metatype _e;
            for (tmpMeta147 = listRest(_eqs); !listEmpty(tmpMeta147); tmpMeta147=MMC_CDR(tmpMeta147))
            {
              _e = MMC_CAR(tmpMeta147);
              omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10))))?2:1));
            }
          }

          { /* match expression */
            modelica_metatype tmp152_1;
            tmp152_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 7)));
            {
              volatile mmc_switch_type tmp152;
              int tmp153;
              tmp152 = 0;
              for (; tmp152 < 2; tmp152++) {
                switch (MMC_SWITCH_CAST(tmp152)) {
                case 0: {
                  modelica_metatype tmpMeta154;
                  modelica_metatype tmpMeta155;
                  modelica_metatype tmpMeta156;
                  modelica_metatype tmpMeta157;
                  modelica_metatype tmpMeta158;
                  modelica_metatype tmpMeta159;
                  if (optionNone(tmp152_1)) goto tmp151_end;
                  tmpMeta154 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp152_1), 1));
                  tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta154), 2));
                  if (listEmpty(tmpMeta155)) goto tmp151_end;
                  tmpMeta156 = MMC_CAR(tmpMeta155);
                  tmpMeta157 = MMC_CDR(tmpMeta155);
                  tmpMeta158 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta156), 2));
                  tmpMeta159 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta156), 5));
                  if (!listEmpty(tmpMeta157)) goto tmp151_end;
                  
                  _jeqs = tmpMeta158;
                  _constantEqns = tmpMeta159;
                  /* Pattern matching succeeded */
                  tmpMeta149 = omc_SimCodeUtil_sortEqSystems(threadData, listAppend(_jeqs, _constantEqns));
                  goto tmp151_done;
                }
                case 1: {
                  modelica_metatype tmpMeta160;
                  
                  /* Pattern matching succeeded */
                  tmpMeta160 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta149 = tmpMeta160;
                  goto tmp151_done;
                }
                }
                goto tmp151_end;
                tmp151_end: ;
              }
              goto goto_150;
              goto_150:;
              goto goto_1;
              goto tmp151_done;
              tmp151_done:;
            }
          }
          _jeqs = tmpMeta149;

          if((!listEmpty(_jeqs)))
          {
            omc_File_write(threadData, _file, _OMC_LIT4);

            omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_jeqs), _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 1 /* true */, 3);

            {
              modelica_metatype _e;
              for (tmpMeta161 = listRest(_jeqs); !listEmpty(tmpMeta161); tmpMeta161=MMC_CDR(tmpMeta161))
              {
                _e = MMC_CAR(tmpMeta161);
                omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), 0 /* false */, 3);
              }
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT53);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 10)))))
          {
            omc_File_write(threadData, _file, _OMC_LIT55);
          }
          else
          {
            omc_File_write(threadData, _file, _OMC_LIT54);
          }

          tmpMeta163 = stringAppend(_OMC_LIT69,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 6))))));
          tmpMeta164 = stringAppend(tmpMeta163,_OMC_LIT57);
          omc_File_write(threadData, _file, tmpMeta164);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_atNL), 4))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT70);

          omc_SerializeModelInfo_serializeList(threadData, _file, _eqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT71);

          omc_SerializeModelInfo_serializeList(threadData, _file, _jeqs, boxvar_SerializeModelInfo_serializeEquationIndex, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT72);
          goto tmp2_done;
        }
        case 16: {
          modelica_metatype tmpMeta165;
          modelica_metatype tmpMeta169;
          modelica_metatype tmpMeta170;
          modelica_metatype tmpMeta171;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp166;
            modelica_metatype tmpMeta167;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp168;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)));
            tmpMeta167 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta167; /* defaultValue */
            tmp166 = &__omcQ_24tmpVar9;
            while(1) {
              tmp168 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp168--;
              }
              if (tmp168 == 0) {
                __omcQ_24tmpVar8 = omc_Util_tuple22(threadData, _e);
                *tmp166 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp166 = &MMC_CDR(*tmp166);
              } else if (tmp168 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp166 = mmc_mk_nil();
            tmpMeta165 = __omcQ_24tmpVar9;
          }
          _eqs = listAppend(omc_List_flatten(threadData, tmpMeta165), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));

          omc_SerializeModelInfo_serializeEquation(threadData, _file, listHead(_eqs), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, 1);

          {
            modelica_metatype _e;
            for (tmpMeta169 = listRest(_eqs); !listEmpty(tmpMeta169); tmpMeta169=MMC_CDR(tmpMeta169))
            {
              _e = MMC_CAR(tmpMeta169);
              omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, 1);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT53);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT74);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), boxvar_SerializeModelInfo_serializeIfBranch, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT4);

          tmpMeta171 = mmc_mk_box2(0, _OMC_LIT75, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4))));
          omc_SerializeModelInfo_serializeIfBranch(threadData, _file, tmpMeta171);

          omc_File_write(threadData, _file, _OMC_LIT76);
          goto tmp2_done;
        }
        case 17: {
          modelica_metatype tmpMeta172;
          modelica_metatype tmpMeta173;
          modelica_metatype tmpMeta174;
          modelica_metatype tmpMeta178;
          modelica_metatype tmpMeta179;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,14,6) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_SerializeModelInfo_serializeEquation(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), _section, _withOperations, ((modelica_integer) 0), 1 /* true */, 1);

          {
            modelica_metatype _e;
            for (tmpMeta172 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta172); tmpMeta172=MMC_CDR(tmpMeta172))
            {
              _e = MMC_CAR(tmpMeta172);
              omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, 1);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT53);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT77);

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp175;
            modelica_metatype tmpMeta176;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp177;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 4)));
            tmpMeta176 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta176; /* defaultValue */
            tmp175 = &__omcQ_24tmpVar11;
            while(1) {
              tmp177 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp177--;
              }
              if (tmp177 == 0) {
                __omcQ_24tmpVar10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 2)));
                *tmp175 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp175 = &MMC_CDR(*tmp175);
              } else if (tmp177 == 1) {
                break;
              } else {
                goto goto_1;
              }
            }
            *tmp175 = mmc_mk_nil();
            tmpMeta174 = __omcQ_24tmpVar11;
          }
          omc_SerializeModelInfo_serializeList(threadData, _file, tmpMeta174, boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT66);

          omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))));

          {
            modelica_metatype _e1;
            for (tmpMeta178 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta178); tmpMeta178=MMC_CDR(tmpMeta178))
            {
              _e1 = MMC_CAR(tmpMeta178);
              omc_File_write(threadData, _file, _OMC_LIT4);

              omc_SerializeModelInfo_serializeEquationIndex(threadData, _file, _e1);
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT76);
          goto tmp2_done;
        }
        case 18: {
          modelica_metatype tmpMeta180;
          modelica_metatype tmpMeta185;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,15,7) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          {
            modelica_metatype _whenOps;
            for (tmpMeta180 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 5))); !listEmpty(tmpMeta180); tmpMeta180=MMC_CDR(tmpMeta180))
            {
              _whenOps = MMC_CAR(tmpMeta180);
              { /* match expression */
                modelica_metatype tmp183_1;
                tmp183_1 = _whenOps;
                {
                  volatile mmc_switch_type tmp183;
                  int tmp184;
                  tmp183 = 0;
                  for (; tmp183 < 5; tmp183++) {
                    switch (MMC_SWITCH_CAST(tmp183)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp183_1,0,3) == 0) goto tmp182_end;
                      
                      _whenOp = tmp183_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT78);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT79);

                      omc_SerializeModelInfo_serializeList(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

                      omc_File_write(threadData, _file, _OMC_LIT66);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT41);
                      goto tmp182_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp183_1,1,3) == 0) goto tmp182_end;
                      
                      _whenOp = tmp183_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT78);

                      omc_SerializeModelInfo_serializeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT79);

                      omc_SerializeModelInfo_serializeList(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

                      omc_File_write(threadData, _file, _OMC_LIT66);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT41);
                      goto tmp182_done;
                    }
                    case 2: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp183_1,2,4) == 0) goto tmp182_end;
                      
                      _whenOp = tmp183_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT80);

                      omc_File_write(threadData, _file, _OMC_LIT81);

                      _crefs = omc_Expression_extractCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))), 1 /* true */);

                      omc_SerializeModelInfo_serializeList(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, _crefs, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3)))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

                      omc_File_write(threadData, _file, _OMC_LIT66);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 3))));

                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT41);
                      goto tmp182_done;
                    }
                    case 3: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp183_1,3,2) == 0) goto tmp182_end;
                      
                      _whenOp = tmp183_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT80);

                      omc_File_write(threadData, _file, _OMC_LIT81);

                      omc_SerializeModelInfo_serializeList(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2)))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

                      omc_File_write(threadData, _file, _OMC_LIT66);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT41);
                      goto tmp182_done;
                    }
                    case 4: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp183_1,4,2) == 0) goto tmp182_end;
                      
                      _whenOp = tmp183_1;
                      /* Pattern matching succeeded */
                      omc_File_write(threadData, _file, _OMC_LIT80);

                      omc_File_write(threadData, _file, _OMC_LIT81);

                      omc_SerializeModelInfo_serializeList(threadData, _file, omc_SerializeModelInfo_getWhenUses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2)))), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

                      omc_File_write(threadData, _file, _OMC_LIT66);

                      omc_SerializeModelInfo_serializeExp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_whenOp), 2))));

                      omc_File_write(threadData, _file, _OMC_LIT67);

                      omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), _withOperations);

                      omc_File_write(threadData, _file, _OMC_LIT41);
                      goto tmp182_done;
                    }
                    }
                    goto tmp182_end;
                    tmp182_end: ;
                  }
                  goto goto_181;
                  goto_181:;
                  goto goto_1;
                  goto tmp182_done;
                  tmp182_done:;
                }
              }
              ;
            }
          }

          { /* match expression */
            modelica_metatype tmp188_1;
            tmp188_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6)));
            {
              modelica_metatype _e = NULL;
              volatile mmc_switch_type tmp188;
              int tmp189;
              // _e has no default value.
              tmp188 = 0;
              for (; tmp188 < 2; tmp188++) {
                switch (MMC_SWITCH_CAST(tmp188)) {
                case 0: {
                  modelica_metatype tmpMeta190;
                  if (optionNone(tmp188_1)) goto tmp187_end;
                  tmpMeta190 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp188_1), 1));
                  _e = tmpMeta190;
                  /* Pattern matching succeeded */
                  if((omc_SimCodeUtil_simEqSystemIndex(threadData, _e) != ((modelica_integer) 0)))
                  {
                    omc_SerializeModelInfo_serializeEquation(threadData, _file, _e, _section, _withOperations, ((modelica_integer) 0), 0 /* false */, 1);
                  }
                  goto tmp187_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  goto tmp187_done;
                }
                }
                goto tmp187_end;
                tmp187_end: ;
              }
              goto goto_186;
              goto_186:;
              goto goto_1;
              goto tmp187_done;
              tmp187_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 19: {
          modelica_metatype tmpMeta191;
          modelica_metatype tmpMeta192;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,16,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          if((_parent != ((modelica_integer) 0)))
          {
            omc_File_write(threadData, _file, _OMC_LIT45);

            omc_File_writeInt(threadData, _file, _parent, _OMC_LIT6);
          }

          omc_File_write(threadData, _file, _OMC_LIT46);

          omc_File_write(threadData, _file, _section);

          tmpMeta191 = stringAppend(_OMC_LIT50,omc_SerializeModelInfo_tagFromAssignType(threadData, (modelica_integer)_assign_type));
          tmpMeta192 = stringAppend(tmpMeta191,_OMC_LIT51);
          omc_File_write(threadData, _file, tmpMeta192);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 6))), 3);

          omc_File_write(threadData, _file, _OMC_LIT52);

          omc_SerializeModelInfo_serializeList(threadData, _file, omc_Expression_extractUniqueCrefsFromExpDerPreStart(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7))), 1 /* true */), boxvar_SerializeModelInfo_serializeCref, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT48);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 7)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT49);

          omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 8))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT41);
          goto tmp2_done;
        }
        case 20: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,18,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT44);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 2)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT82);

          omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eq), 3)))), _OMC_LIT6);

          omc_File_write(threadData, _file, _OMC_LIT83);

          omc_File_write(threadData, _file, _section);

          omc_File_write(threadData, _file, _OMC_LIT84);
          goto tmp2_done;
        }
        case 21: {
          modelica_metatype tmpMeta193;
          
          /* Pattern matching succeeded */
          tmpMeta193 = stringAppend(_OMC_LIT85,mmc_anyString(_eq));
          omc_Error_addInternalError(threadData, tmpMeta193, _OMC_LIT87);
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
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeEquation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _eq, modelica_metatype _section, modelica_metatype _withOperations, modelica_metatype _parent, modelica_metatype _first, modelica_metatype _assign_type)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  tmp1 = mmc_unbox_integer(_withOperations);
  tmp2 = mmc_unbox_integer(_parent);
  tmp3 = mmc_unbox_integer(_first);
  tmp4 = mmc_unbox_integer(_assign_type);
  omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _section, tmp1, tmp2, tmp3, tmp4);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_SerializeModelInfo_tagFromAssignType(threadData_t *threadData, modelica_integer _assignType)
{
  modelica_string _tag = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tag has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_assignType;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT88;
          goto tmp3_done;
        }
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT89;
          goto tmp3_done;
        }
        case 3: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT90;
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
  _tag = tmp1;
  _return: OMC_LABEL_UNUSED
  return _tag;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_tagFromAssignType(threadData_t *threadData, modelica_metatype _assignType)
{
  modelica_integer tmp1;
  modelica_string _tag = NULL;
  tmp1 = mmc_unbox_integer(_assignType);
  _tag = omc_SerializeModelInfo_tagFromAssignType(threadData, tmp1);
  /* skip box _tag; String */
  return _tag;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_complex _file, modelica_metatype _op)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _op;
    {
      modelica_metatype _elt = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _elt has no default value.
      tmp3 = 0;
      for (; tmp3 < 13; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          if (optionNone(tmpMeta5)) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          _elt = tmpMeta6;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT91);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_SCodeDump_equationStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), _OMC_LIT92), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_DAEDump_dumpEquationStr(threadData, _elt), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT95);

          omc_File_writeEscape(threadData, _file, omc_System_trim(threadData, omc_SCodeDump_equationStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), _OMC_LIT92), _OMC_LIT9), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT96);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))));

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,3,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT97);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))));

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,5) == 0) goto tmp2_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 6));
          if (!listEmpty(tmpMeta7)) goto tmp2_end;
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT98);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,6,5) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT99);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 5)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 6))), boxvar_SerializeModelInfo_serializeExp, 1 /* true */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT76);
          goto tmp2_done;
        }
        case 6: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT100);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT101);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 7: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,2,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT102);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), boxvar_SerializeModelInfo_serializeExp, 1 /* true */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT76);
          goto tmp2_done;
        }
        case 8: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,7,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT103);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT2);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,5,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT104);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 3);

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_File_writeEscape(threadData, _file, omc_ExpressionDump_printExpStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4)))), 3);

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 10: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,4,3) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT106);

          omc_File_write(threadData, _file, intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))))));

          omc_File_write(threadData, _file, _OMC_LIT107);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))));

          omc_File_write(threadData, _file, _OMC_LIT93);

          omc_SerializeModelInfo_writeEqExpStr(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 4))));

          omc_File_write(threadData, _file, _OMC_LIT94);
          goto tmp2_done;
        }
        case 11: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,9,2) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT108);

          omc_File_write(threadData, _file, _OMC_LIT105);

          omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 2))), 1);

          omc_File_write(threadData, _file, _OMC_LIT7);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_op), 3))), boxvar_SerializeModelInfo_serializeCref, 1 /* true */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT76);
          goto tmp2_done;
        }
        case 12: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT109,mmc_anyString(_op));
          omc_Error_addInternalError(threadData, tmpMeta8, _OMC_LIT110);
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
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeOperation(threadData_t *threadData, modelica_metatype _file, modelica_metatype _op)
{
  omc_SerializeModelInfo_serializeOperation(threadData, _file, _op);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_complex _file, modelica_metatype _info)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT111);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 2))), 3);

  omc_File_write(threadData, _file, _OMC_LIT112);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 4)))), _OMC_LIT6);

  omc_File_write(threadData, _file, _OMC_LIT113);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 6)))), _OMC_LIT6);

  omc_File_write(threadData, _file, _OMC_LIT114);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 5)))), _OMC_LIT6);

  omc_File_write(threadData, _file, _OMC_LIT115);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_info), 7)))), _OMC_LIT6);

  omc_File_write(threadData, _file, _OMC_LIT41);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeInfo(threadData_t *threadData, modelica_metatype _file, modelica_metatype _info)
{
  omc_SerializeModelInfo_serializeInfo(threadData, _file, _info);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_complex _file, modelica_metatype _source, modelica_boolean _withOperations)
{
  modelica_metatype _info = NULL;
  modelica_metatype _paths = NULL;
  modelica_metatype _typeLst = NULL;
  modelica_metatype _partOfLst = NULL;
  modelica_metatype _instance = NULL;
  modelica_integer _i;
  modelica_metatype _operations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  // _paths has no default value.
  // _typeLst has no default value.
  // _partOfLst has no default value.
  // _instance has no default value.
  // _i has no default value.
  // _operations has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _source;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  _info = tmpMeta2;
  _partOfLst = tmpMeta3;
  _instance = tmpMeta4;
  _typeLst = tmpMeta5;
  _operations = tmpMeta6;

  omc_File_write(threadData, _file, _OMC_LIT116);

  omc_SerializeModelInfo_serializeInfo(threadData, _file, _info);

  if((!listEmpty(_partOfLst)))
  {
    {
      modelica_metatype __omcQ_24tmpVar13;
      modelica_metatype* tmp8;
      modelica_metatype tmpMeta9;
      modelica_metatype tmpMeta10;
      modelica_metatype __omcQ_24tmpVar12;
      modelica_integer tmp15;
      modelica_metatype _w_loopVar = 0;
      modelica_boolean tmp16 = 0;
      modelica_metatype _w;
      _w_loopVar = _partOfLst;
      tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar13 = tmpMeta9; /* defaultValue */
      tmp8 = &__omcQ_24tmpVar13;
      while(1) {
        tmp15 = 1;
        while (!listEmpty(_w_loopVar)) {
          _w = MMC_CAR(_w_loopVar);
          _w_loopVar = MMC_CDR(_w_loopVar);
          { /* match expression */
            modelica_metatype tmp19_1;
            tmp19_1 = _w;
            {
              volatile mmc_switch_type tmp19;
              int tmp20;
              tmp19 = 0;
              for (; tmp19 < 2; tmp19++) {
                switch (MMC_SWITCH_CAST(tmp19)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,1,0) == 0) goto tmp18_end;
                  /* Pattern matching succeeded */
                  tmp16 = 0 /* false */;
                  goto tmp18_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmp16 = 1 /* true */;
                  goto tmp18_done;
                }
                }
                goto tmp18_end;
                tmp18_end: ;
              }
              goto goto_17;
              goto_17:;
              MMC_THROW_INTERNAL();
              goto tmp18_done;
              tmp18_done:;
            }
          }
          if (tmp16) {
            tmp15--;
            break;
          }
        }
        if (tmp15 == 0) {
          { /* match expression */
            modelica_metatype tmp13_1;
            tmp13_1 = _w;
            {
              volatile mmc_switch_type tmp13;
              int tmp14;
              tmp13 = 0;
              for (; tmp13 < 1; tmp13++) {
                switch (MMC_SWITCH_CAST(tmp13)) {
                case 0: {
                  if (mmc__uniontype__metarecord__typedef__equal(tmp13_1,0,1) == 0) goto tmp12_end;
                  
                  /* Pattern matching succeeded */
                  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_w), 2)));
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
          }__omcQ_24tmpVar12 = tmpMeta10;
          *tmp8 = mmc_mk_cons(__omcQ_24tmpVar12,0);
          tmp8 = &MMC_CDR(*tmp8);
        } else if (tmp15 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp8 = mmc_mk_nil();
      tmpMeta7 = __omcQ_24tmpVar13;
    }
    _paths = tmpMeta7;

    omc_File_write(threadData, _file, _OMC_LIT117);

    omc_SerializeModelInfo_serializeList(threadData, _file, _paths, boxvar_SerializeModelInfo_serializePath, 0 /* false */, _OMC_LIT4);

    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  { /* match expression */
    modelica_metatype tmp23_1;
    tmp23_1 = _instance;
    {
      volatile mmc_switch_type tmp23;
      int tmp24;
      tmp23 = 0;
      for (; tmp23 < 2; tmp23++) {
        switch (MMC_SWITCH_CAST(tmp23)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,1,0) == 0) goto tmp22_end;
          /* Pattern matching succeeded */
          goto tmp22_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp23_1,0,6) == 0) goto tmp22_end;
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT118);

          omc_PrefixUtil_writeComponentPrefix(threadData, _file, _instance, 3);

          omc_File_write(threadData, _file, _OMC_LIT7);
          goto tmp22_done;
        }
        }
        goto tmp22_end;
        tmp22_end: ;
      }
      goto goto_21;
      goto_21:;
      MMC_THROW_INTERNAL();
      goto tmp22_done;
      tmp22_done:;
    }
  }
  ;

  if((!listEmpty(_typeLst)))
  {
    omc_File_write(threadData, _file, _OMC_LIT119);

    omc_SerializeModelInfo_serializeList(threadData, _file, _typeLst, boxvar_SerializeModelInfo_serializePath, 0 /* false */, _OMC_LIT4);

    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  if((_withOperations && (!listEmpty(_operations))))
  {
    omc_File_write(threadData, _file, _OMC_LIT120);

    omc_SerializeModelInfo_serializeList(threadData, _file, _operations, boxvar_SerializeModelInfo_serializeOperation, 0 /* false */, _OMC_LIT4);

    omc_File_write(threadData, _file, _OMC_LIT5);
  }

  omc_File_write(threadData, _file, _OMC_LIT41);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeSource(threadData_t *threadData, modelica_metatype _file, modelica_metatype _source, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeSource(threadData, _file, _source, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_complex _file, modelica_metatype _ty)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _ty;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 4: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT121);
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT122);
          goto tmp2_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT123);
          goto tmp2_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT124);
          goto tmp2_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          omc_File_write(threadData, _file, _OMC_LIT125);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeTypeName(threadData_t *threadData, modelica_metatype _file, modelica_metatype _ty)
{
  omc_SerializeModelInfo_serializeTypeName(threadData, _file, _ty);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_complex _file, modelica_metatype _var, modelica_boolean _withOperations)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_ComponentReference_writeCref(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), 3);

  omc_File_write(threadData, _file, _OMC_LIT126);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 4))), 3);

  omc_File_write(threadData, _file, _OMC_LIT127);

  omc_File_write(threadData, _file, omc_SerializeModelInfo_varKindString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 3))), _var));

  omc_File_write(threadData, _file, _OMC_LIT7);

  omc_SerializeModelInfo_serializeTypeName(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 13))));

  omc_File_write(threadData, _file, _OMC_LIT128);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 5))), 3);

  omc_File_write(threadData, _file, _OMC_LIT129);

  omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 6))), 3);

  omc_File_write(threadData, _file, _OMC_LIT40);

  omc_SerializeModelInfo_serializeSource(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 17))), _withOperations);

  omc_File_write(threadData, _file, _OMC_LIT130);

  omc_File_writeInt(threadData, _file, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7)))), _OMC_LIT6);

  omc_File_write(threadData, _file, _OMC_LIT41);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVar(threadData_t *threadData, modelica_metatype _file, modelica_metatype _var, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeVar(threadData, _file, _var, tmp1);
  return;
}

static void closure3_SerializeModelInfo_serializeVar(threadData_t *thData, modelica_metatype closure, modelica_complex file, modelica_metatype var)
{
  modelica_metatype withOperations = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  boxptr_SerializeModelInfo_serializeVar(thData, file, var, withOperations);
}
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations, modelica_boolean _inFirst)
{
  modelica_boolean _outFirst;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outFirst = (_inFirst && listEmpty(_vars));
  tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(_withOperations));
  omc_SerializeModelInfo_serializeList(threadData, _file, _vars, (modelica_fnptr) mmc_mk_box2(0,closure3_SerializeModelInfo_serializeVar,tmpMeta1), (!_inFirst), _OMC_LIT131);
  _return: OMC_LABEL_UNUSED
  return _outFirst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeVarsHelp(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations, modelica_metatype _inFirst)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _outFirst;
  modelica_metatype out_outFirst;
  tmp1 = mmc_unbox_integer(_withOperations);
  tmp2 = mmc_unbox_integer(_inFirst);
  _outFirst = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, _vars, tmp1, tmp2);
  out_outFirst = mmc_mk_icon(_outFirst);
  return out_outFirst;
}

PROTECTED_FUNCTION_STATIC void omc_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_complex _file, modelica_metatype _vars, modelica_boolean _withOperations)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 2))), _withOperations, 1 /* true */);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 3))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 4))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 6))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 7))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 8))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 11))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 12))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 13))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 14))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 15))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 16))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 18))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 19))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 20))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 21))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 22))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 23))), _withOperations, _b);

  _b = omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 24))), _withOperations, _b);

  omc_SerializeModelInfo_serializeVarsHelp(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vars), 28))), _withOperations, _b);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_SerializeModelInfo_serializeVars(threadData_t *threadData, modelica_metatype _file, modelica_metatype _vars, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_withOperations);
  omc_SerializeModelInfo_serializeVars(threadData, _file, _vars, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations, modelica_string *out_fileName)
{
  modelica_boolean _success;
  modelica_string _fileName = NULL;
  modelica_complex _file;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_string tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _fileName has no default value.
  _file = omc_File_File_constructor(threadData, omc_File_noReference(threadData));
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _code;
    {
      modelica_metatype _mi = NULL;
      modelica_string _eqsName = NULL;
      modelica_metatype _eqsLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _mi has no default value.
      // _eqsName has no default value.
      // _eqsLst has no default value.
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _mi = tmpMeta6;
          /* Pattern matching succeeded */
          if((stringEqual(omc_Config_simCodeTarget(threadData), _OMC_LIT134)))
          {
            tmpMeta7 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 38))),_OMC_LIT133);
            tmpMeta8 = stringAppend(tmpMeta7,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT132);
            _fileName = tmpMeta9;
          }
          else
          {
            tmpMeta10 = stringAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 37))),_OMC_LIT132);
            _fileName = tmpMeta10;
          }

          omc_File_open(threadData, _file, _fileName, 2);

          omc_File_write(threadData, _file, _OMC_LIT135);

          omc_SerializeModelInfo_serializePath(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 2))));

          omc_File_write(threadData, _file, _OMC_LIT136);

          omc_File_writeEscape(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 3))), 3);

          omc_File_write(threadData, _file, _OMC_LIT137);

          omc_SerializeModelInfo_serializeVars(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 11))), _withOperations);

          omc_File_write(threadData, _file, _OMC_LIT138);

          omc_File_write(threadData, _file, _OMC_LIT139);

          tmpMeta19 = mmc_mk_box2(0, _OMC_LIT140, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 12))));
          tmpMeta20 = mmc_mk_box2(0, _OMC_LIT141, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 13))));
          tmpMeta21 = mmc_mk_box2(0, _OMC_LIT142, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 14))));
          tmpMeta22 = mmc_mk_box2(0, _OMC_LIT143, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 8))));
          tmpMeta23 = mmc_mk_box2(0, _OMC_LIT144, omc_SimCodeUtil_getClockedEquations(threadData, omc_SimCodeUtil_getSubPartitions(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 11))))));
          tmpMeta24 = mmc_mk_box2(0, _OMC_LIT145, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 15))));
          tmpMeta25 = mmc_mk_box2(0, _OMC_LIT146, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 16))));
          tmpMeta26 = mmc_mk_box2(0, _OMC_LIT147, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 17))));
          tmpMeta27 = mmc_mk_box2(0, _OMC_LIT148, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 18))));
          tmpMeta28 = mmc_mk_box2(0, _OMC_LIT17, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 19))));
          tmpMeta29 = mmc_mk_box2(0, _OMC_LIT149, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 21))));
          tmpMeta30 = mmc_mk_box2(0, _OMC_LIT150, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 51))));
          tmpMeta31 = mmc_mk_box2(0, _OMC_LIT151, omc_List_flatten(threadData, omc_SimCodeUtil_getSimCodeDAEModeDataEqns(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 50))))));
          tmpMeta32 = mmc_mk_box2(0, _OMC_LIT90, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_code), 23))));
          tmpMeta18 = mmc_mk_cons(tmpMeta19, mmc_mk_cons(tmpMeta20, mmc_mk_cons(tmpMeta21, mmc_mk_cons(tmpMeta22, mmc_mk_cons(tmpMeta23, mmc_mk_cons(tmpMeta24, mmc_mk_cons(tmpMeta25, mmc_mk_cons(tmpMeta26, mmc_mk_cons(tmpMeta27, mmc_mk_cons(tmpMeta28, mmc_mk_cons(tmpMeta29, mmc_mk_cons(tmpMeta30, mmc_mk_cons(tmpMeta31, mmc_mk_cons(tmpMeta32, MMC_REFSTRUCTLIT(mmc_nil)))))))))))))));
          {
            modelica_metatype _tpl;
            for (tmpMeta11 = tmpMeta18; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
            {
              _tpl = MMC_CAR(tmpMeta11);
              /* Pattern-matching assignment */
              tmpMeta12 = _tpl;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
              _eqsName = tmpMeta13;
              _eqsLst = tmpMeta14;

              {
                modelica_metatype _eq;
                for (tmpMeta15 = omc_SimCodeUtil_sortEqSystems(threadData, _eqsLst); !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
                {
                  _eq = MMC_CAR(tmpMeta15);
                  omc_SerializeModelInfo_serializeEquation(threadData, _file, _eq, _eqsName, _withOperations, ((modelica_integer) 0), 0 /* false */, 1);
                }
              }
            }
          }

          omc_File_write(threadData, _file, _OMC_LIT152);

          omc_SerializeModelInfo_serializeList(threadData, _file, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mi), 12))), boxvar_SerializeModelInfo_serializeFunction, 0 /* false */, _OMC_LIT4);

          omc_File_write(threadData, _file, _OMC_LIT153);
          tmp1_c0 = 1 /* true */;
          tmp1_c1 = _fileName;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT154, _OMC_LIT155);
          tmp1_c0 = 0 /* false */;
          tmp1_c1 = _OMC_LIT156;
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
  _success = tmp1_c0;
  _fileName = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_fileName) { *out_fileName = _fileName; }
  omc_File_File_destructor(threadData,_file);
  return _success;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SerializeModelInfo_serializeWork(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations, modelica_metatype *out_fileName)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_withOperations);
  _success = omc_SerializeModelInfo_serializeWork(threadData, _code, tmp1, out_fileName);
  out_success = mmc_mk_icon(_success);
  /* skip box _fileName; String */
  return out_success;
}

DLLDirection
modelica_string omc_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations)
{
  modelica_string _fileName = NULL;
  modelica_string tmp1;
  modelica_boolean tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fileName has no default value.
  /* Pattern-matching tuple assignment */
  tmp2 = omc_SerializeModelInfo_serializeWork(threadData, _code, _withOperations, &tmp1);
  if (1 /* true */ != tmp2) MMC_THROW_INTERNAL();
  _fileName = tmp1;
  _return: OMC_LABEL_UNUSED
  return _fileName;
}
modelica_metatype boxptr_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations)
{
  modelica_integer tmp1;
  modelica_string _fileName = NULL;
  tmp1 = mmc_unbox_integer(_withOperations);
  _fileName = omc_SerializeModelInfo_serialize(threadData, _code, tmp1);
  /* skip box _fileName; String */
  return _fileName;
}

