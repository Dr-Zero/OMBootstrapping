#include "omc_simulation_settings.h"
#include "HpcOmEqSystems.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,8) {&HpcOmSimCode_Task_TASKEMPTY__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,0) {_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT3,70.0);
#define _OMC_LIT3 MMC_REFREALLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT4,20.0);
#define _OMC_LIT4 MMC_REFREALLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " FOR "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,5,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "levelScheduling is not supported for heterogenious scheduling\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,62,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "pts_transformScheduleToTask failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,35,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "tornSys_bipartite_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,18,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "tornSys_matched_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,16,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,17,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT12,_OMC_LIT13,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "function pts_traverseCompsAndParallelize failed. GRS is temporarily disabled."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,77,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT16,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "tornSys_matched2_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,17,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "pts_traverseEqSystems failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,29,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "---------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,10,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "-equations\n---------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,21,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "-variables\n---------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,21,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "{ "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,2,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "  \n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,5,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "} \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,3,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "  	  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,5,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "} "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,2,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data " } "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,3,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data " = { "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,5,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data " }"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,2,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data " * "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,3,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Matrix("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,2,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,1,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "computation fo determinant failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,35,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,19) {&DAE_Type_T__ANYTYPE__desc,MMC_REFSTRUCTLIT(mmc_none)}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,2,6) {&DAE_Operator_DIV__desc,_OMC_LIT37}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,0,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40,0.0);
#define _OMC_LIT40 MMC_REFREALLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT39,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT42,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT44,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "$det_a"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,6,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "__"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,2,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,1,5) {&DAE_VarParallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,1,6) {&DAE_ConnectorType_NON__CONNECTOR__desc,}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,1,6) {&DAE_VarInnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT54,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT54 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT54,_OMC_LIT45}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "$det_b"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,6,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "$det_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,5,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "a"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,1,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "b"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,1,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "the new equation to solve x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,27,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT40}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "matrixB"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,7,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "vecAi\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,6,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "new det eqs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,11,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "end matrixB"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,11,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "end vecAi\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,10,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "getSummands failed! for"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,23,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,2,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "This system of equations cannot be decomposed because its actually not linear (the coeffs are function calls of x).\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,116,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT70,1.0);
#define _OMC_LIT70 MMC_REFREALLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,4) {&DAE_Exp_RCONST__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,4) {&Absyn_Path_IDENT__desc,_OMC_LIT39}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,3) {&ClassInf_State_UNKNOWN__desc,_OMC_LIT72}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,5,12) {&DAE_Type_T__COMPLEX__desc,_OMC_LIT73,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,4) {&DAE_Type_T__REAL__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "$xa"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,3,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,1,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "getAlgebraicEquationsForEI failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,34,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "getResidualExpressionForEquation failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,40,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "getResidualExpressions failed \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,31,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "$a"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,2,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "getTornSystemCoefficients1 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,34,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "getTornSystemCoefficients failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,34,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,1,4) {&BackendDAE_IndexType_NORMAL__desc,}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "buildSingleEquationSystem failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,33,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "buildNewResidualEquation2 failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,34,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "buildNewResidualEquation failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,31,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "updateVarEqIndices failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,26,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "getOtherComps failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,21,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,2,8) {&DAE_Operator_UMINUS__desc,_OMC_LIT75}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,1,4) {&BackendDAE_JacobianType_JAC__LINEAR__desc,}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "partlintorn"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,11,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "Sets the limit for partitionin of linear torn systems."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,54,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT93,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT94,_OMC_LIT95,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT96}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "reduceLinearTornSystem failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,30,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#include "util/modelica.h"

#include "HpcOmEqSystems_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildDummyCommCost(threadData_t *threadData, modelica_integer _iChildNodeIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildDummyCommCost(threadData_t *threadData, modelica_metatype _iChildNodeIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildDummyCommCost,2,0) {(void*) boxptr_HpcOmEqSystems_buildDummyCommCost,0}};
#define boxvar_HpcOmEqSystems_buildDummyCommCost MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildDummyCommCost)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildDummyCommCosts(threadData_t *threadData, modelica_metatype _childNodes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildDummyCommCosts,2,0) {(void*) boxptr_HpcOmEqSystems_buildDummyCommCosts,0}};
#define boxvar_HpcOmEqSystems_buildDummyCommCosts MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildDummyCommCosts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildTaskgraphMetaForTornSystem(threadData_t *threadData, modelica_metatype _graph, modelica_metatype _eqLst, modelica_metatype _varLst, modelica_metatype _metaIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildTaskgraphMetaForTornSystem,2,0) {(void*) boxptr_HpcOmEqSystems_buildTaskgraphMetaForTornSystem,0}};
#define boxvar_HpcOmEqSystems_buildTaskgraphMetaForTornSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildTaskgraphMetaForTornSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData_t *threadData, modelica_integer _idx, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _graphIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _graphIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildMatchedGraphForTornSystem,2,0) {(void*) boxptr_HpcOmEqSystems_buildMatchedGraphForTornSystem,0}};
#define boxvar_HpcOmEqSystems_buildMatchedGraphForTornSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildMatchedGraphForTornSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_genSystemVarIdcs(threadData_t *threadData, modelica_metatype _idcsIn, modelica_integer _idx, modelica_integer *out_idx2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_genSystemVarIdcs(threadData_t *threadData, modelica_metatype _idcsIn, modelica_metatype _idx, modelica_metatype *out_idx2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_genSystemVarIdcs,2,0) {(void*) boxptr_HpcOmEqSystems_genSystemVarIdcs,0}};
#define boxvar_HpcOmEqSystems_genSystemVarIdcs MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_genSystemVarIdcs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_pts__transformScheduleToTask(threadData_t *threadData, modelica_metatype _otherEqSys, modelica_metatype _resSimEqs, modelica_integer _compIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__transformScheduleToTask(threadData_t *threadData, modelica_metatype _otherEqSys, modelica_metatype _resSimEqs, modelica_metatype _compIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__transformScheduleToTask,2,0) {(void*) boxptr_HpcOmEqSystems_pts__transformScheduleToTask,0}};
#define boxvar_HpcOmEqSystems_pts__transformScheduleToTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__transformScheduleToTask)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_integer _compIdxIn, modelica_metatype _taskLstIn, modelica_boolean _isInitial, modelica_metatype *out_taskLstOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_metatype _compIdxIn, modelica_metatype _taskLstIn, modelica_metatype _isInitial, modelica_metatype *out_taskLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__traverseCompsAndParallelize,2,0) {(void*) boxptr_HpcOmEqSystems_pts__traverseCompsAndParallelize,0}};
#define boxvar_HpcOmEqSystems_pts__traverseCompsAndParallelize MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__traverseCompsAndParallelize)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_pts__traverseEqSystems(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_integer _compIdxIn, modelica_metatype _taskLstIn, modelica_boolean _isInitial, modelica_metatype *out_taskLstOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__traverseEqSystems(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_metatype _compIdxIn, modelica_metatype _taskLstIn, modelica_metatype _isInitial, modelica_metatype *out_taskLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__traverseEqSystems,2,0) {(void*) boxptr_HpcOmEqSystems_pts__traverseEqSystems,0}};
#define boxvar_HpcOmEqSystems_pts__traverseEqSystems MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_pts__traverseEqSystems)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_getScheduledTaskCompIdx(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getScheduledTaskCompIdx(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getScheduledTaskCompIdx,2,0) {(void*) boxptr_HpcOmEqSystems_getScheduledTaskCompIdx,0}};
#define boxvar_HpcOmEqSystems_getScheduledTaskCompIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getScheduledTaskCompIdx)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_dumpEqArrLst1(threadData_t *threadData, modelica_integer _lstIdx, modelica_metatype _inLstLst, modelica_string _heading);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_dumpEqArrLst1(threadData_t *threadData, modelica_metatype _lstIdx, modelica_metatype _inLstLst, modelica_metatype _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqArrLst1,2,0) {(void*) boxptr_HpcOmEqSystems_dumpEqArrLst1,0}};
#define boxvar_HpcOmEqSystems_dumpEqArrLst1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqArrLst1)
PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpEqArrLst(threadData_t *threadData, modelica_metatype _inArrLst, modelica_string _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqArrLst,2,0) {(void*) boxptr_HpcOmEqSystems_dumpEqArrLst,0}};
#define boxvar_HpcOmEqSystems_dumpEqArrLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqArrLst)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_dumpVarArrLst1(threadData_t *threadData, modelica_integer _lstIdx, modelica_metatype _inLstLst, modelica_string _heading);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_dumpVarArrLst1(threadData_t *threadData, modelica_metatype _lstIdx, modelica_metatype _inLstLst, modelica_metatype _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpVarArrLst1,2,0) {(void*) boxptr_HpcOmEqSystems_dumpVarArrLst1,0}};
#define boxvar_HpcOmEqSystems_dumpVarArrLst1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpVarArrLst1)
PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpVarArrLst(threadData_t *threadData, modelica_metatype _inArrLst, modelica_string _heading);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpVarArrLst,2,0) {(void*) boxptr_HpcOmEqSystems_dumpVarArrLst,0}};
#define boxvar_HpcOmEqSystems_dumpVarArrLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpVarArrLst)
PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpMatrix(threadData_t *threadData, modelica_metatype _matrix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpMatrix,2,0) {(void*) boxptr_HpcOmEqSystems_dumpMatrix,0}};
#define boxvar_HpcOmEqSystems_dumpMatrix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpMatrix)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_EqSysRowString(threadData_t *threadData, modelica_metatype _Arow, modelica_metatype _x, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_EqSysRowString,2,0) {(void*) boxptr_HpcOmEqSystems_EqSysRowString,0}};
#define boxvar_HpcOmEqSystems_EqSysRowString MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_EqSysRowString)
PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpEqSys(threadData_t *threadData, modelica_metatype _matrix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqSys,2,0) {(void*) boxptr_HpcOmEqSystems_dumpEqSys,0}};
#define boxvar_HpcOmEqSystems_dumpEqSys MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_dumpEqSys)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_transposeMatrix1(threadData_t *threadData, modelica_integer _idx, modelica_metatype _matrixOrig, modelica_metatype _matrixIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_transposeMatrix1(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _matrixOrig, modelica_metatype _matrixIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_transposeMatrix1,2,0) {(void*) boxptr_HpcOmEqSystems_transposeMatrix1,0}};
#define boxvar_HpcOmEqSystems_transposeMatrix1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_transposeMatrix1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_transposeMatrix(threadData_t *threadData, modelica_metatype _matrixIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_transposeMatrix,2,0) {(void*) boxptr_HpcOmEqSystems_transposeMatrix,0}};
#define boxvar_HpcOmEqSystems_transposeMatrix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_transposeMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getMatrixFromJac(threadData_t *threadData, modelica_metatype _jacValuesIn, modelica_metatype _vars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getMatrixFromJac,2,0) {(void*) boxptr_HpcOmEqSystems_getMatrixFromJac,0}};
#define boxvar_HpcOmEqSystems_getMatrixFromJac MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getMatrixFromJac)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceColumnInMatrix(threadData_t *threadData, modelica_metatype _matrixT, modelica_integer _col, modelica_metatype _vectorB);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceColumnInMatrix(threadData_t *threadData, modelica_metatype _matrixT, modelica_metatype _col, modelica_metatype _vectorB);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceColumnInMatrix,2,0) {(void*) boxptr_HpcOmEqSystems_replaceColumnInMatrix,0}};
#define boxvar_HpcOmEqSystems_replaceColumnInMatrix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceColumnInMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_determinant(threadData_t *threadData, modelica_metatype _matrix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_determinant,2,0) {(void*) boxptr_HpcOmEqSystems_determinant,0}};
#define boxvar_HpcOmEqSystems_determinant MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_determinant)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_CramerRule1(threadData_t *threadData, modelica_integer _idx, modelica_metatype _syst, modelica_metatype _matrixAT);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_CramerRule1(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _syst, modelica_metatype _matrixAT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_CramerRule1,2,0) {(void*) boxptr_HpcOmEqSystems_CramerRule1,0}};
#define boxvar_HpcOmEqSystems_CramerRule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_CramerRule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_CramerRule(threadData_t *threadData, modelica_metatype _system, modelica_metatype *out_otherEqsOut, modelica_metatype *out_otherVarsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_CramerRule,2,0) {(void*) boxptr_HpcOmEqSystems_CramerRule,0}};
#define boxvar_HpcOmEqSystems_CramerRule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_CramerRule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_applyCramerRule(threadData_t *threadData, modelica_metatype _jacValuesIn, modelica_metatype _varsIn, modelica_metatype *out_tvarsOut, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_applyCramerRule,2,0) {(void*) boxptr_HpcOmEqSystems_applyCramerRule,0}};
#define boxvar_HpcOmEqSystems_applyCramerRule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_applyCramerRule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getNewChioEntry(threadData_t *threadData, modelica_integer _col, modelica_integer _row, modelica_metatype _syst, modelica_integer _iter, modelica_metatype _foldIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getNewChioEntry(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row, modelica_metatype _syst, modelica_metatype _iter, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getNewChioEntry,2,0) {(void*) boxptr_HpcOmEqSystems_getNewChioEntry,0}};
#define boxvar_HpcOmEqSystems_getNewChioEntry MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getNewChioEntry)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getNewChioRow(threadData_t *threadData, modelica_integer _row, modelica_metatype _systemIn, modelica_integer _iterIdx, modelica_metatype _foldIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getNewChioRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype _systemIn, modelica_metatype _iterIdx, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getNewChioRow,2,0) {(void*) boxptr_HpcOmEqSystems_getNewChioRow,0}};
#define boxvar_HpcOmEqSystems_getNewChioRow MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getNewChioRow)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_makeVarOfIdent(threadData_t *threadData, modelica_string _ident, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_makeVarOfIdent,2,0) {(void*) boxptr_HpcOmEqSystems_makeVarOfIdent,0}};
#define boxvar_HpcOmEqSystems_makeVarOfIdent MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_makeVarOfIdent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_makeDetExp(threadData_t *threadData, modelica_integer _iterIdx, modelica_string _ident, modelica_integer _row, modelica_integer _col, modelica_metatype _ty);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_makeDetExp(threadData_t *threadData, modelica_metatype _iterIdx, modelica_metatype _ident, modelica_metatype _row, modelica_metatype _col, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_makeDetExp,2,0) {(void*) boxptr_HpcOmEqSystems_makeDetExp,0}};
#define boxvar_HpcOmEqSystems_makeDetExp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_makeDetExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_generateCramerEqs(threadData_t *threadData, modelica_metatype _varIdcs, modelica_integer _dim, modelica_metatype _vectorX, modelica_metatype _vectorB, modelica_metatype _matrixA, modelica_metatype _eqsIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_generateCramerEqs(threadData_t *threadData, modelica_metatype _varIdcs, modelica_metatype _dim, modelica_metatype _vectorX, modelica_metatype _vectorB, modelica_metatype _matrixA, modelica_metatype _eqsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_generateCramerEqs,2,0) {(void*) boxptr_HpcOmEqSystems_generateCramerEqs,0}};
#define boxvar_HpcOmEqSystems_generateCramerEqs MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_generateCramerEqs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_ChiosCondensation2(threadData_t *threadData, modelica_metatype _systemIn, modelica_integer _iterIdx, modelica_metatype _addEqsIn, modelica_metatype _addVarsIn, modelica_metatype *out_addVarsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_ChiosCondensation2(threadData_t *threadData, modelica_metatype _systemIn, modelica_metatype _iterIdx, modelica_metatype _addEqsIn, modelica_metatype _addVarsIn, modelica_metatype *out_addVarsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_ChiosCondensation2,2,0) {(void*) boxptr_HpcOmEqSystems_ChiosCondensation2,0}};
#define boxvar_HpcOmEqSystems_ChiosCondensation2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_ChiosCondensation2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_chiosCondensation(threadData_t *threadData, modelica_metatype _systemIn, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_chiosCondensation,2,0) {(void*) boxptr_HpcOmEqSystems_chiosCondensation,0}};
#define boxvar_HpcOmEqSystems_chiosCondensation MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_chiosCondensation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getSummands(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getSummands,2,0) {(void*) boxptr_HpcOmEqSystems_getSummands,0}};
#define boxvar_HpcOmEqSystems_getSummands MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getSummands)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getCallExpLst(threadData_t *threadData, modelica_metatype _eIn, modelica_metatype _eLstIn, modelica_metatype *out_eLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getCallExpLst,2,0) {(void*) boxptr_HpcOmEqSystems_getCallExpLst,0}};
#define boxvar_HpcOmEqSystems_getCallExpLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getCallExpLst)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmEqSystems_containsFunctioncallOfCref(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _cref);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_containsFunctioncallOfCref(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_containsFunctioncallOfCref,2,0) {(void*) boxptr_HpcOmEqSystems_containsFunctioncallOfCref,0}};
#define boxvar_HpcOmEqSystems_containsFunctioncallOfCref MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_containsFunctioncallOfCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem3(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem3,2,0) {(void*) boxptr_HpcOmEqSystems_getEqSystem3,0}};
#define boxvar_HpcOmEqSystems_getEqSystem3 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem2(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _crefs, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem2,2,0) {(void*) boxptr_HpcOmEqSystems_getEqSystem2,0}};
#define boxvar_HpcOmEqSystems_getEqSystem2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_createEqSystem(threadData_t *threadData, modelica_metatype _varLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_createEqSystem,2,0) {(void*) boxptr_HpcOmEqSystems_createEqSystem,0}};
#define boxvar_HpcOmEqSystems_createEqSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_createEqSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem(threadData_t *threadData, modelica_metatype _eqLst, modelica_metatype _varLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem,2,0) {(void*) boxptr_HpcOmEqSystems_getEqSystem,0}};
#define boxvar_HpcOmEqSystems_getEqSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getEqSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceOtherVarsWithPrefixCref(threadData_t *threadData, modelica_integer _indxIn, modelica_string _prefix, modelica_metatype _oVarCRefLstIn, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceOtherVarsWithPrefixCref(threadData_t *threadData, modelica_metatype _indxIn, modelica_metatype _prefix, modelica_metatype _oVarCRefLstIn, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceOtherVarsWithPrefixCref,2,0) {(void*) boxptr_HpcOmEqSystems_replaceOtherVarsWithPrefixCref,0}};
#define boxvar_HpcOmEqSystems_replaceOtherVarsWithPrefixCref MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceOtherVarsWithPrefixCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceTVarWithReal(threadData_t *threadData, modelica_metatype _tVarCRefIn, modelica_real _realIn, modelica_metatype _replacementIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceTVarWithReal(threadData_t *threadData, modelica_metatype _tVarCRefIn, modelica_metatype _realIn, modelica_metatype _replacementIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceTVarWithReal,2,0) {(void*) boxptr_HpcOmEqSystems_replaceTVarWithReal,0}};
#define boxvar_HpcOmEqSystems_replaceTVarWithReal MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceTVarWithReal)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData_t *threadData, modelica_metatype _iIn, modelica_integer _size, modelica_metatype _otherEqLstIn, modelica_metatype _tvarLstIn, modelica_metatype _tVarCRefLstIn, modelica_metatype _otherVarLstIn, modelica_metatype _oVarCRefLstIn, modelica_metatype _g_iArrIn, modelica_metatype _xa_iArrIn, modelica_metatype _replacementArrIn, modelica_integer _tornSysIdx, modelica_metatype *out_xa_i_Out, modelica_metatype *out_replacementArrOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData_t *threadData, modelica_metatype _iIn, modelica_metatype _size, modelica_metatype _otherEqLstIn, modelica_metatype _tvarLstIn, modelica_metatype _tVarCRefLstIn, modelica_metatype _otherVarLstIn, modelica_metatype _oVarCRefLstIn, modelica_metatype _g_iArrIn, modelica_metatype _xa_iArrIn, modelica_metatype _replacementArrIn, modelica_metatype _tornSysIdx, modelica_metatype *out_xa_i_Out, modelica_metatype *out_replacementArrOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getAlgebraicEquationsForEI,2,0) {(void*) boxptr_HpcOmEqSystems_getAlgebraicEquationsForEI,0}};
#define boxvar_HpcOmEqSystems_getAlgebraicEquationsForEI MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getAlgebraicEquationsForEI)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_eqInFrontList(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _lstLstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_eqInFrontList,2,0) {(void*) boxptr_HpcOmEqSystems_eqInFrontList,0}};
#define boxvar_HpcOmEqSystems_eqInFrontList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_eqInFrontList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_varInFrontList(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _lstLstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_varInFrontList,2,0) {(void*) boxptr_HpcOmEqSystems_varInFrontList,0}};
#define boxvar_HpcOmEqSystems_varInFrontList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_varInFrontList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressionForEquation(threadData_t *threadData, modelica_metatype _eq);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressionForEquation,2,0) {(void*) boxptr_HpcOmEqSystems_getResidualExpressionForEquation,0}};
#define boxvar_HpcOmEqSystems_getResidualExpressionForEquation MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressionForEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressions1(threadData_t *threadData, modelica_integer _i, modelica_metatype _resExpsIn, modelica_metatype _replArr, modelica_metatype _h_iArrIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getResidualExpressions1(threadData_t *threadData, modelica_metatype _i, modelica_metatype _resExpsIn, modelica_metatype _replArr, modelica_metatype _h_iArrIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressions1,2,0) {(void*) boxptr_HpcOmEqSystems_getResidualExpressions1,0}};
#define boxvar_HpcOmEqSystems_getResidualExpressions1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressions1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressions(threadData_t *threadData, modelica_metatype _iIn, modelica_metatype _resEqLstIn, modelica_metatype _replArrIn, modelica_metatype _h_iArrIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressions,2,0) {(void*) boxptr_HpcOmEqSystems_getResidualExpressions,0}};
#define boxvar_HpcOmEqSystems_getResidualExpressions MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getResidualExpressions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_varExp(threadData_t *threadData, modelica_metatype _varIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_varExp,2,0) {(void*) boxptr_HpcOmEqSystems_varExp,0}};
#define boxvar_HpcOmEqSystems_varExp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_varExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData_t *threadData, modelica_metatype _resIdxLst, modelica_integer _iIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_integer _tornSysIdx, modelica_metatype *out_a_iArrOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getTornSystemCoefficients1(threadData_t *threadData, modelica_metatype _resIdxLst, modelica_metatype _iIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype _tornSysIdx, modelica_metatype *out_a_iArrOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getTornSystemCoefficients1,2,0) {(void*) boxptr_HpcOmEqSystems_getTornSystemCoefficients1,0}};
#define boxvar_HpcOmEqSystems_getTornSystemCoefficients1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getTornSystemCoefficients1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getTornSystemCoefficients(threadData_t *threadData, modelica_metatype _iValueRange, modelica_integer _numTVars, modelica_integer _tornSysIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype *out_a_iArrOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getTornSystemCoefficients(threadData_t *threadData, modelica_metatype _iValueRange, modelica_metatype _numTVars, modelica_metatype _tornSysIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype *out_a_iArrOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getTornSystemCoefficients,2,0) {(void*) boxptr_HpcOmEqSystems_getTornSystemCoefficients,0}};
#define boxvar_HpcOmEqSystems_getTornSystemCoefficients MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getTornSystemCoefficients)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildSingleEquationSystem(threadData_t *threadData, modelica_integer _eqSizeOrig, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _shared, modelica_metatype _compsIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildSingleEquationSystem(threadData_t *threadData, modelica_metatype _eqSizeOrig, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _shared, modelica_metatype _compsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildSingleEquationSystem,2,0) {(void*) boxptr_HpcOmEqSystems_buildSingleEquationSystem,0}};
#define boxvar_HpcOmEqSystems_buildSingleEquationSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildSingleEquationSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_addProductToExp(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_addProductToExp,2,0) {(void*) boxptr_HpcOmEqSystems_addProductToExp,0}};
#define boxvar_HpcOmEqSystems_addProductToExp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_addProductToExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildNewResidualEquation2(threadData_t *threadData, modelica_integer _idx, modelica_metatype _coeffs, modelica_metatype _tVars, modelica_metatype _expIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildNewResidualEquation2(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _coeffs, modelica_metatype _tVars, modelica_metatype _expIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildNewResidualEquation2,2,0) {(void*) boxptr_HpcOmEqSystems_buildNewResidualEquation2,0}};
#define boxvar_HpcOmEqSystems_buildNewResidualEquation2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildNewResidualEquation2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildNewResidualEquation(threadData_t *threadData, modelica_integer _resIdx, modelica_metatype _aCoeffLst, modelica_metatype _a0CoeffLst, modelica_metatype _tvars, modelica_metatype _resEqsIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildNewResidualEquation(threadData_t *threadData, modelica_metatype _resIdx, modelica_metatype _aCoeffLst, modelica_metatype _a0CoeffLst, modelica_metatype _tvars, modelica_metatype _resEqsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildNewResidualEquation,2,0) {(void*) boxptr_HpcOmEqSystems_buildNewResidualEquation,0}};
#define boxvar_HpcOmEqSystems_buildNewResidualEquation MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildNewResidualEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateIndicesInComp(threadData_t *threadData, modelica_metatype _compIn, modelica_integer _varOffset, modelica_integer _eqOffset);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateIndicesInComp(threadData_t *threadData, modelica_metatype _compIn, modelica_metatype _varOffset, modelica_metatype _eqOffset);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateIndicesInComp,2,0) {(void*) boxptr_HpcOmEqSystems_updateIndicesInComp,0}};
#define boxvar_HpcOmEqSystems_updateIndicesInComp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateIndicesInComp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceAtPositionFromList(threadData_t *threadData, modelica_integer _n, modelica_metatype _replacingLst, modelica_metatype _positionLst, modelica_metatype _inLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceAtPositionFromList(threadData_t *threadData, modelica_metatype _n, modelica_metatype _replacingLst, modelica_metatype _positionLst, modelica_metatype _inLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceAtPositionFromList,2,0) {(void*) boxptr_HpcOmEqSystems_replaceAtPositionFromList,0}};
#define boxvar_HpcOmEqSystems_replaceAtPositionFromList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceAtPositionFromList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getOtherComps1(threadData_t *threadData, modelica_metatype _innerEquation, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getOtherComps1,2,0) {(void*) boxptr_HpcOmEqSystems_getOtherComps1,0}};
#define boxvar_HpcOmEqSystems_getOtherComps1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getOtherComps1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getOtherComps(threadData_t *threadData, modelica_metatype _innerEquations, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getOtherComps,2,0) {(void*) boxptr_HpcOmEqSystems_getOtherComps,0}};
#define boxvar_HpcOmEqSystems_getOtherComps MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_getOtherComps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateResidualMatching(threadData_t *threadData, modelica_integer _idx, modelica_metatype _tvars, modelica_metatype _resEqs, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateResidualMatching(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _tvars, modelica_metatype _resEqs, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateResidualMatching,2,0) {(void*) boxptr_HpcOmEqSystems_updateResidualMatching,0}};
#define boxvar_HpcOmEqSystems_updateResidualMatching MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateResidualMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateMatching(threadData_t *threadData, modelica_integer _idx, modelica_metatype _offsetTpl, modelica_metatype _matching2, modelica_metatype _matching1In);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateMatching(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _offsetTpl, modelica_metatype _matching2, modelica_metatype _matching1In);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateMatching,2,0) {(void*) boxptr_HpcOmEqSystems_updateMatching,0}};
#define boxvar_HpcOmEqSystems_updateMatching MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateMatching)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian2(threadData_t *threadData, modelica_integer _colIdx, modelica_metatype _inElements, modelica_integer _rowIdx, modelica_metatype _inJac);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildLinearJacobian2(threadData_t *threadData, modelica_metatype _colIdx, modelica_metatype _inElements, modelica_metatype _rowIdx, modelica_metatype _inJac);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian2,2,0) {(void*) boxptr_HpcOmEqSystems_buildLinearJacobian2,0}};
#define boxvar_HpcOmEqSystems_buildLinearJacobian2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian1(threadData_t *threadData, modelica_integer _rowIdx, modelica_metatype _columns, modelica_metatype _inElements, modelica_metatype _inJac);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildLinearJacobian1(threadData_t *threadData, modelica_metatype _rowIdx, modelica_metatype _columns, modelica_metatype _inElements, modelica_metatype _inJac);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian1,2,0) {(void*) boxptr_HpcOmEqSystems_buildLinearJacobian1,0}};
#define boxvar_HpcOmEqSystems_buildLinearJacobian1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _eqIdcs, modelica_metatype _varIdcs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian,2,0) {(void*) boxptr_HpcOmEqSystems_buildLinearJacobian,0}};
#define boxvar_HpcOmEqSystems_buildLinearJacobian MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildLinearJacobian)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildEqSystemComponent(threadData_t *threadData, modelica_metatype _eqIdcsIn, modelica_metatype _varIdcsIn, modelica_metatype _resEqsIn, modelica_metatype _tVarsIn, modelica_metatype _jacValuesIn, modelica_metatype _shared, modelica_metatype *out_resEqsOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildEqSystemComponent,2,0) {(void*) boxptr_HpcOmEqSystems_buildEqSystemComponent,0}};
#define boxvar_HpcOmEqSystems_buildEqSystemComponent MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_buildEqSystemComponent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_simplifyNewEquations1(threadData_t *threadData, modelica_integer _eqIdx, modelica_metatype _eqArr, modelica_metatype _varArr, modelica_metatype _m, modelica_metatype _mt, modelica_integer _numAuxiliaryVars, modelica_metatype _shared, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_simplifyNewEquations1(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _eqArr, modelica_metatype _varArr, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _numAuxiliaryVars, modelica_metatype _shared, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_simplifyNewEquations1,2,0) {(void*) boxptr_HpcOmEqSystems_simplifyNewEquations1,0}};
#define boxvar_HpcOmEqSystems_simplifyNewEquations1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_simplifyNewEquations1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_simplifyNewEquations(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _resEqsIn, modelica_integer _numAuxiliaryVars, modelica_integer _numIter, modelica_metatype _shared, modelica_metatype *out_varsOut, modelica_metatype *out_resEqsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_simplifyNewEquations(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _resEqsIn, modelica_metatype _numAuxiliaryVars, modelica_metatype _numIter, modelica_metatype _shared, modelica_metatype *out_varsOut, modelica_metatype *out_resEqsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_simplifyNewEquations,2,0) {(void*) boxptr_HpcOmEqSystems_simplifyNewEquations,0}};
#define boxvar_HpcOmEqSystems_simplifyNewEquations MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_simplifyNewEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_addDerReplacement(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2, modelica_metatype _replIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_addDerReplacement,2,0) {(void*) boxptr_HpcOmEqSystems_addDerReplacement,0}};
#define boxvar_HpcOmEqSystems_addDerReplacement MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_addDerReplacement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem2(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _tVarIdcs0, modelica_metatype _resEqIdcs0, modelica_metatype _innerEquations, modelica_integer _tornSysIdx, modelica_metatype *out_eqsNewOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_resEqsOut, modelica_metatype *out_matchingOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem2(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _tVarIdcs0, modelica_metatype _resEqIdcs0, modelica_metatype _innerEquations, modelica_metatype _tornSysIdx, modelica_metatype *out_eqsNewOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_resEqsOut, modelica_metatype *out_matchingOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem2,2,0) {(void*) boxptr_HpcOmEqSystems_reduceLinearTornSystem2,0}};
#define boxvar_HpcOmEqSystems_reduceLinearTornSystem2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceIndecesInComp(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _eqMap, modelica_metatype _varMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceIndecesInComp,2,0) {(void*) boxptr_HpcOmEqSystems_replaceIndecesInComp,0}};
#define boxvar_HpcOmEqSystems_replaceIndecesInComp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_replaceIndecesInComp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_matchComponent(threadData_t *threadData, modelica_metatype _eqLstIn, modelica_metatype _varLstIn, modelica_metatype _eqIdcs, modelica_metatype _varIdcs, modelica_metatype _sharedIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_matchComponent,2,0) {(void*) boxptr_HpcOmEqSystems_matchComponent,0}};
#define boxvar_HpcOmEqSystems_matchComponent MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_matchComponent)
PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_updateAssignmentsByComp(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _ass1, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateAssignmentsByComp,2,0) {(void*) boxptr_HpcOmEqSystems_updateAssignmentsByComp,0}};
#define boxvar_HpcOmEqSystems_updateAssignmentsByComp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_updateAssignmentsByComp)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmEqSystems_compHasDummyState(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _syst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_compHasDummyState(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _syst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_compHasDummyState,2,0) {(void*) boxptr_HpcOmEqSystems_compHasDummyState,0}};
#define boxvar_HpcOmEqSystems_compHasDummyState MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_compHasDummyState)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData_t *threadData, modelica_integer _compIdx, modelica_metatype _compsIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_integer _tornSysIdxIn, modelica_integer *out_tornSysIdxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem1(threadData_t *threadData, modelica_metatype _compIdx, modelica_metatype _compsIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_metatype _tornSysIdxIn, modelica_metatype *out_tornSysIdxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem1,2,0) {(void*) boxptr_HpcOmEqSystems_reduceLinearTornSystem1,0}};
#define boxvar_HpcOmEqSystems_reduceLinearTornSystem1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_integer _tornSysIdxIn, modelica_integer *out_tornSysIdxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_metatype _tornSysIdxIn, modelica_metatype *out_tornSysIdxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem,2,0) {(void*) boxptr_HpcOmEqSystems_reduceLinearTornSystem,0}};
#define boxvar_HpcOmEqSystems_reduceLinearTornSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmEqSystems_reduceLinearTornSystem)

DLLDirection
modelica_metatype omc_HpcOmEqSystems_createSingleBlockSchedule(threadData_t *threadData, modelica_metatype _graphIn, modelica_metatype _metaIn, modelica_metatype _scheduledTasks, modelica_metatype _sccSimEqMapping)
{
  modelica_metatype _schedule = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _simEqSys = NULL;
  modelica_metatype _thread1 = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _schedule has no default value.
  // _nodes has no default value.
  // _comps has no default value.
  // _simEqSys has no default value.
  // _thread1 has no default value.
  // _threadTasks has no default value.
  // _inComps has no default value.
  // _allCalcTasks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _metaIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  _nodes = omc_List_intRange(threadData, arrayLength(_graphIn));

  _comps = omc_List_map1(threadData, _nodes, boxvar_Array_getIndexFirst, _inComps);

  _simEqSys = omc_HpcOmScheduler_getSimEqSysIdcsForNodeLst(threadData, _comps, _sccSimEqMapping);

  _simEqSys = omc_List_map1(threadData, _simEqSys, boxvar_List_sort, boxvar_intGt);

  _thread1 = omc_List_threadMap1(threadData, _simEqSys, _nodes, boxvar_HpcOmScheduler_makeCalcTask, mmc_mk_integer(((modelica_integer) 1)));

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTasks = arrayCreate(((modelica_integer) 4), tmpMeta3);

  _threadTasks = arrayUpdate(_threadTasks, ((modelica_integer) 1), _thread1);

  _allCalcTasks = arrayCreate(listLength(_thread1), _OMC_LIT1);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta4, _scheduledTasks, _allCalcTasks);
  _schedule = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _schedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildDummyCommCost(threadData_t *threadData, modelica_integer _iChildNodeIdx)
{
  modelica_metatype _oCommCost = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommCost has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = mmc_mk_box8(3, &HpcOmTaskGraph_Communication_COMMUNICATION__desc, mmc_mk_integer(((modelica_integer) 1)), tmpMeta1, _OMC_LIT2, tmpMeta2, tmpMeta3, mmc_mk_integer(_iChildNodeIdx), _OMC_LIT3);
  _oCommCost = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oCommCost;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildDummyCommCost(threadData_t *threadData, modelica_metatype _iChildNodeIdx)
{
  modelica_integer tmp1;
  modelica_metatype _oCommCost = NULL;
  tmp1 = mmc_unbox_integer(_iChildNodeIdx);
  _oCommCost = omc_HpcOmEqSystems_buildDummyCommCost(threadData, tmp1);
  /* skip box _oCommCost; HpcOmTaskGraph.Communication */
  return _oCommCost;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildDummyCommCosts(threadData_t *threadData, modelica_metatype _childNodes)
{
  modelica_metatype _commCosts = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _commCosts has no default value.
  _commCosts = omc_List_map(threadData, _childNodes, boxvar_HpcOmEqSystems_buildDummyCommCost);
  _return: OMC_LABEL_UNUSED
  return _commCosts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildTaskgraphMetaForTornSystem(threadData_t *threadData, modelica_metatype _graph, modelica_metatype _eqLst, modelica_metatype _varLst, modelica_metatype _metaIn)
{
  modelica_metatype _metaOut = NULL;
  modelica_integer _numNodes;
  modelica_metatype _eqStrings = NULL;
  modelica_metatype _varStrings = NULL;
  modelica_metatype _descLst = NULL;
  modelica_metatype _eqCompMapping = NULL;
  modelica_metatype _varCompMapping = NULL;
  modelica_metatype _nodeMark = NULL;
  modelica_metatype _compDescs = NULL;
  modelica_metatype _compNames = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _compParamMapping = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _compInformations = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _metaOut has no default value.
  // _numNodes has no default value.
  // _eqStrings has no default value.
  // _varStrings has no default value.
  // _descLst has no default value.
  // _eqCompMapping has no default value.
  // _varCompMapping has no default value.
  // _nodeMark has no default value.
  // _compDescs has no default value.
  // _compNames has no default value.
  // _inComps has no default value.
  // _exeCosts has no default value.
  // _compParamMapping has no default value.
  // _commCosts has no default value.
  // _compInformations has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _metaIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 10));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 11));
  _varCompMapping = tmpMeta2;
  _eqCompMapping = tmpMeta3;
  _compParamMapping = tmpMeta4;
  _nodeMark = tmpMeta5;
  _compInformations = tmpMeta6;

  _numNodes = arrayLength(_graph);

  _inComps = listArray(omc_List_map(threadData, omc_List_intRange(threadData, _numNodes), boxvar_List_create));

  _compNames = listArray(omc_List_map(threadData, omc_List_intRange(threadData, _numNodes), boxvar_intString));

  _exeCosts = arrayCreate(_numNodes, _OMC_LIT5);

  _commCosts = omc_Array_map(threadData, _graph, boxvar_HpcOmEqSystems_buildDummyCommCosts);

  _eqStrings = omc_List_map(threadData, _eqLst, boxvar_BackendDump_equationString);

  _varStrings = omc_List_map(threadData, _varLst, boxvar_HpcOmTaskGraph_getVarString);

  _descLst = omc_List_map1(threadData, _eqStrings, boxvar_stringAppend, _OMC_LIT6);

  _descLst = omc_List_threadMap(threadData, _descLst, _varStrings, boxvar_stringAppend);

  _compDescs = listArray(_descLst);

  tmpMeta7 = mmc_mk_box11(3, &HpcOmTaskGraph_TaskGraphMeta_TASKGRAPHMETA__desc, _inComps, _varCompMapping, _eqCompMapping, _compParamMapping, _compNames, _compDescs, _exeCosts, _commCosts, _nodeMark, _compInformations);
  _metaOut = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _metaOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData_t *threadData, modelica_integer _idx, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _graphIn)
{
  modelica_metatype _graphOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _graphOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _eq;
      modelica_metatype _vars = NULL;
      modelica_metatype _depEqs = NULL;
      modelica_metatype _graph = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eq has no default value.
      // _vars has no default value.
      // _depEqs has no default value.
      // _graph has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (listLength(_eqsIn) >= _idx);
          if (1 /* true */ != tmp6) goto goto_2;

          _vars = listGet(_varsIn, _idx);

          _eq = mmc_unbox_integer(listGet(_eqsIn, _idx));

          _depEqs = omc_List_flatten(threadData, omc_List_map1(threadData, _vars, boxvar_Array_getIndexFirst, _mt));

          _depEqs = omc_List_deleteMemberOnTrue(threadData, mmc_mk_integer(_eq), _depEqs, boxvar_intEq, NULL);

          _graph = arrayUpdate(_graphIn, _eq, _depEqs);
          tmpMeta1 = omc_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData, ((modelica_integer) 1) + _idx, _eqsIn, _varsIn, _m, _mt, _graph);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (listLength(_eqsIn) > _idx);
          if (0 /* false */ != tmp7) goto goto_2;
          tmpMeta1 = _graphIn;
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
  _graphOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _graphOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _graphIn)
{
  modelica_integer tmp1;
  modelica_metatype _graphOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _graphOut = omc_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData, tmp1, _eqsIn, _varsIn, _m, _mt, _graphIn);
  /* skip box _graphOut; array<list<#Integer>> */
  return _graphOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_genSystemVarIdcs(threadData_t *threadData, modelica_metatype _idcsIn, modelica_integer _idx, modelica_integer *out_idx2)
{
  modelica_metatype _idcsOut = NULL;
  modelica_integer _idx2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idcsOut has no default value.
  // _idx2 has no default value.
  _idx2 = listLength(_idcsIn) + _idx;

  _idcsOut = omc_List_intRange2(threadData, _idx, ((modelica_integer) -1) + _idx2);
  _return: OMC_LABEL_UNUSED
  if (out_idx2) { *out_idx2 = _idx2; }
  return _idcsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_genSystemVarIdcs(threadData_t *threadData, modelica_metatype _idcsIn, modelica_metatype _idx, modelica_metatype *out_idx2)
{
  modelica_integer tmp1;
  modelica_integer _idx2;
  modelica_metatype _idcsOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _idcsOut = omc_HpcOmEqSystems_genSystemVarIdcs(threadData, _idcsIn, tmp1, &_idx2);
  /* skip box _idcsOut; list<#Integer> */
  if (out_idx2) { *out_idx2 = mmc_mk_icon(_idx2); }
  return _idcsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_pts__transformScheduleToTask(threadData_t *threadData, modelica_metatype _otherEqSys, modelica_metatype _resSimEqs, modelica_integer _compIdx)
{
  modelica_metatype _task = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _task has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _otherEqSys;
    {
      modelica_integer _numThreads;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numThreads has no default value.
      // _outgoingDepTasks has no default value.
      // _schedule has no default value.
      // _threadTasks has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          fputs(MMC_STRINGDATA(_OMC_LIT7),stdout);
          goto goto_2;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          /* Pattern matching succeeded */
          _numThreads = arrayLength(_threadTasks);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta9, _allCalcTasks);
          _schedule = tmpMeta10;
          tmpMeta11 = mmc_mk_box4(3, &HpcOmSimCode_Task_SCHEDULED__TASK__desc, mmc_mk_integer(_compIdx), mmc_mk_integer(_numThreads), _schedule);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT8),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _task = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _task;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__transformScheduleToTask(threadData_t *threadData, modelica_metatype _otherEqSys, modelica_metatype _resSimEqs, modelica_metatype _compIdx)
{
  modelica_integer tmp1;
  modelica_metatype _task = NULL;
  tmp1 = mmc_unbox_integer(_compIdx);
  _task = omc_HpcOmEqSystems_pts__transformScheduleToTask(threadData, _otherEqSys, _resSimEqs, tmp1);
  /* skip box _task; HpcOmSimCode.Task */
  return _task;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_integer _compIdxIn, modelica_metatype _taskLstIn, modelica_boolean _isInitial, modelica_metatype *out_taskLstOut)
{
  modelica_integer _compIdxOut;
  modelica_metatype _taskLstOut = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compIdxOut has no default value.
  // _taskLstOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inComps;
    {
      modelica_integer _numEqs;
      modelica_integer _numVars;
      modelica_integer _numResEqs;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _varIdcs = NULL;
      modelica_metatype _resEqs = NULL;
      modelica_metatype _eqIdcsSys = NULL;
      modelica_metatype _simEqSysIdcs = NULL;
      modelica_metatype _resSimEqSysIdcs = NULL;
      modelica_metatype _otherSimEqSysIdcs = NULL;
      modelica_metatype _varIdcLstSys = NULL;
      modelica_metatype _varIdcsLsts = NULL;
      modelica_metatype _innerEquations = NULL;
      modelica_metatype _otherSimEqMapping = NULL;
      modelica_metatype _otherEqs = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _mT = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _otherVars = NULL;
      modelica_metatype _graph = NULL;
      modelica_metatype _graphMerged = NULL;
      modelica_metatype _meta = NULL;
      modelica_metatype _metaMerged = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _otherEqLst = NULL;
      modelica_metatype _otherVarLst = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numEqs has no default value.
      // _numVars has no default value.
      // _numResEqs has no default value.
      // _eqIdcs has no default value.
      // _varIdcs has no default value.
      // _resEqs has no default value.
      // _eqIdcsSys has no default value.
      // _simEqSysIdcs has no default value.
      // _resSimEqSysIdcs has no default value.
      // _otherSimEqSysIdcs has no default value.
      // _varIdcLstSys has no default value.
      // _varIdcsLsts has no default value.
      // _innerEquations has no default value.
      // _otherSimEqMapping has no default value.
      // _otherEqs has no default value.
      // _m has no default value.
      // _mT has no default value.
      // _comp has no default value.
      // _otherVars has no default value.
      // _graph has no default value.
      // _graphMerged has no default value.
      // _meta has no default value.
      // _metaMerged has no default value.
      // _schedule has no default value.
      // _task has no default value.
      // _otherEqLst has no default value.
      // _otherVarLst has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1_c0 = _compIdxIn;
          tmpMeta[0+1] = _taskLstIn;
          goto tmp3_done;
        }
        case 1: {
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,7,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          
          _comp = tmpMeta6;
          _resEqs = tmpMeta9;
          _innerEquations = tmpMeta10;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _eqIdcs = omc_List_map__3(threadData, _innerEquations, boxvar_BackendDAEUtil_getEqnAndVarsFromInnerEquation ,&_varIdcsLsts ,NULL);

          _varIdcs = omc_List_flatten(threadData, _varIdcsLsts);

          _numEqs = listLength(_eqIdcs);

          _numVars = listLength(_varIdcs);

          _numResEqs = listLength(_resEqs);

          _eqIdcsSys = omc_List_intRange(threadData, _numEqs);

          _varIdcLstSys = omc_List_mapFold(threadData, _varIdcsLsts, boxvar_HpcOmEqSystems_genSystemVarIdcs, mmc_mk_integer(((modelica_integer) 1)), NULL);

          _otherEqLst = omc_List_map1(threadData, _eqIdcs, boxvar_List_getIndexFirst, _eqsIn);

          _otherVarLst = omc_List_map1(threadData, _varIdcs, boxvar_List_getIndexFirst, _varsIn);

          _otherVars = omc_BackendVariable_listVar1(threadData, _otherVarLst);

          _otherEqs = omc_BackendEquation_listEquation(threadData, _otherEqLst);

          _m = omc_BackendDAEUtil_adjacencyMatrixDispatch(threadData, _otherVars, _otherEqs, _OMC_LIT9, mmc_mk_none(), _isInitial ,&_mT);

          _graph = omc_HpcOmTaskGraph_getEmptyTaskGraph(threadData, _numEqs, _numEqs, _numVars ,&_meta);

          _graph = omc_HpcOmEqSystems_buildMatchedGraphForTornSystem(threadData, ((modelica_integer) 1), _eqIdcsSys, _varIdcLstSys, _m, _mT, _graph);

          _meta = omc_HpcOmEqSystems_buildTaskgraphMetaForTornSystem(threadData, _graph, _otherEqLst, _otherVarLst, _meta);

          _simEqSysIdcs = arrayGet(_sccSimEqMapping, _compIdxIn);

          _resSimEqSysIdcs = omc_List_map1r(threadData, omc_List_intRange(threadData, _numResEqs), boxvar_intSub, listHead(_simEqSysIdcs));

          _otherSimEqSysIdcs = omc_List_map1r(threadData, omc_List_intRange2(threadData, ((modelica_integer) 1) + _numResEqs, _numResEqs + _numEqs), boxvar_intSub, listHead(_simEqSysIdcs));

          _otherSimEqMapping = listArray(omc_List_map(threadData, _otherSimEqSysIdcs, boxvar_List_create));

          tmpMeta11 = stringAppend(_OMC_LIT10,intString(_compIdxIn));
          omc_BackendDump_dumpBipartiteGraphStrongComponent1(threadData, _comp, _eqsIn, _varsIn, mmc_mk_none(), tmpMeta11);

          tmpMeta12 = stringAppend(_OMC_LIT11,intString(_compIdxIn));
          omc_BackendDump_dumpDAGStrongComponent(threadData, _graph, _meta, tmpMeta12);

          /* Pattern-matching assignment */
          tmpMeta13 = mmc_mk_box2(0, _graph, _meta);
          tmpMeta14 = tmpMeta13;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _graphMerged = tmpMeta15;
          _metaMerged = tmpMeta16;

          omc_Error_addMessage(threadData, _OMC_LIT15, _OMC_LIT17);

          tmpMeta17 = stringAppend(_OMC_LIT18,intString(_compIdxIn));
          omc_BackendDump_dumpDAGStrongComponent(threadData, _graphMerged, _metaMerged, tmpMeta17);

          _schedule = omc_HpcOmScheduler_createListSchedule(threadData, _graphMerged, _metaMerged, ((modelica_integer) 2), _otherSimEqMapping, _simVarMapping);

          omc_HpcOmScheduler_printSchedule(threadData, _schedule);

          _task = omc_HpcOmEqSystems_pts__transformScheduleToTask(threadData, _schedule, _resSimEqSysIdcs, _compIdxIn);
          tmpMeta18 = mmc_mk_cons(_task, _taskLstIn);
          tmp1_c0 = omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData, _rest, _eqsIn, _varsIn, _sccSimEqMapping, _simVarMapping, ((modelica_integer) 1) + _compIdxIn, tmpMeta18, _isInitial, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmp4_1);
          tmpMeta20 = MMC_CDR(tmp4_1);
          _rest = tmpMeta20;
          /* Pattern matching succeeded */
          tmp1_c0 = omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData, _rest, _eqsIn, _varsIn, _sccSimEqMapping, _simVarMapping, ((modelica_integer) 1) + _compIdxIn, _taskLstIn, _isInitial, &tmpMeta[0+1]);
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
  _compIdxOut = tmp1_c0;
  _taskLstOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_taskLstOut) { *out_taskLstOut = _taskLstOut; }
  return _compIdxOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_metatype _compIdxIn, modelica_metatype _taskLstIn, modelica_metatype _isInitial, modelica_metatype *out_taskLstOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _compIdxOut;
  modelica_metatype out_compIdxOut;
  tmp1 = mmc_unbox_integer(_compIdxIn);
  tmp2 = mmc_unbox_integer(_isInitial);
  _compIdxOut = omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData, _inComps, _eqsIn, _varsIn, _sccSimEqMapping, _simVarMapping, tmp1, _taskLstIn, tmp2, out_taskLstOut);
  out_compIdxOut = mmc_mk_icon(_compIdxOut);
  /* skip box _taskLstOut; list<HpcOmSimCode.Task> */
  return out_compIdxOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_pts__traverseEqSystems(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_integer _compIdxIn, modelica_metatype _taskLstIn, modelica_boolean _isInitial, modelica_metatype *out_taskLstOut)
{
  modelica_integer _compIdxOut;
  modelica_metatype _taskLstOut = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compIdxOut has no default value.
  // _taskLstOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eqSysIn;
    {
      modelica_integer _compIdx;
      modelica_metatype _eqs = NULL;
      modelica_metatype _eqSysRest = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _eqLst = NULL;
      modelica_metatype _varLst = NULL;
      modelica_metatype _taskLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _compIdx has no default value.
      // _eqs has no default value.
      // _eqSysRest has no default value.
      // _vars has no default value.
      // _comps has no default value.
      // _eqLst has no default value.
      // _varLst has no default value.
      // _taskLst has no default value.
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          
          _vars = tmpMeta8;
          _eqs = tmpMeta9;
          _comps = tmpMeta11;
          _eqSysRest = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _eqLst = omc_BackendEquation_equationList(threadData, _eqs);

          _varLst = omc_BackendVariable_varList(threadData, _vars);

          _compIdx = omc_HpcOmEqSystems_pts__traverseCompsAndParallelize(threadData, _comps, _eqLst, _varLst, _sccSimEqMapping, _simVarMapping, _compIdxIn, _taskLstIn, _isInitial ,&_taskLst);
          tmp1_c0 = omc_HpcOmEqSystems_pts__traverseEqSystems(threadData, _eqSysRest, _sccSimEqMapping, _simVarMapping, _compIdx, _taskLst, _isInitial, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1_c0 = _compIdxIn;
          tmpMeta[0+1] = _taskLstIn;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT19),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _compIdxOut = tmp1_c0;
  _taskLstOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_taskLstOut) { *out_taskLstOut = _taskLstOut; }
  return _compIdxOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_pts__traverseEqSystems(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_metatype _compIdxIn, modelica_metatype _taskLstIn, modelica_metatype _isInitial, modelica_metatype *out_taskLstOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _compIdxOut;
  modelica_metatype out_compIdxOut;
  tmp1 = mmc_unbox_integer(_compIdxIn);
  tmp2 = mmc_unbox_integer(_isInitial);
  _compIdxOut = omc_HpcOmEqSystems_pts__traverseEqSystems(threadData, _eqSysIn, _sccSimEqMapping, _simVarMapping, tmp1, _taskLstIn, tmp2, out_taskLstOut);
  out_compIdxOut = mmc_mk_icon(_compIdxOut);
  /* skip box _taskLstOut; list<HpcOmSimCode.Task> */
  return out_compIdxOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmEqSystems_getScheduledTaskCompIdx(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _compIdx;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compIdx has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _compIdx = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _compIdx;
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
  _compIdx = tmp1;
  _return: OMC_LABEL_UNUSED
  return _compIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getScheduledTaskCompIdx(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _compIdx;
  modelica_metatype out_compIdx;
  _compIdx = omc_HpcOmEqSystems_getScheduledTaskCompIdx(threadData, _taskIn);
  out_compIdx = mmc_mk_icon(_compIdx);
  return out_compIdx;
}

DLLDirection
modelica_metatype omc_HpcOmEqSystems_parallelizeTornSystems(threadData_t *threadData, modelica_metatype _graphIn, modelica_metatype _metaIn, modelica_metatype _sccSimEqMapping, modelica_metatype _simVarMapping, modelica_metatype _inDAE, modelica_metatype *out_daeNodeIdcs)
{
  modelica_metatype _scheduledTasks = NULL;
  modelica_metatype _daeNodeIdcs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduledTasks has no default value.
  // _daeNodeIdcs has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _eqSysts = NULL;
      modelica_metatype _taskLst = NULL;
      modelica_metatype _daeNodes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqSysts has no default value.
      // _taskLst has no default value.
      // _daeNodes has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = 0 /* false */;
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = _inDAE;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _eqSysts = tmpMeta8;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmEqSystems_pts__traverseEqSystems(threadData, _eqSysts, _sccSimEqMapping, _simVarMapping, ((modelica_integer) 1), tmpMeta9, omc_BackendDAEUtil_isInitializationDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inDAE), 3)))) ,&_taskLst);

          _daeNodes = omc_List_map(threadData, _taskLst, boxvar_HpcOmEqSystems_getScheduledTaskCompIdx);
          tmpMeta[0+0] = _taskLst;
          tmpMeta[0+1] = _daeNodes;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = tmpMeta11;
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
  _scheduledTasks = tmpMeta[0+0];
  _daeNodeIdcs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_daeNodeIdcs) { *out_daeNodeIdcs = _daeNodeIdcs; }
  return _scheduledTasks;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_dumpEqArrLst1(threadData_t *threadData, modelica_integer _lstIdx, modelica_metatype _inLstLst, modelica_string _heading)
{
  modelica_string _headingOut = NULL;
  modelica_string _str1 = NULL;
  modelica_metatype _inLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _headingOut has no default value.
  // _str1 has no default value.
  // _inLst has no default value.
  _inLst = listGet(_inLstLst, _lstIdx);

  tmpMeta1 = stringAppend(_heading,_OMC_LIT20);
  tmpMeta2 = stringAppend(tmpMeta1,intString(((modelica_integer) -1) + _lstIdx));
  _str1 = tmpMeta2;

  omc_BackendDump_dumpEquationList(threadData, _inLst, _str1);

  _headingOut = _heading;
  _return: OMC_LABEL_UNUSED
  return _headingOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_dumpEqArrLst1(threadData_t *threadData, modelica_metatype _lstIdx, modelica_metatype _inLstLst, modelica_metatype _heading)
{
  modelica_integer tmp1;
  modelica_string _headingOut = NULL;
  tmp1 = mmc_unbox_integer(_lstIdx);
  _headingOut = omc_HpcOmEqSystems_dumpEqArrLst1(threadData, tmp1, _inLstLst, _heading);
  /* skip box _headingOut; String */
  return _headingOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpEqArrLst(threadData_t *threadData, modelica_metatype _inArrLst, modelica_string _heading)
{
  modelica_string _str = NULL;
  modelica_metatype _inLstLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _inLstLst has no default value.
  _inLstLst = arrayList(_inArrLst);

  tmpMeta1 = stringAppend(_OMC_LIT21,_heading);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT22);
  fputs(MMC_STRINGDATA(tmpMeta2),stdout);

  _str = omc_List_fold1(threadData, omc_List_intRange(threadData, arrayLength(_inArrLst)), boxvar_HpcOmEqSystems_dumpEqArrLst1, _inLstLst, _heading);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_dumpVarArrLst1(threadData_t *threadData, modelica_integer _lstIdx, modelica_metatype _inLstLst, modelica_string _heading)
{
  modelica_string _headingOut = NULL;
  modelica_string _str1 = NULL;
  modelica_metatype _inLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _headingOut has no default value.
  // _str1 has no default value.
  // _inLst has no default value.
  _inLst = listGet(_inLstLst, _lstIdx);

  tmpMeta1 = stringAppend(_heading,_OMC_LIT20);
  tmpMeta2 = stringAppend(tmpMeta1,intString(((modelica_integer) -1) + _lstIdx));
  _str1 = tmpMeta2;

  omc_BackendDump_dumpVarList(threadData, _inLst, _str1);

  _headingOut = _heading;
  _return: OMC_LABEL_UNUSED
  return _headingOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_dumpVarArrLst1(threadData_t *threadData, modelica_metatype _lstIdx, modelica_metatype _inLstLst, modelica_metatype _heading)
{
  modelica_integer tmp1;
  modelica_string _headingOut = NULL;
  tmp1 = mmc_unbox_integer(_lstIdx);
  _headingOut = omc_HpcOmEqSystems_dumpVarArrLst1(threadData, tmp1, _inLstLst, _heading);
  /* skip box _headingOut; String */
  return _headingOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpVarArrLst(threadData_t *threadData, modelica_metatype _inArrLst, modelica_string _heading)
{
  modelica_string _str = NULL;
  modelica_metatype _inLstLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _inLstLst has no default value.
  _inLstLst = arrayList(_inArrLst);

  tmpMeta1 = stringAppend(_OMC_LIT21,_heading);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT23);
  fputs(MMC_STRINGDATA(tmpMeta2),stdout);

  _str = omc_List_fold1(threadData, omc_List_intRange(threadData, arrayLength(_inArrLst)), boxvar_HpcOmEqSystems_dumpVarArrLst1, _inLstLst, _heading);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpMatrix(threadData_t *threadData, modelica_metatype _matrix)
{
  modelica_metatype _sLst = NULL;
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sLst has no default value.
  // _s has no default value.
  _sLst = omc_List_mapArray(threadData, _matrix, boxvar_ExpressionDump_printExpListStr);

  tmpMeta1 = stringAppend(_OMC_LIT24,stringDelimitList(_sLst, _OMC_LIT25));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT26);
  _s = tmpMeta2;

  fputs(MMC_STRINGDATA(_s),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmEqSystems_EqSysRowString(threadData_t *threadData, modelica_metatype _Arow, modelica_metatype _x, modelica_metatype _b)
{
  modelica_string _s = NULL;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_string _s3 = NULL;
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
  // _s has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  // _s3 has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT24,stringDelimitList(omc_List_map(threadData, _Arow, boxvar_ExpressionBasics_printExpStr), _OMC_LIT27));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  _s1 = tmpMeta2;

  tmpMeta3 = stringAppend(_OMC_LIT24,omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_BackendVariable_varCref(threadData, _x)));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT29);
  _s2 = tmpMeta4;

  tmpMeta5 = stringAppend(_OMC_LIT30,omc_ExpressionBasics_printExpStr(threadData, _b));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT31);
  _s3 = tmpMeta6;

  tmpMeta7 = stringAppend(_s1,_OMC_LIT32);
  tmpMeta8 = stringAppend(tmpMeta7,_s2);
  tmpMeta9 = stringAppend(tmpMeta8,_s3);
  _s = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_dumpEqSys(threadData_t *threadData, modelica_metatype _matrix)
{
  modelica_integer _dim;
  modelica_metatype _sLst = NULL;
  modelica_metatype _matrixA = NULL;
  modelica_metatype _vectorB = NULL;
  modelica_metatype _vectorX = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta16;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dim has no default value.
  // _sLst has no default value.
  // _matrixA has no default value.
  // _vectorB has no default value.
  // _vectorX has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _matrix;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _dim = tmp3  /* pattern as ty=Integer */;
  _matrixA = tmpMeta4;
  _vectorB = tmpMeta5;
  _vectorX = tmpMeta6;

  tmpMeta7 = stringAppend(_OMC_LIT33,intString(_dim));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT34);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);

  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp10;
    modelica_metatype tmpMeta11;
    modelica_string __omcQ_24tmpVar0;
    modelica_integer tmp12;
    modelica_metatype _Arow_loopVar = 0;
    modelica_integer tmp13;
    modelica_metatype _Arow;
    modelica_metatype _x_loopVar = 0;
    modelica_integer tmp14;
    modelica_metatype _x;
    modelica_metatype _b_loopVar = 0;
    modelica_integer tmp15;
    modelica_metatype _b;
    _Arow_loopVar = _matrixA;
    tmp13 = 1;
    _x_loopVar = _vectorX;
    tmp14 = 1;
    _b_loopVar = _vectorB;
    tmp15 = 1;
    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta11; /* defaultValue */
    tmp10 = &__omcQ_24tmpVar1;
    while(1) {
      tmp12 = 3;
      if (tmp13 <= arrayLength(_Arow_loopVar)) {
        _Arow = arrayGet(_Arow_loopVar, tmp13++);
        tmp12--;
      }if (tmp14 <= arrayLength(_x_loopVar)) {
        _x = arrayGet(_x_loopVar, tmp14++);
        tmp12--;
      }if (tmp15 <= arrayLength(_b_loopVar)) {
        _b = arrayGet(_b_loopVar, tmp15++);
        tmp12--;
      }
      if (tmp12 == 0) {
        __omcQ_24tmpVar0 = omc_HpcOmEqSystems_EqSysRowString(threadData, _Arow, _x, _b);
        *tmp10 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp10 = &MMC_CDR(*tmp10);
      } else if (tmp12 == 3) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp10 = mmc_mk_nil();
    tmpMeta9 = __omcQ_24tmpVar1;
  }
  _sLst = tmpMeta9;

  tmpMeta16 = stringAppend(stringDelimitList(_sLst, _OMC_LIT35),_OMC_LIT35);
  fputs(MMC_STRINGDATA(tmpMeta16),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_transposeMatrix1(threadData_t *threadData, modelica_integer _idx, modelica_metatype _matrixOrig, modelica_metatype _matrixIn)
{
  modelica_metatype _matrixOut = NULL;
  modelica_metatype _row = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matrixOut has no default value.
  // _row has no default value.
  _row = arrayGet(_matrixOrig, _idx);

  _matrixOut = omc_List_threadFold(threadData, omc_List_intRange(threadData, arrayLength(_matrixOrig)), _row, boxvar_Array_consToElement, _matrixIn);
  _return: OMC_LABEL_UNUSED
  return _matrixOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_transposeMatrix1(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _matrixOrig, modelica_metatype _matrixIn)
{
  modelica_integer tmp1;
  modelica_metatype _matrixOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _matrixOut = omc_HpcOmEqSystems_transposeMatrix1(threadData, tmp1, _matrixOrig, _matrixIn);
  /* skip box _matrixOut; array<list<DAE.Exp>> */
  return _matrixOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_transposeMatrix(threadData_t *threadData, modelica_metatype _matrixIn)
{
  modelica_metatype _matrixOut = NULL;
  modelica_integer _size;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matrixOut has no default value.
  // _size has no default value.
  _size = arrayLength(_matrixIn);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matrixOut = arrayCreate(_size, tmpMeta1);

  _matrixOut = omc_List_fold1(threadData, listReverse(omc_List_intRange(threadData, _size)), boxvar_HpcOmEqSystems_transposeMatrix1, _matrixIn, _matrixOut);
  _return: OMC_LABEL_UNUSED
  return _matrixOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getMatrixFromJac(threadData_t *threadData, modelica_metatype _jacValuesIn, modelica_metatype _vars)
{
  modelica_metatype _matrixOut = NULL;
  modelica_metatype _AVars = NULL;
  modelica_metatype _bVars = NULL;
  modelica_metatype _matrixA = NULL;
  modelica_metatype _vectorB = NULL;
  modelica_metatype _vectorX = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matrixOut has no default value.
  // _AVars has no default value.
  // _bVars has no default value.
  // _matrixA has no default value.
  // _vectorB has no default value.
  // _vectorX has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = arrayList(_jacValuesIn);
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _bVars = tmpMeta2;
  _AVars = tmpMeta3;

  _matrixA = listArray(omc_List_mapList(threadData, _AVars, boxvar_BackendVariable_varExp));

  _matrixA = omc_HpcOmEqSystems_transposeMatrix(threadData, _matrixA);

  _vectorB = listArray(omc_List_mapMap(threadData, _bVars, boxvar_BackendVariable_varExp, boxvar_Expression_negate));

  _vectorX = listArray(_vars);

  tmpMeta4 = mmc_mk_box5(3, &HpcOmEqSystems_EqSys_LINSYS__desc, mmc_mk_integer(listLength(_bVars)), _matrixA, _vectorB, _vectorX);
  _matrixOut = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _matrixOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceColumnInMatrix(threadData_t *threadData, modelica_metatype _matrixT, modelica_integer _col, modelica_metatype _vectorB)
{
  modelica_metatype _matrixOut = NULL;
  modelica_metatype _matrix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matrixOut has no default value.
  // _matrix has no default value.
  _matrix = arrayUpdate(_matrixT, _col, _vectorB);

  _matrixOut = omc_HpcOmEqSystems_transposeMatrix(threadData, _matrix);
  _return: OMC_LABEL_UNUSED
  return _matrixOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceColumnInMatrix(threadData_t *threadData, modelica_metatype _matrixT, modelica_metatype _col, modelica_metatype _vectorB)
{
  modelica_integer tmp1;
  modelica_metatype _matrixOut = NULL;
  tmp1 = mmc_unbox_integer(_col);
  _matrixOut = omc_HpcOmEqSystems_replaceColumnInMatrix(threadData, _matrixT, tmp1, _vectorB);
  /* skip box _matrixOut; array<list<DAE.Exp>> */
  return _matrixOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_determinant(threadData_t *threadData, modelica_metatype _matrix)
{
  modelica_metatype _detOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _detOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _a11 = NULL;
      modelica_metatype _a12 = NULL;
      modelica_metatype _a21 = NULL;
      modelica_metatype _a22 = NULL;
      modelica_metatype _a13 = NULL;
      modelica_metatype _a23 = NULL;
      modelica_metatype _a33 = NULL;
      modelica_metatype _a31 = NULL;
      modelica_metatype _a32 = NULL;
      modelica_metatype _s1 = NULL;
      modelica_metatype _s2 = NULL;
      modelica_metatype _s3 = NULL;
      modelica_metatype _s4 = NULL;
      modelica_metatype _s5 = NULL;
      modelica_metatype _s6 = NULL;
      modelica_metatype _det = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _a11 has no default value.
      // _a12 has no default value.
      // _a21 has no default value.
      // _a22 has no default value.
      // _a13 has no default value.
      // _a23 has no default value.
      // _a33 has no default value.
      // _a31 has no default value.
      // _a32 has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _s3 has no default value.
      // _s4 has no default value.
      // _s5 has no default value.
      // _s6 has no default value.
      // _det has no default value.
      // _ty has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (arrayLength(_matrix) == ((modelica_integer) 2));
          if (1 /* true */ != tmp6) goto goto_2;

          _a11 = listGet(arrayGet(_matrix, ((modelica_integer) 1)), ((modelica_integer) 1));

          _a12 = listGet(arrayGet(_matrix, ((modelica_integer) 1)), ((modelica_integer) 2));

          _a21 = listGet(arrayGet(_matrix, ((modelica_integer) 2)), ((modelica_integer) 1));

          _a22 = listGet(arrayGet(_matrix, ((modelica_integer) 2)), ((modelica_integer) 2));

          _ty = omc_Expression_typeof(threadData, _a11);

          tmpMeta7 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta8 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a11, tmpMeta7, _a22);
          tmpMeta9 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta10 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta11 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a12, tmpMeta10, _a21);
          tmpMeta12 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta8, tmpMeta9, tmpMeta11);
          _det = tmpMeta12;
          tmpMeta1 = omc_ExpressionSimplify_simplify(threadData, _det, NULL);
          goto tmp3_done;
        }
        case 1: {
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp13 = (arrayLength(_matrix) == ((modelica_integer) 3));
          if (1 /* true */ != tmp13) goto goto_2;

          _a11 = listGet(arrayGet(_matrix, ((modelica_integer) 1)), ((modelica_integer) 1));

          _a12 = listGet(arrayGet(_matrix, ((modelica_integer) 1)), ((modelica_integer) 2));

          _a13 = listGet(arrayGet(_matrix, ((modelica_integer) 1)), ((modelica_integer) 3));

          _a21 = listGet(arrayGet(_matrix, ((modelica_integer) 2)), ((modelica_integer) 1));

          _a22 = listGet(arrayGet(_matrix, ((modelica_integer) 2)), ((modelica_integer) 2));

          _a23 = listGet(arrayGet(_matrix, ((modelica_integer) 2)), ((modelica_integer) 3));

          _a31 = listGet(arrayGet(_matrix, ((modelica_integer) 3)), ((modelica_integer) 1));

          _a32 = listGet(arrayGet(_matrix, ((modelica_integer) 3)), ((modelica_integer) 2));

          _a33 = listGet(arrayGet(_matrix, ((modelica_integer) 3)), ((modelica_integer) 3));

          _ty = omc_Expression_typeof(threadData, _a11);

          tmpMeta14 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta15 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a11, tmpMeta14, _a22);
          tmpMeta16 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta17 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta15, tmpMeta16, _a33);
          _s1 = tmpMeta17;

          tmpMeta18 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta19 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a12, tmpMeta18, _a23);
          tmpMeta20 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta21 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta19, tmpMeta20, _a31);
          _s2 = tmpMeta21;

          tmpMeta22 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta23 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a13, tmpMeta22, _a21);
          tmpMeta24 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta25 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta23, tmpMeta24, _a32);
          _s3 = tmpMeta25;

          tmpMeta26 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta27 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a13, tmpMeta26, _a22);
          tmpMeta28 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta29 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta27, tmpMeta28, _a31);
          _s4 = tmpMeta29;

          tmpMeta30 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta31 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a23, tmpMeta30, _a32);
          tmpMeta32 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta33 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta31, tmpMeta32, _a11);
          _s5 = tmpMeta33;

          tmpMeta34 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta35 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a33, tmpMeta34, _a12);
          tmpMeta36 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta37 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta35, tmpMeta36, _a21);
          _s6 = tmpMeta37;

          tmpMeta38 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta39 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _s1, tmpMeta38, _s2);
          tmpMeta40 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta41 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta39, tmpMeta40, _s3);
          tmpMeta42 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta43 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta44 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _s4, tmpMeta43, _s5);
          tmpMeta45 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta46 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta44, tmpMeta45, _s6);
          tmpMeta47 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta41, tmpMeta42, tmpMeta46);
          _det = tmpMeta47;
          tmpMeta1 = omc_ExpressionSimplify_simplify(threadData, _det, NULL);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT36),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _detOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _detOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_CramerRule1(threadData_t *threadData, modelica_integer _idx, modelica_metatype _syst, modelica_metatype _matrixAT)
{
  modelica_metatype _det = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _det has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _syst;
    {
      modelica_metatype _matrixA = NULL;
      modelica_metatype _vectorB = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _matrixA has no default value.
      // _vectorB has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _vectorB = tmpMeta6;
          /* Pattern matching succeeded */
          _matrixA = arrayCopy(_matrixAT);

          _matrixA = omc_HpcOmEqSystems_replaceColumnInMatrix(threadData, _matrixA, _idx, arrayList(_vectorB));
          tmpMeta1 = omc_HpcOmEqSystems_determinant(threadData, _matrixA);
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
  _det = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _det;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_CramerRule1(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _syst, modelica_metatype _matrixAT)
{
  modelica_integer tmp1;
  modelica_metatype _det = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _det = omc_HpcOmEqSystems_CramerRule1(threadData, tmp1, _syst, _matrixAT);
  /* skip box _det; DAE.Exp */
  return _det;
}

static modelica_metatype closure0_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}static modelica_metatype closure1_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_CramerRule(threadData_t *threadData, modelica_metatype _system, modelica_metatype *out_otherEqsOut, modelica_metatype *out_otherVarsOut)
{
  modelica_metatype _newResEqs = NULL;
  modelica_metatype _otherEqsOut = NULL;
  modelica_metatype _otherVarsOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newResEqs has no default value.
  // _otherEqsOut has no default value.
  // _otherVarsOut has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _system;
    {
      modelica_integer _dim;
      modelica_metatype _matrixA = NULL;
      modelica_metatype _matrixAT = NULL;
      modelica_metatype _vectorX = NULL;
      modelica_metatype _detA = NULL;
      modelica_metatype _detLst = NULL;
      modelica_metatype _varExp = NULL;
      modelica_metatype _eqLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dim has no default value.
      // _matrixA has no default value.
      // _matrixAT has no default value.
      // _vectorX has no default value.
      // _detA has no default value.
      // _detLst has no default value.
      // _varExp has no default value.
      // _eqLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _dim = tmp7  /* pattern as ty=Integer */;
          _matrixA = tmpMeta8;
          _vectorX = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_dim == ((modelica_integer) 2));
          if (1 /* true */ != tmp10) goto goto_2;

          _matrixAT = omc_HpcOmEqSystems_transposeMatrix(threadData, _matrixA);

          _detA = omc_HpcOmEqSystems_determinant(threadData, _matrixA);

          _detLst = omc_List_map2(threadData, omc_List_intRange(threadData, _dim), boxvar_HpcOmEqSystems_CramerRule1, _system, _matrixAT);

          _varExp = omc_List_mapArray(threadData, _vectorX, boxvar_BackendVariable_varExp);

          tmpMeta11 = mmc_mk_box1(0, _OMC_LIT38);
          _detLst = omc_List_map1(threadData, _detLst, (modelica_fnptr) mmc_mk_box2(0,closure0_Expression_makeBinaryExp,tmpMeta11), _detA);

          _detLst = omc_List_map__2(threadData, _detLst, boxvar_ExpressionSimplify_simplify, NULL);

          _eqLst = omc_List_threadMap2(threadData, _varExp, _detLst, boxvar_BackendEquation_generateEquation, _OMC_LIT43, _OMC_LIT46);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _eqLst;
          tmpMeta[0+1] = tmpMeta12;
          tmpMeta[0+2] = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _dim = tmp15  /* pattern as ty=Integer */;
          _matrixA = tmpMeta16;
          _vectorX = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = (_dim == ((modelica_integer) 3));
          if (1 /* true */ != tmp18) goto goto_2;

          _matrixAT = omc_HpcOmEqSystems_transposeMatrix(threadData, _matrixA);

          _detA = omc_HpcOmEqSystems_determinant(threadData, _matrixA);

          _detLst = omc_List_map2(threadData, omc_List_intRange(threadData, _dim), boxvar_HpcOmEqSystems_CramerRule1, _system, _matrixAT);

          _varExp = omc_List_mapArray(threadData, _vectorX, boxvar_BackendVariable_varExp);

          tmpMeta19 = mmc_mk_box1(0, _OMC_LIT38);
          _detLst = omc_List_map1(threadData, _detLst, (modelica_fnptr) mmc_mk_box2(0,closure1_Expression_makeBinaryExp,tmpMeta19), _detA);

          _detLst = omc_List_map__2(threadData, _detLst, boxvar_ExpressionSimplify_simplify, NULL);

          _eqLst = omc_List_threadMap2(threadData, _varExp, _detLst, boxvar_BackendEquation_generateEquation, _OMC_LIT43, _OMC_LIT46);
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _eqLst;
          tmpMeta[0+1] = tmpMeta20;
          tmpMeta[0+2] = tmpMeta21;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_boolean tmp24;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          
          _dim = tmp23  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp24 = (_dim > ((modelica_integer) 3));
          if (1 /* true */ != tmp24) goto goto_2;
          tmpMeta[0+0] = omc_HpcOmEqSystems_chiosCondensation(threadData, _system, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          
          /* Pattern matching succeeded */
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = tmpMeta26;
          tmpMeta[0+2] = tmpMeta27;
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
  _newResEqs = tmpMeta[0+0];
  _otherEqsOut = tmpMeta[0+1];
  _otherVarsOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_otherEqsOut) { *out_otherEqsOut = _otherEqsOut; }
  if (out_otherVarsOut) { *out_otherVarsOut = _otherVarsOut; }
  return _newResEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_applyCramerRule(threadData_t *threadData, modelica_metatype _jacValuesIn, modelica_metatype _varsIn, modelica_metatype *out_tvarsOut, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut)
{
  modelica_metatype _resEqsOut = NULL;
  modelica_metatype _tvarsOut = NULL;
  modelica_metatype _addEqsOut = NULL;
  modelica_metatype _addVarsOut = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _resEqsOut has no default value.
  // _tvarsOut has no default value.
  // _addEqsOut has no default value.
  // _addVarsOut has no default value.
  
  
  
  
  { /* match expression */
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _addEqs = NULL;
      modelica_metatype _resEqs = NULL;
      modelica_metatype _addVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _addEqs has no default value.
      // _resEqs has no default value.
      // _addVars has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _syst = omc_HpcOmEqSystems_getMatrixFromJac(threadData, _jacValuesIn, _varsIn);

          _resEqs = omc_HpcOmEqSystems_CramerRule(threadData, _syst ,&_addEqs ,&_addVars);
          tmpMeta[0+0] = _resEqs;
          tmpMeta[0+1] = _varsIn;
          tmpMeta[0+2] = _addEqs;
          tmpMeta[0+3] = _addVars;
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
  _resEqsOut = tmpMeta[0+0];
  _tvarsOut = tmpMeta[0+1];
  _addEqsOut = tmpMeta[0+2];
  _addVarsOut = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_tvarsOut) { *out_tvarsOut = _tvarsOut; }
  if (out_addEqsOut) { *out_addEqsOut = _addEqsOut; }
  if (out_addVarsOut) { *out_addVarsOut = _addVarsOut; }
  return _resEqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getNewChioEntry(threadData_t *threadData, modelica_integer _col, modelica_integer _row, modelica_metatype _syst, modelica_integer _iter, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_integer _dim;
  modelica_metatype _a11 = NULL;
  modelica_metatype _ar1 = NULL;
  modelica_metatype _a1c = NULL;
  modelica_metatype _arc = NULL;
  modelica_metatype _br = NULL;
  modelica_metatype _b1 = NULL;
  modelica_metatype _detExp = NULL;
  modelica_metatype _detVarExp = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _detCR = NULL;
  modelica_metatype _detAeq = NULL;
  modelica_metatype _detAieq = NULL;
  modelica_metatype _detAVar = NULL;
  modelica_metatype _detAiVar = NULL;
  modelica_string _detVarName = NULL;
  modelica_metatype _matrixA = NULL;
  modelica_metatype _matrixB = NULL;
  modelica_metatype _vectorB = NULL;
  modelica_metatype _vecAi = NULL;
  modelica_metatype _vectorX = NULL;
  modelica_metatype _addEqs = NULL;
  modelica_metatype _addVars = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  // _dim has no default value.
  // _a11 has no default value.
  // _ar1 has no default value.
  // _a1c has no default value.
  // _arc has no default value.
  // _br has no default value.
  // _b1 has no default value.
  // _detExp has no default value.
  // _detVarExp has no default value.
  // _ty has no default value.
  // _detCR has no default value.
  // _detAeq has no default value.
  // _detAieq has no default value.
  // _detAVar has no default value.
  // _detAiVar has no default value.
  // _detVarName has no default value.
  // _matrixA has no default value.
  // _matrixB has no default value.
  // _vectorB has no default value.
  // _vecAi has no default value.
  // _vectorX has no default value.
  // _addEqs has no default value.
  // _addVars has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _syst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _dim = tmp3  /* pattern as ty=Integer */;
  _matrixA = tmpMeta4;
  _vectorB = tmpMeta5;
  _vectorX = tmpMeta6;

  /* Pattern-matching assignment */
  tmpMeta7 = _foldIn;
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  _matrixB = tmpMeta8;
  _vecAi = tmpMeta9;
  _addEqs = tmpMeta10;
  _addVars = tmpMeta11;

  _a11 = listGet(arrayGet(_matrixA, ((modelica_integer) 1)), ((modelica_integer) 1));

  _ar1 = listGet(arrayGet(_matrixA, _row), ((modelica_integer) 1));

  _a1c = listGet(arrayGet(_matrixA, ((modelica_integer) 1)), _col);

  _arc = listGet(arrayGet(_matrixA, _row), _col);

  _ty = omc_Expression_typeof(threadData, _a11);

  tmpMeta12 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
  tmpMeta13 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a11, tmpMeta12, _arc);
  tmpMeta14 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
  tmpMeta15 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
  tmpMeta16 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _ar1, tmpMeta15, _a1c);
  tmpMeta17 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta13, tmpMeta14, tmpMeta16);
  _detExp = tmpMeta17;

  _detExp = omc_ExpressionSimplify_simplify(threadData, _detExp, NULL);

  tmpMeta18 = stringAppend(_OMC_LIT47,intString(_iter));
  tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT48);
  tmpMeta20 = stringAppend(tmpMeta19,intString(((modelica_integer) -1) + _row));
  tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT20);
  tmpMeta22 = stringAppend(tmpMeta21,intString(((modelica_integer) -1) + _col));
  _detVarName = tmpMeta22;

  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
  _detCR = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _detVarName, _ty, tmpMeta23);

  tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta25 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _detCR, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta24, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _detAVar = tmpMeta25;

  _detVarExp = omc_Expression_crefExp(threadData, _detCR);

  tmpMeta26 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _detVarExp, _detExp, _OMC_LIT43, _OMC_LIT55);
  _detAeq = tmpMeta26;

  _matrixB = omc_Array_consToElement(threadData, ((modelica_integer) -1) + _row, _detVarExp, _matrixB);

  tmpMeta27 = mmc_mk_cons(_detAeq, _addEqs);
  _addEqs = tmpMeta27;

  tmpMeta28 = mmc_mk_cons(_detAVar, _addVars);
  _addVars = tmpMeta28;

  if((_col == _dim))
  {
    _b1 = arrayGet(_vectorB, ((modelica_integer) 1));

    _br = arrayGet(_vectorB, _row);

    tmpMeta29 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
    tmpMeta30 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _a11, tmpMeta29, _br);
    tmpMeta31 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
    tmpMeta32 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
    tmpMeta33 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _ar1, tmpMeta32, _b1);
    tmpMeta34 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, tmpMeta30, tmpMeta31, tmpMeta33);
    _detExp = tmpMeta34;

    _detExp = omc_ExpressionSimplify_simplify(threadData, _detExp, NULL);

    tmpMeta35 = stringAppend(_OMC_LIT56,intString(_iter));
    tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT48);
    tmpMeta37 = stringAppend(tmpMeta36,intString(((modelica_integer) -1) + _row));
    tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT20);
    tmpMeta39 = stringAppend(tmpMeta38,intString(((modelica_integer) -1) + _col));
    _detVarName = tmpMeta39;

    tmpMeta40 = MMC_REFSTRUCTLIT(mmc_nil);
    _detCR = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _detVarName, _ty, tmpMeta40);

    tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
    tmpMeta42 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _detCR, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta41, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
    _detAiVar = tmpMeta42;

    _detVarExp = omc_Expression_crefExp(threadData, _detCR);

    tmpMeta43 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _detVarExp, _detExp, _OMC_LIT43, _OMC_LIT55);
    _detAieq = tmpMeta43;

    arrayUpdate(_vecAi, ((modelica_integer) -1) + _row, _detVarExp);

    tmpMeta44 = mmc_mk_cons(_detAieq, _addEqs);
    _addEqs = tmpMeta44;

    tmpMeta45 = mmc_mk_cons(_detAiVar, _addVars);
    _addVars = tmpMeta45;
  }

  tmpMeta46 = mmc_mk_box4(0, _matrixB, _vecAi, _addEqs, _addVars);
  _foldOut = tmpMeta46;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getNewChioEntry(threadData_t *threadData, modelica_metatype _col, modelica_metatype _row, modelica_metatype _syst, modelica_metatype _iter, modelica_metatype _foldIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _foldOut = NULL;
  tmp1 = mmc_unbox_integer(_col);
  tmp2 = mmc_unbox_integer(_row);
  tmp3 = mmc_unbox_integer(_iter);
  _foldOut = omc_HpcOmEqSystems_getNewChioEntry(threadData, tmp1, tmp2, _syst, tmp3, _foldIn);
  /* skip box _foldOut; tuple<array<list<DAE.Exp>>, array<DAE.Exp>, list<BackendDAE.Equation>, list<BackendDAE.Var>> */
  return _foldOut;
}

static modelica_metatype closure2_HpcOmEqSystems_getNewChioEntry(threadData_t *thData, modelica_metatype closure, modelica_metatype col, modelica_metatype foldIn)
{
  modelica_metatype row = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype syst = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iter = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmEqSystems_getNewChioEntry(thData, col, row, syst, iter, foldIn);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getNewChioRow(threadData_t *threadData, modelica_integer _row, modelica_metatype _systemIn, modelica_integer _iterIdx, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_integer _dim;
  modelica_metatype _columns = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  // _dim has no default value.
  // _columns has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _systemIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _dim = tmp3  /* pattern as ty=Integer */;

  _columns = listReverse(omc_List_intRange2(threadData, ((modelica_integer) 2), _dim));

  tmpMeta4 = mmc_mk_box3(0, mmc_mk_integer(_row), _systemIn, mmc_mk_integer(_iterIdx));
  _foldOut = omc_List_fold(threadData, _columns, (modelica_fnptr) mmc_mk_box2(0,closure2_HpcOmEqSystems_getNewChioEntry,tmpMeta4), _foldIn);
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getNewChioRow(threadData_t *threadData, modelica_metatype _row, modelica_metatype _systemIn, modelica_metatype _iterIdx, modelica_metatype _foldIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _foldOut = NULL;
  tmp1 = mmc_unbox_integer(_row);
  tmp2 = mmc_unbox_integer(_iterIdx);
  _foldOut = omc_HpcOmEqSystems_getNewChioRow(threadData, tmp1, _systemIn, tmp2, _foldIn);
  /* skip box _foldOut; tuple<array<list<DAE.Exp>>, array<DAE.Exp>, list<BackendDAE.Equation>, list<BackendDAE.Var>> */
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_makeVarOfIdent(threadData_t *threadData, modelica_string _ident, modelica_metatype _ty)
{
  modelica_metatype _var = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _var has no default value.
  // _cr has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _ident, _ty, tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cr, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta2, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _var = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _var;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_makeDetExp(threadData_t *threadData, modelica_integer _iterIdx, modelica_string _ident, modelica_integer _row, modelica_integer _col, modelica_metatype _ty)
{
  modelica_metatype _detExp = NULL;
  modelica_metatype _cr = NULL;
  modelica_string _name = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _detExp has no default value.
  // _cr has no default value.
  // _name has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT57,_ident);
  tmpMeta2 = stringAppend(tmpMeta1,intString(_iterIdx));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT48);
  tmpMeta4 = stringAppend(tmpMeta3,intString(_row));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT20);
  tmpMeta6 = stringAppend(tmpMeta5,intString(_col));
  _name = tmpMeta6;

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _cr = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _name, _ty, tmpMeta7);

  _detExp = omc_Expression_makeCrefExp(threadData, _cr, _ty);
  _return: OMC_LABEL_UNUSED
  return _detExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_makeDetExp(threadData_t *threadData, modelica_metatype _iterIdx, modelica_metatype _ident, modelica_metatype _row, modelica_metatype _col, modelica_metatype _ty)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _detExp = NULL;
  tmp1 = mmc_unbox_integer(_iterIdx);
  tmp2 = mmc_unbox_integer(_row);
  tmp3 = mmc_unbox_integer(_col);
  _detExp = omc_HpcOmEqSystems_makeDetExp(threadData, tmp1, _ident, tmp2, tmp3, _ty);
  /* skip box _detExp; DAE.Exp */
  return _detExp;
}

static modelica_metatype closure3_HpcOmEqSystems_makeDetExp(threadData_t *thData, modelica_metatype closure, modelica_metatype col)
{
  modelica_metatype iterIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_string ident = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype row = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype ty = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  return boxptr_HpcOmEqSystems_makeDetExp(thData, iterIdx, ident, row, col, ty);
}static modelica_metatype closure4_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}static modelica_metatype closure5_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}static modelica_metatype closure6_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}static modelica_metatype closure7_Expression_makeBinaryExp(threadData_t *thData, modelica_metatype closure, modelica_metatype inLhs, modelica_metatype inRhs)
{
  modelica_metatype inOp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_Expression_makeBinaryExp(thData, inLhs, inOp, inRhs);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_generateCramerEqs(threadData_t *threadData, modelica_metatype _varIdcs, modelica_integer _dim, modelica_metatype _vectorX, modelica_metatype _vectorB, modelica_metatype _matrixA, modelica_metatype _eqsIn)
{
  modelica_metatype _eqsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _varIdcs;
    {
      modelica_integer _varIdx;
      modelica_metatype _rest = NULL;
      modelica_metatype _rangeAi = NULL;
      modelica_metatype _rangeX = NULL;
      modelica_metatype _detAexp = NULL;
      modelica_metatype _detAiexp = NULL;
      modelica_metatype _xExp = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _detAiExpLst = NULL;
      modelica_metatype _xLst = NULL;
      modelica_metatype _ty = NULL;
      modelica_metatype _xEq = NULL;
      modelica_metatype _xVar = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varIdx has no default value.
      // _rest has no default value.
      // _rangeAi has no default value.
      // _rangeX has no default value.
      // _detAexp has no default value.
      // _detAiexp has no default value.
      // _xExp has no default value.
      // _rhs has no default value.
      // _detAiExpLst has no default value.
      // _xLst has no default value.
      // _ty has no default value.
      // _xEq has no default value.
      // _xVar has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _eqsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _varIdx = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_varIdx != ((modelica_integer) 1));
          if (1 /* true */ != tmp9) goto goto_2;

          _xVar = arrayGet(_vectorX, _varIdx);

          _xExp = omc_BackendVariable_varExp(threadData, _xVar);

          _ty = omc_Expression_typeof(threadData, _xExp);

          _detAexp = omc_HpcOmEqSystems_makeDetExp(threadData, ((modelica_integer) -1) + _varIdx, _OMC_LIT58, ((modelica_integer) 1), ((modelica_integer) 1), _ty);

          if((_varIdx != _dim))
          {
            _rangeAi = omc_List_intRange2(threadData, ((modelica_integer) 2), ((modelica_integer) 1) + _dim - _varIdx);

            _rangeX = omc_List_intRange2(threadData, ((modelica_integer) 1) + _varIdx, _dim);
          }
          else
          {
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            _rangeAi = tmpMeta10;

            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            _rangeX = tmpMeta11;
          }

          _detAiexp = omc_HpcOmEqSystems_makeDetExp(threadData, ((modelica_integer) -1) + _varIdx, _OMC_LIT59, ((modelica_integer) 1), ((modelica_integer) 1) + _dim - _varIdx, _ty);

          tmpMeta12 = mmc_mk_box4(0, mmc_mk_integer(((modelica_integer) -1) + _varIdx), _OMC_LIT58, mmc_mk_integer(((modelica_integer) 1)), _ty);
          _detAiExpLst = omc_List_map(threadData, _rangeAi, (modelica_fnptr) mmc_mk_box2(0,closure3_HpcOmEqSystems_makeDetExp,tmpMeta12));

          _xLst = omc_List_map(threadData, omc_List_map1(threadData, _rangeX, boxvar_Array_getIndexFirst, _vectorX), boxvar_BackendVariable_varExp);

          tmpMeta14 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta13 = mmc_mk_box1(0, tmpMeta14);
          _detAiExpLst = omc_List_threadMap(threadData, _xLst, _detAiExpLst, (modelica_fnptr) mmc_mk_box2(0,closure4_Expression_makeBinaryExp,tmpMeta13));

          tmpMeta16 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta15 = mmc_mk_box1(0, tmpMeta16);
          _detAiexp = omc_List_foldr(threadData, _detAiExpLst, (modelica_fnptr) mmc_mk_box2(0,closure5_Expression_makeBinaryExp,tmpMeta15), _detAiexp);

          _detAiexp = omc_ExpressionSimplify_simplify(threadData, _detAiexp, NULL);

          tmpMeta17 = mmc_mk_box2(6, &DAE_Operator_DIV__desc, _ty);
          tmpMeta18 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _detAiexp, tmpMeta17, _detAexp);
          _rhs = tmpMeta18;

          tmpMeta19 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _xExp, _rhs, _OMC_LIT43, _OMC_LIT55);
          _xEq = tmpMeta19;

          tmpMeta20 = mmc_mk_cons(_xEq, MMC_REFSTRUCTLIT(mmc_nil));
          omc_BackendDump_dumpEquationList(threadData, tmpMeta20, _OMC_LIT60);
          tmpMeta21 = mmc_mk_cons(_xEq, _eqsIn);
          tmpMeta1 = omc_HpcOmEqSystems_generateCramerEqs(threadData, _rest, _dim, _vectorX, _vectorB, _matrixA, tmpMeta21);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta22 = MMC_CAR(tmp4_1);
          tmpMeta23 = MMC_CDR(tmp4_1);
          tmp24 = mmc_unbox_integer(tmpMeta22);
          if (1 != tmp24) goto tmp3_end;
          _rest = tmpMeta23;
          /* Pattern matching succeeded */
          _varIdx = ((modelica_integer) 1);

          _xVar = arrayGet(_vectorX, _varIdx);

          _xExp = omc_BackendVariable_varExp(threadData, _xVar);

          _ty = omc_Expression_typeof(threadData, _xExp);

          _detAexp = listGet(arrayGet(_matrixA, ((modelica_integer) 1)), ((modelica_integer) 1));

          _rangeX = omc_List_intRange2(threadData, ((modelica_integer) 2), _dim);

          _detAiexp = arrayGet(_vectorB, ((modelica_integer) 1));

          _detAiExpLst = omc_List_map1(threadData, _rangeX, boxvar_List_getIndexFirst, arrayGet(_matrixA, ((modelica_integer) 1)));

          _xLst = omc_List_map(threadData, omc_List_map1(threadData, _rangeX, boxvar_Array_getIndexFirst, _vectorX), boxvar_BackendVariable_varExp);

          tmpMeta26 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta25 = mmc_mk_box1(0, tmpMeta26);
          _detAiExpLst = omc_List_threadMap(threadData, _xLst, _detAiExpLst, (modelica_fnptr) mmc_mk_box2(0,closure6_Expression_makeBinaryExp,tmpMeta25));

          tmpMeta28 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta27 = mmc_mk_box1(0, tmpMeta28);
          _detAiexp = omc_List_foldr(threadData, _detAiExpLst, (modelica_fnptr) mmc_mk_box2(0,closure7_Expression_makeBinaryExp,tmpMeta27), _detAiexp);

          _detAiexp = omc_ExpressionSimplify_simplify(threadData, _detAiexp, NULL);

          tmpMeta29 = mmc_mk_box2(6, &DAE_Operator_DIV__desc, _ty);
          tmpMeta30 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _detAiexp, tmpMeta29, _detAexp);
          _rhs = tmpMeta30;

          tmpMeta31 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _xExp, _rhs, _OMC_LIT43, _OMC_LIT55);
          _xEq = tmpMeta31;

          tmpMeta32 = mmc_mk_cons(_xEq, MMC_REFSTRUCTLIT(mmc_nil));
          omc_BackendDump_dumpEquationList(threadData, tmpMeta32, _OMC_LIT60);
          tmpMeta33 = mmc_mk_cons(_xEq, _eqsIn);
          tmpMeta1 = omc_HpcOmEqSystems_generateCramerEqs(threadData, _rest, _dim, _vectorX, _vectorB, _matrixA, tmpMeta33);
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
  _eqsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_generateCramerEqs(threadData_t *threadData, modelica_metatype _varIdcs, modelica_metatype _dim, modelica_metatype _vectorX, modelica_metatype _vectorB, modelica_metatype _matrixA, modelica_metatype _eqsIn)
{
  modelica_integer tmp1;
  modelica_metatype _eqsOut = NULL;
  tmp1 = mmc_unbox_integer(_dim);
  _eqsOut = omc_HpcOmEqSystems_generateCramerEqs(threadData, _varIdcs, tmp1, _vectorX, _vectorB, _matrixA, _eqsIn);
  /* skip box _eqsOut; list<BackendDAE.Equation> */
  return _eqsOut;
}

static modelica_metatype closure8_HpcOmEqSystems_getNewChioRow(threadData_t *thData, modelica_metatype closure, modelica_metatype row, modelica_metatype foldIn)
{
  modelica_metatype systemIn = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iterIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmEqSystems_getNewChioRow(thData, row, systemIn, iterIdx, foldIn);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_ChiosCondensation2(threadData_t *threadData, modelica_metatype _systemIn, modelica_integer _iterIdx, modelica_metatype _addEqsIn, modelica_metatype _addVarsIn, modelica_metatype *out_addVarsOut)
{
  modelica_metatype _addEqsOut = NULL;
  modelica_metatype _addVarsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _addEqsOut has no default value.
  // _addVarsOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _systemIn;
    {
      modelica_metatype _syst = NULL;
      modelica_integer _dim;
      modelica_metatype _matrixB = NULL;
      modelica_metatype _matrixA = NULL;
      modelica_metatype _vecAi = NULL;
      modelica_metatype _vectorX = NULL;
      modelica_metatype _addEqs = NULL;
      modelica_metatype _addVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _dim has no default value.
      // _matrixB has no default value.
      // _matrixA has no default value.
      // _vecAi has no default value.
      // _vectorX has no default value.
      // _addEqs has no default value.
      // _addVars has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
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
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _dim = tmp7  /* pattern as ty=Integer */;
          _vectorX = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_dim > ((modelica_integer) 1));
          if (1 /* true */ != tmp9) goto goto_2;

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _matrixB = arrayCreate(((modelica_integer) -1) + _dim, tmpMeta10);

          _vecAi = arrayCreate(((modelica_integer) -1) + _dim, _OMC_LIT61);

          /* Pattern-matching assignment */
          tmpMeta11 = mmc_mk_box2(0, _systemIn, mmc_mk_integer(_iterIdx));
          tmpMeta12 = mmc_mk_box4(0, _matrixB, _vecAi, _addEqsIn, _addVarsIn);
          tmpMeta13 = omc_List_fold(threadData, omc_List_intRange2(threadData, ((modelica_integer) 2), _dim), (modelica_fnptr) mmc_mk_box2(0,closure8_HpcOmEqSystems_getNewChioRow,tmpMeta11), tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          _matrixB = tmpMeta14;
          _vecAi = tmpMeta15;
          _addEqs = tmpMeta16;
          _addVars = tmpMeta17;

          tmpMeta18 = stringAppend(_OMC_LIT62,intString(_dim));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT35);
          fputs(MMC_STRINGDATA(tmpMeta19),stdout);

          omc_HpcOmEqSystems_dumpMatrix(threadData, _matrixB);

          fputs(MMC_STRINGDATA(_OMC_LIT63),stdout);

          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_string __omcQ_24tmpVar2;
            modelica_integer tmp23;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp24;
            modelica_metatype _e;
            _e_loopVar = _vecAi;
            tmp24 = 1;
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar3;
            while(1) {
              tmp23 = 1;
              if (tmp24 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp24++);
                tmp23--;
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar2 = omc_ExpressionDump_dumpExpStr(threadData, _e, ((modelica_integer) 0));
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar3;
          }
          tmpMeta25 = stringAppend(stringDelimitList(tmpMeta20, _OMC_LIT35),_OMC_LIT35);
          fputs(MMC_STRINGDATA(tmpMeta25),stdout);

          omc_BackendDump_dumpEquationList(threadData, _addEqs, _OMC_LIT64);

          tmpMeta26 = mmc_mk_box5(3, &HpcOmEqSystems_EqSys_LINSYS__desc, mmc_mk_integer(((modelica_integer) -1) + _dim), _matrixB, _vecAi, _vectorX);
          _syst = tmpMeta26;
          tmpMeta[0+0] = omc_HpcOmEqSystems_ChiosCondensation2(threadData, _syst, ((modelica_integer) 1) + _iterIdx, _addEqs, _addVars, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta38;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _dim = tmp28  /* pattern as ty=Integer */;
          _matrixA = tmpMeta29;
          _vecAi = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta31 = stringAppend(_OMC_LIT65,intString(_dim));
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT35);
          fputs(MMC_STRINGDATA(tmpMeta32),stdout);

          omc_HpcOmEqSystems_dumpMatrix(threadData, _matrixA);

          fputs(MMC_STRINGDATA(_OMC_LIT66),stdout);

          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_string __omcQ_24tmpVar4;
            modelica_integer tmp36;
            modelica_metatype _e_loopVar = 0;
            modelica_integer tmp37;
            modelica_metatype _e;
            _e_loopVar = _vecAi;
            tmp37 = 1;
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar5;
            while(1) {
              tmp36 = 1;
              if (tmp37 <= arrayLength(_e_loopVar)) {
                _e = arrayGet(_e_loopVar, tmp37++);
                tmp36--;
              }
              if (tmp36 == 0) {
                __omcQ_24tmpVar4 = omc_ExpressionDump_dumpExpStr(threadData, _e, ((modelica_integer) 0));
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp36 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar5;
          }
          tmpMeta38 = stringAppend(stringDelimitList(tmpMeta33, _OMC_LIT35),_OMC_LIT35);
          fputs(MMC_STRINGDATA(tmpMeta38),stdout);

          omc_BackendDump_dumpEquationList(threadData, _addEqsIn, _OMC_LIT64);
          tmpMeta[0+0] = _addEqsIn;
          tmpMeta[0+1] = _addVarsIn;
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
  _addEqsOut = tmpMeta[0+0];
  _addVarsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_addVarsOut) { *out_addVarsOut = _addVarsOut; }
  return _addEqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_ChiosCondensation2(threadData_t *threadData, modelica_metatype _systemIn, modelica_metatype _iterIdx, modelica_metatype _addEqsIn, modelica_metatype _addVarsIn, modelica_metatype *out_addVarsOut)
{
  modelica_integer tmp1;
  modelica_metatype _addEqsOut = NULL;
  tmp1 = mmc_unbox_integer(_iterIdx);
  _addEqsOut = omc_HpcOmEqSystems_ChiosCondensation2(threadData, _systemIn, tmp1, _addEqsIn, _addVarsIn, out_addVarsOut);
  /* skip box _addEqsOut; list<BackendDAE.Equation> */
  /* skip box _addVarsOut; list<BackendDAE.Var> */
  return _addEqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_chiosCondensation(threadData_t *threadData, modelica_metatype _systemIn, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut)
{
  modelica_metatype _newResEqs = NULL;
  modelica_metatype _addEqsOut = NULL;
  modelica_metatype _addVarsOut = NULL;
  modelica_integer _dim;
  modelica_metatype _vectorB = NULL;
  modelica_metatype _vectorX = NULL;
  modelica_metatype _matrixA = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newResEqs has no default value.
  // _addEqsOut has no default value.
  // _addVarsOut has no default value.
  // _dim has no default value.
  // _vectorB has no default value.
  // _vectorX has no default value.
  // _matrixA has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _systemIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _dim = tmp3  /* pattern as ty=Integer */;
  _matrixA = tmpMeta4;
  _vectorB = tmpMeta5;
  _vectorX = tmpMeta6;

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _addEqsOut = omc_HpcOmEqSystems_ChiosCondensation2(threadData, _systemIn, ((modelica_integer) 1), tmpMeta7, tmpMeta8 ,&_addVarsOut);

  _addEqsOut = listReverse(_addEqsOut);

  _addVarsOut = listReverse(_addVarsOut);

  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _newResEqs = omc_HpcOmEqSystems_generateCramerEqs(threadData, listReverse(omc_List_intRange(threadData, _dim)), _dim, _vectorX, _vectorB, _matrixA, tmpMeta9);

  _newResEqs = listReverse(_newResEqs);
  _return: OMC_LABEL_UNUSED
  if (out_addEqsOut) { *out_addEqsOut = _addEqsOut; }
  if (out_addVarsOut) { *out_addVarsOut = _addVarsOut; }
  return _newResEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getSummands(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _exps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exps has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _expLst1 = NULL;
      modelica_metatype _expLst2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      // _rhs has no default value.
      // _expLst1 has no default value.
      // _expLst2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          /* Pattern matching succeeded */
          _expLst1 = omc_Expression_allTerms(threadData, _lhs);

          _expLst1 = omc_List_map(threadData, _expLst1, boxvar_Expression_negate);

          _expLst2 = omc_Expression_allTerms(threadData, _rhs);
          tmpMeta1 = listAppend(_expLst1, _expLst2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT67,omc_BackendDump_equationString(threadData, _eq));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT68);
          fputs(MMC_STRINGDATA(tmpMeta9),stdout);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta10;
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
  _exps = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _exps;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getCallExpLst(threadData_t *threadData, modelica_metatype _eIn, modelica_metatype _eLstIn, modelica_metatype *out_eLstOut)
{
  modelica_metatype _eOut = NULL;
  modelica_metatype _eLstOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eOut has no default value.
  // _eLstOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eIn;
    {
      modelica_metatype _expLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expLst = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _eIn;
          tmpMeta[0+1] = listAppend(_expLst, _eLstIn);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _eIn;
          tmpMeta[0+1] = _eLstIn;
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
  _eOut = tmpMeta[0+0];
  _eLstOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_eLstOut) { *out_eLstOut = _eLstOut; }
  return _eOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmEqSystems_containsFunctioncallOfCref(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _cref)
{
  modelica_boolean _hasCrefInCall;
  modelica_metatype _expLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasCrefInCall has no default value.
  // _expLst has no default value.
  if(omc_Expression_containFunctioncall(threadData, _expIn))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    omc_Expression_traverseExpBottomUp(threadData, _expIn, boxvar_HpcOmEqSystems_getCallExpLst, tmpMeta1 ,&_expLst);

    _hasCrefInCall = mmc_unbox_boolean(omc_List_fold(threadData, omc_List_map1(threadData, _expLst, boxvar_Expression_expHasCref, _cref), boxvar_boolOr, mmc_mk_boolean(0 /* false */)));
  }
  else
  {
    _hasCrefInCall = 0 /* false */;
  }
  _return: OMC_LABEL_UNUSED
  return _hasCrefInCall;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_containsFunctioncallOfCref(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _cref)
{
  modelica_boolean _hasCrefInCall;
  modelica_metatype out_hasCrefInCall;
  _hasCrefInCall = omc_HpcOmEqSystems_containsFunctioncallOfCref(threadData, _expIn, _cref);
  out_hasCrefInCall = mmc_mk_icon(_hasCrefInCall);
  return out_hasCrefInCall;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem3(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype _coeff = NULL;
  modelica_metatype _allTerms = NULL;
  modelica_metatype _coeffs = NULL;
  modelica_metatype _coeffsIn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  // _coeff has no default value.
  // _allTerms has no default value.
  // _coeffs has no default value.
  // _coeffsIn has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _foldIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _allTerms = tmpMeta2;
  _coeffsIn = tmpMeta3;

  _coeffs = omc_List_extract1OnTrue(threadData, _allTerms, boxvar_Expression_expHasCref, _cref ,&_allTerms);

  _coeff = omc_List_fold(threadData, _coeffs, boxvar_Expression_expAdd, _OMC_LIT61);

  if(omc_HpcOmEqSystems_containsFunctioncallOfCref(threadData, _coeff, _cref))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT69),stdout);

    MMC_THROW_INTERNAL();
  }

  _coeff = omc_Expression_replaceExp(threadData, _coeff, omc_Expression_crefExp(threadData, _cref), _OMC_LIT71, NULL);

  _coeff = omc_ExpressionSimplify_simplify(threadData, _coeff, NULL);

  tmpMeta4 = mmc_mk_cons(_coeff, _coeffsIn);
  tmpMeta5 = mmc_mk_box2(0, _allTerms, tmpMeta4);
  _foldOut = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem2(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _crefs, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_integer _idx;
  modelica_integer _dim;
  modelica_metatype _summands = NULL;
  modelica_metatype _coeffs = NULL;
  modelica_metatype _offsetLst = NULL;
  modelica_metatype _offset = NULL;
  modelica_metatype _sys = NULL;
  modelica_metatype _matrixA = NULL;
  modelica_metatype _vectorB = NULL;
  modelica_metatype _vectorX = NULL;
  modelica_metatype tmpMeta1;
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
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  // _idx has no default value.
  // _dim has no default value.
  // _summands has no default value.
  // _coeffs has no default value.
  // _offsetLst has no default value.
  // _offset has no default value.
  // _sys has no default value.
  // _matrixA has no default value.
  // _vectorB has no default value.
  // _vectorX has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _foldIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _sys = tmpMeta2;
  _idx = tmp4  /* pattern as ty=Integer */;

  _summands = omc_HpcOmEqSystems_getSummands(threadData, _eq);

  _summands = omc_List_map__2(threadData, _summands, boxvar_ExpressionSimplify_simplify, NULL);

  /* Pattern-matching assignment */
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box2(0, _summands, tmpMeta5);
  tmpMeta7 = omc_List_fold(threadData, _crefs, boxvar_HpcOmEqSystems_getEqSystem3, tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  _offsetLst = tmpMeta8;
  _coeffs = tmpMeta9;

  if(listEmpty(_offsetLst))
  {
    _offset = _OMC_LIT61;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta10 = _offsetLst;
    if (listEmpty(tmpMeta10)) MMC_THROW_INTERNAL();
    tmpMeta11 = MMC_CAR(tmpMeta10);
    tmpMeta12 = MMC_CDR(tmpMeta10);
    _offset = tmpMeta11;
    _offsetLst = tmpMeta12;
  }

  _offset = omc_List_fold(threadData, _offsetLst, boxvar_Expression_expAdd, _offset);

  _offset = omc_Expression_negate(threadData, _offset);

  /* Pattern-matching assignment */
  tmpMeta13 = _sys;
  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
  tmp15 = mmc_unbox_integer(tmpMeta14);
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
  _dim = tmp15  /* pattern as ty=Integer */;
  _matrixA = tmpMeta16;
  _vectorB = tmpMeta17;
  _vectorX = tmpMeta18;

  _matrixA = arrayUpdate(_matrixA, _idx, listReverse(_coeffs));

  _vectorB = arrayUpdate(_vectorB, _idx, _offset);

  tmpMeta19 = mmc_mk_box5(3, &HpcOmEqSystems_EqSys_LINSYS__desc, mmc_mk_integer(_dim), _matrixA, _vectorB, _vectorX);
  _sys = tmpMeta19;

  tmpMeta20 = mmc_mk_box2(0, _sys, mmc_mk_integer(((modelica_integer) 1) + _idx));
  _foldOut = tmpMeta20;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_createEqSystem(threadData_t *threadData, modelica_metatype _varLst)
{
  modelica_metatype _sys = NULL;
  modelica_integer _dim;
  modelica_metatype _matrixA = NULL;
  modelica_metatype _vectorB = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sys has no default value.
  // _dim has no default value.
  // _matrixA has no default value.
  // _vectorB has no default value.
  _dim = listLength(_varLst);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matrixA = arrayCreate(_dim, tmpMeta1);

  _vectorB = arrayCreate(_dim, _OMC_LIT61);

  tmpMeta2 = mmc_mk_box5(3, &HpcOmEqSystems_EqSys_LINSYS__desc, mmc_mk_integer(_dim), _matrixA, _vectorB, listArray(_varLst));
  _sys = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _sys;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getEqSystem(threadData_t *threadData, modelica_metatype _eqLst, modelica_metatype _varLst)
{
  modelica_metatype _syst = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _syst has no default value.
  // _crefs has no default value.
  _syst = omc_HpcOmEqSystems_createEqSystem(threadData, _varLst);

  _crefs = omc_List_map(threadData, _varLst, boxvar_BackendVariable_varCref);

  /* Pattern-matching assignment */
  tmpMeta1 = mmc_mk_box2(0, _syst, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta2 = omc_List_fold1(threadData, _eqLst, boxvar_HpcOmEqSystems_getEqSystem2, _crefs, tmpMeta1);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _syst = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _syst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceOtherVarsWithPrefixCref(threadData_t *threadData, modelica_integer _indxIn, modelica_string _prefix, modelica_metatype _oVarCRefLstIn, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype _replVarLstIn = NULL;
  modelica_metatype _replVarLstOut = NULL;
  modelica_metatype _replVar = NULL;
  modelica_metatype _replacementIn = NULL;
  modelica_metatype _replacementOut = NULL;
  modelica_metatype _cRef = NULL;
  modelica_metatype _oVarCRef = NULL;
  modelica_metatype _varExp = NULL;
  modelica_metatype _ty = NULL;
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
  // _tplOut has no default value.
  // _replVarLstIn has no default value.
  // _replVarLstOut has no default value.
  // _replVar has no default value.
  // _replacementIn has no default value.
  // _replacementOut has no default value.
  // _cRef has no default value.
  // _oVarCRef has no default value.
  // _varExp has no default value.
  // _ty has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _replVarLstIn = tmpMeta2;
  _replacementIn = tmpMeta3;

  _oVarCRef = listGet(_oVarCRefLstIn, _indxIn);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _cRef = omc_ComponentReferenceBasics_makeCrefQual(threadData, _prefix, _OMC_LIT74, tmpMeta4, _oVarCRef);

  _cRef = omc_ComponentReference_replaceSubsWithString(threadData, _cRef);

  _cRef = omc_ComponentReference_crefSetLastType(threadData, _cRef, _OMC_LIT75);

  _varExp = omc_Expression_crefExp(threadData, _cRef);

  _replacementOut = omc_BackendVarTransform_addReplacement(threadData, _replacementIn, _oVarCRef, _varExp, mmc_mk_none());

  _ty = omc_ComponentReference_crefLastType(threadData, _cRef);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _cRef, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta5, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
  _replVar = tmpMeta6;

  _replVar = omc_BackendVariable_setVarStartValue(threadData, _replVar, _OMC_LIT61);

  tmpMeta7 = mmc_mk_cons(_replVar, _replVarLstIn);
  _replVarLstOut = tmpMeta7;

  tmpMeta8 = mmc_mk_box2(0, _replVarLstOut, _replacementOut);
  _tplOut = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceOtherVarsWithPrefixCref(threadData_t *threadData, modelica_metatype _indxIn, modelica_metatype _prefix, modelica_metatype _oVarCRefLstIn, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_metatype _tplOut = NULL;
  tmp1 = mmc_unbox_integer(_indxIn);
  _tplOut = omc_HpcOmEqSystems_replaceOtherVarsWithPrefixCref(threadData, tmp1, _prefix, _oVarCRefLstIn, _tplIn);
  /* skip box _tplOut; tuple<list<BackendDAE.Var>, BackendVarTransform.VariableReplacements> */
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceTVarWithReal(threadData_t *threadData, modelica_metatype _tVarCRefIn, modelica_real _realIn, modelica_metatype _replacementIn)
{
  modelica_metatype _replacementOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replacementOut has no default value.
  tmpMeta1 = mmc_mk_box2(4, &DAE_Exp_RCONST__desc, mmc_mk_real(_realIn));
  _replacementOut = omc_BackendVarTransform_addReplacement(threadData, _replacementIn, _tVarCRefIn, tmpMeta1, mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _replacementOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceTVarWithReal(threadData_t *threadData, modelica_metatype _tVarCRefIn, modelica_metatype _realIn, modelica_metatype _replacementIn)
{
  modelica_real tmp1;
  modelica_metatype _replacementOut = NULL;
  tmp1 = mmc_unbox_real(_realIn);
  _replacementOut = omc_HpcOmEqSystems_replaceTVarWithReal(threadData, _tVarCRefIn, tmp1, _replacementIn);
  /* skip box _replacementOut; BackendVarTransform.VariableReplacements */
  return _replacementOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData_t *threadData, modelica_metatype _iIn, modelica_integer _size, modelica_metatype _otherEqLstIn, modelica_metatype _tvarLstIn, modelica_metatype _tVarCRefLstIn, modelica_metatype _otherVarLstIn, modelica_metatype _oVarCRefLstIn, modelica_metatype _g_iArrIn, modelica_metatype _xa_iArrIn, modelica_metatype _replacementArrIn, modelica_integer _tornSysIdx, modelica_metatype *out_xa_i_Out, modelica_metatype *out_replacementArrOut)
{
  modelica_metatype _g_i_Out = NULL;
  modelica_metatype _xa_i_Out = NULL;
  modelica_metatype _replacementArrOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _g_i_Out has no default value.
  // _xa_i_Out has no default value.
  // _replacementArrOut has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iIn;
    {
      modelica_integer _iValue;
      modelica_string _str1 = NULL;
      modelica_metatype _iLstRest = NULL;
      modelica_metatype _gEqLstTmp = NULL;
      modelica_metatype _xaVarLstTmp = NULL;
      modelica_metatype _replArrTmp = NULL;
      modelica_metatype _tVarCRefLst1 = NULL;
      modelica_metatype _g_iArrTmp = NULL;
      modelica_metatype _xa_iArrTmp = NULL;
      modelica_metatype _replTmp = NULL;
      modelica_metatype _tVarCRef = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iValue has no default value.
      // _str1 has no default value.
      // _iLstRest has no default value.
      // _gEqLstTmp has no default value.
      // _xaVarLstTmp has no default value.
      // _replArrTmp has no default value.
      // _tVarCRefLst1 has no default value.
      // _g_iArrTmp has no default value.
      // _xa_iArrTmp has no default value.
      // _replTmp has no default value.
      // _tVarCRef has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _g_iArrIn;
          tmpMeta[0+1] = _xa_iArrIn;
          tmpMeta[0+2] = _replacementArrIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _iValue = tmp8  /* pattern as ty=Integer */;
          _iLstRest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_iValue == ((modelica_integer) 0));
          if (1 /* true */ != tmp9) goto goto_2;

          _replTmp = omc_BackendVarTransform_emptyReplacementsSized(threadData, _size);

          _replTmp = omc_List_fold1(threadData, _tVarCRefLstIn, boxvar_HpcOmEqSystems_replaceTVarWithReal, _OMC_LIT40, _replTmp);

          /* Pattern-matching assignment */
          tmpMeta10 = stringAppend(_OMC_LIT76,intString(_tornSysIdx));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT77);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_box2(0, tmpMeta12, _replTmp);
          tmpMeta14 = omc_List_fold2(threadData, omc_List_intRange(threadData, listLength(_oVarCRefLstIn)), boxvar_HpcOmEqSystems_replaceOtherVarsWithPrefixCref, tmpMeta11, _oVarCRefLstIn, tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _xaVarLstTmp = tmpMeta15;
          _replTmp = tmpMeta16;

          /* Pattern-matching tuple assignment */
          tmpMeta18 = omc_BackendVarTransform_replaceEquations(threadData, _otherEqLstIn, _replTmp, mmc_mk_none(), &tmp17);
          _gEqLstTmp = tmpMeta18;
          if (1 /* true */ != tmp17) goto goto_2;

          _g_iArrTmp = arrayUpdate(_g_iArrIn, ((modelica_integer) 1) + _iValue, _gEqLstTmp);

          _xa_iArrTmp = arrayUpdate(_xa_iArrIn, ((modelica_integer) 1) + _iValue, _xaVarLstTmp);

          _replArrTmp = arrayUpdate(_replacementArrIn, ((modelica_integer) 1) + _iValue, _replTmp);
          tmpMeta[0+0] = omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData, _iLstRest, _size, _otherEqLstIn, _tvarLstIn, _tVarCRefLstIn, _otherVarLstIn, _oVarCRefLstIn, _g_iArrTmp, _xa_iArrTmp, _replArrTmp, _tornSysIdx, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_boolean tmp30;
          modelica_metatype tmpMeta31;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta19 = MMC_CAR(tmp4_1);
          tmpMeta20 = MMC_CDR(tmp4_1);
          tmp21 = mmc_unbox_integer(tmpMeta19);
          _iValue = tmp21  /* pattern as ty=Integer */;
          _iLstRest = tmpMeta20;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp22 = (_iValue > ((modelica_integer) 0));
          if (1 /* true */ != tmp22) goto goto_2;

          tmpMeta23 = stringAppend(_OMC_LIT76,intString(_tornSysIdx));
          tmpMeta24 = stringAppend(tmpMeta23,intString(_iValue));
          _str1 = tmpMeta24;

          _tVarCRef = listGet(_tVarCRefLstIn, _iValue);

          _tVarCRefLst1 = listDelete(_tVarCRefLstIn, _iValue);

          _replTmp = omc_BackendVarTransform_emptyReplacementsSized(threadData, _size);

          _replTmp = omc_HpcOmEqSystems_replaceTVarWithReal(threadData, _tVarCRef, 1.0, _replTmp);

          _replTmp = omc_List_fold1(threadData, _tVarCRefLst1, boxvar_HpcOmEqSystems_replaceTVarWithReal, _OMC_LIT40, _replTmp);

          /* Pattern-matching assignment */
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = mmc_mk_box2(0, tmpMeta25, _replTmp);
          tmpMeta27 = omc_List_fold2(threadData, omc_List_intRange(threadData, listLength(_oVarCRefLstIn)), boxvar_HpcOmEqSystems_replaceOtherVarsWithPrefixCref, _str1, _oVarCRefLstIn, tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 1));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 2));
          _xaVarLstTmp = tmpMeta28;
          _replTmp = tmpMeta29;

          /* Pattern-matching tuple assignment */
          tmpMeta31 = omc_BackendVarTransform_replaceEquations(threadData, _otherEqLstIn, _replTmp, mmc_mk_none(), &tmp30);
          _gEqLstTmp = tmpMeta31;
          if (1 /* true */ != tmp30) goto goto_2;

          _g_iArrTmp = arrayUpdate(_g_iArrIn, ((modelica_integer) 1) + _iValue, _gEqLstTmp);

          _xa_iArrTmp = arrayUpdate(_xa_iArrIn, ((modelica_integer) 1) + _iValue, _xaVarLstTmp);

          _replArrTmp = arrayUpdate(_replacementArrIn, ((modelica_integer) 1) + _iValue, _replTmp);
          tmpMeta[0+0] = omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData, _iLstRest, _size, _otherEqLstIn, _tvarLstIn, _tVarCRefLstIn, _otherVarLstIn, _oVarCRefLstIn, _g_iArrTmp, _xa_iArrTmp, _replArrTmp, _tornSysIdx, &tmpMeta[0+1], &tmpMeta[0+2]);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT78),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _g_i_Out = tmpMeta[0+0];
  _xa_i_Out = tmpMeta[0+1];
  _replacementArrOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_xa_i_Out) { *out_xa_i_Out = _xa_i_Out; }
  if (out_replacementArrOut) { *out_replacementArrOut = _replacementArrOut; }
  return _g_i_Out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData_t *threadData, modelica_metatype _iIn, modelica_metatype _size, modelica_metatype _otherEqLstIn, modelica_metatype _tvarLstIn, modelica_metatype _tVarCRefLstIn, modelica_metatype _otherVarLstIn, modelica_metatype _oVarCRefLstIn, modelica_metatype _g_iArrIn, modelica_metatype _xa_iArrIn, modelica_metatype _replacementArrIn, modelica_metatype _tornSysIdx, modelica_metatype *out_xa_i_Out, modelica_metatype *out_replacementArrOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _g_i_Out = NULL;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_integer(_tornSysIdx);
  _g_i_Out = omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData, _iIn, tmp1, _otherEqLstIn, _tvarLstIn, _tVarCRefLstIn, _otherVarLstIn, _oVarCRefLstIn, _g_iArrIn, _xa_iArrIn, _replacementArrIn, tmp2, out_xa_i_Out, out_replacementArrOut);
  /* skip box _g_i_Out; array<list<BackendDAE.Equation>> */
  /* skip box _xa_i_Out; array<list<BackendDAE.Var>> */
  /* skip box _replacementArrOut; array<BackendVarTransform.VariableReplacements> */
  return _g_i_Out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_eqInFrontList(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _lstLstIn)
{
  modelica_metatype _lstLstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstLstOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _lstLstIn;
    {
      modelica_metatype _eqLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _lstLstIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _eqLst = listHead(_lstLstIn);

          tmpMeta6 = mmc_mk_cons(_eqIn, _eqLst);
          _eqLst = tmpMeta6;
          tmpMeta1 = omc_List_replaceAt(threadData, _eqLst, ((modelica_integer) 1), _lstLstIn);
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
  _lstLstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lstLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_varInFrontList(threadData_t *threadData, modelica_metatype _varIn, modelica_metatype _lstLstIn)
{
  modelica_metatype _lstLstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstLstOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _lstLstIn;
    {
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _lstLstIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _varLst = listHead(_lstLstIn);

          tmpMeta6 = mmc_mk_cons(_varIn, _varLst);
          _varLst = tmpMeta6;
          tmpMeta1 = omc_List_replaceAt(threadData, _varLst, ((modelica_integer) 1), _lstLstIn);
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
  _lstLstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lstLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressionForEquation(threadData_t *threadData, modelica_metatype _eq)
{
  modelica_metatype _exp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _exp has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eq;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      // _rhs has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          /* Pattern matching succeeded */
          _ty = omc_Expression_typeof(threadData, _lhs);

          tmpMeta8 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta9 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _rhs, tmpMeta8, _lhs);
          _rhs = tmpMeta9;
          tmpMeta1 = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT79),stdout);
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressions1(threadData_t *threadData, modelica_integer _i, modelica_metatype _resExpsIn, modelica_metatype _replArr, modelica_metatype _h_iArrIn)
{
  modelica_metatype _h_iArrOut = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _h_i = NULL;
  modelica_metatype _h_iArr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _h_iArrOut has no default value.
  // _repl has no default value.
  // _h_i has no default value.
  // _h_iArr has no default value.
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
          _repl = arrayGet(_replArr, ((modelica_integer) 1) + _i);

          _h_i = omc_BackendVarTransform_replaceExpList1(threadData, _resExpsIn, _repl, mmc_mk_none(), NULL);
          tmpMeta1 = arrayUpdate(_h_iArrIn, ((modelica_integer) 1) + _i, _h_i);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT80),stdout);
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
  _h_iArrOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _h_iArrOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getResidualExpressions1(threadData_t *threadData, modelica_metatype _i, modelica_metatype _resExpsIn, modelica_metatype _replArr, modelica_metatype _h_iArrIn)
{
  modelica_integer tmp1;
  modelica_metatype _h_iArrOut = NULL;
  tmp1 = mmc_unbox_integer(_i);
  _h_iArrOut = omc_HpcOmEqSystems_getResidualExpressions1(threadData, tmp1, _resExpsIn, _replArr, _h_iArrIn);
  /* skip box _h_iArrOut; array<list<DAE.Exp>> */
  return _h_iArrOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getResidualExpressions(threadData_t *threadData, modelica_metatype _iIn, modelica_metatype _resEqLstIn, modelica_metatype _replArrIn, modelica_metatype _h_iArrIn)
{
  modelica_metatype _h_iArrOut = NULL;
  modelica_metatype _resExps = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _h_iArrOut has no default value.
  // _resExps has no default value.
  _resExps = omc_List_map(threadData, _resEqLstIn, boxvar_HpcOmEqSystems_getResidualExpressionForEquation);

  _h_iArrOut = omc_List_fold2(threadData, _iIn, boxvar_HpcOmEqSystems_getResidualExpressions1, _resExps, _replArrIn, _h_iArrIn);
  _return: OMC_LABEL_UNUSED
  return _h_iArrOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_varExp(threadData_t *threadData, modelica_metatype _varIn)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype _cr = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _cr has no default value.
  // _ty has no default value.
  _ty = omc_BackendVariable_varType(threadData, _varIn);

  _cr = omc_BackendVariable_varCref(threadData, _varIn);

  tmpMeta1 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cr, _ty);
  _expOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData_t *threadData, modelica_metatype _resIdxLst, modelica_integer _iIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_integer _tornSysIdx, modelica_metatype *out_a_iArrOut)
{
  modelica_metatype _hs_iArrOut = NULL;
  modelica_metatype _a_iArrOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hs_iArrOut has no default value.
  // _a_iArrOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _resIdxLst;
    {
      modelica_integer _resIdx;
      modelica_string _aName = NULL;
      modelica_metatype _resIdxRest = NULL;
      modelica_metatype _hs_iArrTmp = NULL;
      modelica_metatype _a_iArrTmp = NULL;
      modelica_metatype _hs_iTmp = NULL;
      modelica_metatype _a_iTmp = NULL;
      modelica_metatype _d_lst = NULL;
      modelica_metatype _hs_ii = NULL;
      modelica_metatype _a_ii = NULL;
      modelica_metatype _dVar = NULL;
      modelica_metatype _aCRef = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _dExp = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _resIdx has no default value.
      // _aName has no default value.
      // _resIdxRest has no default value.
      // _hs_iArrTmp has no default value.
      // _a_iArrTmp has no default value.
      // _hs_iTmp has no default value.
      // _a_iTmp has no default value.
      // _d_lst has no default value.
      // _hs_ii has no default value.
      // _a_ii has no default value.
      // _dVar has no default value.
      // _aCRef has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _dExp has no default value.
      // _ty has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _hs_iArrIn;
          tmpMeta[0+1] = _a_iArrIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _resIdx = tmp8  /* pattern as ty=Integer */;
          _resIdxRest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (((modelica_integer) 0) == _iIdx);
          if (1 /* true */ != tmp9) goto goto_2;

          tmpMeta10 = stringAppend(_OMC_LIT81,intString(_tornSysIdx));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT20);
          tmpMeta12 = stringAppend(tmpMeta11,intString(_resIdx));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT20);
          tmpMeta14 = stringAppend(tmpMeta13,intString(_iIdx));
          _aName = tmpMeta14;

          _ty = _OMC_LIT75;

          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          _aCRef = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _aName, _ty, tmpMeta15);

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _aCRef, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta16, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _a_ii = tmpMeta17;

          _a_ii = omc_BackendVariable_setVarStartValue(threadData, _a_ii, _OMC_LIT61);

          _lhs = omc_HpcOmEqSystems_varExp(threadData, _a_ii);

          _rhs = listGet(arrayGet(_h_iArr, ((modelica_integer) 1) + _iIdx), _resIdx);

          _rhs = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);

          tmpMeta18 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT43, _OMC_LIT55);
          _hs_ii = tmpMeta18;

          _hs_iTmp = arrayGet(_hs_iArrIn, ((modelica_integer) 1) + _iIdx);

          tmpMeta19 = mmc_mk_cons(_hs_ii, _hs_iTmp);
          _hs_iTmp = tmpMeta19;

          _hs_iArrTmp = arrayUpdate(_hs_iArrIn, ((modelica_integer) 1) + _iIdx, _hs_iTmp);

          _a_iArrTmp = _a_iArrIn;

          _a_iTmp = arrayGet(_a_iArrIn, ((modelica_integer) 1) + _iIdx);

          tmpMeta20 = mmc_mk_cons(_a_ii, _a_iTmp);
          _a_iTmp = tmpMeta20;

          _a_iArrTmp = arrayUpdate(_a_iArrIn, ((modelica_integer) 1) + _iIdx, _a_iTmp);
          tmpMeta[0+0] = omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData, _resIdxRest, _iIdx, _h_iArr, _hs_iArrTmp, _a_iArrTmp, _tornSysIdx, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_boolean tmp24;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_1);
          tmpMeta22 = MMC_CDR(tmp4_1);
          tmp23 = mmc_unbox_integer(tmpMeta21);
          _resIdx = tmp23  /* pattern as ty=Integer */;
          _resIdxRest = tmpMeta22;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp24 = (_iIdx > ((modelica_integer) 0));
          if (1 /* true */ != tmp24) goto goto_2;

          tmpMeta25 = stringAppend(_OMC_LIT81,intString(_tornSysIdx));
          tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT20);
          tmpMeta27 = stringAppend(tmpMeta26,intString(_resIdx));
          tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT20);
          tmpMeta29 = stringAppend(tmpMeta28,intString(_iIdx));
          _aName = tmpMeta29;

          _ty = _OMC_LIT75;

          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          _aCRef = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _aName, _ty, tmpMeta30);

          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta32 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, _aCRef, _OMC_LIT49, _OMC_LIT50, _OMC_LIT51, _ty, mmc_mk_none(), mmc_mk_none(), tmpMeta31, _OMC_LIT43, mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), _OMC_LIT52, _OMC_LIT53, mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */), mmc_mk_boolean(0 /* false */));
          _a_ii = tmpMeta32;

          _a_ii = omc_BackendVariable_setVarStartValue(threadData, _a_ii, _OMC_LIT61);

          _d_lst = arrayGet(_a_iArrIn, ((modelica_integer) 1));

          _dVar = listGet(_d_lst, _resIdx);

          _dExp = omc_HpcOmEqSystems_varExp(threadData, _dVar);

          _lhs = omc_HpcOmEqSystems_varExp(threadData, _a_ii);

          _rhs = listGet(arrayGet(_h_iArr, ((modelica_integer) 1) + _iIdx), _resIdx);

          tmpMeta33 = mmc_mk_box2(4, &DAE_Operator_SUB__desc, _ty);
          tmpMeta34 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _rhs, tmpMeta33, _dExp);
          _rhs = tmpMeta34;

          _rhs = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);

          tmpMeta35 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT43, _OMC_LIT55);
          _hs_ii = tmpMeta35;

          _hs_iTmp = arrayGet(_hs_iArrIn, ((modelica_integer) 1) + _iIdx);

          tmpMeta36 = mmc_mk_cons(_hs_ii, _hs_iTmp);
          _hs_iTmp = tmpMeta36;

          _hs_iArrTmp = arrayUpdate(_hs_iArrIn, ((modelica_integer) 1) + _iIdx, _hs_iTmp);

          _a_iArrTmp = _a_iArrIn;

          _a_iTmp = arrayGet(_a_iArrIn, ((modelica_integer) 1) + _iIdx);

          tmpMeta37 = mmc_mk_cons(_a_ii, _a_iTmp);
          _a_iTmp = tmpMeta37;

          _a_iArrTmp = arrayUpdate(_a_iArrIn, ((modelica_integer) 1) + _iIdx, _a_iTmp);
          tmpMeta[0+0] = omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData, _resIdxRest, _iIdx, _h_iArr, _hs_iArrTmp, _a_iArrTmp, _tornSysIdx, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT82),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _hs_iArrOut = tmpMeta[0+0];
  _a_iArrOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_a_iArrOut) { *out_a_iArrOut = _a_iArrOut; }
  return _hs_iArrOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getTornSystemCoefficients1(threadData_t *threadData, modelica_metatype _resIdxLst, modelica_metatype _iIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype _tornSysIdx, modelica_metatype *out_a_iArrOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _hs_iArrOut = NULL;
  tmp1 = mmc_unbox_integer(_iIdx);
  tmp2 = mmc_unbox_integer(_tornSysIdx);
  _hs_iArrOut = omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData, _resIdxLst, tmp1, _h_iArr, _hs_iArrIn, _a_iArrIn, tmp2, out_a_iArrOut);
  /* skip box _hs_iArrOut; array<list<BackendDAE.Equation>> */
  /* skip box _a_iArrOut; array<list<BackendDAE.Var>> */
  return _hs_iArrOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getTornSystemCoefficients(threadData_t *threadData, modelica_metatype _iValueRange, modelica_integer _numTVars, modelica_integer _tornSysIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype *out_a_iArrOut)
{
  modelica_metatype _hs_iArrOut = NULL;
  modelica_metatype _a_iArrOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hs_iArrOut has no default value.
  // _a_iArrOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iValueRange;
    {
      modelica_integer _iValue;
      modelica_metatype _iLstRest = NULL;
      modelica_metatype _hs_iArrTmp = NULL;
      modelica_metatype _a_iArrTmp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iValue has no default value.
      // _iLstRest has no default value.
      // _hs_iArrTmp has no default value.
      // _a_iArrTmp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _hs_iArrIn;
          tmpMeta[0+1] = _a_iArrIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _iValue = tmp8  /* pattern as ty=Integer */;
          _iLstRest = tmpMeta7;
          /* Pattern matching succeeded */
          _hs_iArrTmp = omc_HpcOmEqSystems_getTornSystemCoefficients1(threadData, listReverse(omc_List_intRange(threadData, _numTVars)), _iValue, _h_iArr, _hs_iArrIn, _a_iArrIn, _tornSysIdx ,&_a_iArrTmp);
          tmpMeta[0+0] = omc_HpcOmEqSystems_getTornSystemCoefficients(threadData, _iLstRest, _numTVars, _tornSysIdx, _h_iArr, _hs_iArrTmp, _a_iArrTmp, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT83),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _hs_iArrOut = tmpMeta[0+0];
  _a_iArrOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_a_iArrOut) { *out_a_iArrOut = _a_iArrOut; }
  return _hs_iArrOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_getTornSystemCoefficients(threadData_t *threadData, modelica_metatype _iValueRange, modelica_metatype _numTVars, modelica_metatype _tornSysIdx, modelica_metatype _h_iArr, modelica_metatype _hs_iArrIn, modelica_metatype _a_iArrIn, modelica_metatype *out_a_iArrOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _hs_iArrOut = NULL;
  tmp1 = mmc_unbox_integer(_numTVars);
  tmp2 = mmc_unbox_integer(_tornSysIdx);
  _hs_iArrOut = omc_HpcOmEqSystems_getTornSystemCoefficients(threadData, _iValueRange, tmp1, tmp2, _h_iArr, _hs_iArrIn, _a_iArrIn, out_a_iArrOut);
  /* skip box _hs_iArrOut; array<list<BackendDAE.Equation>> */
  /* skip box _a_iArrOut; array<list<BackendDAE.Var>> */
  return _hs_iArrOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildSingleEquationSystem(threadData_t *threadData, modelica_integer _eqSizeOrig, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _shared, modelica_metatype _compsIn)
{
  modelica_metatype _matchingOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchingOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _mapEqnIncRow = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _mapIncRowEqn = NULL;
      modelica_integer _nVars;
      modelica_integer _nEqs;
      modelica_metatype _eqArr = NULL;
      modelica_metatype _sysTmp = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _matching = NULL;
      modelica_metatype _compsTmp = NULL;
      modelica_metatype _vars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _mapEqnIncRow has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _mapIncRowEqn has no default value.
      // _nVars has no default value.
      // _nEqs has no default value.
      // _eqArr has no default value.
      // _sysTmp has no default value.
      // _m has no default value.
      // _matching has no default value.
      // _compsTmp has no default value.
      // _vars has no default value.
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
          /* Pattern matching succeeded */
          _vars = omc_BackendVariable_listVar1(threadData, _inVars);

          _eqArr = omc_BackendEquation_listEquation(threadData, _inEqs);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _sysTmp = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqArr, tmpMeta6, _OMC_LIT84, omc_BackendEquation_emptyEqns(threadData));

          _sysTmp = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _sysTmp, _OMC_LIT85, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,&_m ,NULL);

          _nVars = listLength(_inVars);

          _nEqs = listLength(_inEqs);

          _ass1 = arrayCreate(_nVars, mmc_mk_integer(((modelica_integer) -1)));

          _ass2 = arrayCreate(_nEqs, mmc_mk_integer(((modelica_integer) -1)));

          omc_Matching_matchingExternalsetAdjacencyMatrix(threadData, _nVars, _nEqs, _m);

          omc_BackendDAEEXT_matching(threadData, _nVars, _nEqs, ((modelica_integer) 5), ((modelica_integer) -1), 0.0, ((modelica_integer) 1));

          omc_BackendDAEEXT_getAssignment(threadData, _ass2, _ass1);

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, tmpMeta7);
          _matching = tmpMeta8;

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _sysTmp = omc_BackendDAEUtil_createEqSystem(threadData, _vars, _eqArr, tmpMeta9, _OMC_LIT84, omc_BackendEquation_emptyEqns(threadData));

          _sysTmp = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _sysTmp, _OMC_LIT9, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared), NULL, NULL);

          _sysTmp = omc_BackendDAEUtil_setEqSystMatching(threadData, _sysTmp, _matching);

          _mapIncRowEqn = omc_Array_createIntRange(threadData, _nEqs);

          _mapEqnIncRow = omc_Array_map(threadData, _mapIncRowEqn, boxvar_List_create);

          _sysTmp = omc_BackendDAETransform_strongComponentsScalar(threadData, _sysTmp, _shared, _mapEqnIncRow, _mapIncRowEqn ,&_compsTmp);

          _compsTmp = listAppend(_compsIn, _compsTmp);
          tmpMeta10 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, _compsTmp);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT86),stdout);
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
  _matchingOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _matchingOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildSingleEquationSystem(threadData_t *threadData, modelica_metatype _eqSizeOrig, modelica_metatype _inEqs, modelica_metatype _inVars, modelica_metatype _shared, modelica_metatype _compsIn)
{
  modelica_integer tmp1;
  modelica_metatype _matchingOut = NULL;
  tmp1 = mmc_unbox_integer(_eqSizeOrig);
  _matchingOut = omc_HpcOmEqSystems_buildSingleEquationSystem(threadData, tmp1, _inEqs, _inVars, _shared, _compsIn);
  /* skip box _matchingOut; BackendDAE.Matching */
  return _matchingOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_addProductToExp(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2, modelica_metatype _inExp)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype _fac1 = NULL;
  modelica_metatype _fac2 = NULL;
  modelica_metatype _prod = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  // _fac1 has no default value.
  // _fac2 has no default value.
  // _prod has no default value.
  // _ty has no default value.
  _fac1 = omc_HpcOmEqSystems_varExp(threadData, _var1);

  _fac2 = omc_HpcOmEqSystems_varExp(threadData, _var2);

  _fac2 = (omc_BackendVariable_isStateVar(threadData, _var2)?omc_Expression_expDer(threadData, _fac2):_fac2);

  _ty = _OMC_LIT75;

  tmpMeta1 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
  tmpMeta2 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _fac1, tmpMeta1, _fac2);
  _prod = tmpMeta2;

  tmpMeta3 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
  tmpMeta4 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _inExp, tmpMeta3, _prod);
  _expOut = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildNewResidualEquation2(threadData_t *threadData, modelica_integer _idx, modelica_metatype _coeffs, modelica_metatype _tVars, modelica_metatype _expIn)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _coeff = NULL;
      modelica_metatype _tVar = NULL;
      modelica_metatype _coeffExp = NULL;
      modelica_metatype _tVarExp = NULL;
      modelica_metatype _expTmp = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _coeff has no default value.
      // _tVar has no default value.
      // _coeffExp has no default value.
      // _tVarExp has no default value.
      // _expTmp has no default value.
      // _ty has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_idx == ((modelica_integer) 1));
          if (1 /* true */ != tmp6) goto goto_2;

          _coeff = listGet(_coeffs, _idx);

          _coeffExp = omc_HpcOmEqSystems_varExp(threadData, _coeff);

          _tVar = listGet(_tVars, _idx);

          _tVarExp = omc_HpcOmEqSystems_varExp(threadData, _tVar);

          _tVarExp = (omc_BackendVariable_isStateVar(threadData, _tVar)?omc_Expression_expDer(threadData, _tVarExp):_tVarExp);

          _ty = _OMC_LIT75;

          tmpMeta7 = mmc_mk_box2(5, &DAE_Operator_MUL__desc, _ty);
          tmpMeta8 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _coeffExp, tmpMeta7, _tVarExp);
          _expTmp = tmpMeta8;
          tmpMeta1 = omc_HpcOmEqSystems_buildNewResidualEquation2(threadData, ((modelica_integer) 1) + _idx, _coeffs, _tVars, _expTmp);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_idx <= listLength(_tVars));
          if (1 /* true */ != tmp9) goto goto_2;

          _coeff = listGet(_coeffs, _idx);

          _tVar = listGet(_tVars, _idx);

          _expTmp = omc_HpcOmEqSystems_addProductToExp(threadData, _coeff, _tVar, _expIn);
          tmpMeta1 = omc_HpcOmEqSystems_buildNewResidualEquation2(threadData, ((modelica_integer) 1) + _idx, _coeffs, _tVars, _expTmp);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_idx > listLength(_tVars));
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = _expIn;
          goto tmp3_done;
        }
        case 3: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT87),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _expOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _expOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildNewResidualEquation2(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _coeffs, modelica_metatype _tVars, modelica_metatype _expIn)
{
  modelica_integer tmp1;
  modelica_metatype _expOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _expOut = omc_HpcOmEqSystems_buildNewResidualEquation2(threadData, tmp1, _coeffs, _tVars, _expIn);
  /* skip box _expOut; DAE.Exp */
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildNewResidualEquation(threadData_t *threadData, modelica_integer _resIdx, modelica_metatype _aCoeffLst, modelica_metatype _a0CoeffLst, modelica_metatype _tvars, modelica_metatype _resEqsIn)
{
  modelica_metatype _resEqsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _resEqsOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _eqLstTmp = NULL;
      modelica_metatype _aCoeffs = NULL;
      modelica_metatype _hs = NULL;
      modelica_metatype _a0Coeff = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _a0Exp = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqLstTmp has no default value.
      // _aCoeffs has no default value.
      // _hs has no default value.
      // _a0Coeff has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _a0Exp has no default value.
      // _ty has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_resIdx > listLength(_tvars));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = listReverse(_resEqsIn);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (_resIdx <= listLength(_tvars));
          if (1 /* true */ != tmp7) goto goto_2;

          _aCoeffs = omc_List_map1(threadData, _aCoeffLst, boxvar_listGet, mmc_mk_integer(_resIdx));

          _a0Coeff = listGet(_a0CoeffLst, _resIdx);

          _a0Exp = omc_HpcOmEqSystems_varExp(threadData, _a0Coeff);

          _ty = _OMC_LIT75;

          _rhs = omc_HpcOmEqSystems_buildNewResidualEquation2(threadData, ((modelica_integer) 1), _aCoeffs, _tvars, _OMC_LIT61);

          tmpMeta8 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, _ty);
          tmpMeta9 = mmc_mk_box4(10, &DAE_Exp_BINARY__desc, _rhs, tmpMeta8, _a0Exp);
          _rhs = tmpMeta9;

          _lhs = _OMC_LIT61;

          tmpMeta10 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT43, _OMC_LIT55);
          _hs = tmpMeta10;

          tmpMeta11 = mmc_mk_cons(_hs, _resEqsIn);
          _eqLstTmp = tmpMeta11;
          tmpMeta1 = omc_HpcOmEqSystems_buildNewResidualEquation(threadData, ((modelica_integer) 1) + _resIdx, _aCoeffLst, _a0CoeffLst, _tvars, _eqLstTmp);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT88),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _resEqsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _resEqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildNewResidualEquation(threadData_t *threadData, modelica_metatype _resIdx, modelica_metatype _aCoeffLst, modelica_metatype _a0CoeffLst, modelica_metatype _tvars, modelica_metatype _resEqsIn)
{
  modelica_integer tmp1;
  modelica_metatype _resEqsOut = NULL;
  tmp1 = mmc_unbox_integer(_resIdx);
  _resEqsOut = omc_HpcOmEqSystems_buildNewResidualEquation(threadData, tmp1, _aCoeffLst, _a0CoeffLst, _tvars, _resEqsIn);
  /* skip box _resEqsOut; list<BackendDAE.Equation> */
  return _resEqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateIndicesInComp(threadData_t *threadData, modelica_metatype _compIn, modelica_integer _varOffset, modelica_integer _eqOffset)
{
  modelica_metatype _compOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _compIn;
    {
      modelica_integer _varIdx;
      modelica_integer _eqIdx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varIdx has no default value.
      // _eqIdx has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _eqIdx = tmp7  /* pattern as ty=Integer */;
          _varIdx = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _varIdx = _varIdx + _varOffset;

          _eqIdx = _eqIdx + _eqOffset;
          tmpMeta10 = mmc_mk_box3(3, &BackendDAE_StrongComponent_SINGLEEQUATION__desc, mmc_mk_integer(_eqIdx), mmc_mk_integer(_varIdx));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT89),stdout);
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
  _compOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _compOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateIndicesInComp(threadData_t *threadData, modelica_metatype _compIn, modelica_metatype _varOffset, modelica_metatype _eqOffset)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _compOut = NULL;
  tmp1 = mmc_unbox_integer(_varOffset);
  tmp2 = mmc_unbox_integer(_eqOffset);
  _compOut = omc_HpcOmEqSystems_updateIndicesInComp(threadData, _compIn, tmp1, tmp2);
  /* skip box _compOut; BackendDAE.StrongComponent */
  return _compOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceAtPositionFromList(threadData_t *threadData, modelica_integer _n, modelica_metatype _replacingLst, modelica_metatype _positionLst, modelica_metatype _inLst)
{
  modelica_metatype _outLst = NULL;
  modelica_integer _idx;
  modelica_metatype _entry = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLst has no default value.
  // _idx has no default value.
  // _entry has no default value.
  _idx = mmc_unbox_integer(listGet(_positionLst, _n));

  _entry = listGet(_replacingLst, _n);

  _outLst = omc_List_replaceAt(threadData, _entry, _idx, _inLst);
  _return: OMC_LABEL_UNUSED
  return _outLst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_replaceAtPositionFromList(threadData_t *threadData, modelica_metatype _n, modelica_metatype _replacingLst, modelica_metatype _positionLst, modelica_metatype _inLst)
{
  modelica_integer tmp1;
  modelica_metatype _outLst = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _outLst = omc_HpcOmEqSystems_replaceAtPositionFromList(threadData, tmp1, _replacingLst, _positionLst, _inLst);
  /* skip box _outLst; list<polymorphic<ElementType>> */
  return _outLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getOtherComps1(threadData_t *threadData, modelica_metatype _innerEquation, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _tplIn;
    {
      modelica_integer _eqIdx;
      modelica_integer _varIdx;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _varIdcs = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _compsIn = NULL;
      modelica_metatype _compsTmp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqIdx has no default value.
      // _varIdx has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _varIdcs has no default value.
      // _comp has no default value.
      // _compsIn has no default value.
      // _compsTmp has no default value.
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
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ass1 = tmpMeta6;
          _ass2 = tmpMeta7;
          _compsIn = tmpMeta8;
          /* Pattern matching succeeded */
          _eqIdx = omc_BackendDAEUtil_getEqnAndVarsFromInnerEquation(threadData, _innerEquation ,&_varIdcs ,NULL);

          /* Pattern-matching assignment */
          tmp9 = (listLength(_varIdcs) == ((modelica_integer) 1));
          if (1 /* true */ != tmp9) goto goto_2;

          _varIdx = mmc_unbox_integer(listGet(_varIdcs, ((modelica_integer) 1)));

          tmpMeta10 = mmc_mk_box3(3, &BackendDAE_StrongComponent_SINGLEEQUATION__desc, mmc_mk_integer(_eqIdx), mmc_mk_integer(_varIdx));
          _comp = tmpMeta10;

          _ass1 = arrayUpdate(_ass1, _varIdx, mmc_mk_integer(_eqIdx));

          _ass2 = arrayUpdate(_ass2, _eqIdx, mmc_mk_integer(_varIdx));

          tmpMeta11 = mmc_mk_cons(_comp, _compsIn);
          _compsTmp = tmpMeta11;
          tmpMeta12 = mmc_mk_box3(0, _ass1, _ass2, _compsTmp);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT90),stdout);
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_getOtherComps(threadData_t *threadData, modelica_metatype _innerEquations, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_metatype _matchingOut = NULL;
  modelica_metatype _ass1Tmp = NULL;
  modelica_metatype _ass2Tmp = NULL;
  modelica_metatype _compsTmp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matchingOut has no default value.
  // _ass1Tmp has no default value.
  // _ass2Tmp has no default value.
  // _compsTmp has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(0, _ass1, _ass2, tmpMeta1);
  tmpMeta3 = omc_List_fold(threadData, _innerEquations, boxvar_HpcOmEqSystems_getOtherComps1, tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
  _ass1Tmp = tmpMeta4;
  _ass2Tmp = tmpMeta5;
  _compsTmp = tmpMeta6;

  _compsTmp = listReverse(_compsTmp);

  tmpMeta7 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1Tmp, _ass2Tmp, _compsTmp);
  _matchingOut = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _matchingOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateResidualMatching(threadData_t *threadData, modelica_integer _idx, modelica_metatype _tvars, modelica_metatype _resEqs, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype _ass1 = NULL;
  modelica_metatype _ass2 = NULL;
  modelica_integer _eqIdx;
  modelica_integer _varIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  // _ass1 has no default value.
  // _ass2 has no default value.
  // _eqIdx has no default value.
  // _varIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _ass1 = tmpMeta2;
  _ass2 = tmpMeta3;

  _eqIdx = mmc_unbox_integer(listGet(_resEqs, _idx));

  _varIdx = mmc_unbox_integer(listGet(_tvars, _idx));

  _ass1 = arrayUpdate(_ass1, _varIdx, mmc_mk_integer(_eqIdx));

  _ass2 = arrayUpdate(_ass2, _eqIdx, mmc_mk_integer(_varIdx));

  tmpMeta4 = mmc_mk_box2(0, _ass1, _ass2);
  _tplOut = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateResidualMatching(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _tvars, modelica_metatype _resEqs, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_metatype _tplOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _tplOut = omc_HpcOmEqSystems_updateResidualMatching(threadData, tmp1, _tvars, _resEqs, _tplIn);
  /* skip box _tplOut; tuple<array<#Integer>, array<#Integer>> */
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_updateMatching(threadData_t *threadData, modelica_integer _idx, modelica_metatype _offsetTpl, modelica_metatype _matching2, modelica_metatype _matching1In)
{
  modelica_metatype _matching1Out = NULL;
  modelica_integer _eqOffset;
  modelica_integer _varOffset;
  modelica_integer _eqValue;
  modelica_integer _varValue;
  modelica_metatype _ass11 = NULL;
  modelica_metatype _ass21 = NULL;
  modelica_metatype _ass12 = NULL;
  modelica_metatype _ass22 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
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
  // _matching1Out has no default value.
  // _eqOffset has no default value.
  // _varOffset has no default value.
  // _eqValue has no default value.
  // _varValue has no default value.
  // _ass11 has no default value.
  // _ass21 has no default value.
  // _ass12 has no default value.
  // _ass22 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _offsetTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _eqOffset = tmp3  /* pattern as ty=Integer */;
  _varOffset = tmp5  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta6 = _matching2;
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  _ass12 = tmpMeta7;
  _ass22 = tmpMeta8;

  /* Pattern-matching assignment */
  tmpMeta9 = _matching1In;
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  _ass11 = tmpMeta10;
  _ass21 = tmpMeta11;

  _eqValue = _idx + _eqOffset;

  _varValue = mmc_unbox_integer(arrayGet(_ass22, _idx)) + _varOffset;

  _ass11 = arrayUpdate(_ass11, _varValue, mmc_mk_integer(_eqValue));

  _ass21 = arrayUpdate(_ass21, _eqValue, mmc_mk_integer(_varValue));

  tmpMeta12 = mmc_mk_box2(0, _ass11, _ass21);
  _matching1Out = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _matching1Out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_updateMatching(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _offsetTpl, modelica_metatype _matching2, modelica_metatype _matching1In)
{
  modelica_integer tmp1;
  modelica_metatype _matching1Out = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _matching1Out = omc_HpcOmEqSystems_updateMatching(threadData, tmp1, _offsetTpl, _matching2, _matching1In);
  /* skip box _matching1Out; tuple<array<#Integer>, array<#Integer>> */
  return _matching1Out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian2(threadData_t *threadData, modelica_integer _colIdx, modelica_metatype _inElements, modelica_integer _rowIdx, modelica_metatype _inJac)
{
  modelica_metatype _outJac = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _eq = NULL;
  modelica_metatype _elem = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outJac has no default value.
  // _cref has no default value.
  // _exp has no default value.
  // _eq has no default value.
  // _elem has no default value.
  // _entry has no default value.
  _elem = listGet(_inElements, _colIdx);

  _cref = omc_BackendVariable_varCref(threadData, _elem);

  tmpMeta1 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _OMC_LIT75);
  _exp = tmpMeta1;

  tmpMeta2 = mmc_mk_box3(11, &DAE_Exp_UNARY__desc, _OMC_LIT91, _exp);
  _exp = tmpMeta2;

  tmpMeta3 = mmc_mk_box4(6, &BackendDAE_Equation_RESIDUAL__EQUATION__desc, _exp, _OMC_LIT43, _OMC_LIT55);
  _eq = tmpMeta3;

  tmpMeta4 = mmc_mk_box3(0, mmc_mk_integer(_colIdx), mmc_mk_integer(_rowIdx), _eq);
  _entry = tmpMeta4;

  tmpMeta5 = mmc_mk_cons(_entry, _inJac);
  _outJac = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _outJac;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildLinearJacobian2(threadData_t *threadData, modelica_metatype _colIdx, modelica_metatype _inElements, modelica_metatype _rowIdx, modelica_metatype _inJac)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _outJac = NULL;
  tmp1 = mmc_unbox_integer(_colIdx);
  tmp2 = mmc_unbox_integer(_rowIdx);
  _outJac = omc_HpcOmEqSystems_buildLinearJacobian2(threadData, tmp1, _inElements, tmp2, _inJac);
  /* skip box _outJac; list<tuple<#Integer, #Integer, BackendDAE.Equation>> */
  return _outJac;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian1(threadData_t *threadData, modelica_integer _rowIdx, modelica_metatype _columns, modelica_metatype _inElements, modelica_metatype _inJac)
{
  modelica_metatype _outJac = NULL;
  modelica_metatype _elements = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outJac has no default value.
  // _elements has no default value.
  _elements = listGet(_inElements, _rowIdx);

  _elements = omc_List_map1(threadData, _columns, boxvar_List_getIndexFirst, _elements);

  _outJac = omc_List_fold2(threadData, _columns, boxvar_HpcOmEqSystems_buildLinearJacobian2, _elements, mmc_mk_integer(_rowIdx), _inJac);
  _return: OMC_LABEL_UNUSED
  return _outJac;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_buildLinearJacobian1(threadData_t *threadData, modelica_metatype _rowIdx, modelica_metatype _columns, modelica_metatype _inElements, modelica_metatype _inJac)
{
  modelica_integer tmp1;
  modelica_metatype _outJac = NULL;
  tmp1 = mmc_unbox_integer(_rowIdx);
  _outJac = omc_HpcOmEqSystems_buildLinearJacobian1(threadData, tmp1, _columns, _inElements, _inJac);
  /* skip box _outJac; list<tuple<#Integer, #Integer, BackendDAE.Equation>> */
  return _outJac;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildLinearJacobian(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _eqIdcs, modelica_metatype _varIdcs)
{
  modelica_metatype _outJac = NULL;
  modelica_metatype _jac = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outJac has no default value.
  // _jac has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _jac = omc_List_fold2(threadData, _eqIdcs, boxvar_HpcOmEqSystems_buildLinearJacobian1, _varIdcs, _inElements, tmpMeta1);

  _jac = listReverse(_jac);

  _outJac = mmc_mk_some(_jac);
  _return: OMC_LABEL_UNUSED
  return _outJac;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_buildEqSystemComponent(threadData_t *threadData, modelica_metatype _eqIdcsIn, modelica_metatype _varIdcsIn, modelica_metatype _resEqsIn, modelica_metatype _tVarsIn, modelica_metatype _jacValuesIn, modelica_metatype _shared, modelica_metatype *out_resEqsOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_addEqsOut, modelica_metatype *out_addVarsOut)
{
  modelica_metatype _outComp = NULL;
  modelica_metatype _resEqsOut = NULL;
  modelica_metatype _tVarsOut = NULL;
  modelica_metatype _addEqsOut = NULL;
  modelica_metatype _addVarsOut = NULL;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outComp has no default value.
  // _resEqsOut has no default value.
  // _tVarsOut has no default value.
  // _addEqsOut has no default value.
  // _addVarsOut has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _eqIdcsIn;
    tmp4_2 = _varIdcsIn;
    {
      modelica_integer _eqIdx;
      modelica_integer _varIdx;
      modelica_metatype _jac = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _resEqs = NULL;
      modelica_metatype _addEqs = NULL;
      modelica_metatype _addVars = NULL;
      modelica_metatype _jacValues = NULL;
      modelica_boolean _mixedSystem;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqIdx has no default value.
      // _varIdx has no default value.
      // _jac has no default value.
      // _comp has no default value.
      // _comps has no default value.
      // _resEqs has no default value.
      // _addEqs has no default value.
      // _addVars has no default value.
      // _jacValues has no default value.
      // _mixedSystem has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_boolean tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          _eqIdx = tmp8  /* pattern as ty=Integer */;
          _varIdx = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (listLength(_eqIdcsIn) == ((modelica_integer) 1));
          if (1 /* true */ != tmp12) goto goto_2;

          tmpMeta13 = mmc_mk_box3(3, &BackendDAE_StrongComponent_SINGLEEQUATION__desc, mmc_mk_integer(_eqIdx), mmc_mk_integer(_varIdx));
          _comp = tmpMeta13;
          tmpMeta14 = mmc_mk_cons(_comp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = _resEqsIn;
          tmpMeta[0+2] = _tVarsIn;
          tmpMeta[0+3] = tmpMeta15;
          tmpMeta[0+4] = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp17;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = (listLength(_tVarsIn) <= ((modelica_integer) 3));
          if (1 /* true */ != tmp17) goto goto_2;

          _resEqs = omc_HpcOmEqSystems_applyCramerRule(threadData, _jacValuesIn, _tVarsIn ,NULL ,&_addEqs ,&_addVars);

          _comps = omc_List_threadMap(threadData, _eqIdcsIn, _varIdcsIn, boxvar_BackendDAEUtil_makeSingleEquationComp);
          tmpMeta[0+0] = _comps;
          tmpMeta[0+1] = _resEqs;
          tmpMeta[0+2] = _tVarsIn;
          tmpMeta[0+3] = _addEqs;
          tmpMeta[0+4] = _addVars;
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
          modelica_metatype tmpMeta25;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta18 = arrayList(_jacValuesIn);
          if (listEmpty(tmpMeta18)) goto goto_2;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          _jacValues = tmpMeta20;

          _jac = omc_HpcOmEqSystems_buildLinearJacobian(threadData, _jacValues, omc_List_intRange(threadData, listLength(_resEqsIn)), omc_List_intRange(threadData, listLength(_tVarsIn)));

          _mixedSystem = omc_BackendVariable_hasDiscreteVar(threadData, _tVarsIn);

          tmpMeta21 = mmc_mk_box2(3, &BackendDAE_Jacobian_FULL__JACOBIAN__desc, _jac);
          tmpMeta22 = mmc_mk_box6(4, &BackendDAE_StrongComponent_EQUATIONSYSTEM__desc, _eqIdcsIn, _varIdcsIn, tmpMeta21, _OMC_LIT92, mmc_mk_boolean(_mixedSystem));
          _comp = tmpMeta22;
          tmpMeta23 = mmc_mk_cons(_comp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta23;
          tmpMeta[0+1] = _resEqsIn;
          tmpMeta[0+2] = _tVarsIn;
          tmpMeta[0+3] = tmpMeta24;
          tmpMeta[0+4] = tmpMeta25;
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
  _outComp = tmpMeta[0+0];
  _resEqsOut = tmpMeta[0+1];
  _tVarsOut = tmpMeta[0+2];
  _addEqsOut = tmpMeta[0+3];
  _addVarsOut = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_resEqsOut) { *out_resEqsOut = _resEqsOut; }
  if (out_tVarsOut) { *out_tVarsOut = _tVarsOut; }
  if (out_addEqsOut) { *out_addEqsOut = _addEqsOut; }
  if (out_addVarsOut) { *out_addVarsOut = _addVarsOut; }
  return _outComp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_simplifyNewEquations1(threadData_t *threadData, modelica_integer _eqIdx, modelica_metatype _eqArr, modelica_metatype _varArr, modelica_metatype _m, modelica_metatype _mt, modelica_integer _numAuxiliaryVars, modelica_metatype _shared, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _varIdx;
      modelica_metatype _varIdcs = NULL;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _updEqIdcs = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _varCref = NULL;
      modelica_metatype _varExp = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _eqLst = NULL;
      modelica_metatype _resEqLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varIdx has no default value.
      // _varIdcs has no default value.
      // _eqIdcs has no default value.
      // _updEqIdcs has no default value.
      // _eq has no default value.
      // _var has no default value.
      // _repl has no default value.
      // _varCref has no default value.
      // _varExp has no default value.
      // _rhs has no default value.
      // _lhs has no default value.
      // _eqLst has no default value.
      // _resEqLst has no default value.
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
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = _tplIn;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          _eqIdcs = tmpMeta7;
          _varIdcs = tmpMeta8;
          _resEqLst = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta10 = arrayGet(_m, _eqIdx);
          if (listEmpty(tmpMeta10)) goto goto_2;
          tmpMeta11 = MMC_CAR(tmpMeta10);
          tmpMeta12 = MMC_CDR(tmpMeta10);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          if (!listEmpty(tmpMeta12)) goto goto_2;
          _varIdx = tmp13  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp14 = (_varIdx <= _numAuxiliaryVars);
          if (1 /* true */ != tmp14) goto goto_2;

          _var = omc_BackendVariable_getVarAt(threadData, _varArr, _varIdx);

          _eq = omc_BackendEquation_get(threadData, _eqArr, _eqIdx);

          _varCref = omc_BackendVariable_varCref(threadData, _var);

          _varExp = omc_Expression_crefExp(threadData, _varCref);

          _rhs = omc_BackendEquation_getEquationRHS(threadData, _eq);

          _lhs = omc_BackendEquation_getEquationLHS(threadData, _eq);

          _rhs = omc_ExpressionSolve_solve(threadData, _lhs, _rhs, _varExp, mmc_mk_none(), NULL);

          if(omc_Expression_isAsubExp(threadData, _rhs))
          {
            tmpMeta15 = mmc_mk_box2(3, &DAE_Operator_ADD__desc, omc_Expression_typeof(threadData, _varExp));
            _rhs = omc_List_fold1(threadData, omc_Expression_allTerms(threadData, _rhs), boxvar_Expression_makeBinaryExp, tmpMeta15, _OMC_LIT61);
          }

          _rhs = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);

          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _varCref, _rhs, mmc_mk_none());

          _updEqIdcs = arrayGet(_mt, _varIdx);

          _eqLst = omc_BackendEquation_getList(threadData, _updEqIdcs, _eqArr);

          _eqLst = omc_BackendVarTransform_replaceEquations(threadData, _eqLst, _repl, mmc_mk_none(), NULL);

          _resEqLst = omc_BackendVarTransform_replaceEquations(threadData, _resEqLst, _repl, mmc_mk_none(), NULL);

          omc_List_threadFold(threadData, _updEqIdcs, _eqLst, boxvar_BackendEquation_setAtIndexFirst, _eqArr);

          tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_varIdx), _varIdcs);
          _varIdcs = tmpMeta16;

          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_eqIdx), _eqIdcs);
          _eqIdcs = tmpMeta17;
          tmpMeta18 = mmc_mk_box3(0, _eqIdcs, _varIdcs, _resEqLst);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _tplIn;
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_simplifyNewEquations1(threadData_t *threadData, modelica_metatype _eqIdx, modelica_metatype _eqArr, modelica_metatype _varArr, modelica_metatype _m, modelica_metatype _mt, modelica_metatype _numAuxiliaryVars, modelica_metatype _shared, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _tplOut = NULL;
  tmp1 = mmc_unbox_integer(_eqIdx);
  tmp2 = mmc_unbox_integer(_numAuxiliaryVars);
  _tplOut = omc_HpcOmEqSystems_simplifyNewEquations1(threadData, tmp1, _eqArr, _varArr, _m, _mt, tmp2, _shared, _tplIn);
  /* skip box _tplOut; tuple<list<#Integer>, list<#Integer>, list<BackendDAE.Equation>> */
  return _tplOut;
}

static modelica_metatype closure9_HpcOmEqSystems_simplifyNewEquations1(threadData_t *thData, modelica_metatype closure, modelica_metatype eqIdx, modelica_metatype tplIn)
{
  modelica_metatype eqArr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype varArr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype m = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype mt = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype numAuxiliaryVars = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype shared = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_HpcOmEqSystems_simplifyNewEquations1(thData, eqIdx, eqArr, varArr, m, mt, numAuxiliaryVars, shared, tplIn);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_simplifyNewEquations(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _resEqsIn, modelica_integer _numAuxiliaryVars, modelica_integer _numIter, modelica_metatype _shared, modelica_metatype *out_varsOut, modelica_metatype *out_resEqsOut)
{
  modelica_metatype _eqsOut = NULL;
  modelica_metatype _varsOut = NULL;
  modelica_metatype _resEqsOut = NULL;
  modelica_metatype _eqArr = NULL;
  modelica_metatype _varArr = NULL;
  modelica_metatype _eqSys = NULL;
  modelica_metatype _m = NULL;
  modelica_metatype _mT = NULL;
  modelica_integer _size;
  modelica_integer _numIterNew;
  modelica_integer _numAux;
  modelica_metatype _varIdcs = NULL;
  modelica_metatype _eqIdcs = NULL;
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
  // _eqsOut has no default value.
  // _varsOut has no default value.
  // _resEqsOut has no default value.
  // _eqArr has no default value.
  // _varArr has no default value.
  // _eqSys has no default value.
  // _m has no default value.
  // _mT has no default value.
  // _size has no default value.
  // _numIterNew has no default value.
  // _numAux has no default value.
  // _varIdcs has no default value.
  // _eqIdcs has no default value.
  _eqArr = omc_BackendEquation_listEquation(threadData, _eqsIn);

  _varArr = omc_BackendVariable_listVar1(threadData, _varsIn);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqSys = omc_BackendDAEUtil_createEqSystem(threadData, _varArr, _eqArr, tmpMeta1, _OMC_LIT84, omc_BackendEquation_emptyEqns(threadData));

  _m = omc_BackendDAEUtil_adjacencyMatrix(threadData, _eqSys, _OMC_LIT9, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _shared) ,&_mT);

  _size = listLength(_eqsIn);

  /* Pattern-matching assignment */
  tmpMeta2 = mmc_mk_box6(0, _eqArr, _varArr, _m, _mT, mmc_mk_integer(_numAuxiliaryVars), _shared);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box3(0, tmpMeta3, tmpMeta4, _resEqsIn);
  tmpMeta6 = omc_List_fold(threadData, omc_List_intRange(threadData, _size), (modelica_fnptr) mmc_mk_box2(0,closure9_HpcOmEqSystems_simplifyNewEquations1,tmpMeta2), tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
  _eqIdcs = tmpMeta7;
  _varIdcs = tmpMeta8;
  _resEqsOut = tmpMeta9;

  _numAux = _numAuxiliaryVars - listLength(_varIdcs);

  if(listEmpty(_varIdcs))
  {
    _numIterNew = ((modelica_integer) 0);
  }
  else
  {
    _numIterNew = _numIter;
  }

  omc_List_intersection1OnTrue(threadData, omc_List_intRange(threadData, _size), _varIdcs, boxvar_intEq ,&_varIdcs ,NULL);

  omc_List_intersection1OnTrue(threadData, omc_List_intRange(threadData, _size), _eqIdcs, boxvar_intEq ,&_eqIdcs ,NULL);

  _eqsOut = omc_BackendEquation_getList(threadData, _eqIdcs, _eqArr);

  _varsOut = omc_List_map1(threadData, _varIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _varArr);

  if((_numIterNew != ((modelica_integer) 0)))
  {
    /* Tail recursive call */
    _eqsIn = _eqsOut;
    _varsIn = _varsOut;
    _resEqsIn = _resEqsOut;
    _numAuxiliaryVars = _numAux;
    _numIter = ((modelica_integer) -1) + _numIterNew;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
    ;
  }
  else
  {
    /* Pattern-matching assignment */
    tmpMeta10 = mmc_mk_box3(0, _eqsOut, _varsOut, _resEqsOut);
    tmpMeta11 = tmpMeta10;
    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
    tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
    tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
    _eqsOut = tmpMeta12;
    _varsOut = tmpMeta13;
    _resEqsOut = tmpMeta14;
  }
  _return: OMC_LABEL_UNUSED
  if (out_varsOut) { *out_varsOut = _varsOut; }
  if (out_resEqsOut) { *out_resEqsOut = _resEqsOut; }
  return _eqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_simplifyNewEquations(threadData_t *threadData, modelica_metatype _eqsIn, modelica_metatype _varsIn, modelica_metatype _resEqsIn, modelica_metatype _numAuxiliaryVars, modelica_metatype _numIter, modelica_metatype _shared, modelica_metatype *out_varsOut, modelica_metatype *out_resEqsOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _eqsOut = NULL;
  tmp1 = mmc_unbox_integer(_numAuxiliaryVars);
  tmp2 = mmc_unbox_integer(_numIter);
  _eqsOut = omc_HpcOmEqSystems_simplifyNewEquations(threadData, _eqsIn, _varsIn, _resEqsIn, tmp1, tmp2, _shared, out_varsOut, out_resEqsOut);
  /* skip box _eqsOut; list<BackendDAE.Equation> */
  /* skip box _varsOut; list<BackendDAE.Var> */
  /* skip box _resEqsOut; list<BackendDAE.Equation> */
  return _eqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_addDerReplacement(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2, modelica_metatype _replIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var1;
    {
      modelica_metatype _dest = NULL;
      modelica_metatype _source = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dest has no default value.
      // _source has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _source = omc_BackendVariable_varCref(threadData, _var2);

          _dest = omc_BackendVariable_varExp(threadData, _var1);

          _dest = omc_IndexReduction_makeder(threadData, _dest);
          tmpMeta1 = omc_BackendVarTransform_addReplacement(threadData, _replIn, _source, _dest, mmc_mk_none());
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _replIn;
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
  _replOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem2(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _tVarIdcs0, modelica_metatype _resEqIdcs0, modelica_metatype _innerEquations, modelica_integer _tornSysIdx, modelica_metatype *out_eqsNewOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_resEqsOut, modelica_metatype *out_matchingOut)
{
  modelica_metatype _varsNewOut = NULL;
  modelica_metatype _eqsNewOut = NULL;
  modelica_metatype _tVarsOut = NULL;
  modelica_metatype _resEqsOut = NULL;
  modelica_metatype _matchingOut = NULL;
  modelica_metatype _ass1New = NULL;
  modelica_metatype _ass2New = NULL;
  modelica_integer _size;
  modelica_integer _otherEqSize;
  modelica_integer _compSize;
  modelica_metatype _otherEqnsInts = NULL;
  modelica_metatype _otherVarsInts = NULL;
  modelica_metatype _tVarRange = NULL;
  modelica_metatype _otherVarsIntsLst = NULL;
  modelica_metatype _eqns = NULL;
  modelica_metatype _oeqns = NULL;
  modelica_metatype _matchingNew = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _compsNew = NULL;
  modelica_metatype _oComps = NULL;
  modelica_metatype _compsEqSys = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _ovars = NULL;
  modelica_metatype _derRepl = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype _reqns = NULL;
  modelica_metatype _otherEqnsLst = NULL;
  modelica_metatype _otherEqnsLstReplaced = NULL;
  modelica_metatype _hs = NULL;
  modelica_metatype _addEqLst = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _tvars = NULL;
  modelica_metatype _tvarsReplaced = NULL;
  modelica_metatype _ovarsLst = NULL;
  modelica_metatype _a_0 = NULL;
  modelica_metatype _addVarLst = NULL;
  modelica_metatype _hs_i_lst = NULL;
  modelica_metatype _a_i_lst = NULL;
  modelica_metatype _a_i_lst1 = NULL;
  modelica_metatype _g_iArr = NULL;
  modelica_metatype _hs_iArr = NULL;
  modelica_metatype _h_iArr = NULL;
  modelica_metatype _xa_iArr = NULL;
  modelica_metatype _a_iArr = NULL;
  modelica_metatype _replArr = NULL;
  modelica_metatype _tcrs = NULL;
  modelica_metatype _ovcrs = NULL;
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
  modelica_integer tmp15;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsNewOut has no default value.
  // _eqsNewOut has no default value.
  // _tVarsOut has no default value.
  // _resEqsOut has no default value.
  // _matchingOut has no default value.
  // _ass1New has no default value.
  // _ass2New has no default value.
  // _size has no default value.
  // _otherEqSize has no default value.
  // _compSize has no default value.
  // _otherEqnsInts has no default value.
  // _otherVarsInts has no default value.
  // _tVarRange has no default value.
  // _otherVarsIntsLst has no default value.
  // _eqns has no default value.
  // _oeqns has no default value.
  // _matchingNew has no default value.
  // _comps has no default value.
  // _compsNew has no default value.
  // _oComps has no default value.
  // _compsEqSys has no default value.
  // _vars has no default value.
  // _ovars has no default value.
  // _derRepl has no default value.
  // _eqLst has no default value.
  // _reqns has no default value.
  // _otherEqnsLst has no default value.
  // _otherEqnsLstReplaced has no default value.
  // _hs has no default value.
  // _addEqLst has no default value.
  // _varLst has no default value.
  // _tvars has no default value.
  // _tvarsReplaced has no default value.
  // _ovarsLst has no default value.
  // _a_0 has no default value.
  // _addVarLst has no default value.
  // _hs_i_lst has no default value.
  // _a_i_lst has no default value.
  // _a_i_lst1 has no default value.
  // _g_iArr has no default value.
  // _hs_iArr has no default value.
  // _h_iArr has no default value.
  // _xa_iArr has no default value.
  // _a_iArr has no default value.
  // _replArr has no default value.
  // _tcrs has no default value.
  // _ovcrs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _isyst;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
  _vars = tmpMeta2;
  _eqns = tmpMeta3;
  _comps = tmpMeta5;

  _eqLst = omc_BackendEquation_equationList(threadData, _eqns);

  _varLst = omc_BackendVariable_varList(threadData, _vars);

  _tvars = omc_List_map1r(threadData, _tVarIdcs0, boxvar_BackendVariable_getVarAt, _vars);

  _tvarsReplaced = omc_List_map(threadData, _tvars, boxvar_BackendVariable_transformXToXd);

  _tcrs = omc_List_map(threadData, _tvarsReplaced, boxvar_BackendVariable_varCref);

  _derRepl = omc_BackendVarTransform_emptyReplacements(threadData);

  _derRepl = omc_List_threadFold(threadData, _tvars, _tvarsReplaced, boxvar_HpcOmEqSystems_addDerReplacement, _derRepl);

  _reqns = omc_BackendEquation_getList(threadData, _resEqIdcs0, _eqns);

  _reqns = omc_BackendEquation_replaceDerOpInEquationList(threadData, _reqns);

  _otherEqnsInts = omc_List_map__3(threadData, _innerEquations, boxvar_BackendDAEUtil_getEqnAndVarsFromInnerEquation ,&_otherVarsIntsLst ,NULL);

  _otherEqnsLst = omc_BackendEquation_getList(threadData, _otherEqnsInts, _eqns);

  _oeqns = omc_BackendEquation_listEquation(threadData, _otherEqnsLst);

  _otherEqnsLstReplaced = omc_BackendEquation_replaceDerOpInEquationList(threadData, _otherEqnsLst);

  _otherVarsInts = omc_List_unionList(threadData, _otherVarsIntsLst);

  _ovarsLst = omc_List_map1r(threadData, _otherVarsInts, boxvar_BackendVariable_getVarAt, _vars);

  _ovarsLst = omc_List_map(threadData, _ovarsLst, boxvar_BackendVariable_transformXToXd);

  _ovars = omc_BackendVariable_listVar1(threadData, _ovarsLst);

  _ovcrs = omc_List_map(threadData, _ovarsLst, boxvar_BackendVariable_varCref);

  _size = listLength(_tvars);

  _otherEqSize = listLength(_otherEqnsLst);

  _compSize = listLength(_comps);

  _tVarRange = omc_List_intRange2(threadData, ((modelica_integer) 0), _size);

  _replArr = arrayCreate(((modelica_integer) 1) + _size, omc_BackendVarTransform_emptyReplacements(threadData));

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _g_iArr = arrayCreate(((modelica_integer) 1) + _size, tmpMeta6);

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _h_iArr = arrayCreate(((modelica_integer) 1) + _size, tmpMeta7);

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _hs_iArr = arrayCreate(((modelica_integer) 1) + _size, tmpMeta8);

  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _xa_iArr = arrayCreate(((modelica_integer) 1) + _size, tmpMeta9);

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _a_iArr = arrayCreate(((modelica_integer) 1) + _size, tmpMeta10);

  _g_iArr = omc_HpcOmEqSystems_getAlgebraicEquationsForEI(threadData, _tVarRange, _size, _otherEqnsLstReplaced, _tvarsReplaced, _tcrs, _ovarsLst, _ovcrs, _g_iArr, _xa_iArr, _replArr, _tornSysIdx ,&_xa_iArr ,&_replArr);

  _h_iArr = omc_HpcOmEqSystems_getResidualExpressions(threadData, _tVarRange, _reqns, _replArr, _h_iArr);

  _hs_iArr = omc_HpcOmEqSystems_getTornSystemCoefficients(threadData, _tVarRange, _size, _tornSysIdx, _h_iArr, _hs_iArr, _a_iArr ,&_a_iArr);

  _a_i_lst = arrayList(_a_iArr);

  _hs_i_lst = arrayList(_hs_iArr);

  _eqsNewOut = omc_List_flatten(threadData, listAppend(arrayList(_g_iArr), _hs_i_lst));

  _varsNewOut = omc_List_flatten(threadData, listAppend(arrayList(_xa_iArr), _a_i_lst));

  /* Pattern-matching assignment */
  tmpMeta11 = _a_i_lst;
  if (listEmpty(tmpMeta11)) MMC_THROW_INTERNAL();
  tmpMeta12 = MMC_CAR(tmpMeta11);
  tmpMeta13 = MMC_CDR(tmpMeta11);
  _a_0 = tmpMeta12;
  _a_i_lst1 = tmpMeta13;

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _hs = omc_HpcOmEqSystems_buildNewResidualEquation(threadData, ((modelica_integer) 1), _a_i_lst1, _a_0, _tvarsReplaced, tmpMeta14);

  _tVarsOut = _tvarsReplaced;

  _resEqsOut = _hs;

  {
    modelica_integer __omcQ_24tmpVar7;
    modelica_integer __omcQ_24tmpVar6;
    modelica_integer tmp16;
    modelica_metatype _l_loopVar = 0;
    modelica_integer tmp17;
    modelica_metatype _l;
    _l_loopVar = _xa_iArr;
    tmp17 = 1;
    __omcQ_24tmpVar7 = ((modelica_integer) 0); /* defaultValue */
    while(1) {
      tmp16 = 1;
      if (tmp17 <= arrayLength(_l_loopVar)) {
        _l = arrayGet(_l_loopVar, tmp17++);
        tmp16--;
      }
      if (tmp16 == 0) {
        __omcQ_24tmpVar6 = listLength(_l);
        __omcQ_24tmpVar7 = __omcQ_24tmpVar7 + __omcQ_24tmpVar6;
      } else if (tmp16 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp15 = __omcQ_24tmpVar7;
  }
  _eqsNewOut = omc_HpcOmEqSystems_simplifyNewEquations(threadData, _eqsNewOut, _varsNewOut, _resEqsOut, tmp15, ((modelica_integer) 2), _ishared ,&_varsNewOut ,&_resEqsOut);

  _compsEqSys = omc_HpcOmEqSystems_buildEqSystemComponent(threadData, _resEqIdcs0, _tVarIdcs0, _resEqsOut, _tVarsOut, _a_iArr, _ishared ,&_resEqsOut ,&_tVarsOut ,&_addEqLst ,&_addVarLst);

  _resEqsOut = omc_BackendVarTransform_replaceEquations(threadData, _resEqsOut, _derRepl, mmc_mk_none(), NULL);

  _eqsNewOut = listAppend(_eqsNewOut, _addEqLst);

  _varsNewOut = listAppend(_varsNewOut, _addVarLst);

  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
  _matchingNew = omc_HpcOmEqSystems_buildSingleEquationSystem(threadData, _compSize, _eqsNewOut, _varsNewOut, _ishared, tmpMeta18);

  /* Pattern-matching assignment */
  tmpMeta19 = _matchingNew;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 4));
  _ass1New = tmpMeta20;
  _ass2New = tmpMeta21;
  _compsNew = tmpMeta22;

  _compsNew = omc_List_map2(threadData, _compsNew, boxvar_HpcOmEqSystems_updateIndicesInComp, mmc_mk_integer(listLength(_varLst)), mmc_mk_integer(listLength(_eqLst)));

  _oComps = listAppend(_compsNew, _compsEqSys);

  tmpMeta23 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1New, _ass2New, _oComps);
  _matchingOut = tmpMeta23;
  _return: OMC_LABEL_UNUSED
  if (out_eqsNewOut) { *out_eqsNewOut = _eqsNewOut; }
  if (out_tVarsOut) { *out_tVarsOut = _tVarsOut; }
  if (out_resEqsOut) { *out_resEqsOut = _resEqsOut; }
  if (out_matchingOut) { *out_matchingOut = _matchingOut; }
  return _varsNewOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem2(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _tVarIdcs0, modelica_metatype _resEqIdcs0, modelica_metatype _innerEquations, modelica_metatype _tornSysIdx, modelica_metatype *out_eqsNewOut, modelica_metatype *out_tVarsOut, modelica_metatype *out_resEqsOut, modelica_metatype *out_matchingOut)
{
  modelica_integer tmp1;
  modelica_metatype _varsNewOut = NULL;
  tmp1 = mmc_unbox_integer(_tornSysIdx);
  _varsNewOut = omc_HpcOmEqSystems_reduceLinearTornSystem2(threadData, _isyst, _ishared, _tVarIdcs0, _resEqIdcs0, _innerEquations, tmp1, out_eqsNewOut, out_tVarsOut, out_resEqsOut, out_matchingOut);
  /* skip box _varsNewOut; list<BackendDAE.Var> */
  /* skip box _eqsNewOut; list<BackendDAE.Equation> */
  /* skip box _tVarsOut; list<BackendDAE.Var> */
  /* skip box _resEqsOut; list<BackendDAE.Equation> */
  /* skip box _matchingOut; BackendDAE.Matching */
  return _varsNewOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_replaceIndecesInComp(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _eqMap, modelica_metatype _varMap)
{
  modelica_metatype _compOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      modelica_integer _eqn;
      modelica_integer _var;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _var has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _eqn = tmp7  /* pattern as ty=Integer */;
          _var = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _eqn = mmc_unbox_integer(arrayGet(_eqMap, _eqn));

          _var = mmc_unbox_integer(arrayGet(_varMap, _var));
          tmpMeta10 = mmc_mk_box3(3, &BackendDAE_StrongComponent_SINGLEEQUATION__desc, mmc_mk_integer(_eqn), mmc_mk_integer(_var));
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
  _compOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _compOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_matchComponent(threadData_t *threadData, modelica_metatype _eqLstIn, modelica_metatype _varLstIn, modelica_metatype _eqIdcs, modelica_metatype _varIdcs, modelica_metatype _sharedIn)
{
  modelica_metatype _compsOut = NULL;
  modelica_metatype _matching = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _compsOut has no default value.
  // _matching has no default value.
  // _comps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _matching = omc_HpcOmEqSystems_buildSingleEquationSystem(threadData, listLength(_eqLstIn), _eqLstIn, _varLstIn, _sharedIn, tmpMeta1);

  /* Pattern-matching assignment */
  tmpMeta2 = _matching;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,3) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  _comps = tmpMeta3;

  _compsOut = omc_List_map2(threadData, _comps, boxvar_HpcOmEqSystems_replaceIndecesInComp, listArray(_eqIdcs), listArray(_varIdcs));
  _return: OMC_LABEL_UNUSED
  return _compsOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmEqSystems_updateAssignmentsByComp(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _ass1, modelica_metatype _ass2)
{
  modelica_integer _eqn;
  modelica_integer _var;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn has no default value.
  // _var has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _comp;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _eqn = tmp3  /* pattern as ty=Integer */;
  _var = tmp5  /* pattern as ty=Integer */;

  arrayUpdate(_ass2, _eqn, mmc_mk_integer(_var));

  arrayUpdate(_ass1, _var, mmc_mk_integer(_eqn));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmEqSystems_compHasDummyState(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _syst)
{
  modelica_boolean _hasDummy;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _hasDummy has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comp;
    tmp4_2 = _syst;
    {
      modelica_boolean _b;
      modelica_metatype _vars = NULL;
      modelica_metatype _varIdcs = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _vars has no default value.
      // _varIdcs has no default value.
      // _varLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _varIdcs = tmpMeta7;
          _vars = tmpMeta8;
          /* Pattern matching succeeded */
          _varLst = omc_List_map1(threadData, _varIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _vars);

          _b = mmc_unbox_boolean(omc_List_fold(threadData, omc_List_map(threadData, _varLst, boxvar_BackendVariable_isDummyStateVar), boxvar_boolOr, mmc_mk_boolean(0 /* false */)));
          tmp1 = (_b && (listLength(_varIdcs) > ((modelica_integer) 1)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _varIdcs = tmpMeta9;
          _vars = tmpMeta10;
          /* Pattern matching succeeded */
          _varLst = omc_List_map1(threadData, _varIdcs, boxvar_BackendVariable_getVarAtIndexFirst, _vars);
          tmp1 = mmc_unbox_boolean(omc_List_fold(threadData, omc_List_map(threadData, _varLst, boxvar_BackendVariable_isDummyStateVar), boxvar_boolOr, mmc_mk_boolean(0 /* false */)));
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
  _hasDummy = tmp1;
  _return: OMC_LABEL_UNUSED
  return _hasDummy;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_compHasDummyState(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _syst)
{
  modelica_boolean _hasDummy;
  modelica_metatype out_hasDummy;
  _hasDummy = omc_HpcOmEqSystems_compHasDummyState(threadData, _comp, _syst);
  out_hasDummy = mmc_mk_icon(_hasDummy);
  return out_hasDummy;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData_t *threadData, modelica_integer _compIdx, modelica_metatype _compsIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_integer _tornSysIdxIn, modelica_integer *out_tornSysIdxOut)
{
  modelica_metatype _systOut = NULL;
  modelica_integer _tornSysIdxOut;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _systOut has no default value.
  // _tornSysIdxOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _systIn;
    {
      modelica_integer _numNewSingleEqs;
      modelica_boolean _linear;
      modelica_metatype _ass1New = NULL;
      modelica_metatype _ass2New = NULL;
      modelica_metatype _ass1All = NULL;
      modelica_metatype _ass2All = NULL;
      modelica_metatype _tvarIdcs = NULL;
      modelica_metatype _resEqIdcs = NULL;
      modelica_metatype _eqIdcs = NULL;
      modelica_metatype _varIdcs = NULL;
      modelica_metatype _innerEquations = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _hpcSyst = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _matching = NULL;
      modelica_metatype _matchingNew = NULL;
      modelica_metatype _matchingOther = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _compsNew = NULL;
      modelica_metatype _compsTmp = NULL;
      modelica_metatype _otherComps = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _derRepl = NULL;
      modelica_metatype _eqLst = NULL;
      modelica_metatype _eqsNew = NULL;
      modelica_metatype _eqsOld = NULL;
      modelica_metatype _resEqs = NULL;
      modelica_metatype _addEqs = NULL;
      modelica_metatype _varLst = NULL;
      modelica_metatype _varLstRepl = NULL;
      modelica_metatype _varsNew = NULL;
      modelica_metatype _varsOld = NULL;
      modelica_metatype _addVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numNewSingleEqs has no default value.
      // _linear has no default value.
      // _ass1New has no default value.
      // _ass2New has no default value.
      // _ass1All has no default value.
      // _ass2All has no default value.
      // _tvarIdcs has no default value.
      // _resEqIdcs has no default value.
      // _eqIdcs has no default value.
      // _varIdcs has no default value.
      // _innerEquations has no default value.
      // _syst has no default value.
      // _hpcSyst has no default value.
      // _eqs has no default value.
      // _matching has no default value.
      // _matchingNew has no default value.
      // _matchingOther has no default value.
      // _comp has no default value.
      // _compsNew has no default value.
      // _compsTmp has no default value.
      // _otherComps has no default value.
      // _vars has no default value.
      // _derRepl has no default value.
      // _eqLst has no default value.
      // _eqsNew has no default value.
      // _eqsOld has no default value.
      // _resEqs has no default value.
      // _addEqs has no default value.
      // _varLst has no default value.
      // _varLstRepl has no default value.
      // _varsNew has no default value.
      // _varsOld has no default value.
      // _addVars has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (listLength(_compsIn) < _compIdx);
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta[0+0] = _systIn;
          tmp1_c1 = _tornSysIdxIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          modelica_boolean tmp16;
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
          
          _syst = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (listLength(_compsIn) >= _compIdx);
          if (1 /* true */ != tmp7) goto goto_2;

          _comp = listGet(_compsIn, _compIdx);

          /* Pattern-matching assignment */
          tmpMeta8 = _comp;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,7,4) == 0) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _tvarIdcs = tmpMeta10;
          _resEqIdcs = tmpMeta11;
          _innerEquations = tmpMeta12;
          _linear = tmp14  /* pattern as ty=Boolean */;

          /* Pattern-matching assignment */
          tmp15 = _linear;
          if (1 /* true */ != tmp15) goto goto_2;

          /* Pattern-matching assignment */
          tmp16 = (listLength(_tvarIdcs) <= omc_Flags_getConfigInt(threadData, _OMC_LIT97));
          if (1 /* true */ != tmp16) goto goto_2;

          _varsNew = omc_HpcOmEqSystems_reduceLinearTornSystem2(threadData, _systIn, _sharedIn, _tvarIdcs, _resEqIdcs, _innerEquations, _tornSysIdxIn ,&_eqsNew ,NULL ,&_resEqs ,&_matchingNew);

          /* Pattern-matching assignment */
          tmpMeta17 = _matchingNew;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,1,3) == 0) goto goto_2;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 3));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 4));
          _ass1New = tmpMeta18;
          _ass2New = tmpMeta19;
          _compsNew = tmpMeta20;

          _varsOld = omc_BackendVariable_varList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))));

          _eqsOld = omc_BackendEquation_equationList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))));

          _varLst = listAppend(_varsOld, _varsNew);

          _eqLst = listAppend(_eqsOld, _eqsNew);

          _eqLst = omc_List_fold2(threadData, omc_List_intRange(threadData, listLength(_resEqIdcs)), boxvar_HpcOmEqSystems_replaceAtPositionFromList, _resEqs, _resEqIdcs, _eqLst);

          tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = omc_BackendVariable_listVar1(threadData, _varLst);
          _syst = tmpMeta21;

          tmpMeta22 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta22), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta22))[3] = omc_BackendEquation_listEquation(threadData, _eqLst);
          _syst = tmpMeta22;

          _ass1All = arrayCreate(listLength(_varLst), mmc_mk_integer(((modelica_integer) -1)));

          _ass2All = arrayCreate(listLength(_varLst), mmc_mk_integer(((modelica_integer) -1)));

          _ass1All = omc_Array_copy(threadData, _ass1, _ass1All);

          _ass2All = omc_Array_copy(threadData, _ass2, _ass2All);

          /* Pattern-matching assignment */
          tmpMeta23 = mmc_mk_box2(0, _ass1All, _ass2All);
          tmpMeta24 = omc_List_fold2(threadData, omc_List_intRange(threadData, listLength(_tvarIdcs)), boxvar_HpcOmEqSystems_updateResidualMatching, _tvarIdcs, _resEqIdcs, tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          _ass1All = tmpMeta25;
          _ass2All = tmpMeta26;

          _matchingOther = omc_HpcOmEqSystems_getOtherComps(threadData, _innerEquations, _ass1All, _ass2All);

          /* Pattern-matching assignment */
          tmpMeta27 = _matchingOther;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,1,3) == 0) goto goto_2;
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 4));
          _otherComps = tmpMeta28;

          _numNewSingleEqs = listLength(_compsNew) - listLength(_tvarIdcs);

          _compsTmp = omc_List_replaceAtWithList(threadData, listAppend(_compsNew, _otherComps), ((modelica_integer) -1) + _compIdx, _compsIn);

          /* Pattern-matching assignment */
          tmpMeta29 = mmc_mk_box2(0, mmc_mk_integer(listLength(_eqsOld)), mmc_mk_integer(listLength(_varsOld)));
          tmpMeta30 = mmc_mk_box2(0, _ass1New, _ass2New);
          tmpMeta31 = mmc_mk_box2(0, _ass1All, _ass2All);
          tmpMeta32 = omc_List_fold2(threadData, omc_List_intRange(threadData, arrayLength(_ass1New)), boxvar_HpcOmEqSystems_updateMatching, tmpMeta29, tmpMeta30, tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          _ass1All = tmpMeta33;
          _ass2All = tmpMeta34;

          tmpMeta36 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1All, _ass2All, _compsTmp);
          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[7] = tmpMeta36;
          _syst = tmpMeta35;

          _syst = omc_BackendDAEUtil_setEqSystMatrices(threadData, _syst, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());

          _syst = omc_BackendDAEUtil_getAdjacencyMatrix(threadData, _syst, _OMC_LIT85, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _sharedIn), NULL, NULL);
          tmpMeta[0+0] = omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData, ((modelica_integer) 1) + _compIdx + _numNewSingleEqs, _compsTmp, _ass1All, _ass2All, _syst, _sharedIn, ((modelica_integer) 1) + _tornSysIdxIn, &tmp1_c1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_boolean tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_boolean tmp43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _syst = tmp4_1;
          _vars = tmpMeta37;
          _eqs = tmpMeta38;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp39 = (listLength(_compsIn) >= _compIdx);
          if (1 /* true */ != tmp39) goto goto_2;

          _comp = listGet(_compsIn, _compIdx);

          /* Pattern-matching assignment */
          tmpMeta40 = _comp;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta40,1,5) == 0) goto goto_2;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 3));
          _eqIdcs = tmpMeta41;
          _varIdcs = tmpMeta42;

          /* Pattern-matching assignment */
          tmp43 = (listLength(_varIdcs) <= ((modelica_integer) 2));
          if (1 /* true */ != tmp43) goto goto_2;

          _eqLst = omc_BackendEquation_getList(threadData, _eqIdcs, _eqs);

          _eqLst = omc_BackendEquation_replaceDerOpInEquationList(threadData, _eqLst);

          _varLst = omc_List_map1r(threadData, _varIdcs, boxvar_BackendVariable_getVarAt, _vars);

          _varLstRepl = omc_List_map(threadData, _varLst, boxvar_BackendVariable_transformXToXd);

          _derRepl = omc_BackendVarTransform_emptyReplacements(threadData);

          _derRepl = omc_List_threadFold(threadData, _varLst, _varLstRepl, boxvar_HpcOmEqSystems_addDerReplacement, _derRepl);

          _hpcSyst = omc_HpcOmEqSystems_getEqSystem(threadData, _eqLst, _varLstRepl);

          _eqsNew = omc_HpcOmEqSystems_CramerRule(threadData, _hpcSyst ,&_addEqs ,&_addVars);

          _eqsNew = omc_BackendVarTransform_replaceEquations(threadData, _eqsNew, _derRepl, mmc_mk_none(), NULL);

          _varsOld = omc_BackendVariable_varList(threadData, _vars);

          _eqsOld = omc_BackendEquation_equationList(threadData, _eqs);

          _compsNew = omc_HpcOmEqSystems_matchComponent(threadData, _eqsNew, _varLstRepl, _eqIdcs, _varIdcs, _sharedIn);

          _otherComps = omc_HpcOmEqSystems_matchComponent(threadData, _addEqs, _addVars, omc_List_intRange2(threadData, ((modelica_integer) 1) + listLength(_eqsOld), ((modelica_integer) 1) + listLength(_eqsOld) + listLength(_addEqs)), omc_List_intRange2(threadData, ((modelica_integer) 1) + listLength(_varsOld), ((modelica_integer) 1) + listLength(_varsOld) + listLength(_addVars)), _sharedIn);

          _compsNew = listAppend(_otherComps, _compsNew);

          _compsTmp = omc_List_replaceAtWithList(threadData, _compsNew, ((modelica_integer) -1) + _compIdx, _compsIn);

          _eqLst = listAppend(_eqsOld, _addEqs);

          _varLst = listAppend(_varsOld, _addVars);

          _eqLst = omc_List_fold2(threadData, omc_List_intRange(threadData, listLength(_eqsNew)), boxvar_HpcOmEqSystems_replaceAtPositionFromList, _eqsNew, _eqIdcs, _eqLst);

          tmpMeta44 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta44), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta44))[3] = omc_BackendEquation_listEquation(threadData, _eqLst);
          _syst = tmpMeta44;

          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[2] = omc_BackendVariable_listVar1(threadData, _varLst);
          _syst = tmpMeta45;

          _ass1All = arrayCreate(listLength(_varLst), mmc_mk_integer(((modelica_integer) -1)));

          _ass2All = arrayCreate(listLength(_varLst), mmc_mk_integer(((modelica_integer) -1)));

          _ass1All = omc_Array_copy(threadData, _ass1, _ass1All);

          _ass2All = omc_Array_copy(threadData, _ass2, _ass2All);

          omc_List_map2__0(threadData, _compsNew, boxvar_HpcOmEqSystems_updateAssignmentsByComp, _ass1All, _ass2All);

          tmpMeta47 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1All, _ass2All, _compsTmp);
          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_syst), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[7] = tmpMeta47;
          _syst = tmpMeta46;

          _syst = omc_BackendDAEUtil_setEqSystMatrices(threadData, _syst, mmc_mk_none(), mmc_mk_none(), mmc_mk_none());
          tmpMeta[0+0] = omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData, ((modelica_integer) 1) + _compIdx, _compsTmp, _ass1All, _ass2All, _syst, _sharedIn, ((modelica_integer) 1) + _tornSysIdxIn, &tmp1_c1);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData, ((modelica_integer) 1) + _compIdx, _compsIn, _ass1, _ass2, _systIn, _sharedIn, _tornSysIdxIn, &tmp1_c1);
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
  _systOut = tmpMeta[0+0];
  _tornSysIdxOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_tornSysIdxOut) { *out_tornSysIdxOut = _tornSysIdxOut; }
  return _systOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem1(threadData_t *threadData, modelica_metatype _compIdx, modelica_metatype _compsIn, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_metatype _tornSysIdxIn, modelica_metatype *out_tornSysIdxOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _tornSysIdxOut;
  modelica_metatype _systOut = NULL;
  tmp1 = mmc_unbox_integer(_compIdx);
  tmp2 = mmc_unbox_integer(_tornSysIdxIn);
  _systOut = omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData, tmp1, _compsIn, _ass1, _ass2, _systIn, _sharedIn, tmp2, &_tornSysIdxOut);
  /* skip box _systOut; BackendDAE.EqSystem */
  if (out_tornSysIdxOut) { *out_tornSysIdxOut = mmc_mk_icon(_tornSysIdxOut); }
  return _systOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmEqSystems_reduceLinearTornSystem(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_integer _tornSysIdxIn, modelica_integer *out_tornSysIdxOut)
{
  modelica_metatype _systOut = NULL;
  modelica_integer _tornSysIdxOut;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _systOut has no default value.
  // _tornSysIdxOut has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _allComps = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _allComps has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta6 = _systIn;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto goto_2;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          _ass1 = tmpMeta8;
          _ass2 = tmpMeta9;
          _allComps = tmpMeta10;
          tmpMeta[0+0] = omc_HpcOmEqSystems_reduceLinearTornSystem1(threadData, ((modelica_integer) 1), _allComps, _ass1, _ass2, _systIn, _sharedIn, _tornSysIdxIn, &tmp1_c1);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT98),stdout);
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
  _systOut = tmpMeta[0+0];
  _tornSysIdxOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_tornSysIdxOut) { *out_tornSysIdxOut = _tornSysIdxOut; }
  return _systOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmEqSystems_reduceLinearTornSystem(threadData_t *threadData, modelica_metatype _systIn, modelica_metatype _sharedIn, modelica_metatype _tornSysIdxIn, modelica_metatype *out_tornSysIdxOut)
{
  modelica_integer tmp1;
  modelica_integer _tornSysIdxOut;
  modelica_metatype _systOut = NULL;
  tmp1 = mmc_unbox_integer(_tornSysIdxIn);
  _systOut = omc_HpcOmEqSystems_reduceLinearTornSystem(threadData, _systIn, _sharedIn, tmp1, &_tornSysIdxOut);
  /* skip box _systOut; BackendDAE.EqSystem */
  if (out_tornSysIdxOut) { *out_tornSysIdxOut = mmc_mk_icon(_tornSysIdxOut); }
  return _systOut;
}

DLLDirection
modelica_metatype omc_HpcOmEqSystems_partitionLinearTornSystem(threadData_t *threadData, modelica_metatype _daeIn)
{
  modelica_metatype _daeOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _daeIn;
    {
      modelica_metatype _eqs = NULL;
      modelica_metatype _shared = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqs has no default value.
      // _shared has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _eqs = tmpMeta6;
          _shared = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (omc_Flags_getConfigInt(threadData, _OMC_LIT97) > ((modelica_integer) 0));
          if (1 /* true */ != tmp8) goto goto_2;

          _eqs = omc_List_map1Fold(threadData, _eqs, boxvar_HpcOmEqSystems_reduceLinearTornSystem, _shared, mmc_mk_integer(((modelica_integer) 1)), NULL);
          tmpMeta9 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqs, _shared);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _daeIn;
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
  _daeOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _daeOut;
}

