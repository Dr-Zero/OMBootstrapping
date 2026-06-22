#include "omc_simulation_settings.h"
#include "EvaluateFunctions.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT2,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT3,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,4) {&BackendDAE_EquationKind_DYNAMIC__EQUATION__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT5,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "der"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,3,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,3) {&BackendDAE_VarKind_VARIABLE__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,1,3) {&DAE_Else_NOELSE__desc,}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "collectReplacements failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,27,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "--> the predicted const outputs:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,33,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "evalFuncDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,12,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "dumps debug information about the function evaluation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,53,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT14,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,1,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "the array cref before\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,22,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "update getScalarsForComplexVar for enumerations: the enum cref is :"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,67,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "update getScalarsForComplexVar for tuple types: the tupl cref is :\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,67,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "expType failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,20,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "equationToStmt failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,27,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " check getStatementLHS for WHEN!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,33,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "getStatementLHS update for TERMINATE!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,38,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "getStatementLHS update for REINIT!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,35,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "getStatementLHS update for RETURN!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,35,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "getStatementLHS update for BREAK!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,34,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "getStatementLHS update for ARRAY_INIT!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,39,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "getStatementLHS update for !\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,29,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "equationToStatement failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,28,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "-->try to check if its the elseif case\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,39,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "-->try to check if its the if case\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,35,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "-->is the if const? "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,20,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "true"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,4,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "false"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,5,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data " and is it the if case ? "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,25,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "-->try to check if its another case\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,36,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "-->is it an other case? "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,24,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "evaluateIfStatement failed \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,28,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,3) {&DAE_Type_T__INTEGER__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "For-loop evaluation is skipped, since the first loop evaluated nothing.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,72,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "assignment:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,12,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "evaluated assignment to:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,25,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Array assignment:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,18,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "evaluated array assignment to:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,31,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "IF-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,14,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "-->try to predict the outputs \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,31,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "could it be predicted? "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,23,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "evaluated IF-statements to:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,28,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,2,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "Tuple-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,17,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "--> is the tuple const? "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,24,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "evaluated Tuple-statements to (incl. addEqs):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,46,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "For-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,15,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "evaluated for-statements to:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,29,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "While-statement (not evaluated):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,33,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "evaluated While-statement to:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,30,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "WARNING: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,9,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,6) {&DAE_Exp_BCONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "AssertionLevel.warning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,22,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "ERROR: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,7,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "AssertionLevel.error"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,20,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "assert-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,18,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "terminate-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,21,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "reinit-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,18,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "noretcall-statement (not evaluated):\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,37,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "return-statement:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,18,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "generateConstEqs failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,25,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,1,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "_eval"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,5,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "EvaluateFunctions.updateFunctionBody failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,43,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/EvaluateFunctions.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,80,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT75_6,1.782113391e9);
#define _OMC_LIT75_6 MMC_REFREALLIT(_OMC_LIT_STRUCT75_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT74,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1550)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1550)),MMC_IMMEDIATE(MMC_TAGFIXNUM(69)),_OMC_LIT75_6}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,1,4) {&DAE_VarVisibility_PROTECTED__desc,}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,1,5) {&DAE_VarDirection_BIDIR__desc,}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "generateProtectedElements failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,34,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
#define _OMC_LIT79_data "generateOutputElements failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT79,31,_OMC_LIT79_data);
#define _OMC_LIT79 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "checkIfOutputIsEvaluatedConstant failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,41,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "A partially constant array needs expansion. Thats not supported.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,65,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "buildVariableFunctionParts failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,35,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "\n scalarOutputs \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,17,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "\n constScalarCrefs \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,20,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "\n allOutputs \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,14,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "\n lhsExpIn \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,12,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "\nStart function evaluation of:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,31,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data " := "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,4,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "THIS FUNCTION CALL WITH THIS SPECIFIC SIGNATURE CANNOT BE EVALUTED\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,67,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "Its a Built-In!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,16,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "Its a Record!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,14,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "the function output is not constant in any case\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,48,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "the function output is completely constant\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,43,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "the function output is completely constant but there is an assertion\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,69,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "the evaluated function is not used because there is a return or a terminate or a reinit statement\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,98,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "Finish evaluation of:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,22,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "\nto:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,5,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "including the additional equations:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,36,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "\nStart constant evaluation of expression: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,42,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "\nIts a record.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,15,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "\nevaluated to: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,15,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "this is an array equation. update evalFunctions_findFuncs\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,58,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "evalRecursionLimit"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,18,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT105,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(256))}};
#define _OMC_LIT105 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "The recursion limit used when evaluating constant function calls."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,65,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(118)),_OMC_LIT103,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT104,_OMC_LIT105,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT106}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT108,1,3) {&EvaluateFunctions_Variability_CONST__desc,}};
#define _OMC_LIT108 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT108)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT109,1,4) {&EvaluateFunctions_Variability_VARIABLE__desc,}};
#define _OMC_LIT109 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "evalFunc.getCallSignatureForCall failed for :\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,46,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "CONST"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,5,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "VARIABLE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,8,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,1,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "[ "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,2,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,3,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data " ] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,3,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#include "util/modelica.h"

#include "EvaluateFunctions_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeBackendEquation(threadData_t *threadData, modelica_metatype _ls, modelica_metatype _rs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeBackendEquation,2,0) {(void*) boxptr_EvaluateFunctions_makeBackendEquation,0}};
#define boxvar_EvaluateFunctions_makeBackendEquation MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeBackendEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_convertTupleEquations(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _addEqsIn, modelica_metatype *out_addEqsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_convertTupleEquations,2,0) {(void*) boxptr_EvaluateFunctions_convertTupleEquations,0}};
#define boxvar_EvaluateFunctions_convertTupleEquations MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_convertTupleEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_findDerVarCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_findDerVarCrefs,2,0) {(void*) boxptr_EvaluateFunctions_findDerVarCrefs,0}};
#define boxvar_EvaluateFunctions_findDerVarCrefs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_findDerVarCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setVarKindForStates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setVarKindForStates,2,0) {(void*) boxptr_EvaluateFunctions_setVarKindForStates,0}};
#define boxvar_EvaluateFunctions_setVarKindForStates MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setVarKindForStates)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_varSSisPreferOrHigher(threadData_t *threadData, modelica_metatype _varIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_varSSisPreferOrHigher(threadData_t *threadData, modelica_metatype _varIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_varSSisPreferOrHigher,2,0) {(void*) boxptr_EvaluateFunctions_varSSisPreferOrHigher,0}};
#define boxvar_EvaluateFunctions_varSSisPreferOrHigher MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_varSSisPreferOrHigher)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateVarKinds__eqSys(threadData_t *threadData, modelica_metatype _sysIn, modelica_metatype _shared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateVarKinds__eqSys,2,0) {(void*) boxptr_EvaluateFunctions_updateVarKinds__eqSys,0}};
#define boxvar_EvaluateFunctions_updateVarKinds__eqSys MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateVarKinds__eqSys)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateVarKinds(threadData_t *threadData, modelica_metatype _inDAE);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateVarKinds,2,0) {(void*) boxptr_EvaluateFunctions_updateVarKinds,0}};
#define boxvar_EvaluateFunctions_updateVarKinds MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateVarKinds)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeAssignment,2,0) {(void*) boxptr_EvaluateFunctions_makeAssignment,0}};
#define boxvar_EvaluateFunctions_makeAssignment MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeAssignmentMap(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeAssignmentMap,2,0) {(void*) boxptr_EvaluateFunctions_makeAssignmentMap,0}};
#define boxvar_EvaluateFunctions_makeAssignmentMap MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeAssignmentMap)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_compareConstantExps2(threadData_t *threadData, modelica_integer _idx, modelica_metatype _expLstLst, modelica_metatype __omcQ_24in_5Fpos);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_compareConstantExps2(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _expLstLst, modelica_metatype __omcQ_24in_5Fpos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_compareConstantExps2,2,0) {(void*) boxptr_EvaluateFunctions_compareConstantExps2,0}};
#define boxvar_EvaluateFunctions_compareConstantExps2 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_compareConstantExps2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_compareConstantExps(threadData_t *threadData, modelica_metatype _expLstLstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_compareConstantExps,2,0) {(void*) boxptr_EvaluateFunctions_compareConstantExps,0}};
#define boxvar_EvaluateFunctions_compareConstantExps MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_compareConstantExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateStatementsInElse(threadData_t *threadData, modelica_metatype _stmtLstIn, modelica_metatype _origElse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateStatementsInElse,2,0) {(void*) boxptr_EvaluateFunctions_updateStatementsInElse,0}};
#define boxvar_EvaluateFunctions_updateStatementsInElse MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateStatementsInElse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateStatementsInIfStmt(threadData_t *threadData, modelica_metatype _stmtLstIn, modelica_metatype _origIf);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateStatementsInIfStmt,2,0) {(void*) boxptr_EvaluateFunctions_updateStatementsInIfStmt,0}};
#define boxvar_EvaluateFunctions_updateStatementsInIfStmt MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateStatementsInIfStmt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getOnlyConstantReplacements(threadData_t *threadData, modelica_metatype _replIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getOnlyConstantReplacements,2,0) {(void*) boxptr_EvaluateFunctions_getOnlyConstantReplacements,0}};
#define boxvar_EvaluateFunctions_getOnlyConstantReplacements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getOnlyConstantReplacements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_collectReplacements1(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _replIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_collectReplacements1,2,0) {(void*) boxptr_EvaluateFunctions_collectReplacements1,0}};
#define boxvar_EvaluateFunctions_collectReplacements1 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_collectReplacements1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_collectReplacements(threadData_t *threadData, modelica_metatype _stmtsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_collectReplacements,2,0) {(void*) boxptr_EvaluateFunctions_collectReplacements,0}};
#define boxvar_EvaluateFunctions_collectReplacements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_collectReplacements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_predictIfOutput(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _infoIn, modelica_integer _recursionLimit, modelica_metatype *out_infoOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_predictIfOutput(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _infoIn, modelica_metatype _recursionLimit, modelica_metatype *out_infoOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_predictIfOutput,2,0) {(void*) boxptr_EvaluateFunctions_predictIfOutput,0}};
#define boxvar_EvaluateFunctions_predictIfOutput MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_predictIfOutput)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _elseStmtsLstIn, modelica_metatype _replIn, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Fidx, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_integer *out_idx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _elseStmtsLstIn, modelica_metatype _replIn, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateAllStatements,2,0) {(void*) boxptr_EvaluateFunctions_evaluateFunctions__updateAllStatements,0}};
#define boxvar_EvaluateFunctions_evaluateFunctions__updateAllStatements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateAllStatements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl(threadData_t *threadData, modelica_metatype _algsIn, modelica_metatype _inFuncTree, modelica_integer _inIndex, modelica_integer _recursionLimit, modelica_metatype *out_outFuncTree, modelica_integer *out_outIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl(threadData_t *threadData, modelica_metatype _algsIn, modelica_metatype _inFuncTree, modelica_metatype _inIndex, modelica_metatype _recursionLimit, modelica_metatype *out_outFuncTree, modelica_metatype *out_outIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl,2,0) {(void*) boxptr_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl,0}};
#define boxvar_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl)
PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getScalarVarSize(threadData_t *threadData, modelica_metatype _inVar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getScalarVarSize(threadData_t *threadData, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarVarSize,2,0) {(void*) boxptr_EvaluateFunctions_getScalarVarSize,0}};
#define boxvar_EvaluateFunctions_getScalarVarSize MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarVarSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getVarLstFromType(threadData_t *threadData, modelica_metatype _tyIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getVarLstFromType,2,0) {(void*) boxptr_EvaluateFunctions_getVarLstFromType,0}};
#define boxvar_EvaluateFunctions_getVarLstFromType MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getVarLstFromType)
PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getScalarExpSize(threadData_t *threadData, modelica_metatype _inExp);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getScalarExpSize(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarExpSize,2,0) {(void*) boxptr_EvaluateFunctions_getScalarExpSize,0}};
#define boxvar_EvaluateFunctions_getScalarExpSize MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarExpSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setTypesForScalarCrefs(threadData_t *threadData, modelica_metatype _allCrefs, modelica_metatype _types);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setTypesForScalarCrefs,2,0) {(void*) boxptr_EvaluateFunctions_setTypesForScalarCrefs,0}};
#define boxvar_EvaluateFunctions_setTypesForScalarCrefs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setTypesForScalarCrefs)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_isNotComplexVar(threadData_t *threadData, modelica_metatype _inElem);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_isNotComplexVar(threadData_t *threadData, modelica_metatype _inElem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_isNotComplexVar,2,0) {(void*) boxptr_EvaluateFunctions_isNotComplexVar,0}};
#define boxvar_EvaluateFunctions_isNotComplexVar MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_isNotComplexVar)
PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_subsLstString(threadData_t *threadData, modelica_metatype _subs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_subsLstString,2,0) {(void*) boxptr_EvaluateFunctions_subsLstString,0}};
#define boxvar_EvaluateFunctions_subsLstString MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_subsLstString)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandDimension(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _subsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandDimension,2,0) {(void*) boxptr_EvaluateFunctions_expandDimension,0}};
#define boxvar_EvaluateFunctions_expandDimension MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandDimension)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getScalarsForComplexVar(threadData_t *threadData, modelica_metatype _inElem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarsForComplexVar,2,0) {(void*) boxptr_EvaluateFunctions_getScalarsForComplexVar,0}};
#define boxvar_EvaluateFunctions_getScalarsForComplexVar MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getScalarsForComplexVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expType(threadData_t *threadData, modelica_metatype _eIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expType,2,0) {(void*) boxptr_EvaluateFunctions_expType,0}};
#define boxvar_EvaluateFunctions_expType MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_equationToStmt(threadData_t *threadData, modelica_metatype _eqIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_equationToStmt,2,0) {(void*) boxptr_EvaluateFunctions_equationToStmt,0}};
#define boxvar_EvaluateFunctions_equationToStmt MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_equationToStmt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateConstantFunction__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_integer _recursionLimit, modelica_boolean *out_cont, modelica_metatype *out_outTpl);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunction__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype _recursionLimit, modelica_metatype *out_cont, modelica_metatype *out_outTpl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateConstantFunction__traverser,2,0) {(void*) boxptr_EvaluateFunctions_evaluateConstantFunction__traverser,0}};
#define boxvar_EvaluateFunctions_evaluateConstantFunction__traverser MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateConstantFunction__traverser)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lhs, modelica_metatype _funcs, modelica_integer _eqIdx, modelica_integer _recursionLimit, modelica_metatype *out_outLhs, modelica_metatype *out_outFuncs, modelica_integer *out_outEqIdx, modelica_metatype *out_addedStmts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunctionCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lhs, modelica_metatype _funcs, modelica_metatype _eqIdx, modelica_metatype _recursionLimit, modelica_metatype *out_outLhs, modelica_metatype *out_outFuncs, modelica_metatype *out_outEqIdx, modelica_metatype *out_addedStmts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateConstantFunctionCall,2,0) {(void*) boxptr_EvaluateFunctions_evaluateConstantFunctionCall,0}};
#define boxvar_EvaluateFunctions_evaluateConstantFunctionCall MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateConstantFunctionCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _stmtLstsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getDAEelseStatemntLsts,2,0) {(void*) boxptr_EvaluateFunctions_getDAEelseStatemntLsts,0}};
#define boxvar_EvaluateFunctions_getDAEelseStatemntLsts MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getDAEelseStatemntLsts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementsOutputs(threadData_t *threadData, modelica_metatype _statements, modelica_metatype _funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementsOutputs,2,0) {(void*) boxptr_EvaluateFunctions_getStatementsOutputs,0}};
#define boxvar_EvaluateFunctions_getStatementsOutputs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementsOutputs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementLHSScalar(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _funcTree, modelica_metatype _expsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementLHSScalar,2,0) {(void*) boxptr_EvaluateFunctions_getStatementLHSScalar,0}};
#define boxvar_EvaluateFunctions_getStatementLHSScalar MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementLHSScalar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementLHS(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _expsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementLHS,2,0) {(void*) boxptr_EvaluateFunctions_getStatementLHS,0}};
#define boxvar_EvaluateFunctions_getStatementLHS MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getStatementLHS)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_replaceExps(threadData_t *threadData, modelica_metatype _replIn, modelica_metatype _expsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_replaceExps,2,0) {(void*) boxptr_EvaluateFunctions_replaceExps,0}};
#define boxvar_EvaluateFunctions_replaceExps MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_replaceExps)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_equationToStatement(threadData_t *threadData, modelica_metatype _eqIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_equationToStatement,2,0) {(void*) boxptr_EvaluateFunctions_equationToStatement,0}};
#define boxvar_EvaluateFunctions_equationToStatement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_equationToStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_addTplReplacements(threadData_t *threadData, modelica_metatype _replIn, modelica_metatype _e1, modelica_metatype _e2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_addTplReplacements,2,0) {(void*) boxptr_EvaluateFunctions_addTplReplacements,0}};
#define boxvar_EvaluateFunctions_addTplReplacements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_addTplReplacements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateElse(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _info, modelica_integer _recursionLimit, modelica_boolean *out_isElse);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateElse(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _info, modelica_metatype _recursionLimit, modelica_metatype *out_isElse);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateElse,2,0) {(void*) boxptr_EvaluateFunctions_evaluateElse,0}};
#define boxvar_EvaluateFunctions_evaluateElse MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateElse)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_evaluateIfStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _info, modelica_integer _recursionLimit, modelica_metatype *out_stmtsOut, modelica_metatype *out_replOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateIfStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _info, modelica_metatype _recursionLimit, modelica_metatype *out_stmtsOut, modelica_metatype *out_replOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateIfStatement,2,0) {(void*) boxptr_EvaluateFunctions_evaluateIfStatement,0}};
#define boxvar_EvaluateFunctions_evaluateIfStatement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateIfStatement)
PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getRangeBounds(threadData_t *threadData, modelica_metatype _range, modelica_integer *out_stop, modelica_integer *out_step);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getRangeBounds(threadData_t *threadData, modelica_metatype _range, modelica_metatype *out_stop, modelica_metatype *out_step);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getRangeBounds,2,0) {(void*) boxptr_EvaluateFunctions_getRangeBounds,0}};
#define boxvar_EvaluateFunctions_getRangeBounds MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getRangeBounds)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateForStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _funcTreeIn, modelica_metatype _replIn, modelica_integer _idxIn, modelica_integer _recursionLimit, modelica_metatype *out_funcTreeOut, modelica_metatype *out_repl, modelica_integer *out_idxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateForStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _funcTreeIn, modelica_metatype _replIn, modelica_metatype _idxIn, modelica_metatype _recursionLimit, modelica_metatype *out_funcTreeOut, modelica_metatype *out_repl, modelica_metatype *out_idxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateForStatement,2,0) {(void*) boxptr_EvaluateFunctions_evaluateForStatement,0}};
#define boxvar_EvaluateFunctions_evaluateForStatement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateForStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmts, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_integer __omcQ_24in_5Fidx, modelica_metatype _lstIn, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_integer *out_idx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmts, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _lstIn, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_metatype *out_idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateStatement,2,0) {(void*) boxptr_EvaluateFunctions_evaluateFunctions__updateStatement,0}};
#define boxvar_EvaluateFunctions_evaluateFunctions__updateStatement MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateStatement)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_unboxExp(threadData_t *threadData, modelica_metatype _ie, modelica_boolean _bIn, modelica_boolean *out_bOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_unboxExp(threadData_t *threadData, modelica_metatype _ie, modelica_metatype _bIn, modelica_metatype *out_bOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_unboxExp,2,0) {(void*) boxptr_EvaluateFunctions_unboxExp,0}};
#define boxvar_EvaluateFunctions_unboxExp MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_unboxExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_integer __omcQ_24in_5Fidx, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_integer *out_idx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_metatype *out_idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateAlgElements,2,0) {(void*) boxptr_EvaluateFunctions_evaluateFunctions__updateAlgElements,0}};
#define boxvar_EvaluateFunctions_evaluateFunctions__updateAlgElements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evaluateFunctions__updateAlgElements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_addReplacementRuleForAssignment(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _replIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_addReplacementRuleForAssignment,2,0) {(void*) boxptr_EvaluateFunctions_addReplacementRuleForAssignment,0}};
#define boxvar_EvaluateFunctions_addReplacementRuleForAssignment MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_addReplacementRuleForAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateConstEqs(threadData_t *threadData, modelica_metatype _lhsLst, modelica_metatype _rhsLst, modelica_metatype _eqsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateConstEqs,2,0) {(void*) boxptr_EvaluateFunctions_generateConstEqs,0}};
#define boxvar_EvaluateFunctions_generateConstEqs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateConstEqs)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_statementRHSIsNotConst(threadData_t *threadData, modelica_metatype _stmt);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_statementRHSIsNotConst(threadData_t *threadData, modelica_metatype _stmt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_statementRHSIsNotConst,2,0) {(void*) boxptr_EvaluateFunctions_statementRHSIsNotConst,0}};
#define boxvar_EvaluateFunctions_statementRHSIsNotConst MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_statementRHSIsNotConst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_replaceCrefIdent(threadData_t *threadData, modelica_metatype _crefIn, modelica_string _ident);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_replaceCrefIdent,2,0) {(void*) boxptr_EvaluateFunctions_replaceCrefIdent,0}};
#define boxvar_EvaluateFunctions_replaceCrefIdent MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_replaceCrefIdent)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeIdentCref2(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _changeTheseCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeIdentCref2,2,0) {(void*) boxptr_EvaluateFunctions_makeIdentCref2,0}};
#define boxvar_EvaluateFunctions_makeIdentCref2 MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeIdentCref2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeIdentCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeIdentCref,2,0) {(void*) boxptr_EvaluateFunctions_makeIdentCref,0}};
#define boxvar_EvaluateFunctions_makeIdentCref MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_makeIdentCref)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_traverseStmtsAndUpdate(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_fnptr _func, modelica_metatype _argIn, modelica_metatype _stmtsFold);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_traverseStmtsAndUpdate,2,0) {(void*) boxptr_EvaluateFunctions_traverseStmtsAndUpdate,0}};
#define boxvar_EvaluateFunctions_traverseStmtsAndUpdate MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_traverseStmtsAndUpdate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_stmtCanBeRemoved(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _repl);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_stmtCanBeRemoved,2,0) {(void*) boxptr_EvaluateFunctions_stmtCanBeRemoved,0}};
#define boxvar_EvaluateFunctions_stmtCanBeRemoved MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_stmtCanBeRemoved)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildPartialFunction(threadData_t *threadData, modelica_metatype _varPart, modelica_metatype _constPart, modelica_metatype _replIn, modelica_metatype *out_eqsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildPartialFunction,2,0) {(void*) boxptr_EvaluateFunctions_buildPartialFunction,0}};
#define boxvar_EvaluateFunctions_buildPartialFunction MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildPartialFunction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateFunctionType(threadData_t *threadData, modelica_metatype _typIn, modelica_metatype _outputs, modelica_metatype _originOutputs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateFunctionType,2,0) {(void*) boxptr_EvaluateFunctions_updateFunctionType,0}};
#define boxvar_EvaluateFunctions_updateFunctionType MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateFunctionType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateFunctionBody(threadData_t *threadData, modelica_metatype _funcIn, modelica_metatype _body, modelica_integer _idx, modelica_metatype _outputs, modelica_metatype _origOutputs, modelica_metatype *out_pathOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_updateFunctionBody(threadData_t *threadData, modelica_metatype _funcIn, modelica_metatype _body, modelica_metatype _idx, modelica_metatype _outputs, modelica_metatype _origOutputs, modelica_metatype *out_pathOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateFunctionBody,2,0) {(void*) boxptr_EvaluateFunctions_updateFunctionBody,0}};
#define boxvar_EvaluateFunctions_updateFunctionBody MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_updateFunctionBody)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateProtectedElements(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _inFuncOutputs, modelica_metatype _recId);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateProtectedElements,2,0) {(void*) boxptr_EvaluateFunctions_generateProtectedElements,0}};
#define boxvar_EvaluateFunctions_generateProtectedElements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateProtectedElements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateOutputElements(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _inFuncOutputs, modelica_metatype _recId);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateOutputElements,2,0) {(void*) boxptr_EvaluateFunctions_generateOutputElements,0}};
#define boxvar_EvaluateFunctions_generateOutputElements MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_generateOutputElements)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _constCrefs, modelica_metatype _constComplexLstIn, modelica_metatype _varComplexLstIn, modelica_metatype _constScalarLstIn, modelica_metatype _varScalarLstIn, modelica_metatype *out_varComplexLstOut, modelica_metatype *out_constScalarLstOut, modelica_metatype *out_varScalarLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_checkIfOutputIsEvaluatedConstant,2,0) {(void*) boxptr_EvaluateFunctions_checkIfOutputIsEvaluatedConstant,0}};
#define boxvar_EvaluateFunctions_checkIfOutputIsEvaluatedConstant MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_checkIfOutputIsEvaluatedConstant)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildConstFunctionCrefs(threadData_t *threadData, modelica_metatype _constScalarCrefs, modelica_metatype _constComplCrefs, modelica_metatype _allOutputCrefs, modelica_metatype _lhsExpIn, modelica_metatype *out_constComplCrefsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildConstFunctionCrefs,2,0) {(void*) boxptr_EvaluateFunctions_buildConstFunctionCrefs,0}};
#define boxvar_EvaluateFunctions_buildConstFunctionCrefs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildConstFunctionCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildVariableFunctionParts(threadData_t *threadData, modelica_metatype _scalarOutputs, modelica_metatype _constComplexCrefs, modelica_metatype _varComplexCrefs, modelica_metatype _constScalarCrefs, modelica_metatype _varScalarCrefs, modelica_metatype _allOutputs, modelica_metatype _lhsExpIn, modelica_metatype *out_outputExpOut, modelica_metatype *out_varScalarCrefsInFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildVariableFunctionParts,2,0) {(void*) boxptr_EvaluateFunctions_buildVariableFunctionParts,0}};
#define boxvar_EvaluateFunctions_buildVariableFunctionParts MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_buildVariableFunctionParts)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData_t *threadData, modelica_metatype _allOutputCrefsIn, modelica_metatype _constScalarCrefs);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData_t *threadData, modelica_metatype _allOutputCrefsIn, modelica_metatype _constScalarCrefs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_partiallyConstantArrayNeedsExpansion,2,0) {(void*) boxptr_EvaluateFunctions_partiallyConstantArrayNeedsExpansion,0}};
#define boxvar_EvaluateFunctions_partiallyConstantArrayNeedsExpansion MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_partiallyConstantArrayNeedsExpansion)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_scalarRecCrefsForOneDimRec(threadData_t *threadData, modelica_metatype _crefIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_scalarRecCrefsForOneDimRec,2,0) {(void*) boxptr_EvaluateFunctions_scalarRecCrefsForOneDimRec,0}};
#define boxvar_EvaluateFunctions_scalarRecCrefsForOneDimRec MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_scalarRecCrefsForOneDimRec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_scalarRecExpForOneDimRec(threadData_t *threadData, modelica_metatype _expIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_scalarRecExpForOneDimRec,2,0) {(void*) boxptr_EvaluateFunctions_scalarRecExpForOneDimRec,0}};
#define boxvar_EvaluateFunctions_scalarRecExpForOneDimRec MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_scalarRecExpForOneDimRec)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setRecordTypes(threadData_t *threadData, modelica_metatype _inExp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setRecordTypes,2,0) {(void*) boxptr_EvaluateFunctions_setRecordTypes,0}};
#define boxvar_EvaluateFunctions_setRecordTypes MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_setRecordTypes)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasReinitFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasReinitFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasReinitFold,2,0) {(void*) boxptr_EvaluateFunctions_hasReinitFold,0}};
#define boxvar_EvaluateFunctions_hasReinitFold MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasReinitFold)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasReturnFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasReturnFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasReturnFold,2,0) {(void*) boxptr_EvaluateFunctions_hasReturnFold,0}};
#define boxvar_EvaluateFunctions_hasReturnFold MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasReturnFold)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasAssertFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasAssertFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasAssertFold,2,0) {(void*) boxptr_EvaluateFunctions_hasAssertFold,0}};
#define boxvar_EvaluateFunctions_hasAssertFold MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasAssertFold)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandComplexElementsToCrefs(threadData_t *threadData, modelica_metatype _e);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandComplexElementsToCrefs,2,0) {(void*) boxptr_EvaluateFunctions_expandComplexElementsToCrefs,0}};
#define boxvar_EvaluateFunctions_expandComplexElementsToCrefs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandComplexElementsToCrefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandComplexExpressions(threadData_t *threadData, modelica_metatype _e, modelica_metatype _funcs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandComplexExpressions,2,0) {(void*) boxptr_EvaluateFunctions_expandComplexExpressions,0}};
#define boxvar_EvaluateFunctions_expandComplexExpressions MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_expandComplexExpressions)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_doNotInline(threadData_t *threadData, modelica_metatype _func);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_doNotInline(threadData_t *threadData, modelica_metatype _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_doNotInline,2,0) {(void*) boxptr_EvaluateFunctions_doNotInline,0}};
#define boxvar_EvaluateFunctions_doNotInline MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_doNotInline)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasMultipleArrayDimensions(threadData_t *threadData, modelica_metatype _eIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasMultipleArrayDimensions(threadData_t *threadData, modelica_metatype _eIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasMultipleArrayDimensions,2,0) {(void*) boxptr_EvaluateFunctions_hasMultipleArrayDimensions,0}};
#define boxvar_EvaluateFunctions_hasMultipleArrayDimensions MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasMultipleArrayDimensions)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasUnknownType(threadData_t *threadData, modelica_metatype _eIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasUnknownType(threadData_t *threadData, modelica_metatype _eIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasUnknownType,2,0) {(void*) boxptr_EvaluateFunctions_hasUnknownType,0}};
#define boxvar_EvaluateFunctions_hasUnknownType MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_hasUnknownType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evalFunctions__findFuncs(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqIn, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype __omcQ_24in_5FaddEqs, modelica_integer __omcQ_24in_5Fidx, modelica_boolean __omcQ_24in_5Fchanged, modelica_metatype __omcQ_24in_5FcallSign, modelica_integer _recursionLimit, modelica_metatype *out_shared, modelica_metatype *out_addEqs, modelica_integer *out_idx, modelica_boolean *out_changed, modelica_metatype *out_callSign);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evalFunctions__findFuncs(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqIn, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype __omcQ_24in_5FaddEqs, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype __omcQ_24in_5Fchanged, modelica_metatype __omcQ_24in_5FcallSign, modelica_metatype _recursionLimit, modelica_metatype *out_shared, modelica_metatype *out_addEqs, modelica_metatype *out_idx, modelica_metatype *out_changed, modelica_metatype *out_callSign);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evalFunctions__findFuncs,2,0) {(void*) boxptr_EvaluateFunctions_evalFunctions__findFuncs,0}};
#define boxvar_EvaluateFunctions_evalFunctions__findFuncs MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evalFunctions__findFuncs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evalFunctions__main(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evalFunctions__main,2,0) {(void*) boxptr_EvaluateFunctions_evalFunctions__main,0}};
#define boxvar_EvaluateFunctions_evalFunctions__main MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_evalFunctions__main)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getVariabilityForExp(threadData_t *threadData, modelica_metatype _expIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getVariabilityForExp,2,0) {(void*) boxptr_EvaluateFunctions_getVariabilityForExp,0}};
#define boxvar_EvaluateFunctions_getVariabilityForExp MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getVariabilityForExp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getCallSignatureForCall(threadData_t *threadData, modelica_metatype _callExpIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getCallSignatureForCall,2,0) {(void*) boxptr_EvaluateFunctions_getCallSignatureForCall,0}};
#define boxvar_EvaluateFunctions_getCallSignatureForCall MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_getCallSignatureForCall)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_VariabilityIsEqual(threadData_t *threadData, modelica_metatype _vari1, modelica_metatype _vari2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_VariabilityIsEqual(threadData_t *threadData, modelica_metatype _vari1, modelica_metatype _vari2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_VariabilityIsEqual,2,0) {(void*) boxptr_EvaluateFunctions_VariabilityIsEqual,0}};
#define boxvar_EvaluateFunctions_VariabilityIsEqual MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_VariabilityIsEqual)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_callSignatureIsEqual(threadData_t *threadData, modelica_metatype _signat1, modelica_metatype _signat2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_callSignatureIsEqual(threadData_t *threadData, modelica_metatype _signat1, modelica_metatype _signat2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_callSignatureIsEqual,2,0) {(void*) boxptr_EvaluateFunctions_callSignatureIsEqual,0}};
#define boxvar_EvaluateFunctions_callSignatureIsEqual MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_callSignatureIsEqual)
PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_VariabilityString(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_VariabilityString,2,0) {(void*) boxptr_EvaluateFunctions_VariabilityString,0}};
#define boxvar_EvaluateFunctions_VariabilityString MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_VariabilityString)
PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_callSignatureStr(threadData_t *threadData, modelica_metatype _signat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_callSignatureStr,2,0) {(void*) boxptr_EvaluateFunctions_callSignatureStr,0}};
#define boxvar_EvaluateFunctions_callSignatureStr MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_callSignatureStr)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_checkCallSignatureForExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _signLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_checkCallSignatureForExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _signLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_EvaluateFunctions_checkCallSignatureForExp,2,0) {(void*) boxptr_EvaluateFunctions_checkCallSignatureForExp,0}};
#define boxvar_EvaluateFunctions_checkCallSignatureForExp MMC_REFSTRUCTLIT(boxvar_lit_EvaluateFunctions_checkCallSignatureForExp)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeBackendEquation(threadData_t *threadData, modelica_metatype _ls, modelica_metatype _rs)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  tmpMeta1 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _rs, _ls, _OMC_LIT4, _OMC_LIT7);
  _eq = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_convertTupleEquations(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _addEqsIn, modelica_metatype *out_addEqsOut)
{
  modelica_metatype _eqOut = NULL;
  modelica_metatype _addEqsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqOut has no default value.
  // _addEqsOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqIn;
    {
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _eq = NULL;
      modelica_metatype _eqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lhs has no default value.
      // _rhs has no default value.
      // _eq has no default value.
      // _eqs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,19,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,19,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _lhs = tmpMeta7;
          _rhs = tmpMeta9;
          /* Pattern matching succeeded */
          _lhs = omc_List_mapFlat(threadData, _lhs, boxvar_Expression_getComplexContents);

          _rhs = omc_List_mapFlat(threadData, _rhs, boxvar_Expression_getComplexContents);

          /* Pattern-matching assignment */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp13;
            modelica_metatype _lh_loopVar = 0;
            modelica_metatype _lh;
            modelica_metatype _rh_loopVar = 0;
            modelica_metatype _rh;
            _lh_loopVar = _lhs;
            _rh_loopVar = _rhs;
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar1;
            while(1) {
              tmp13 = 2;
              if (!listEmpty(_lh_loopVar)) {
                _lh = MMC_CAR(_lh_loopVar);
                _lh_loopVar = MMC_CDR(_lh_loopVar);
                tmp13--;
              }if (!listEmpty(_rh_loopVar)) {
                _rh = MMC_CAR(_rh_loopVar);
                _rh_loopVar = MMC_CDR(_rh_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar0 = omc_EvaluateFunctions_makeBackendEquation(threadData, _lh, _rh);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 2) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar1;
          }
          tmpMeta14 = tmpMeta10;
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          _eq = tmpMeta15;
          _eqs = tmpMeta16;
          tmpMeta[0+0] = _eq;
          tmpMeta[0+1] = listAppend(_eqs, _addEqsIn);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _eqIn;
          tmpMeta[0+1] = _addEqsIn;
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
  _addEqsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_addEqsOut) { *out_addEqsOut = _addEqsOut; }
  return _eqOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_findDerVarCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs)
{
  modelica_metatype _exp = NULL;
  modelica_metatype _outCrefs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exp = __omcQ_24in_5Fexp;
  // _outCrefs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _exp;
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
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (3 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT8), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (listEmpty(tmpMeta8)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,6,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _cr = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_cons(_cr, _inCrefs);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inCrefs;
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
  _outCrefs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outCrefs) { *out_outCrefs = _outCrefs; }
  return _exp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setVarKindForStates(threadData_t *threadData, modelica_metatype _inVar, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs)
{
  modelica_metatype _outVar = NULL;
  modelica_metatype _outCrefs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outVar has no default value.
  // _outCrefs has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inVar;
    tmp4_2 = _inCrefs;
    {
      modelica_boolean _isState;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _varOld = NULL;
      modelica_metatype _varNew = NULL;
      modelica_metatype _derVars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isState has no default value.
      // _cr1 has no default value.
      // _varOld has no default value.
      // _varNew has no default value.
      // _derVars has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,3) == 0) goto tmp3_end;
          
          _varOld = tmp4_1;
          _cr1 = tmpMeta6;
          _derVars = tmp4_2;
          /* Pattern matching succeeded */
          _isState = omc_List_isMemberOnTrue(threadData, _cr1, _derVars, boxvar_ComponentReferenceBasics_crefEqual);

          _varNew = ((!_isState)?omc_BackendVariable_setVarKind(threadData, _varOld, _OMC_LIT9):_varOld);
          tmpMeta[0+0] = _varNew;
          tmpMeta[0+1] = _derVars;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inVar;
          tmpMeta[0+1] = _inCrefs;
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
  _outVar = tmpMeta[0+0];
  _outCrefs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outCrefs) { *out_outCrefs = _outCrefs; }
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_varSSisPreferOrHigher(threadData_t *threadData, modelica_metatype _varIn)
{
  modelica_boolean _ssOut;
  modelica_integer _i;
  modelica_metatype _ss = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ssOut has no default value.
  // _i has no default value.
  // _ss has no default value.
  _ss = omc_BackendVariable_varStateSelect(threadData, _varIn);

  _i = omc_BackendVariable_stateSelectToInteger(threadData, _ss);

  _ssOut = (_i >= ((modelica_integer) 2));
  _return: OMC_LABEL_UNUSED
  return _ssOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_varSSisPreferOrHigher(threadData_t *threadData, modelica_metatype _varIn)
{
  modelica_boolean _ssOut;
  modelica_metatype out_ssOut;
  _ssOut = omc_EvaluateFunctions_varSSisPreferOrHigher(threadData, _varIn);
  out_ssOut = mmc_mk_icon(_ssOut);
  return out_ssOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateVarKinds__eqSys(threadData_t *threadData, modelica_metatype _sysIn, modelica_metatype _shared)
{
  modelica_metatype _sysOut = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _states = NULL;
  modelica_metatype _varLst = NULL;
  modelica_metatype _ssVarLst = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _initEqs = NULL;
  modelica_metatype _derVars = NULL;
  modelica_metatype _ssVars = NULL;
  modelica_metatype _derVarsInit = NULL;
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
  // _sysOut has no default value.
  // _vars has no default value.
  // _states has no default value.
  // _varLst has no default value.
  // _ssVarLst has no default value.
  // _eqs has no default value.
  // _initEqs has no default value.
  // _derVars has no default value.
  // _ssVars has no default value.
  // _derVarsInit has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _sysIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _vars = tmpMeta2;
  _eqs = tmpMeta3;

  _varLst = omc_BackendVariable_varList(threadData, _vars);

  _initEqs = omc_BackendEquation_getInitialEqnsFromShared(threadData, _shared);

  _states = omc_List_filterOnTrue(threadData, _varLst, boxvar_BackendVariable_isStateorStateDerVar);

  /* Pattern-matching assignment */
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box2(0, boxvar_EvaluateFunctions_findDerVarCrefs, tmpMeta4);
  tmpMeta6 = omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, _initEqs, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
  _derVarsInit = tmpMeta7;

  /* Pattern-matching assignment */
  tmpMeta8 = mmc_mk_box2(0, boxvar_EvaluateFunctions_findDerVarCrefs, _derVarsInit);
  tmpMeta9 = omc_BackendDAEUtil_traverseBackendDAEExpsEqns(threadData, _eqs, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
  _derVars = tmpMeta10;

  _ssVarLst = omc_List_filterOnTrue(threadData, _varLst, boxvar_EvaluateFunctions_varSSisPreferOrHigher);

  _ssVars = omc_List_map(threadData, _ssVarLst, boxvar_BackendVariable_varCref);

  _derVars = omc_List_unique(threadData, listAppend(_derVars, _ssVars));

  _vars = omc_BackendVariable_traverseBackendDAEVarsWithUpdate(threadData, _vars, boxvar_EvaluateFunctions_setVarKindForStates, _derVars, NULL);

  _sysOut = omc_BackendDAEUtil_setEqSystVars(threadData, _sysIn, _vars);
  _return: OMC_LABEL_UNUSED
  return _sysOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateVarKinds(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_metatype _systs = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _systs has no default value.
  // _shared has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inDAE;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _systs = tmpMeta2;
  _shared = tmpMeta3;

  _systs = omc_List_map1(threadData, _systs, boxvar_EvaluateFunctions_updateVarKinds__eqSys, _shared);

  tmpMeta4 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _systs, _shared);
  _outDAE = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_metatype _stmtOut = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtOut has no default value.
  // _ty has no default value.
  _ty = omc_Expression_typeof(threadData, _rhs);

  tmpMeta1 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _ty, _lhs, _rhs, _OMC_LIT4);
  _stmtOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeAssignmentMap(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs)
{
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmts has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _e1_loopVar = 0;
    modelica_metatype _e1;
    modelica_metatype _e2_loopVar = 0;
    modelica_metatype _e2;
    _e1_loopVar = _lhs;
    _e2_loopVar = _rhs;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 2;
      if (!listEmpty(_e1_loopVar)) {
        _e1 = MMC_CAR(_e1_loopVar);
        _e1_loopVar = MMC_CDR(_e1_loopVar);
        tmp4--;
      }if (!listEmpty(_e2_loopVar)) {
        _e2 = MMC_CAR(_e2_loopVar);
        _e2_loopVar = MMC_CDR(_e2_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_EvaluateFunctions_makeAssignment(threadData, _e1, _e2);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 2) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _stmts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmts;
}

static modelica_metatype closure0_ExpressionBasics_expEqual(threadData_t *thData, modelica_metatype closure, modelica_metatype inExp1)
{
  modelica_metatype inExp2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_ExpressionBasics_expEqual(thData, inExp1, inExp2);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_compareConstantExps2(threadData_t *threadData, modelica_integer _idx, modelica_metatype _expLstLst, modelica_metatype __omcQ_24in_5Fpos)
{
  modelica_metatype _pos = NULL;
  modelica_boolean _b1;
  modelica_boolean _b2;
  modelica_metatype _firstExp = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _pos = __omcQ_24in_5Fpos;
  // _b1 has no default value.
  // _b2 has no default value.
  // _firstExp has no default value.
  // _expLst has no default value.
  // _rest has no default value.
  _expLst = omc_List_map1(threadData, _expLstLst, boxvar_listGet, mmc_mk_integer(_idx));

  _b1 = omc_List_all(threadData, _expLst, boxvar_Expression_isConst);

  if(_b1)
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _expLst;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    _firstExp = tmpMeta2;
    _rest = tmpMeta3;

    tmpMeta4 = mmc_mk_box1(0, _firstExp);
    _b2 = omc_List_all(threadData, _rest, (modelica_fnptr) mmc_mk_box2(0,closure0_ExpressionBasics_expEqual,tmpMeta4));

    if(_b2)
    {
      tmpMeta5 = mmc_mk_cons(mmc_mk_integer(_idx), _pos);
      _pos = tmpMeta5;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _pos;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_compareConstantExps2(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _expLstLst, modelica_metatype __omcQ_24in_5Fpos)
{
  modelica_integer tmp1;
  modelica_metatype _pos = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _pos = omc_EvaluateFunctions_compareConstantExps2(threadData, tmp1, _expLstLst, __omcQ_24in_5Fpos);
  /* skip box _pos; list<#Integer> */
  return _pos;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_compareConstantExps(threadData_t *threadData, modelica_metatype _expLstLstIn)
{
  modelica_metatype _posLstOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _posLstOut = tmpMeta1;
  tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = listLength(listHead(_expLstLstIn));
  if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
    {
      _posLstOut = omc_EvaluateFunctions_compareConstantExps2(threadData, _i, _expLstLstIn, _posLstOut);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _posLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateStatementsInElse(threadData_t *threadData, modelica_metatype _stmtLstIn, modelica_metatype _origElse)
{
  modelica_metatype _elseOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _elseOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _stmtLstIn;
    tmp4_2 = _origElse;
    {
      modelica_metatype _els = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _rest = NULL;
      int tmp4;
      // _els has no default value.
      // _exp has no default value.
      // _stmts has no default value.
      // _rest has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_2))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta5 = MMC_CAR(tmp4_1);
          tmpMeta6 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _stmts = tmpMeta5;
          _rest = tmpMeta6;
          _exp = tmpMeta7;
          _els = tmpMeta8;
          /* Pattern matching succeeded */
          _els = omc_EvaluateFunctions_updateStatementsInElse(threadData, _rest, _els);
          tmpMeta9 = mmc_mk_box4(4, &DAE_Else_ELSEIF__desc, _exp, _stmts, _els);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          
          _stmts = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(5, &DAE_Else_ELSE__desc, _stmts);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT10;
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
  _elseOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _elseOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateStatementsInIfStmt(threadData_t *threadData, modelica_metatype _stmtLstIn, modelica_metatype _origIf)
{
  modelica_metatype _ifStmtOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ifStmtOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _stmtLstIn;
    tmp4_2 = _origIf;
    {
      modelica_metatype _els = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _els has no default value.
      // _exp has no default value.
      // _source has no default value.
      // _stmts has no default value.
      // _rest has no default value.
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          _stmts = tmpMeta6;
          _rest = tmpMeta7;
          _exp = tmpMeta8;
          _els = tmpMeta9;
          _source = tmpMeta10;
          /* Pattern matching succeeded */
          _els = omc_EvaluateFunctions_updateStatementsInElse(threadData, _rest, _els);
          tmpMeta11 = mmc_mk_box5(6, &DAE_Statement_STMT__IF__desc, _exp, _stmts, _els, _source);
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
  _ifStmtOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _ifStmtOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getOnlyConstantReplacements(threadData_t *threadData, modelica_metatype _replIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _exps = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _repl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _exps has no default value.
  // _crefs has no default value.
  // _repl has no default value.
  _crefs = omc_BackendVarTransform_getAllReplacements(threadData, _replIn ,&_exps);

  _exps = omc_List_filterOnTrueSync(threadData, _exps, boxvar_Expression_isConst, _crefs ,&_crefs);

  _repl = omc_BackendVarTransform_emptyReplacements(threadData);

  _replOut = omc_BackendVarTransform_addReplacements(threadData, _repl, _crefs, _exps, mmc_mk_none());
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_collectReplacements1(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _replIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _stmtsIn;
    {
      modelica_metatype _repl = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _stmt = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _constCrefs = NULL;
      modelica_metatype _varCrefs = NULL;
      modelica_metatype _lhsLst = NULL;
      modelica_metatype _rhsLst = NULL;
      modelica_metatype _constExps = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _repl has no default value.
      // _cref has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _stmt has no default value.
      // _crefs has no default value.
      // _constCrefs has no default value.
      // _varCrefs has no default value.
      // _lhsLst has no default value.
      // _rhsLst has no default value.
      // _constExps has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _replIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          
          _lhs = tmpMeta8;
          _rhs = tmpMeta9;
          _rest = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _rhs = omc_BackendVarTransform_replaceExp(threadData, _rhs, _replIn, mmc_mk_none(), NULL);

          _rhs = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);

          /* Pattern-matching assignment */
          tmp10 = omc_Expression_isConst(threadData, _rhs);
          if (1 /* true */ != tmp10) goto goto_2;

          _cref = omc_Expression_expCref(threadData, _lhs);

          _repl = omc_BackendVarTransform_addReplacement(threadData, _replIn, _cref, _rhs, mmc_mk_none());
          tmpMeta1 = omc_EvaluateFunctions_collectReplacements1(threadData, _rest, _repl);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          
          _lhsLst = tmpMeta13;
          _rhs = tmpMeta14;
          _rest = tmpMeta12;
          /* Pattern matching succeeded */
          _rhs = omc_BackendVarTransform_replaceExp(threadData, _rhs, _replIn, mmc_mk_none(), NULL);

          _rhs = omc_ExpressionSimplify_simplify(threadData, _rhs, NULL);

          _rhsLst = omc_Expression_getComplexContents(threadData, _rhs);

          _crefs = omc_List_map(threadData, _lhsLst, boxvar_Expression_expCref);

          _constExps = omc_List_filterOnTrueSync(threadData, _rhsLst, boxvar_Expression_isConst, _crefs ,&_constCrefs);

          omc_List_filterOnTrueSync(threadData, _rhsLst, boxvar_Expression_isNotConst, _crefs ,&_varCrefs);

          _repl = omc_BackendVarTransform_addReplacements(threadData, _replIn, _constCrefs, _constExps, mmc_mk_none());

          omc_BackendVarTransform_removeReplacements(threadData, _repl, _varCrefs);
          tmpMeta1 = omc_EvaluateFunctions_collectReplacements1(threadData, _rest, _repl);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          _stmt = tmpMeta15;
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          _lhsLst = omc_EvaluateFunctions_getStatementLHS(threadData, _stmt, tmpMeta17);

          _crefs = omc_List_map(threadData, _lhsLst, boxvar_Expression_expCref);

          omc_BackendVarTransform_removeReplacements(threadData, _replIn, _crefs);
          tmpMeta1 = omc_EvaluateFunctions_collectReplacements1(threadData, _rest, _replIn);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT11),stdout);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _replOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_collectReplacements(threadData_t *threadData, modelica_metatype _stmtsIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _repl = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _repl has no default value.
  _repl = omc_BackendVarTransform_emptyReplacements(threadData);

  _replOut = omc_EvaluateFunctions_collectReplacements1(threadData, _stmtsIn, _repl);
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_predictIfOutput(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _infoIn, modelica_integer _recursionLimit, modelica_metatype *out_infoOut)
{
  modelica_metatype _stmtsOut = NULL;
  modelica_metatype _infoOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtsOut has no default value.
  // _infoOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _stmtIn;
    tmp4_2 = _infoIn;
    {
      modelica_integer _idx;
      modelica_metatype _constantOutputs = NULL;
      modelica_metatype _replIn = NULL;
      modelica_metatype _replLst = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _funcTree = NULL;
      modelica_metatype _stmtNew = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _outExps = NULL;
      modelica_metatype _allLHS = NULL;
      modelica_metatype _expLstLst = NULL;
      modelica_metatype _stmts1 = NULL;
      modelica_metatype _addStmts = NULL;
      modelica_metatype _stmtsLst = NULL;
      modelica_metatype _elseStmtsLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx has no default value.
      // _constantOutputs has no default value.
      // _replIn has no default value.
      // _replLst has no default value.
      // _else_ has no default value.
      // _funcTree has no default value.
      // _stmtNew has no default value.
      // _expLst has no default value.
      // _outExps has no default value.
      // _allLHS has no default value.
      // _expLstLst has no default value.
      // _stmts1 has no default value.
      // _addStmts has no default value.
      // _stmtsLst has no default value.
      // _elseStmtsLst has no default value.
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
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _stmts1 = tmpMeta6;
          _else_ = tmpMeta7;
          _replIn = tmpMeta8;
          _funcTree = tmpMeta9;
          _idx = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _elseStmtsLst = omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData, _else_, tmpMeta12);

          _elseStmtsLst = listReverse(_elseStmtsLst);

          _stmtsLst = omc_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData, _stmts1, _elseStmtsLst, _replIn, _funcTree, _idx, _recursionLimit ,&_funcTree ,&_idx);

          _replLst = omc_List_map(threadData, _stmtsLst, boxvar_EvaluateFunctions_collectReplacements);

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _expLst = omc_List_fold(threadData, omc_List_flatten(threadData, _stmtsLst), boxvar_EvaluateFunctions_getStatementLHS, tmpMeta13);

          _expLst = omc_List_unique(threadData, _expLst);

          _allLHS = listReverse(_expLst);

          _expLstLst = omc_List_map1(threadData, _replLst, boxvar_EvaluateFunctions_replaceExps, _allLHS);

          _constantOutputs = omc_EvaluateFunctions_compareConstantExps(threadData, _expLstLst);

          _outExps = omc_List_map1(threadData, _constantOutputs, boxvar_List_getIndexFirst, _allLHS);

          /* Pattern-matching assignment */
          tmp14 = omc_List_all(threadData, _outExps, boxvar_Expression_isCref);
          if (1 /* true */ != tmp14) goto goto_2;

          _expLst = omc_List_map1(threadData, _constantOutputs, boxvar_List_getIndexFirst, listHead(_expLstLst));

          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta15 = stringAppend(_OMC_LIT12,stringDelimitList(omc_List_map(threadData, _outExps, boxvar_ExpressionBasics_printExpStr), _OMC_LIT13));
            fputs(MMC_STRINGDATA(tmpMeta15),stdout);
          }

          _addStmts = omc_EvaluateFunctions_makeAssignmentMap(threadData, _outExps, _expLst);

          _stmtNew = omc_EvaluateFunctions_updateStatementsInIfStmt(threadData, _stmtsLst, _stmtIn);
          tmpMeta16 = mmc_mk_cons(_stmtNew, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta17 = mmc_mk_box2(0, tmpMeta16, _addStmts);
          tmpMeta18 = mmc_mk_box4(3, &EvaluateFunctions_FuncInfo_FUNCINFO__desc, _replIn, _funcTree, mmc_mk_integer(_idx));
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_cons(_stmtIn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = mmc_mk_box2(0, tmpMeta19, tmpMeta20);
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _infoIn;
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
  _stmtsOut = tmpMeta[0+0];
  _infoOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_infoOut) { *out_infoOut = _infoOut; }
  return _stmtsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_predictIfOutput(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _infoIn, modelica_metatype _recursionLimit, modelica_metatype *out_infoOut)
{
  modelica_integer tmp1;
  modelica_metatype _stmtsOut = NULL;
  tmp1 = mmc_unbox_integer(_recursionLimit);
  _stmtsOut = omc_EvaluateFunctions_predictIfOutput(threadData, _stmtIn, _infoIn, tmp1, out_infoOut);
  /* skip box _stmtsOut; tuple<list<DAE.Statement>, list<DAE.Statement>> */
  /* skip box _infoOut; EvaluateFunctions.FuncInfo */
  return _stmtsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _elseStmtsLstIn, modelica_metatype _replIn, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer __omcQ_24in_5Fidx, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_integer *out_idx)
{
  modelica_metatype _stmtsLstOut = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _idx;
  modelica_metatype _repl = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtsLstOut has no default value.
  _funcTree = __omcQ_24in_5FfuncTree;
  _idx = __omcQ_24in_5Fidx;
  // _repl has no default value.
  // _stmts has no default value.
  _repl = omc_EvaluateFunctions_getOnlyConstantReplacements(threadData, _replIn);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _stmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _stmtsIn, _funcTree, _repl, _idx, tmpMeta1, _recursionLimit ,&_funcTree ,NULL ,&_idx);

  tmpMeta2 = mmc_mk_cons(_stmts, MMC_REFSTRUCTLIT(mmc_nil));
  _stmtsLstOut = tmpMeta2;

  {
    modelica_metatype _elseStmts;
    for (tmpMeta3 = _elseStmtsLstIn; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _elseStmts = MMC_CAR(tmpMeta3);
      _repl = omc_EvaluateFunctions_getOnlyConstantReplacements(threadData, _replIn);

      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _stmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _elseStmts, _funcTree, _repl, _idx, tmpMeta4, _recursionLimit ,&_funcTree ,NULL ,&_idx);

      tmpMeta5 = mmc_mk_cons(_stmts, _stmtsLstOut);
      _stmtsLstOut = tmpMeta5;
    }
  }

  _stmtsLstOut = listReverse(_stmtsLstOut);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_idx) { *out_idx = _idx; }
  return _stmtsLstOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_metatype _elseStmtsLstIn, modelica_metatype _replIn, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_idx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _idx;
  modelica_metatype _stmtsLstOut = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fidx);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _stmtsLstOut = omc_EvaluateFunctions_evaluateFunctions__updateAllStatements(threadData, _stmtsIn, _elseStmtsLstIn, _replIn, __omcQ_24in_5FfuncTree, tmp1, tmp2, out_funcTree, &_idx);
  /* skip box _stmtsLstOut; list<list<DAE.Statement>> */
  /* skip box _funcTree; AvlTreePathFunction.Tree */
  if (out_idx) { *out_idx = mmc_mk_icon(_idx); }
  return _stmtsLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl(threadData_t *threadData, modelica_metatype _algsIn, modelica_metatype _inFuncTree, modelica_integer _inIndex, modelica_integer _recursionLimit, modelica_metatype *out_outFuncTree, modelica_integer *out_outIndex)
{
  modelica_metatype _mapTplOut = NULL;
  modelica_metatype _outFuncTree = NULL;
  modelica_integer _outIndex;
  modelica_metatype _repl = NULL;
  modelica_metatype _algsOut = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mapTplOut has no default value.
  // _outFuncTree has no default value.
  // _outIndex has no default value.
  // _repl has no default value.
  // _algsOut has no default value.
  _repl = omc_BackendVarTransform_emptyReplacements(threadData);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _algsOut = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _algsIn, _inFuncTree, _repl, _inIndex, tmpMeta1, _recursionLimit ,&_outFuncTree ,&_repl ,&_outIndex);

  tmpMeta2 = mmc_mk_box2(0, _algsOut, _repl);
  _mapTplOut = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  if (out_outFuncTree) { *out_outFuncTree = _outFuncTree; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  return _mapTplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl(threadData_t *threadData, modelica_metatype _algsIn, modelica_metatype _inFuncTree, modelica_metatype _inIndex, modelica_metatype _recursionLimit, modelica_metatype *out_outFuncTree, modelica_metatype *out_outIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outIndex;
  modelica_metatype _mapTplOut = NULL;
  tmp1 = mmc_unbox_integer(_inIndex);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _mapTplOut = omc_EvaluateFunctions_evaluateFunctions__updateStatementEmptyRepl(threadData, _algsIn, _inFuncTree, tmp1, tmp2, out_outFuncTree, &_outIndex);
  /* skip box _mapTplOut; tuple<list<DAE.Statement>, BackendVarTransform.VariableReplacements> */
  /* skip box _outFuncTree; AvlTreePathFunction.Tree */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  return _mapTplOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getScalarVarSize(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_integer _size;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inVar;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _vl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      // _vl has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp11;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          if (listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmpMeta7);
          tmpMeta9 = MMC_CDR(tmpMeta7);
          
          _vl = tmpMeta7;
          /* Pattern matching succeeded */
          {
            modelica_integer tmp10;
            modelica_integer __omcQ_24tmpVar5;
            modelica_integer __omcQ_24tmpVar4;
            modelica_integer tmp12;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _vl;
            tmp10 = 0; /* intAdd lacks default-value */
            while(1) {
              tmp12 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp12--;
              }
              if (tmp12 == 0) {
                __omcQ_24tmpVar4 = omc_EvaluateFunctions_getScalarVarSize(threadData, _v);
                if (tmp10)
                {
                  __omcQ_24tmpVar5 = __omcQ_24tmpVar4 + __omcQ_24tmpVar5;
                }
                else
                {
                  __omcQ_24tmpVar5 = __omcQ_24tmpVar4;
                  tmp10 = 1;
                }
              } else if (tmp12 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp10) goto goto_2;
            tmp11 = __omcQ_24tmpVar5;
          }
          tmp1 = tmp11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_integer tmp15;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp3_end;
          
          _ty = tmpMeta13;
          /* Pattern matching succeeded */
          {
            modelica_integer tmp14;
            modelica_integer __omcQ_24tmpVar7;
            modelica_integer __omcQ_24tmpVar6;
            modelica_integer tmp16;
            modelica_metatype _sz_loopVar = 0;
            modelica_metatype _sz;
            _sz_loopVar = omc_DAEUtil_expTypeArrayDimensions(threadData, _ty);
            tmp14 = 0; /* intMul lacks default-value */
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_sz_loopVar)) {
                _sz = MMC_CAR(_sz_loopVar);
                _sz_loopVar = MMC_CDR(_sz_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar6 = mmc_unbox_integer(_sz);
                if (tmp14)
                {
                  __omcQ_24tmpVar7 = (__omcQ_24tmpVar6) * (__omcQ_24tmpVar7);
                }
                else
                {
                  __omcQ_24tmpVar7 = __omcQ_24tmpVar6;
                  tmp14 = 1;
                }
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp14) goto goto_2;
            tmp15 = __omcQ_24tmpVar7;
          }
          tmp1 = tmp15;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
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
  _size = tmp1;
  _return: OMC_LABEL_UNUSED
  return _size;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getScalarVarSize(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_EvaluateFunctions_getScalarVarSize(threadData, _inVar);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getVarLstFromType(threadData_t *threadData, modelica_metatype _tyIn)
{
  modelica_metatype _varsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tyIn;
    {
      modelica_metatype _varLst = NULL;
      modelica_metatype _tyLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _varLst has no default value.
      // _tyLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          
          _tyLst = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype tmpMeta10;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp11;
            modelica_metatype _ty_loopVar = 0;
            modelica_metatype _ty;
            _ty_loopVar = _tyLst;
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta10; /* defaultValue */
            while(1) {
              tmp11 = 1;
              if (!listEmpty(_ty_loopVar)) {
                _ty = MMC_CAR(_ty_loopVar);
                _ty_loopVar = MMC_CDR(_ty_loopVar);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar8 = omc_EvaluateFunctions_getVarLstFromType(threadData, _ty);
                __omcQ_24tmpVar9 = listAppend(__omcQ_24tmpVar8, __omcQ_24tmpVar9);
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmpMeta9 = __omcQ_24tmpVar9;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,4) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _varLst = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = _varLst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _varLst = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = _varLst;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta14;
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
  _varsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _varsOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getScalarExpSize(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_integer _size;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _size has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _vl = NULL;
      modelica_metatype _tyl = NULL;
      modelica_integer _exps_len;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _exps has no default value.
      // _vl has no default value.
      // _tyl has no default value.
      // _exps_len has no default value.
      tmp4 = 0;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp10;
          modelica_integer tmp13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (listEmpty(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmpMeta6);
          tmpMeta8 = MMC_CDR(tmpMeta6);
          _exps = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_integer tmp9;
            modelica_integer __omcQ_24tmpVar11;
            modelica_integer __omcQ_24tmpVar10;
            modelica_integer tmp11;
            modelica_metatype _exp_loopVar = 0;
            modelica_metatype _exp;
            _exp_loopVar = _exps;
            tmp9 = 0; /* intAdd lacks default-value */
            while(1) {
              tmp11 = 1;
              while (!listEmpty(_exp_loopVar)) {
                _exp = MMC_CAR(_exp_loopVar);
                _exp_loopVar = MMC_CDR(_exp_loopVar);
                if (omc_Expression_isNotWild(threadData, _exp)) {
                  tmp11--;
                  break;
                }
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar10 = ((modelica_integer) 1);
                if (tmp9)
                {
                  __omcQ_24tmpVar11 = __omcQ_24tmpVar10 + __omcQ_24tmpVar11;
                }
                else
                {
                  __omcQ_24tmpVar11 = __omcQ_24tmpVar10;
                  tmp9 = 1;
                }
              } else if (tmp11 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp9) goto goto_2;
            tmp10 = __omcQ_24tmpVar11;
          }
          _exps_len = tmp10;

          {
            modelica_integer tmp12;
            modelica_integer __omcQ_24tmpVar13;
            modelica_integer __omcQ_24tmpVar12;
            modelica_integer tmp14;
            modelica_metatype _exp_loopVar = 0;
            modelica_metatype _exp;
            _exp_loopVar = _exps;
            tmp12 = 0; /* intAdd lacks default-value */
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_exp_loopVar)) {
                _exp = MMC_CAR(_exp_loopVar);
                _exp_loopVar = MMC_CDR(_exp_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar12 = omc_EvaluateFunctions_getScalarExpSize(threadData, _exp);
                if (tmp12)
                {
                  __omcQ_24tmpVar13 = __omcQ_24tmpVar12 + __omcQ_24tmpVar13;
                }
                else
                {
                  __omcQ_24tmpVar13 = __omcQ_24tmpVar12;
                  tmp12 = 1;
                }
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp12) goto goto_2;
            tmp13 = __omcQ_24tmpVar13;
          }
          _size = tmp13;
          tmp1 = modelica_integer_max((modelica_integer)(_size),(modelica_integer)(_exps_len));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,9,4) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          if (listEmpty(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          
          _vl = tmpMeta16;
          /* Pattern matching succeeded */
          {
            modelica_integer tmp19;
            modelica_integer __omcQ_24tmpVar15;
            modelica_integer __omcQ_24tmpVar14;
            modelica_integer tmp21;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _vl;
            tmp19 = 0; /* intAdd lacks default-value */
            while(1) {
              tmp21 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp21--;
              }
              if (tmp21 == 0) {
                __omcQ_24tmpVar14 = omc_EvaluateFunctions_getScalarVarSize(threadData, _v);
                if (tmp19)
                {
                  __omcQ_24tmpVar15 = __omcQ_24tmpVar14 + __omcQ_24tmpVar15;
                }
                else
                {
                  __omcQ_24tmpVar15 = __omcQ_24tmpVar14;
                  tmp19 = 1;
                }
              } else if (tmp21 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp19) goto goto_2;
            tmp20 = __omcQ_24tmpVar15;
          }
          tmp1 = tmp20;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cref = tmpMeta22;
          /* Pattern matching succeeded */
          tmp1 = (omc_ComponentReference_isArrayElement(threadData, _cref)?listLength(omc_ComponentReference_expandCref(threadData, _cref, 1 /* true */)):((modelica_integer) 1));
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,9,4) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 3));
          if (listEmpty(tmpMeta25)) goto tmp3_end;
          tmpMeta26 = MMC_CAR(tmpMeta25);
          tmpMeta27 = MMC_CDR(tmpMeta25);
          
          _vl = tmpMeta25;
          /* Pattern matching succeeded */
          {
            modelica_integer tmp28;
            modelica_integer __omcQ_24tmpVar17;
            modelica_integer __omcQ_24tmpVar16;
            modelica_integer tmp30;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _vl;
            tmp28 = 0; /* intAdd lacks default-value */
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar16 = omc_EvaluateFunctions_getScalarVarSize(threadData, _v);
                if (tmp28)
                {
                  __omcQ_24tmpVar17 = __omcQ_24tmpVar16 + __omcQ_24tmpVar17;
                }
                else
                {
                  __omcQ_24tmpVar17 = __omcQ_24tmpVar16;
                  tmp28 = 1;
                }
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            if (!tmp28) goto goto_2;
            tmp29 = __omcQ_24tmpVar17;
          }
          tmp1 = tmp29;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp38;
          modelica_metatype tmpMeta40;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta32,14,2) == 0) goto tmp3_end;
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          if (listEmpty(tmpMeta33)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmpMeta33);
          tmpMeta35 = MMC_CDR(tmpMeta33);
          
          _tyl = tmpMeta33;
          /* Pattern matching succeeded */
          _size = ((modelica_integer) 0);

          {
            modelica_metatype _ty;
            for (tmpMeta36 = _tyl; !listEmpty(tmpMeta36); tmpMeta36=MMC_CDR(tmpMeta36))
            {
              _ty = MMC_CAR(tmpMeta36);
              _vl = omc_EvaluateFunctions_getVarLstFromType(threadData, _ty);

              if((!listEmpty(_vl)))
              {
                {
                  modelica_integer tmp37;
                  modelica_integer __omcQ_24tmpVar19;
                  modelica_integer __omcQ_24tmpVar18;
                  modelica_integer tmp39;
                  modelica_metatype _v_loopVar = 0;
                  modelica_metatype _v;
                  _v_loopVar = _vl;
                  tmp37 = 0; /* intAdd lacks default-value */
                  while(1) {
                    tmp39 = 1;
                    if (!listEmpty(_v_loopVar)) {
                      _v = MMC_CAR(_v_loopVar);
                      _v_loopVar = MMC_CDR(_v_loopVar);
                      tmp39--;
                    }
                    if (tmp39 == 0) {
                      __omcQ_24tmpVar18 = omc_EvaluateFunctions_getScalarVarSize(threadData, _v);
                      if (tmp37)
                      {
                        __omcQ_24tmpVar19 = __omcQ_24tmpVar18 + __omcQ_24tmpVar19;
                      }
                      else
                      {
                        __omcQ_24tmpVar19 = __omcQ_24tmpVar18;
                        tmp37 = 1;
                      }
                    } else if (tmp39 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  if (!tmp37) goto goto_2;
                  tmp38 = __omcQ_24tmpVar19;
                }
                _size = _size + tmp38;
              }
            }
          }
          tmp1 = _size;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _size = tmp1;
  _return: OMC_LABEL_UNUSED
  return _size;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getScalarExpSize(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_integer _size;
  modelica_metatype out_size;
  _size = omc_EvaluateFunctions_getScalarExpSize(threadData, _inExp);
  out_size = mmc_mk_icon(_size);
  return out_size;
}

DLLDirection
modelica_metatype omc_EvaluateFunctions_getRecordScalars(threadData_t *threadData, modelica_metatype _crefIn)
{
  modelica_metatype _crefsOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefsOut has no default value.
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
          _crefsOut = omc_ComponentReference_expandCref(threadData, _crefIn, 1 /* true */);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
          _crefsOut = tmpMeta5;
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
  return _crefsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setTypesForScalarCrefs(threadData_t *threadData, modelica_metatype _allCrefs, modelica_metatype _types)
{
  modelica_metatype _crefsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefsOut has no default value.
  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp4;
    modelica_metatype _cr_loopVar = 0;
    modelica_metatype _cr;
    modelica_metatype _ty_loopVar = 0;
    modelica_metatype _ty;
    _cr_loopVar = _allCrefs;
    _ty_loopVar = _types;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar21;
    while(1) {
      tmp4 = 2;
      if (!listEmpty(_cr_loopVar)) {
        _cr = MMC_CAR(_cr_loopVar);
        _cr_loopVar = MMC_CDR(_cr_loopVar);
        tmp4--;
      }if (!listEmpty(_ty_loopVar)) {
        _ty = MMC_CAR(_ty_loopVar);
        _ty_loopVar = MMC_CDR(_ty_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar20 = omc_ComponentReference_crefSetLastType(threadData, _cr, _ty);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 2) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar21;
  }
  _crefsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefsOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_isNotComplexVar(threadData_t *threadData, modelica_metatype _inElem)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inElem;
    {
      modelica_metatype _dimints = NULL;
      modelica_metatype _dims = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dimints has no default value.
      // _dims has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,9,4) == 0) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _dims = tmpMeta8;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _dimints = omc_List_map(threadData, _dims, boxvar_Expression_dimensionSize);

          /* Pattern-matching assignment */
          tmp9 = (mmc_unbox_integer(listHead(_dimints)) != ((modelica_integer) 0));
          if (1 /* true */ != tmp9) goto goto_2;
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _dims = tmpMeta11;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _dimints = omc_List_map(threadData, _dims, boxvar_Expression_dimensionSize);

          /* Pattern-matching assignment */
          tmp12 = (mmc_unbox_integer(listHead(_dimints)) != ((modelica_integer) 0));
          if (1 /* true */ != tmp12) goto goto_2;
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_isNotComplexVar(threadData_t *threadData, modelica_metatype _inElem)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_EvaluateFunctions_isNotComplexVar(threadData, _inElem);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_subsLstString(threadData_t *threadData, modelica_metatype _subs)
{
  modelica_string _s = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT17,stringDelimitList(omc_List_map(threadData, _subs, boxvar_ExpressionDump_subscriptString), _OMC_LIT18));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT19);
  _s = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandDimension(threadData_t *threadData, modelica_metatype _dims, modelica_metatype _subsIn)
{
  modelica_metatype _subsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subsOut has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = _dims;
    {
      modelica_integer _size;
      modelica_metatype _range = NULL;
      modelica_metatype _dim = NULL;
      modelica_metatype _sub = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _subs = NULL;
      modelica_metatype _subsLst = NULL;
      modelica_metatype _subsLst1 = NULL;
      modelica_metatype _subFold = NULL;
      modelica_metatype tmpMeta3;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _size has no default value.
      // _range has no default value.
      // _dim has no default value.
      // _sub has no default value.
      // _rest has no default value.
      // _subs has no default value.
      // _subsLst has no default value.
      // _subsLst1 has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _subFold = tmpMeta3;
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_CAR(tmp5_1);
          tmpMeta8 = MMC_CDR(tmp5_1);
          _dim = tmpMeta7;
          _rest = tmpMeta8;
          /* Pattern matching succeeded */
          _size = omc_Expression_dimensionSize(threadData, _dim);

          _range = omc_List_intRange(threadData, _size);

          _subs = omc_List_map(threadData, _range, boxvar_Expression_intSubscript);

          _subsLst = omc_List_map(threadData, _subs, boxvar_List_create);

          {
            modelica_metatype _sub;
            for (tmpMeta9 = _subsIn; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _sub = MMC_CAR(tmpMeta9);
              _subsLst1 = omc_List_map1r(threadData, _subsLst, boxvar_listAppend, _sub);

              _subFold = listAppend(_subFold, _subsLst1);
            }
          }

          if(listEmpty(_subsIn))
          {
            _subFold = _subsLst;
          }
          /* Tail recursive call */
          _dims = _rest;
          _subsIn = _subFold;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp4_done;
        }
        case 1: {
          if (!listEmpty(tmp5_1)) goto tmp4_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _subsIn;
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
  _subsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _subsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getScalarsForComplexVar(threadData_t *threadData, modelica_metatype _inElem)
{
  modelica_metatype _crefsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inElem;
    {
      modelica_metatype _dims = NULL;
      modelica_metatype _subslst = NULL;
      modelica_metatype _subslst1 = NULL;
      modelica_metatype _subslst2 = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _dimensions = NULL;
      modelica_metatype _dimensions2 = NULL;
      modelica_metatype _varLst = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _crefLst = NULL;
      modelica_metatype _types = NULL;
      modelica_metatype _names = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _dims has no default value.
      // _subslst has no default value.
      // _subslst1 has no default value.
      // _subslst2 has no default value.
      // _cref has no default value.
      // _dimensions has no default value.
      // _dimensions2 has no default value.
      // _varLst has no default value.
      // _crefs has no default value.
      // _crefLst has no default value.
      // _types has no default value.
      // _names has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,9,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _cref = tmpMeta6;
          _varLst = tmpMeta8;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _names = omc_List_map(threadData, _varLst, boxvar_DAEUtil_typeVarIdent);

          _types = omc_List_map(threadData, _varLst, boxvar_DAEUtil_varType);

          _crefs = omc_List_map1(threadData, _names, boxvar_ComponentReference_appendStringCref, _cref);

          _crefs = omc_EvaluateFunctions_setTypesForScalarCrefs(threadData, _crefs, _types);

          _crefLst = omc_List_map1(threadData, _crefs, boxvar_ComponentReference_expandCref, mmc_mk_boolean(1 /* true */));
          tmpMeta1 = omc_List_flatten(threadData, _crefLst);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _cref = tmpMeta9;
          _dims = tmpMeta11;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _subslst = omc_EvaluateFunctions_expandDimension(threadData, _dims, tmpMeta12);
          tmpMeta1 = omc_List_map1r(threadData, _subslst, boxvar_ComponentReference_subscriptCref, _cref);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,0,1) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _cref = tmpMeta13;
          _dims = tmpMeta15;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _subslst = omc_EvaluateFunctions_expandDimension(threadData, _dims, tmpMeta16);
          tmpMeta1 = omc_List_map1r(threadData, _subslst, boxvar_ComponentReference_subscriptCref, _cref);
          goto tmp3_done;
        }
        case 3: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,6,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,6,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          
          _cref = tmpMeta17;
          _dimensions2 = tmpMeta20;
          _dimensions = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          _subslst1 = omc_EvaluateFunctions_expandDimension(threadData, _dimensions, tmpMeta22);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          _subslst2 = omc_EvaluateFunctions_expandDimension(threadData, _dimensions2, tmpMeta23);

          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          _subslst = tmpMeta24;

          {
            modelica_metatype _subs;
            for (tmpMeta25 = _subslst1; !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
            {
              _subs = MMC_CAR(tmpMeta25);
              {
                modelica_metatype _subs2;
                for (tmpMeta26 = _subslst2; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
                {
                  _subs2 = MMC_CAR(tmpMeta26);
                  tmpMeta27 = mmc_mk_cons(listAppend(_subs, _subs2), _subslst);
                  _subslst = tmpMeta27;
                }
              }
            }
          }
          tmpMeta1 = omc_List_map1r(threadData, _subslst, boxvar_ComponentReference_subscriptCref, _cref);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,6,2) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 3));
          
          _cref = tmpMeta30;
          _dimensions = tmpMeta32;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta33 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta34 = stringAppend(_OMC_LIT20,stringDelimitList(omc_List_map(threadData, tmpMeta33, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT13));
            tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta35),stdout);
          }
          tmpMeta1 = omc_ComponentReference_expandArrayCref(threadData, _cref, _dimensions);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta37,5,5) == 0) goto tmp3_end;
          
          _cref = tmpMeta36;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta38 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta39 = stringAppend(_OMC_LIT21,stringDelimitList(omc_List_map(threadData, tmpMeta38, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT13));
            tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta40),stdout);
          }
          tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta41;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta43,14,2) == 0) goto tmp3_end;
          
          _cref = tmpMeta42;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta44 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta45 = stringAppend(_OMC_LIT22,stringDelimitList(omc_List_map(threadData, tmpMeta44, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT13));
            tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta46),stdout);
          }
          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta47;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta48;
          
          /* Pattern matching succeeded */
          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta48;
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
  _crefsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expType(threadData_t *threadData, modelica_metatype _eIn)
{
  modelica_metatype _tOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eIn;
    {
      modelica_metatype _t = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _t has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _t = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _t;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT23,omc_ExpressionBasics_printExpStr(threadData, _eIn));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT13);
          fputs(MMC_STRINGDATA(tmpMeta8),stdout);
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
  _tOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_equationToStmt(threadData_t *threadData, modelica_metatype _eqIn)
{
  modelica_metatype _stmtOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eqIn;
    {
      modelica_metatype _source = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _typ = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _typ has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          _source = tmpMeta8;
          /* Pattern matching succeeded */
          _typ = omc_EvaluateFunctions_expType(threadData, _lhs);
          tmpMeta9 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _typ, _lhs, _rhs, _source);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_eqIn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = stringAppend(_OMC_LIT24,omc_BackendDump_dumpEqnsStr(threadData, tmpMeta10));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT13);
          fputs(MMC_STRINGDATA(tmpMeta12),stdout);
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
  _stmtOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateConstantFunction__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_integer _recursionLimit, modelica_boolean *out_cont, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _cont;
  modelica_metatype _outTpl = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _cont has no default value.
  // _outTpl has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inTpl;
    {
      modelica_integer _idx;
      modelica_metatype _rhs = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _funcs = NULL;
      modelica_metatype _addEqs = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmtsIn = NULL;
      modelica_metatype _tpl = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _idx has no default value.
      // _rhs has no default value.
      // _lhs has no default value.
      // _funcs has no default value.
      // _addEqs has no default value.
      // _stmts has no default value.
      // _stmtsIn has no default value.
      // _tpl has no default value.
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
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          _lhs = tmpMeta6;
          _funcs = tmpMeta7;
          _idx = tmp9  /* pattern as ty=Integer */;
          _stmtsIn = tmpMeta10;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _rhs = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _inExp, _lhs, _funcs, _idx, tmpMeta11, _recursionLimit ,&_lhs ,&_addEqs ,&_funcs ,&_idx, NULL, NULL);

          _stmts = omc_List_map(threadData, _addEqs, boxvar_EvaluateFunctions_equationToStmt);
          tmpMeta12 = mmc_mk_box4(0, _lhs, _funcs, mmc_mk_integer(_idx), listAppend(_stmts, _stmtsIn));
          tmpMeta[0+0] = _rhs;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,35,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _rhs = tmpMeta13;
          /* Pattern matching succeeded */
          _rhs = omc_EvaluateFunctions_evaluateConstantFunction__traverser(threadData, _rhs, _inTpl, _recursionLimit ,NULL ,&_tpl);
          tmpMeta[0+0] = _rhs;
          tmp1_c1 = 1 /* true */;
          tmpMeta[0+2] = _tpl;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmp1_c1 = 0 /* false */;
          tmpMeta[0+2] = _inTpl;
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
  _cont = tmp1_c1;
  _outTpl = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunction__traverser(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype _recursionLimit, modelica_metatype *out_cont, modelica_metatype *out_outTpl)
{
  modelica_integer tmp1;
  modelica_boolean _cont;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_recursionLimit);
  _outExp = omc_EvaluateFunctions_evaluateConstantFunction__traverser(threadData, _inExp, _inTpl, tmp1, &_cont, out_outTpl);
  /* skip box _outExp; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _outTpl; tuple<DAE.Exp, AvlTreePathFunction.Tree, #Integer, list<DAE.Statement>> */
  return _outExp;
}

static modelica_metatype closure1_EvaluateFunctions_evaluateConstantFunction__traverser(threadData_t *thData, modelica_metatype closure, modelica_metatype inExp, modelica_metatype inTpl, modelica_metatype tmp7, modelica_metatype tmp8)
{
  modelica_metatype recursionLimit = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_EvaluateFunctions_evaluateConstantFunction__traverser(thData, inExp, inTpl, recursionLimit, tmp7, tmp8);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lhs, modelica_metatype _funcs, modelica_integer _eqIdx, modelica_integer _recursionLimit, modelica_metatype *out_outLhs, modelica_metatype *out_outFuncs, modelica_integer *out_outEqIdx, modelica_metatype *out_addedStmts)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outLhs = NULL;
  modelica_metatype _outFuncs = NULL;
  modelica_integer _outEqIdx;
  modelica_metatype _addedStmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outLhs has no default value.
  // _outFuncs has no default value.
  // _outEqIdx has no default value.
  // _addedStmts has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta9 = mmc_mk_box1(0, mmc_mk_integer(_recursionLimit));
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = mmc_mk_box4(0, _lhs, _funcs, mmc_mk_integer(_eqIdx), tmpMeta10);
  tmpMeta12 = omc_Expression_traverseExpTopDown(threadData, _exp, (modelica_fnptr) mmc_mk_box2(0,closure1_EvaluateFunctions_evaluateConstantFunction__traverser,tmpMeta9), tmpMeta11, &tmpMeta1);
  _outExp = tmpMeta12;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _outLhs = tmpMeta2;
  _outFuncs = tmpMeta3;
  _outEqIdx = tmp5  /* pattern as ty=Integer */;
  _addedStmts = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  if (out_outLhs) { *out_outLhs = _outLhs; }
  if (out_outFuncs) { *out_outFuncs = _outFuncs; }
  if (out_outEqIdx) { *out_outEqIdx = _outEqIdx; }
  if (out_addedStmts) { *out_addedStmts = _addedStmts; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunctionCall(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _lhs, modelica_metatype _funcs, modelica_metatype _eqIdx, modelica_metatype _recursionLimit, modelica_metatype *out_outLhs, modelica_metatype *out_outFuncs, modelica_metatype *out_outEqIdx, modelica_metatype *out_addedStmts)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _outEqIdx;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_eqIdx);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _outExp = omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData, _exp, _lhs, _funcs, tmp1, tmp2, out_outLhs, out_outFuncs, &_outEqIdx, out_addedStmts);
  /* skip box _outExp; DAE.Exp */
  /* skip box _outLhs; DAE.Exp */
  /* skip box _outFuncs; AvlTreePathFunction.Tree */
  if (out_outEqIdx) { *out_outEqIdx = mmc_mk_icon(_outEqIdx); }
  /* skip box _addedStmts; list<DAE.Statement> */
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _stmtLstsIn)
{
  modelica_metatype _stmtLstsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtLstsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _elseIn;
    {
      modelica_metatype _else1 = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _stmtsLst = NULL;
      int tmp4;
      // _else1 has no default value.
      // _stmts has no default value.
      // _stmtsLst has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _stmts = tmpMeta5;
          _else1 = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(_stmts, _stmtLstsIn);
          _stmtsLst = tmpMeta7;
          /* Tail recursive call */
          _elseIn = _else1;
          _stmtLstsIn = _stmtsLst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _stmts = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(_stmts, _stmtLstsIn);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _stmtLstsIn;
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
  _stmtLstsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtLstsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementsOutputs(threadData_t *threadData, modelica_metatype _statements, modelica_metatype _funcTree)
{
  modelica_metatype _outputs = NULL;
  modelica_metatype _lhs_expl = NULL;
  modelica_metatype _lhs_set = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outputs has no default value.
  // _lhs_expl has no default value.
  // _lhs_set has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lhs_expl = omc_List_fold1(threadData, _statements, boxvar_EvaluateFunctions_getStatementLHSScalar, _funcTree, tmpMeta1);

  _lhs_set = omc_HashSetExp_emptyHashSetSized(threadData, omc_Util_nextPrime(threadData, listLength(_lhs_expl)));

  _lhs_set = omc_List_fold(threadData, _lhs_expl, boxvar_BaseHashSet_add, _lhs_set);

  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp5;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = omc_BaseHashSet_hashSetList(threadData, _lhs_set);
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar23;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        __omcQ_24tmpVar22 = omc_Expression_expCref(threadData, _e);
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar23;
  }
  _outputs = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _outputs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementLHSScalar(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _funcTree, modelica_metatype _expsIn)
{
  modelica_metatype _lhs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lhs has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _lhsCref = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _func = NULL;
      modelica_metatype _outputCrefs = NULL;
      modelica_metatype _algs = NULL;
      modelica_metatype _elements = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _stmtLst1 = NULL;
      modelica_metatype _stmtLstLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _lhsCref has no default value.
      // _exp has no default value.
      // _func has no default value.
      // _outputCrefs has no default value.
      // _algs has no default value.
      // _elements has no default value.
      // _expLst has no default value.
      // _stmtLst1 has no default value.
      // _stmtLstLst has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,13,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _exp = tmpMeta6;
          _path = tmpMeta8;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmpMeta9 = omc_AvlTreePathFunction_get(threadData, _funcTree, _path);
          if (optionNone(tmpMeta9)) goto goto_2;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          _func = tmpMeta10;

          _elements = omc_DAEUtil_getFunctionElements(threadData, _func);

          _algs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isAlgorithm);

          _stmtLstLst = omc_List_map(threadData, _algs, boxvar_DAEUtil_getStatement);

          _stmtLst1 = omc_List_flatten(threadData, _stmtLstLst);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _expLst = omc_List_fold1(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHSScalar, _funcTree, tmpMeta11);

          _outputCrefs = omc_List_map(threadData, _expLst, boxvar_Expression_expCref);

          _lhsCref = omc_Expression_expCref(threadData, _exp);

          _outputCrefs = omc_List_filterOnTrue(threadData, _outputCrefs, boxvar_ComponentReference_crefIsNotIdent);

          _outputCrefs = omc_List_map(threadData, _outputCrefs, boxvar_ComponentReference_crefStripFirstIdent);

          _outputCrefs = omc_List_map1(threadData, _outputCrefs, boxvar_ComponentReference_joinCrefsR, _lhsCref);

          _expLst = omc_List_map(threadData, _outputCrefs, boxvar_Expression_crefExp);
          tmpMeta1 = listAppend(_expLst, _expsIn);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp = tmpMeta12;
          /* Pattern matching succeeded */
          _expLst = omc_Expression_getComplexContents(threadData, _exp);
          tmpMeta1 = listAppend(_expLst, _expsIn);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _expLst = omc_EvaluateFunctions_getStatementLHS(threadData, _stmt, tmpMeta13);
          tmpMeta1 = listAppend(_expLst, _expsIn);
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
  _lhs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getStatementLHS(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _expsIn)
{
  modelica_metatype _lhs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lhs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _else_ = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _stmt1 = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _stmtLst1 = NULL;
      modelica_metatype _stmtLst2 = NULL;
      modelica_metatype _stmtLstLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _else_ has no default value.
      // _exp has no default value.
      // _stmt1 has no default value.
      // _expLst has no default value.
      // _stmtLst1 has no default value.
      // _stmtLst2 has no default value.
      // _stmtLstLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 17; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(_exp, _expsIn);
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _expLst = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend(_expLst, _expsIn);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _exp = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_cons(_exp, _expsIn);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _stmtLst1 = tmpMeta11;
          _else_ = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmtLstLst = omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData, _else_, tmpMeta13);

          _stmtLst2 = omc_List_flatten(threadData, _stmtLstLst);

          _stmtLst2 = listAppend(_stmtLst1, _stmtLst2);
          tmpMeta1 = omc_List_fold(threadData, _stmtLst2, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,6) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _stmtLst1 = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,7) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _stmtLst1 = tmpMeta15;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,3) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _stmtLst1 = tmpMeta16;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_List_fold(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,6) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (optionNone(tmpMeta18)) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          
          _stmtLst1 = tmpMeta17;
          _stmt1 = tmpMeta19;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta20 = stringAppend(_OMC_LIT25,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta20),stdout);
          }

          _expLst = omc_List_fold(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          /* Tail recursive call */
          _stmt = _stmt1;
          _expsIn = _expLst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,6) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (!optionNone(tmpMeta22)) goto tmp3_end;
          
          _stmtLst1 = tmpMeta21;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta23 = stringAppend(_OMC_LIT25,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta23),stdout);
          }
          tmpMeta1 = omc_List_fold(threadData, _stmtLst1, boxvar_EvaluateFunctions_getStatementLHS, _expsIn);
          goto tmp3_done;
        }
        case 9: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _expsIn;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta24 = stringAppend(_OMC_LIT26,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta24),stdout);
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta25 = stringAppend(_OMC_LIT27,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta25),stdout);
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 12: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _expsIn;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta26 = stringAppend(_OMC_LIT28,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta26),stdout);
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta27 = stringAppend(_OMC_LIT29,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta27),stdout);
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta28 = stringAppend(_OMC_LIT30,omc_DAEDump_ppStatementStr(threadData, _stmt));
            fputs(MMC_STRINGDATA(tmpMeta28),stdout);
          }
          goto goto_2;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta29;
          
          /* Pattern matching succeeded */
          tmpMeta29 = stringAppend(_OMC_LIT31,omc_DAEDump_ppStatementStr(threadData, _stmt));
          fputs(MMC_STRINGDATA(tmpMeta29),stdout);
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
  _lhs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lhs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_replaceExps(threadData_t *threadData, modelica_metatype _replIn, modelica_metatype _expsIn)
{
  modelica_metatype _expsOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expsOut has no default value.
  _expsOut = omc_List_map2__2(threadData, _expsIn, boxvar_BackendVarTransform_replaceExp, _replIn, mmc_mk_none(), NULL);
  _return: OMC_LABEL_UNUSED
  return _expsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_equationToStatement(threadData_t *threadData, modelica_metatype _eqIn)
{
  modelica_metatype _stmtOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eqIn;
    {
      modelica_metatype _source = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _typ = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _source has no default value.
      // _rhs has no default value.
      // _lhs has no default value.
      // _typ has no default value.
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
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          _source = tmpMeta8;
          /* Pattern matching succeeded */
          _typ = omc_Expression_typeof(threadData, _lhs);
          tmpMeta9 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _typ, _lhs, _rhs, _source);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT32),stdout);
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
  _stmtOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_addTplReplacements(threadData_t *threadData, modelica_metatype _replIn, modelica_metatype _e1, modelica_metatype _e2)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _tplLHS = NULL;
      modelica_metatype _tplRHS = NULL;
      modelica_metatype _crefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tplLHS has no default value.
      // _tplRHS has no default value.
      // _crefs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _tplRHS = omc_DAEUtil_getTupleExps(threadData, _e1);

          _tplLHS = omc_DAEUtil_getTupleExps(threadData, _e2);

          _crefs = omc_List_map(threadData, _tplLHS, boxvar_Expression_expCref);
          tmpMeta1 = omc_BackendVarTransform_addReplacements(threadData, _replIn, _crefs, _tplRHS, mmc_mk_none());
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
  _replOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateElse(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _info, modelica_integer _recursionLimit, modelica_boolean *out_isElse)
{
  modelica_metatype _stmtsOut = NULL;
  modelica_boolean _isElse;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtsOut has no default value.
  // _isElse has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _elseIn;
    tmp4_2 = _info;
    {
      modelica_boolean _isCon;
      modelica_boolean _isElseIf;
      modelica_integer _idx;
      modelica_metatype _replIn = NULL;
      modelica_metatype _expIf = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _funcTree = NULL;
      modelica_metatype _stmts = NULL;
      int tmp4;
      // _isCon has no default value.
      // _isElseIf has no default value.
      // _idx has no default value.
      // _replIn has no default value.
      // _expIf has no default value.
      // _exp1 has no default value.
      // _else_ has no default value.
      // _funcTree has no default value.
      // _stmts has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _expIf = tmpMeta5;
          _stmts = tmpMeta6;
          _else_ = tmpMeta7;
          _replIn = tmpMeta8;
          _funcTree = tmpMeta9;
          _idx = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT33),stdout);
          }

          _exp1 = omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData, _expIf, _expIf, _funcTree, _idx, _recursionLimit, NULL, NULL, NULL, NULL);

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp1, _replIn, mmc_mk_none(), NULL);

          _exp1 = omc_ExpressionSimplify_simplify(threadData, _exp1, NULL);

          _isCon = omc_Expression_isConst(threadData, _exp1);

          _isElseIf = (_isCon?omc_Expression_toBool(threadData, _exp1):0 /* false */);

          if((_isCon && (!_isElseIf)))
          {
            _stmts = omc_EvaluateFunctions_evaluateElse(threadData, _else_, _info, _recursionLimit ,&_isElseIf);
          }
          tmpMeta[0+0] = _stmts;
          tmp1_c1 = _isElseIf;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _stmts = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _stmts;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta13;
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
  _stmtsOut = tmpMeta[0+0];
  _isElse = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_isElse) { *out_isElse = _isElse; }
  return _stmtsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateElse(threadData_t *threadData, modelica_metatype _elseIn, modelica_metatype _info, modelica_metatype _recursionLimit, modelica_metatype *out_isElse)
{
  modelica_integer tmp1;
  modelica_boolean _isElse;
  modelica_metatype _stmtsOut = NULL;
  tmp1 = mmc_unbox_integer(_recursionLimit);
  _stmtsOut = omc_EvaluateFunctions_evaluateElse(threadData, _elseIn, _info, tmp1, &_isElse);
  /* skip box _stmtsOut; list<DAE.Statement> */
  if (out_isElse) { *out_isElse = mmc_mk_icon(_isElse); }
  return _stmtsOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_evaluateIfStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _info, modelica_integer _recursionLimit, modelica_metatype *out_stmtsOut, modelica_metatype *out_replOut)
{
  modelica_boolean _isEval;
  modelica_metatype _stmtsOut = NULL;
  modelica_metatype _replOut = NULL;
  modelica_boolean tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEval has no default value.
  // _stmtsOut has no default value.
  // _replOut has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _stmtIn;
    tmp4_2 = _info;
    {
      modelica_boolean _isIf;
      modelica_boolean _isCon;
      modelica_boolean _isElse;
      modelica_boolean _eval;
      modelica_integer _idx;
      modelica_metatype _repl = NULL;
      modelica_metatype _replIn = NULL;
      modelica_metatype _else_ = NULL;
      modelica_metatype _expIf = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _funcTree = NULL;
      modelica_metatype _stmtsIf = NULL;
      modelica_metatype _stmts1 = NULL;
      modelica_metatype _stmtsElse = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isIf has no default value.
      // _isCon has no default value.
      // _isElse has no default value.
      // _eval has no default value.
      // _idx has no default value.
      // _repl has no default value.
      // _replIn has no default value.
      // _else_ has no default value.
      // _expIf has no default value.
      // _exp1 has no default value.
      // _funcTree has no default value.
      // _stmtsIf has no default value.
      // _stmts1 has no default value.
      // _stmtsElse has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _expIf = tmpMeta6;
          _stmtsIf = tmpMeta7;
          _else_ = tmpMeta8;
          _replIn = tmpMeta9;
          _funcTree = tmpMeta10;
          _idx = tmp12  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT34),stdout);
          }

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _expIf, _replIn, mmc_mk_none(), NULL);

          _exp1 = omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData, _exp1, _exp1, _funcTree, _idx, _recursionLimit, NULL, NULL, NULL, NULL);

          _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp1, _replIn, mmc_mk_none(), NULL);

          _exp1 = omc_ExpressionSimplify_simplify(threadData, _exp1, NULL);

          _isCon = omc_Expression_isConst(threadData, _exp1);

          _isIf = (_isCon?omc_Expression_toBool(threadData, _exp1):0 /* false */);

          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta13 = stringAppend(_OMC_LIT35,(_isCon?_OMC_LIT36:_OMC_LIT37));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT38);
            tmpMeta15 = stringAppend(tmpMeta14,(_isIf?_OMC_LIT36:_OMC_LIT37));
            tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta16),stdout);
          }

          if((_isIf && _isCon))
          {
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            _stmts1 = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _stmtsIf, _funcTree, _replIn, _idx, tmpMeta17, _recursionLimit ,&_funcTree ,&_repl ,&_idx);
          }
          else
          {
            tmpMeta18 = mmc_mk_cons(_stmtIn, MMC_REFSTRUCTLIT(mmc_nil));
            _stmts1 = tmpMeta18;

            _repl = _replIn;
          }

          if((omc_Flags_isSet(threadData, _OMC_LIT16) && (!_isIf)))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT39),stdout);
          }

          if((_isCon && (!_isIf)))
          {
            _stmtsElse = omc_EvaluateFunctions_evaluateElse(threadData, _else_, _info, _recursionLimit ,&_isElse);
          }
          else
          {
            tmpMeta19 = mmc_mk_cons(_stmtIn, MMC_REFSTRUCTLIT(mmc_nil));
            _stmtsElse = tmpMeta19;

            _isElse = 0 /* false */;
          }

          if((omc_Flags_isSet(threadData, _OMC_LIT16) && (!_isIf)))
          {
            tmpMeta20 = stringAppend(_OMC_LIT40,(_isElse?_OMC_LIT36:_OMC_LIT37));
            tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta21),stdout);
          }

          if((_isCon && _isElse))
          {
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            _stmts1 = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _stmtsElse, _funcTree, _replIn, _idx, tmpMeta22, _recursionLimit ,&_funcTree ,&_repl ,&_idx);
          }

          _eval = (_isCon && (_isIf || _isElse));
          tmp1_c0 = _eval;
          tmpMeta[0+1] = _stmts1;
          tmpMeta[0+2] = _repl;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT41),stdout);
          }
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
  _isEval = tmp1_c0;
  _stmtsOut = tmpMeta[0+1];
  _replOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_stmtsOut) { *out_stmtsOut = _stmtsOut; }
  if (out_replOut) { *out_replOut = _replOut; }
  return _isEval;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateIfStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _info, modelica_metatype _recursionLimit, modelica_metatype *out_stmtsOut, modelica_metatype *out_replOut)
{
  modelica_integer tmp1;
  modelica_boolean _isEval;
  modelica_metatype out_isEval;
  tmp1 = mmc_unbox_integer(_recursionLimit);
  _isEval = omc_EvaluateFunctions_evaluateIfStatement(threadData, _stmtIn, _info, tmp1, out_stmtsOut, out_replOut);
  out_isEval = mmc_mk_icon(_isEval);
  /* skip box _stmtsOut; list<DAE.Statement> */
  /* skip box _replOut; BackendVarTransform.VariableReplacements */
  return out_isEval;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_EvaluateFunctions_getRangeBounds(threadData_t *threadData, modelica_metatype _range, modelica_integer *out_stop, modelica_integer *out_step)
{
  modelica_integer _start;
  modelica_integer _stop;
  modelica_integer _step;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _start has no default value.
  // _stop has no default value.
  // _step has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _range;
    {
      modelica_integer _i1;
      modelica_integer _i2;
      modelica_integer _i3;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _i1 has no default value.
      // _i2 has no default value.
      // _i3 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta9)) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _i1 = tmp8  /* pattern as ty=Integer */;
          _i2 = tmp12  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1_c0 = _i1;
          tmp1_c1 = _i2;
          tmp1_c2 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,18,4) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,1) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta16)) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          _i1 = tmp15  /* pattern as ty=Integer */;
          _i3 = tmp19  /* pattern as ty=Integer */;
          _i2 = tmp22  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1_c0 = _i1;
          tmp1_c1 = _i2;
          tmp1_c2 = _i3;
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
  _start = tmp1_c0;
  _stop = tmp1_c1;
  _step = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_stop) { *out_stop = _stop; }
  if (out_step) { *out_step = _step; }
  return _start;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_getRangeBounds(threadData_t *threadData, modelica_metatype _range, modelica_metatype *out_stop, modelica_metatype *out_step)
{
  modelica_integer _stop;
  modelica_integer _step;
  modelica_integer _start;
  modelica_metatype out_start;
  _start = omc_EvaluateFunctions_getRangeBounds(threadData, _range, &_stop, &_step);
  out_start = mmc_mk_icon(_start);
  if (out_stop) { *out_stop = mmc_mk_icon(_stop); }
  if (out_step) { *out_step = mmc_mk_icon(_step); }
  return out_start;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateForStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _funcTreeIn, modelica_metatype _replIn, modelica_integer _idxIn, modelica_integer _recursionLimit, modelica_metatype *out_funcTreeOut, modelica_metatype *out_repl, modelica_integer *out_idxOut)
{
  modelica_metatype _stmtsOut = NULL;
  modelica_metatype _funcTreeOut = NULL;
  modelica_metatype _repl = NULL;
  modelica_integer _idxOut;
  modelica_boolean _hasNoRepl;
  modelica_integer _i;
  modelica_integer _start;
  modelica_integer _stop;
  modelica_integer _step;
  modelica_string _iter = NULL;
  modelica_metatype _range = NULL;
  modelica_metatype _outputs = NULL;
  modelica_metatype _lhsExps = NULL;
  modelica_metatype _lhsExpLst = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _stmtsIn = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtsOut has no default value.
  // _funcTreeOut has no default value.
  // _repl has no default value.
  // _idxOut has no default value.
  // _hasNoRepl has no default value.
  // _i has no default value.
  // _start has no default value.
  // _stop has no default value.
  // _step has no default value.
  // _iter has no default value.
  // _range has no default value.
  // _outputs has no default value.
  // _lhsExps has no default value.
  // _lhsExpLst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _stmts = tmpMeta1;
  // _stmtsIn has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _stmtIn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,4,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 6));
  _iter = tmpMeta3;
  _range = tmpMeta4;
  _stmtsIn = tmpMeta5;

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp7_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_integer tmp16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          /* Pattern matching succeeded */
          _range = omc_BackendVarTransform_replaceExp(threadData, _range, _replIn, mmc_mk_none(), NULL);

          _start = omc_EvaluateFunctions_getRangeBounds(threadData, _range ,&_stop ,&_step);

          /* Pattern-matching assignment */
          tmp10 = (_step == ((modelica_integer) 1));
          if (1 /* true */ != tmp10) goto goto_6;

          /* Pattern-matching assignment */
          tmp11 = (_stop >= _start);
          if (1 /* true */ != tmp11) goto goto_6;

          _repl = _replIn;

          tmp15 = _start; tmp16 = 1; tmp17 = _stop;
          if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
          {
            modelica_integer _i;
            for(_i = _start; in_range_integer(_i, tmp15, tmp17); _i += tmp16)
            {
              tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta13 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(_i));
              _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _iter, _OMC_LIT42, tmpMeta12), tmpMeta13, mmc_mk_none());

              tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
              _stmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _stmtsIn, _funcTreeIn, _repl, _i, tmpMeta14, _recursionLimit ,NULL ,&_repl ,NULL);

              _outputs = omc_EvaluateFunctions_getStatementsOutputs(threadData, _stmts, _funcTreeIn);

              _hasNoRepl = mmc_unbox_boolean(omc_List_applyAndFold1(threadData, _outputs, boxvar_boolAnd, boxvar_BackendVarTransform_hasNoReplacement, _repl, mmc_mk_boolean(1 /* true */)));

              if(_hasNoRepl)
              {
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  fputs(MMC_STRINGDATA(_OMC_LIT43),stdout);
                }

                goto goto_6;
              }
            }
          }

          tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_BackendVarTransform_removeReplacement(threadData, _repl, omc_ComponentReferenceBasics_makeCrefIdent(threadData, _iter, _OMC_LIT42, tmpMeta18));

          _funcTreeOut = _funcTreeIn;

          _idxOut = _idxIn;

          _stmtsOut = _stmts;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta24;
          /* Pattern matching succeeded */
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          _lhsExps = omc_List_fold(threadData, _stmtsIn, boxvar_EvaluateFunctions_getStatementLHS, tmpMeta19);

          _lhsExps = omc_List_unique(threadData, _lhsExps);

          _lhsExpLst = omc_List_map(threadData, _lhsExps, boxvar_Expression_getComplexContents);

          _lhsExps = listAppend(omc_List_flatten(threadData, _lhsExpLst), _lhsExps);

          {
            modelica_metatype __omcQ_24tmpVar25;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar24;
            modelica_integer tmp23;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _lhsExps;
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar25 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar25;
            while(1) {
              tmp23 = 1;
              while (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                if (omc_Expression_isCref(threadData, _e)) {
                  tmp23--;
                  break;
                }
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar24 = omc_Expression_expCref(threadData, _e);
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar25;
          }
          _outputs = tmpMeta20;

          _repl = _replIn;

          omc_BackendVarTransform_removeReplacements(threadData, _repl, _outputs);

          tmpMeta24 = mmc_mk_cons(_stmtIn, MMC_REFSTRUCTLIT(mmc_nil));
          _stmtsOut = tmpMeta24;

          _funcTreeOut = _funcTreeIn;

          _idxOut = _idxIn;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      tmp7_done:
      (void)tmp8;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp7_done2;
      goto_6:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp8 < 2) {
        goto tmp7_top;
      }
      MMC_THROW_INTERNAL();
      tmp7_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_funcTreeOut) { *out_funcTreeOut = _funcTreeOut; }
  if (out_repl) { *out_repl = _repl; }
  if (out_idxOut) { *out_idxOut = _idxOut; }
  return _stmtsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateForStatement(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _funcTreeIn, modelica_metatype _replIn, modelica_metatype _idxIn, modelica_metatype _recursionLimit, modelica_metatype *out_funcTreeOut, modelica_metatype *out_repl, modelica_metatype *out_idxOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _idxOut;
  modelica_metatype _stmtsOut = NULL;
  tmp1 = mmc_unbox_integer(_idxIn);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _stmtsOut = omc_EvaluateFunctions_evaluateForStatement(threadData, _stmtIn, _funcTreeIn, _replIn, tmp1, tmp2, out_funcTreeOut, out_repl, &_idxOut);
  /* skip box _stmtsOut; list<DAE.Statement> */
  /* skip box _funcTreeOut; AvlTreePathFunction.Tree */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  if (out_idxOut) { *out_idxOut = mmc_mk_icon(_idxOut); }
  return _stmtsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmts, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_integer __omcQ_24in_5Fidx, modelica_metatype _lstIn, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_integer *out_idx)
{
  modelica_metatype _stmts = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _repl = NULL;
  modelica_integer _idx;
  modelica_metatype _stmtsList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stmts = __omcQ_24in_5Fstmts;
  _funcTree = __omcQ_24in_5FfuncTree;
  _repl = __omcQ_24in_5Frepl;
  _idx = __omcQ_24in_5Fidx;
  // _stmtsList has no default value.
  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp126;
    modelica_metatype _stmt_loopVar = 0;
    modelica_metatype _stmt;
    _stmt_loopVar = _stmts;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar27;
    while(1) {
      tmp126 = 1;
      if (!listEmpty(_stmt_loopVar)) {
        _stmt = MMC_CAR(_stmt_loopVar);
        _stmt_loopVar = MMC_CDR(_stmt_loopVar);
        tmp126--;
      }
      if (tmp126 == 0) {
        { /* match expression */
          modelica_metatype tmp7_1;
          tmp7_1 = _stmt;
          {
            modelica_boolean _isCon;
            modelica_boolean _isRec;
            modelica_boolean _isTpl;
            modelica_boolean _predicted;
            modelica_boolean _eqDim;
            modelica_boolean _isEval;
            modelica_boolean _isArr;
            modelica_integer _size;
            modelica_metatype _cref = NULL;
            modelica_metatype _source = NULL;
            modelica_metatype _exp0 = NULL;
            modelica_metatype _exp1 = NULL;
            modelica_metatype _exp2 = NULL;
            modelica_metatype _cond = NULL;
            modelica_metatype _msg = NULL;
            modelica_metatype _lvl = NULL;
            modelica_metatype _else_ = NULL;
            modelica_metatype _stmt1 = NULL;
            modelica_metatype _typ = NULL;
            modelica_metatype _addEqs = NULL;
            modelica_metatype _scalars = NULL;
            modelica_metatype _varScalars = NULL;
            modelica_metatype _constScalars = NULL;
            modelica_metatype _outputs = NULL;
            modelica_metatype _stmts1 = NULL;
            modelica_metatype _stmts2 = NULL;
            modelica_metatype _stmtsIf = NULL;
            modelica_metatype _addStmts = NULL;
            modelica_metatype _stmtsNew = NULL;
            modelica_metatype _allStmts = NULL;
            modelica_metatype _tplStmts = NULL;
            modelica_metatype _expLst = NULL;
            modelica_metatype _tplExpsLHS = NULL;
            modelica_metatype _tplExpsRHS = NULL;
            modelica_metatype _lhsExps = NULL;
            int tmp7;
            // _isCon has no default value.
            // _isRec has no default value.
            // _isTpl has no default value.
            // _predicted has no default value.
            // _eqDim has no default value.
            // _isEval has no default value.
            // _isArr has no default value.
            // _size has no default value.
            // _cref has no default value.
            // _source has no default value.
            // _exp0 has no default value.
            // _exp1 has no default value.
            // _exp2 has no default value.
            // _cond has no default value.
            // _msg has no default value.
            // _lvl has no default value.
            // _else_ has no default value.
            // _stmt1 has no default value.
            // _typ has no default value.
            // _addEqs has no default value.
            // _scalars has no default value.
            // _varScalars has no default value.
            // _constScalars has no default value.
            // _outputs has no default value.
            // _stmts1 has no default value.
            // _stmts2 has no default value.
            // _stmtsIf has no default value.
            // _addStmts has no default value.
            // _stmtsNew has no default value.
            // _allStmts has no default value.
            // _tplStmts has no default value.
            // _expLst has no default value.
            // _tplExpsLHS has no default value.
            // _tplExpsRHS has no default value.
            // _lhsExps has no default value.
            {
              switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
              case 3: {
                modelica_metatype tmpMeta8;
                modelica_metatype tmpMeta9;
                modelica_metatype tmpMeta10;
                modelica_metatype tmpMeta11;
                modelica_metatype tmpMeta12;
                modelica_metatype tmpMeta13;
                modelica_boolean tmp14;
                modelica_metatype tmpMeta15;
                modelica_metatype tmpMeta16;
                modelica_boolean tmp17;
                modelica_metatype tmpMeta18;
                modelica_metatype tmpMeta19;
                modelica_boolean tmp20;
                modelica_metatype tmpMeta21;
                modelica_metatype tmpMeta22;
                modelica_boolean tmp23;
                modelica_metatype tmpMeta24;
                modelica_metatype tmpMeta25;
                modelica_boolean tmp26;
                modelica_metatype tmpMeta27;
                modelica_metatype tmpMeta28;
                modelica_boolean tmp29;
                modelica_metatype tmpMeta30;
                modelica_metatype tmpMeta31;
                modelica_metatype tmpMeta32;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,0,4) == 0) goto tmp6_end;
                tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 5));
                _typ = tmpMeta8;
                _exp1 = tmpMeta9;
                _exp2 = tmpMeta10;
                _source = tmpMeta11;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta12 = stringAppend(_OMC_LIT44,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta12),stdout);
                }

                _cref = omc_Expression_expCref(threadData, _exp1);

                _scalars = omc_EvaluateFunctions_getRecordScalars(threadData, _cref);

                _exp2 = omc_BackendVarTransform_replaceExp(threadData, _exp2, _repl, mmc_mk_none(), NULL);

                _exp2 = omc_ExpressionSimplify_simplify(threadData, _exp2, NULL);

                _exp2 = omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData, _exp2, _exp1, _funcTree, _idx, _recursionLimit ,&_exp1 ,&_funcTree ,&_idx ,&_addStmts);

                _exp2 = omc_ExpressionSimplify_simplify(threadData, _exp2, NULL);

                _exp2 = omc_Expression_traverseExpBottomUp(threadData, _exp2, boxvar_EvaluateFunctions_unboxExp, mmc_mk_boolean(0 /* false */), NULL);

                _expLst = omc_Expression_getComplexContents(threadData, _exp2);

                _repl = omc_List_fold(threadData, _addStmts, boxvar_EvaluateFunctions_addReplacementRuleForAssignment, _repl);

                _lhsExps = omc_Expression_getComplexContents(threadData, _exp1);

                _outputs = omc_List_map(threadData, _lhsExps, boxvar_Expression_expCref);

                omc_BackendVarTransform_removeReplacements(threadData, _repl, _outputs);

                _isCon = (omc_Expression_isConst(threadData, _exp2) && (!omc_Expression_isCall(threadData, _exp2)));

                _eqDim = (listLength(_scalars) == listLength(_expLst));

                _isRec = (omc_ComponentReference_isRecord(threadData, _cref) || omc_Expression_isRecordCall(threadData, _exp2, _funcTree));

                _isTpl = (omc_Expression_isTuple(threadData, _exp1) && omc_Expression_isTuple(threadData, _exp2));

                tmp14 = (modelica_boolean)(_isRec && _eqDim);
                if(tmp14)
                {
                  tmpMeta15 = _scalars;
                }
                else
                {
                  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta15 = tmpMeta13;
                }
                _scalars = tmpMeta15;

                tmp17 = (modelica_boolean)(_isRec && _eqDim);
                if(tmp17)
                {
                  tmpMeta18 = _expLst;
                }
                else
                {
                  tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta18 = tmpMeta16;
                }
                _expLst = tmpMeta18;

                omc_List_filterOnTrueSync(threadData, _expLst, boxvar_Expression_isNotConst, _scalars ,&_varScalars);

                _expLst = omc_List_filterOnTrueSync(threadData, _expLst, boxvar_Expression_isConst, _scalars ,&_constScalars);

                _repl = ((_isCon && (!_isRec))?omc_BackendVarTransform_addReplacement(threadData, _repl, _cref, _exp2, mmc_mk_none()):_repl);

                _repl = ((_isCon && _isRec)?omc_BackendVarTransform_addReplacements(threadData, _repl, _scalars, _expLst, mmc_mk_none()):_repl);

                if((!_isCon))
                {
                  if((!_isRec))
                  {
                    omc_BackendVarTransform_removeReplacement(threadData, _repl, _cref);
                  }
                  else
                  {
                    omc_BackendVarTransform_removeReplacements(threadData, _repl, _varScalars);

                    _repl = omc_BackendVarTransform_addReplacements(threadData, _repl, _constScalars, _expLst, mmc_mk_none());
                  }
                }

                tmp20 = (modelica_boolean)_isCon;
                if(tmp20)
                {
                  tmpMeta19 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _typ, _exp1, _exp2, _source);
                  tmpMeta21 = tmpMeta19;
                }
                else
                {
                  tmpMeta21 = _stmt;
                }
                _stmt1 = tmpMeta21;

                tmp23 = (modelica_boolean)_isTpl;
                if(tmp23)
                {
                  tmpMeta24 = omc_Expression_getComplexContents(threadData, _exp1);
                }
                else
                {
                  tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta24 = tmpMeta22;
                }
                _tplExpsLHS = tmpMeta24;

                tmp26 = (modelica_boolean)_isTpl;
                if(tmp26)
                {
                  tmpMeta27 = omc_Expression_getComplexContents(threadData, _exp2);
                }
                else
                {
                  tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta27 = tmpMeta25;
                }
                _tplExpsRHS = tmpMeta27;

                _tplStmts = omc_EvaluateFunctions_makeAssignmentMap(threadData, _tplExpsLHS, _tplExpsRHS);

                tmp29 = (modelica_boolean)_isTpl;
                if(tmp29)
                {
                  tmpMeta30 = _tplStmts;
                }
                else
                {
                  tmpMeta28 = mmc_mk_cons(_stmt1, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta30 = tmpMeta28;
                }
                _stmts1 = tmpMeta30;

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta31 = stringAppend(_OMC_LIT45,stringDelimitList(omc_List_map(threadData, _stmts1, boxvar_DAEDump_ppStatementStr), _OMC_LIT13));
                  tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta32),stdout);
                }
                tmpMeta4 = _stmts1;
                goto tmp6_done;
              }
              case 5: {
                modelica_metatype tmpMeta33;
                modelica_metatype tmpMeta34;
                modelica_metatype tmpMeta35;
                modelica_metatype tmpMeta36;
                modelica_metatype tmpMeta37;
                modelica_metatype tmpMeta38;
                modelica_boolean tmp39;
                modelica_metatype tmpMeta40;
                modelica_metatype tmpMeta41;
                modelica_boolean tmp42;
                modelica_metatype tmpMeta43;
                modelica_metatype tmpMeta44;
                modelica_boolean tmp45;
                modelica_metatype tmpMeta46;
                modelica_metatype tmpMeta47;
                modelica_boolean tmp48;
                modelica_metatype tmpMeta49;
                modelica_metatype tmpMeta50;
                modelica_boolean tmp51;
                modelica_metatype tmpMeta52;
                modelica_metatype tmpMeta53;
                modelica_boolean tmp54;
                modelica_metatype tmpMeta55;
                modelica_metatype tmpMeta56;
                modelica_metatype tmpMeta57;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,2,4) == 0) goto tmp6_end;
                tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 5));
                _typ = tmpMeta33;
                _exp1 = tmpMeta34;
                _exp2 = tmpMeta35;
                _source = tmpMeta36;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta37 = stringAppend(_OMC_LIT46,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta37),stdout);
                }

                _cref = omc_Expression_expCref(threadData, _exp1);

                _scalars = omc_EvaluateFunctions_getRecordScalars(threadData, _cref);

                _exp2 = omc_BackendVarTransform_replaceExp(threadData, _exp2, _repl, mmc_mk_none(), NULL);

                _exp2 = omc_EvaluateFunctions_evaluateConstantFunctionCall(threadData, _exp2, _exp1, _funcTree, _idx, _recursionLimit ,&_exp1 ,&_funcTree ,&_idx ,&_addStmts);

                _exp2 = omc_ExpressionSimplify_simplify(threadData, _exp2, NULL);

                _expLst = omc_Expression_getComplexContents(threadData, _exp2);

                _repl = omc_List_fold(threadData, _addStmts, boxvar_EvaluateFunctions_addReplacementRuleForAssignment, _repl);

                _lhsExps = omc_Expression_getComplexContents(threadData, _exp1);

                _outputs = omc_List_map(threadData, _lhsExps, boxvar_Expression_expCref);

                omc_BackendVarTransform_removeReplacements(threadData, _repl, _outputs);

                _isCon = (omc_Expression_isConst(threadData, _exp2) && (!omc_Expression_isCall(threadData, _exp2)));

                _eqDim = (listLength(_scalars) == listLength(_expLst));

                _isRec = omc_ComponentReference_isRecord(threadData, _cref);

                _isArr = omc_ComponentReference_isArrayElement(threadData, _cref);

                _isTpl = (omc_Expression_isTuple(threadData, _exp1) && omc_Expression_isTuple(threadData, _exp2));

                tmp39 = (modelica_boolean)((_isRec || _isArr) && _eqDim);
                if(tmp39)
                {
                  tmpMeta40 = _scalars;
                }
                else
                {
                  tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta40 = tmpMeta38;
                }
                _scalars = tmpMeta40;

                tmp42 = (modelica_boolean)((_isRec || _isArr) && _eqDim);
                if(tmp42)
                {
                  tmpMeta43 = _expLst;
                }
                else
                {
                  tmpMeta41 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta43 = tmpMeta41;
                }
                _expLst = tmpMeta43;

                omc_List_filterOnTrueSync(threadData, _expLst, boxvar_Expression_isNotConst, _scalars ,&_varScalars);

                _expLst = omc_List_filterOnTrueSync(threadData, _expLst, boxvar_Expression_isConst, _scalars ,&_constScalars);

                _repl = ((_isCon && (!_isRec))?omc_BackendVarTransform_addReplacement(threadData, _repl, _cref, _exp2, mmc_mk_none()):_repl);

                _repl = ((_isCon && _isRec)?omc_BackendVarTransform_addReplacements(threadData, _repl, _scalars, _expLst, mmc_mk_none()):_repl);

                _repl = ((_isCon && _isArr)?omc_BackendVarTransform_addReplacements(threadData, _repl, _scalars, _expLst, mmc_mk_none()):_repl);

                if((!_isCon))
                {
                  if((!_isRec))
                  {
                    omc_BackendVarTransform_removeReplacement(threadData, _repl, _cref);
                  }
                  else
                  {
                    omc_BackendVarTransform_removeReplacements(threadData, _repl, _varScalars);

                    _repl = omc_BackendVarTransform_addReplacements(threadData, _repl, _constScalars, _expLst, mmc_mk_none());
                  }
                }

                tmp45 = (modelica_boolean)_isCon;
                if(tmp45)
                {
                  tmpMeta44 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _typ, _exp1, _exp2, _source);
                  tmpMeta46 = tmpMeta44;
                }
                else
                {
                  tmpMeta46 = _stmt;
                }
                _stmt1 = tmpMeta46;

                tmp48 = (modelica_boolean)_isTpl;
                if(tmp48)
                {
                  tmpMeta49 = omc_Expression_getComplexContents(threadData, _exp1);
                }
                else
                {
                  tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta49 = tmpMeta47;
                }
                _tplExpsLHS = tmpMeta49;

                tmp51 = (modelica_boolean)_isTpl;
                if(tmp51)
                {
                  tmpMeta52 = omc_Expression_getComplexContents(threadData, _exp2);
                }
                else
                {
                  tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta52 = tmpMeta50;
                }
                _tplExpsRHS = tmpMeta52;

                _tplStmts = omc_EvaluateFunctions_makeAssignmentMap(threadData, _tplExpsLHS, _tplExpsRHS);

                tmp54 = (modelica_boolean)_isTpl;
                if(tmp54)
                {
                  tmpMeta55 = _tplStmts;
                }
                else
                {
                  tmpMeta53 = mmc_mk_cons(_stmt1, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta55 = tmpMeta53;
                }
                _stmts1 = tmpMeta55;

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta56 = stringAppend(_OMC_LIT47,stringDelimitList(omc_List_map(threadData, _stmts1, boxvar_DAEDump_ppStatementStr), _OMC_LIT13));
                  tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta57),stdout);
                }
                tmpMeta4 = _stmts1;
                goto tmp6_done;
              }
              case 6: {
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
                modelica_integer tmp68;
                modelica_metatype tmpMeta69;
                modelica_metatype tmpMeta70;
                modelica_metatype tmpMeta71;
                modelica_metatype tmpMeta72;
                modelica_metatype tmpMeta73;
                modelica_metatype tmpMeta74;
                modelica_metatype tmpMeta75;
                modelica_metatype tmpMeta76;
                modelica_metatype tmpMeta77;
                modelica_metatype tmpMeta78;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,3,4) == 0) goto tmp6_end;
                tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                
                _stmtsIf = tmpMeta58;
                _else_ = tmpMeta59;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta60 = stringAppend(_OMC_LIT48,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta60),stdout);
                }

                tmpMeta61 = MMC_REFSTRUCTLIT(mmc_nil);
                _stmtsList = omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData, _else_, tmpMeta61);

                _stmtsList = listReverse(_stmtsList);

                tmpMeta62 = mmc_mk_cons(_stmtsIf, _stmtsList);
                _stmtsList = tmpMeta62;

                _allStmts = omc_List_flatten(threadData, _stmtsList);

                _outputs = omc_EvaluateFunctions_getStatementsOutputs(threadData, _allStmts, _funcTree);

                tmpMeta63 = mmc_mk_box4(3, &EvaluateFunctions_FuncInfo_FUNCINFO__desc, _repl, _funcTree, mmc_mk_integer(_idx));
                _isEval = omc_EvaluateFunctions_evaluateIfStatement(threadData, _stmt, tmpMeta63, _recursionLimit ,&_stmts1 ,&_repl);

                if((omc_Flags_isSet(threadData, _OMC_LIT16) && (!_isEval)))
                {
                  fputs(MMC_STRINGDATA(_OMC_LIT49),stdout);
                }

                if((!_isEval))
                {
                  /* Pattern-matching tuple assignment */
                  tmpMeta69 = mmc_mk_box4(3, &EvaluateFunctions_FuncInfo_FUNCINFO__desc, _repl, _funcTree, mmc_mk_integer(_idx));
                  tmpMeta70 = omc_EvaluateFunctions_predictIfOutput(threadData, _stmt, tmpMeta69, _recursionLimit, &tmpMeta64);
                  tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 1));
                  tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta70), 2));
                  _stmtsNew = tmpMeta71;
                  _addStmts = tmpMeta72;
                  tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 2));
                  tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 3));
                  tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 4));
                  tmp68 = mmc_unbox_integer(tmpMeta67);
                  _repl = tmpMeta65;
                  _funcTree = tmpMeta66;
                  _idx = tmp68  /* pattern as ty=Integer */;
                }
                else
                {
                  _stmtsNew = _stmts1;

                  tmpMeta73 = MMC_REFSTRUCTLIT(mmc_nil);
                  _addStmts = tmpMeta73;
                }

                _predicted = ((!listEmpty(_addStmts)) || (listEmpty(_stmtsNew) && (!_isEval)));

                if((omc_Flags_isSet(threadData, _OMC_LIT16) && (!_isEval)))
                {
                  tmpMeta74 = stringAppend(_OMC_LIT50,(_predicted?_OMC_LIT36:_OMC_LIT37));
                  tmpMeta75 = stringAppend(tmpMeta74,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta75),stdout);
                }

                if(((!_predicted) && (!_isEval)))
                {
                  omc_BackendVarTransform_removeReplacements(threadData, _repl, _outputs);
                }

                _stmts1 = (_predicted?_stmtsNew:_stmts1);

                tmpMeta76 = MMC_REFSTRUCTLIT(mmc_nil);
                _addStmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _addStmts, _funcTree, _repl, _idx, tmpMeta76, _recursionLimit ,&_funcTree ,&_repl ,&_idx);

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta77 = stringAppend(_OMC_LIT51,stringDelimitList(omc_List_map(threadData, listAppend(_stmts1, _addStmts), boxvar_DAEDump_ppStatementStr), _OMC_LIT13));
                  tmpMeta78 = stringAppend(tmpMeta77,_OMC_LIT52);
                  fputs(MMC_STRINGDATA(tmpMeta78),stdout);
                }
                tmpMeta4 = listAppend(_stmts1, _addStmts);
                goto tmp6_done;
              }
              case 4: {
                modelica_metatype tmpMeta79;
                modelica_metatype tmpMeta80;
                modelica_metatype tmpMeta81;
                modelica_metatype tmpMeta82;
                modelica_metatype tmpMeta83;
                modelica_metatype tmpMeta84;
                modelica_metatype tmpMeta85;
                modelica_metatype tmpMeta86;
                modelica_boolean tmp87;
                modelica_metatype tmpMeta88;
                modelica_metatype tmpMeta89;
                modelica_boolean tmp90;
                modelica_metatype tmpMeta91;
                modelica_metatype tmpMeta92;
                modelica_boolean tmp93;
                modelica_metatype tmpMeta94;
                modelica_metatype tmpMeta95;
                modelica_metatype tmpMeta96;
                modelica_boolean tmp97;
                modelica_metatype tmpMeta98;
                modelica_metatype tmpMeta99;
                modelica_metatype tmpMeta100;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,1,4) == 0) goto tmp6_end;
                tmpMeta79 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                
                _expLst = tmpMeta79;
                _exp0 = tmpMeta80;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta81 = stringAppend(_OMC_LIT53,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta81),stdout);
                }

                _exp1 = omc_BackendVarTransform_replaceExp(threadData, _exp0, _repl, mmc_mk_none(), NULL);

                tmpMeta82 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst);
                _exp2 = tmpMeta82;

                tmpMeta83 = MMC_REFSTRUCTLIT(mmc_nil);
                _exp1 = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _exp1, _exp2, _funcTree, _idx, tmpMeta83, _recursionLimit ,&_exp2 ,&_addEqs ,&_funcTree ,&_idx, NULL, NULL);

                _isCon = omc_Expression_isConst(threadData, _exp1);

                _exp1 = (_isCon?_exp1:_exp0);

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta84 = stringAppend(_OMC_LIT54,(_isCon?_OMC_LIT36:_OMC_LIT37));
                  tmpMeta85 = stringAppend(tmpMeta84,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta85),stdout);
                }

                _varScalars = omc_List_map(threadData, _expLst, boxvar_Expression_expCref);

                if((!_isCon))
                {
                  omc_BackendVarTransform_removeReplacements(threadData, _repl, _varScalars);
                }
                else
                {
                  _repl = omc_EvaluateFunctions_addTplReplacements(threadData, _repl, _exp1, _exp2);
                }

                _size = omc_DAEUtil_getTupleSize(threadData, _exp2);

                _typ = omc_Expression_typeof(threadData, _exp2);

                _tplExpsLHS = omc_DAEUtil_getTupleExps(threadData, _exp2);

                tmp87 = (modelica_boolean)_isCon;
                if(tmp87)
                {
                  tmpMeta88 = _tplExpsLHS;
                }
                else
                {
                  tmpMeta86 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta88 = tmpMeta86;
                }
                _tplExpsLHS = tmpMeta88;

                _tplExpsRHS = omc_DAEUtil_getTupleExps(threadData, _exp1);

                tmp90 = (modelica_boolean)_isCon;
                if(tmp90)
                {
                  tmpMeta91 = _tplExpsRHS;
                }
                else
                {
                  tmpMeta89 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta91 = tmpMeta89;
                }
                _tplExpsRHS = tmpMeta91;

                _stmtsNew = omc_EvaluateFunctions_makeAssignmentMap(threadData, _tplExpsLHS, _tplExpsRHS);

                tmp93 = (modelica_boolean)_isCon;
                if(tmp93)
                {
                  tmpMeta94 = _stmtsNew;
                }
                else
                {
                  tmpMeta92 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta94 = tmpMeta92;
                }
                _stmtsNew = tmpMeta94;

                tmp97 = (modelica_boolean)(_size == ((modelica_integer) 0));
                if(tmp97)
                {
                  tmpMeta96 = mmc_mk_box5(3, &DAE_Statement_STMT__ASSIGN__desc, _typ, _exp2, _exp1, _OMC_LIT4);
                  tmpMeta95 = mmc_mk_cons(tmpMeta96, MMC_REFSTRUCTLIT(mmc_nil));
                  tmpMeta98 = tmpMeta95;
                }
                else
                {
                  tmpMeta98 = _stmtsNew;
                }
                _stmts2 = tmpMeta98;

                _stmts1 = omc_List_map(threadData, _addEqs, boxvar_EvaluateFunctions_equationToStatement);

                _stmts1 = listAppend(_stmts2, _stmts1);

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta99 = stringAppend(_OMC_LIT55,stringDelimitList(omc_List_map(threadData, _stmts1, boxvar_DAEDump_ppStatementStr), _OMC_LIT13));
                  tmpMeta100 = stringAppend(tmpMeta99,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta100),stdout);
                }
                tmpMeta4 = listReverse(_stmts1);
                goto tmp6_done;
              }
              case 7: {
                modelica_metatype tmpMeta101;
                modelica_metatype tmpMeta102;
                modelica_metatype tmpMeta103;
                modelica_metatype tmpMeta104;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,4,6) == 0) goto tmp6_end;
                tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 6));
                
                _stmts1 = tmpMeta101;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta102 = stringAppend(_OMC_LIT56,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta102),stdout);
                }

                _stmts1 = omc_EvaluateFunctions_evaluateForStatement(threadData, _stmt, _funcTree, _repl, _idx, _recursionLimit ,&_funcTree ,&_repl ,&_idx);

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta103 = stringAppend(_OMC_LIT57,stringDelimitList(omc_List_map(threadData, _stmts1, boxvar_DAEDump_ppStatementStr), _OMC_LIT13));
                  tmpMeta104 = stringAppend(tmpMeta103,_OMC_LIT13);
                  fputs(MMC_STRINGDATA(tmpMeta104),stdout);
                }
                tmpMeta4 = listReverse(_stmts1);
                goto tmp6_done;
              }
              case 9: {
                modelica_metatype tmpMeta105;
                modelica_metatype tmpMeta106;
                modelica_metatype tmpMeta107;
                modelica_metatype tmpMeta108;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,6,3) == 0) goto tmp6_end;
                tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                
                _stmts1 = tmpMeta105;
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta106 = stringAppend(_OMC_LIT58,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta106),stdout);
                }

                _outputs = omc_EvaluateFunctions_getStatementsOutputs(threadData, _stmts1, _funcTree);

                omc_BackendVarTransform_removeReplacements(threadData, _repl, _outputs);

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta107 = stringAppend(_OMC_LIT59,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta107),stdout);
                }
                tmpMeta108 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta108;
                goto tmp6_done;
              }
              case 11: {
                modelica_metatype tmpMeta109;
                modelica_metatype tmpMeta110;
                modelica_metatype tmpMeta111;
                modelica_metatype tmpMeta112;
                modelica_metatype tmpMeta113;
                modelica_metatype tmpMeta114;
                modelica_metatype tmpMeta115;
                modelica_metatype tmpMeta116;
                modelica_metatype tmpMeta117;
                if (mmc__uniontype__metarecord__typedef__equal(tmp7_1,8,4) == 0) goto tmp6_end;
                tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 2));
                tmpMeta110 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 3));
                tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp7_1), 4));
                
                _cond = tmpMeta109;
                _msg = tmpMeta110;
                _lvl = tmpMeta111;
                /* Pattern matching succeeded */
                _cond = omc_BackendVarTransform_replaceExp(threadData, _cond, _repl, mmc_mk_none(), NULL);

                _cond = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _cond, _funcTree, 0 /* false */, _recursionLimit);

                _cond = omc_ExpressionSimplify_simplify(threadData, _cond, NULL);

                _msg = omc_BackendVarTransform_replaceExp(threadData, _msg, _repl, mmc_mk_none(), NULL);

                _msg = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _msg, _funcTree, 0 /* false */, _recursionLimit);

                _msg = omc_ExpressionSimplify_simplify(threadData, _msg, NULL);

                if((omc_ExpressionBasics_expEqual(threadData, _cond, _OMC_LIT61) && (stringEqual(omc_Expression_sconstEnumNameString(threadData, _lvl), _OMC_LIT64))))
                {
                  if(omc_Flags_isSet(threadData, _OMC_LIT16))
                  {
                    tmpMeta112 = stringAppend(_OMC_LIT63,omc_ExpressionBasics_printExpStr(threadData, _msg));
                    tmpMeta113 = stringAppend(tmpMeta112,_OMC_LIT13);
                    fputs(MMC_STRINGDATA(tmpMeta113),stdout);
                  }

                  goto goto_5;
                }
                else
                {
                  if((omc_ExpressionBasics_expEqual(threadData, _cond, _OMC_LIT61) && (stringEqual(omc_Expression_sconstEnumNameString(threadData, _lvl), _OMC_LIT62))))
                  {
                    if(omc_Flags_isSet(threadData, _OMC_LIT16))
                    {
                      tmpMeta114 = stringAppend(_OMC_LIT60,omc_ExpressionBasics_printExpStr(threadData, _msg));
                      tmpMeta115 = stringAppend(tmpMeta114,_OMC_LIT13);
                      fputs(MMC_STRINGDATA(tmpMeta115),stdout);
                    }

                    goto goto_5;
                  }
                }

                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta116 = stringAppend(_OMC_LIT65,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta116),stdout);
                }
                tmpMeta117 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta117;
                goto tmp6_done;
              }
              case 12: {
                modelica_metatype tmpMeta118;
                modelica_metatype tmpMeta119;
                
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta118 = stringAppend(_OMC_LIT66,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta118),stdout);
                }
                tmpMeta119 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta119;
                goto tmp6_done;
              }
              case 13: {
                modelica_metatype tmpMeta120;
                modelica_metatype tmpMeta121;
                
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta120 = stringAppend(_OMC_LIT67,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta120),stdout);
                }
                tmpMeta121 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta121;
                goto tmp6_done;
              }
              case 14: {
                modelica_metatype tmpMeta122;
                modelica_metatype tmpMeta123;
                
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta122 = stringAppend(_OMC_LIT68,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta122),stdout);
                }
                tmpMeta123 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta123;
                goto tmp6_done;
              }
              case 15: {
                modelica_metatype tmpMeta124;
                modelica_metatype tmpMeta125;
                
                /* Pattern matching succeeded */
                if(omc_Flags_isSet(threadData, _OMC_LIT16))
                {
                  tmpMeta124 = stringAppend(_OMC_LIT69,omc_DAEDump_ppStatementStr(threadData, _stmt));
                  fputs(MMC_STRINGDATA(tmpMeta124),stdout);
                }
                tmpMeta125 = mmc_mk_cons(_stmt, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta4 = tmpMeta125;
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
        }__omcQ_24tmpVar26 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp126 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar27;
  }
  _stmtsList = tmpMeta1;

  _stmts = omc_List_flatten(threadData, _stmtsList);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_repl) { *out_repl = _repl; }
  if (out_idx) { *out_idx = _idx; }
  return _stmts;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateStatement(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fstmts, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _lstIn, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_metatype *out_idx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _idx;
  modelica_metatype _stmts = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fidx);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _stmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, __omcQ_24in_5Fstmts, __omcQ_24in_5FfuncTree, __omcQ_24in_5Frepl, tmp1, _lstIn, tmp2, out_funcTree, out_repl, &_idx);
  /* skip box _stmts; list<DAE.Statement> */
  /* skip box _funcTree; AvlTreePathFunction.Tree */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  if (out_idx) { *out_idx = mmc_mk_icon(_idx); }
  return _stmts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_unboxExp(threadData_t *threadData, modelica_metatype _ie, modelica_boolean _bIn, modelica_boolean *out_bOut)
{
  modelica_metatype _outExp = NULL;
  modelica_boolean _bOut;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _bOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _ie;
    {
      modelica_metatype _e = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,34,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _e = tmpMeta6;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _ie = _e;
          _bIn = 1 /* true */;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _ie;
          tmp1_c1 = _bIn;
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
  _bOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_bOut) { *out_bOut = _bOut; }
  return _outExp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_unboxExp(threadData_t *threadData, modelica_metatype _ie, modelica_metatype _bIn, modelica_metatype *out_bOut)
{
  modelica_integer tmp1;
  modelica_boolean _bOut;
  modelica_metatype _outExp = NULL;
  tmp1 = mmc_unbox_integer(_bIn);
  _outExp = omc_EvaluateFunctions_unboxExp(threadData, _ie, tmp1, &_bOut);
  /* skip box _outExp; DAE.Exp */
  if (out_bOut) { *out_bOut = mmc_mk_icon(_bOut); }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_integer __omcQ_24in_5Fidx, modelica_integer _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_integer *out_idx)
{
  modelica_metatype _element = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _repl = NULL;
  modelica_integer _idx;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _element = __omcQ_24in_5Felement;
  _funcTree = __omcQ_24in_5FfuncTree;
  _repl = __omcQ_24in_5Frepl;
  _idx = __omcQ_24in_5Fidx;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _element;
    {
      modelica_metatype _alg = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _scalarExps = NULL;
      modelica_metatype _scalars = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _alg has no default value.
      // _source has no default value.
      // _exp has no default value.
      // _cref has no default value.
      // _stmts has no default value.
      // _scalarExps has no default value.
      // _scalars has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _alg = tmpMeta6;
          _source = tmpMeta7;
          /* Pattern matching succeeded */
          _stmts = omc_DAEUtil_getStatement(threadData, _element);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmts = omc_EvaluateFunctions_evaluateFunctions__updateStatement(threadData, _stmts, _funcTree, _repl, _idx, tmpMeta8, _recursionLimit ,&_funcTree ,&_repl ,&_idx);

          tmpMeta9 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _stmts);
          _alg = tmpMeta9;
          tmpMeta10 = mmc_mk_box3(19, &DAE_Element_ALGORITHM__desc, _alg, _source);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,14) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          if (optionNone(tmpMeta12)) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          
          _cref = tmpMeta11;
          _exp = tmpMeta13;
          /* Pattern matching succeeded */
          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _repl, mmc_mk_none(), NULL);

          _exp = omc_ExpressionSimplify_simplify(threadData, _exp, NULL);

          if(omc_Expression_isConst(threadData, _exp))
          {
            _repl = omc_BackendVarTransform_addReplacement(threadData, _repl, _cref, _exp, mmc_mk_none());

            _scalars = omc_ComponentReference_expandCref(threadData, _cref, 0 /* false */);

            _scalarExps = omc_Expression_getComplexContents(threadData, _exp);

            if((listLength(_scalars) == listLength(_scalarExps)))
            {
              _repl = omc_BackendVarTransform_addReplacements(threadData, _repl, _scalars, _scalarExps, mmc_mk_none());
            }
          }
          tmpMeta1 = omc_DAEUtil_replaceBindungInVar(threadData, _exp, _element);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _element;
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
  _element = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_repl) { *out_repl = _repl; }
  if (out_idx) { *out_idx = _idx; }
  return _element;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *threadData, modelica_metatype __omcQ_24in_5Felement, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype __omcQ_24in_5Frepl, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype _recursionLimit, modelica_metatype *out_funcTree, modelica_metatype *out_repl, modelica_metatype *out_idx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _idx;
  modelica_metatype _element = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fidx);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _element = omc_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData, __omcQ_24in_5Felement, __omcQ_24in_5FfuncTree, __omcQ_24in_5Frepl, tmp1, tmp2, out_funcTree, out_repl, &_idx);
  /* skip box _element; DAE.Element */
  /* skip box _funcTree; AvlTreePathFunction.Tree */
  /* skip box _repl; BackendVarTransform.VariableReplacements */
  if (out_idx) { *out_idx = mmc_mk_icon(_idx); }
  return _element;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_addReplacementRuleForAssignment(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _replIn)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _lhs = tmpMeta6;
          _rhs = tmpMeta7;
          /* Pattern matching succeeded */
          _cref = omc_Expression_expCref(threadData, _lhs);
          tmpMeta1 = omc_BackendVarTransform_addReplacement(threadData, _replIn, _cref, _rhs, mmc_mk_none());
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateConstEqs(threadData_t *threadData, modelica_metatype _lhsLst, modelica_metatype _rhsLst, modelica_metatype _eqsIn)
{
  modelica_metatype _eqsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _lhsLst;
    tmp4_2 = _rhsLst;
    {
      modelica_metatype _eq = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _rhs = NULL;
      modelica_metatype _lrest = NULL;
      modelica_metatype _rrest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eq has no default value.
      // _lhs has no default value.
      // _rhs has no default value.
      // _lrest has no default value.
      // _rrest has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _eqsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,0) == 0) goto tmp3_end;
          
          _rrest = tmpMeta7;
          _lrest = tmpMeta9;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _lhsLst = _lrest;
          _rhsLst = _rrest;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_2);
          tmpMeta14 = MMC_CDR(tmp4_2);
          _lhs = tmpMeta11;
          _lrest = tmpMeta12;
          _rhs = tmpMeta13;
          _rrest = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _lhs, _rhs, _OMC_LIT4, _OMC_LIT7);
          _eq = tmpMeta15;
          tmpMeta16 = mmc_mk_cons(_eq, _eqsIn);
          /* Tail recursive call */
          _lhsLst = _lrest;
          _rhsLst = _rrest;
          _eqsIn = tmpMeta16;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT70),stdout);
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
  _eqsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_statementRHSIsNotConst(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _notConst;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _notConst has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _stmt;
    {
      modelica_boolean _b;
      modelica_metatype _rhs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _rhs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _rhs = tmpMeta6;
          /* Pattern matching succeeded */
          _b = omc_Expression_isConst(threadData, _rhs);
          tmp1 = (!_b);
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
  _notConst = tmp1;
  _return: OMC_LABEL_UNUSED
  return _notConst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_statementRHSIsNotConst(threadData_t *threadData, modelica_metatype _stmt)
{
  modelica_boolean _notConst;
  modelica_metatype out_notConst;
  _notConst = omc_EvaluateFunctions_statementRHSIsNotConst(threadData, _stmt);
  out_notConst = mmc_mk_icon(_notConst);
  return out_notConst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_replaceCrefIdent(threadData_t *threadData, modelica_metatype _crefIn, modelica_string _ident)
{
  modelica_metatype _crefOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _crefIn;
    {
      modelica_metatype _cref2 = NULL;
      modelica_metatype _typ = NULL;
      modelica_metatype _sl = NULL;
      int tmp4;
      // _cref2 has no default value.
      // _typ has no default value.
      // _sl has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _typ = tmpMeta5;
          _sl = tmpMeta6;
          _cref2 = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box5(3, &DAE_ComponentRef_CREF__QUAL__desc, _ident, _typ, _sl, _cref2);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _typ = tmpMeta9;
          _sl = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box4(4, &DAE_ComponentRef_CREF__IDENT__desc, _ident, _typ, _sl);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefIn;
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
  _crefOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeIdentCref2(threadData_t *threadData, modelica_metatype _crefIn, modelica_metatype _changeTheseCrefs)
{
  modelica_metatype _crefOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _crefIn;
    {
      modelica_metatype _cref1 = NULL;
      modelica_metatype _cref2 = NULL;
      modelica_string _i1 = NULL;
      modelica_string _i2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref1 has no default value.
      // _cref2 has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _cref1 = tmp4_1;
          _i1 = tmpMeta6;
          _cref2 = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp8 = omc_List_isMemberOnTrue(threadData, _cref1, _changeTheseCrefs, boxvar_ComponentReferenceBasics_crefEqual);
          if (1 /* true */ != tmp8) goto goto_2;

          _i2 = omc_ComponentReferenceBasics_crefFirstIdent(threadData, _cref2);

          tmpMeta9 = stringAppend(_i1,_OMC_LIT71);
          tmpMeta10 = stringAppend(tmpMeta9,_i2);
          _i1 = tmpMeta10;

          _cref2 = omc_EvaluateFunctions_replaceCrefIdent(threadData, _cref2, _i1);
          tmpMeta1 = omc_EvaluateFunctions_makeIdentCref2(threadData, _cref2, _changeTheseCrefs);
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          
          _cref1 = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _cref1;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _crefIn;
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
  _crefOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_makeIdentCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inCrefs, modelica_metatype *out_outCrefs)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outCrefs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outCrefs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _inExp;
    tmp4_2 = _inCrefs;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _crefs has no default value.
      // _exp has no default value.
      // _ty has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _cref = tmpMeta6;
          _ty = tmpMeta7;
          _crefs = tmp4_2;
          /* Pattern matching succeeded */
          _cref = omc_EvaluateFunctions_makeIdentCref2(threadData, _cref, _crefs);

          tmpMeta8 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _ty);
          _exp = tmpMeta8;
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _crefs;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _inExp;
          tmpMeta[0+1] = _inCrefs;
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
  _outCrefs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outCrefs) { *out_outCrefs = _outCrefs; }
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_traverseStmtsAndUpdate(threadData_t *threadData, modelica_metatype _stmtsIn, modelica_fnptr _func, modelica_metatype _argIn, modelica_metatype _stmtsFold)
{
  modelica_metatype _stmtsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _stmtsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _stmtsIn;
    {
      modelica_boolean _b;
      modelica_metatype _else_ = NULL;
      modelica_metatype _stmtLst = NULL;
      modelica_metatype _xs = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _stmtLstLst = NULL;
      modelica_metatype _x = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b has no default value.
      // _else_ has no default value.
      // _stmtLst has no default value.
      // _xs has no default value.
      // _rest has no default value.
      // _stmtLstLst has no default value.
      // _x has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          listReverse(_stmtsFold);
          tmpMeta1 = _stmtsFold;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,3,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          
          _stmtLst = tmpMeta8;
          _else_ = tmpMeta9;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _x = listHead(_stmtsIn);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmtLstLst = omc_EvaluateFunctions_getDAEelseStatemntLsts(threadData, _else_, tmpMeta10);

          _stmtLstLst = listReverse(_stmtLstLst);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmtLstLst = omc_List_map3(threadData, _stmtLstLst, boxvar_EvaluateFunctions_traverseStmtsAndUpdate, ((modelica_fnptr) _func), _argIn, tmpMeta11);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmtLst = omc_EvaluateFunctions_traverseStmtsAndUpdate(threadData, _stmtLst, ((modelica_fnptr) _func), _argIn, tmpMeta12);

          tmpMeta13 = mmc_mk_cons(_stmtLst, _stmtLstLst);
          _stmtLstLst = tmpMeta13;

          _x = omc_EvaluateFunctions_updateStatementsInIfStmt(threadData, _stmtLstLst, _x);
          tmpMeta14 = mmc_mk_cons(_x, _stmtsFold);
          tmpMeta1 = omc_EvaluateFunctions_traverseStmtsAndUpdate(threadData, _rest, ((modelica_fnptr) _func), _argIn, tmpMeta14);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          _x = tmpMeta15;
          _rest = tmpMeta16;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta17 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _x, _argIn) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _x, _argIn);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          _x = tmpMeta18;
          _b = tmp20  /* pattern as ty=Boolean */;

          tmp22 = (modelica_boolean)_b;
          if(tmp22)
          {
            tmpMeta23 = _stmtsFold;
          }
          else
          {
            tmpMeta21 = mmc_mk_cons(_x, _stmtsFold);
            tmpMeta23 = tmpMeta21;
          }
          _xs = tmpMeta23;
          tmpMeta1 = omc_EvaluateFunctions_traverseStmtsAndUpdate(threadData, _rest, ((modelica_fnptr) _func), _argIn, _xs);
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
  _stmtsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _stmtsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_stmtCanBeRemoved(threadData_t *threadData, modelica_metatype _stmtIn, modelica_metatype _repl)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _stmtIn;
    {
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _stmt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b1 has no default value.
      // _b2 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _stmt has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta6 = mmc_mk_cons(_stmtIn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = omc_BackendVarTransform_replaceStatementLst(threadData, tmpMeta6, _repl, mmc_mk_none(), tmpMeta7, 0 /* false */, NULL);
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          if (!listEmpty(tmpMeta10)) goto goto_2;
          _stmt = tmpMeta9;

          /* Pattern-matching assignment */
          tmpMeta11 = _stmt;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,4) == 0) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          _e1 = tmpMeta12;
          _e2 = tmpMeta13;

          _b1 = omc_Expression_isConst(threadData, _e1);

          _b2 = omc_Expression_isConst(threadData, _e2);

          _stmt = _stmtIn;
          tmpMeta14 = mmc_mk_box2(0, _stmt, mmc_mk_boolean((_b1 && _b2)));
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box2(0, _stmtIn, mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta15;
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

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildPartialFunction(threadData_t *threadData, modelica_metatype _varPart, modelica_metatype _constPart, modelica_metatype _replIn, modelica_metatype *out_eqsOut)
{
  modelica_metatype _algsOut = NULL;
  modelica_metatype _eqsOut = NULL;
  modelica_metatype _constScalarCrefs = NULL;
  modelica_metatype _varScalarCrefs = NULL;
  modelica_metatype _constComplCrefs = NULL;
  modelica_metatype _constScalarCrefsOut = NULL;
  modelica_metatype _funcAlgs = NULL;
  modelica_metatype _constComplExps = NULL;
  modelica_metatype _constScalarExps = NULL;
  modelica_metatype _lhsExps1 = NULL;
  modelica_metatype _lhsExps2 = NULL;
  modelica_metatype _stmts1 = NULL;
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
  // _algsOut has no default value.
  // _eqsOut has no default value.
  // _constScalarCrefs has no default value.
  // _varScalarCrefs has no default value.
  // _constComplCrefs has no default value.
  // _constScalarCrefsOut has no default value.
  // _funcAlgs has no default value.
  // _constComplExps has no default value.
  // _constScalarExps has no default value.
  // _lhsExps1 has no default value.
  // _lhsExps2 has no default value.
  // _stmts1 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _varPart;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _varScalarCrefs = tmpMeta2;
  _funcAlgs = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _constPart;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 5));
  _constScalarCrefs = tmpMeta5;
  _constScalarExps = tmpMeta6;
  _constComplCrefs = tmpMeta7;
  _constComplExps = tmpMeta8;
  _constScalarCrefsOut = tmpMeta9;

  _funcAlgs = omc_List_filterOnTrue(threadData, _funcAlgs, boxvar_DAEUtil_isAlgorithm);

  _lhsExps1 = omc_List_map(threadData, _constScalarCrefsOut, boxvar_Expression_crefExp);

  _lhsExps2 = omc_List_map(threadData, _constComplCrefs, boxvar_Expression_crefExp);

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _eqsOut = omc_EvaluateFunctions_generateConstEqs(threadData, _lhsExps1, _constScalarExps, tmpMeta10);

  _eqsOut = omc_EvaluateFunctions_generateConstEqs(threadData, _lhsExps2, _constComplExps, _eqsOut);

  _stmts1 = omc_List_mapFlatReverse(threadData, _funcAlgs, boxvar_DAEUtil_getStatement);

  tmpMeta11 = mmc_mk_box2(0, boxvar_EvaluateFunctions_makeIdentCref, _varScalarCrefs);
  _stmts1 = omc_DAEUtil_traverseDAEEquationsStmts(threadData, _stmts1, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta11, NULL);

  tmpMeta12 = mmc_mk_box2(0, boxvar_EvaluateFunctions_makeIdentCref, _constScalarCrefs);
  _stmts1 = omc_DAEUtil_traverseDAEEquationsStmts(threadData, _stmts1, boxvar_Expression_traverseSubexpressionsHelper, tmpMeta12, NULL);

  tmpMeta14 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _stmts1);
  tmpMeta15 = mmc_mk_box3(19, &DAE_Element_ALGORITHM__desc, tmpMeta14, _OMC_LIT4);
  tmpMeta13 = mmc_mk_cons(tmpMeta15, MMC_REFSTRUCTLIT(mmc_nil));
  _algsOut = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  if (out_eqsOut) { *out_eqsOut = _eqsOut; }
  return _algsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateFunctionType(threadData_t *threadData, modelica_metatype _typIn, modelica_metatype _outputs, modelica_metatype _originOutputs)
{
  modelica_metatype _typOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _typOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _typIn;
    {
      modelica_metatype _ty = NULL;
      modelica_metatype _outTypeLst = NULL;
      modelica_metatype _outNames = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ty has no default value.
      // _outTypeLst has no default value.
      // _outNames has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_boolean tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,4) == 0) goto tmp3_end;
          
          _ty = tmp4_1;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp9;
            modelica_metatype _o_loopVar = 0;
            modelica_metatype _o;
            _o_loopVar = _outputs;
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar29;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_o_loopVar)) {
                _o = MMC_CAR(_o_loopVar);
                _o_loopVar = MMC_CDR(_o_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar28 = omc_DAEUtil_getVariableType(threadData, _o);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar29;
          }
          _outTypeLst = tmpMeta6;

          {
            modelica_metatype __omcQ_24tmpVar31;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_string __omcQ_24tmpVar30;
            modelica_integer tmp13;
            modelica_metatype _o_loopVar = 0;
            modelica_metatype _o;
            _o_loopVar = _outputs;
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar31 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar31;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_o_loopVar)) {
                _o = MMC_CAR(_o_loopVar);
                _o_loopVar = MMC_CDR(_o_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar30 = omc_DAEUtil_varName(threadData, _o);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar30,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar31;
          }
          _outNames = tmpMeta10;

          tmp16 = (modelica_boolean)(listLength(_outTypeLst) == ((modelica_integer) 1));
          if(tmp16)
          {
            tmpMeta17 = listHead(_outTypeLst);
          }
          else
          {
            tmpMeta15 = mmc_mk_box3(17, &DAE_Type_T__TUPLE__desc, _outTypeLst, mmc_mk_some(_outNames));
            tmpMeta17 = tmpMeta15;
          }
          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_ty), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = tmpMeta17;
          _ty = tmpMeta14;
          tmpMeta1 = _ty;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _typIn;
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
  _typOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _typOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_updateFunctionBody(threadData_t *threadData, modelica_metatype _funcIn, modelica_metatype _body, modelica_integer _idx, modelica_metatype _outputs, modelica_metatype _origOutputs, modelica_metatype *out_pathOut)
{
  modelica_metatype _funcOut = NULL;
  modelica_metatype _pathOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _funcOut = _funcIn;
  // _pathOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _funcOut;
    {
      modelica_string _s = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _s has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _s = omc_AbsynUtil_pathLastIdent(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcOut), 2))));

          tmpMeta6 = stringAppend(_s,_OMC_LIT72);
          tmpMeta7 = stringAppend(tmpMeta6,intString(_idx));
          _s = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_funcOut), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = omc_AbsynUtil_pathSetLastIdent(threadData, omc_AbsynUtil_makeNotFullyQualified(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcOut), 2)))), _s);
          _funcOut = tmpMeta8;

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_funcOut), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[4] = omc_EvaluateFunctions_updateFunctionType(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcOut), 4))), _outputs, _origOutputs);
          _funcOut = tmpMeta9;

          tmpMeta12 = mmc_mk_box2(3, &DAE_FunctionDefinition_FUNCTION__DEF__desc, _body);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_funcOut), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = tmpMeta11;
          _funcOut = tmpMeta10;
          tmpMeta[0+0] = _funcOut;
          tmpMeta[0+1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_funcOut), 2)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_terminate(threadData, _OMC_LIT73, _OMC_LIT75);
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
  _funcOut = tmpMeta[0+0];
  _pathOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_pathOut) { *out_pathOut = _pathOut; }
  return _funcOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_updateFunctionBody(threadData_t *threadData, modelica_metatype _funcIn, modelica_metatype _body, modelica_metatype _idx, modelica_metatype _outputs, modelica_metatype _origOutputs, modelica_metatype *out_pathOut)
{
  modelica_integer tmp1;
  modelica_metatype _funcOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _funcOut = omc_EvaluateFunctions_updateFunctionBody(threadData, _funcIn, _body, tmp1, _outputs, _origOutputs, out_pathOut);
  /* skip box _funcOut; DAE.Function */
  /* skip box _pathOut; Absyn.Path */
  return _funcOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateProtectedElements(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _inFuncOutputs, modelica_metatype _recId)
{
  modelica_metatype _newProts = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newProts has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      modelica_metatype _cref1 = NULL;
      modelica_string _i1 = NULL;
      modelica_string _i2 = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _typ = NULL;
      modelica_metatype _sl = NULL;
      int tmp4;
      // _cref1 has no default value.
      // _i1 has no default value.
      // _i2 has no default value.
      // _var has no default value.
      // _typ has no default value.
      // _sl has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _sl = tmpMeta5;
          /* Pattern matching succeeded */
          _typ = omc_ComponentReference_crefLastType(threadData, _cref);

          _i1 = omc_ComponentReferenceBasics_crefFirstIdent(threadData, _cref);

          _i2 = omc_ComponentReferenceBasics_crefLastIdent(threadData, _cref);

          tmpMeta6 = stringAppend(_i1,_OMC_LIT71);
          tmpMeta7 = stringAppend(tmpMeta6,_i2);
          _i1 = tmpMeta7;

          _cref1 = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _i1, _typ, _sl);

          _var = listHead(_inFuncOutputs);

          _var = omc_DAEUtil_replaceCrefandTypeInVar(threadData, _cref1, _typ, _var);

          _var = omc_DAEUtil_setElementVarVisibility(threadData, _var, _OMC_LIT76);
          tmpMeta1 = omc_DAEUtil_setElementVarDirection(threadData, _var, _OMC_LIT77);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _typ = tmpMeta8;
          /* Pattern matching succeeded */
          _var = listHead(_inFuncOutputs);

          _var = omc_DAEUtil_replaceCrefandTypeInVar(threadData, _cref, _typ, _var);

          _var = omc_DAEUtil_setElementVarVisibility(threadData, _var, _OMC_LIT76);
          tmpMeta1 = omc_DAEUtil_setElementVarDirection(threadData, _var, _OMC_LIT77);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newProts = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _newProts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_generateOutputElements(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _inFuncOutputs, modelica_metatype _recId)
{
  modelica_metatype _newOutputs = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newOutputs has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _cref;
    {
      modelica_string _i1 = NULL;
      modelica_string _i2 = NULL;
      modelica_metatype _cref1 = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _typ = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _sl = NULL;
      int tmp4;
      // _i1 has no default value.
      // _i2 has no default value.
      // _cref1 has no default value.
      // _var has no default value.
      // _typ has no default value.
      // _crefs has no default value.
      // _sl has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _sl = tmpMeta5;
          /* Pattern matching succeeded */
          _typ = omc_ComponentReference_crefLastType(threadData, _cref);

          _cref1 = omc_ComponentReference_crefStripLastIdent(threadData, _cref);

          _crefs = omc_EvaluateFunctions_getRecordScalars(threadData, _cref);

          _cref1 = ((listLength(_crefs) == ((modelica_integer) 1))?listHead(_crefs):_cref1);

          _i1 = omc_ComponentReferenceBasics_crefFirstIdent(threadData, _cref);

          _i2 = omc_ComponentReferenceBasics_crefLastIdent(threadData, _cref);

          tmpMeta6 = stringAppend(_i1,_OMC_LIT71);
          tmpMeta7 = stringAppend(tmpMeta6,_i2);
          _i1 = tmpMeta7;

          _cref1 = omc_ComponentReferenceBasics_makeCrefIdent(threadData, _i1, _typ, _sl);

          _var = listHead(_inFuncOutputs);
          tmpMeta1 = omc_DAEUtil_replaceCrefandTypeInVar(threadData, _cref1, _typ, _var);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _typ = tmpMeta8;
          /* Pattern matching succeeded */
          _var = listHead(_inFuncOutputs);
          tmpMeta1 = omc_DAEUtil_replaceCrefandTypeInVar(threadData, _cref, _typ, _var);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
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
  _newOutputs = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _newOutputs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _constCrefs, modelica_metatype _constComplexLstIn, modelica_metatype _varComplexLstIn, modelica_metatype _constScalarLstIn, modelica_metatype _varScalarLstIn, modelica_metatype *out_varComplexLstOut, modelica_metatype *out_constScalarLstOut, modelica_metatype *out_varScalarLstOut)
{
  modelica_metatype _constComplexLstOut = NULL;
  modelica_metatype _varComplexLstOut = NULL;
  modelica_metatype _constScalarLstOut = NULL;
  modelica_metatype _varScalarLstOut = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _constComplexLstOut has no default value.
  // _varComplexLstOut has no default value.
  // _constScalarLstOut has no default value.
  // _varScalarLstOut has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _elements;
    {
      modelica_boolean _const;
      modelica_metatype _cref = NULL;
      modelica_metatype _elem = NULL;
      modelica_metatype _scalars = NULL;
      modelica_metatype _constVars = NULL;
      modelica_metatype _varVars = NULL;
      modelica_metatype _varCrefs = NULL;
      modelica_metatype _constCrefs1 = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _constCompl = NULL;
      modelica_metatype _varCompl = NULL;
      modelica_metatype _varScalar = NULL;
      modelica_metatype _constScalar = NULL;
      modelica_metatype _constScalarCrefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _const has no default value.
      // _cref has no default value.
      // _elem has no default value.
      // _scalars has no default value.
      // _constVars has no default value.
      // _varVars has no default value.
      // _varCrefs has no default value.
      // _constCrefs1 has no default value.
      // _rest has no default value.
      // _constCompl has no default value.
      // _varCompl has no default value.
      // _varScalar has no default value.
      // _constScalar has no default value.
      // _constScalarCrefs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _constComplexLstIn;
          tmpMeta[0+1] = _varComplexLstIn;
          tmpMeta[0+2] = _constScalarLstIn;
          tmpMeta[0+3] = _varScalarLstIn;
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
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _elem = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _cref = omc_DAEUtil_varCref(threadData, _elem);

          tmpMeta8 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
          _constVars = omc_List_intersection1OnTrue(threadData, tmpMeta8, _constCrefs, boxvar_ComponentReferenceBasics_crefEqual ,&_varVars ,&_constCrefs1);

          if(listEmpty(_constVars))
          {
            _scalars = omc_EvaluateFunctions_getScalarsForComplexVar(threadData, _elem);

            if(listEmpty(_scalars))
            {
              /* Pattern-matching assignment */
              tmpMeta9 = mmc_mk_box4(0, _constComplexLstIn, listAppend(_varVars, _varComplexLstIn), _constScalarLstIn, _varScalarLstIn);
              tmpMeta10 = tmpMeta9;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
              _constCompl = tmpMeta11;
              _varCompl = tmpMeta12;
              _constScalar = tmpMeta13;
              _varScalar = tmpMeta14;
            }
            else
            {
              _constVars = omc_List_intersection1OnTrue(threadData, _scalars, _constCrefs, boxvar_ComponentReferenceBasics_crefEqual ,&_varVars ,&_constCrefs1);

              /* Pattern-matching assignment */
              tmpMeta15 = mmc_mk_box4(0, _constComplexLstIn, _varComplexLstIn, listAppend(_constVars, _constScalarLstIn), listAppend(_varVars, _varScalarLstIn));
              tmpMeta16 = tmpMeta15;
              tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
              tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 3));
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 4));
              _constCompl = tmpMeta17;
              _varCompl = tmpMeta18;
              _constScalar = tmpMeta19;
              _varScalar = tmpMeta20;
            }
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta21 = mmc_mk_box4(0, listAppend(_constVars, _constComplexLstIn), _varComplexLstIn, _constScalarLstIn, _varScalarLstIn);
            tmpMeta22 = tmpMeta21;
            tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
            tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
            tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 3));
            tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 4));
            _constCompl = tmpMeta23;
            _varCompl = tmpMeta24;
            _constScalar = tmpMeta25;
            _varScalar = tmpMeta26;
          }
          tmpMeta[0+0] = omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData, _rest, _constCrefs1, _constCompl, _varCompl, _constScalar, _varScalar, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmp4_1);
          tmpMeta28 = MMC_CDR(tmp4_1);
          _elem = tmpMeta27;
          _rest = tmpMeta28;
          /* Pattern matching succeeded */
          _scalars = omc_EvaluateFunctions_getScalarsForComplexVar(threadData, _elem);

          /* Pattern-matching assignment */
          tmp29 = listEmpty(_scalars);
          if (0 /* false */ != tmp29) goto goto_2;

          _constVars = omc_List_intersectionOnTrue(threadData, _scalars, _constCrefs, boxvar_ComponentReferenceBasics_crefEqual);

          _const = (listLength(_scalars) == listLength(_constVars));

          _constScalarCrefs = omc_List_filter1OnTrue(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _constVars);

          omc_List_intersection1OnTrue(threadData, _scalars, _constScalarCrefs, boxvar_ComponentReferenceBasics_crefEqual ,&_varCrefs ,NULL);

          _constCompl = _constComplexLstIn;

          _varCompl = _varComplexLstIn;

          _constScalar = listAppend(_constScalarCrefs, _constScalarLstIn);

          _varScalar = ((!_const)?listAppend(_varCrefs, _varScalarLstIn):_varScalarLstIn);
          tmpMeta[0+0] = omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData, _rest, _constCrefs, _constCompl, _varCompl, _constScalar, _varScalar, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_boolean tmp32;
          modelica_metatype tmpMeta33;
          modelica_boolean tmp34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_boolean tmp37;
          modelica_metatype tmpMeta38;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta30 = MMC_CAR(tmp4_1);
          tmpMeta31 = MMC_CDR(tmp4_1);
          _elem = tmpMeta30;
          _rest = tmpMeta31;
          /* Pattern matching succeeded */
          _cref = omc_DAEUtil_varCref(threadData, _elem);

          _scalars = omc_EvaluateFunctions_getScalarsForComplexVar(threadData, _elem);

          /* Pattern-matching assignment */
          tmp32 = listEmpty(_scalars);
          if (1 /* true */ != tmp32) goto goto_2;

          _const = listMember(_cref, _constCrefs);

          tmp34 = (modelica_boolean)_const;
          if(tmp34)
          {
            tmpMeta33 = mmc_mk_cons(_cref, _constComplexLstIn);
            tmpMeta35 = tmpMeta33;
          }
          else
          {
            tmpMeta35 = _constComplexLstIn;
          }
          _constCompl = tmpMeta35;

          tmp37 = (modelica_boolean)(!_const);
          if(tmp37)
          {
            tmpMeta36 = mmc_mk_cons(_cref, _varComplexLstIn);
            tmpMeta38 = tmpMeta36;
          }
          else
          {
            tmpMeta38 = _varComplexLstIn;
          }
          _varCompl = tmpMeta38;
          tmpMeta[0+0] = omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData, _rest, _constCrefs, _constCompl, _varCompl, _constScalarLstIn, _varScalarLstIn, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3]);
          goto tmp3_done;
        }
        case 4: {
          
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _constComplexLstOut = tmpMeta[0+0];
  _varComplexLstOut = tmpMeta[0+1];
  _constScalarLstOut = tmpMeta[0+2];
  _varScalarLstOut = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_varComplexLstOut) { *out_varComplexLstOut = _varComplexLstOut; }
  if (out_constScalarLstOut) { *out_constScalarLstOut = _constScalarLstOut; }
  if (out_varScalarLstOut) { *out_varScalarLstOut = _varScalarLstOut; }
  return _constComplexLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildConstFunctionCrefs(threadData_t *threadData, modelica_metatype _constScalarCrefs, modelica_metatype _constComplCrefs, modelica_metatype _allOutputCrefs, modelica_metatype _lhsExpIn, modelica_metatype *out_constComplCrefsOut)
{
  modelica_metatype _constScalarCrefsOut = NULL;
  modelica_metatype _constComplCrefsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _constScalarCrefsOut has no default value.
  // _constComplCrefsOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _constScalarCrefs;
    tmp4_2 = _constComplCrefs;
    tmp4_3 = _lhsExpIn;
    {
      modelica_metatype _pos = NULL;
      modelica_metatype _lhsCref = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _constExps = NULL;
      modelica_metatype _constCrefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pos has no default value.
      // _lhsCref has no default value.
      // _expLst has no default value.
      // _constExps has no default value.
      // _constCrefs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lhsCref = omc_Expression_expCref(threadData, _lhsExpIn);

          _constCrefs = omc_List_map(threadData, _constScalarCrefs, boxvar_ComponentReference_crefStripFirstIdent);

          _constCrefs = omc_List_map1(threadData, _constCrefs, boxvar_ComponentReference_joinCrefsR, _lhsCref);
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _constCrefs;
          tmpMeta[0+1] = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,19,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          
          _expLst = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _pos = tmpMeta8;

          {
            modelica_metatype _lhsCref;
            for (tmpMeta9 = _constComplCrefs; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _lhsCref = MMC_CAR(tmpMeta9);
              tmpMeta10 = mmc_mk_cons(mmc_mk_integer(omc_List_position1OnTrue(threadData, _allOutputCrefs, boxvar_ComponentReferenceBasics_crefEqual, _lhsCref)), _pos);
              _pos = tmpMeta10;
            }
          }

          _pos = listReverse(_pos);

          _constExps = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _expLst);

          _constCrefs = omc_List_map(threadData, _constExps, boxvar_Expression_expCref);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _constCrefs;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _constScalarCrefs;
          tmpMeta[0+1] = _constComplCrefs;
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
  _constScalarCrefsOut = tmpMeta[0+0];
  _constComplCrefsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_constComplCrefsOut) { *out_constComplCrefsOut = _constComplCrefsOut; }
  return _constScalarCrefsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_buildVariableFunctionParts(threadData_t *threadData, modelica_metatype _scalarOutputs, modelica_metatype _constComplexCrefs, modelica_metatype _varComplexCrefs, modelica_metatype _constScalarCrefs, modelica_metatype _varScalarCrefs, modelica_metatype _allOutputs, modelica_metatype _lhsExpIn, modelica_metatype *out_outputExpOut, modelica_metatype *out_varScalarCrefsInFunc)
{
  modelica_metatype _varOutputs = NULL;
  modelica_metatype _outputExpOut = NULL;
  modelica_metatype _varScalarCrefsInFunc = NULL;
  modelica_metatype _pos = NULL;
  modelica_metatype _lhsCref = NULL;
  modelica_metatype _outputExp = NULL;
  modelica_metatype _varScalarCrefs1 = NULL;
  modelica_metatype _outputCrefs = NULL;
  modelica_metatype _allOutputCrefs = NULL;
  modelica_metatype _allOutputCrefs2 = NULL;
  modelica_metatype _protCrefs = NULL;
  modelica_metatype _funcOutputs = NULL;
  modelica_metatype _funcProts = NULL;
  modelica_metatype _funcSOutputs = NULL;
  modelica_metatype _funcSProts = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _varScalarExps = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _varOutputs has no default value.
  // _outputExpOut has no default value.
  // _varScalarCrefsInFunc has no default value.
  // _pos has no default value.
  // _lhsCref has no default value.
  // _outputExp has no default value.
  // _varScalarCrefs1 has no default value.
  // _outputCrefs has no default value.
  // _allOutputCrefs has no default value.
  // _allOutputCrefs2 has no default value.
  // _protCrefs has no default value.
  // _funcOutputs has no default value.
  // _funcProts has no default value.
  // _funcSOutputs has no default value.
  // _funcSProts has no default value.
  // _expLst has no default value.
  // _varScalarExps has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;volatile modelica_metatype tmp4_5;
    tmp4_1 = _constComplexCrefs;
    tmp4_2 = _varComplexCrefs;
    tmp4_3 = _constScalarCrefs;
    tmp4_4 = _varScalarCrefs;
    tmp4_5 = _lhsExpIn;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,19,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _expLst = tmpMeta6;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _varScalarCrefsInFunc = tmpMeta7;

          _allOutputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

          _protCrefs = omc_List_intersection1OnTrue(threadData, _constComplexCrefs, _allOutputCrefs, boxvar_ComponentReferenceBasics_crefEqual ,NULL ,&_outputCrefs);

          _pos = omc_List_map1(threadData, _outputCrefs, boxvar_List_position, _allOutputCrefs);

          _varScalarExps = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _expLst);

          tmp9 = (modelica_boolean)omc_List_hasOneElement(threadData, _varScalarExps);
          if(tmp9)
          {
            tmpMeta10 = listHead(_varScalarExps);
          }
          else
          {
            tmpMeta8 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _varScalarExps);
            tmpMeta10 = tmpMeta8;
          }
          _outputExp = tmpMeta10;

          _funcOutputs = omc_List_map2(threadData, _outputCrefs, boxvar_EvaluateFunctions_generateOutputElements, _allOutputs, _lhsExpIn);

          _funcProts = omc_List_map2(threadData, _protCrefs, boxvar_EvaluateFunctions_generateProtectedElements, _allOutputs, _lhsExpIn);

          _varOutputs = listAppend(_funcOutputs, _funcProts);
          tmpMeta[0+0] = _varOutputs;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = _varScalarCrefsInFunc;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,9,3) == 0) goto tmp3_end;
          
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _lhsExpIn;
          tmpMeta[0+2] = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,19,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _expLst = tmpMeta13;
          /* Pattern matching succeeded */
          _allOutputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

          _allOutputCrefs2 = omc_List_map(threadData, _allOutputCrefs, boxvar_EvaluateFunctions_scalarRecCrefsForOneDimRec);

          omc_List_intersection1OnTrue(threadData, _allOutputCrefs, _allOutputCrefs2, boxvar_ComponentReferenceBasics_crefEqual ,NULL ,&_varScalarCrefsInFunc);

          _allOutputCrefs = _allOutputCrefs2;

          if(omc_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData, _allOutputCrefs, _constScalarCrefs))
          {
            if(omc_Flags_isSet(threadData, _OMC_LIT16))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT81),stdout);
            }

            goto goto_2;
          }

          _protCrefs = omc_List_intersection1OnTrue(threadData, listAppend(_constComplexCrefs, _constScalarCrefs), _allOutputCrefs, boxvar_ComponentReferenceBasics_crefEqual ,NULL ,&_outputCrefs);

          _funcOutputs = omc_List_map2(threadData, _outputCrefs, boxvar_EvaluateFunctions_generateOutputElements, _allOutputs, _lhsExpIn);

          _funcProts = omc_List_map2(threadData, _protCrefs, boxvar_EvaluateFunctions_generateProtectedElements, _allOutputs, _lhsExpIn);

          _varOutputs = listAppend(_funcOutputs, _funcProts);

          _pos = omc_List_map1(threadData, _outputCrefs, boxvar_List_position, _allOutputCrefs);

          _varScalarExps = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _expLst);

          _varScalarExps = omc_List_map(threadData, _varScalarExps, boxvar_EvaluateFunctions_scalarRecExpForOneDimRec);

          tmp15 = (modelica_boolean)omc_List_hasOneElement(threadData, _varScalarExps);
          if(tmp15)
          {
            tmpMeta16 = listHead(_varScalarExps);
          }
          else
          {
            tmpMeta14 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _varScalarExps);
            tmpMeta16 = tmpMeta14;
          }
          _outputExp = tmpMeta16;
          tmpMeta[0+0] = _varOutputs;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = _varScalarCrefsInFunc;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_5,19,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_5), 2));
          
          _expLst = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = listEmpty(omc_List_flatten(threadData, _scalarOutputs));
          if (1 /* true */ != tmp18) goto goto_2;

          /* Pattern-matching assignment */
          tmp19 = (!listEmpty(_constScalarCrefs));
          if (1 /* true */ != tmp19) goto goto_2;

          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          _varScalarCrefsInFunc = tmpMeta20;

          _allOutputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

          _protCrefs = omc_List_intersection1OnTrue(threadData, _constScalarCrefs, _allOutputCrefs, boxvar_ComponentReferenceBasics_crefEqual ,NULL ,&_outputCrefs);

          _pos = omc_List_map1(threadData, _outputCrefs, boxvar_List_position, _allOutputCrefs);

          _varScalarExps = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _expLst);

          tmp22 = (modelica_boolean)omc_List_hasOneElement(threadData, _varScalarExps);
          if(tmp22)
          {
            tmpMeta23 = listHead(_varScalarExps);
          }
          else
          {
            tmpMeta21 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _varScalarExps);
            tmpMeta23 = tmpMeta21;
          }
          _outputExp = tmpMeta23;

          _funcOutputs = omc_List_map2(threadData, _outputCrefs, boxvar_EvaluateFunctions_generateOutputElements, _allOutputs, _lhsExpIn);

          _funcProts = omc_List_map2(threadData, _protCrefs, boxvar_EvaluateFunctions_generateProtectedElements, _allOutputs, _lhsExpIn);

          _varOutputs = listAppend(_funcOutputs, _funcProts);
          tmpMeta[0+0] = _varOutputs;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = _varScalarCrefsInFunc;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (!listEmpty(tmp4_4)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lhsCref = omc_Expression_expCref(threadData, _lhsExpIn);

          _outputCrefs = omc_List_map(threadData, _constScalarCrefs, boxvar_ComponentReference_crefStripFirstIdent);

          _outputCrefs = omc_List_map1(threadData, _outputCrefs, boxvar_ComponentReference_joinCrefsR, _lhsCref);

          _expLst = omc_List_map(threadData, _outputCrefs, boxvar_Expression_crefExp);

          tmpMeta24 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst);
          _outputExp = tmpMeta24;
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = tmpMeta26;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_boolean tmp29;
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          _lhsCref = omc_Expression_expCref(threadData, _lhsExpIn);

          _allOutputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

          _funcOutputs = omc_List_map2(threadData, _varComplexCrefs, boxvar_EvaluateFunctions_generateOutputElements, _allOutputs, _lhsExpIn);

          _funcProts = omc_List_map2(threadData, _constComplexCrefs, boxvar_EvaluateFunctions_generateProtectedElements, _allOutputs, _lhsExpIn);

          _funcSOutputs = omc_List_map2(threadData, _varScalarCrefs, boxvar_EvaluateFunctions_generateOutputElements, _allOutputs, _lhsExpIn);

          _funcSProts = omc_List_map2(threadData, _constScalarCrefs, boxvar_EvaluateFunctions_generateProtectedElements, _allOutputs, _lhsExpIn);

          tmpMeta27 = mmc_mk_cons(_funcOutputs, mmc_mk_cons(_funcSOutputs, mmc_mk_cons(_funcProts, mmc_mk_cons(_funcSProts, MMC_REFSTRUCTLIT(mmc_nil)))));
          _varOutputs = omc_List_flatten(threadData, tmpMeta27);

          _varScalarCrefs1 = omc_List_map(threadData, _varScalarCrefs, boxvar_ComponentReference_crefStripFirstIdent);

          _varScalarCrefs1 = omc_List_map1(threadData, _varScalarCrefs1, boxvar_ComponentReference_joinCrefsR, _lhsCref);

          _varScalarExps = omc_List_map(threadData, _varScalarCrefs1, boxvar_Expression_crefExp);

          tmp29 = (modelica_boolean)omc_List_hasOneElement(threadData, _varScalarExps);
          if(tmp29)
          {
            tmpMeta30 = listHead(_varScalarExps);
          }
          else
          {
            tmpMeta28 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _varScalarExps);
            tmpMeta30 = tmpMeta28;
          }
          _outputExp = tmpMeta30;
          tmpMeta[0+0] = _varOutputs;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = _varScalarCrefs;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT82),stdout);

            tmpMeta31 = stringAppend(_OMC_LIT83,stringDelimitList(omc_List_map(threadData, omc_List_flatten(threadData, _scalarOutputs), boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT13));
            tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta32),stdout);

            tmpMeta33 = stringAppend(_OMC_LIT84,stringDelimitList(omc_List_map(threadData, _constScalarCrefs, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT13));
            tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta34),stdout);

            tmpMeta35 = stringAppend(_OMC_LIT85,omc_DAEDump_dumpElementsStr(threadData, _allOutputs));
            tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta36),stdout);

            tmpMeta37 = stringAppend(_OMC_LIT86,omc_ExpressionDump_dumpExpStr(threadData, _lhsExpIn, ((modelica_integer) 0)));
            tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta38),stdout);
          }
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
      if (++tmp4 < 7) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _varOutputs = tmpMeta[0+0];
  _outputExpOut = tmpMeta[0+1];
  _varScalarCrefsInFunc = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_outputExpOut) { *out_outputExpOut = _outputExpOut; }
  if (out_varScalarCrefsInFunc) { *out_varScalarCrefsInFunc = _varScalarCrefsInFunc; }
  return _varOutputs;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData_t *threadData, modelica_metatype _allOutputCrefsIn, modelica_metatype _constScalarCrefs)
{
  modelica_boolean _bOut;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bOut = 0 /* false */;
  {
    modelica_metatype _cref;
    for (tmpMeta1 = _allOutputCrefsIn; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _cref = MMC_CAR(tmpMeta1);
      if(omc_Types_isArray(threadData, omc_ComponentReference_crefType(threadData, _cref)))
      {
        if(omc_List_isMemberOnTrue(threadData, _cref, _constScalarCrefs, boxvar_ComponentReferenceBasics_crefEqualWithoutSubs))
        {
          _bOut = 1 /* true */;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData_t *threadData, modelica_metatype _allOutputCrefsIn, modelica_metatype _constScalarCrefs)
{
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  _bOut = omc_EvaluateFunctions_partiallyConstantArrayNeedsExpansion(threadData, _allOutputCrefsIn, _constScalarCrefs);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_scalarRecCrefsForOneDimRec(threadData_t *threadData, modelica_metatype _crefIn)
{
  modelica_metatype _crefOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _crefOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _crefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _crefs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          _crefs = omc_EvaluateFunctions_getRecordScalars(threadData, _crefIn);

          /* Pattern-matching assignment */
          tmp6 = (listLength(_crefs) == ((modelica_integer) 1));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = listHead(_crefs);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _crefIn;
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
  _crefOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _crefOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_scalarRecExpForOneDimRec(threadData_t *threadData, modelica_metatype _expIn)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _expIn;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _varLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _crefs has no default value.
      // _varLst has no default value.
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
          modelica_boolean tmp10;
          modelica_boolean tmp11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,9,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,3,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          
          _cref = tmpMeta6;
          _varLst = tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (listLength(_varLst) == ((modelica_integer) 1));
          if (1 /* true */ != tmp10) goto goto_2;

          _crefs = omc_EvaluateFunctions_getRecordScalars(threadData, _cref);

          /* Pattern-matching assignment */
          tmp11 = (listLength(_crefs) == ((modelica_integer) 1));
          if (1 /* true */ != tmp11) goto goto_2;

          _cref = listHead(_crefs);
          tmpMeta1 = omc_Expression_crefExp(threadData, _cref);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _expIn;
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
  _expOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _expOut;
}

DLLDirection
modelica_metatype omc_EvaluateFunctions_getCrefsForRecord(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _es = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _es has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _crefs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _crefs has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _cref = tmpMeta6;
          /* Pattern matching succeeded */
          _crefs = omc_ComponentReference_expandCref(threadData, _cref, 1 /* true */);
          tmpMeta1 = omc_List_map(threadData, _crefs, boxvar_Expression_crefExp);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _es = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _es;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_setRecordTypes(threadData_t *threadData, modelica_metatype _inExp)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inExp;
    {
      modelica_metatype _cref = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _ty = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
      // _exp1 has no default value.
      // _expLst has no default value.
      // _ty has no default value.
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
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          
          _expLst = tmpMeta6;
          _ty = tmpMeta8;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp9 = omc_Expression_isCall(threadData, _inExp);
          if (1 /* true */ != tmp9) goto goto_2;

          /* Pattern-matching assignment */
          tmp10 = (listLength(_expLst) == ((modelica_integer) 1));
          if (1 /* true */ != tmp10) goto goto_2;

          _exp1 = listHead(_expLst);

          _cref = omc_Expression_expCref(threadData, _exp1);
          tmpMeta1 = omc_Expression_makeCrefExp(threadData, _cref, _ty);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _expLst = tmpMeta11;
          /* Pattern matching succeeded */
          _expLst = omc_List_map(threadData, _expLst, boxvar_EvaluateFunctions_setRecordTypes);
          tmpMeta12 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _expLst);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inExp;
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
  _outExp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outExp;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasReinitFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn)
{
  modelica_boolean _bOut;
  modelica_metatype _bLst = NULL;
  modelica_metatype _stmtLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  // _bLst has no default value.
  // _stmtLst has no default value.
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
          _stmtLst = omc_DAEUtil_getStatement(threadData, _stmt);

          _bLst = omc_List_map(threadData, _stmtLst, boxvar_DAEUtil_isStmtReturn);

          _bOut = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_bIn)));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _bOut = 0 /* false */;
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
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasReinitFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn)
{
  modelica_integer tmp1;
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  tmp1 = mmc_unbox_integer(_bIn);
  _bOut = omc_EvaluateFunctions_hasReinitFold(threadData, _stmt, tmp1);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasReturnFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn)
{
  modelica_boolean _bOut;
  modelica_metatype _bLst = NULL;
  modelica_metatype _stmtLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  // _bLst has no default value.
  // _stmtLst has no default value.
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
          _stmtLst = omc_DAEUtil_getStatement(threadData, _stmt);

          _bLst = omc_List_map(threadData, _stmtLst, boxvar_DAEUtil_isStmtReturn);

          _bOut = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_bIn)));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _bOut = 0 /* false */;
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
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasReturnFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn)
{
  modelica_integer tmp1;
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  tmp1 = mmc_unbox_integer(_bIn);
  _bOut = omc_EvaluateFunctions_hasReturnFold(threadData, _stmt, tmp1);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasAssertFold(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _bIn)
{
  modelica_boolean _bOut;
  modelica_metatype _bLst = NULL;
  modelica_metatype _stmtLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  // _bLst has no default value.
  // _stmtLst has no default value.
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
          _stmtLst = omc_DAEUtil_getStatement(threadData, _stmt);

          _bLst = omc_List_map(threadData, _stmtLst, boxvar_DAEUtil_isStmtAssert);

          _bOut = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_bIn)));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _bOut = 0 /* false */;
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
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasAssertFold(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _bIn)
{
  modelica_integer tmp1;
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  tmp1 = mmc_unbox_integer(_bIn);
  _bOut = omc_EvaluateFunctions_hasAssertFold(threadData, _stmt, tmp1);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandComplexElementsToCrefs(threadData_t *threadData, modelica_metatype _e)
{
  modelica_metatype _eLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eLst has no default value.
  { /* matchcontinue expression */
    {
      modelica_metatype _cref = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _cref has no default value.
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
          tmp6 = omc_EvaluateFunctions_isNotComplexVar(threadData, _e);
          if (0 /* false */ != tmp6) goto goto_2;
          tmpMeta1 = omc_EvaluateFunctions_getScalarsForComplexVar(threadData, _e);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          _cref = omc_DAEUtil_varCref(threadData, _e);
          tmpMeta7 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta7;
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
  _eLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_expandComplexExpressions(threadData_t *threadData, modelica_metatype _e, modelica_metatype _funcs)
{
  modelica_metatype _eLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eLst has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _func = NULL;
      modelica_metatype _lst = NULL;
      modelica_metatype _elements = NULL;
      modelica_metatype _allOutputs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _func has no default value.
      // _lst has no default value.
      // _elements has no default value.
      // _allOutputs has no default value.
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _path = tmpMeta6;
          _lst = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta8 = omc_AvlTreePathFunction_get(threadData, _funcs, _path);
          if (optionNone(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          _func = tmpMeta9;

          _elements = omc_DAEUtil_getFunctionElements(threadData, _func);

          if(listEmpty(_elements))
          {
          }
          else
          {
            /* Pattern-matching assignment */
            tmpMeta10 = omc_AvlTreePathFunction_get(threadData, _funcs, _path);
            if (optionNone(tmpMeta10)) goto goto_2;
            tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
            _func = tmpMeta11;

            _elements = omc_DAEUtil_getFunctionElements(threadData, _func);

            _allOutputs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isOutputVar);

            _lst = omc_List_map(threadData, omc_List_flatten(threadData, omc_List_map(threadData, _allOutputs, boxvar_EvaluateFunctions_getScalarsForComplexVar)), boxvar_Expression_crefExp);
          }
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp12;
          
          /* Pattern matching succeeded */
          _lst = omc_Expression_getComplexContents(threadData, _e);

          /* Pattern-matching assignment */
          tmp12 = listEmpty(_lst);
          if (0 /* false */ != tmp12) goto goto_2;
          tmpMeta1 = _lst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(_e, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta13;
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
  _eLst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eLst;
}

static modelica_metatype closure2_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_element, modelica_metatype $in_funcTree, modelica_metatype $in_repl, modelica_metatype $in_idx, modelica_metatype tmp29, modelica_metatype tmp30, modelica_metatype tmp31)
{
  modelica_metatype recursionLimit = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_EvaluateFunctions_evaluateFunctions__updateAlgElements(thData, $in_element, $in_funcTree, $in_repl, $in_idx, recursionLimit, tmp29, tmp30, tmp31);
}
DLLDirection
modelica_metatype omc_EvaluateFunctions_evaluateConstantFunction(threadData_t *threadData, modelica_metatype _rhsExpIn, modelica_metatype _lhsExpIn, modelica_metatype _funcsIn, modelica_integer _eqIdx, modelica_metatype _callSignLstIn, modelica_integer _recursionLimit, modelica_metatype *out_lhsExpOut, modelica_metatype *out_addedEquations, modelica_metatype *out_funcsOut, modelica_integer *out_eqIdxOut, modelica_boolean *out_changed, modelica_metatype *out_callSignLstOut)
{
  modelica_metatype _rhsExpOut = NULL;
  modelica_metatype _lhsExpOut = NULL;
  modelica_metatype _addedEquations = NULL;
  modelica_metatype _funcsOut = NULL;
  modelica_integer _eqIdxOut;
  modelica_boolean _changed;
  modelica_metatype _callSignLstOut = NULL;
  modelica_boolean _funcIsConst;
  modelica_boolean _funcIsPartConst;
  modelica_boolean _isConstRec;
  modelica_boolean _hasAssert;
  modelica_boolean _hasReturn;
  modelica_boolean _hasTerminate;
  modelica_boolean _hasReinit;
  modelica_boolean _abort;
  modelica_boolean _isUnknownType;
  modelica_boolean _isNDimArray;
  modelica_integer _idx;
  modelica_metatype _path = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _attr1 = NULL;
  modelica_metatype _attr2 = NULL;
  modelica_metatype _exp = NULL;
  modelica_metatype _outputExp = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype _funcs = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _singleOutputType = NULL;
  modelica_metatype _constEqs = NULL;
  modelica_metatype _outputCrefs = NULL;
  modelica_metatype _allInputCrefs = NULL;
  modelica_metatype _allOutputCrefs = NULL;
  modelica_metatype _constInputCrefs = NULL;
  modelica_metatype _constCrefs = NULL;
  modelica_metatype _varScalarCrefsInFunc = NULL;
  modelica_metatype _constScalarCrefsLhs = NULL;
  modelica_metatype _constComplexCrefs = NULL;
  modelica_metatype _varComplexCrefs = NULL;
  modelica_metatype _varScalarCrefs = NULL;
  modelica_metatype _constScalarCrefs = NULL;
  modelica_metatype _elements = NULL;
  modelica_metatype _algs = NULL;
  modelica_metatype _allInputs = NULL;
  modelica_metatype _protectVars = NULL;
  modelica_metatype _allOutputs = NULL;
  modelica_metatype _updatedVarOutputs = NULL;
  modelica_metatype _newOutputVars = NULL;
  modelica_metatype _exps = NULL;
  modelica_metatype _expsIn = NULL;
  modelica_metatype _allInputExps = NULL;
  modelica_metatype _constInputExps = NULL;
  modelica_metatype _constExps = NULL;
  modelica_metatype _constComplexExps = NULL;
  modelica_metatype _constScalarExps = NULL;
  modelica_metatype _lhsExps = NULL;
  modelica_metatype _sub = NULL;
  modelica_metatype _scalarExp = NULL;
  modelica_metatype _outputVarTypes = NULL;
  modelica_metatype _outputVarNames = NULL;
  modelica_metatype _scalarInputs = NULL;
  modelica_metatype _scalarOutputs = NULL;
  modelica_metatype _signature = NULL;
  modelica_metatype _callSignLst = NULL;
  modelica_boolean _continueEval;
  modelica_boolean tmp1;
  modelica_integer tmp2_c4 __attribute__((unused)) = 0;
  modelica_boolean tmp2_c5 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[7] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rhsExpOut has no default value.
  // _lhsExpOut has no default value.
  // _addedEquations has no default value.
  // _funcsOut has no default value.
  // _eqIdxOut has no default value.
  // _changed has no default value.
  // _callSignLstOut has no default value.
  // _funcIsConst has no default value.
  // _funcIsPartConst has no default value.
  // _isConstRec has no default value.
  // _hasAssert has no default value.
  // _hasReturn has no default value.
  // _hasTerminate has no default value.
  // _hasReinit has no default value.
  // _abort has no default value.
  // _isUnknownType has no default value.
  // _isNDimArray has no default value.
  // _idx has no default value.
  // _path has no default value.
  // _repl has no default value.
  // _attr1 has no default value.
  // _attr2 has no default value.
  // _exp has no default value.
  // _outputExp has no default value.
  // _func has no default value.
  // _funcs has no default value.
  // _ty has no default value.
  // _singleOutputType has no default value.
  // _constEqs has no default value.
  // _outputCrefs has no default value.
  // _allInputCrefs has no default value.
  // _allOutputCrefs has no default value.
  // _constInputCrefs has no default value.
  // _constCrefs has no default value.
  // _varScalarCrefsInFunc has no default value.
  // _constScalarCrefsLhs has no default value.
  // _constComplexCrefs has no default value.
  // _varComplexCrefs has no default value.
  // _varScalarCrefs has no default value.
  // _constScalarCrefs has no default value.
  // _elements has no default value.
  // _algs has no default value.
  // _allInputs has no default value.
  // _protectVars has no default value.
  // _allOutputs has no default value.
  // _updatedVarOutputs has no default value.
  // _newOutputVars has no default value.
  // _exps has no default value.
  // _expsIn has no default value.
  // _allInputExps has no default value.
  // _constInputExps has no default value.
  // _constExps has no default value.
  // _constComplexExps has no default value.
  // _constScalarExps has no default value.
  // _lhsExps has no default value.
  // _sub has no default value.
  // _scalarExp has no default value.
  // _outputVarTypes has no default value.
  // _outputVarNames has no default value.
  // _scalarInputs has no default value.
  // _scalarOutputs has no default value.
  // _signature has no default value.
  // _callSignLst has no default value.
  // _continueEval has no default value.
  /* Pattern-matching assignment */
  tmp1 = (_recursionLimit > ((modelica_integer) 0));
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  
  
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp5_1;volatile modelica_metatype tmp5_2;
    tmp5_1 = _rhsExpIn;
    tmp5_2 = _callSignLstIn;
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 3; tmp5++) {
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
          modelica_boolean tmp16;
          modelica_boolean tmp17;
          modelica_boolean tmp18;
          modelica_boolean tmp19;
          modelica_boolean tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_boolean tmp38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_boolean tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_boolean tmp48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_boolean tmp55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_boolean tmp58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,13,3) == 0) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 4));
          
          _path = tmpMeta7;
          _expsIn = tmpMeta8;
          _attr1 = tmpMeta9;
          _callSignLst = tmp5_2;
          tmp5 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta10 = stringAppend(_OMC_LIT87,omc_ExpressionBasics_printExpStr(threadData, _lhsExpIn));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT88);
            tmpMeta12 = stringAppend(tmpMeta11,omc_ExpressionBasics_printExpStr(threadData, _rhsExpIn));
            tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT52);
            fputs(MMC_STRINGDATA(tmpMeta13),stdout);
          }

          _continueEval = omc_EvaluateFunctions_checkCallSignatureForExp(threadData, _rhsExpIn, _callSignLst);

          _isUnknownType = omc_EvaluateFunctions_hasUnknownType(threadData, _lhsExpIn);

          _isNDimArray = omc_EvaluateFunctions_hasMultipleArrayDimensions(threadData, _lhsExpIn);

          if(((!_continueEval) && omc_Flags_isSet(threadData, _OMC_LIT16)))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT89),stdout);
          }

          if((((!_continueEval) || _isUnknownType) || _isNDimArray))
          {
            goto goto_3;
          }

          /* Pattern-matching assignment */
          tmpMeta14 = omc_AvlTreePathFunction_get(threadData, _funcsIn, _path);
          if (optionNone(tmpMeta14)) goto goto_3;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          _func = tmpMeta15;

          /* Pattern-matching assignment */
          tmp16 = omc_EvaluateFunctions_doNotInline(threadData, _func);
          if (0 /* false */ != tmp16) goto goto_3;

          _elements = omc_DAEUtil_getFunctionElements(threadData, _func);

          _protectVars = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isProtectedVar);

          _algs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isAlgorithm);

          if((omc_Flags_isSet(threadData, _OMC_LIT16) && listEmpty(_elements)))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT91),stdout);

            /* Pattern-matching assignment */
            tmp17 = 1 /* true */;
            if (0 /* false */ != tmp17) goto goto_3;
          }
          else
          {
            if((omc_Flags_isSet(threadData, _OMC_LIT16) && (listEmpty(_protectVars) && listEmpty(_algs))))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT90),stdout);

              /* Pattern-matching assignment */
              tmp18 = 1 /* true */;
              if (0 /* false */ != tmp18) goto goto_3;
            }
          }

          /* Pattern-matching assignment */
          tmp19 = listEmpty(_elements);
          if (0 /* false */ != tmp19) goto goto_3;

          /* Pattern-matching assignment */
          tmp20 = listEmpty(_algs);
          if (0 /* false */ != tmp20) goto goto_3;

          {
            modelica_metatype __omcQ_24tmpVar33;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar32;
            modelica_integer tmp24;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _expsIn;
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar33 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar33;
            while(1) {
              tmp24 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp24--;
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar32 = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _e, _funcsIn, 0 /* false */, ((modelica_integer) -1) + _recursionLimit);
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar32,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_3;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar33;
          }
          _exps = tmpMeta21;

          _scalarExp = omc_List_map1(threadData, _exps, boxvar_EvaluateFunctions_expandComplexExpressions, _funcsIn);

          _allInputExps = omc_List_flatten(threadData, _scalarExp);

          _allInputs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isInputVar);

          _scalarInputs = omc_List_map(threadData, _allInputs, boxvar_EvaluateFunctions_expandComplexElementsToCrefs);

          _allInputCrefs = omc_List_flatten(threadData, _scalarInputs);

          _allOutputs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isOutputVar);

          _outputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

          _scalarOutputs = omc_List_map(threadData, _allOutputs, boxvar_EvaluateFunctions_getScalarsForComplexVar);

          _allOutputCrefs = listAppend(_outputCrefs, omc_List_flatten(threadData, _scalarOutputs));

          _constInputExps = omc_List_filterOnTrueSync(threadData, _allInputExps, boxvar_Expression_isConst, _allInputCrefs ,&_constInputCrefs);

          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          _repl = omc_BackendVarTransform_addReplacements(threadData, _repl, _constInputCrefs, _constInputExps, mmc_mk_none());

          _hasAssert = mmc_unbox_boolean(omc_List_fold(threadData, _algs, boxvar_EvaluateFunctions_hasAssertFold, mmc_mk_boolean(0 /* false */)));

          _hasReturn = mmc_unbox_boolean(omc_List_fold(threadData, _algs, boxvar_EvaluateFunctions_hasReturnFold, mmc_mk_boolean(0 /* false */)));

          _hasTerminate = mmc_unbox_boolean(omc_List_fold(threadData, _algs, boxvar_EvaluateFunctions_hasReturnFold, mmc_mk_boolean(0 /* false */)));

          _hasReinit = mmc_unbox_boolean(omc_List_fold(threadData, _algs, boxvar_EvaluateFunctions_hasReinitFold, mmc_mk_boolean(0 /* false */)));

          _abort = ((_hasReturn || _hasTerminate) || _hasReinit);

          /* Pattern-matching tuple assignment */
          tmpMeta32 = mmc_mk_box1(0, mmc_mk_integer(((modelica_integer) -1) + _recursionLimit));
          tmpMeta33 = omc_List_mapFold3(threadData, _algs, (modelica_fnptr) mmc_mk_box2(0,closure2_EvaluateFunctions_evaluateFunctions__updateAlgElements,tmpMeta32), _funcsIn, _repl, mmc_mk_integer(_eqIdx), &tmpMeta25, &tmpMeta26, &tmpMeta27);
          _algs = tmpMeta33;
          tmp28 = mmc_unbox_integer(tmpMeta27);
          _funcs = tmpMeta25;
          _repl = tmpMeta26;
          _idx = tmp28  /* pattern as ty=Integer */;

          _constCrefs = omc_BackendVarTransform_getAllReplacements(threadData, _repl ,&_constExps);

          _constCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _allOutputCrefs, _constExps ,&_constExps);

          _constExps = omc_List_filterOnTrueSync(threadData, _constExps, boxvar_Expression_isConst, _constCrefs ,&_constCrefs);

          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          _constComplexCrefs = omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData, _allOutputs, _constCrefs, tmpMeta34, tmpMeta35, tmpMeta36, tmpMeta37 ,&_varComplexCrefs ,&_constScalarCrefs ,&_varScalarCrefs);

          _constScalarCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _constScalarCrefs, _constExps ,&_constScalarExps);

          _constComplexCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _constComplexCrefs, _constExps ,&_constComplexExps);

          _funcIsConst = ((listEmpty(_varScalarCrefs) && listEmpty(_varComplexCrefs)) && ((!listEmpty(_constScalarCrefs)) || (!listEmpty(_constComplexCrefs))));

          _funcIsPartConst = ((((!listEmpty(_varScalarCrefs)) || (!listEmpty(_varComplexCrefs))) && ((!listEmpty(_constScalarCrefs)) || (!listEmpty(_constComplexCrefs)))) && (!_funcIsConst));

          _isConstRec = ((((listLength(_constScalarCrefs) == listLength(omc_List_flatten(threadData, _scalarOutputs))) && listEmpty(_varScalarCrefs)) && listEmpty(_varComplexCrefs)) && listEmpty(_constComplexCrefs));

          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            if(_funcIsConst)
            {
              if(_hasAssert)
              {
                fputs(MMC_STRINGDATA(_OMC_LIT94),stdout);
              }
              else
              {
                fputs(MMC_STRINGDATA(_OMC_LIT93),stdout);
              }
            }
            else
            {
              if((!_funcIsPartConst))
              {
                fputs(MMC_STRINGDATA(_OMC_LIT92),stdout);
              }
            }

            if(_abort)
            {
              fputs(MMC_STRINGDATA(_OMC_LIT95),stdout);
            }
          }

          _funcIsConst = (((_hasAssert && _funcIsConst) || _abort)?0 /* false */:_funcIsConst);

          _funcIsPartConst = ((_hasAssert && _funcIsConst)?1 /* true */:_funcIsPartConst);

          _funcIsPartConst = (_abort?0 /* false */:_funcIsPartConst);

          /* Pattern-matching assignment */
          tmp38 = (_funcIsPartConst || _funcIsConst);
          if (1 /* true */ != tmp38) goto goto_3;

          _signature = omc_EvaluateFunctions_getCallSignatureForCall(threadData, _rhsExpIn);

          tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_signature), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[4] = mmc_mk_boolean(1 /* true */);
          _signature = tmpMeta39;

          tmpMeta40 = mmc_mk_cons(_signature, _callSignLst);
          _callSignLst = tmpMeta40;

          _changed = (_funcIsPartConst || _funcIsConst);

          _updatedVarOutputs = omc_EvaluateFunctions_buildVariableFunctionParts(threadData, _scalarOutputs, _constComplexCrefs, _varComplexCrefs, _constScalarCrefs, _varScalarCrefs, _allOutputs, _lhsExpIn ,&_outputExp ,&_varScalarCrefsInFunc);

          _constScalarCrefsLhs = omc_EvaluateFunctions_buildConstFunctionCrefs(threadData, _constScalarCrefs, _constComplexCrefs, _allOutputCrefs, _lhsExpIn ,&_constComplexCrefs);

          if((!_funcIsConst))
          {
            tmpMeta41 = mmc_mk_box2(0, _varScalarCrefsInFunc, _algs);
            tmpMeta42 = mmc_mk_box5(0, _constScalarCrefs, _constScalarExps, _constComplexCrefs, _constComplexExps, _constScalarCrefsLhs);
            _algs = omc_EvaluateFunctions_buildPartialFunction(threadData, tmpMeta41, tmpMeta42, _repl ,&_constEqs);
          }
          else
          {
            tmpMeta43 = MMC_REFSTRUCTLIT(mmc_nil);
            _constEqs = tmpMeta43;
          }

          _elements = listAppend(_protectVars, _algs);

          _elements = listAppend(_updatedVarOutputs, _elements);

          _elements = listAppend(_allInputs, _elements);

          _elements = omc_List_unique(threadData, _elements);

          _func = omc_EvaluateFunctions_updateFunctionBody(threadData, _func, _elements, _idx, _updatedVarOutputs, _allOutputs ,&_path);

          tmp45 = (modelica_boolean)_funcIsPartConst;
          if(tmp45)
          {
            tmpMeta44 = mmc_mk_cons(_func, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta46 = omc_AvlTreePathFunction_addDaeFunction(threadData, tmpMeta44, _funcs);
          }
          else
          {
            tmpMeta46 = _funcs;
          }
          _funcs = tmpMeta46;

          _idx = ((_funcIsPartConst || _funcIsConst)?((modelica_integer) 1) + _idx:_idx);

          _outputExp = (_funcIsPartConst?_outputExp:_lhsExpIn);

          _lhsExps = omc_EvaluateFunctions_getCrefsForRecord(threadData, _lhsExpIn);

          tmp48 = (modelica_boolean)_isConstRec;
          if(tmp48)
          {
            tmpMeta47 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _lhsExps);
            tmpMeta49 = tmpMeta47;
          }
          else
          {
            tmpMeta49 = _outputExp;
          }
          _outputExp = tmpMeta49;

          _newOutputVars = omc_List_filterOnTrue(threadData, _updatedVarOutputs, boxvar_DAEUtil_isOutputVar);

          _outputVarTypes = omc_List_map(threadData, _newOutputVars, boxvar_DAEUtil_getVariableType);

          _outputVarNames = omc_List_map(threadData, _newOutputVars, boxvar_DAEUtil_varName);

          tmpMeta50 = mmc_mk_box3(17, &DAE_Type_T__TUPLE__desc, _outputVarTypes, mmc_mk_some(_outputVarNames));
          _attr2 = omc_DAEUtil_replaceCallAttrType(threadData, _attr1, tmpMeta50);

          /* Pattern-matching assignment */
          tmpMeta51 = _attr1;
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
          _singleOutputType = tmpMeta52;

          _singleOutputType = ((!listEmpty(_newOutputVars))?listHead(_outputVarTypes):_singleOutputType);

          _attr1 = omc_DAEUtil_replaceCallAttrType(threadData, _attr1, _singleOutputType);

          _attr2 = ((listLength(_newOutputVars) == ((modelica_integer) 1))?_attr1:_attr2);

          if((omc_List_hasOneElement(threadData, listAppend(_constComplexExps, _constScalarExps)) && _funcIsConst))
          {
            _exp = listHead(listAppend(_constComplexExps, _constScalarExps));
          }
          else
          {
            if((_funcIsConst && (!omc_List_hasOneElement(threadData, listAppend(_constComplexExps, _constScalarExps)))))
            {
              tmpMeta53 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, listAppend(_constComplexExps, _constScalarExps));
              _exp = tmpMeta53;
            }
            else
            {
              _exp = _rhsExpIn;
            }
          }

          tmp55 = (modelica_boolean)_funcIsPartConst;
          if(tmp55)
          {
            tmpMeta54 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _expsIn, _attr2);
            tmpMeta56 = tmpMeta54;
          }
          else
          {
            tmpMeta56 = _exp;
          }
          _exp = tmpMeta56;

          tmp58 = (modelica_boolean)_isConstRec;
          if(tmp58)
          {
            tmpMeta57 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _constScalarExps);
            tmpMeta59 = tmpMeta57;
          }
          else
          {
            tmpMeta59 = _exp;
          }
          _exp = tmpMeta59;

          _outputExp = omc_EvaluateFunctions_setRecordTypes(threadData, _outputExp);

          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta60 = stringAppend(_OMC_LIT96,omc_ExpressionBasics_printExpStr(threadData, _lhsExpIn));
            tmpMeta61 = stringAppend(tmpMeta60,_OMC_LIT88);
            tmpMeta62 = stringAppend(tmpMeta61,omc_ExpressionBasics_printExpStr(threadData, _rhsExpIn));
            tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT97);
            tmpMeta64 = stringAppend(tmpMeta63,omc_ExpressionBasics_printExpStr(threadData, _outputExp));
            tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT88);
            tmpMeta66 = stringAppend(tmpMeta65,omc_ExpressionBasics_printExpStr(threadData, _exp));
            tmpMeta67 = stringAppend(tmpMeta66,_OMC_LIT13);
            fputs(MMC_STRINGDATA(tmpMeta67),stdout);

            if((!listEmpty(_constEqs)))
            {
              omc_BackendDump_dumpEquationList(threadData, _constEqs, _OMC_LIT98);
            }
          }
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _outputExp;
          tmpMeta[0+2] = _constEqs;
          tmpMeta[0+3] = _funcs;
          tmp2_c4 = _idx;
          tmp2_c5 = _changed;
          tmpMeta[0+6] = _callSignLst;
          goto tmp4_done;
        }
        case 1: {
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          if (mmc__uniontype__metarecord__typedef__equal(tmp5_1,21,2) == 0) goto tmp4_end;
          tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,13,3) == 0) goto tmp4_end;
          tmpMeta69 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 2));
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 3));
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 4));
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 3));
          
          _path = tmpMeta69;
          _exps = tmpMeta70;
          _attr1 = tmpMeta71;
          _sub = tmpMeta72;
          _callSignLst = tmp5_2;
          /* Pattern matching succeeded */
          tmpMeta73 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _exps, _attr1);
          _exp = tmpMeta73;

          _continueEval = omc_EvaluateFunctions_checkCallSignatureForExp(threadData, _exp, _callSignLst);

          if(((!_continueEval) && omc_Flags_isSet(threadData, _OMC_LIT16)))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT89),stdout);
          }

          if((!_continueEval))
          {
            goto goto_3;
          }

          _exp = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _exp, _funcsIn, 0 /* false */, _recursionLimit);

          tmpMeta74 = mmc_mk_box3(24, &DAE_Exp_ASUB__desc, _exp, _sub);
          _exp = omc_ExpressionSimplify_simplify(threadData, tmpMeta74, NULL);

          _changed = 1 /* true */;

          if((!omc_Expression_isConst(threadData, _exp)))
          {
            _exp = _rhsExpIn;

            _changed = 0 /* false */;
          }
          tmpMeta75 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _exp;
          tmpMeta[0+1] = _lhsExpIn;
          tmpMeta[0+2] = tmpMeta75;
          tmpMeta[0+3] = _funcsIn;
          tmp2_c4 = _eqIdx;
          tmp2_c5 = _changed;
          tmpMeta[0+6] = _callSignLst;
          goto tmp4_done;
        }
        case 2: {
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          
          /* Pattern matching succeeded */
          _callSignLst = _callSignLstIn;

          if(omc_Expression_isCall(threadData, _rhsExpIn))
          {
            _signature = omc_EvaluateFunctions_getCallSignatureForCall(threadData, _rhsExpIn);

            tmpMeta76 = MMC_TAGPTR(mmc_alloc_words(5));
            memcpy(MMC_UNTAGPTR(tmpMeta76), MMC_UNTAGPTR(_signature), 5*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta76))[4] = mmc_mk_boolean(0 /* false */);
            _signature = tmpMeta76;

            if((!omc_List_isMemberOnTrue(threadData, _signature, _callSignLstIn, boxvar_EvaluateFunctions_callSignatureIsEqual)))
            {
              tmpMeta77 = mmc_mk_cons(_signature, _callSignLst);
              _callSignLst = tmpMeta77;
            }
          }
          tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _rhsExpIn;
          tmpMeta[0+1] = _lhsExpIn;
          tmpMeta[0+2] = tmpMeta78;
          tmpMeta[0+3] = _funcsIn;
          tmp2_c4 = _eqIdx;
          tmp2_c5 = 0 /* false */;
          tmpMeta[0+6] = _callSignLst;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      tmp4_done:
      (void)tmp5;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp4_done2;
      goto_3:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp5 < 3) {
        goto tmp4_top;
      }
      MMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  _rhsExpOut = tmpMeta[0+0];
  _lhsExpOut = tmpMeta[0+1];
  _addedEquations = tmpMeta[0+2];
  _funcsOut = tmpMeta[0+3];
  _eqIdxOut = tmp2_c4;
  _changed = tmp2_c5;
  _callSignLstOut = tmpMeta[0+6];
  _return: OMC_LABEL_UNUSED
  if (out_lhsExpOut) { *out_lhsExpOut = _lhsExpOut; }
  if (out_addedEquations) { *out_addedEquations = _addedEquations; }
  if (out_funcsOut) { *out_funcsOut = _funcsOut; }
  if (out_eqIdxOut) { *out_eqIdxOut = _eqIdxOut; }
  if (out_changed) { *out_changed = _changed; }
  if (out_callSignLstOut) { *out_callSignLstOut = _callSignLstOut; }
  return _rhsExpOut;
}
modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunction(threadData_t *threadData, modelica_metatype _rhsExpIn, modelica_metatype _lhsExpIn, modelica_metatype _funcsIn, modelica_metatype _eqIdx, modelica_metatype _callSignLstIn, modelica_metatype _recursionLimit, modelica_metatype *out_lhsExpOut, modelica_metatype *out_addedEquations, modelica_metatype *out_funcsOut, modelica_metatype *out_eqIdxOut, modelica_metatype *out_changed, modelica_metatype *out_callSignLstOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _eqIdxOut;
  modelica_boolean _changed;
  modelica_metatype _rhsExpOut = NULL;
  tmp1 = mmc_unbox_integer(_eqIdx);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _rhsExpOut = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _rhsExpIn, _lhsExpIn, _funcsIn, tmp1, _callSignLstIn, tmp2, out_lhsExpOut, out_addedEquations, out_funcsOut, &_eqIdxOut, &_changed, out_callSignLstOut);
  /* skip box _rhsExpOut; DAE.Exp */
  /* skip box _lhsExpOut; DAE.Exp */
  /* skip box _addedEquations; list<BackendDAE.Equation> */
  /* skip box _funcsOut; AvlTreePathFunction.Tree */
  if (out_eqIdxOut) { *out_eqIdxOut = mmc_mk_icon(_eqIdxOut); }
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  /* skip box _callSignLstOut; list<EvaluateFunctions.CallSignature> */
  return _rhsExpOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_doNotInline(threadData_t *threadData, modelica_metatype _func)
{
  modelica_boolean _dontInline;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dontInline has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _func;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,10) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,4,0) == 0) goto tmp3_end;
          
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
  _dontInline = tmp1;
  _return: OMC_LABEL_UNUSED
  return _dontInline;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_doNotInline(threadData_t *threadData, modelica_metatype _func)
{
  modelica_boolean _dontInline;
  modelica_metatype out_dontInline;
  _dontInline = omc_EvaluateFunctions_doNotInline(threadData, _func);
  out_dontInline = mmc_mk_icon(_dontInline);
  return out_dontInline;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasMultipleArrayDimensions(threadData_t *threadData, modelica_metatype _eIn)
{
  modelica_boolean _bOut;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eIn;
    {
      modelica_boolean _b;
      modelica_metatype _ty = NULL;
      modelica_metatype _eLst = NULL;
      int tmp4;
      // _b has no default value.
      // _ty has no default value.
      // _eLst has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 22: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eLst = tmpMeta5;
          /* Pattern matching succeeded */
          tmp1 = omc_List_any(threadData, _eLst, boxvar_EvaluateFunctions_hasMultipleArrayDimensions);
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _ty = tmpMeta6;
          /* Pattern matching succeeded */
          if(omc_Types_isArray(threadData, _ty))
          {
            _b = (((modelica_integer) 1) != listLength(omc_Types_getDimensionSizes(threadData, _ty)));
          }
          else
          {
            _b = 0 /* false */;
          }
          tmp1 = _b;
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
  _bOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasMultipleArrayDimensions(threadData_t *threadData, modelica_metatype _eIn)
{
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  _bOut = omc_EvaluateFunctions_hasMultipleArrayDimensions(threadData, _eIn);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_hasUnknownType(threadData_t *threadData, modelica_metatype _eIn)
{
  modelica_boolean _bOut;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _bOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _eIn;
    {
      modelica_metatype _eLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,19,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eLst = tmpMeta6;
          /* Pattern matching succeeded */
          tmp1 = omc_List_any(threadData, _eLst, boxvar_EvaluateFunctions_hasUnknownType);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,8,0) == 0) goto tmp3_end;
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
  _bOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _bOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_hasUnknownType(threadData_t *threadData, modelica_metatype _eIn)
{
  modelica_boolean _bOut;
  modelica_metatype out_bOut;
  _bOut = omc_EvaluateFunctions_hasUnknownType(threadData, _eIn);
  out_bOut = mmc_mk_icon(_bOut);
  return out_bOut;
}

static modelica_metatype closure3_EvaluateFunctions_evaluateFunctions__updateAlgElements(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_element, modelica_metatype $in_funcTree, modelica_metatype $in_repl, modelica_metatype $in_idx, modelica_metatype tmp19, modelica_metatype tmp20, modelica_metatype tmp21)
{
  modelica_metatype recursionLimit = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_EvaluateFunctions_evaluateFunctions__updateAlgElements(thData, $in_element, $in_funcTree, $in_repl, $in_idx, recursionLimit, tmp19, tmp20, tmp21);
}
DLLDirection
modelica_metatype omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _funcsIn, modelica_boolean _evalConstArgsOnly, modelica_integer _recursionLimit)
{
  modelica_metatype _expOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _expOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _expIn;
    {
      modelica_metatype _path = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _attr1 = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _func = NULL;
      modelica_metatype _allInputCrefs = NULL;
      modelica_metatype _outputCrefs = NULL;
      modelica_metatype _allOutputCrefs = NULL;
      modelica_metatype _constInputCrefs = NULL;
      modelica_metatype _constCrefs = NULL;
      modelica_metatype _constComplexCrefs = NULL;
      modelica_metatype _varScalarCrefs = NULL;
      modelica_metatype _constScalarCrefs = NULL;
      modelica_metatype _scalarInputs = NULL;
      modelica_metatype _scalarOutputs = NULL;
      modelica_metatype _elements = NULL;
      modelica_metatype _protectVars = NULL;
      modelica_metatype _algs = NULL;
      modelica_metatype _allInputs = NULL;
      modelica_metatype _allOutputs = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _exps0 = NULL;
      modelica_metatype _allInputExps = NULL;
      modelica_metatype _constInputExps = NULL;
      modelica_metatype _constExps = NULL;
      modelica_metatype _constComplexExps = NULL;
      modelica_metatype _constScalarExps = NULL;
      modelica_metatype _sub = NULL;
      modelica_metatype _scalarExp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _path has no default value.
      // _repl has no default value.
      // _attr1 has no default value.
      // _exp has no default value.
      // _func has no default value.
      // _allInputCrefs has no default value.
      // _outputCrefs has no default value.
      // _allOutputCrefs has no default value.
      // _constInputCrefs has no default value.
      // _constCrefs has no default value.
      // _constComplexCrefs has no default value.
      // _varScalarCrefs has no default value.
      // _constScalarCrefs has no default value.
      // _scalarInputs has no default value.
      // _scalarOutputs has no default value.
      // _elements has no default value.
      // _protectVars has no default value.
      // _algs has no default value.
      // _allInputs has no default value.
      // _allOutputs has no default value.
      // _exps has no default value.
      // _exps0 has no default value.
      // _allInputExps has no default value.
      // _constInputExps has no default value.
      // _constExps has no default value.
      // _constComplexExps has no default value.
      // _constScalarExps has no default value.
      // _sub has no default value.
      // _scalarExp has no default value.
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
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _path = tmpMeta6;
          _exps0 = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta8 = stringAppend(_OMC_LIT99,omc_ExpressionBasics_printExpStr(threadData, _expIn));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT52);
            fputs(MMC_STRINGDATA(tmpMeta9),stdout);
          }

          if(_evalConstArgsOnly)
          {
            /* Pattern-matching assignment */
            tmp10 = omc_Expression_isConstWorkList(threadData, _exps0);
            if (1 /* true */ != tmp10) goto goto_2;
          }

          /* Pattern-matching assignment */
          tmpMeta11 = omc_AvlTreePathFunction_get(threadData, _funcsIn, _path);
          if (optionNone(tmpMeta11)) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          _func = tmpMeta12;

          /* Pattern-matching assignment */
          tmp13 = omc_DAEUtil_isExtFunction(threadData, _func);
          if (0 /* false */ != tmp13) goto goto_2;

          _elements = omc_DAEUtil_getFunctionElements(threadData, _func);

          {
            modelica_metatype __omcQ_24tmpVar35;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar34;
            modelica_integer tmp17;
            modelica_metatype _e_loopVar = 0;
            modelica_metatype _e;
            _e_loopVar = _exps0;
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar35 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar35;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_e_loopVar)) {
                _e = MMC_CAR(_e_loopVar);
                _e_loopVar = MMC_CDR(_e_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar34 = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _e, _funcsIn, _evalConstArgsOnly, _recursionLimit);
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
          _exps = tmpMeta14;

          _scalarExp = omc_List_map1(threadData, _exps, boxvar_EvaluateFunctions_expandComplexExpressions, _funcsIn);

          _allInputExps = omc_List_flatten(threadData, _scalarExp);

          if((listEmpty(_elements) && omc_DAEUtil_funcIsRecord(threadData, _func)))
          {
            tmpMeta18 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _allInputExps);
            _expOut = tmpMeta18;

            if(omc_Flags_isSet(threadData, _OMC_LIT16))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT100),stdout);
            }
          }
          else
          {
            _allInputs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isInputVar);

            _scalarInputs = omc_List_map(threadData, _allInputs, boxvar_EvaluateFunctions_expandComplexElementsToCrefs);

            _allInputCrefs = omc_List_flatten(threadData, _scalarInputs);

            _protectVars = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isProtectedVar);

            _algs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isAlgorithm);

            _algs = listAppend(_protectVars, _algs);

            _allOutputs = omc_List_filterOnTrue(threadData, _elements, boxvar_DAEUtil_isOutputVar);

            _outputCrefs = omc_List_map(threadData, _allOutputs, boxvar_DAEUtil_varCref);

            _scalarOutputs = omc_List_map(threadData, _allOutputs, boxvar_EvaluateFunctions_getScalarsForComplexVar);

            _allOutputCrefs = listAppend(_outputCrefs, omc_List_flatten(threadData, _scalarOutputs));

            _constInputExps = omc_List_filterOnTrueSync(threadData, _allInputExps, boxvar_Expression_isConst, _allInputCrefs ,&_constInputCrefs);

            _repl = omc_BackendVarTransform_emptyReplacements(threadData);

            _repl = omc_BackendVarTransform_addReplacements(threadData, _repl, _constInputCrefs, _constInputExps, mmc_mk_none());

            tmpMeta22 = mmc_mk_box1(0, mmc_mk_integer(_recursionLimit));
            _algs = omc_List_mapFold3(threadData, _algs, (modelica_fnptr) mmc_mk_box2(0,closure3_EvaluateFunctions_evaluateFunctions__updateAlgElements,tmpMeta22), _funcsIn, _repl, mmc_mk_integer(((modelica_integer) 1)) ,NULL ,&_repl ,NULL);

            _constCrefs = omc_BackendVarTransform_getAllReplacements(threadData, _repl ,&_constExps);

            _constCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _allOutputCrefs, _constExps ,&_constExps);

            _constExps = omc_List_filterOnTrueSync(threadData, _constExps, boxvar_Expression_isConst, _constCrefs ,&_constCrefs);

            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
            _constComplexCrefs = omc_EvaluateFunctions_checkIfOutputIsEvaluatedConstant(threadData, _allOutputs, _constCrefs, tmpMeta23, tmpMeta24, tmpMeta25, tmpMeta26 ,NULL ,&_constScalarCrefs ,&_varScalarCrefs);

            _constScalarExps = omc_List_map1r(threadData, _constScalarCrefs, boxvar_BackendVarTransform_getReplacement, _repl);

            _constComplexExps = omc_List_map1r(threadData, _constComplexCrefs, boxvar_BackendVarTransform_getReplacement, _repl);

            _constScalarCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _constScalarCrefs, _constExps ,&_constScalarExps);

            _constComplexCrefs = omc_List_filter1OnTrueSync(threadData, _constCrefs, boxvar_ComponentReferenceBasics_crefInLst, _constComplexCrefs, _constExps ,&_constComplexExps);

            if(((listEmpty(_varScalarCrefs) && listEmpty(_constComplexCrefs)) && (!listEmpty(_constScalarExps))))
            {
              if((listLength(_constScalarCrefs) == ((modelica_integer) 1)))
              {
                _expOut = listHead(_constScalarExps);
              }
              else
              {
                tmpMeta27 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _constScalarExps);
                _expOut = tmpMeta27;
              }
            }
            else
            {
              if(((listEmpty(_varScalarCrefs) && listEmpty(_constScalarCrefs)) && (!listEmpty(_constComplexExps))))
              {
                if((listLength(_constComplexCrefs) == ((modelica_integer) 1)))
                {
                  _expOut = listHead(_constComplexExps);
                }
                else
                {
                  tmpMeta28 = mmc_mk_box2(22, &DAE_Exp_TUPLE__desc, _constComplexExps);
                  _expOut = tmpMeta28;
                }
              }
              else
              {
                _expOut = _expIn;
              }
            }
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            tmpMeta29 = stringAppend(_OMC_LIT101,omc_ExpressionBasics_printExpStr(threadData, _expOut));
            tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT52);
            fputs(MMC_STRINGDATA(tmpMeta30),stdout);
          }
          tmpMeta1 = _expOut;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,21,2) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,13,3) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 4));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _path = tmpMeta32;
          _exps = tmpMeta33;
          _attr1 = tmpMeta34;
          _sub = tmpMeta35;
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_box4(16, &DAE_Exp_CALL__desc, _path, _exps, _attr1);
          _exp = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, tmpMeta36, _funcsIn, _evalConstArgsOnly, _recursionLimit);

          tmpMeta37 = mmc_mk_box3(24, &DAE_Exp_ASUB__desc, _exp, _sub);
          _exp = omc_ExpressionSimplify_simplify(threadData, tmpMeta37, NULL);

          if((!omc_Expression_isConst(threadData, _exp)))
          {
            _exp = _expIn;
          }
          tmpMeta1 = _exp;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _expIn;
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
  _expOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _expOut;
}
modelica_metatype boxptr_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _funcsIn, modelica_metatype _evalConstArgsOnly, modelica_metatype _recursionLimit)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _expOut = NULL;
  tmp1 = mmc_unbox_integer(_evalConstArgsOnly);
  tmp2 = mmc_unbox_integer(_recursionLimit);
  _expOut = omc_EvaluateFunctions_evaluateConstantFunctionCallExp(threadData, _expIn, _funcsIn, tmp1, tmp2);
  /* skip box _expOut; DAE.Exp */
  return _expOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evalFunctions__findFuncs(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqIn, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype __omcQ_24in_5FaddEqs, modelica_integer __omcQ_24in_5Fidx, modelica_boolean __omcQ_24in_5Fchanged, modelica_metatype __omcQ_24in_5FcallSign, modelica_integer _recursionLimit, modelica_metatype *out_shared, modelica_metatype *out_addEqs, modelica_integer *out_idx, modelica_boolean *out_changed, modelica_metatype *out_callSign)
{
  modelica_metatype _eqIn = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _addEqs = NULL;
  modelica_integer _idx;
  modelica_boolean _changed;
  modelica_metatype _callSign = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _eqIn = __omcQ_24in_5FeqIn;
  _shared = __omcQ_24in_5Fshared;
  _addEqs = __omcQ_24in_5FaddEqs;
  _idx = __omcQ_24in_5Fidx;
  _changed = __omcQ_24in_5Fchanged;
  _callSign = __omcQ_24in_5FcallSign;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp6_1;
    tmp6_1 = _eqIn;
    {
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_boolean _changed1;
      modelica_metatype _eq = NULL;
      modelica_metatype _attr = NULL;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _lhsExp = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _rhsExp = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _source = NULL;
      modelica_metatype _funcs = NULL;
      modelica_metatype _addEqs1 = NULL;
      modelica_metatype _addEqs2 = NULL;
      volatile mmc_switch_type tmp6;
      int tmp7;
      // _b1 has no default value.
      // _b2 has no default value.
      // _changed1 has no default value.
      // _eq has no default value.
      // _attr has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      tmpMeta3 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(((modelica_integer) 0)));
      _lhsExp = tmpMeta3;
      tmpMeta4 = mmc_mk_box2(3, &DAE_Exp_ICONST__desc, mmc_mk_integer(((modelica_integer) 0)));
      _rhsExp = tmpMeta4;
      // _source has no default value.
      // _funcs has no default value.
      // _addEqs1 has no default value.
      // _addEqs2 has no default value.
      tmp6 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp5_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp6 < 4; tmp6++) {
        switch (MMC_SWITCH_CAST(tmp6)) {
        case 0: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_boolean tmp12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,4) == 0) goto tmp5_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
          _exp1 = tmpMeta8;
          _exp2 = tmpMeta9;
          _source = tmpMeta10;
          _attr = tmpMeta11;
          tmp6 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _b1 = omc_Expression_containFunctioncall(threadData, _exp1);

          _b2 = omc_Expression_containFunctioncall(threadData, _exp2);

          /* Pattern-matching assignment */
          tmp12 = (_b1 || _b2);
          if (1 /* true */ != tmp12) goto goto_2;

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _shared);

          if(_b1)
          {
            _rhsExp = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _exp1, _exp2, _funcs, _idx, _callSign, _recursionLimit ,&_lhsExp ,&_addEqs1 ,&_funcs ,&_idx ,&_changed1 ,&_callSign);

            _changed = (_changed || _changed1);

            _addEqs = listAppend(_addEqs1, _addEqs);
          }

          if(_b2)
          {
            _rhsExp = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _exp2, _exp1, _funcs, _idx, _callSign, _recursionLimit ,&_lhsExp ,&_addEqs2 ,&_funcs ,&_idx ,&_changed1 ,&_callSign);

            _changed = (_changed || _changed1);

            _addEqs = listAppend(_addEqs2, _addEqs);
          }

          _eq = omc_BackendEquation_generateEquation(threadData, _lhsExp, _rhsExp, _source, _attr);

          _idx = ((modelica_integer) 1) + _idx;
          tmpMeta1 = _eq;
          goto tmp5_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,1,6) == 0) goto tmp5_end;
          
          tmp6 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT16))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT102),stdout);
          }
          tmpMeta1 = _eqIn;
          goto tmp5_done;
        }
        case 2: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,6,5) == 0) goto tmp5_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 6));
          _exp1 = tmpMeta13;
          _exp2 = tmpMeta14;
          _source = tmpMeta15;
          _attr = tmpMeta16;
          /* Pattern matching succeeded */
          _b1 = omc_Expression_containFunctioncall(threadData, _exp1);

          _b2 = omc_Expression_containFunctioncall(threadData, _exp2);

          /* Pattern-matching assignment */
          tmp17 = (_b1 || _b2);
          if (1 /* true */ != tmp17) goto goto_2;

          _funcs = omc_BackendDAEUtil_getFunctions(threadData, _shared);

          if(_b1)
          {
            _rhsExp = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _exp1, _exp2, _funcs, _idx, _callSign, _recursionLimit ,&_lhsExp ,&_addEqs1 ,&_funcs ,&_idx ,&_changed1 ,&_callSign);

            _changed = (_changed || _changed1);

            _addEqs = listAppend(_addEqs1, _addEqs);
          }

          if(_b2)
          {
            _rhsExp = omc_EvaluateFunctions_evaluateConstantFunction(threadData, _exp2, _exp1, _funcs, _idx, _callSign, _recursionLimit ,&_lhsExp ,&_addEqs1 ,&_funcs ,&_idx ,&_changed1 ,&_callSign);

            _changed = (_changed || _changed1);

            _addEqs = listAppend(_addEqs1, _addEqs);
          }

          _shared = omc_BackendDAEUtil_setSharedFunctionTree(threadData, _shared, _funcs);

          _eq = omc_BackendEquation_generateEquation(threadData, _lhsExp, _rhsExp, _source, _attr);

          _eq = omc_EvaluateFunctions_convertTupleEquations(threadData, _eq, _addEqs ,&_addEqs);

          _idx = ((modelica_integer) 1) + _idx;
          tmpMeta1 = _eq;
          goto tmp5_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _eqIn;
          goto tmp5_done;
        }
        }
        goto tmp5_end;
        tmp5_end: ;
      }
      goto goto_2;
      tmp5_done:
      (void)tmp6;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp5_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp6 < 4) {
        goto tmp5_top;
      }
      MMC_THROW_INTERNAL();
      tmp5_done2:;
    }
  }
  _eqIn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_shared) { *out_shared = _shared; }
  if (out_addEqs) { *out_addEqs = _addEqs; }
  if (out_idx) { *out_idx = _idx; }
  if (out_changed) { *out_changed = _changed; }
  if (out_callSign) { *out_callSign = _callSign; }
  return _eqIn;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_evalFunctions__findFuncs(threadData_t *threadData, modelica_metatype __omcQ_24in_5FeqIn, modelica_metatype __omcQ_24in_5Fshared, modelica_metatype __omcQ_24in_5FaddEqs, modelica_metatype __omcQ_24in_5Fidx, modelica_metatype __omcQ_24in_5Fchanged, modelica_metatype __omcQ_24in_5FcallSign, modelica_metatype _recursionLimit, modelica_metatype *out_shared, modelica_metatype *out_addEqs, modelica_metatype *out_idx, modelica_metatype *out_changed, modelica_metatype *out_callSign)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _idx;
  modelica_boolean _changed;
  modelica_metatype _eqIn = NULL;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fidx);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Fchanged);
  tmp3 = mmc_unbox_integer(_recursionLimit);
  _eqIn = omc_EvaluateFunctions_evalFunctions__findFuncs(threadData, __omcQ_24in_5FeqIn, __omcQ_24in_5Fshared, __omcQ_24in_5FaddEqs, tmp1, tmp2, __omcQ_24in_5FcallSign, tmp3, out_shared, out_addEqs, &_idx, &_changed, out_callSign);
  /* skip box _eqIn; BackendDAE.Equation */
  /* skip box _shared; BackendDAE.Shared */
  /* skip box _addEqs; list<BackendDAE.Equation> */
  if (out_idx) { *out_idx = mmc_mk_icon(_idx); }
  if (out_changed) { *out_changed = mmc_mk_icon(_changed); }
  /* skip box _callSign; list<EvaluateFunctions.CallSignature> */
  return _eqIn;
}

static modelica_metatype closure4_EvaluateFunctions_evalFunctions__findFuncs(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_eqIn, modelica_metatype $in_shared, modelica_metatype $in_addEqs, modelica_metatype $in_idx, modelica_metatype $in_changed, modelica_metatype $in_callSign, modelica_metatype tmp15, modelica_metatype tmp16, modelica_metatype tmp17, modelica_metatype tmp18, modelica_metatype tmp19)
{
  modelica_metatype recursionLimit = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_EvaluateFunctions_evalFunctions__findFuncs(thData, $in_eqIn, $in_shared, $in_addEqs, $in_idx, $in_changed, $in_callSign, recursionLimit, tmp15, tmp16, tmp17, tmp18, tmp19);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_evalFunctions__main(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _eqSysOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_boolean _changed;
  modelica_integer _sysIdx;
  modelica_metatype _sharedIn = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _eqLst = NULL;
  modelica_metatype _addEqs = NULL;
  modelica_metatype _callSign = NULL;
  modelica_integer _recursion_limit;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSysOut has no default value.
  // _tplOut has no default value.
  // _changed has no default value.
  // _sysIdx has no default value.
  // _sharedIn has no default value.
  // _shared has no default value.
  // _eqs has no default value.
  // _eqLst has no default value.
  // _addEqs has no default value.
  // _callSign has no default value.
  // _recursion_limit has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  _sharedIn = tmpMeta2;
  _sysIdx = tmp4  /* pattern as ty=Integer */;
  _changed = tmp6  /* pattern as ty=Boolean */;
  _callSign = tmpMeta7;

  /* Pattern-matching assignment */
  tmpMeta8 = _eqSysIn;
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
  _eqs = tmpMeta9;

  _eqLst = omc_BackendEquation_equationList(threadData, _eqs);

  _recursion_limit = omc_Flags_getConfigInt(threadData, _OMC_LIT107);

  /* Pattern-matching tuple assignment */
  tmpMeta20 = mmc_mk_box1(0, mmc_mk_integer(_recursion_limit));
  tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta22 = omc_List_mapFold5(threadData, _eqLst, (modelica_fnptr) mmc_mk_box2(0,closure4_EvaluateFunctions_evalFunctions__findFuncs,tmpMeta20), _sharedIn, tmpMeta21, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_boolean(_changed), _callSign, &tmpMeta10, &tmpMeta11, NULL, &tmpMeta12, &tmpMeta14);
  _eqLst = tmpMeta22;
  tmp13 = mmc_unbox_integer(tmpMeta12);
  _shared = tmpMeta10;
  _addEqs = tmpMeta11;
  _changed = tmp13  /* pattern as ty=Boolean */;
  _callSign = tmpMeta14;

  _eqs = omc_BackendEquation_listEquation(threadData, listAppend(_eqLst, _addEqs));

  _eqSysOut = omc_BackendDAEUtil_setEqSystEqs(threadData, _eqSysIn, _eqs);

  tmpMeta23 = mmc_mk_box4(0, _shared, mmc_mk_integer(((modelica_integer) 1) + _sysIdx), mmc_mk_boolean(_changed), _callSign);
  _tplOut = tmpMeta23;
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _eqSysOut;
}

DLLDirection
modelica_metatype omc_EvaluateFunctions_evalFunctions(threadData_t *threadData, modelica_metatype _inDAE)
{
  modelica_metatype _outDAE = NULL;
  modelica_boolean _changed;
  modelica_metatype _eqSysts = NULL;
  modelica_metatype _shared = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outDAE has no default value.
  // _changed has no default value.
  // _eqSysts has no default value.
  // _shared has no default value.
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
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _inDAE;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          _eqSysts = tmpMeta6;
          _shared = tmpMeta7;

          /* Pattern-matching tuple assignment */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = mmc_mk_box4(0, _shared, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_boolean(0 /* false */), tmpMeta12);
          tmpMeta14 = omc_List_mapFold(threadData, _eqSysts, boxvar_EvaluateFunctions_evalFunctions__main, tmpMeta13, &tmpMeta8);
          _eqSysts = tmpMeta14;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _shared = tmpMeta9;
          _changed = tmp11  /* pattern as ty=Boolean */;

          if(_changed)
          {
            tmpMeta15 = mmc_mk_box3(3, &BackendDAE_BackendDAE_DAE__desc, _eqSysts, _shared);
            _outDAE = omc_EvaluateFunctions_updateVarKinds(threadData, omc_RemoveSimpleEquations_fastAcausal(threadData, tmpMeta15));
          }
          else
          {
            _outDAE = _inDAE;
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _outDAE = _inDAE;
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
  return _outDAE;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getVariabilityForExp(threadData_t *threadData, modelica_metatype _expIn)
{
  modelica_metatype _variOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _variOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _expIn;
    {
      modelica_metatype _vari = NULL;
      int tmp4;
      // _vari has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT108;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 17: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 18: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 20: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 21: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 22: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 23: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 24: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 25: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 26: {
          
          /* Pattern matching succeeded */
          if(omc_Expression_isConst(threadData, _expIn))
          {
            _vari = _OMC_LIT108;
          }
          else
          {
            _vari = _OMC_LIT109;
          }
          tmpMeta1 = _vari;
          goto tmp3_done;
        }
        case 27: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 28: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 29: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        case 30: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT109;
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
  _variOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _variOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_EvaluateFunctions_getCallSignatureForCall(threadData_t *threadData, modelica_metatype _callExpIn)
{
  modelica_metatype _signatureOut = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _expLst = NULL;
  modelica_metatype _vari = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _signatureOut has no default value.
  // _path has no default value.
  // _expLst has no default value.
  // _vari has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _callExpIn;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,13,3) == 0) goto goto_1;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          _path = tmpMeta6;
          _expLst = tmpMeta7;

          _vari = omc_List_map(threadData, _expLst, boxvar_EvaluateFunctions_getVariabilityForExp);

          tmpMeta8 = mmc_mk_box4(3, &EvaluateFunctions_CallSignature_SIGNATURE__desc, _path, _vari, mmc_mk_boolean(1 /* true */));
          _signatureOut = tmpMeta8;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT110,omc_ExpressionBasics_printExpStr(threadData, _callExpIn));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT13);
          fputs(MMC_STRINGDATA(tmpMeta10),stdout);

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
  return _signatureOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_VariabilityIsEqual(threadData_t *threadData, modelica_metatype _vari1, modelica_metatype _vari2)
{
  modelica_boolean _isEqual;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _vari1;
    tmp4_2 = _vari2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,0) == 0) goto tmp3_end;
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
  _isEqual = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_VariabilityIsEqual(threadData_t *threadData, modelica_metatype _vari1, modelica_metatype _vari2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_EvaluateFunctions_VariabilityIsEqual(threadData, _vari1, _vari2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_callSignatureIsEqual(threadData_t *threadData, modelica_metatype _signat1, modelica_metatype _signat2)
{
  modelica_boolean _isEqual;
  modelica_metatype _path1 = NULL;
  modelica_metatype _path2 = NULL;
  modelica_metatype _vari1 = NULL;
  modelica_metatype _vari2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqual has no default value.
  // _path1 has no default value.
  // _path2 has no default value.
  // _vari1 has no default value.
  // _vari2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _signat1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _path1 = tmpMeta2;
  _vari1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _signat2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  _path2 = tmpMeta5;
  _vari2 = tmpMeta6;

  _isEqual = 0 /* false */;

  if(omc_AbsynUtil_pathEqual(threadData, _path1, _path2))
  {
    if(omc_List_isEqualOnTrue(threadData, _vari1, _vari2, boxvar_EvaluateFunctions_VariabilityIsEqual))
    {
      _isEqual = 1 /* true */;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _isEqual;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_callSignatureIsEqual(threadData_t *threadData, modelica_metatype _signat1, modelica_metatype _signat2)
{
  modelica_boolean _isEqual;
  modelica_metatype out_isEqual;
  _isEqual = omc_EvaluateFunctions_callSignatureIsEqual(threadData, _signat1, _signat2);
  out_isEqual = mmc_mk_icon(_isEqual);
  return out_isEqual;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_VariabilityString(threadData_t *threadData, modelica_metatype _var)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT111;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT112;
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

PROTECTED_FUNCTION_STATIC modelica_string omc_EvaluateFunctions_callSignatureStr(threadData_t *threadData, modelica_metatype _signat)
{
  modelica_string _str = NULL;
  modelica_metatype _path = NULL;
  modelica_metatype _varis = NULL;
  modelica_boolean _b;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _path has no default value.
  // _varis has no default value.
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _signat;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _path = tmpMeta2;
  _varis = tmpMeta3;
  _b = tmp5  /* pattern as ty=Boolean */;

  tmpMeta6 = stringAppend(omc_AbsynUtil_pathString(threadData, _path, _OMC_LIT113, 1 /* true */, 0 /* false */),_OMC_LIT114);
  tmpMeta7 = stringAppend(tmpMeta6,stringDelimitList(omc_List_map(threadData, _varis, boxvar_EvaluateFunctions_VariabilityString), _OMC_LIT115));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT116);
  tmpMeta9 = stringAppend(tmpMeta8,(_b?_OMC_LIT36:_OMC_LIT37));
  _str = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_EvaluateFunctions_checkCallSignatureForExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _signLst)
{
  modelica_boolean _continueEval;
  modelica_metatype _signature = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _continueEval has no default value.
  // _signature has no default value.
  _continueEval = 1 /* true */;

  _signature = omc_EvaluateFunctions_getCallSignatureForCall(threadData, _expIn);

  if(omc_List_isMemberOnTrue(threadData, _signature, _signLst, boxvar_EvaluateFunctions_callSignatureIsEqual))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = omc_List_getMemberOnTrue(threadData, _signature, _signLst, boxvar_EvaluateFunctions_callSignatureIsEqual);
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
    tmp3 = mmc_unbox_integer(tmpMeta2);
    _continueEval = tmp3  /* pattern as ty=Boolean */;
  }
  _return: OMC_LABEL_UNUSED
  return _continueEval;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_EvaluateFunctions_checkCallSignatureForExp(threadData_t *threadData, modelica_metatype _expIn, modelica_metatype _signLst)
{
  modelica_boolean _continueEval;
  modelica_metatype out_continueEval;
  _continueEval = omc_EvaluateFunctions_checkCallSignatureForExp(threadData, _expIn, _signLst);
  out_continueEval = mmc_mk_icon(_continueEval);
  return out_continueEval;
}

